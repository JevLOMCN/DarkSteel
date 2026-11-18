// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 40

// FPointFacade @ 14da64050

FPointFacade * __thiscall
PV::Facades::FPointFacade::FPointFacade(FPointFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FPointFacade *pFVar4;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FValueType *pFVar8;
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
  
  this->_padding_ = (longlong)&___7FPointFacade_Facades_PV__6B_;
  pFVar8 = (FValueType *)0x0;
  (this->Positions).ConstCollection = param_1;
  (this->Positions).Collection = param_1;
  (this->Positions).Name = AttributeNames::PointPosition;
  (this->Positions).Group = GroupNames::PointGroup;
  (this->Positions).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Positions).DefaultGroupDependency.Number = 0;
  local_160 = AttributeNames::PointPosition;
  local_158 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_160);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->Positions).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  (this->Positions).ConstAttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  (this->LengthFromRoot).ConstCollection = param_1;
  (this->LengthFromRoot).Collection = param_1;
  (this->LengthFromRoot).Name = AttributeNames::LengthFromRoot;
  (this->LengthFromRoot).Group = GroupNames::PointGroup;
  (this->LengthFromRoot).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LengthFromRoot).DefaultGroupDependency.Number = 0;
  local_150 = AttributeNames::LengthFromRoot;
  local_148 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_150);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->LengthFromRoot).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->LengthFromRoot).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->PointScaleGradient).ConstCollection = param_1;
  (this->PointScaleGradient).Collection = param_1;
  (this->PointScaleGradient).Name = AttributeNames::PointScaleGradient;
  (this->PointScaleGradient).Group = GroupNames::PointGroup;
  (this->PointScaleGradient).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointScaleGradient).DefaultGroupDependency.Number = 0;
  local_140 = AttributeNames::PointScaleGradient;
  local_138 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_140);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->PointScaleGradient).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->PointScaleGradient).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->HullGradient).ConstCollection = param_1;
  (this->HullGradient).Collection = param_1;
  (this->HullGradient).Name = AttributeNames::HullGradient;
  (this->HullGradient).Group = GroupNames::PointGroup;
  (this->HullGradient).DefaultGroupDependency.ComparisonIndex = 0;
  (this->HullGradient).DefaultGroupDependency.Number = 0;
  local_130 = AttributeNames::HullGradient;
  local_128 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_130);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->HullGradient).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->HullGradient).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->MainTrunkGradient).ConstCollection = param_1;
  (this->MainTrunkGradient).Collection = param_1;
  (this->MainTrunkGradient).Name = AttributeNames::MainTrunkGradient;
  (this->MainTrunkGradient).Group = GroupNames::PointGroup;
  (this->MainTrunkGradient).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MainTrunkGradient).DefaultGroupDependency.Number = 0;
  local_120 = AttributeNames::MainTrunkGradient;
  local_118 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_120);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->MainTrunkGradient).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->MainTrunkGradient).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->GroundGradient).ConstCollection = param_1;
  (this->GroundGradient).Collection = param_1;
  (this->GroundGradient).Name = AttributeNames::GroundGradient;
  (this->GroundGradient).Group = GroupNames::PointGroup;
  (this->GroundGradient).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GroundGradient).DefaultGroupDependency.Number = 0;
  local_110 = AttributeNames::GroundGradient;
  local_108 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_110);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->GroundGradient).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->GroundGradient).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->PointScale).ConstCollection = param_1;
  (this->PointScale).Collection = param_1;
  (this->PointScale).Name = AttributeNames::PointScale;
  (this->PointScale).Group = GroupNames::PointGroup;
  (this->PointScale).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointScale).DefaultGroupDependency.Number = 0;
  local_100 = AttributeNames::PointScale;
  local_f8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_100);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->PointScale).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->PointScale).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->BudDirections).ConstCollection = param_1;
  (this->BudDirections).Collection = param_1;
  (this->BudDirections).Name = AttributeNames::BudDirection;
  (this->BudDirections).Group = GroupNames::PointGroup;
  (this->BudDirections).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudDirections).DefaultGroupDependency.Number = 0;
  local_f0 = AttributeNames::BudDirection;
  local_e8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_f0);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFVectorArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BudDirections).AttributeArray =
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  (this->BudDirections).ConstAttributeArray =
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  (this->BranchGradients).ConstCollection = param_1;
  (this->BranchGradients).Collection = param_1;
  (this->BranchGradients).Name = AttributeNames::BranchGradient;
  (this->BranchGradients).Group = GroupNames::PointGroup;
  (this->BranchGradients).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchGradients).DefaultGroupDependency.Number = 0;
  local_e0 = AttributeNames::BranchGradient;
  local_d8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_e0);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BranchGradients).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->BranchGradients).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->BudHormoneLevels).ConstCollection = param_1;
  (this->BudHormoneLevels).Collection = param_1;
  (this->BudHormoneLevels).Name = AttributeNames::BudHormoneLevels;
  (this->BudHormoneLevels).Group = GroupNames::PointGroup;
  (this->BudHormoneLevels).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudHormoneLevels).DefaultGroupDependency.Number = 0;
  local_d0 = AttributeNames::BudHormoneLevels;
  local_c8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_d0);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BudHormoneLevels).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  (this->BudHormoneLevels).ConstAttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  (this->PlantGradients).ConstCollection = param_1;
  (this->PlantGradients).Collection = param_1;
  (this->PlantGradients).Name = AttributeNames::PlantGradient;
  (this->PlantGradients).Group = GroupNames::PointGroup;
  (this->PlantGradients).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PlantGradients).DefaultGroupDependency.Number = 0;
  local_c0 = AttributeNames::PlantGradient;
  local_b8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_c0);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->PlantGradients).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->PlantGradients).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->LengthFromSeed).ConstCollection = param_1;
  (this->LengthFromSeed).Collection = param_1;
  (this->LengthFromSeed).Name = AttributeNames::LengthFromSeed;
  (this->LengthFromSeed).Group = GroupNames::PointGroup;
  (this->LengthFromSeed).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LengthFromSeed).DefaultGroupDependency.Number = 0;
  local_b0 = AttributeNames::LengthFromSeed;
  local_a8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b0);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->LengthFromSeed).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->LengthFromSeed).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->BudNumber).ConstCollection = param_1;
  (this->BudNumber).Collection = param_1;
  (this->BudNumber).Name = AttributeNames::BudNumber;
  (this->BudNumber).Group = GroupNames::PointGroup;
  (this->BudNumber).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudNumber).DefaultGroupDependency.Number = 0;
  local_a0 = AttributeNames::BudNumber;
  local_98 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BudNumber).AttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BudNumber).ConstAttributeArray = (TManagedArray<int> *)pFVar6;
  (this->NjordPixelIndex).ConstCollection = param_1;
  (this->NjordPixelIndex).Collection = param_1;
  (this->NjordPixelIndex).Name = AttributeNames::NjordPixelIndex;
  (this->NjordPixelIndex).Group = GroupNames::PointGroup;
  (this->NjordPixelIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NjordPixelIndex).DefaultGroupDependency.Number = 0;
  local_90 = AttributeNames::NjordPixelIndex;
  local_88 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->NjordPixelIndex).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->NjordPixelIndex).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->BudLightDetected).ConstCollection = param_1;
  (this->BudLightDetected).Collection = param_1;
  (this->BudLightDetected).Name = AttributeNames::BudLightDetected;
  (this->BudLightDetected).Group = GroupNames::PointGroup;
  (this->BudLightDetected).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudLightDetected).DefaultGroupDependency.Number = 0;
  local_80 = AttributeNames::BudLightDetected;
  local_78 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BudLightDetected).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  (this->BudLightDetected).ConstAttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  (this->BudDevelopment).ConstCollection = param_1;
  (this->BudDevelopment).Collection = param_1;
  (this->BudDevelopment).Name = AttributeNames::BudDevelopment;
  (this->BudDevelopment).Group = GroupNames::PointGroup;
  (this->BudDevelopment).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudDevelopment).DefaultGroupDependency.Number = 0;
  local_70 = AttributeNames::BudDevelopment;
  local_68 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FInt32ArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BudDevelopment).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  (this->BudDevelopment).ConstAttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar6;
  (this->TextureCoordV).ConstCollection = param_1;
  (this->TextureCoordV).Collection = param_1;
  (this->TextureCoordV).Name = AttributeNames::TextureCoordV;
  (this->TextureCoordV).Group = GroupNames::PointGroup;
  (this->TextureCoordV).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TextureCoordV).DefaultGroupDependency.Number = 0;
  local_60 = AttributeNames::TextureCoordV;
  local_58 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->TextureCoordV).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->TextureCoordV).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  (this->TextureCoordUOffset).ConstCollection = param_1;
  (this->TextureCoordUOffset).Collection = param_1;
  (this->TextureCoordUOffset).Name = AttributeNames::TextureCoordUOffset;
  (this->TextureCoordUOffset).Group = GroupNames::PointGroup;
  (this->TextureCoordUOffset).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TextureCoordUOffset).DefaultGroupDependency.Number = 0;
  local_50 = AttributeNames::TextureCoordUOffset;
  local_48 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar8 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar8 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPointFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar8->GroupIndexDependency).Number = 1;
  }
  (this->TextureCoordUOffset).AttributeArray = (TManagedArray<float> *)pFVar8;
  (this->TextureCoordUOffset).ConstAttributeArray = (TManagedArray<float> *)pFVar8;
  (this->URange).ConstCollection = param_1;
  (this->URange).Collection = param_1;
  (this->URange).Name = AttributeNames::URange;
  (this->URange).Group = GroupNames::PointGroup;
  (this->URange).DefaultGroupDependency.ComparisonIndex = 0;
  (this->URange).DefaultGroupDependency.Number = 0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                     (param_1,AttributeNames::URange,GroupNames::PointGroup);
  (this->URange).AttributeArray = pTVar5;
  (this->URange).ConstAttributeArray = pTVar5;
  return this;
}

// FPointFacade @ 14da64e60

FPointFacade * __thiscall
PV::Facades::FPointFacade::FPointFacade(FPointFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FPointFacade *pFVar4;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar5;
  char *pcVar6;
  TManagedArray<UE::Math::TVector<float>_> *pTVar7;
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TManagedArray<int> *pTVar9;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar11;
  TManagedArray<float> *pTVar12;
  char *pcVar13;
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
  
  pcVar13 = (char *)0x0;
  this->_padding_ = (longlong)&___7FPointFacade_Facades_PV__6B_;
  (this->Positions).ConstCollection = param_1;
  (this->Positions).Collection = (FManagedArrayCollection *)0x0;
  (this->Positions).Name = AttributeNames::PointPosition;
  (this->Positions).Group = GroupNames::PointGroup;
  (this->Positions).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Positions).DefaultGroupDependency.Number = 0;
  (this->Positions).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_160 = AttributeNames::PointPosition;
  local_158 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_160);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
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
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->Positions).ConstAttributeArray = pTVar7;
  (this->LengthFromRoot).ConstCollection = param_1;
  (this->LengthFromRoot).Collection = (FManagedArrayCollection *)0x0;
  (this->LengthFromRoot).Name = AttributeNames::LengthFromRoot;
  (this->LengthFromRoot).Group = GroupNames::PointGroup;
  (this->LengthFromRoot).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LengthFromRoot).DefaultGroupDependency.Number = 0;
  (this->LengthFromRoot).AttributeArray = (TManagedArray<float> *)0x0;
  local_150 = AttributeNames::LengthFromRoot;
  local_148 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_150);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->LengthFromRoot).ConstAttributeArray = pTVar12;
  (this->PointScaleGradient).ConstCollection = param_1;
  (this->PointScaleGradient).Collection = (FManagedArrayCollection *)0x0;
  (this->PointScaleGradient).Name = AttributeNames::PointScaleGradient;
  (this->PointScaleGradient).Group = GroupNames::PointGroup;
  (this->PointScaleGradient).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointScaleGradient).DefaultGroupDependency.Number = 0;
  (this->PointScaleGradient).AttributeArray = (TManagedArray<float> *)0x0;
  local_140 = AttributeNames::PointScaleGradient;
  local_138 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_140);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->PointScaleGradient).ConstAttributeArray = pTVar12;
  (this->HullGradient).ConstCollection = param_1;
  (this->HullGradient).Collection = (FManagedArrayCollection *)0x0;
  (this->HullGradient).Name = AttributeNames::HullGradient;
  (this->HullGradient).Group = GroupNames::PointGroup;
  (this->HullGradient).DefaultGroupDependency.ComparisonIndex = 0;
  (this->HullGradient).DefaultGroupDependency.Number = 0;
  (this->HullGradient).AttributeArray = (TManagedArray<float> *)0x0;
  local_130 = AttributeNames::HullGradient;
  local_128 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_130);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->HullGradient).ConstAttributeArray = pTVar12;
  (this->MainTrunkGradient).ConstCollection = param_1;
  (this->MainTrunkGradient).Collection = (FManagedArrayCollection *)0x0;
  (this->MainTrunkGradient).Name = AttributeNames::MainTrunkGradient;
  (this->MainTrunkGradient).Group = GroupNames::PointGroup;
  (this->MainTrunkGradient).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MainTrunkGradient).DefaultGroupDependency.Number = 0;
  (this->MainTrunkGradient).AttributeArray = (TManagedArray<float> *)0x0;
  local_120 = AttributeNames::MainTrunkGradient;
  local_118 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_120);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->MainTrunkGradient).ConstAttributeArray = pTVar12;
  (this->GroundGradient).ConstCollection = param_1;
  (this->GroundGradient).Collection = (FManagedArrayCollection *)0x0;
  (this->GroundGradient).Name = AttributeNames::GroundGradient;
  (this->GroundGradient).Group = GroupNames::PointGroup;
  (this->GroundGradient).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GroundGradient).DefaultGroupDependency.Number = 0;
  (this->GroundGradient).AttributeArray = (TManagedArray<float> *)0x0;
  local_110 = AttributeNames::GroundGradient;
  local_108 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_110);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->GroundGradient).ConstAttributeArray = pTVar12;
  (this->PointScale).ConstCollection = param_1;
  (this->PointScale).Collection = (FManagedArrayCollection *)0x0;
  (this->PointScale).Name = AttributeNames::PointScale;
  (this->PointScale).Group = GroupNames::PointGroup;
  (this->PointScale).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointScale).DefaultGroupDependency.Number = 0;
  (this->PointScale).AttributeArray = (TManagedArray<float> *)0x0;
  local_100 = AttributeNames::PointScale;
  local_f8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_100);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->PointScale).ConstAttributeArray = pTVar12;
  (this->BudDirections).ConstCollection = param_1;
  (this->BudDirections).Collection = (FManagedArrayCollection *)0x0;
  (this->BudDirections).Name = AttributeNames::BudDirection;
  (this->BudDirections).Group = GroupNames::PointGroup;
  (this->BudDirections).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudDirections).DefaultGroupDependency.Number = 0;
  (this->BudDirections).AttributeArray =
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_f0 = AttributeNames::BudDirection;
  local_e8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_f0);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '(')) {
    pTVar8 = (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> **)
              (pcVar6 + 0x20);
    if (pTVar8 == (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
                  0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BudDirections).ConstAttributeArray = pTVar8;
  (this->BranchGradients).ConstCollection = param_1;
  (this->BranchGradients).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchGradients).Name = AttributeNames::BranchGradient;
  (this->BranchGradients).Group = GroupNames::PointGroup;
  (this->BranchGradients).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchGradients).DefaultGroupDependency.Number = 0;
  (this->BranchGradients).AttributeArray = (TManagedArray<float> *)0x0;
  local_e0 = AttributeNames::BranchGradient;
  local_d8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_e0);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchGradients).ConstAttributeArray = pTVar12;
  (this->BudHormoneLevels).ConstCollection = param_1;
  (this->BudHormoneLevels).Collection = (FManagedArrayCollection *)0x0;
  (this->BudHormoneLevels).Name = AttributeNames::BudHormoneLevels;
  (this->BudHormoneLevels).Group = GroupNames::PointGroup;
  (this->BudHormoneLevels).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudHormoneLevels).DefaultGroupDependency.Number = 0;
  (this->BudHormoneLevels).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_d0 = AttributeNames::BudHormoneLevels;
  local_c8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_d0);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '&')) {
    pTVar10 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(pcVar6 + 0x20);
    if (pTVar10 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BudHormoneLevels).ConstAttributeArray = pTVar10;
  (this->PlantGradients).ConstCollection = param_1;
  (this->PlantGradients).Collection = (FManagedArrayCollection *)0x0;
  (this->PlantGradients).Name = AttributeNames::PlantGradient;
  (this->PlantGradients).Group = GroupNames::PointGroup;
  (this->PlantGradients).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PlantGradients).DefaultGroupDependency.Number = 0;
  (this->PlantGradients).AttributeArray = (TManagedArray<float> *)0x0;
  local_c0 = AttributeNames::PlantGradient;
  local_b8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_c0);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->PlantGradients).ConstAttributeArray = pTVar12;
  (this->LengthFromSeed).ConstCollection = param_1;
  (this->LengthFromSeed).Collection = (FManagedArrayCollection *)0x0;
  (this->LengthFromSeed).Name = AttributeNames::LengthFromSeed;
  (this->LengthFromSeed).Group = GroupNames::PointGroup;
  (this->LengthFromSeed).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LengthFromSeed).DefaultGroupDependency.Number = 0;
  (this->LengthFromSeed).AttributeArray = (TManagedArray<float> *)0x0;
  local_b0 = AttributeNames::LengthFromSeed;
  local_a8 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b0);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->LengthFromSeed).ConstAttributeArray = pTVar12;
  (this->BudNumber).ConstCollection = param_1;
  (this->BudNumber).Collection = (FManagedArrayCollection *)0x0;
  (this->BudNumber).Name = AttributeNames::BudNumber;
  (this->BudNumber).Group = GroupNames::PointGroup;
  (this->BudNumber).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudNumber).DefaultGroupDependency.Number = 0;
  (this->BudNumber).AttributeArray = (TManagedArray<int> *)0x0;
  local_a0 = AttributeNames::BudNumber;
  local_98 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x05')) {
    pTVar9 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<int> **)(pcVar6 + 0x20);
    if (pTVar9 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BudNumber).ConstAttributeArray = pTVar9;
  (this->NjordPixelIndex).ConstCollection = param_1;
  (this->NjordPixelIndex).Collection = (FManagedArrayCollection *)0x0;
  (this->NjordPixelIndex).Name = AttributeNames::NjordPixelIndex;
  (this->NjordPixelIndex).Group = GroupNames::PointGroup;
  (this->NjordPixelIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NjordPixelIndex).DefaultGroupDependency.Number = 0;
  (this->NjordPixelIndex).AttributeArray = (TManagedArray<float> *)0x0;
  local_90 = AttributeNames::NjordPixelIndex;
  local_88 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->NjordPixelIndex).ConstAttributeArray = pTVar12;
  (this->BudLightDetected).ConstCollection = param_1;
  (this->BudLightDetected).Collection = (FManagedArrayCollection *)0x0;
  (this->BudLightDetected).Name = AttributeNames::BudLightDetected;
  (this->BudLightDetected).Group = GroupNames::PointGroup;
  (this->BudLightDetected).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudLightDetected).DefaultGroupDependency.Number = 0;
  (this->BudLightDetected).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_80 = AttributeNames::BudLightDetected;
  local_78 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '&')) {
    pTVar10 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(pcVar6 + 0x20);
    if (pTVar10 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BudLightDetected).ConstAttributeArray = pTVar10;
  (this->BudDevelopment).ConstCollection = param_1;
  (this->BudDevelopment).Collection = (FManagedArrayCollection *)0x0;
  (this->BudDevelopment).Name = AttributeNames::BudDevelopment;
  (this->BudDevelopment).Group = GroupNames::PointGroup;
  (this->BudDevelopment).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BudDevelopment).DefaultGroupDependency.Number = 0;
  (this->BudDevelopment).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_70 = AttributeNames::BudDevelopment;
  local_68 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '%')) {
    pTVar11 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar11 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar6 + 0x20);
    if (pTVar11 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BudDevelopment).ConstAttributeArray = pTVar11;
  (this->TextureCoordV).ConstCollection = param_1;
  (this->TextureCoordV).Collection = (FManagedArrayCollection *)0x0;
  (this->TextureCoordV).Name = AttributeNames::TextureCoordV;
  (this->TextureCoordV).Group = GroupNames::PointGroup;
  (this->TextureCoordV).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TextureCoordV).DefaultGroupDependency.Number = 0;
  (this->TextureCoordV).AttributeArray = (TManagedArray<float> *)0x0;
  local_60 = AttributeNames::TextureCoordV;
  local_58 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->TextureCoordV).ConstAttributeArray = pTVar12;
  (this->TextureCoordUOffset).ConstCollection = param_1;
  (this->TextureCoordUOffset).Collection = (FManagedArrayCollection *)0x0;
  (this->TextureCoordUOffset).Name = AttributeNames::TextureCoordUOffset;
  (this->TextureCoordUOffset).Group = GroupNames::PointGroup;
  (this->TextureCoordUOffset).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TextureCoordUOffset).DefaultGroupDependency.Number = 0;
  (this->TextureCoordUOffset).AttributeArray = (TManagedArray<float> *)0x0;
  local_50 = AttributeNames::TextureCoordUOffset;
  local_48 = GroupNames::PointGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar13;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPointFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->TextureCoordUOffset).ConstAttributeArray = pTVar12;
  (this->URange).ConstCollection = param_1;
  (this->URange).Collection = (FManagedArrayCollection *)0x0;
  (this->URange).Name = AttributeNames::URange;
  (this->URange).Group = GroupNames::PointGroup;
  (this->URange).DefaultGroupDependency.ComparisonIndex = 0;
  (this->URange).DefaultGroupDependency.Number = 0;
  (this->URange).AttributeArray = (TManagedArray<UE::Math::TVector2<float>_> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                     (param_1,AttributeNames::URange,GroupNames::PointGroup);
  (this->URange).ConstAttributeArray = pTVar5;
  return this;
}

// FPointFacade @ 14da65b90

FPointFacade * __thiscall
PV::Facades::FPointFacade::FPointFacade(FPointFacade *this,FPointFacade *param_1)

{
  FManagedArrayCollection *pFVar1;
  FName FVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  TManagedArray<float> *pTVar4;
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar5;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TManagedArray<int> *pTVar7;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar9;
  
  this->_padding_ = (longlong)&___7FPointFacade_Facades_PV__6B_;
  pFVar1 = (param_1->Positions).Collection;
  (this->Positions).ConstCollection = (param_1->Positions).ConstCollection;
  (this->Positions).Collection = pFVar1;
  FVar2 = (param_1->Positions).Group;
  (this->Positions).Name = (param_1->Positions).Name;
  (this->Positions).Group = FVar2;
  pTVar3 = (param_1->Positions).AttributeArray;
  (this->Positions).DefaultGroupDependency = (param_1->Positions).DefaultGroupDependency;
  (this->Positions).AttributeArray = pTVar3;
  (this->Positions).ConstAttributeArray = (param_1->Positions).ConstAttributeArray;
  pFVar1 = (param_1->LengthFromRoot).Collection;
  (this->LengthFromRoot).ConstCollection = (param_1->LengthFromRoot).ConstCollection;
  (this->LengthFromRoot).Collection = pFVar1;
  FVar2 = (param_1->LengthFromRoot).Group;
  (this->LengthFromRoot).Name = (param_1->LengthFromRoot).Name;
  (this->LengthFromRoot).Group = FVar2;
  pTVar4 = (param_1->LengthFromRoot).AttributeArray;
  (this->LengthFromRoot).DefaultGroupDependency = (param_1->LengthFromRoot).DefaultGroupDependency;
  (this->LengthFromRoot).AttributeArray = pTVar4;
  (this->LengthFromRoot).ConstAttributeArray = (param_1->LengthFromRoot).ConstAttributeArray;
  pFVar1 = (param_1->PointScaleGradient).Collection;
  (this->PointScaleGradient).ConstCollection = (param_1->PointScaleGradient).ConstCollection;
  (this->PointScaleGradient).Collection = pFVar1;
  FVar2 = (param_1->PointScaleGradient).Group;
  (this->PointScaleGradient).Name = (param_1->PointScaleGradient).Name;
  (this->PointScaleGradient).Group = FVar2;
  pTVar4 = (param_1->PointScaleGradient).AttributeArray;
  (this->PointScaleGradient).DefaultGroupDependency =
       (param_1->PointScaleGradient).DefaultGroupDependency;
  (this->PointScaleGradient).AttributeArray = pTVar4;
  (this->PointScaleGradient).ConstAttributeArray = (param_1->PointScaleGradient).ConstAttributeArray
  ;
  pFVar1 = (param_1->HullGradient).Collection;
  (this->HullGradient).ConstCollection = (param_1->HullGradient).ConstCollection;
  (this->HullGradient).Collection = pFVar1;
  FVar2 = (param_1->HullGradient).Group;
  (this->HullGradient).Name = (param_1->HullGradient).Name;
  (this->HullGradient).Group = FVar2;
  pTVar4 = (param_1->HullGradient).AttributeArray;
  (this->HullGradient).DefaultGroupDependency = (param_1->HullGradient).DefaultGroupDependency;
  (this->HullGradient).AttributeArray = pTVar4;
  (this->HullGradient).ConstAttributeArray = (param_1->HullGradient).ConstAttributeArray;
  pFVar1 = (param_1->MainTrunkGradient).Collection;
  (this->MainTrunkGradient).ConstCollection = (param_1->MainTrunkGradient).ConstCollection;
  (this->MainTrunkGradient).Collection = pFVar1;
  FVar2 = (param_1->MainTrunkGradient).Group;
  (this->MainTrunkGradient).Name = (param_1->MainTrunkGradient).Name;
  (this->MainTrunkGradient).Group = FVar2;
  pTVar4 = (param_1->MainTrunkGradient).AttributeArray;
  (this->MainTrunkGradient).DefaultGroupDependency =
       (param_1->MainTrunkGradient).DefaultGroupDependency;
  (this->MainTrunkGradient).AttributeArray = pTVar4;
  (this->MainTrunkGradient).ConstAttributeArray = (param_1->MainTrunkGradient).ConstAttributeArray;
  pFVar1 = (param_1->GroundGradient).Collection;
  (this->GroundGradient).ConstCollection = (param_1->GroundGradient).ConstCollection;
  (this->GroundGradient).Collection = pFVar1;
  FVar2 = (param_1->GroundGradient).Group;
  (this->GroundGradient).Name = (param_1->GroundGradient).Name;
  (this->GroundGradient).Group = FVar2;
  pTVar4 = (param_1->GroundGradient).AttributeArray;
  (this->GroundGradient).DefaultGroupDependency = (param_1->GroundGradient).DefaultGroupDependency;
  (this->GroundGradient).AttributeArray = pTVar4;
  (this->GroundGradient).ConstAttributeArray = (param_1->GroundGradient).ConstAttributeArray;
  pFVar1 = (param_1->PointScale).Collection;
  (this->PointScale).ConstCollection = (param_1->PointScale).ConstCollection;
  (this->PointScale).Collection = pFVar1;
  FVar2 = (param_1->PointScale).Group;
  (this->PointScale).Name = (param_1->PointScale).Name;
  (this->PointScale).Group = FVar2;
  pTVar4 = (param_1->PointScale).AttributeArray;
  (this->PointScale).DefaultGroupDependency = (param_1->PointScale).DefaultGroupDependency;
  (this->PointScale).AttributeArray = pTVar4;
  (this->PointScale).ConstAttributeArray = (param_1->PointScale).ConstAttributeArray;
  pFVar1 = (param_1->BudDirections).Collection;
  (this->BudDirections).ConstCollection = (param_1->BudDirections).ConstCollection;
  (this->BudDirections).Collection = pFVar1;
  FVar2 = (param_1->BudDirections).Group;
  (this->BudDirections).Name = (param_1->BudDirections).Name;
  (this->BudDirections).Group = FVar2;
  pTVar5 = (param_1->BudDirections).AttributeArray;
  (this->BudDirections).DefaultGroupDependency = (param_1->BudDirections).DefaultGroupDependency;
  (this->BudDirections).AttributeArray = pTVar5;
  (this->BudDirections).ConstAttributeArray = (param_1->BudDirections).ConstAttributeArray;
  pFVar1 = (param_1->BranchGradients).Collection;
  (this->BranchGradients).ConstCollection = (param_1->BranchGradients).ConstCollection;
  (this->BranchGradients).Collection = pFVar1;
  FVar2 = (param_1->BranchGradients).Group;
  (this->BranchGradients).Name = (param_1->BranchGradients).Name;
  (this->BranchGradients).Group = FVar2;
  pTVar4 = (param_1->BranchGradients).AttributeArray;
  (this->BranchGradients).DefaultGroupDependency = (param_1->BranchGradients).DefaultGroupDependency
  ;
  (this->BranchGradients).AttributeArray = pTVar4;
  (this->BranchGradients).ConstAttributeArray = (param_1->BranchGradients).ConstAttributeArray;
  pFVar1 = (param_1->BudHormoneLevels).Collection;
  (this->BudHormoneLevels).ConstCollection = (param_1->BudHormoneLevels).ConstCollection;
  (this->BudHormoneLevels).Collection = pFVar1;
  FVar2 = (param_1->BudHormoneLevels).Group;
  (this->BudHormoneLevels).Name = (param_1->BudHormoneLevels).Name;
  (this->BudHormoneLevels).Group = FVar2;
  pTVar6 = (param_1->BudHormoneLevels).AttributeArray;
  (this->BudHormoneLevels).DefaultGroupDependency =
       (param_1->BudHormoneLevels).DefaultGroupDependency;
  (this->BudHormoneLevels).AttributeArray = pTVar6;
  (this->BudHormoneLevels).ConstAttributeArray = (param_1->BudHormoneLevels).ConstAttributeArray;
  pFVar1 = (param_1->PlantGradients).Collection;
  (this->PlantGradients).ConstCollection = (param_1->PlantGradients).ConstCollection;
  (this->PlantGradients).Collection = pFVar1;
  FVar2 = (param_1->PlantGradients).Group;
  (this->PlantGradients).Name = (param_1->PlantGradients).Name;
  (this->PlantGradients).Group = FVar2;
  pTVar4 = (param_1->PlantGradients).AttributeArray;
  (this->PlantGradients).DefaultGroupDependency = (param_1->PlantGradients).DefaultGroupDependency;
  (this->PlantGradients).AttributeArray = pTVar4;
  (this->PlantGradients).ConstAttributeArray = (param_1->PlantGradients).ConstAttributeArray;
  pFVar1 = (param_1->LengthFromSeed).Collection;
  (this->LengthFromSeed).ConstCollection = (param_1->LengthFromSeed).ConstCollection;
  (this->LengthFromSeed).Collection = pFVar1;
  FVar2 = (param_1->LengthFromSeed).Group;
  (this->LengthFromSeed).Name = (param_1->LengthFromSeed).Name;
  (this->LengthFromSeed).Group = FVar2;
  pTVar4 = (param_1->LengthFromSeed).AttributeArray;
  (this->LengthFromSeed).DefaultGroupDependency = (param_1->LengthFromSeed).DefaultGroupDependency;
  (this->LengthFromSeed).AttributeArray = pTVar4;
  (this->LengthFromSeed).ConstAttributeArray = (param_1->LengthFromSeed).ConstAttributeArray;
  pFVar1 = (param_1->BudNumber).Collection;
  (this->BudNumber).ConstCollection = (param_1->BudNumber).ConstCollection;
  (this->BudNumber).Collection = pFVar1;
  FVar2 = (param_1->BudNumber).Group;
  (this->BudNumber).Name = (param_1->BudNumber).Name;
  (this->BudNumber).Group = FVar2;
  pTVar7 = (param_1->BudNumber).AttributeArray;
  (this->BudNumber).DefaultGroupDependency = (param_1->BudNumber).DefaultGroupDependency;
  (this->BudNumber).AttributeArray = pTVar7;
  (this->BudNumber).ConstAttributeArray = (param_1->BudNumber).ConstAttributeArray;
  pFVar1 = (param_1->NjordPixelIndex).Collection;
  (this->NjordPixelIndex).ConstCollection = (param_1->NjordPixelIndex).ConstCollection;
  (this->NjordPixelIndex).Collection = pFVar1;
  FVar2 = (param_1->NjordPixelIndex).Group;
  (this->NjordPixelIndex).Name = (param_1->NjordPixelIndex).Name;
  (this->NjordPixelIndex).Group = FVar2;
  pTVar4 = (param_1->NjordPixelIndex).AttributeArray;
  (this->NjordPixelIndex).DefaultGroupDependency = (param_1->NjordPixelIndex).DefaultGroupDependency
  ;
  (this->NjordPixelIndex).AttributeArray = pTVar4;
  (this->NjordPixelIndex).ConstAttributeArray = (param_1->NjordPixelIndex).ConstAttributeArray;
  pFVar1 = (param_1->BudLightDetected).Collection;
  (this->BudLightDetected).ConstCollection = (param_1->BudLightDetected).ConstCollection;
  (this->BudLightDetected).Collection = pFVar1;
  FVar2 = (param_1->BudLightDetected).Group;
  (this->BudLightDetected).Name = (param_1->BudLightDetected).Name;
  (this->BudLightDetected).Group = FVar2;
  pTVar6 = (param_1->BudLightDetected).AttributeArray;
  (this->BudLightDetected).DefaultGroupDependency =
       (param_1->BudLightDetected).DefaultGroupDependency;
  (this->BudLightDetected).AttributeArray = pTVar6;
  (this->BudLightDetected).ConstAttributeArray = (param_1->BudLightDetected).ConstAttributeArray;
  pFVar1 = (param_1->BudDevelopment).Collection;
  (this->BudDevelopment).ConstCollection = (param_1->BudDevelopment).ConstCollection;
  (this->BudDevelopment).Collection = pFVar1;
  FVar2 = (param_1->BudDevelopment).Group;
  (this->BudDevelopment).Name = (param_1->BudDevelopment).Name;
  (this->BudDevelopment).Group = FVar2;
  pTVar8 = (param_1->BudDevelopment).AttributeArray;
  (this->BudDevelopment).DefaultGroupDependency = (param_1->BudDevelopment).DefaultGroupDependency;
  (this->BudDevelopment).AttributeArray = pTVar8;
  (this->BudDevelopment).ConstAttributeArray = (param_1->BudDevelopment).ConstAttributeArray;
  pFVar1 = (param_1->TextureCoordV).Collection;
  (this->TextureCoordV).ConstCollection = (param_1->TextureCoordV).ConstCollection;
  (this->TextureCoordV).Collection = pFVar1;
  FVar2 = (param_1->TextureCoordV).Group;
  (this->TextureCoordV).Name = (param_1->TextureCoordV).Name;
  (this->TextureCoordV).Group = FVar2;
  pTVar4 = (param_1->TextureCoordV).AttributeArray;
  (this->TextureCoordV).DefaultGroupDependency = (param_1->TextureCoordV).DefaultGroupDependency;
  (this->TextureCoordV).AttributeArray = pTVar4;
  (this->TextureCoordV).ConstAttributeArray = (param_1->TextureCoordV).ConstAttributeArray;
  pFVar1 = (param_1->TextureCoordUOffset).Collection;
  (this->TextureCoordUOffset).ConstCollection = (param_1->TextureCoordUOffset).ConstCollection;
  (this->TextureCoordUOffset).Collection = pFVar1;
  FVar2 = (param_1->TextureCoordUOffset).Group;
  (this->TextureCoordUOffset).Name = (param_1->TextureCoordUOffset).Name;
  (this->TextureCoordUOffset).Group = FVar2;
  pTVar4 = (param_1->TextureCoordUOffset).AttributeArray;
  (this->TextureCoordUOffset).DefaultGroupDependency =
       (param_1->TextureCoordUOffset).DefaultGroupDependency;
  (this->TextureCoordUOffset).AttributeArray = pTVar4;
  (this->TextureCoordUOffset).ConstAttributeArray =
       (param_1->TextureCoordUOffset).ConstAttributeArray;
  pFVar1 = (param_1->URange).Collection;
  (this->URange).ConstCollection = (param_1->URange).ConstCollection;
  (this->URange).Collection = pFVar1;
  FVar2 = (param_1->URange).Group;
  (this->URange).Name = (param_1->URange).Name;
  (this->URange).Group = FVar2;
  pTVar9 = (param_1->URange).AttributeArray;
  (this->URange).DefaultGroupDependency = (param_1->URange).DefaultGroupDependency;
  (this->URange).AttributeArray = pTVar9;
  (this->URange).ConstAttributeArray = (param_1->URange).ConstAttributeArray;
  return this;
}

// CopyEntry @ 14da772e0

void __thiscall PV::Facades::FPointFacade::CopyEntry(FPointFacade *this,int param_1,int param_2)

{
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector<float> *pTVar5;
  float *pfVar6;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  int *piVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  TVector2<float> *pTVar11;
  
  bVar3 = IsValid(this);
  if (((bVar3) &&
      (bVar3 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                         (&this->Positions,param_1), bVar3)) &&
     (bVar3 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                        (&this->Positions,param_2), bVar3)) {
    pTVar5 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[](&this->Positions,param_1);
    TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt(&this->Positions,param_2,pTVar5);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->LengthFromRoot,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->LengthFromRoot,param_2,pfVar6);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->PointScaleGradient,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->PointScaleGradient,param_2,pfVar6);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->HullGradient,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->HullGradient,param_2,pfVar6);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->MainTrunkGradient,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->MainTrunkGradient,param_2,pfVar6);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->GroundGradient,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->GroundGradient,param_2,pfVar6);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->PointScale,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->PointScale,param_2,pfVar6);
    pTVar7 = TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
             operator[](&this->BudDirections,param_1);
    if ((((this->BudDirections).AttributeArray ==
          (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0) ||
        ((this->BudDirections).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray != nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x7c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ((this->BudDirections).AttributeArray)->field_0x8 = 1;
    pTVar1 = (this->BudDirections).AttributeArray;
    uVar4 = 0;
    if (param_2 < *(int *)&pTVar1->field_0x18) {
      uVar4 = (uint)~param_2 >> 0x1f;
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
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 * 0x10 + *(longlong *)&pTVar1->field_0x10),pTVar7);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->BranchGradients,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->BranchGradients,param_2,pfVar6);
    pTVar8 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                       (&this->BudHormoneLevels,param_1);
    TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::ModifyAt
              (&this->BudHormoneLevels,param_2,pTVar8);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->PlantGradients,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->PlantGradients,param_2,pfVar6);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->LengthFromSeed,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->LengthFromSeed,param_2,pfVar6);
    piVar9 = TManagedArrayAccessor<int>::operator[](&this->BudNumber,param_1);
    TManagedArrayAccessor<int>::ModifyAt(&this->BudNumber,param_2,piVar9);
    pfVar6 = TManagedArrayAccessor<float>::operator[](&this->NjordPixelIndex,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->NjordPixelIndex,param_2,pfVar6);
    pTVar8 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                       (&this->BudLightDetected,param_1);
    TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::ModifyAt
              (&this->BudLightDetected,param_2,pTVar8);
    pTVar10 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                        (&this->BudDevelopment,param_1);
    TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
              (&this->BudDevelopment,param_2,pTVar10);
    if ((this->TextureCoordV).ConstAttributeArray != (TManagedArray<float> *)0x0) {
      pfVar6 = TManagedArrayAccessor<float>::operator[](&this->TextureCoordV,param_1);
      TManagedArrayAccessor<float>::ModifyAt(&this->TextureCoordV,param_2,pfVar6);
    }
    if ((this->TextureCoordUOffset).ConstAttributeArray != (TManagedArray<float> *)0x0) {
      pfVar6 = TManagedArrayAccessor<float>::operator[](&this->TextureCoordUOffset,param_1);
      TManagedArrayAccessor<float>::ModifyAt(&this->TextureCoordUOffset,param_2,pfVar6);
    }
    if ((this->URange).ConstAttributeArray != (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
      pTVar11 = TManagedArrayAccessor<UE::Math::TVector2<float>_>::operator[](&this->URange,param_1)
      ;
      TManagedArrayAccessor<UE::Math::TVector2<float>_>::ModifyAt(&this->URange,param_2,pTVar11);
    }
  }
  return;
}

// GetBranchGradient @ 14da931d0

float * __thiscall PV::Facades::FPointFacade::GetBranchGradient(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->BranchGradients).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1)
     ) {
    iVar1 = (**(code **)(*(longlong *)(this->BranchGradients).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->BranchGradients,param_1);
      return pfVar2;
    }
  }
  return &DefaultBranchGradient;
}

// GetBudDevelopment @ 14da93fd0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPointFacade::GetBudDevelopment(FPointFacade *this,int param_1)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (((this->BudDevelopment).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->BudDevelopment).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->BudDevelopment,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FPointFacade::GetBudDevelopment'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyArray;
}

// GetBudDirection @ 14da94130

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPointFacade::GetBudDirection(FPointFacade *this,int param_1)

{
  int iVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (((this->BudDirections).ConstAttributeArray !=
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->BudDirections).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
               ::operator[](&this->BudDirections,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FPointFacade::GetBudDirection'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyArray;
}

// GetBudHormoneLevels @ 14da94230

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPointFacade::GetBudHormoneLevels(FPointFacade *this,int param_1)

{
  int iVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (((this->BudHormoneLevels).ConstAttributeArray !=
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->BudHormoneLevels).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->BudHormoneLevels,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FPointFacade::GetBudHormoneLevels'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyArray;
}

// GetBudLightDetected @ 14da942e0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPointFacade::GetBudLightDetected(FPointFacade *this,int param_1)

{
  int iVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (((this->BudLightDetected).ConstAttributeArray !=
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->BudLightDetected).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->BudLightDetected,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FPointFacade::GetBudLightDetected'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyArray;
}

// GetBudNumber @ 14da94390

int __thiscall PV::Facades::FPointFacade::GetBudNumber(FPointFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int *piVar3;
  
  pTVar1 = (this->BudNumber).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      piVar3 = TManagedArrayAccessor<int>::operator[](&this->BudNumber,param_1);
      return *piVar3;
    }
  }
  return -1;
}

// GetElementCount @ 14da94c60

int __thiscall PV::Facades::FPointFacade::GetElementCount(FPointFacade *this)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  int iVar2;
  
  pTVar1 = (this->Positions).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014da94c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    return iVar2;
  }
  iVar2 = FManagedArrayCollection::NumElements
                    ((this->Positions).ConstCollection,(this->Positions).Group);
  return iVar2;
}

// GetGroundGradient @ 14da959d0

float * __thiscall PV::Facades::FPointFacade::GetGroundGradient(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->GroundGradient).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1))
  {
    iVar1 = (**(code **)(*(longlong *)(this->GroundGradient).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->GroundGradient,param_1);
      return pfVar2;
    }
  }
  return &::DefaultValue;
}

// GetHullGradient @ 14da95b80

float * __thiscall PV::Facades::FPointFacade::GetHullGradient(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->HullGradient).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->HullGradient).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->HullGradient,param_1);
      return pfVar2;
    }
  }
  return &::DefaultValue;
}

// GetLengthFromRoot @ 14da95e80

float * __thiscall PV::Facades::FPointFacade::GetLengthFromRoot(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->LengthFromRoot).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1))
  {
    iVar1 = (**(code **)(*(longlong *)(this->LengthFromRoot).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->LengthFromRoot,param_1);
      return pfVar2;
    }
  }
  return &DefaultLengthFromRoot;
}

// GetLengthFromRootsArray @ 14da95ee0

TManagedArray<float> * __thiscall
PV::Facades::FPointFacade::GetLengthFromRootsArray(FPointFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if ((this->LengthFromRoot).ConstAttributeArray != (TManagedArray<float> *)0x0) {
    return (this->LengthFromRoot).ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<float> *)(*pcVar1)();
    return pTVar3;
  }
  return (this->LengthFromRoot).ConstAttributeArray;
}

// GetLengthFromSeed @ 14da95f30

float * __thiscall PV::Facades::FPointFacade::GetLengthFromSeed(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->LengthFromSeed).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1))
  {
    iVar1 = (**(code **)(*(longlong *)(this->LengthFromSeed).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->LengthFromSeed,param_1);
      return pfVar2;
    }
  }
  return &DefaultLengthFromSeed;
}

// GetMainTrunkGradient @ 14da964e0

float * __thiscall PV::Facades::FPointFacade::GetMainTrunkGradient(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->MainTrunkGradient).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->MainTrunkGradient).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->MainTrunkGradient,param_1);
      return pfVar2;
    }
  }
  return &::DefaultValue;
}

// GetNjordPixelIndex @ 14da96e20

float * __thiscall PV::Facades::FPointFacade::GetNjordPixelIndex(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->NjordPixelIndex).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1)
     ) {
    iVar1 = (**(code **)(*(longlong *)(this->NjordPixelIndex).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->NjordPixelIndex,param_1);
      return pfVar2;
    }
  }
  return &IndexNone;
}

// GetPlantGradient @ 14da97b20

float * __thiscall PV::Facades::FPointFacade::GetPlantGradient(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->PlantGradients).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1))
  {
    iVar1 = (**(code **)(*(longlong *)(this->PlantGradients).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->PlantGradients,param_1);
      return pfVar2;
    }
  }
  return &DefaultPlantGradient;
}

// GetPointScale @ 14da985a0

float * __thiscall PV::Facades::FPointFacade::GetPointScale(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->PointScale).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->PointScale).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->PointScale,param_1);
      return pfVar2;
    }
  }
  return &DefaultPScale;
}

// GetPointScaleGradient @ 14da98600

float * __thiscall PV::Facades::FPointFacade::GetPointScaleGradient(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->PointScaleGradient).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->PointScaleGradient).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->PointScaleGradient,param_1);
      return pfVar2;
    }
  }
  return &DefaultPScale;
}

// GetPointScales @ 14da98660

TManagedArray<float> * __thiscall PV::Facades::FPointFacade::GetPointScales(FPointFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if ((this->PointScale).ConstAttributeArray != (TManagedArray<float> *)0x0) {
    return (this->PointScale).ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<float> *)(*pcVar1)();
    return pTVar3;
  }
  return (this->PointScale).ConstAttributeArray;
}

// GetPosition @ 14da98c70

TVector<float> * __thiscall PV::Facades::FPointFacade::GetPosition(FPointFacade *this,int param_1)

{
  int iVar1;
  TVector<float> *pTVar2;
  
  if (((this->Positions).ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->Positions).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                         (&this->Positions,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultPosition.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      DefaultPosition.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DefaultPosition;
}

// GetPositions @ 14da98d30

TManagedArray<UE::Math::TVector<float>_> * __thiscall
PV::Facades::FPointFacade::GetPositions(FPointFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  
  if ((this->Positions).ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    return (this->Positions).ConstAttributeArray;
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
  return (this->Positions).ConstAttributeArray;
}

// GetTextureCoordUOffset @ 14da9a320

float * __thiscall PV::Facades::FPointFacade::GetTextureCoordUOffset(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->TextureCoordUOffset).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->TextureCoordUOffset).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->TextureCoordUOffset,param_1);
      return pfVar2;
    }
  }
  return &IndexNone;
}

// GetTextureCoordV @ 14da9a380

float * __thiscall PV::Facades::FPointFacade::GetTextureCoordV(FPointFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->TextureCoordV).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1))
  {
    iVar1 = (**(code **)(*(longlong *)(this->TextureCoordV).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->TextureCoordV,param_1);
      return pfVar2;
    }
  }
  return &IndexNone;
}

// GetURange @ 14da9a8c0

TVector2<float> * __thiscall PV::Facades::FPointFacade::GetURange(FPointFacade *this,int param_1)

{
  int iVar1;
  TVector2<float> *pTVar2;
  
  if (((this->URange).ConstAttributeArray != (TManagedArray<UE::Math::TVector2<float>_> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->URange).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<UE::Math::TVector2<float>_>::operator[](&this->URange,param_1);
      return pTVar2;
    }
  }
  return &Range;
}

// IsValid @ 14da9b100

bool __thiscall PV::Facades::FPointFacade::IsValid(FPointFacade *this)

{
  if ((((((this->Positions).ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0)
        && ((this->LengthFromRoot).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
       ((this->LengthFromSeed).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
      ((((this->PointScaleGradient).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
        ((this->HullGradient).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
       (((this->MainTrunkGradient).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
        (((this->GroundGradient).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
         ((this->PointScale).ConstAttributeArray != (TManagedArray<float> *)0x0)))))))) &&
     (((this->BudDirections).ConstAttributeArray !=
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0 &&
      ((((((this->BranchGradients).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
          ((this->BudHormoneLevels).ConstAttributeArray !=
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
         ((this->PlantGradients).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
        (((this->BudNumber).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
         ((this->NjordPixelIndex).ConstAttributeArray != (TManagedArray<float> *)0x0)))) &&
       (((this->BudLightDetected).ConstAttributeArray !=
         (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
        ((this->BudDevelopment).ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)))))))) {
    return true;
  }
  return false;
}

// ModifyLengthFromRoots @ 14da9dc10

TManagedArray<float> * __thiscall
PV::Facades::FPointFacade::ModifyLengthFromRoots(FPointFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if (((this->LengthFromRoot).AttributeArray == (TManagedArray<float> *)0x0) ||
     ((this->LengthFromRoot).Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  ((this->LengthFromRoot).AttributeArray)->field_0x8 = 1;
  return (this->LengthFromRoot).AttributeArray;
}

// ModifyLengthFromSeeds @ 14da9dc70

TManagedArray<float> * __thiscall
PV::Facades::FPointFacade::ModifyLengthFromSeeds(FPointFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if (((this->LengthFromSeed).AttributeArray == (TManagedArray<float> *)0x0) ||
     ((this->LengthFromSeed).Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  ((this->LengthFromSeed).AttributeArray)->field_0x8 = 1;
  return (this->LengthFromSeed).AttributeArray;
}

// ModifyNjordPixelIDs @ 14da9dce0

TManagedArray<float> * __thiscall PV::Facades::FPointFacade::ModifyNjordPixelIDs(FPointFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if (((this->NjordPixelIndex).AttributeArray == (TManagedArray<float> *)0x0) ||
     ((this->NjordPixelIndex).Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  ((this->NjordPixelIndex).AttributeArray)->field_0x8 = 1;
  return (this->NjordPixelIndex).AttributeArray;
}

// ModifyPointScales @ 14da9dd50

TManagedArray<float> * __thiscall PV::Facades::FPointFacade::ModifyPointScales(FPointFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if (((this->PointScale).AttributeArray == (TManagedArray<float> *)0x0) ||
     ((this->PointScale).Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  ((this->PointScale).AttributeArray)->field_0x8 = 1;
  return (this->PointScale).AttributeArray;
}

// ModifyPositions @ 14da9ddc0

TManagedArray<UE::Math::TVector<float>_> * __thiscall
PV::Facades::FPointFacade::ModifyPositions(FPointFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  
  if (((this->Positions).AttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
     ((this->Positions).Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  ((this->Positions).AttributeArray)->field_0x8 = 1;
  return (this->Positions).AttributeArray;
}

// RemoveEntries @ 14daa15e0

void __thiscall PV::Facades::FPointFacade::RemoveEntries(FPointFacade *this,int param_1,int param_2)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex(&this->Positions,param_2)
    ;
    if (bVar2) {
      pTVar1 = (this->Positions).ConstAttributeArray;
      if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        iVar3 = FManagedArrayCollection::NumElements
                          ((this->Positions).ConstCollection,(this->Positions).Group);
      }
      else {
        iVar3 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
      }
      if (param_1 + param_2 <= iVar3) {
        TManagedArrayAccessor<UE::Math::TVector<float>_>::RemoveElements
                  (&this->Positions,param_1,param_2);
      }
    }
  }
  return;
}

// SeTextureCoordV @ 14daa3180

void __thiscall
PV::Facades::FPointFacade::SeTextureCoordV(FPointFacade *this,int param_1,float param_2)

{
  TManagedArray<float> *pTVar1;
  int iVar2;
  float local_res18 [2];
  
  local_res18[0] = param_2;
  if ((this->TextureCoordV).ConstAttributeArray == (TManagedArray<float> *)0x0) {
    TManagedArrayAccessor<float>::Add(&this->TextureCoordV,MakePersistent,(FName)0x0);
  }
  pTVar1 = (this->TextureCoordV).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<float> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      TManagedArrayAccessor<float>::ModifyAt(&this->TextureCoordV,param_1,local_res18);
    }
  }
  return;
}

// SetBranchGradient @ 14daa5b60

void __thiscall
PV::Facades::FPointFacade::SetBranchGradient(FPointFacade *this,int param_1,float param_2)

{
  int iVar1;
  float local_res18 [4];
  
  if (((this->BranchGradients).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1)
     ) {
    local_res18[0] = param_2;
    iVar1 = (**(code **)(*(longlong *)(this->BranchGradients).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      TManagedArrayAccessor<float>::ModifyAt(&this->BranchGradients,param_1,local_res18);
    }
  }
  return;
}

// SetBudHormoneLevels @ 14daa6d30

void __thiscall
PV::Facades::FPointFacade::SetBudHormoneLevels
          (FPointFacade *this,int param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  
  if (((this->BudHormoneLevels).ConstAttributeArray !=
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->BudHormoneLevels).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::ModifyAt
                (&this->BudHormoneLevels,param_1,param_2);
    }
  }
  return;
}

// SetPlantGradient @ 14daa8db0

void __thiscall
PV::Facades::FPointFacade::SetPlantGradient(FPointFacade *this,int param_1,float param_2)

{
  int iVar1;
  float local_res18 [4];
  
  if (((this->PlantGradients).ConstAttributeArray != (TManagedArray<float> *)0x0) && (-1 < param_1))
  {
    local_res18[0] = param_2;
    iVar1 = (**(code **)(*(longlong *)(this->PlantGradients).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      TManagedArrayAccessor<float>::ModifyAt(&this->PlantGradients,param_1,local_res18);
    }
  }
  return;
}

// SetTextureCoordUOffset @ 14daa8f00

void __thiscall
PV::Facades::FPointFacade::SetTextureCoordUOffset(FPointFacade *this,int param_1,float param_2)

{
  TManagedArray<float> *pTVar1;
  int iVar2;
  float local_res18 [2];
  
  local_res18[0] = param_2;
  if ((this->TextureCoordUOffset).ConstAttributeArray == (TManagedArray<float> *)0x0) {
    TManagedArrayAccessor<float>::Add(&this->TextureCoordUOffset,MakePersistent,(FName)0x0);
  }
  pTVar1 = (this->TextureCoordUOffset).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<float> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      TManagedArrayAccessor<float>::ModifyAt(&this->TextureCoordUOffset,param_1,local_res18);
    }
  }
  return;
}

// SetURange @ 14daa91e0

void __thiscall
PV::Facades::FPointFacade::SetURange(FPointFacade *this,int param_1,TVector2<float> param_2)

{
  TManagedArray<UE::Math::TVector2<float>_> *pTVar1;
  int iVar2;
  TVector2<float>_u_0 local_res18;
  
  local_res18 = param_2.field0_0x0;
  if ((this->URange).ConstAttributeArray == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
    TManagedArrayAccessor<UE::Math::TVector2<float>_>::Add(&this->URange,MakePersistent,(FName)0x0);
  }
  pTVar1 = (this->URange).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<UE::Math::TVector2<float>_> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      TManagedArrayAccessor<UE::Math::TVector2<float>_>::ModifyAt
                (&this->URange,param_1,(TVector2<float> *)&local_res18._s_0);
    }
  }
  return;
}


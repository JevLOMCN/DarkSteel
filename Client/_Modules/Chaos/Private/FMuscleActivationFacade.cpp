// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 23

// FMuscleActivationFacade @ 143f89d80

FMuscleActivationFacade * __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::FMuscleActivationFacade
          (FMuscleActivationFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FMuscleActivationFacade *pFVar6;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FName *pFVar8;
  FValueType *pFVar9;
  FValueType *pFVar10;
  FValueType *pFVar11;
  TManagedArray<FString> *pTVar12;
  TManagedArray<Chaos::FLinearCurve> *pTVar13;
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
  FName local_50 [2];
  
  this->Collection = param_1;
  this->ConstCollection = param_1;
  (this->GeometryGroupIndexAttribute).ConstCollection = param_1;
  (this->GeometryGroupIndexAttribute).Collection = param_1;
  (this->GeometryGroupIndexAttribute).Name = GeometryGroupIndex;
  (this->GeometryGroupIndexAttribute).Group = GroupName;
  (this->GeometryGroupIndexAttribute).DefaultGroupDependency = FGeometryCollection::GeometryGroup;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,GeometryGroupIndex,GroupName);
  (this->GeometryGroupIndexAttribute).AttributeArray = pTVar3;
  (this->GeometryGroupIndexAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_e8,"Tetrahedral");
  (this->MuscleActivationElementAttribute).ConstCollection = param_1;
  (this->MuscleActivationElementAttribute).Collection = param_1;
  (this->MuscleActivationElementAttribute).Name = MuscleActivationElement;
  (this->MuscleActivationElementAttribute).Group = GroupName;
  (this->MuscleActivationElementAttribute).DefaultGroupDependency = local_e8;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (param_1,MuscleActivationElement,GroupName);
  (this->MuscleActivationElementAttribute).AttributeArray = pTVar4;
  (this->MuscleActivationElementAttribute).ConstAttributeArray = pTVar4;
  (this->OriginInsertionPairAttribute).ConstCollection = param_1;
  (this->OriginInsertionPairAttribute).Collection = param_1;
  (this->OriginInsertionPairAttribute).Name = OriginInsertionPair;
  (this->OriginInsertionPairAttribute).Group = GroupName;
  (this->OriginInsertionPairAttribute).DefaultGroupDependency = FGeometryCollection::VerticesGroup;
  local_e0 = OriginInsertionPair;
  local_d8 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_e0);
  pFVar11 = (FValueType *)0x0;
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FIntVector2Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->OriginInsertionPairAttribute).AttributeArray =
       (TManagedArray<UE::Math::TIntVector2<int>_> *)pFVar9;
  (this->OriginInsertionPairAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TIntVector2<int>_> *)pFVar9;
  (this->OriginInsertionRestLengthAttribute).ConstCollection = param_1;
  (this->OriginInsertionRestLengthAttribute).Collection = param_1;
  (this->OriginInsertionRestLengthAttribute).Name = OriginInsertionRestLength;
  (this->OriginInsertionRestLengthAttribute).Group = GroupName;
  (this->OriginInsertionRestLengthAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->OriginInsertionRestLengthAttribute).DefaultGroupDependency.Number = 0;
  local_d0 = OriginInsertionRestLength;
  local_c8 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_d0);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->OriginInsertionRestLengthAttribute).AttributeArray = (TManagedArray<float> *)pFVar9;
  (this->OriginInsertionRestLengthAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar9;
  (this->FiberDirectionMatrixAttribute).ConstCollection = param_1;
  (this->FiberDirectionMatrixAttribute).Collection = param_1;
  (this->FiberDirectionMatrixAttribute).Name = FiberDirectionMatrix;
  (this->FiberDirectionMatrixAttribute).Group = GroupName;
  (this->FiberDirectionMatrixAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FiberDirectionMatrixAttribute).DefaultGroupDependency.Number = 0;
  local_c0 = FiberDirectionMatrix;
  local_b8 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_c0);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FPMatrix33dArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->FiberDirectionMatrixAttribute).AttributeArray =
       (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)pFVar9;
  (this->FiberDirectionMatrixAttribute).ConstAttributeArray =
       (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)pFVar9;
  (this->ContractionVolumeScaleAttribute).ConstCollection = param_1;
  (this->ContractionVolumeScaleAttribute).Collection = param_1;
  (this->ContractionVolumeScaleAttribute).Name = ContractionVolumeScale;
  (this->ContractionVolumeScaleAttribute).Group = GroupName;
  (this->ContractionVolumeScaleAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ContractionVolumeScaleAttribute).DefaultGroupDependency.Number = 0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (param_1,ContractionVolumeScale,GroupName);
  (this->ContractionVolumeScaleAttribute).AttributeArray = pTVar7;
  (this->ContractionVolumeScaleAttribute).ConstAttributeArray = pTVar7;
  (this->FiberLengthRatioAtMaxActivationAttribute).ConstCollection = param_1;
  (this->FiberLengthRatioAtMaxActivationAttribute).Collection = param_1;
  (this->FiberLengthRatioAtMaxActivationAttribute).Name = FiberLengthRatioAtMaxActivation;
  (this->FiberLengthRatioAtMaxActivationAttribute).Group = GroupName;
  (this->FiberLengthRatioAtMaxActivationAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FiberLengthRatioAtMaxActivationAttribute).DefaultGroupDependency.Number = 0;
  local_b0 = FiberLengthRatioAtMaxActivation;
  local_a8 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b0);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->FiberLengthRatioAtMaxActivationAttribute).AttributeArray = (TManagedArray<float> *)pFVar9;
  (this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray =
       (TManagedArray<float> *)pFVar9;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstCollection = param_1;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).Collection = param_1;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).Name =
       MuscleLengthRatioThresholdForMaxActivation;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).Group = GroupName;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).DefaultGroupDependency.ComparisonIndex
       = 0;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).DefaultGroupDependency.Number = 0;
  local_a0 = MuscleLengthRatioThresholdForMaxActivation;
  local_98 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).AttributeArray =
       (TManagedArray<float> *)pFVar9;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray =
       (TManagedArray<float> *)pFVar9;
  (this->InflationVolumeScaleAttribute).ConstCollection = param_1;
  (this->InflationVolumeScaleAttribute).Collection = param_1;
  (this->InflationVolumeScaleAttribute).Name = InflationVolumeScale;
  (this->InflationVolumeScaleAttribute).Group = GroupName;
  (this->InflationVolumeScaleAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InflationVolumeScaleAttribute).DefaultGroupDependency.Number = 0;
  local_90 = InflationVolumeScale;
  local_88 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->InflationVolumeScaleAttribute).AttributeArray = (TManagedArray<float> *)pFVar9;
  (this->InflationVolumeScaleAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar9;
  (this->FiberStreamlineAttribute).ConstCollection = param_1;
  (this->FiberStreamlineAttribute).Collection = param_1;
  (this->FiberStreamlineAttribute).Name = FiberStreamline;
  (this->FiberStreamlineAttribute).Group = GroupName;
  (this->FiberStreamlineAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FiberStreamlineAttribute).DefaultGroupDependency.Number = 0;
  local_80 = FiberStreamline;
  local_78 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FFVector3fNestedArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar11 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar11 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar11->GroupIndexDependency).Number = 1;
  }
  (this->FiberStreamlineAttribute).AttributeArray =
       (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
        *)pFVar11;
  (this->FiberStreamlineAttribute).ConstAttributeArray =
       (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
        *)pFVar11;
  (this->FiberStreamlineRestLengthAttribute).ConstCollection = param_1;
  (this->FiberStreamlineRestLengthAttribute).Collection = param_1;
  (this->FiberStreamlineRestLengthAttribute).Name = FiberStreamlineRestLength;
  (this->FiberStreamlineRestLengthAttribute).Group = GroupName;
  (this->FiberStreamlineRestLengthAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FiberStreamlineRestLengthAttribute).DefaultGroupDependency.Number = 0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (param_1,FiberStreamlineRestLength,GroupName);
  (this->FiberStreamlineRestLengthAttribute).AttributeArray = pTVar7;
  (this->FiberStreamlineRestLengthAttribute).ConstAttributeArray = pTVar7;
  (this->MuscleActivationCurveNameAttribute).ConstCollection = param_1;
  (this->MuscleActivationCurveNameAttribute).Collection = param_1;
  (this->MuscleActivationCurveNameAttribute).Name = MuscleActivationCurveName;
  (this->MuscleActivationCurveNameAttribute).Group = GroupName;
  (this->MuscleActivationCurveNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MuscleActivationCurveNameAttribute).DefaultGroupDependency.Number = 0;
  local_70 = MuscleActivationCurveName;
  local_68 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pFVar11 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar11 = (FValueType *)0x0;
  }
  if ((pFVar11 == (FValueType *)0x0) || (pFVar11->ArrayType != FStringType)) {
    pTVar12 = (TManagedArray<FString> *)0x0;
  }
  else {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar11);
    pTVar12 = (TManagedArray<FString> *)pFVar11->ManagedArray;
    if ((pTVar12 == (TManagedArray<FString> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
      return pFVar6;
    }
    pTVar12->field_0x8 = 1;
  }
  (this->MuscleActivationCurveNameAttribute).AttributeArray = pTVar12;
  (this->MuscleActivationCurveNameAttribute).ConstAttributeArray = pTVar12;
  (this->LengthActivationCurveAttribute).ConstCollection = param_1;
  (this->LengthActivationCurveAttribute).Collection = param_1;
  (this->LengthActivationCurveAttribute).Name = LengthActivationCurve;
  (this->LengthActivationCurveAttribute).Group = GroupName;
  (this->LengthActivationCurveAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LengthActivationCurveAttribute).DefaultGroupDependency.Number = 0;
  local_60 = LengthActivationCurve;
  local_58 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pFVar11 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar11 = (FValueType *)0x0;
  }
  if ((pFVar11 == (FValueType *)0x0) || (pFVar11->ArrayType != FLinearCurveType)) {
    pTVar13 = (TManagedArray<Chaos::FLinearCurve> *)0x0;
  }
  else {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar11);
    pTVar13 = (TManagedArray<Chaos::FLinearCurve> *)pFVar11->ManagedArray;
    if ((pTVar13 == (TManagedArray<Chaos::FLinearCurve> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
      return pFVar6;
    }
    pTVar13->field_0x8 = 1;
  }
  (this->LengthActivationCurveAttribute).AttributeArray = pTVar13;
  (this->LengthActivationCurveAttribute).ConstAttributeArray = pTVar13;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                         ,0x54,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FMuscleActivationFacade *)(*pcVar1)();
    return pFVar6;
  }
  TManagedArrayAccessor<int>::Add
            (&this->GeometryGroupIndexAttribute,MakePersistent,FGeometryCollection::GeometryGroup);
  pFVar8 = ::FName::FName(local_50,"Tetrahedral");
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
            (&this->MuscleActivationElementAttribute,MakePersistent,*pFVar8);
  TManagedArrayAccessor<UE::Math::TIntVector2<int>_>::Add
            (&this->OriginInsertionPairAttribute,MakePersistent,FGeometryCollection::VerticesGroup);
  TManagedArrayAccessor<float>::Add
            (&this->OriginInsertionRestLengthAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>::Add
            (&this->FiberDirectionMatrixAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->ContractionVolumeScaleAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add
            (&this->FiberLengthRatioAtMaxActivationAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add
            (&this->MuscleLengthRatioThresholdForMaxActivationAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->InflationVolumeScaleAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
  ::Add(&this->FiberStreamlineAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->FiberStreamlineRestLengthAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add
            (&this->MuscleActivationCurveNameAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<Chaos::FLinearCurve>::Add
            (&this->LengthActivationCurveAttribute,MakePersistent,(FName)0x0);
  return this;
}

// FMuscleActivationFacade @ 143f8a700

FMuscleActivationFacade * __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::FMuscleActivationFacade
          (FMuscleActivationFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<Chaos::FLinearCurve> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TManagedArray<int> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FMuscleActivationFacade *pFVar6;
  TManagedArray<FString> *pTVar7;
  char *pcVar8;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar9;
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar10;
  TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *pTVar11;
  TManagedArray<float> *pTVar12;
  TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar14;
  char *pcVar15;
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
  pcVar15 = (char *)0x0;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->GeometryGroupIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->GeometryGroupIndexAttribute).ConstCollection = param_1;
  (this->GeometryGroupIndexAttribute).Name = GeometryGroupIndex;
  (this->GeometryGroupIndexAttribute).Group = GroupName;
  (this->GeometryGroupIndexAttribute).DefaultGroupDependency = FGeometryCollection::GeometryGroup;
  (this->GeometryGroupIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,GeometryGroupIndex,GroupName);
  (this->GeometryGroupIndexAttribute).ConstAttributeArray = pTVar4;
  (this->MuscleActivationElementAttribute).ConstCollection = param_1;
  (this->MuscleActivationElementAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MuscleActivationElementAttribute).Name = MuscleActivationElement;
  (this->MuscleActivationElementAttribute).Group = GroupName;
  (this->MuscleActivationElementAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MuscleActivationElementAttribute).DefaultGroupDependency.Number = 0;
  (this->MuscleActivationElementAttribute).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_e8 = MuscleActivationElement;
  local_e0 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_e8);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '%')) {
    pTVar9 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar8 + 0x20);
    if (pTVar9 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->MuscleActivationElementAttribute).ConstAttributeArray = pTVar9;
  (this->OriginInsertionPairAttribute).ConstCollection = param_1;
  (this->OriginInsertionPairAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->OriginInsertionPairAttribute).Name = OriginInsertionPair;
  (this->OriginInsertionPairAttribute).Group = GroupName;
  (this->OriginInsertionPairAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->OriginInsertionPairAttribute).DefaultGroupDependency.Number = 0;
  (this->OriginInsertionPairAttribute).AttributeArray =
       (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0;
  local_d8 = OriginInsertionPair;
  local_d0 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_d8);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '#')) {
    pTVar10 = (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<UE::Math::TIntVector2<int>_> **)(pcVar8 + 0x20);
    if (pTVar10 == (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->OriginInsertionPairAttribute).ConstAttributeArray = pTVar10;
  (this->OriginInsertionRestLengthAttribute).ConstCollection = param_1;
  (this->OriginInsertionRestLengthAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->OriginInsertionRestLengthAttribute).Name = OriginInsertionRestLength;
  (this->OriginInsertionRestLengthAttribute).Group = GroupName;
  (this->OriginInsertionRestLengthAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->OriginInsertionRestLengthAttribute).DefaultGroupDependency.Number = 0;
  (this->OriginInsertionRestLengthAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_c8 = OriginInsertionRestLength;
  local_c0 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_c8);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar8 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->OriginInsertionRestLengthAttribute).ConstAttributeArray = pTVar12;
  (this->FiberDirectionMatrixAttribute).ConstCollection = param_1;
  (this->FiberDirectionMatrixAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FiberDirectionMatrixAttribute).Name = FiberDirectionMatrix;
  (this->FiberDirectionMatrixAttribute).Group = GroupName;
  (this->FiberDirectionMatrixAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FiberDirectionMatrixAttribute).DefaultGroupDependency.Number = 0;
  (this->FiberDirectionMatrixAttribute).AttributeArray =
       (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_b8 = FiberDirectionMatrix;
  local_b0 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b8);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '0')) {
    pTVar11 = (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar11 = *(TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> **)
               (pcVar8 + 0x20);
    if (pTVar11 ==
        (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->FiberDirectionMatrixAttribute).ConstAttributeArray = pTVar11;
  (this->ContractionVolumeScaleAttribute).ConstCollection = param_1;
  (this->ContractionVolumeScaleAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ContractionVolumeScaleAttribute).Name = ContractionVolumeScale;
  (this->ContractionVolumeScaleAttribute).Group = GroupName;
  (this->ContractionVolumeScaleAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ContractionVolumeScaleAttribute).DefaultGroupDependency.Number = 0;
  (this->ContractionVolumeScaleAttribute).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_a8 = ContractionVolumeScale;
  local_a0 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a8);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '&')) {
    pTVar14 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar14 = *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(pcVar8 + 0x20);
    if (pTVar14 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->ContractionVolumeScaleAttribute).ConstAttributeArray = pTVar14;
  (this->FiberLengthRatioAtMaxActivationAttribute).ConstCollection = param_1;
  (this->FiberLengthRatioAtMaxActivationAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FiberLengthRatioAtMaxActivationAttribute).Name = FiberLengthRatioAtMaxActivation;
  (this->FiberLengthRatioAtMaxActivationAttribute).Group = GroupName;
  (this->FiberLengthRatioAtMaxActivationAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FiberLengthRatioAtMaxActivationAttribute).DefaultGroupDependency.Number = 0;
  (this->FiberLengthRatioAtMaxActivationAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_98 = FiberLengthRatioAtMaxActivation;
  local_90 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_98);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar8 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray = pTVar12;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstCollection = param_1;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).Collection =
       (FManagedArrayCollection *)0x0;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).Name =
       MuscleLengthRatioThresholdForMaxActivation;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).Group = GroupName;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).DefaultGroupDependency.ComparisonIndex
       = 0;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).DefaultGroupDependency.Number = 0;
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).AttributeArray =
       (TManagedArray<float> *)0x0;
  local_88 = MuscleLengthRatioThresholdForMaxActivation;
  local_80 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_88);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar8 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray = pTVar12;
  (this->InflationVolumeScaleAttribute).ConstCollection = param_1;
  (this->InflationVolumeScaleAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->InflationVolumeScaleAttribute).Name = InflationVolumeScale;
  (this->InflationVolumeScaleAttribute).Group = GroupName;
  (this->InflationVolumeScaleAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InflationVolumeScaleAttribute).DefaultGroupDependency.Number = 0;
  (this->InflationVolumeScaleAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_78 = InflationVolumeScale;
  local_70 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_78);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\t')) {
    pTVar12 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<float> **)(pcVar8 + 0x20);
    if (pTVar12 == (TManagedArray<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->InflationVolumeScaleAttribute).ConstAttributeArray = pTVar12;
  (this->FiberStreamlineAttribute).ConstCollection = param_1;
  (this->FiberStreamlineAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FiberStreamlineAttribute).Name = FiberStreamline;
  (this->FiberStreamlineAttribute).Group = GroupName;
  (this->FiberStreamlineAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FiberStreamlineAttribute).DefaultGroupDependency.Number = 0;
  (this->FiberStreamlineAttribute).AttributeArray =
       (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  local_68 = FiberStreamline;
  local_60 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '1')) {
    pTVar13 = (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
               *)0x0;
  }
  else {
    pTVar13 = *(TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                **)(pcVar8 + 0x20);
    if (pTVar13 ==
        (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->FiberStreamlineAttribute).ConstAttributeArray = pTVar13;
  (this->FiberStreamlineRestLengthAttribute).ConstCollection = param_1;
  (this->FiberStreamlineRestLengthAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FiberStreamlineRestLengthAttribute).Name = FiberStreamlineRestLength;
  (this->FiberStreamlineRestLengthAttribute).Group = GroupName;
  (this->FiberStreamlineRestLengthAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FiberStreamlineRestLengthAttribute).DefaultGroupDependency.Number = 0;
  (this->FiberStreamlineRestLengthAttribute).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_58 = FiberStreamlineRestLength;
  local_50 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '&')) {
    pTVar14 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar14 = *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(pcVar8 + 0x20);
    if (pTVar14 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->FiberStreamlineRestLengthAttribute).ConstAttributeArray = pTVar14;
  (this->MuscleActivationCurveNameAttribute).ConstCollection = param_1;
  (this->MuscleActivationCurveNameAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MuscleActivationCurveNameAttribute).Name = MuscleActivationCurveName;
  (this->MuscleActivationCurveNameAttribute).Group = GroupName;
  (this->MuscleActivationCurveNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MuscleActivationCurveNameAttribute).DefaultGroupDependency.Number = 0;
  (this->MuscleActivationCurveNameAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<FString>
                     (param_1,MuscleActivationCurveName,GroupName);
  (this->MuscleActivationCurveNameAttribute).ConstAttributeArray = pTVar7;
  (this->LengthActivationCurveAttribute).ConstCollection = param_1;
  (this->LengthActivationCurveAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->LengthActivationCurveAttribute).Name = LengthActivationCurve;
  (this->LengthActivationCurveAttribute).Group = GroupName;
  (this->LengthActivationCurveAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LengthActivationCurveAttribute).DefaultGroupDependency.Number = 0;
  (this->LengthActivationCurveAttribute).AttributeArray = (TManagedArray<Chaos::FLinearCurve> *)0x0;
  local_48 = LengthActivationCurve;
  local_40 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pcVar8 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar15;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '4')) {
    (this->LengthActivationCurveAttribute).ConstAttributeArray =
         (TManagedArray<Chaos::FLinearCurve> *)0x0;
  }
  else {
    pTVar1 = *(TManagedArray<Chaos::FLinearCurve> **)(pcVar8 + 0x20);
    if (pTVar1 == (TManagedArray<Chaos::FLinearCurve> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMuscleActivationFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
    (this->LengthActivationCurveAttribute).ConstAttributeArray = pTVar1;
  }
  return this;
}

// AddMuscleActivationData @ 143f96d30

int __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::AddMuscleActivationData
          (FMuscleActivationFacade *this,FMuscleActivationData *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                       ,0x66,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (((((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
         ((this->MuscleActivationElementAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
       (((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0))))
      && (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
          (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0 &&
           ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0)))))) &&
     ((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    if ((this->MuscleActivationElementAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x41,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    iVar3 = FManagedArrayCollection::AddElements
                      ((this->MuscleActivationElementAttribute).Collection,1,
                       (this->MuscleActivationElementAttribute).Group);
    UpdateMuscleActivationData(this,iVar3,param_1);
    return iVar3;
  }
  return -1;
}

// AssignCurveName @ 143f9c6b0

int __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::AssignCurveName
          (FMuscleActivationFacade *this,FString *param_1,FString *param_2)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FString *pFVar7;
  FString local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                       ,0x2ea,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar7 = ::FString::FString(&local_18,param_2);
  uVar5 = FindMuscleIndexByName(this,pFVar7);
  if ((this->MuscleActivationCurveNameAttribute).ConstAttributeArray ==
      (TManagedArray<FString> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x3b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (-1 < (int)uVar5) {
    iVar4 = (**(code **)(*(longlong *)(this->MuscleActivationCurveNameAttribute).ConstAttributeArray
                        + 0x60))();
    if ((int)uVar5 < iVar4) {
      if (((this->MuscleActivationCurveNameAttribute).AttributeArray ==
           (TManagedArray<FString> *)0x0) ||
         ((this->MuscleActivationCurveNameAttribute).Collection == (FManagedArrayCollection *)0x0))
      {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      ((this->MuscleActivationCurveNameAttribute).AttributeArray)->field_0x8 = 1;
      pTVar1 = (this->MuscleActivationCurveNameAttribute).AttributeArray;
      uVar6 = 0;
      if ((int)uVar5 < *(int *)&pTVar1->field_0x18) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
      ::FString::operator=
                ((FString *)((longlong)(int)uVar5 * 0x10 + *(longlong *)&pTVar1->field_0x10),param_1
                );
    }
  }
  return uVar5;
}

// BuildStreamlines @ 143f9eea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
* __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::BuildStreamlines
          (FMuscleActivationFacade *this,
          TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FManagedArrayCollection *pFVar5;
  FName FVar6;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  void *_Src;
  code *pcVar8;
  undefined1 auVar9 [12];
  double dVar10;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FMuscleActivationFacade *pFVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  FName *pFVar21;
  TManagedArray<UE::Math::TVector<float>_> *pTVar22;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar23;
  TManagedArray<int> *pTVar24;
  TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint *puVar31;
  ForAnyElementType *pFVar32;
  FScriptContainerElement *pFVar33;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar34;
  uint uVar35;
  uint uVar36;
  ForAnyElementType FVar37;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar38;
  longlong *plVar39;
  FScriptContainerElement *pFVar40;
  longlong lVar41;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar42;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *pTVar43;
  longlong *plVar44;
  longlong lVar45;
  longlong lVar46;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *pTVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  undefined4 uVar67;
  undefined1 auStackY_5c8 [32];
  undefined8 local_578;
  float local_570;
  uint local_568;
  FScriptContainerElement local_564;
  ForAnyElementType local_560;
  undefined8 local_558;
  TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *local_550;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_548;
  uint local_538 [2];
  ulonglong local_530;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_528;
  int local_518;
  int local_514;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_510;
  ForAnyElementType local_508;
  undefined8 local_500;
  bool local_4f8;
  bool local_4f7 [15];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_4e8;
  float local_4e0 [2];
  FScriptContainerElement *local_4d8;
  uint local_4d0 [2];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_4c8;
  float local_4b8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_4b0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_4a0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_490;
  ForAnyElementType local_480;
  undefined8 local_478;
  ulonglong local_470;
  uint local_468 [2];
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> local_460;
  TArray<int,TSizedDefaultAllocator<32>_> *local_450;
  ForAnyElementType local_448;
  int local_440;
  int local_43c;
  undefined1 local_438;
  undefined1 local_437 [7];
  TArray<int,TSizedDefaultAllocator<32>_> *local_430;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_428;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_420;
  TArray<bool,TSizedDefaultAllocator<32>_> local_410;
  int local_400 [2];
  TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_3f8;
  longlong *local_3f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_3e8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_3d8;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_3c8;
  FScriptContainerElement *local_3b8;
  FScriptContainerElement *local_3b0;
  float local_3a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_3a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_390;
  int local_380 [2];
  longlong local_378;
  FMuscleActivationFacade *local_370;
  TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_368;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_358;
  float local_348;
  float fStack_344;
  float local_340;
  TVector<float>_u_0 local_33c;
  longlong *local_330;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_328;
  float local_318;
  float fStack_314;
  float local_310;
  FScriptContainerElement *local_308;
  FScriptContainerElement *local_300;
  longlong local_2f8;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  undefined1 local_2b8 [88];
  ForAnyElementType local_260;
  int local_258;
  int local_254;
  ForAnyElementType local_250;
  int local_248;
  int local_244 [3];
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FMuscleActivationData local_1c8;
  TVector<float>_u_0 local_148;
  undefined8 local_13c;
  float local_134;
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined4 uStack_11c;
  TVector<float>_u_0 TStack_118;
  float local_10c;
  TVector<double>_u_0 local_108;
  EIntersectionType local_f0 [2];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  FVar6 = FGeometryCollection::VerticesGroup;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = this->ConstCollection;
  local_560.Data = (FScriptContainerElement *)0x0;
  local_558 = 0;
  local_480.Data = (FScriptContainerElement *)0x0;
  local_478 = 0;
  local_450 = param_2;
  local_430 = param_1;
  local_3f8 = __return_storage_ptr__;
  local_370 = this;
  pFVar21 = ::FName::FName(&local_1d8,"Vertex");
  pTVar22 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>(pFVar5,*pFVar21,FVar6)
  ;
  if (pTVar22 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    pFVar5 = this->ConstCollection;
    pFVar21 = ::FName::FName(&local_1d0,"Tetrahedral");
    FVar6 = *pFVar21;
    pFVar21 = ::FName::FName(&local_238,"Tetrahedron");
    pTVar23 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector4<int>_>
                        (pFVar5,*pFVar21,FVar6);
    if (pTVar23 != (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
      pFVar5 = this->ConstCollection;
      pFVar21 = ::FName::FName(&local_230,"Tetrahedral");
      FVar6 = *pFVar21;
      pFVar21 = ::FName::FName(&local_228,"FiberDirection");
      pTVar22 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>
                          (pFVar5,*pFVar21,FVar6);
      FVar6 = FGeometryCollection::GeometryGroup;
      if (pTVar22 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        pFVar5 = this->ConstCollection;
        pFVar21 = ::FName::FName(&local_220,"TetrahedronStart");
        pTVar24 = FManagedArrayCollection::FindAttribute<int>(pFVar5,*pFVar21,FVar6);
        FVar6 = FGeometryCollection::GeometryGroup;
        if (pTVar24 != (TManagedArray<int> *)0x0) {
          pFVar5 = this->ConstCollection;
          pFVar21 = ::FName::FName(&local_218,"TetrahedronCount");
          pTVar24 = FManagedArrayCollection::FindAttribute<int>(pFVar5,*pFVar21,FVar6);
          FVar6 = FGeometryCollection::VerticesGroup;
          if (pTVar24 != (TManagedArray<int> *)0x0) {
            pFVar5 = this->ConstCollection;
            pFVar21 = ::FName::FName(&local_210,"Vertex");
            pTVar22 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>
                                (pFVar5,*pFVar21,FVar6);
            pFVar5 = this->ConstCollection;
            local_4e8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                        &pTVar22->field_0x10;
            pFVar21 = ::FName::FName(&local_208,"Tetrahedral");
            FVar6 = *pFVar21;
            pFVar21 = ::FName::FName(&local_200,"Tetrahedron");
            pTVar23 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector4<int>_>
                                (pFVar5,*pFVar21,FVar6);
            pFVar5 = this->ConstCollection;
            local_550 = (TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *)
                        &pTVar23->field_0x10;
            pFVar21 = ::FName::FName(&local_1f8,"Tetrahedral");
            FVar6 = *pFVar21;
            pFVar21 = ::FName::FName(&local_1f0,"FiberDirection");
            pTVar22 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>
                                (pFVar5,*pFVar21,FVar6);
            FVar6 = FGeometryCollection::GeometryGroup;
            pFVar5 = this->ConstCollection;
            local_3b8 = (FScriptContainerElement *)&pTVar22->field_0x10;
            pFVar21 = ::FName::FName(&local_1e8,"TetrahedronStart");
            pTVar24 = FManagedArrayCollection::FindAttribute<int>(pFVar5,*pFVar21,FVar6);
            FVar6 = FGeometryCollection::GeometryGroup;
            pFVar5 = this->ConstCollection;
            local_330 = (longlong *)&pTVar24->field_0x10;
            pFVar21 = ::FName::FName(&local_1e0,"TetrahedronCount");
            pTVar24 = FManagedArrayCollection::FindAttribute<int>(pFVar5,*pFVar21,FVar6);
            local_3f0 = (longlong *)&pTVar24->field_0x10;
            if ((*(int *)&pTVar23->field_0x18 != *(int *)&pTVar22->field_0x18) &&
               (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<1867048598835823085>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                                    ,0x1ed,"Elements.Num() == FiberDirections.Num()"), bVar16)) {
              pcVar8 = (code *)swi(3);
              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar8)();
              return pTVar25;
            }
            if (0x7fffffff < local_478._4_4_) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_480,0,(int *)((longlong)&local_478 + 4));
            }
            local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::
            CopyToEmpty<UE::Math::TVector<float>,int>
                      (&local_3d8,*(TVector<float> **)&pTVar22->field_0x10,
                       *(int *)&pTVar22->field_0x18,0);
            uVar29 = 0;
            local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_358.ArrayNum = 0;
            local_358.ArrayMax = 0;
            local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_420.ArrayNum = 0;
            local_420.ArrayMax = 0;
            TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                      (&local_420,*(int *)&pTVar23->field_0x18,Default);
            pTVar43 = local_550;
            uVar26 = uVar29;
            pTVar47 = (TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *)
                      &pTVar23->field_0x10;
            if (0 < *(int *)&pTVar23->field_0x18) {
              do {
                uVar35 = (uint)uVar29;
                uVar27 = ~uVar35 >> 0x1f;
                uVar28 = 0;
                if ((int)uVar35 < local_420.ArrayNum) {
                  uVar28 = uVar27;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                pFVar33 = local_420.AllocatorInstance.Data + uVar26;
                uVar28 = 0;
                if ((int)uVar35 < pTVar43->ArrayNum) {
                  uVar28 = uVar27;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                    /* WARNING: Load size is inaccurate */
                pFVar40 = (pTVar43->AllocatorInstance).Data + uVar26;
                if (((*pFVar33 <= pFVar40) &&
                    (pFVar40 < *pFVar33 + (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                iVar17 = *(int *)(pFVar33 + 8);
                if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
                }
                *(int *)(pFVar33 + 8) = iVar17 + 1;
                    /* WARNING: Load size is inaccurate */
                *(undefined4 *)(*pFVar33 + (longlong)iVar17 * 4) = *(undefined4 *)pFVar40;
                uVar28 = 0;
                if ((int)uVar35 < local_420.ArrayNum) {
                  uVar28 = uVar27;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                pFVar33 = local_420.AllocatorInstance.Data + uVar26;
                uVar28 = 0;
                if ((int)uVar35 < pTVar43->ArrayNum) {
                  uVar28 = uVar27;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                    /* WARNING: Load size is inaccurate */
                pFVar40 = (pTVar43->AllocatorInstance).Data + uVar26 + 4;
                if (((*pFVar33 <= pFVar40) &&
                    (pFVar40 < *pFVar33 + (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                iVar17 = *(int *)(pFVar33 + 8);
                if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
                }
                *(int *)(pFVar33 + 8) = iVar17 + 1;
                    /* WARNING: Load size is inaccurate */
                *(undefined4 *)(*pFVar33 + (longlong)iVar17 * 4) = *(undefined4 *)pFVar40;
                uVar28 = 0;
                if ((int)uVar35 < local_420.ArrayNum) {
                  uVar28 = uVar27;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                pFVar33 = local_420.AllocatorInstance.Data + uVar26;
                uVar28 = 0;
                if ((int)uVar35 < pTVar43->ArrayNum) {
                  uVar28 = uVar27;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                    /* WARNING: Load size is inaccurate */
                pFVar40 = (pTVar43->AllocatorInstance).Data + uVar26 + 8;
                if (((*pFVar33 <= pFVar40) &&
                    (pFVar40 < *pFVar33 + (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                iVar17 = *(int *)(pFVar33 + 8);
                if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
                }
                *(int *)(pFVar33 + 8) = iVar17 + 1;
                    /* WARNING: Load size is inaccurate */
                *(undefined4 *)(*pFVar33 + (longlong)iVar17 * 4) = *(undefined4 *)pFVar40;
                uVar28 = 0;
                if ((int)uVar35 < local_420.ArrayNum) {
                  uVar28 = uVar27;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                pFVar33 = local_420.AllocatorInstance.Data + uVar26;
                uVar28 = 0;
                if ((int)uVar35 < pTVar43->ArrayNum) {
                  uVar28 = uVar27;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                    /* WARNING: Load size is inaccurate */
                pFVar40 = (pTVar43->AllocatorInstance).Data + uVar26 + 0xc;
                if (((*pFVar33 <= pFVar40) &&
                    (pFVar40 < *pFVar33 + (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                iVar17 = *(int *)(pFVar33 + 8);
                if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
                }
                *(int *)(pFVar33 + 8) = iVar17 + 1;
                uVar29 = (ulonglong)(uVar35 + 1);
                    /* WARNING: Load size is inaccurate */
                *(undefined4 *)(*pFVar33 + (longlong)iVar17 * 4) = *(undefined4 *)pFVar40;
                param_2 = local_450;
                uVar26 = uVar26 + 0x10;
                pTVar47 = local_550;
              } while ((int)(uVar35 + 1) < pTVar43->ArrayNum);
            }
            uVar29 = 0;
            Chaos::Utilities::ComputeIncidentElements(&local_328,&local_420,&local_358);
            Chaos::Utilities::
            ComputeMeshFacePairs<_Chaos::Utilities::ComputeTetMeshFacePairs_::__l2::<lambda_3>,_Chaos::Utilities::ComputeTetMeshFacePairs_::__l2::<lambda_4>_>
                      (&local_460,pTVar47,(<lambda_1> *)local_437,(<lambda_2> *)&local_438);
            local_4b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_4b0.ArrayNum = 0;
            local_4b0.ArrayMax = 0;
            TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                      (&local_4b0,pTVar47->ArrayNum << 2,Default);
            uVar26 = uVar29;
            if (0 < local_460.ArrayNum) {
              do {
                uVar27 = (uint)uVar29;
                uVar35 = ~uVar27 >> 0x1f;
                uVar28 = 0;
                if ((int)uVar27 < local_460.ArrayNum) {
                  uVar28 = uVar35;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                local_518 = (int)(*(int *)(local_460.AllocatorInstance.Data + uVar26) +
                                 (*(int *)(local_460.AllocatorInstance.Data + uVar26) >> 0x1f & 3U))
                            >> 2;
                uVar28 = 0;
                if ((int)uVar27 < local_460.ArrayNum) {
                  uVar28 = uVar35;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                uVar28 = *(uint *)(local_460.AllocatorInstance.Data + uVar26);
                uVar18 = 0;
                uVar36 = uVar18;
                if ((int)uVar28 < local_4b0.ArrayNum) {
                  uVar36 = ~uVar28 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                pFVar33 = local_4b0.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x10;
                if (((*(FScriptContainerElement **)&pFVar33->field_0x0 <=
                      (FScriptContainerElement *)&local_518) &&
                    ((FScriptContainerElement *)&local_518 <
                     *(FScriptContainerElement **)&pFVar33->field_0x0 +
                     (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                iVar17 = *(int *)(pFVar33 + 8);
                if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
                }
                *(int *)(pFVar33 + 8) = iVar17 + 1;
                *(int *)(*(FScriptContainerElement **)&pFVar33->field_0x0 + (longlong)iVar17 * 4) =
                     local_518;
                uVar28 = uVar18;
                if ((int)uVar27 < local_460.ArrayNum) {
                  uVar28 = uVar35;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                if (-1 < *(int *)(local_460.AllocatorInstance.Data + uVar26 + 4)) {
                  uVar28 = uVar18;
                  if ((int)uVar27 < local_460.ArrayNum) {
                    uVar28 = uVar35;
                  }
                  if ((uVar28 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  local_514 = (int)(*(int *)(local_460.AllocatorInstance.Data + uVar26 + 4) +
                                   (*(int *)(local_460.AllocatorInstance.Data + uVar26 + 4) >> 0x1f
                                   & 3U)) >> 2;
                  if ((int)uVar27 < local_460.ArrayNum) {
                    uVar18 = uVar35;
                  }
                  if ((uVar18 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  uVar28 = *(uint *)(local_460.AllocatorInstance.Data + uVar26);
                  uVar18 = 0;
                  uVar36 = uVar18;
                  if ((int)uVar28 < local_4b0.ArrayNum) {
                    uVar36 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  pFVar33 = local_4b0.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x10;
                  if (((*(FScriptContainerElement **)&pFVar33->field_0x0 <=
                        (FScriptContainerElement *)&local_514) &&
                      ((FScriptContainerElement *)&local_514 <
                       *(FScriptContainerElement **)&pFVar33->field_0x0 +
                       (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  iVar17 = *(int *)(pFVar33 + 8);
                  if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
                  }
                  *(int *)(pFVar33 + 8) = iVar17 + 1;
                  *(int *)(*(FScriptContainerElement **)&pFVar33->field_0x0 + (longlong)iVar17 * 4)
                       = local_514;
                  uVar28 = uVar18;
                  if ((int)uVar27 < local_460.ArrayNum) {
                    uVar28 = uVar35;
                  }
                  if ((uVar28 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  uVar28 = *(uint *)(local_460.AllocatorInstance.Data + uVar26 + 4);
                  uVar36 = uVar18;
                  if ((int)uVar28 < local_4b0.ArrayNum) {
                    uVar36 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  pFVar33 = local_4b0.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x10;
                  if (((*(FScriptContainerElement **)&pFVar33->field_0x0 <=
                        (FScriptContainerElement *)&local_518) &&
                      ((FScriptContainerElement *)&local_518 <
                       *(FScriptContainerElement **)&pFVar33->field_0x0 +
                       (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  iVar17 = *(int *)(pFVar33 + 8);
                  if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
                  }
                  *(int *)(pFVar33 + 8) = iVar17 + 1;
                  *(int *)(*(FScriptContainerElement **)&pFVar33->field_0x0 + (longlong)iVar17 * 4)
                       = local_518;
                  uVar28 = uVar18;
                  if ((int)uVar27 < local_460.ArrayNum) {
                    uVar28 = uVar35;
                  }
                  if ((uVar28 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  uVar28 = *(uint *)(local_460.AllocatorInstance.Data + uVar26 + 4);
                  if ((int)uVar28 < local_4b0.ArrayNum) {
                    uVar18 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  pFVar33 = local_4b0.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x10;
                  if (((*(FScriptContainerElement **)&pFVar33->field_0x0 <=
                        (FScriptContainerElement *)&local_514) &&
                      ((FScriptContainerElement *)&local_514 <
                       *(FScriptContainerElement **)&pFVar33->field_0x0 +
                       (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  iVar17 = *(int *)(pFVar33 + 8);
                  if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)pFVar33,(int *)(pFVar33 + 0xc));
                  }
                  *(int *)(pFVar33 + 8) = iVar17 + 1;
                  *(int *)(*(FScriptContainerElement **)&pFVar33->field_0x0 + (longlong)iVar17 * 4)
                       = local_514;
                }
                uVar29 = (ulonglong)(uVar27 + 1);
                uVar26 = uVar26 + 8;
              } while ((int)(uVar27 + 1) < local_460.ArrayNum);
            }
            pTVar38 = local_4e8;
            local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_4a0.ArrayNum = 0;
            local_4a0.ArrayMax = 0;
            local_490.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_490.ArrayNum = 0;
            local_490.ArrayMax = 0;
            local_4f8 = false;
            TArray<bool,TSizedDefaultAllocator<32>_>::Init
                      (&local_4a0,&local_4f8,local_4e8->ArrayNum);
            local_4f7[0] = false;
            TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_490,local_4f7,pTVar38->ArrayNum);
            pTVar42 = local_430;
            pFVar40 = (local_430->AllocatorInstance).Data;
            iVar17 = local_430->ArrayNum;
            pFVar33 = pFVar40 + (longlong)iVar17 * 4;
            while( true ) {
              if (pTVar42->ArrayNum != iVar17) {
                local_4f7[1] = false;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_4f7 + 1);
              }
              if (pFVar40 == pFVar33) break;
              uVar28 = *(uint *)pFVar40;
              uVar27 = 0;
              if ((int)uVar28 < local_4a0.ArrayNum) {
                uVar27 = ~uVar28 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar8 = (code *)swi(3);
                pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar8)();
                return pTVar25;
              }
              pFVar40 = pFVar40 + 4;
              local_4a0.AllocatorInstance.Data[(int)uVar28] = (FScriptContainerElement)0x1;
            }
            pFVar40 = (param_2->AllocatorInstance).Data;
            iVar17 = param_2->ArrayNum;
            pFVar33 = pFVar40 + (longlong)iVar17 * 4;
            while( true ) {
              if (param_2->ArrayNum != iVar17) {
                local_4f7[2] = false;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_4f7 + 2);
              }
              fVar62 = __real_3f800000;
              fVar61 = __real_322bcc77;
              if (pFVar40 == pFVar33) break;
              uVar28 = *(uint *)pFVar40;
              uVar27 = 0;
              if ((int)uVar28 < local_490.ArrayNum) {
                uVar27 = ~uVar28 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar8 = (code *)swi(3);
                pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar8)();
                return pTVar25;
              }
              pFVar40 = pFVar40 + 4;
              local_490.AllocatorInstance.Data[(int)uVar28] = (FScriptContainerElement)0x1;
            }
            local_568 = 0;
            if (0 < local_4b0.ArrayNum) {
              local_530 = 0;
              local_510 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
              do {
                pTVar38 = local_510;
                uVar28 = 0;
                if ((int)local_568 < local_4b0.ArrayNum) {
                  uVar28 = ~local_568 >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                if (*(int *)(local_4b0.AllocatorInstance.Data + (longlong)pTVar38 + 8) == 1) {
                  uVar28 = 0;
                  if ((int)local_568 < local_4b0.ArrayNum) {
                    uVar28 = ~local_568 >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  FVar37.Data = local_4b0.AllocatorInstance.Data;
                  uVar26 = local_530;
                  if ((*(int *)(local_4b0.AllocatorInstance.Data + local_530 * 0x10 + 8) < 1) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  uVar28 = **(uint **)&FVar37.Data[uVar26 * 0x10].field_0x0;
                  lVar45 = (longlong)(int)uVar28;
                  uVar35 = ~uVar28 >> 0x1f;
                  uVar27 = 0;
                  if ((int)uVar28 < pTVar47->ArrayNum) {
                    uVar27 = uVar35;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  uVar27 = *(uint *)((pTVar47->AllocatorInstance).Data + lVar45 * 0x10);
                  uVar36 = 0;
                  if ((int)uVar27 < local_4a0.ArrayNum) {
                    uVar36 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  pTVar47 = local_550;
                  if (local_4a0.AllocatorInstance.Data[(int)uVar27] == (FScriptContainerElement)0x0)
                  {
                    uVar36 = 0;
                    if ((int)uVar27 < local_490.ArrayNum) {
                      uVar36 = ~uVar27 >> 0x1f;
                    }
                    if ((uVar36 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                 *)(*pcVar8)();
                      return pTVar25;
                    }
                    pTVar43 = local_550;
                    pTVar47 = local_550;
                    if (local_490.AllocatorInstance.Data[(int)uVar27] ==
                        (FScriptContainerElement)0x0) {
                      uVar27 = 0;
                      if ((int)uVar28 < local_550->ArrayNum) {
                        uVar27 = uVar35;
                      }
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      uVar27 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar45 * 0x10 + 4);
                      uVar36 = 0;
                      if ((int)uVar27 < local_4a0.ArrayNum) {
                        uVar36 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      pTVar47 = local_550;
                      if (local_4a0.AllocatorInstance.Data[(int)uVar27] ==
                          (FScriptContainerElement)0x0) {
                        uVar36 = 0;
                        if ((int)uVar27 < local_490.ArrayNum) {
                          uVar36 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        pTVar43 = local_550;
                        pTVar47 = local_550;
                        if (local_490.AllocatorInstance.Data[(int)uVar27] ==
                            (FScriptContainerElement)0x0) {
                          uVar27 = 0;
                          if ((int)uVar28 < local_550->ArrayNum) {
                            uVar27 = uVar35;
                          }
                          if ((uVar27 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          uVar27 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar45 * 0x10 + 8);
                          uVar36 = 0;
                          if ((int)uVar27 < local_4a0.ArrayNum) {
                            uVar36 = ~uVar27 >> 0x1f;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          pTVar47 = local_550;
                          if (local_4a0.AllocatorInstance.Data[(int)uVar27] ==
                              (FScriptContainerElement)0x0) {
                            uVar36 = 0;
                            if ((int)uVar27 < local_490.ArrayNum) {
                              uVar36 = ~uVar27 >> 0x1f;
                            }
                            if ((uVar36 == 0) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            pTVar47 = local_550;
                            if (local_490.AllocatorInstance.Data[(int)uVar27] ==
                                (FScriptContainerElement)0x0) {
                              uVar27 = 0;
                              if ((int)uVar28 < local_550->ArrayNum) {
                                uVar27 = uVar35;
                              }
                              if ((uVar27 == 0) &&
                                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                pcVar8 = (code *)swi(3);
                                pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                           *)(*pcVar8)();
                                return pTVar25;
                              }
                              uVar27 = *(uint *)((pTVar47->AllocatorInstance).Data +
                                                lVar45 * 0x10 + 0xc);
                              uVar36 = 0;
                              if ((int)uVar27 < local_4a0.ArrayNum) {
                                uVar36 = ~uVar27 >> 0x1f;
                              }
                              if ((uVar36 == 0) &&
                                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                pcVar8 = (code *)swi(3);
                                pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                           *)(*pcVar8)();
                                return pTVar25;
                              }
                              if (local_4a0.AllocatorInstance.Data[(int)uVar27] ==
                                  (FScriptContainerElement)0x0) {
                                uVar36 = 0;
                                if ((int)uVar27 < local_490.ArrayNum) {
                                  uVar36 = ~uVar27 >> 0x1f;
                                }
                                if ((uVar36 == 0) &&
                                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                  pcVar8 = (code *)swi(3);
                                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                             *)(*pcVar8)();
                                  return pTVar25;
                                }
                                if (local_490.AllocatorInstance.Data[(int)uVar27] ==
                                    (FScriptContainerElement)0x0) {
                                  uVar27 = local_568 & 0x80000003;
                                  if ((int)uVar27 < 0) {
                                    uVar27 = (uVar27 - 1 | 0xfffffffc) + 1;
                                  }
                                  if (uVar27 == 0) {
                                    lVar30 = 3;
                                    lVar41 = 1;
LAB_143fa03e6:
                                    lVar46 = 2;
                                  }
                                  else if (uVar27 == 1) {
                                    lVar30 = 2;
                                    lVar46 = 3;
                                    lVar41 = 0;
                                  }
                                  else if (uVar27 == 2) {
                                    lVar30 = 3;
                                    lVar46 = 1;
                                    lVar41 = 0;
                                  }
                                  else {
                                    if (uVar27 == 3) {
                                      lVar30 = 1;
                                      lVar41 = 0;
                                      goto LAB_143fa03e6;
                                    }
                                    lVar30 = -1;
                                    lVar46 = -1;
                                    lVar41 = -1;
                                  }
                                  uVar27 = 0;
                                  if ((int)uVar28 < pTVar47->ArrayNum) {
                                    uVar27 = uVar35;
                                  }
                                  if ((uVar27 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  uVar27 = *(uint *)((pTVar47->AllocatorInstance).Data +
                                                    (lVar30 + lVar45 * 4) * 4);
                                  lVar30 = (longlong)(int)uVar27;
                                  uVar36 = 0;
                                  if ((int)uVar28 < local_550->ArrayNum) {
                                    uVar36 = uVar35;
                                  }
                                  if ((uVar36 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  pTVar43 = local_550;
                                  uVar36 = *(uint *)((local_550->AllocatorInstance).Data +
                                                    (lVar46 + lVar45 * 4) * 4);
                                  uVar18 = 0;
                                  if ((int)uVar28 < local_550->ArrayNum) {
                                    uVar18 = uVar35;
                                  }
                                  if ((uVar18 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  pTVar38 = local_4e8;
                                  uVar18 = *(uint *)((pTVar43->AllocatorInstance).Data +
                                                    (lVar41 + lVar45 * 4) * 4);
                                  lVar41 = (longlong)(int)uVar18;
                                  uVar19 = 0;
                                  if ((int)uVar36 < local_4e8->ArrayNum) {
                                    uVar19 = ~uVar36 >> 0x1f;
                                  }
                                  if ((uVar19 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  local_470 = (longlong)(int)uVar36 * 3;
                                  local_4d8 = (pTVar38->AllocatorInstance).Data;
                                  uVar36 = 0;
                                  if ((int)uVar18 < pTVar38->ArrayNum) {
                                    uVar36 = ~uVar18 >> 0x1f;
                                  }
                                  if ((uVar36 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  fVar50 = *(float *)(local_4d8 + local_470 * 4);
                                  fVar66 = *(float *)(local_4d8 + local_470 * 4 + 4);
                                  fVar56 = *(float *)(local_4d8 + local_470 * 4 + 8);
                                  pFVar33 = (local_4e8->AllocatorInstance).Data;
                                  fVar52 = *(float *)(pFVar33 + lVar41 * 0xc);
                                  fVar60 = *(float *)(pFVar33 + lVar41 * 0xc + 4);
                                  fVar51 = *(float *)(pFVar33 + lVar41 * 0xc + 8);
                                  uVar36 = 0;
                                  if ((int)uVar27 < local_4e8->ArrayNum) {
                                    uVar36 = ~uVar27 >> 0x1f;
                                  }
                                  if ((uVar36 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  local_450 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                                              (local_4e8->AllocatorInstance).Data;
                                  uVar27 = 0;
                                  if ((int)uVar18 < local_4e8->ArrayNum) {
                                    uVar27 = ~uVar18 >> 0x1f;
                                  }
                                  if ((uVar27 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  pFVar40 = local_3b8;
                                  pFVar33 = (local_4e8->AllocatorInstance).Data;
                                  fVar49 = *(float *)((longlong)&local_450->AllocatorInstance +
                                                     lVar30 * 0xc) -
                                           *(float *)(pFVar33 + lVar41 * 0xc);
                                  fVar54 = *(float *)((longlong)&local_450->AllocatorInstance +
                                                     lVar30 * 0xc + 4) -
                                           *(float *)(pFVar33 + lVar41 * 0xc + 4);
                                  fVar48 = (float)(&local_450->ArrayNum)[lVar30 * 3] -
                                           *(float *)(pFVar33 + lVar41 * 0xc + 8);
                                  fVar58 = fVar49 * (fVar56 - fVar51) - fVar48 * (fVar50 - fVar52);
                                  fVar56 = fVar48 * (fVar66 - fVar60) - fVar54 * (fVar56 - fVar51);
                                  local_310 = fVar54 * (fVar50 - fVar52) -
                                              fVar49 * (fVar66 - fVar60);
                                  fVar50 = fVar58 * fVar58 + fVar56 * fVar56 + local_310 * local_310
                                  ;
                                  if (fVar50 == fVar62) {
                                    fVar50 = fVar58;
                                    fVar66 = fVar56;
                                    uVar59 = local_310;
                                    local_4c8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                                                 *)CONCAT44(fVar58,fVar56);
                                  }
                                  else if (fVar61 <= fVar50) {
                                    fVar52 = fVar62 / SQRT(fVar50);
                                    fVar50 = fVar52 * fVar58;
                                    fVar66 = fVar52 * fVar56;
                                    uVar59 = fVar52 * local_310;
                                  }
                                  else {
                                    fVar50 = (float)((ulonglong)
                                                     UE::Math::TVector<float>::ZeroVector.field0_0x0
                                                     ._0_8_ >> 0x20);
                                    local_4c8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                                                 *)UE::Math::TVector<float>::ZeroVector.field0_0x0.
                                                   _0_8_;
                                    pTVar38 = local_4c8;
                                    local_4c8._0_4_ =
                                         (float)UE::Math::TVector<float>::ZeroVector.field0_0x0.
                                                _0_8_;
                                    fVar66 = local_4c8._0_4_;
                                    uVar59 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                                    local_4c8 = pTVar38;
                                  }
                                  _local_318 = CONCAT44(fVar58,fVar56);
                                  uVar27 = 0;
                                  if ((int)uVar28 < (int)*(uint *)(local_3b8 + 8)) {
                                    uVar27 = uVar35;
                                  }
                                  if ((uVar27 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  lVar30 = *(longlong *)pFVar40;
                                  uVar27 = 0;
                                  if ((int)uVar28 < (int)*(uint *)(pFVar40 + 8)) {
                                    uVar27 = uVar35;
                                  }
                                  if ((uVar27 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  lVar41 = *(longlong *)pFVar40;
                                  uVar27 = 0;
                                  if ((int)uVar28 < local_3d8.ArrayNum) {
                                    uVar27 = uVar35;
                                  }
                                  fVar51 = fVar50 * *(float *)(lVar41 + 4 + lVar45 * 0xc) +
                                           fVar66 * *(float *)(lVar41 + lVar45 * 0xc) +
                                           (float)uVar59 * *(float *)(lVar41 + 8 + lVar45 * 0xc);
                                  fVar56 = *(float *)(lVar30 + lVar45 * 0xc);
                                  fVar52 = *(float *)(lVar30 + 4 + lVar45 * 0xc);
                                  fVar60 = *(float *)(lVar30 + 8 + lVar45 * 0xc);
                                  if ((uVar27 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  *(float *)(local_3d8.AllocatorInstance.Data + lVar45 * 0xc) =
                                       fVar56 - fVar51 * fVar66;
                                  *(float *)(local_3d8.AllocatorInstance.Data + lVar45 * 0xc + 4) =
                                       fVar52 - fVar51 * fVar50;
                                  *(float *)(local_3d8.AllocatorInstance.Data + lVar45 * 0xc + 8) =
                                       fVar60 - fVar51 * (float)uVar59;
                                  uVar27 = 0;
                                  if ((int)uVar28 < local_3d8.ArrayNum) {
                                    uVar27 = uVar35;
                                  }
                                  if ((uVar27 == 0) &&
                                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                    pcVar8 = (code *)swi(3);
                                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                               *)(*pcVar8)();
                                    return pTVar25;
                                  }
                                  fVar50 = *(float *)(local_3d8.AllocatorInstance.Data +
                                                     lVar45 * 0xc);
                                  fVar66 = *(float *)(local_3d8.AllocatorInstance.Data +
                                                     lVar45 * 0xc + 4);
                                  fVar56 = *(float *)(local_3d8.AllocatorInstance.Data +
                                                     lVar45 * 0xc + 8);
                                  fVar52 = fVar66 * fVar66 + fVar50 * fVar50 + fVar56 * fVar56;
                                  pTVar47 = local_550;
                                  if (fVar61 < fVar52) {
                                    fVar52 = fVar62 / SQRT(fVar52);
                                    *(float *)(local_3d8.AllocatorInstance.Data + lVar45 * 0xc) =
                                         fVar52 * fVar50;
                                    *(float *)(local_3d8.AllocatorInstance.Data + lVar45 * 0xc + 4)
                                         = fVar52 * fVar66;
                                    *(float *)(local_3d8.AllocatorInstance.Data + lVar45 * 0xc + 8)
                                         = fVar52 * fVar56;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_510 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                            ((longlong)local_510 + 0x10);
                local_568 = local_568 + 1;
                local_530 = local_530 + 1;
                pTVar42 = local_430;
              } while ((int)local_568 < local_4b0.ArrayNum);
            }
            pTVar43 = local_550;
            local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_410.ArrayNum = 0;
            local_410.ArrayMax = 0;
            local_4f7[3] = false;
            TArray<bool,TSizedDefaultAllocator<32>_>::Init
                      (&local_410,local_4f7 + 3,local_550->ArrayNum);
            iVar17 = pTVar43->ArrayNum;
            uVar28 = 0;
            if (0 < (int)(iVar17 + (iVar17 >> 0x1f & 3U)) >> 2) {
              lVar45 = 0;
              lVar30 = 0;
              do {
                uVar35 = ~uVar28 >> 0x1f;
                uVar27 = 0;
                if ((int)uVar28 < iVar17) {
                  uVar27 = uVar35;
                }
                if ((uVar27 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                uVar27 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar30);
                uVar36 = 0;
                if ((int)uVar27 < local_490.ArrayNum) {
                  uVar36 = ~uVar27 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                if (local_490.AllocatorInstance.Data[(int)uVar27] != (FScriptContainerElement)0x0) {
                  uVar27 = 0;
                  if ((int)uVar28 < local_410.ArrayNum) {
                    uVar27 = uVar35;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  local_410.AllocatorInstance.Data[lVar45] = (FScriptContainerElement)0x1;
                }
                uVar27 = 0;
                if ((int)uVar28 < pTVar43->ArrayNum) {
                  uVar27 = uVar35;
                }
                if ((uVar27 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                uVar27 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar30 + 4);
                uVar36 = 0;
                if ((int)uVar27 < local_490.ArrayNum) {
                  uVar36 = ~uVar27 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                if (local_490.AllocatorInstance.Data[(int)uVar27] != (FScriptContainerElement)0x0) {
                  uVar27 = 0;
                  if ((int)uVar28 < local_410.ArrayNum) {
                    uVar27 = uVar35;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  local_410.AllocatorInstance.Data[lVar45] = (FScriptContainerElement)0x1;
                }
                uVar27 = 0;
                if ((int)uVar28 < pTVar43->ArrayNum) {
                  uVar27 = uVar35;
                }
                if ((uVar27 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                uVar27 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar30 + 8);
                uVar36 = 0;
                if ((int)uVar27 < local_490.ArrayNum) {
                  uVar36 = ~uVar27 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                if (local_490.AllocatorInstance.Data[(int)uVar27] != (FScriptContainerElement)0x0) {
                  uVar27 = 0;
                  if ((int)uVar28 < local_410.ArrayNum) {
                    uVar27 = uVar35;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  local_410.AllocatorInstance.Data[lVar45] = (FScriptContainerElement)0x1;
                }
                uVar27 = 0;
                if ((int)uVar28 < pTVar43->ArrayNum) {
                  uVar27 = uVar35;
                }
                if ((uVar27 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                uVar27 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar30 + 0xc);
                uVar36 = 0;
                if ((int)uVar27 < local_490.ArrayNum) {
                  uVar36 = ~uVar27 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                if (local_490.AllocatorInstance.Data[(int)uVar27] != (FScriptContainerElement)0x0) {
                  uVar27 = 0;
                  if ((int)uVar28 < local_410.ArrayNum) {
                    uVar27 = uVar35;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  local_410.AllocatorInstance.Data[lVar45] = (FScriptContainerElement)0x1;
                }
                iVar17 = pTVar43->ArrayNum;
                uVar28 = uVar28 + 1;
                lVar45 = lVar45 + 1;
                lVar30 = lVar30 + 0x10;
              } while ((int)uVar28 < (int)(iVar17 + (iVar17 >> 0x1f & 3U)) >> 2);
            }
            uVar26 = (ulonglong)pTVar42->ArrayNum;
            pTVar38 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                      (pTVar42->AllocatorInstance).Data;
            local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3e8.ArrayNum = 0;
            local_3e8.ArrayMax = 0;
            local_470 = CONCAT44(local_470._4_4_,pTVar42->ArrayNum);
            local_450 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(pTVar38->AllocatorInstance).Data + uVar26 * 4);
            do {
              pTVar12 = local_450;
              local_510 = pTVar38;
              if (pTVar42->ArrayNum != (int)uVar26) {
                local_4f7[8] = false;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_4f7 + 8);
              }
              pTVar43 = local_550;
              if (pTVar38 == (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)pTVar12
                 ) {
                Chaos::Utilities::RandomPointsInTet
                          (&local_368,local_4e8,local_550,&local_3e8,param_3);
                dVar10 = __real_3eb0c6f7a0b5ed8d;
                local_568 = 0;
                if (0 < local_368.ArrayNum) {
                  local_510 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
                  do {
                    pTVar38 = local_510;
                    uVar28 = ~local_568 >> 0x1f;
                    local_4d8 = (FScriptContainerElement *)CONCAT44(local_4d8._4_4_,uVar28);
                    uVar27 = 0;
                    if ((int)local_568 < local_368.ArrayNum) {
                      uVar27 = uVar28;
                    }
                    if ((uVar27 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                 *)(*pcVar8)();
                      return pTVar25;
                    }
                    local_378 = (longlong)pTVar38 * 0x10;
                    local_428 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                local_368.AllocatorInstance.Data;
                    uVar26 = (ulonglong)*(int *)(local_368.AllocatorInstance.Data + local_378 + 8);
                    pTVar34 = *(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **)
                               &local_368.AllocatorInstance.Data[local_378].field_0x0;
                    local_530 = CONCAT44(local_530._4_4_,
                                         *(int *)(local_368.AllocatorInstance.Data + local_378 + 8))
                    ;
                    local_4c8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                ((longlong)&pTVar34->AllocatorInstance + uVar26 * 0xc);
LAB_143fa12c5:
                    pTVar11 = local_4c8;
                    local_450 = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar34;
                    if (*(int *)((longlong)&local_428->ArrayNum + local_378) != (int)uVar26) {
                      local_4f7[5] = false;
                      `TCheckedPointerIterator<UE::Math::TVector<float>,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_4f7 + 5);
                    }
                    if (pTVar34 != pTVar11) {
                      fVar62 = (float)pTVar34->ArrayNum;
                      pFVar33 = (pTVar34->AllocatorInstance).Data;
                      iVar17 = 0;
                      uVar35 = 0;
                      uVar27 = uVar35;
                      if ((int)local_568 < local_3e8.ArrayNum) {
                        uVar27 = uVar28;
                      }
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      uVar27 = *(uint *)(local_3e8.AllocatorInstance.Data + (longlong)pTVar38 * 4);
                      uVar36 = uVar35;
                      if ((int)uVar27 < local_3d8.ArrayNum) {
                        uVar36 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      fVar50 = *(float *)(local_3d8.AllocatorInstance.Data +
                                         (longlong)(int)uVar27 * 0xc + 8);
                      uVar59 = (undefined4)
                               *(undefined8 *)
                                (local_3d8.AllocatorInstance.Data + (longlong)(int)uVar27 * 0xc);
                      uVar67 = (undefined4)
                               ((ulonglong)
                                *(undefined8 *)
                                 (local_3d8.AllocatorInstance.Data + (longlong)(int)uVar27 * 0xc) >>
                               0x20);
                      if ((int)local_568 < local_3e8.ArrayNum) {
                        uVar35 = uVar28;
                      }
                      local_4b8 = fVar50;
                      if ((uVar35 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      uVar28 = *(uint *)(local_3e8.AllocatorInstance.Data + (longlong)pTVar38 * 4);
                      local_448.Data = (FScriptContainerElement *)0x0;
                      local_440 = 1;
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,1,0,&local_448,1,&local_43c);
                      *(uint *)local_448.Data = uVar28;
                      local_508.Data = (FScriptContainerElement *)0x0;
                      local_500 = 0;
                      local_528.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_528.ArrayNum = 0;
                      local_528.ArrayMax = 0;
                      iVar20 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,&local_528.AllocatorInstance,&local_528.ArrayMax);
                      local_578._0_4_ = SUB84(pFVar33,0);
                      local_578._4_4_ = (float)((ulonglong)pFVar33 >> 0x20);
                      local_528.ArrayNum = iVar20 + 1;
                      local_470 = local_470 & 0xffffffff00000000;
                      local_564 = (FScriptContainerElement)0x0;
                      *(FScriptContainerElement **)
                       (local_528.AllocatorInstance.Data + (longlong)iVar20 * 0xc) = pFVar33;
                      *(float *)(local_528.AllocatorInstance.Data + (longlong)iVar20 * 0xc + 8) =
                           fVar62;
                      fVar66 = local_578._4_4_;
                      fVar56 = (float)local_578;
                      fVar52 = fVar62;
                      fVar60 = (float)local_578;
                      fVar51 = local_578._4_4_;
                      local_578 = pFVar33;
                      local_570 = fVar62;
LAB_143fa14c6:
                      if ((((1 < local_440) && (0 < iVar17)) || ((0 < local_440 && (iVar17 == 0))))
                         && (iVar17 < param_4)) {
                        if (1 < local_528.ArrayNum) {
                          uVar27 = local_528.ArrayNum - 1;
                          uVar28 = 0;
                          if ((int)uVar27 < local_528.ArrayNum) {
                            uVar28 = ~uVar27 >> 0x1f;
                          }
                          if (uVar28 == 0) {
                            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               );
                            if (bVar16) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            fVar62 = local_570;
                            fVar66 = local_578._4_4_;
                            fVar56 = (float)local_578;
                            fVar52 = local_570;
                            fVar60 = (float)local_578;
                            fVar51 = local_578._4_4_;
                          }
                          FVar37.Data = local_528.AllocatorInstance.Data;
                          lVar45 = (longlong)(int)uVar27;
                          uVar27 = local_528.ArrayNum - 2;
                          uVar28 = 0;
                          if ((int)uVar27 < local_528.ArrayNum) {
                            uVar28 = ~uVar27 >> 0x1f;
                          }
                          iVar17 = local_528.ArrayNum;
                          if (uVar28 == 0) {
                            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               );
                            if (bVar16) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            fVar62 = local_570;
                            fVar66 = local_578._4_4_;
                            fVar56 = (float)local_578;
                            fVar52 = local_570;
                            iVar17 = local_528.ArrayNum;
                            fVar60 = (float)local_578;
                            fVar51 = local_578._4_4_;
                          }
                          lVar30 = (longlong)(int)uVar27;
                          fVar50 = local_4b8;
                          if ((double)SQRT((*(float *)(FVar37.Data + lVar45 * 0xc + 4) -
                                           *(float *)(local_528.AllocatorInstance.Data +
                                                     lVar30 * 0xc + 4)) *
                                           (*(float *)(FVar37.Data + lVar45 * 0xc + 4) -
                                           *(float *)(local_528.AllocatorInstance.Data +
                                                     lVar30 * 0xc + 4)) +
                                           (*(float *)(FVar37.Data + lVar45 * 0xc) -
                                           *(float *)(local_528.AllocatorInstance.Data +
                                                     lVar30 * 0xc)) *
                                           (*(float *)(FVar37.Data + lVar45 * 0xc) -
                                           *(float *)(local_528.AllocatorInstance.Data +
                                                     lVar30 * 0xc)) +
                                           (*(float *)(FVar37.Data + lVar45 * 0xc + 8) -
                                           *(float *)(local_528.AllocatorInstance.Data +
                                                     lVar30 * 0xc + 8)) *
                                           (*(float *)(FVar37.Data + lVar45 * 0xc + 8) -
                                           *(float *)(local_528.AllocatorInstance.Data +
                                                     lVar30 * 0xc + 8))) < dVar10) {
                            if (iVar17 < 1) {
                              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 );
                              if (bVar16) {
                                pcVar8 = (code *)swi(3);
                                pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                           *)(*pcVar8)();
                                return pTVar25;
                              }
                              iVar17 = local_528.ArrayNum;
                            }
                            iVar20 = (iVar17 - (iVar17 + -1)) + -1;
                            if (iVar20 != 0) {
                              memmove(local_528.AllocatorInstance.Data +
                                      (longlong)(iVar17 + -1) * 0xc,
                                      local_528.AllocatorInstance.Data +
                                      (longlong)(iVar17 + -1) * 0xc + 0xc,(longlong)iVar20 * 0xc);
                              iVar17 = local_528.ArrayNum;
                            }
                            local_528.ArrayNum = iVar17 + -1;
                            UE::Core::Private::
                            ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0xc,4,&local_528.AllocatorInstance,iVar17 + -1,
                                       &local_528.ArrayMax);
                            goto LAB_143fa21e0;
                          }
                        }
                        lVar45 = local_500;
                        uVar28 = local_500._4_4_;
                        local_500 = (ulonglong)local_500._4_4_ << 0x20;
                        fVar48 = fVar62;
                        fVar49 = fVar66;
                        fVar54 = fVar56;
                        if ((lVar45 < 0) && (uVar28 != 0)) {
                          UE::Core::Private::
                          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (4,4,0,&local_508,0,(int *)((longlong)&local_500 + 4));
                          fVar48 = local_570;
                          fVar49 = local_578._4_4_;
                          fVar54 = (float)local_578;
                          fVar52 = local_570;
                          fVar60 = (float)local_578;
                          fVar51 = local_578._4_4_;
                        }
                        uVar26 = (ulonglong)local_440;
                        local_430 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                                    CONCAT44(local_430._4_4_,local_440);
                        local_308 = local_448.Data + uVar26 * 4;
                        FVar37.Data = local_448.Data;
                        while( true ) {
                          pFVar33 = local_308;
                          fVar62 = fVar48;
                          fVar66 = fVar49;
                          fVar56 = fVar54;
                          local_3b8 = FVar37.Data;
                          if (local_440 != (int)uVar26) {
                            local_4f7[6] = false;
                            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                            operator()(local_4f7 + 6);
                            fVar62 = local_570;
                            fVar66 = local_578._4_4_;
                            fVar56 = (float)local_578;
                            fVar52 = local_570;
                            fVar60 = (float)local_578;
                            fVar51 = local_578._4_4_;
                          }
                          if (FVar37.Data == pFVar33) break;
                          local_538[0] = *(uint *)FVar37.Data;
                          iVar17 = 0;
                          fVar48 = fVar62;
                          fVar49 = fVar66;
                          fVar54 = fVar56;
                          do {
                            local_33c._s_0.Z = fVar50;
                            if (iVar17 == 0) {
                              lVar45 = 0xc;
                              lVar30 = 4;
LAB_143fa1789:
                              lVar41 = 8;
                            }
                            else if (iVar17 == 1) {
                              lVar45 = 8;
                              lVar41 = 0xc;
                              lVar30 = 0;
                            }
                            else if (iVar17 == 2) {
                              lVar45 = 0xc;
                              lVar41 = 4;
                              lVar30 = 0;
                            }
                            else {
                              if (iVar17 == 3) {
                                lVar45 = 4;
                                lVar30 = 0;
                                goto LAB_143fa1789;
                              }
                              lVar45 = -4;
                              lVar41 = -4;
                              lVar30 = -4;
                            }
                            local_33c._0_8_ = CONCAT44(uVar67,uVar59);
                            local_348 = fVar60;
                            fStack_344 = fVar51;
                            local_340 = fVar52;
                            UE::Math::TVector<float>::Normalize
                                      ((TVector<float> *)&local_33c._s_0,fVar61);
                            lVar46 = (longlong)(int)local_538[0];
                            uVar28 = 0;
                            if ((int)local_538[0] < pTVar43->ArrayNum) {
                              uVar28 = ~local_538[0] >> 0x1f;
                            }
                            if ((uVar28 == 0) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), fVar48 = local_570, fVar49 = local_578._4_4_,
                               fVar54 = (float)local_578, fVar52 = local_570,
                               fVar60 = (float)local_578, fVar51 = local_578._4_4_, bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            pTVar38 = local_4e8;
                            uVar28 = *(uint *)((pTVar43->AllocatorInstance).Data +
                                              lVar45 + lVar46 * 0x10);
                            uVar27 = 0;
                            if ((int)uVar28 < local_4e8->ArrayNum) {
                              uVar27 = ~uVar28 >> 0x1f;
                            }
                            if ((uVar27 == 0) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), fVar48 = local_570, fVar49 = local_578._4_4_,
                               fVar54 = (float)local_578, fVar52 = local_570,
                               fVar60 = (float)local_578, fVar51 = local_578._4_4_, bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            local_300 = (pTVar38->AllocatorInstance).Data;
                            local_2f8 = (longlong)(int)uVar28 * 3;
                            lVar45 = (longlong)(int)local_538[0];
                            uVar28 = 0;
                            if ((int)local_538[0] < pTVar43->ArrayNum) {
                              uVar28 = ~local_538[0] >> 0x1f;
                            }
                            if ((uVar28 == 0) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), fVar48 = local_570, fVar49 = local_578._4_4_,
                               fVar54 = (float)local_578, fVar52 = local_570,
                               fVar60 = (float)local_578, fVar51 = local_578._4_4_, bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            uVar28 = *(uint *)((pTVar43->AllocatorInstance).Data +
                                              lVar45 * 0x10 + lVar41);
                            uVar27 = 0;
                            if ((int)uVar28 < pTVar38->ArrayNum) {
                              uVar27 = ~uVar28 >> 0x1f;
                            }
                            if ((uVar27 == 0) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), fVar48 = local_570, fVar49 = local_578._4_4_,
                               fVar54 = (float)local_578, fVar52 = local_570,
                               fVar60 = (float)local_578, fVar51 = local_578._4_4_, bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            pTVar43 = local_550;
                            lVar45 = (longlong)(int)local_538[0];
                            pFVar33 = (local_4e8->AllocatorInstance).Data;
                            uVar27 = 0;
                            if ((int)local_538[0] < local_550->ArrayNum) {
                              uVar27 = ~local_538[0] >> 0x1f;
                            }
                            if ((uVar27 == 0) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), fVar48 = local_570, fVar49 = local_578._4_4_,
                               fVar54 = (float)local_578, fVar52 = local_570,
                               fVar60 = (float)local_578, fVar51 = local_578._4_4_, bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            pTVar38 = local_4e8;
                            uVar27 = *(uint *)((pTVar43->AllocatorInstance).Data +
                                              lVar45 * 0x10 + lVar30);
                            uVar35 = 0;
                            if ((int)uVar27 < local_4e8->ArrayNum) {
                              uVar35 = ~uVar27 >> 0x1f;
                            }
                            if ((uVar35 == 0) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), fVar48 = local_570, fVar49 = local_578._4_4_,
                               fVar54 = (float)local_578, fVar52 = local_570,
                               fVar60 = (float)local_578, fVar51 = local_578._4_4_, bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            uVar3 = *(undefined8 *)(pFVar33 + (longlong)(int)uVar28 * 0xc);
                            pFVar40 = (pTVar38->AllocatorInstance).Data;
                            fVar62 = *(float *)(pFVar33 + (longlong)(int)uVar28 * 0xc + 8);
                            uVar4 = *(undefined8 *)(pFVar40 + (longlong)(int)uVar27 * 0xc);
                            fVar50 = *(float *)(pFVar40 + (longlong)(int)uVar27 * 0xc + 8);
                            fStack_2dc = (float)uVar3;
                            fVar56 = fStack_2dc;
                            fStack_2d8 = (float)((ulonglong)uVar3 >> 0x20);
                            fVar15 = fStack_2d8;
                            fVar58 = *(float *)(local_300 + local_2f8 * 4 + 8);
                            auVar9._4_8_ = unaff_XMM10._8_8_;
                            auVar9._0_4_ = fStack_2e4;
                            auVar63._0_8_ = auVar9._0_8_ << 0x20;
                            auVar63._8_4_ = fVar50;
                            auVar63._12_4_ = fStack_2dc;
                            local_13c = local_33c._0_8_;
                            unaff_XMM10._8_8_ = auVar63._8_8_;
                            unaff_XMM10._0_8_ = uVar4;
                            local_134 = local_33c._s_0.Z;
                            local_148._s_0.X = local_348;
                            fVar64 = (float)*(undefined8 *)(local_300 + local_2f8 * 4);
                            fVar65 = (float)((ulonglong)*(undefined8 *)(local_300 + local_2f8 * 4)
                                            >> 0x20);
                            local_148._s_0.Y = fStack_344;
                            local_148._s_0.Z = local_340;
                            local_2e8 = (float)uVar4;
                            fVar66 = local_2e8;
                            fStack_2e4 = (float)((ulonglong)uVar4 >> 0x20);
                            fVar14 = fStack_2e4;
                            local_120 = fStack_2d8;
                            fStack_2e0 = fVar50;
                            fStack_2d4 = fVar62;
                            fStack_2d0 = fVar64;
                            fStack_2cc = fVar65;
                            local_2c8 = fVar58;
                            local_130 = unaff_XMM10;
                            uStack_11c = fVar62;
                            TStack_118._s_0.X = fVar64;
                            TStack_118._s_0.Y = fVar65;
                            TStack_118._s_0.Z = fVar58;
                            bVar16 = UE::Geometry::TIntrRay3Triangle3<float,UE::Math::TRay<float>_>
                                     ::FindIntersection((TRay<float> *)&local_148._s_0,
                                                        (TTriangle3<float> *)local_130,&local_10c,
                                                        (TVector<double> *)&local_108._s_0,local_f0)
                            ;
                            if ((bVar16) && (local_f0[0] == Point)) {
                              fVar53 = (float)local_108._s_0.Y;
                              fVar55 = (float)local_108._s_0.X;
                              fVar57 = (float)local_108._s_0.Z;
                              fVar56 = fVar56 * fVar53 + fVar66 * fVar55 + fVar64 * fVar57;
                              fVar66 = fVar15 * fVar53 + fVar14 * fVar55 + fVar65 * fVar57;
                              fVar62 = fVar62 * fVar53 + fVar50 * fVar55 + fVar58 * fVar57;
                              unaff_XMM10 = ZEXT416((uint)fVar62);
                              if (dVar10 < (double)SQRT((fVar49 - fVar66) * (fVar49 - fVar66) +
                                                        (fVar54 - fVar56) * (fVar54 - fVar56) +
                                                        (fVar48 - fVar62) * (fVar48 - fVar62))) {
                                local_578 = (FScriptContainerElement *)CONCAT44(fVar66,fVar56);
                                local_3b0 = local_578;
                                local_3a8 = fVar62;
                                if (((local_528.AllocatorInstance.Data <=
                                      (FScriptContainerElement *)&local_3b0) &&
                                    ((FScriptContainerElement *)&local_3b0 <
                                     local_528.AllocatorInstance.Data +
                                     (longlong)local_528.ArrayMax * 0xc)) &&
                                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                       (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar16)) {
                                  pcVar8 = (code *)swi(3);
                                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                             *)(*pcVar8)();
                                  return pTVar25;
                                }
                                iVar20 = local_528.ArrayNum;
                                if (local_528.ArrayNum == local_528.ArrayMax) {
                                  iVar20 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x40c,&local_528.AllocatorInstance,
                                                      &local_528.ArrayMax);
                                }
                                local_528.ArrayNum = iVar20 + 1;
                                *(FScriptContainerElement **)
                                 (local_528.AllocatorInstance.Data + (longlong)iVar20 * 0xc) =
                                     local_3b0;
                                *(float *)(local_528.AllocatorInstance.Data +
                                          (longlong)iVar20 * 0xc + 8) = local_3a8;
                                uVar27 = local_538[0] * 4 + iVar17;
                                uVar28 = 0;
                                if ((int)uVar27 < local_4b0.ArrayNum) {
                                  uVar28 = ~uVar27 >> 0x1f;
                                }
                                if ((uVar28 == 0) &&
                                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                                  pcVar8 = (code *)swi(3);
                                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                             *)(*pcVar8)();
                                  return pTVar25;
                                }
                                FVar37.Data = local_4b0.AllocatorInstance.Data;
                                lVar45 = (longlong)(int)uVar27;
                                puVar31 = *(uint **)&local_4b0.AllocatorInstance.Data[lVar45 * 0x10]
                                                     .field_0x0;
                                iVar17 = *(int *)(local_4b0.AllocatorInstance.Data +
                                                 lVar45 * 0x10 + 8);
                                puVar2 = puVar31 + iVar17;
                                goto LAB_143fa1e35;
                              }
                            }
                            iVar17 = iVar17 + 1;
                            pTVar43 = local_550;
                            fVar50 = local_4b8;
                          } while (iVar17 < 4);
                          uVar26 = (ulonglong)local_430 & 0xffffffff;
                          FVar37.Data = local_3b8 + 4;
                          fVar50 = local_4b8;
                        }
                        goto LAB_143fa2097;
                      }
LAB_143fa21e0:
                      pTVar38 = local_510;
                      uVar28 = (uint)local_4d8;
                      goto LAB_143fa21ec;
                    }
                    local_568 = local_568 + 1;
                    local_510 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                ((longlong)&(pTVar38->AllocatorInstance).Data + 1);
                    if (local_368.ArrayNum <= (int)local_568) break;
                  } while( true );
                }
                uVar28 = 0;
                if (0 < (int)local_558) {
                  lVar45 = 0;
                  local_4e8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
                  do {
                    pTVar38 = local_4e8;
                    uVar35 = ~uVar28 >> 0x1f;
                    uVar27 = 0;
                    if ((int)uVar28 < (int)local_558) {
                      uVar27 = uVar35;
                    }
                    if ((uVar27 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                 *)(*pcVar8)();
                      return pTVar25;
                    }
                    if (param_5 < *(int *)(local_560.Data + 8 + (longlong)pTVar38)) {
                      fVar61 = 0.0;
                      lVar30 = lVar45 * 0x10;
                      uVar27 = 1;
                      lVar41 = 0xc;
                      while( true ) {
                        uVar36 = 0;
                        if ((int)uVar28 < (int)local_558) {
                          uVar36 = uVar35;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        if (*(int *)(local_560.Data + lVar30 + 8) <= (int)uVar27) break;
                        uVar36 = 0;
                        if ((int)uVar28 < (int)local_558) {
                          uVar36 = uVar35;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        FVar37.Data = local_560.Data;
                        uVar36 = 0;
                        if ((int)(uVar27 - 1) < *(int *)(local_560.Data + lVar30 + 8)) {
                          uVar36 = -uVar27 >> 0x1f;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        lVar46 = *(longlong *)&FVar37.Data[lVar30].field_0x0;
                        uVar36 = 0;
                        if ((int)uVar28 < (int)local_558) {
                          uVar36 = uVar35;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        local_4c8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                    local_560.Data;
                        uVar36 = 0;
                        if ((int)uVar27 < *(int *)(local_560.Data + lVar30 + 8)) {
                          uVar36 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        uVar27 = uVar27 + 1;
                        pFVar33 = local_4c8[lVar45].AllocatorInstance.Data;
                        fVar66 = *(float *)(lVar46 + -8 + lVar41) - *(float *)(pFVar33 + lVar41 + 4)
                        ;
                        fVar62 = *(float *)(lVar46 + -4 + lVar41) - *(float *)(pFVar33 + lVar41 + 8)
                        ;
                        fVar50 = *(float *)(lVar46 + -0xc + lVar41) - *(float *)(pFVar33 + lVar41);
                        lVar41 = lVar41 + 0xc;
                        fVar61 = fVar61 + SQRT(fVar66 * fVar66 + fVar50 * fVar50 + fVar62 * fVar62);
                      }
                      local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_548.ArrayNum = 0;
                      local_548.ArrayMax = 0;
                      uVar27 = 0;
                      if ((int)uVar28 < (int)local_558) {
                        uVar27 = uVar35;
                      }
                      fVar61 = fVar61 / (float)(param_5 + -1);
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      FVar37.Data = local_560.Data;
                      if ((*(int *)(local_560.Data + lVar30 + 8) < 1) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      pFVar33 = *(FScriptContainerElement **)&FVar37.Data[lVar30].field_0x0;
                      if (((local_548.AllocatorInstance.Data <= pFVar33) &&
                          (pFVar33 < local_548.AllocatorInstance.Data +
                                     (longlong)local_548.ArrayMax * 0xc)) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      if (local_548.ArrayNum == local_548.ArrayMax) {
                        local_548.ArrayNum =
                             UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&local_548.AllocatorInstance,&local_548.ArrayMax);
                      }
                      lVar41 = (longlong)local_548.ArrayNum;
                      fVar62 = 0.0;
                      local_548.ArrayNum = local_548.ArrayNum + 1;
                      *(undefined8 *)(local_548.AllocatorInstance.Data + lVar41 * 0xc) =
                           *(undefined8 *)pFVar33;
                      *(undefined4 *)(local_548.AllocatorInstance.Data + lVar41 * 0xc + 8) =
                           *(undefined4 *)(pFVar33 + 8);
                      uVar27 = 0;
                      if ((int)uVar28 < (int)local_558) {
                        uVar27 = uVar35;
                      }
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      local_470 = CONCAT44(local_470._4_4_,
                                           *(int *)(local_560.Data + lVar30 + 8) + -1);
                      uVar27 = 0;
                      if ((int)uVar28 < (int)local_558) {
                        uVar27 = uVar35;
                      }
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      uVar27 = *(int *)(local_560.Data + lVar30 + 8) - 1;
                      if (-1 < (int)uVar27) {
                        iVar17 = *(int *)(local_560.Data + lVar30 + 8) + -2;
                        local_4d8 = (FScriptContainerElement *)CONCAT44(local_4d8._4_4_,iVar17);
                        lVar41 = (longlong)(int)uVar27 * 0xc;
                        do {
                          uVar36 = 0;
                          if ((int)uVar28 < (int)local_558) {
                            uVar36 = uVar35;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          local_4c8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                                       *)local_560.Data;
                          uVar36 = 0;
                          if (iVar17 < *(int *)(local_560.Data + lVar30 + 8)) {
                            uVar36 = -uVar27 >> 0x1f;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          local_428 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                                       *)local_4c8[lVar45].AllocatorInstance.Data;
                          uVar36 = 0;
                          if ((int)uVar28 < (int)local_558) {
                            uVar36 = uVar35;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          local_4c8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                                       *)local_560.Data;
                          uVar36 = 0;
                          if ((int)uVar27 < *(int *)(local_560.Data + lVar30 + 8)) {
                            uVar36 = ~uVar27 >> 0x1f;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          pFVar33 = local_4c8[lVar45].AllocatorInstance.Data;
                          fVar56 = *(float *)(lVar41 + -8 + (longlong)local_428) -
                                   *(float *)(pFVar33 + lVar41 + 4);
                          fVar50 = *(float *)(lVar41 + -4 + (longlong)local_428) -
                                   *(float *)(pFVar33 + lVar41 + 8);
                          fVar66 = *(float *)(lVar41 + -0xc + (longlong)local_428) -
                                   *(float *)(pFVar33 + lVar41);
                          fVar62 = fVar62 + SQRT(fVar56 * fVar56 + fVar66 * fVar66 + fVar50 * fVar50
                                                );
                          iVar17 = (uint)local_4d8;
                          if (fVar61 < fVar62) goto LAB_143fa2aae;
                          iVar17 = (uint)local_4d8 + -1;
                          local_4d8 = (FScriptContainerElement *)CONCAT44(local_4d8._4_4_,iVar17);
                          lVar41 = lVar41 + -0xc;
                          uVar27 = uVar27 - 1;
                        } while (-1 < (int)uVar27);
                      }
                      iVar17 = (int)local_470;
LAB_143fa2aae:
                      uVar27 = 1;
                      local_378 = (longlong)iVar17;
                      local_510 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                  &DAT_00000001;
                      fVar62 = 0.0;
                      if (0 < local_378) {
                        lVar41 = 0xc;
                        do {
                          uVar36 = 0;
                          if ((int)uVar28 < (int)local_558) {
                            uVar36 = uVar35;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          FVar37.Data = local_560.Data;
                          uVar36 = 0;
                          if ((int)(uVar27 - 1) < *(int *)(local_560.Data + lVar30 + 8)) {
                            uVar36 = -uVar27 >> 0x1f;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          local_428 = *(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                                        **)&FVar37.Data[lVar30].field_0x0;
                          uVar36 = 0;
                          if ((int)uVar28 < (int)local_558) {
                            uVar36 = uVar35;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          local_4c8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                                       *)local_560.Data;
                          uVar36 = 0;
                          if ((int)uVar27 < *(int *)(local_560.Data + lVar30 + 8)) {
                            uVar36 = ~uVar27 >> 0x1f;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          pFVar33 = local_4c8[lVar45].AllocatorInstance.Data;
                          fVar56 = *(float *)((longlong)local_428 + lVar41 + -8) -
                                   *(float *)(pFVar33 + lVar41 + 4);
                          fVar50 = *(float *)((longlong)local_428 + lVar41 + -4) -
                                   *(float *)(pFVar33 + lVar41 + 8);
                          fVar66 = *(float *)((longlong)local_428 + lVar41 + -0xc) -
                                   *(float *)(pFVar33 + lVar41);
                          fVar62 = fVar62 + SQRT(fVar56 * fVar56 + fVar66 * fVar66 + fVar50 * fVar50
                                                );
                          if (fVar61 < fVar62) {
                            uVar36 = 0;
                            if ((int)uVar28 < (int)local_558) {
                              uVar36 = uVar35;
                            }
                            if ((uVar36 == 0) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            local_4c8 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                                         *)local_560.Data;
                            uVar36 = 0;
                            if ((int)uVar27 < *(int *)(local_560.Data + lVar30 + 8)) {
                              uVar36 = ~uVar27 >> 0x1f;
                            }
                            if ((uVar36 == 0) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            pFVar33 = local_4c8[lVar45].AllocatorInstance.Data + lVar41;
                            if (((local_548.AllocatorInstance.Data <= pFVar33) &&
                                (pFVar33 < local_548.AllocatorInstance.Data +
                                           (longlong)local_548.ArrayMax * 0xc)) &&
                               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar16)) {
                              pcVar8 = (code *)swi(3);
                              pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                         *)(*pcVar8)();
                              return pTVar25;
                            }
                            iVar17 = local_548.ArrayNum;
                            if (local_548.ArrayNum == local_548.ArrayMax) {
                              iVar17 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x40c,&local_548.AllocatorInstance,
                                                  &local_548.ArrayMax);
                            }
                            fVar62 = 0.0;
                            local_548.ArrayNum = iVar17 + 1;
                            *(undefined8 *)
                             (local_548.AllocatorInstance.Data + (longlong)iVar17 * 0xc) =
                                 *(undefined8 *)pFVar33;
                            *(undefined4 *)
                             (local_548.AllocatorInstance.Data + (longlong)iVar17 * 0xc + 8) =
                                 *(undefined4 *)(pFVar33 + 8);
                          }
                          uVar27 = uVar27 + 1;
                          pTVar38 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                    ((longlong)&(local_510->AllocatorInstance).Data + 1);
                          lVar41 = lVar41 + 0xc;
                          local_510 = pTVar38;
                        } while ((longlong)pTVar38 <= local_378);
                        if (0.0 < fVar62) {
                          uVar36 = 0;
                          if ((int)uVar28 < (int)local_558) {
                            uVar36 = uVar35;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          FVar37.Data = local_560.Data;
                          uVar36 = 0;
                          if ((int)uVar27 < *(int *)(local_560.Data + lVar30 + 8)) {
                            uVar36 = ~uVar27 >> 0x1f;
                          }
                          if ((uVar36 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          pFVar33 = (FScriptContainerElement *)
                                    (*(longlong *)&FVar37.Data[lVar30].field_0x0 +
                                    (longlong)pTVar38 * 0xc);
                          if (((local_548.AllocatorInstance.Data <= pFVar33) &&
                              (pFVar33 < local_548.AllocatorInstance.Data +
                                         (longlong)local_548.ArrayMax * 0xc)) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar16)) {
                            pcVar8 = (code *)swi(3);
                            pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                       *)(*pcVar8)();
                            return pTVar25;
                          }
                          iVar17 = local_548.ArrayNum;
                          if (local_548.ArrayNum == local_548.ArrayMax) {
                            iVar17 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x40c,&local_548.AllocatorInstance,
                                                &local_548.ArrayMax);
                          }
                          local_548.ArrayNum = iVar17 + 1;
                          *(undefined8 *)(local_548.AllocatorInstance.Data + (longlong)iVar17 * 0xc)
                               = *(undefined8 *)pFVar33;
                          *(undefined4 *)
                           (local_548.AllocatorInstance.Data + (longlong)iVar17 * 0xc + 8) =
                               *(undefined4 *)(pFVar33 + 8);
                        }
                      }
                      uVar27 = 0;
                      if ((int)uVar28 < (int)local_558) {
                        uVar27 = uVar35;
                      }
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      FVar37.Data = local_560.Data;
                      uVar27 = 0;
                      if ((int)uVar28 < (int)local_558) {
                        uVar27 = uVar35;
                      }
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      uVar36 = *(int *)(local_560.Data + lVar30 + 8) - 1;
                      uVar27 = 0;
                      if ((int)uVar36 < *(int *)(FVar37.Data + lVar30 + 8)) {
                        uVar27 = ~uVar36 >> 0x1f;
                      }
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      pFVar33 = (FScriptContainerElement *)
                                (*(longlong *)&FVar37.Data[lVar30].field_0x0 +
                                (longlong)(int)uVar36 * 0xc);
                      if (((local_548.AllocatorInstance.Data <= pFVar33) &&
                          (pFVar33 < local_548.AllocatorInstance.Data +
                                     (longlong)local_548.ArrayMax * 0xc)) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      iVar17 = local_548.ArrayNum;
                      if (local_548.ArrayNum == local_548.ArrayMax) {
                        iVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x40c,&local_548.AllocatorInstance,&local_548.ArrayMax);
                      }
                      local_548.ArrayNum = iVar17 + 1;
                      *(undefined8 *)(local_548.AllocatorInstance.Data + (longlong)iVar17 * 0xc) =
                           *(undefined8 *)pFVar33;
                      *(undefined4 *)(local_548.AllocatorInstance.Data + (longlong)iVar17 * 0xc + 8)
                           = *(undefined4 *)(pFVar33 + 8);
                      uVar27 = 0;
                      if ((int)uVar28 < (int)local_558) {
                        uVar27 = uVar35;
                      }
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      FVar37.Data = local_548.AllocatorInstance.Data;
                      pTVar38 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                (local_560.Data + lVar30);
                      if (pTVar38 != &local_548) {
                        iVar17 = local_548.ArrayNum;
                        lVar30 = (longlong)local_548.ArrayNum;
                        piVar1 = &pTVar38->ArrayMax;
                        pTVar38->ArrayNum = local_548.ArrayNum;
                        if ((local_548.ArrayNum == 0) && (*piVar1 == 0)) {
                          *piVar1 = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0xc,4,local_548.ArrayNum,*piVar1,(ForAnyElementType *)pTVar38,
                                     local_548.ArrayNum,piVar1);
                          if (iVar17 != 0) {
                            memcpy((pTVar38->AllocatorInstance).Data,FVar37.Data,lVar30 * 0xc);
                          }
                        }
                      }
                      pTVar38 = local_4e8;
                      if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_548.AllocatorInstance.Data);
                        pTVar38 = local_4e8;
                      }
                    }
                    local_4e8 = pTVar38 + 1;
                    uVar28 = uVar28 + 1;
                    lVar45 = lVar45 + 1;
                    pTVar43 = local_550;
                  } while ((int)uVar28 < (int)local_558);
                }
                pFVar13 = local_370;
                pTVar7 = (local_370->MuscleActivationElementAttribute).ConstAttributeArray;
                local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3c8.ArrayNum = 0;
                local_3c8.ArrayMax = 0;
                if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
                  iVar17 = FManagedArrayCollection::NumElements
                                     ((local_370->MuscleActivationElementAttribute).ConstCollection,
                                      (local_370->MuscleActivationElementAttribute).Group);
                }
                else {
                  iVar17 = (**(code **)(*(longlong *)pTVar7 + 0x60))();
                }
                TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                ::SetNum(local_3f8,iVar17,Default);
                pTVar7 = (pFVar13->MuscleActivationElementAttribute).ConstAttributeArray;
                if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
                  iVar17 = FManagedArrayCollection::NumElements
                                     ((pFVar13->MuscleActivationElementAttribute).ConstCollection,
                                      (pFVar13->MuscleActivationElementAttribute).Group);
                }
                else {
                  iVar17 = (**(code **)(*(longlong *)pTVar7 + 0x60))();
                }
                TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
                SetNum(&local_3c8,iVar17,Default);
                local_380[0] = -1;
                local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_390.ArrayNum = 0;
                local_390.ArrayMax = 0;
                local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3a0.ArrayNum = 0;
                local_3a0.ArrayMax = 0;
                TArray<int,TSizedDefaultAllocator<32>_>::Init
                          (&local_3a0,local_380,(int)local_330[1]);
                local_400[0] = -1;
                TArray<int,TSizedDefaultAllocator<32>_>::Init
                          (&local_390,local_400,pTVar43->ArrayNum);
                iVar17 = 0;
                while( true ) {
                  pTVar7 = (pFVar13->MuscleActivationElementAttribute).ConstAttributeArray;
                  if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
                    iVar20 = FManagedArrayCollection::NumElements
                                       ((pFVar13->MuscleActivationElementAttribute).ConstCollection,
                                        (pFVar13->MuscleActivationElementAttribute).Group);
                  }
                  else {
                    iVar20 = (**(code **)(*(longlong *)pTVar7 + 0x60))();
                  }
                  plVar44 = local_330;
                  if (iVar20 <= iVar17) break;
                  GetMuscleActivationData(pFVar13,&local_1c8,iVar17);
                  lVar45 = (longlong)local_1c8.GeometryGroupIndex;
                  if ((-1 < local_1c8.GeometryGroupIndex) &&
                     (local_1c8.GeometryGroupIndex < local_3a0.ArrayNum)) {
                    uVar28 = 0;
                    if (local_1c8.GeometryGroupIndex < local_3a0.ArrayNum) {
                      uVar28 = (uint)~local_1c8.GeometryGroupIndex >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                 *)(*pcVar8)();
                      return pTVar25;
                    }
                    *(int *)(local_3a0.AllocatorInstance.Data + lVar45 * 4) = iVar17;
                  }
                  if (local_1c8.FiberStreamlineRestLength.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c8.FiberStreamlineRestLength.AllocatorInstance.Data);
                  }
                  DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                             local_1c8.FiberStreamline.AllocatorInstance.Data,
                             local_1c8.FiberStreamline.ArrayNum);
                  if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                      local_1c8.FiberStreamline.AllocatorInstance.Data !=
                      (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
                    FMemory::Free(local_1c8.FiberStreamline.AllocatorInstance.Data);
                  }
                  if (local_1c8.ContractionVolumeScale.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c8.ContractionVolumeScale.AllocatorInstance.Data);
                  }
                  if (local_1c8.FiberDirectionMatrix.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c8.FiberDirectionMatrix.AllocatorInstance.Data);
                  }
                  if (local_1c8.MuscleActivationElement.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c8.MuscleActivationElement.AllocatorInstance.Data);
                  }
                  iVar17 = iVar17 + 1;
                }
                uVar28 = 0;
                if (0 < (int)local_330[1]) {
                  lVar45 = 0;
                  plVar39 = local_3f0;
                  do {
                    iVar17 = 0;
                    uVar27 = ~uVar28 >> 0x1f;
                    while( true ) {
                      uVar35 = 0;
                      if ((int)uVar28 < (int)plVar39[1]) {
                        uVar35 = uVar27;
                      }
                      if ((uVar35 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      if (*(int *)(lVar45 + *plVar39) <= iVar17) break;
                      uVar35 = 0;
                      if ((int)uVar28 < local_3a0.ArrayNum) {
                        uVar35 = uVar27;
                      }
                      if ((uVar35 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      uVar59 = *(undefined4 *)(local_3a0.AllocatorInstance.Data + lVar45);
                      uVar35 = 0;
                      if ((int)uVar28 < (int)plVar44[1]) {
                        uVar35 = uVar27;
                      }
                      if ((uVar35 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      uVar36 = *(int *)(*plVar44 + lVar45) + iVar17;
                      uVar35 = 0;
                      if ((int)uVar36 < local_390.ArrayNum) {
                        uVar35 = ~uVar36 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      iVar17 = iVar17 + 1;
                      *(undefined4 *)(local_390.AllocatorInstance.Data + (longlong)(int)uVar36 * 4)
                           = uVar59;
                      plVar39 = local_3f0;
                    }
                    uVar28 = uVar28 + 1;
                    lVar45 = lVar45 + 4;
                  } while ((int)uVar28 < (int)plVar44[1]);
                }
                uVar28 = 0;
                if (0 < (int)local_478) {
                  local_3f0 = (longlong *)0x0;
                  lVar45 = 0;
                  do {
                    plVar44 = local_3f0;
                    uVar35 = ~uVar28 >> 0x1f;
                    uVar27 = 0;
                    if ((int)uVar28 < (int)local_478) {
                      uVar27 = uVar35;
                    }
                    if ((uVar27 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                 *)(*pcVar8)();
                      return pTVar25;
                    }
                    uVar27 = *(uint *)(local_480.Data + (longlong)plVar44 * 4);
                    uVar36 = 0;
                    if ((int)uVar27 < local_390.ArrayNum) {
                      uVar36 = ~uVar27 >> 0x1f;
                    }
                    if ((uVar36 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                 *)(*pcVar8)();
                      return pTVar25;
                    }
                    pTVar25 = local_3f8;
                    uVar27 = *(uint *)(local_390.AllocatorInstance.Data + (longlong)(int)uVar27 * 4)
                    ;
                    pTVar38 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                              (longlong)(int)uVar27;
                    local_530 = CONCAT44(local_530._4_4_,uVar27);
                    if (-1 < (int)uVar27) {
                      local_430 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                                  CONCAT44(local_430._4_4_,~uVar27 >> 0x1f);
                      uVar36 = 0;
                      if ((int)uVar27 < local_3f8->ArrayNum) {
                        uVar36 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      local_428 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                                  ((longlong)pTVar38 * 0x10);
                      pFVar33 = (pTVar25->AllocatorInstance).Data +
                                (longlong)&(local_428->AllocatorInstance).Data;
                      uVar27 = 0;
                      if ((int)uVar28 < (int)local_558) {
                        uVar27 = uVar35;
                      }
                      local_4c8 = pTVar38;
                      if ((uVar27 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      pFVar40 = local_560.Data + lVar45;
                      if (((*(FScriptContainerElement **)&pFVar33->field_0x0 <= pFVar40) &&
                          (pFVar40 < *(FScriptContainerElement **)&pFVar33->field_0x0 +
                                     (longlong)*(int *)(pFVar33 + 0xc) * 0x10)) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      iVar17 = *(int *)&pFVar33[8].field_0x0;
                      if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                        iVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x810,(ForAnyElementType *)pFVar33,
                                            (int *)(pFVar33 + 0xc));
                      }
                      *(int *)&pFVar33[8].field_0x0 = iVar17 + 1;
                      pFVar32 = (ForAnyElementType *)
                                (*(longlong *)&pFVar33->field_0x0 + (longlong)iVar17 * 0x10);
                      pFVar32->Data = (FScriptContainerElement *)0x0;
                      piVar1 = (int *)((longlong)&pFVar32[1].Data + 4);
                      iVar17 = *(int *)(pFVar40 + 8);
                      _Src = *(void **)pFVar40;
                      *(int *)&pFVar32[1].Data = iVar17;
                      if (iVar17 == 0) {
                        *piVar1 = 0;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc,4,iVar17,0,pFVar32,iVar17,piVar1);
                        memcpy(pFVar32->Data,_Src,(longlong)iVar17 * 0xc);
                      }
                      local_4e0[0] = 0.0;
                      uVar27 = 1;
                      lVar30 = 0xc;
                      while( true ) {
                        uVar36 = 0;
                        if ((int)uVar28 < (int)local_558) {
                          uVar36 = uVar35;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        if (*(int *)(local_560.Data + lVar45 + 8) <= (int)uVar27) break;
                        uVar36 = 0;
                        if ((int)uVar28 < (int)local_558) {
                          uVar36 = uVar35;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        FVar37.Data = local_560.Data;
                        uVar36 = 0;
                        if ((int)(uVar27 - 1) < *(int *)(local_560.Data + lVar45 + 8)) {
                          uVar36 = -uVar27 >> 0x1f;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        lVar41 = *(longlong *)(FVar37.Data + lVar45);
                        uVar36 = 0;
                        if ((int)uVar28 < (int)local_558) {
                          uVar36 = uVar35;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        FVar37.Data = local_560.Data;
                        uVar36 = 0;
                        if ((int)uVar27 < *(int *)(local_560.Data + lVar45 + 8)) {
                          uVar36 = ~uVar27 >> 0x1f;
                        }
                        if ((uVar36 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                     *)(*pcVar8)();
                          return pTVar25;
                        }
                        lVar46 = *(longlong *)(FVar37.Data + lVar45);
                        uVar27 = uVar27 + 1;
                        fVar62 = *(float *)(lVar30 + -0xc + lVar41) - *(float *)(lVar30 + lVar46);
                        fVar50 = *(float *)(lVar30 + -8 + lVar41) - *(float *)(lVar30 + 4 + lVar46);
                        fVar61 = *(float *)(lVar30 + -4 + lVar41) - *(float *)(lVar30 + 8 + lVar46);
                        lVar30 = lVar30 + 0xc;
                        local_4e0[0] = local_4e0[0] +
                                       SQRT(fVar50 * fVar50 + fVar62 * fVar62 + fVar61 * fVar61);
                        plVar44 = local_3f0;
                      }
                      iVar17 = 0;
                      if ((int)local_530 < local_3c8.ArrayNum) {
                        iVar17 = (int)local_430;
                      }
                      if ((iVar17 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      pFVar33 = local_3c8.AllocatorInstance.Data + (longlong)local_428;
                    /* WARNING: Load size is inaccurate */
                      if (((*pFVar33 <= (FScriptContainerElement *)local_4e0) &&
                          ((FScriptContainerElement *)local_4e0 <
                           *pFVar33 + (longlong)*(int *)(pFVar33 + 0xc) * 4)) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                                   *)(*pcVar8)();
                        return pTVar25;
                      }
                      iVar17 = *(int *)(pFVar33 + 8);
                      if (iVar17 == *(int *)(pFVar33 + 0xc)) {
                        iVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)pFVar33,
                                            (int *)(pFVar33 + 0xc));
                      }
                      *(int *)(pFVar33 + 8) = iVar17 + 1;
                    /* WARNING: Load size is inaccurate */
                      *(float *)(*pFVar33 + (longlong)iVar17 * 4) = local_4e0[0];
                    }
                    local_3f0 = (longlong *)((longlong)plVar44 + 1);
                    uVar28 = uVar28 + 1;
                    lVar45 = lVar45 + 0x10;
                  } while ((int)uVar28 < (int)local_478);
                }
                pFVar13 = local_370;
                uVar28 = 0;
                lVar45 = 0;
                while( true ) {
                  pTVar7 = (pFVar13->MuscleActivationElementAttribute).ConstAttributeArray;
                  if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
                    iVar17 = FManagedArrayCollection::NumElements
                                       ((pFVar13->MuscleActivationElementAttribute).ConstCollection,
                                        (pFVar13->MuscleActivationElementAttribute).Group);
                  }
                  else {
                    iVar17 = (**(code **)(*(longlong *)pTVar7 + 0x60))();
                  }
                  if (iVar17 <= (int)uVar28) {
                    if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3a0.AllocatorInstance.Data);
                    }
                    if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_390.AllocatorInstance.Data);
                    }
                    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<float,TSizedDefaultAllocator<32>_> *)
                               local_3c8.AllocatorInstance.Data,local_3c8.ArrayNum);
                    if ((TArray<float,TSizedDefaultAllocator<32>_> *)
                        local_3c8.AllocatorInstance.Data !=
                        (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_3c8.AllocatorInstance.Data);
                    }
                    DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                               local_368.AllocatorInstance.Data,local_368.ArrayNum);
                    if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                        local_368.AllocatorInstance.Data !=
                        (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_368.AllocatorInstance.Data);
                    }
                    if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3e8.AllocatorInstance.Data);
                    }
                    if (local_410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_410.AllocatorInstance.Data);
                    }
                    if (local_490.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_490.AllocatorInstance.Data);
                    }
                    if (local_4a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_4a0.AllocatorInstance.Data);
                    }
                    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)
                               local_4b0.AllocatorInstance.Data,local_4b0.ArrayNum);
                    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_4b0.AllocatorInstance.Data
                        != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_4b0.AllocatorInstance.Data);
                    }
                    if (local_460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_460.AllocatorInstance.Data);
                    }
                    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)
                               local_328.AllocatorInstance.Data,local_328.ArrayNum);
                    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_328.AllocatorInstance.Data
                        != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_328.AllocatorInstance.Data);
                    }
                    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)0x0,0);
                    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)
                               local_420.AllocatorInstance.Data,local_420.ArrayNum);
                    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_420.AllocatorInstance.Data
                        != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_420.AllocatorInstance.Data);
                    }
                    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<int,TSizedDefaultAllocator<32>_> *)
                               local_358.AllocatorInstance.Data,local_358.ArrayNum);
                    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_358.AllocatorInstance.Data
                        != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_358.AllocatorInstance.Data);
                    }
                    if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3d8.AllocatorInstance.Data);
                    }
                    if (local_480.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_480.Data);
                    }
                    DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                               local_560.Data,(int)local_558);
                    if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                        local_560.Data ==
                        (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
                      return local_3f8;
                    }
                    FMemory::Free(local_560.Data);
                    return local_3f8;
                  }
                  GetMuscleActivationData(pFVar13,(FMuscleActivationData *)local_2b8,uVar28);
                  pTVar25 = local_3f8;
                  uVar27 = 0;
                  if ((int)uVar28 < local_3f8->ArrayNum) {
                    uVar27 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  pFVar33 = (pTVar25->AllocatorInstance).Data + lVar45;
                  if ((FScriptContainerElement *)(local_2b8 + 0x58) != pFVar33) {
                    DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                               local_260.Data,local_258);
                    iVar17 = *(int *)(pFVar33 + 8);
                    pTVar38 = *(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **)
                               pFVar33;
                    local_258 = iVar17;
                    if ((iVar17 != 0) || (local_254 != 0)) {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x10,8,iVar17,local_254,(ForAnyElementType *)(local_2b8 + 0x58),
                                 iVar17,(int *)(local_2b8 + 100));
                      ConstructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                                (local_260.Data,pTVar38,iVar17);
                    }
                  }
                  uVar27 = 0;
                  if ((int)uVar28 < local_3c8.ArrayNum) {
                    uVar27 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) break;
                  pFVar33 = local_3c8.AllocatorInstance.Data + lVar45;
                  if ((FScriptContainerElement *)&local_250 != pFVar33) {
                    iVar17 = *(int *)(pFVar33 + 8);
                    /* WARNING: Load size is inaccurate */
                    FVar37.Data = *pFVar33;
                    local_248 = iVar17;
                    if (((iVar17 != 0) || (local_244[0] != 0)) &&
                       (UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,iVar17,local_244[0],&local_250,iVar17,local_244), iVar17 != 0
                       )) {
                      memcpy(local_250.Data,FVar37.Data,(longlong)iVar17 << 2);
                    }
                  }
                  UpdateMuscleActivationData(pFVar13,uVar28,(FMuscleActivationData *)local_2b8);
                  if (local_250.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_250.Data);
                  }
                  DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                             local_260.Data,local_258);
                  if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_260.Data
                      != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
                    FMemory::Free(local_260.Data);
                  }
                  if ((FScriptContainerElement *)local_2b8._56_8_ != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free((void *)local_2b8._56_8_);
                  }
                  if ((FScriptContainerElement *)local_2b8._40_8_ != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free((void *)local_2b8._40_8_);
                  }
                  if ((FScriptContainerElement *)local_2b8._8_8_ != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free((void *)local_2b8._8_8_);
                  }
                  uVar28 = uVar28 + 1;
                  lVar45 = lVar45 + 0x10;
                }
                pcVar8 = (code *)swi(3);
                pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar8)();
                return pTVar25;
              }
              uVar28 = *(uint *)&(pTVar38->AllocatorInstance).Data;
              lVar45 = (longlong)(int)uVar28;
              uVar27 = 0;
              if ((int)uVar28 < local_328.ArrayNum) {
                uVar27 = ~uVar28 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar8 = (code *)swi(3);
                pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar8)();
                return pTVar25;
              }
              FVar37.Data = local_328.AllocatorInstance.Data;
              pTVar43 = local_550;
              puVar31 = *(uint **)&local_328.AllocatorInstance.Data[lVar45 * 0x10].field_0x0;
              iVar17 = *(int *)(local_328.AllocatorInstance.Data + lVar45 * 0x10 + 8);
              puVar2 = puVar31 + iVar17;
              while( true ) {
                if (*(int *)(FVar37.Data + lVar45 * 0x10 + 8) != iVar17) {
                  local_4f7[4] = false;
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_4f7 + 4);
                }
                if (puVar31 == puVar2) break;
                local_468[0] = *puVar31;
                lVar30 = (longlong)(int)local_468[0];
                uVar28 = 0;
                if ((int)local_468[0] < pTVar43->ArrayNum) {
                  uVar28 = ~local_468[0] >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                uVar28 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar30 * 0x10);
                uVar27 = 0;
                if ((int)uVar28 < local_4a0.ArrayNum) {
                  uVar27 = ~uVar28 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar8)();
                  return pTVar25;
                }
                if (local_4a0.AllocatorInstance.Data[(int)uVar28] == (FScriptContainerElement)0x0) {
LAB_143fa1186:
                  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                            (&local_3e8,(int *)local_468);
                }
                else {
                  lVar30 = (longlong)(int)local_468[0];
                  uVar28 = 0;
                  if ((int)local_468[0] < pTVar43->ArrayNum) {
                    uVar28 = ~local_468[0] >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  uVar28 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar30 * 0x10 + 4);
                  uVar27 = 0;
                  if ((int)uVar28 < local_4a0.ArrayNum) {
                    uVar27 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  if (local_4a0.AllocatorInstance.Data[(int)uVar28] == (FScriptContainerElement)0x0)
                  goto LAB_143fa1186;
                  lVar30 = (longlong)(int)local_468[0];
                  uVar28 = 0;
                  if ((int)local_468[0] < pTVar43->ArrayNum) {
                    uVar28 = ~local_468[0] >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  uVar28 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar30 * 0x10 + 8);
                  uVar27 = 0;
                  if ((int)uVar28 < local_4a0.ArrayNum) {
                    uVar27 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  if (local_4a0.AllocatorInstance.Data[(int)uVar28] == (FScriptContainerElement)0x0)
                  goto LAB_143fa1186;
                  lVar30 = (longlong)(int)local_468[0];
                  uVar28 = 0;
                  if ((int)local_468[0] < pTVar43->ArrayNum) {
                    uVar28 = ~local_468[0] >> 0x1f;
                  }
                  if ((uVar28 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  uVar28 = *(uint *)((pTVar43->AllocatorInstance).Data + lVar30 * 0x10 + 0xc);
                  uVar27 = 0;
                  if ((int)uVar28 < local_4a0.ArrayNum) {
                    uVar27 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar8 = (code *)swi(3);
                    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                               *)(*pcVar8)();
                    return pTVar25;
                  }
                  if (local_4a0.AllocatorInstance.Data[(int)uVar28] == (FScriptContainerElement)0x0)
                  goto LAB_143fa1186;
                }
                puVar31 = puVar31 + 1;
              }
              uVar26 = local_470 & 0xffffffff;
              pTVar38 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(local_510->AllocatorInstance).Data + 4);
              pTVar42 = local_430;
            } while( true );
          }
        }
      }
    }
  }
  if (local_480.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data);
  }
  DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_560.Data,
             (int)local_558);
  if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_560.Data !=
      (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_560.Data);
  }
  return __return_storage_ptr__;
LAB_143fa1e35:
  if (*(int *)(FVar37.Data + lVar45 * 0x10 + 8) != iVar17) {
    local_4f7[7] = false;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_4f7 + 7);
  }
  if (puVar31 == puVar2) goto LAB_143fa1fc7;
  local_4d0[0] = *puVar31;
  if (local_4d0[0] != local_538[0]) goto LAB_143fa1e62;
  puVar31 = puVar31 + 1;
  goto LAB_143fa1e35;
LAB_143fa1e62:
  if (((local_508.Data <= (FScriptContainerElement *)local_4d0) &&
      ((FScriptContainerElement *)local_4d0 < local_508.Data + (longlong)(int)local_500._4_4_ * 4))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *)(*pcVar8)();
    return pTVar25;
  }
  iVar17 = (int)local_500;
  if ((int)local_500 == local_500._4_4_) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_508,(int *)((longlong)&local_500 + 4));
  }
  local_500 = CONCAT44(local_500._4_4_,iVar17 + 1);
  *(uint *)(local_508.Data + (longlong)iVar17 * 4) = local_4d0[0];
  lVar45 = (longlong)(int)local_4d0[0];
  uVar28 = 0;
  if ((int)local_4d0[0] < local_3d8.ArrayNum) {
    uVar28 = ~local_4d0[0] >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *)(*pcVar8)();
    return pTVar25;
  }
  lVar30 = (longlong)(int)local_4d0[0];
  local_4b8 = *(float *)(local_3d8.AllocatorInstance.Data + lVar45 * 0xc + 8);
  uVar59 = (undefined4)*(undefined8 *)(local_3d8.AllocatorInstance.Data + lVar45 * 0xc);
  uVar67 = (undefined4)
           ((ulonglong)*(undefined8 *)(local_3d8.AllocatorInstance.Data + lVar45 * 0xc) >> 0x20);
  uVar28 = 0;
  if ((int)local_4d0[0] < local_410.ArrayNum) {
    uVar28 = ~local_4d0[0] >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *)(*pcVar8)();
    return pTVar25;
  }
  local_564 = local_410.AllocatorInstance.Data[lVar30];
LAB_143fa1fc7:
  if (((local_508.Data <= (FScriptContainerElement *)local_538) &&
      ((FScriptContainerElement *)local_538 < local_508.Data + (longlong)(int)local_500._4_4_ * 4))
     && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *)(*pcVar8)();
    return pTVar25;
  }
  iVar17 = (int)local_500;
  if ((int)local_500 == local_500._4_4_) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_508,(int *)((longlong)&local_500 + 4));
  }
  local_500 = CONCAT44(local_500._4_4_,iVar17 + 1);
  *(uint *)(local_508.Data + (longlong)iVar17 * 4) = local_538[0];
  pTVar43 = local_550;
  fVar52 = fVar62;
  fVar60 = fVar56;
  fVar51 = fVar66;
  local_570 = fVar62;
LAB_143fa2097:
  FVar37.Data = local_508.Data;
  iVar17 = (int)local_500;
  lVar45 = (longlong)(int)local_500;
  local_440 = (int)local_500;
  if (((int)local_500 != 0) || (local_43c != 0)) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_500,local_43c,&local_448,(int)local_500,&local_43c);
    if (iVar17 != 0) {
      memcpy(local_448.Data,FVar37.Data,lVar45 << 2);
    }
    fVar62 = local_570;
    fVar66 = local_578._4_4_;
    fVar56 = (float)local_578;
    fVar52 = local_570;
    fVar60 = (float)local_578;
    fVar51 = local_578._4_4_;
  }
  iVar17 = (int)local_470 + 1;
  local_470 = CONCAT44(local_470._4_4_,iVar17);
  fVar50 = local_4b8;
  if (local_564 != (FScriptContainerElement)0x0) goto LAB_143fa223c;
  goto LAB_143fa14c6;
LAB_143fa223c:
  if (((local_560.Data <= &local_528) &&
      (&local_528 <
       (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
       (local_560.Data + (longlong)local_558._4_4_ * 0x10))) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *)(*pcVar8)();
    return pTVar25;
  }
  iVar17 = (int)local_558;
  if ((int)local_558 == local_558._4_4_) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_560,(int *)((longlong)&local_558 + 4));
  }
  FVar37.Data = local_528.AllocatorInstance.Data;
  pFVar33 = local_560.Data + (longlong)iVar17 * 0x10;
  local_558 = CONCAT44(local_558._4_4_,iVar17 + 1);
  *(FScriptContainerElement **)&pFVar33->field_0x0 = (FScriptContainerElement *)0x0;
  lVar45 = (longlong)local_528.ArrayNum;
  *(int *)(pFVar33 + 8) = local_528.ArrayNum;
  if (local_528.ArrayNum == 0) {
    *(int *)(pFVar33 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_528.ArrayNum,0,(ForAnyElementType *)pFVar33,local_528.ArrayNum,
               (int *)(pFVar33 + 0xc));
    memcpy(*(FScriptContainerElement **)&pFVar33->field_0x0,FVar37.Data,lVar45 * 0xc);
  }
  uVar28 = (uint)local_4d8;
  uVar27 = 0;
  if ((int)local_568 < local_3e8.ArrayNum) {
    uVar27 = (uint)local_4d8;
  }
  if ((uVar27 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *)(*pcVar8)();
    return pTVar25;
  }
  pTVar38 = local_510;
  pFVar33 = local_3e8.AllocatorInstance.Data + (longlong)local_510 * 4;
  if (((local_480.Data <= pFVar33) &&
      (pFVar33 < local_480.Data + (longlong)(int)local_478._4_4_ * 4)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar8 = (code *)swi(3);
    pTVar25 = (TArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *)(*pcVar8)();
    return pTVar25;
  }
  iVar17 = (int)local_478;
  if ((int)local_478 == local_478._4_4_) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_480,(int *)((longlong)&local_478 + 4));
  }
  local_478 = CONCAT44(local_478._4_4_,iVar17 + 1);
  *(undefined4 *)(local_480.Data + (longlong)iVar17 * 4) = *(undefined4 *)pFVar33;
LAB_143fa21ec:
  if (local_528.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.AllocatorInstance.Data);
  }
  if (local_508.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data);
  }
  if (local_448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data);
  }
  pTVar34 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)&local_450->ArrayMax;
  uVar26 = local_530 & 0xffffffff;
  goto LAB_143fa12c5;
}

// DefineSchema @ 143fa98e0

void __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::DefineSchema(FMuscleActivationFacade *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_28 [3];
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                       ,0x54,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<int>::Add
            (&this->GeometryGroupIndexAttribute,MakePersistent,FGeometryCollection::GeometryGroup);
  pFVar3 = ::FName::FName(local_28,"Tetrahedral");
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
            (&this->MuscleActivationElementAttribute,MakePersistent,*pFVar3);
  TManagedArrayAccessor<UE::Math::TIntVector2<int>_>::Add
            (&this->OriginInsertionPairAttribute,MakePersistent,FGeometryCollection::VerticesGroup);
  TManagedArrayAccessor<float>::Add
            (&this->OriginInsertionRestLengthAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>::Add
            (&this->FiberDirectionMatrixAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->ContractionVolumeScaleAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add
            (&this->FiberLengthRatioAtMaxActivationAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add
            (&this->MuscleLengthRatioThresholdForMaxActivationAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->InflationVolumeScaleAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
  ::Add(&this->FiberStreamlineAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->FiberStreamlineRestLengthAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add
            (&this->MuscleActivationCurveNameAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<Chaos::FLinearCurve>::Add
            (&this->LengthActivationCurveAttribute,MakePersistent,(FName)0x0);
  return;
}

// FindMuscleGeometryIndex @ 143fac6e0

int __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::FindMuscleGeometryIndex
          (FMuscleActivationFacade *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (((((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
         ((this->MuscleActivationElementAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
       (((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0))))
      && (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
          (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0 &&
           ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0)))))) &&
     ((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    bVar1 = TManagedArrayAccessor<int>::IsValidIndex(&this->GeometryGroupIndexAttribute,param_1);
    if (bVar1) {
      piVar2 = TManagedArrayAccessor<int>::operator[](&this->GeometryGroupIndexAttribute,param_1);
      return *piVar2;
    }
  }
  return -1;
}

// FindMuscleIndexByCurveName @ 143fac780

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::FindMuscleIndexByCurveName
          (FMuscleActivationFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TManagedArray<FString> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint local_28 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->MuscleActivationCurveNameAttribute).ConstAttributeArray !=
      (TManagedArray<FString> *)0x0) {
    local_28[0] = 0;
    while( true ) {
      pTVar2 = (this->MuscleActivationElementAttribute).ConstAttributeArray;
      if (pTVar2 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
        iVar8 = FManagedArrayCollection::NumElements
                          ((this->MuscleActivationElementAttribute).ConstCollection,
                           (this->MuscleActivationElementAttribute).Group);
      }
      else {
        iVar8 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
      }
      uVar6 = local_28[0];
      lVar11 = (longlong)(int)local_28[0];
      if (iVar8 <= (int)local_28[0]) break;
      if (((this->MuscleActivationCurveNameAttribute).ConstAttributeArray ==
           (TManagedArray<FString> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      pTVar3 = (this->MuscleActivationCurveNameAttribute).ConstAttributeArray;
      uVar9 = 0;
      if ((int)uVar6 < *(int *)&pTVar3->field_0x18) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      iVar8 = (param_1->Data).ArrayNum;
      puVar12 = (undefined8 *)(lVar11 * 0x10 + *(longlong *)&pTVar3->field_0x10);
      iVar1 = *(int *)(puVar12 + 1);
      if (iVar1 == iVar8) {
        if (1 < iVar1) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*puVar12,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
          goto LAB_143fac899;
        }
LAB_143fac8a4:
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             local_28[0];
      }
      else {
        bVar7 = iVar1 + iVar8 == 1;
LAB_143fac899:
        if (bVar7) goto LAB_143fac8a4;
      }
      local_28[0] = local_28[0] + 1;
    }
  }
  return __return_storage_ptr__;
}

// FindMuscleIndexByName @ 143fac980

int __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::FindMuscleIndexByName
          (FMuscleActivationFacade *this,FString *param_1)

{
  FManagedArrayCollection *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  int iVar5;
  FName *pFVar6;
  TManagedArrayBase<FString> *this_00;
  TManagedArray<int> *pTVar7;
  int *piVar8;
  FName local_res8;
  FName local_res18;
  
  FVar4 = FTransformCollection::TransformGroup;
  if (((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
       ((this->MuscleActivationElementAttribute).ConstAttributeArray !=
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
      ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
     (((((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
        (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
          (TManagedArray<float> *)0x0 &&
         ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
          (TManagedArray<float> *)0x0)))))) &&
      ((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0))))
  {
    pFVar1 = this->ConstCollection;
    pFVar6 = ::FName::FName(&local_res8,"BoneName");
    this_00 = (TManagedArrayBase<FString> *)
              FManagedArrayCollection::FindAttributeTyped<FString>(pFVar1,*pFVar6,FVar4);
    FVar4 = FGeometryCollection::GeometryGroup;
    pFVar1 = this->ConstCollection;
    pFVar6 = ::FName::FName(&local_res18,"TransformIndex");
    pTVar7 = FManagedArrayCollection::FindAttributeTyped<int>(pFVar1,*pFVar6,FVar4);
    if (((this_00 != (TManagedArrayBase<FString> *)0x0) && (pTVar7 != (TManagedArray<int> *)0x0)) &&
       (iVar5 = TManagedArrayBase<FString>::Find(this_00,param_1), -1 < iVar5)) {
      piVar2 = *(int **)&pTVar7->field_0x10;
      for (piVar8 = piVar2; piVar8 != piVar2 + *(int *)&pTVar7->field_0x18; piVar8 = piVar8 + 1) {
        if (*piVar8 == iVar5) {
          iVar5 = (int)((longlong)piVar8 - (longlong)piVar2 >> 2);
          if (-1 < iVar5) {
            pTVar7 = TManagedArrayAccessor<int>::Get(&this->GeometryGroupIndexAttribute);
            piVar2 = *(int **)&pTVar7->field_0x10;
            piVar8 = piVar2;
            goto joined_r0x000143facaed;
          }
          break;
        }
      }
    }
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return -1;
joined_r0x000143facaed:
  if (piVar8 == piVar2 + *(int *)&pTVar7->field_0x18) {
    iVar5 = -1;
LAB_143facb02:
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    return iVar5;
  }
  if (*piVar8 == iVar5) {
    iVar5 = (int)((longlong)piVar8 - (longlong)piVar2 >> 2);
    goto LAB_143facb02;
  }
  piVar8 = piVar8 + 1;
  goto joined_r0x000143facaed;
}

// FindMuscleName @ 143facb30

FString * __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::FindMuscleName
          (FMuscleActivationFacade *this,FString *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  int iVar2;
  FManagedArrayCollection *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  TManagedArray<FString> *pTVar9;
  TManagedArray<int> *pTVar10;
  uint *puVar11;
  FString *pFVar12;
  FName local_res8;
  FName local_res20;
  
  FVar5 = FTransformCollection::TransformGroup;
  pFVar3 = this->ConstCollection;
  pFVar8 = ::FName::FName(&local_res8,"BoneName");
  pTVar9 = FManagedArrayCollection::FindAttributeTyped<FString>(pFVar3,*pFVar8,FVar5);
  FVar5 = FGeometryCollection::GeometryGroup;
  pFVar3 = this->ConstCollection;
  pFVar8 = ::FName::FName(&local_res20,"TransformIndex");
  pTVar10 = FManagedArrayCollection::FindAttributeTyped<int>(pFVar3,*pFVar8,FVar5);
  if (((((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
         ((this->MuscleActivationElementAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
       (((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0))))
      && (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
          (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0 &&
           ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0)))))) &&
     (((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
      (bVar6 = TManagedArrayAccessor<int>::IsValidIndex(&this->GeometryGroupIndexAttribute,param_1),
      bVar6)))) {
    puVar11 = (uint *)TManagedArrayAccessor<int>::operator[]
                                (&this->GeometryGroupIndexAttribute,param_1);
    uVar1 = *puVar11;
    if ((((pTVar9 != (TManagedArray<FString> *)0x0) && (pTVar10 != (TManagedArray<int> *)0x0)) &&
        (-1 < (int)uVar1)) && ((int)uVar1 < *(int *)&pTVar10->field_0x18)) {
      uVar7 = 0;
      if ((int)uVar1 < *(int *)&pTVar10->field_0x18) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FString *)(*pcVar4)();
        return pFVar12;
      }
      iVar2 = *(int *)((longlong)(int)uVar1 * 4 + *(longlong *)&pTVar10->field_0x10);
      if ((-1 < iVar2) && (iVar2 < *(int *)&pTVar9->field_0x18)) {
        uVar7 = 0;
        if ((int)uVar1 < *(int *)&pTVar10->field_0x18) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FString *)(*pcVar4)();
          return pFVar12;
        }
        uVar1 = *(uint *)((longlong)(int)uVar1 * 4 + *(longlong *)&pTVar10->field_0x10);
        uVar7 = 0;
        if ((int)uVar1 < *(int *)&pTVar9->field_0x18) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FString *)(*pcVar4)();
          return pFVar12;
        }
        ::FString::FString(__return_storage_ptr__,
                           (FString *)
                           ((longlong)(int)uVar1 * 0x10 + *(longlong *)&pTVar9->field_0x10));
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLengthActivationCurve @ 143fb1120

FLinearCurve * __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::GetLengthActivationCurve
          (FMuscleActivationFacade *this,FLinearCurve *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  TManagedArray<Chaos::FLinearCurve> *pTVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FLinearCurve *pFVar8;
  
  pTVar2 = (this->LengthActivationCurveAttribute).ConstAttributeArray;
  if ((pTVar2 != (TManagedArray<Chaos::FLinearCurve> *)0x0) && (-1 < param_1)) {
    iVar6 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    if (param_1 < iVar6) {
      if ((this->LengthActivationCurveAttribute).ConstAttributeArray ==
          (TManagedArray<Chaos::FLinearCurve> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x60,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FLinearCurve *)(*pcVar4)();
          return pFVar8;
        }
      }
      pTVar2 = (this->LengthActivationCurveAttribute).ConstAttributeArray;
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
          pFVar8 = (FLinearCurve *)(*pcVar4)();
          return pFVar8;
        }
      }
      lVar3 = *(longlong *)&pTVar2->field_0x10;
      (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = *(int *)(lVar3 + 8 + (longlong)param_1 * 0x10);
      _Src = *(void **)(lVar3 + (longlong)param_1 * 0x10);
      piVar1 = &(__return_storage_ptr__->Keys).ArrayMax;
      (__return_storage_ptr__->Keys).ArrayNum = iVar6;
      if (iVar6 == 0) {
        *piVar1 = 0;
        return __return_storage_ptr__;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar6,0,(ForAnyElementType *)__return_storage_ptr__,iVar6,piVar1);
      memcpy((__return_storage_ptr__->Keys).AllocatorInstance.Data,_Src,(longlong)iVar6 << 3);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Keys).ArrayNum = 0;
  (__return_storage_ptr__->Keys).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMuscleActivationData @ 143fb1290

FMuscleActivationData * __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::GetMuscleActivationData
          (FMuscleActivationFacade *this,FMuscleActivationData *__return_storage_ptr__,int param_1)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar2;
  TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FMuscleActivationData *pFVar11;
  float *pfVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  
  (__return_storage_ptr__->MuscleActivationElement).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->MuscleActivationElement).ArrayNum = 0;
  (__return_storage_ptr__->MuscleActivationElement).ArrayMax = 0;
  (__return_storage_ptr__->FiberDirectionMatrix).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FiberDirectionMatrix).ArrayNum = 0;
  (__return_storage_ptr__->FiberDirectionMatrix).ArrayMax = 0;
  (__return_storage_ptr__->ContractionVolumeScale).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ContractionVolumeScale).ArrayNum = 0;
  (__return_storage_ptr__->ContractionVolumeScale).ArrayMax = 0;
  __return_storage_ptr__->FiberLengthRatioAtMaxActivation = 0.5;
  __return_storage_ptr__->MuscleLengthRatioThresholdForMaxActivation = 0.75;
  __return_storage_ptr__->InflationVolumeScale = 1.0;
  (__return_storage_ptr__->FiberStreamline).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FiberStreamline).ArrayNum = 0;
  (__return_storage_ptr__->FiberStreamline).ArrayMax = 0;
  (__return_storage_ptr__->FiberStreamlineRestLength).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FiberStreamlineRestLength).ArrayNum = 0;
  (__return_storage_ptr__->FiberStreamlineRestLength).ArrayMax = 0;
  if (((((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
         ((this->MuscleActivationElementAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
       (((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0))))
      && (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
          (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0 &&
           ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0)))))) &&
     (((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
      (-1 < param_1)))) {
    pTVar1 = (this->MuscleActivationElementAttribute).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar7 = FManagedArrayCollection::NumElements
                        ((this->MuscleActivationElementAttribute).ConstCollection,
                         (this->MuscleActivationElementAttribute).Group);
    }
    else {
      iVar7 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (param_1 < iVar7) {
      piVar9 = TManagedArrayAccessor<int>::operator[](&this->GeometryGroupIndexAttribute,param_1);
      __return_storage_ptr__->GeometryGroupIndex = *piVar9;
      pTVar10 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&this->MuscleActivationElementAttribute,param_1);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&__return_storage_ptr__->MuscleActivationElement,pTVar10);
      if (((this->OriginInsertionPairAttribute).ConstAttributeArray ==
           (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FMuscleActivationData *)(*pcVar5)();
        return pFVar11;
      }
      pTVar2 = (this->OriginInsertionPairAttribute).ConstAttributeArray;
      uVar15 = (uint)~param_1 >> 0x1f;
      uVar8 = 0;
      if (param_1 < *(int *)&pTVar2->field_0x18) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FMuscleActivationData *)(*pcVar5)();
        return pFVar11;
      }
      (__return_storage_ptr__->OriginInsertionPair).field0_0x0 =
           *(TIntVector2<int>_u_0 *)(*(longlong *)&pTVar2->field_0x10 + (longlong)param_1 * 8);
      pfVar12 = TManagedArrayAccessor<float>::operator[]
                          (&this->OriginInsertionRestLengthAttribute,param_1);
      __return_storage_ptr__->OriginInsertionRestLength = *pfVar12;
      if (((this->FiberDirectionMatrixAttribute).ConstAttributeArray ==
           (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FMuscleActivationData *)(*pcVar5)();
        return pFVar11;
      }
      pTVar3 = (this->FiberDirectionMatrixAttribute).ConstAttributeArray;
      uVar8 = 0;
      if (param_1 < *(int *)&pTVar3->field_0x18) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FMuscleActivationData *)(*pcVar5)();
        return pFVar11;
      }
      lVar14 = (longlong)param_1 * 0x10;
      TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>::operator=
                (&__return_storage_ptr__->FiberDirectionMatrix,
                 (TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&pTVar3->field_0x10 + lVar14));
      pTVar13 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&this->ContractionVolumeScaleAttribute,param_1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (&__return_storage_ptr__->ContractionVolumeScale,pTVar13);
      pfVar12 = TManagedArrayAccessor<float>::operator[]
                          (&this->FiberLengthRatioAtMaxActivationAttribute,param_1);
      __return_storage_ptr__->FiberLengthRatioAtMaxActivation = *pfVar12;
      pfVar12 = TManagedArrayAccessor<float>::operator[]
                          (&this->MuscleLengthRatioThresholdForMaxActivationAttribute,param_1);
      __return_storage_ptr__->MuscleLengthRatioThresholdForMaxActivation = *pfVar12;
      pfVar12 = TManagedArrayAccessor<float>::operator[]
                          (&this->InflationVolumeScaleAttribute,param_1);
      __return_storage_ptr__->InflationVolumeScale = *pfVar12;
      if (((this->FiberStreamlineAttribute).ConstAttributeArray ==
           (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
            *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FMuscleActivationData *)(*pcVar5)();
        return pFVar11;
      }
      pTVar4 = (this->FiberStreamlineAttribute).ConstAttributeArray;
      uVar8 = 0;
      if (param_1 < *(int *)&pTVar4->field_0x18) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FMuscleActivationData *)(*pcVar5)();
        return pFVar11;
      }
      TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::operator=(&__return_storage_ptr__->FiberStreamline,
                  (TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(lVar14 + *(longlong *)&pTVar4->field_0x10));
      pTVar13 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
                          (&this->FiberStreamlineRestLengthAttribute,param_1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (&__return_storage_ptr__->FiberStreamlineRestLength,pTVar13);
    }
  }
  return __return_storage_ptr__;
}

// IsValid @ 143fb7d70

bool __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::IsValid(FMuscleActivationFacade *this)

{
  if (((((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
         ((this->MuscleActivationElementAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
       (((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0))))
      && (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
          (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0 &&
           ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0)))))) &&
     ((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    return true;
  }
  return false;
}

// MuscleVertexOffset @ 143fb8ec0

int __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::MuscleVertexOffset
          (FMuscleActivationFacade *this,int param_1)

{
  uint uVar1;
  FManagedArrayCollection *this_00;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  TManagedArray<int> *pTVar8;
  int *piVar9;
  uint *puVar10;
  FName local_res8;
  
  FVar3 = FGeometryCollection::GeometryGroup;
  this_00 = this->ConstCollection;
  pFVar7 = ::FName::FName(&local_res8,"VertexStart");
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<int>(this_00,*pFVar7,FVar3);
  if (((((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
         ((this->MuscleActivationElementAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
       (((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0))))
      && (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
          (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0 &&
           ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0)))))) &&
     (((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
      (bVar4 = TManagedArrayAccessor<int>::IsValidIndex(&this->GeometryGroupIndexAttribute,param_1),
      bVar4)))) {
    piVar9 = TManagedArrayAccessor<int>::operator[](&this->GeometryGroupIndexAttribute,param_1);
    if ((-1 < *piVar9) && (*piVar9 < *(int *)&pTVar8->field_0x18)) {
      puVar10 = (uint *)TManagedArrayAccessor<int>::operator[]
                                  (&this->GeometryGroupIndexAttribute,param_1);
      uVar1 = *puVar10;
      uVar5 = 0;
      if ((int)uVar1 < *(int *)&pTVar8->field_0x18) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      return *(int *)(*(longlong *)&pTVar8->field_0x10 + (longlong)(int)uVar1 * 4);
    }
  }
  return 0;
}

// NumMuscleVertices @ 143fb9150

int __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::NumMuscleVertices
          (FMuscleActivationFacade *this,int param_1)

{
  uint uVar1;
  FManagedArrayCollection *this_00;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  TManagedArray<int> *pTVar8;
  int *piVar9;
  uint *puVar10;
  FName local_res8;
  
  FVar3 = FGeometryCollection::GeometryGroup;
  this_00 = this->ConstCollection;
  pFVar7 = ::FName::FName(&local_res8,"VertexCount");
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<int>(this_00,*pFVar7,FVar3);
  if (((((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
         ((this->MuscleActivationElementAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
       (((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0))))
      && (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
          (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0 &&
           ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0)))))) &&
     (((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
      (bVar4 = TManagedArrayAccessor<int>::IsValidIndex(&this->GeometryGroupIndexAttribute,param_1),
      bVar4)))) {
    piVar9 = TManagedArrayAccessor<int>::operator[](&this->GeometryGroupIndexAttribute,param_1);
    if ((-1 < *piVar9) && (*piVar9 < *(int *)&pTVar8->field_0x18)) {
      puVar10 = (uint *)TManagedArrayAccessor<int>::operator[]
                                  (&this->GeometryGroupIndexAttribute,param_1);
      uVar1 = *puVar10;
      uVar5 = 0;
      if ((int)uVar1 < *(int *)&pTVar8->field_0x18) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar6 = (*pcVar2)();
        return iVar6;
      }
      return *(int *)(*(longlong *)&pTVar8->field_0x10 + (longlong)(int)uVar1 * 4);
    }
  }
  return 0;
}

// RemoveInvalidMuscles @ 143fc2000

int __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::RemoveInvalidMuscles
          (FMuscleActivationFacade *this)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint local_28 [2];
  ForAnyElementType local_20;
  undefined8 local_18;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                         ,0xdd,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  iVar7 = 0;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  iVar5 = 0;
  if ((((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
        (iVar5 = iVar7,
        (this->MuscleActivationElementAttribute).ConstAttributeArray !=
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
        (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
      ((((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
        (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
          (TManagedArray<float> *)0x0 &&
         ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
          (TManagedArray<float> *)0x0)))))))) &&
     ((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    local_28[0] = 0;
    while( true ) {
      pTVar1 = (this->GeometryGroupIndexAttribute).ConstAttributeArray;
      if (pTVar1 == (TManagedArray<int> *)0x0) {
        iVar5 = FManagedArrayCollection::NumElements
                          ((this->GeometryGroupIndexAttribute).ConstCollection,
                           (this->GeometryGroupIndexAttribute).Group);
      }
      else {
        iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
      }
      uVar3 = local_28[0];
      lVar8 = (longlong)(int)local_28[0];
      if (iVar5 <= (int)local_28[0]) break;
      if (((this->GeometryGroupIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pTVar1 = (this->GeometryGroupIndexAttribute).ConstAttributeArray;
      uVar6 = 0;
      if ((int)uVar3 < *(int *)&pTVar1->field_0x18) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar8 * 4) < 0) {
        if (((local_20.Data <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < local_20.Data + (longlong)local_18._4_4_ * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = (int)local_18;
        if ((int)local_18 == local_18._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_20,(int *)((longlong)&local_18 + 4));
        }
        local_18 = CONCAT44(local_18._4_4_,iVar5 + 1);
        *(uint *)(local_20.Data + (longlong)iVar5 * 4) = local_28[0];
      }
      local_28[0] = local_28[0] + 1;
    }
    (**(code **)(this->Collection->_padding_ + 0x28))(this->Collection,&GroupName,&local_20,0x101);
    iVar5 = (int)local_18;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return iVar5;
}

// SetUpMuscleActivation @ 143fc9910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::SetUpMuscleActivation
          (FMuscleActivationFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  FManagedArrayCollection *pFVar3;
  FName FVar4;
  void *_Src;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ForAnyElementType FVar10;
  FMuscleActivationFacade *pFVar11;
  undefined8 uVar12;
  TManagedArray<FString> *pTVar13;
  undefined1 *puVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  FName *pFVar20;
  TManagedArray<UE::Math::TVector<float>_> *pTVar21;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar22;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar23;
  TManagedArray<int> *pTVar24;
  TManagedArray<int> *pTVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  uint uVar27;
  FValueType *this_00;
  ulonglong uVar28;
  ForElementType<FSetElementId> FVar29;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar30;
  longlong lVar31;
  uint *puVar32;
  uint *puVar33;
  longlong lVar34;
  uint uVar35;
  FValueType *pFVar36;
  FScriptContainerElement *pFVar37;
  ulonglong uVar38;
  TManagedArray<FString> *pTVar39;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  ulonglong uVar42;
  uint *puVar43;
  uint *puVar44;
  uint uVar45;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar46;
  uint uVar47;
  longlong lVar48;
  ulonglong uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  undefined1 auStackY_a78 [32];
  uint local_a28;
  undefined1 local_a24;
  undefined1 local_a23;
  undefined1 local_a22;
  undefined1 local_a21;
  FIdentityFunctor local_a20 [4];
  uint local_a1c;
  uint local_a18 [2];
  ForAnyElementType local_a10;
  int local_a08;
  int local_a04;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_a00;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_9f0;
  float local_9e0 [2];
  uint local_9d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_9d0;
  uint local_9c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_9b8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_9b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_9a0;
  TManagedArray<FString> *local_998;
  undefined1 local_988 [8];
  ForAnyElementType local_980;
  undefined8 local_978;
  TIntVector2<int>_u_0 local_970;
  float local_968;
  ForAnyElementType local_960;
  int local_958 [2];
  ForAnyElementType local_950;
  undefined8 local_948;
  float local_940;
  float local_93c;
  float local_938;
  ForAnyElementType local_930;
  undefined8 local_928;
  ForAnyElementType local_920;
  undefined8 local_918;
  TArray<int,TSizedDefaultAllocator<32>_> *local_908;
  TArray<int,TSizedDefaultAllocator<32>_> *local_900;
  longlong *local_8f8;
  undefined8 uStack_8f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  int local_8d0;
  undefined4 uStack_8cc;
  uint local_8c8 [2];
  int local_8c0;
  int local_8bc;
  TManagedArray<int> *local_8b8;
  undefined8 local_8b0;
  uint local_8a0;
  uint uStack_89c;
  FMuscleActivationFacade *local_898;
  undefined8 local_890;
  float local_880;
  float fStack_87c;
  float local_878;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_870;
  int local_850;
  undefined1 local_84c [8];
  int local_844;
  int local_840;
  int local_83c;
  uint *local_838;
  TManagedArray<UE::Math::TVector<float>_> *local_830;
  TManagedArray<FString> *local_828;
  undefined1 local_820 [12];
  uint uStack_814;
  TBitArray<FDefaultBitArrayAllocator> *local_810;
  undefined8 uStack_808;
  longlong local_800;
  undefined8 uStack_7f8;
  undefined1 *local_7f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_7e8;
  undefined8 uStack_7c8;
  FName local_7c0;
  FName local_7b8;
  FScriptContainerElement *local_7b0;
  int *local_7a8;
  int *local_7a0;
  FScriptContainerElement *local_798;
  double local_788;
  double dStack_780;
  double local_778;
  double dStack_770;
  double local_768;
  double dStack_760;
  double local_758;
  double dStack_750;
  double local_748;
  double dStack_740;
  double local_738;
  double dStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 local_6f8;
  FName local_6e8;
  FName local_6e0;
  FName local_6d8;
  FName local_6d0;
  FName local_6c8;
  FName local_6c0;
  FName local_6b8;
  FName local_6b0;
  FName local_6a8;
  FName local_6a0;
  FName local_698;
  FName local_690;
  FName local_688;
  FName local_680;
  TRangedForIterator local_678;
  undefined4 local_62c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_628;
  FCollectionMeshFacade local_608;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_238;
  undefined1 local_1e8 [32];
  uint *local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  undefined1 local_198 [32];
  undefined8 local_178;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  ForElementType<FSetElementId> local_158;
  int local_150;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_148;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_a78;
  local_9e0[0] = param_3;
  local_9b8 = param_1;
  local_908 = param_2;
  local_898 = this;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                          ,0xef,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  FVar4 = FGeometryCollection::VerticesGroup;
  if (param_1->ArrayNum == 0) {
    if (1 < (byte)LogDataflowMuscleActivationFacade._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogDataflowMuscleActivationFacade);
      return false;
    }
  }
  else if (param_2->ArrayNum == 0) {
    if (1 < (byte)LogDataflowMuscleActivationFacade._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogDataflowMuscleActivationFacade);
      return false;
    }
  }
  else {
    pFVar3 = this->ConstCollection;
    pFVar20 = ::FName::FName(&local_6c8,"Vertex");
    pTVar21 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>
                        (pFVar3,*pFVar20,FVar4);
    if (pTVar21 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      if (1 < (byte)LogDataflowMuscleActivationFacade._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogDataflowMuscleActivationFacade);
        return false;
      }
    }
    else {
      pFVar3 = this->ConstCollection;
      pFVar20 = ::FName::FName(&local_6d0,"Tetrahedral");
      FVar4 = *pFVar20;
      pFVar20 = ::FName::FName(&local_6d8,"Tetrahedron");
      pTVar22 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector4<int>_>
                          (pFVar3,*pFVar20,FVar4);
      if (pTVar22 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
        if (1 < (byte)LogDataflowMuscleActivationFacade._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogDataflowMuscleActivationFacade);
          return false;
        }
      }
      else {
        pFVar3 = this->ConstCollection;
        pFVar20 = ::FName::FName(&local_6e0,"Tetrahedral");
        FVar4 = *pFVar20;
        pFVar20 = ::FName::FName(&local_6c0,"FiberDirection");
        pTVar21 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>
                            (pFVar3,*pFVar20,FVar4);
        FVar4 = FGeometryCollection::GeometryGroup;
        if (pTVar21 != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
          pFVar3 = this->ConstCollection;
          pFVar36 = (FValueType *)0x0;
          pFVar20 = ::FName::FName(&local_6e8,"TransformIndex");
          local_8b8 = FManagedArrayCollection::FindAttribute<int>(pFVar3,*pFVar20,FVar4);
          FVar4 = FTransformCollection::TransformGroup;
          pFVar3 = this->ConstCollection;
          pFVar20 = ::FName::FName(&local_6b8,"BoneName");
          local_7b8 = FVar4;
          local_7c0 = *pFVar20;
          pTVar23 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&pFVar3->Map,(TTuple<FName,FName> *)&local_7c0);
          this_00 = (FValueType *)&pTVar23->field_0x10;
          if (pTVar23 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            this_00 = pFVar36;
          }
          if (this_00 == (FValueType *)0x0) {
            local_998 = (TManagedArray<FString> *)0x0;
          }
          else {
            local_998 = FManagedArrayCollection::FValueType::GetTypedPtr<FString>(this_00);
          }
          FVar4 = FGeometryCollection::GeometryGroup;
          pFVar3 = this->ConstCollection;
          pFVar20 = ::FName::FName(&local_6b0,"VertexStart");
          pTVar24 = FManagedArrayCollection::FindAttribute<int>(pFVar3,*pFVar20,FVar4);
          FVar4 = FGeometryCollection::GeometryGroup;
          pFVar3 = this->ConstCollection;
          pFVar20 = ::FName::FName(&local_6a8,"VertexCount");
          pTVar25 = FManagedArrayCollection::FindAttribute<int>(pFVar3,*pFVar20,FVar4);
          local_198._0_8_ = 0;
          local_198._8_8_ = 0;
          local_178 = 0;
          local_9c0 = local_9b8->ArrayNum;
          uVar28 = (ulonglong)(int)local_9c0;
          pTVar46 = (TArray<int,TSizedDefaultAllocator<32>_> *)(local_9b8->AllocatorInstance).Data;
          local_170 = 0;
          local_16c = 0x80;
          local_168 = 0xffffffff;
          pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&(pTVar46->AllocatorInstance).Data + uVar28 * 4);
          local_164 = 0;
          local_158 = (ForElementType<FSetElementId>)0x0;
          local_150 = 0;
          local_9a0 = pTVar30;
LAB_143fc9c66:
          local_900 = pTVar46;
          if (local_9b8->ArrayNum != (int)uVar28) {
            local_a24 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_a24);
          }
          if (pTVar46 != pTVar30) {
            pFVar37 = (param_2->AllocatorInstance).Data;
            iVar18 = *(int *)&(pTVar46->AllocatorInstance).Data;
            pFVar41 = pFVar37 + (longlong)param_2->ArrayNum * 4;
            for (; pFVar37 != pFVar41; pFVar37 = pFVar37 + 4) {
              if (*(int *)pFVar37 == iVar18) {
                local_9d8 = (int)pFVar36 + 1;
                pFVar36 = (FValueType *)(ulonglong)local_9d8;
                if ((pTVar24 != (TManagedArray<int> *)0x0) && (pTVar25 != (TManagedArray<int> *)0x0)
                   ) {
                  local_a18[0] = 0;
                  iVar17 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24);
                  pTVar30 = local_9a0;
                  if (0 < iVar17) {
                    uVar47 = 0;
                    goto LAB_143fc9cf1;
                  }
                }
                break;
              }
            }
            goto LAB_143fc9e47;
          }
          if ((int)pFVar36 == 0) {
            local_a08 = local_9b8->ArrayNum;
            lVar31 = (longlong)local_a08;
            uVar28 = 0;
            pFVar41 = (local_9b8->AllocatorInstance).Data;
            local_a10.Data = (FScriptContainerElement *)0x0;
            if (local_a08 == 0) {
              local_a04 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_a08,0,&local_a10,local_a08,&local_a04);
              memcpy(local_a10.Data,pFVar41,lVar31 << 2);
            }
            pFVar11 = local_898;
            FVar4 = FGeometryCollection::VerticesGroup;
            pFVar3 = local_898->ConstCollection;
            pFVar20 = ::FName::FName(&local_6a0,"Vertex");
            pTVar21 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>
                                (pFVar3,*pFVar20,FVar4);
            pFVar3 = pFVar11->ConstCollection;
            local_9b8 = (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar21->field_0x10;
            pFVar20 = ::FName::FName(&local_698,"Tetrahedral");
            FVar4 = *pFVar20;
            pFVar20 = ::FName::FName(&local_690,"Tetrahedron");
            pTVar22 = FManagedArrayCollection::FindAttribute<UE::Math::TIntVector4<int>_>
                                (pFVar3,*pFVar20,FVar4);
            pFVar3 = pFVar11->ConstCollection;
            pFVar20 = ::FName::FName(&local_688,"Tetrahedral");
            FVar4 = *pFVar20;
            pFVar20 = ::FName::FName(&local_680,"FiberDirection");
            local_830 = FManagedArrayCollection::FindAttribute<UE::Math::TVector<float>_>
                                  (pFVar3,*pFVar20,FVar4);
            local_9f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_9f0.ArrayNum = 0;
            local_9f0.ArrayMax = 0;
            local_a00.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a00.ArrayNum = 0;
            local_a00.ArrayMax = 0;
            local_9b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_9b0.ArrayNum = 0;
            local_9b0.ArrayMax = 0;
            FCollectionMeshFacade::FCollectionMeshFacade(&local_608,pFVar11->ConstCollection);
            FCollectionMeshFacade::GetGeometryGroupIndexArray(&local_608,&local_9d0);
            local_238.Elements._0_8_ = 0;
            local_238.Elements._8_8_ = 0;
            local_238.Elements._32_8_ = 0;
            local_238.Elements._40_4_ = 0;
            local_238.Elements._44_4_ = 0x80;
            local_238.Elements._48_4_ = 0xffffffff;
            local_238.Elements._52_4_ = 0;
            local_238.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_238.HashSize = 0;
            local_148.Elements._0_8_ = 0;
            local_148.Elements._8_8_ = 0;
            local_148.Elements._32_8_ = 0;
            local_148.Elements._40_4_ = 0;
            local_148.Elements._44_4_ = 0x80;
            local_148.Elements._48_4_ = 0xffffffff;
            local_148.Elements._52_4_ = 0;
            local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_148.HashSize = 0;
            AlgoImpl::
            IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
                      ((int *)local_a10.Data,local_a08,local_a20[0],(TLess<void> *)local_a20);
            uVar38 = uVar28;
            if (0 < local_a08) {
              do {
                uVar27 = (uint)uVar28;
                uVar35 = ~uVar27 >> 0x1f;
                uVar47 = 0;
                if ((int)uVar27 < local_a08) {
                  uVar47 = uVar35;
                }
                if ((uVar47 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  uVar16 = (*pcVar5)();
                  return (bool)uVar16;
                }
                uVar47 = *(uint *)(local_a10.Data + uVar38);
                uVar40 = 0;
                if ((int)uVar47 < local_9d0.ArrayNum) {
                  uVar40 = ~uVar47 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  uVar16 = (*pcVar5)();
                  return (bool)uVar16;
                }
                iVar18 = local_a08;
                local_8c8[0] = *(uint *)(local_9d0.AllocatorInstance.Data +
                                        (longlong)(int)uVar47 * 4);
                iVar17 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<int>(&local_238,local_8c8[0],(int *)local_8c8);
                uVar47 = 0;
                if (iVar17 == -1) {
                  local_8c0 = local_a00.ArrayNum;
                  uVar40 = 0;
                  if ((int)uVar27 < iVar18) {
                    uVar40 = uVar35;
                  }
                  if ((uVar40 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  uVar35 = *(uint *)(local_a10.Data + uVar38);
                  uVar40 = 0;
                  if ((int)uVar35 < local_9d0.ArrayNum) {
                    uVar40 = ~uVar35 >> 0x1f;
                  }
                  if ((uVar40 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  local_7b0 = local_9d0.AllocatorInstance.Data + (longlong)(int)uVar35 * 4;
                  local_7a8 = &local_8c0;
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,int_&&>_>
                            (&local_238,(TPairInitializer<int_const_&,int_&&> *)local_84c,
                             (bool *)&local_7b0);
                  uVar35 = uVar47;
                  if ((int)uVar27 < local_a08) {
                    uVar35 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  uVar35 = *(uint *)(local_a10.Data + uVar38);
                  uVar40 = uVar47;
                  if ((int)uVar35 < local_9d0.ArrayNum) {
                    uVar40 = ~uVar35 >> 0x1f;
                  }
                  if ((uVar40 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  local_8bc = local_a00.ArrayNum;
                  local_7a0 = &local_8bc;
                  local_798 = local_9d0.AllocatorInstance.Data + (longlong)(int)uVar35 * 4;
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_&&,int_const_&>_>
                            (&local_148,(TPairInitializer<int_&&,int_const_&> *)(local_84c + 4),
                             (bool *)&local_7a0);
                  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
                  SetNum(&local_a00,local_a00.ArrayNum + 1,Default);
                  uVar40 = local_a00.ArrayNum - 1;
                  uVar35 = uVar47;
                  if ((int)uVar40 < local_a00.ArrayNum) {
                    uVar35 = ~uVar40 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  lVar31 = (longlong)(int)uVar40;
                }
                else {
                  uVar40 = uVar47;
                  if ((int)uVar27 < iVar18) {
                    uVar40 = uVar35;
                  }
                  if ((uVar40 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  uVar35 = *(uint *)(local_a10.Data + uVar38);
                  uVar40 = uVar47;
                  if ((int)uVar35 < local_9d0.ArrayNum) {
                    uVar40 = ~uVar35 >> 0x1f;
                  }
                  if ((uVar40 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  puVar33 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                    ::FindChecked((
                                                  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                                  *)&local_238,
                                                  *(int *)(local_9d0.AllocatorInstance.Data +
                                                          (longlong)(int)uVar35 * 4));
                  uVar35 = *puVar33;
                  lVar31 = (longlong)(int)uVar35;
                  uVar40 = uVar47;
                  if ((int)uVar35 < local_a00.ArrayNum) {
                    uVar40 = ~uVar35 >> 0x1f;
                  }
                  if ((uVar40 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                }
                pFVar41 = local_a00.AllocatorInstance.Data + lVar31 * 0x10;
                if ((int)uVar27 < local_a08) {
                  uVar47 = ~uVar27 >> 0x1f;
                }
                if ((uVar47 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  uVar16 = (*pcVar5)();
                  return (bool)uVar16;
                }
                pFVar37 = local_a10.Data + uVar38;
                if (((*(FScriptContainerElement **)&pFVar41->field_0x0 <= pFVar37) &&
                    (pFVar37 < *(FScriptContainerElement **)&pFVar41->field_0x0 +
                               (longlong)*(int *)(pFVar41 + 0xc) * 4)) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  uVar16 = (*pcVar5)();
                  return (bool)uVar16;
                }
                iVar18 = *(int *)(pFVar41 + 8);
                if (iVar18 == *(int *)(pFVar41 + 0xc)) {
                  iVar18 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar41,(int *)(pFVar41 + 0xc));
                }
                *(int *)(pFVar41 + 8) = iVar18 + 1;
                uVar28 = (ulonglong)(uVar27 + 1);
                *(undefined4 *)(*(longlong *)&pFVar41->field_0x0 + (longlong)iVar18 * 4) =
                     *(undefined4 *)pFVar37;
                uVar38 = uVar38 + 4;
              } while ((int)(uVar27 + 1) < local_a08);
            }
            uVar38 = 0;
            TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                      (&local_9b0,local_a00.ArrayNum,Default);
            iVar18 = param_2->ArrayNum;
            local_1e8._8_4_ = 0;
            local_1e8._0_8_ = 0;
            local_1e8._8_8_ = 0;
            local_1c8 = (uint *)0x0;
            uVar47 = 0;
            local_1c0 = 0;
            local_1bc = 0x80;
            local_1b8 = 0xffffffff;
            local_1b4 = 0;
            local_1a8 = (ForElementType<FSetElementId>)0x0;
            local_1a0 = 0;
            uVar28 = uVar38;
            if (0 < iVar18) {
              do {
                uVar35 = (uint)uVar38;
                uVar27 = uVar47;
                if ((int)uVar35 < iVar18) {
                  uVar27 = ~uVar35 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  uVar16 = (*pcVar5)();
                  return (bool)uVar16;
                }
                uVar27 = *(uint *)((param_2->AllocatorInstance).Data + uVar28);
                uVar40 = uVar47;
                if ((int)uVar27 < local_9d0.ArrayNum) {
                  uVar40 = ~uVar27 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  uVar16 = (*pcVar5)();
                  return (bool)uVar16;
                }
                uVar40 = 0;
                if (local_238.Elements._8_4_ != local_238.Elements._52_4_) {
                  FVar29 = (ForElementType<FSetElementId>)&local_238.Hash;
                  if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar29 = local_238.Hash.SecondaryData;
                  }
                  for (iVar18 = *(int *)((longlong)FVar29 +
                                        (ulonglong)
                                        (local_238.HashSize - 1U &
                                        *(uint *)(local_9d0.AllocatorInstance.Data +
                                                 (longlong)(int)uVar27 * 4)) * 4); iVar18 != -1;
                      iVar18 = *(int *)(local_238.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10)) {
                    if (*(uint *)(local_238.Elements._0_8_ + (longlong)iVar18 * 0x10) ==
                        *(uint *)(local_9d0.AllocatorInstance.Data + (longlong)(int)uVar27 * 4)) {
                      iVar17 = param_2->ArrayNum;
                      uVar27 = ~uVar35 >> 0x1f;
                      if (iVar18 == -1) goto LAB_143fcaab7;
                      uVar19 = uVar40;
                      if ((int)uVar35 < iVar17) {
                        uVar19 = uVar27;
                      }
                      if ((uVar19 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      uVar27 = *(uint *)((param_2->AllocatorInstance).Data + uVar28);
                      uVar19 = uVar40;
                      if ((int)uVar27 < local_9d0.ArrayNum) {
                        uVar19 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      puVar33 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        ::FindChecked((
                                                  TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                                  *)&local_238,
                                                  *(int *)(local_9d0.AllocatorInstance.Data +
                                                          (longlong)(int)uVar27 * 4));
                      uVar27 = *puVar33;
                      uVar19 = uVar40;
                      if ((int)uVar27 < local_9b0.ArrayNum) {
                        uVar19 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      pFVar41 = local_9b0.AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10;
                      if ((int)uVar35 < param_2->ArrayNum) {
                        uVar40 = ~uVar35 >> 0x1f;
                      }
                      if ((uVar40 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                    /* WARNING: Load size is inaccurate */
                      pFVar37 = (param_2->AllocatorInstance).Data + uVar28;
                      if (((*pFVar41 <= pFVar37) &&
                          (pFVar37 < *pFVar41 + (longlong)*(int *)(pFVar41 + 0xc) * 4)) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      iVar18 = *(int *)(pFVar41 + 8);
                      if (iVar18 == *(int *)(pFVar41 + 0xc)) {
                        iVar18 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)pFVar41,
                                            (int *)(pFVar41 + 0xc));
                      }
                      *(int *)(pFVar41 + 8) = iVar18 + 1;
                    /* WARNING: Load size is inaccurate */
                      *(undefined4 *)(*pFVar41 + (longlong)iVar18 * 4) = *(undefined4 *)pFVar37;
                      goto LAB_143fcab66;
                    }
                  }
                }
                iVar17 = param_2->ArrayNum;
                uVar27 = ~uVar35 >> 0x1f;
LAB_143fcaab7:
                uVar19 = uVar47;
                if ((int)uVar35 < iVar17) {
                  uVar19 = uVar27;
                }
                if ((uVar19 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  uVar16 = (*pcVar5)();
                  return (bool)uVar16;
                }
                uVar27 = *(uint *)((param_2->AllocatorInstance).Data + uVar28);
                if ((int)uVar27 < local_9d0.ArrayNum) {
                  uVar40 = ~uVar27 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  uVar16 = (*pcVar5)();
                  return (bool)uVar16;
                }
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1e8,
                           &local_844,
                           (bool *)(local_9d0.AllocatorInstance.Data + (longlong)(int)uVar27 * 4));
LAB_143fcab66:
                iVar18 = param_2->ArrayNum;
                uVar38 = (ulonglong)(uVar35 + 1);
                uVar28 = uVar28 + 4;
              } while ((int)(uVar35 + 1) < iVar18);
              uVar38 = (ulonglong)local_1c0;
            }
            puVar33 = (uint *)0x0;
            uVar45 = 0;
            uVar35 = 1;
            uVar27 = 0;
            uVar19 = 0;
            uVar40 = (uint)uVar38;
            TStack_7e8.CurrentBitIndex = uVar27;
            uVar47 = uVar19;
            if (uVar40 != 0) {
              puVar32 = (uint *)(local_1e8 + 0x10);
              if (local_1c8 != (uint *)0x0) {
                puVar32 = local_1c8;
              }
              uVar2 = *puVar32;
              puVar43 = puVar33;
              puVar44 = puVar33;
              uVar47 = uVar45;
              uVar27 = uVar45;
              while (uVar2 == 0) {
                iVar18 = (int)puVar43;
                uVar47 = (int)puVar44 + 0x20;
                puVar44 = (uint *)(ulonglong)uVar47;
                uVar27 = iVar18 + 1;
                puVar43 = (uint *)(ulonglong)uVar27;
                TStack_7e8.CurrentBitIndex = uVar40;
                if ((int)((uVar40 - 1) + ((int)(uVar40 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
                goto LAB_143fcac13;
                uVar2 = (puVar32 + 1)[iVar18];
              }
              uVar35 = -uVar2 & uVar2;
              uVar28 = (ulonglong)uVar35 * 2 + 1;
              lVar31 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              local_840 = (int)lVar31;
              TStack_7e8.CurrentBitIndex = local_840 + -1 + uVar47;
              if ((int)uVar40 < TStack_7e8.CurrentBitIndex) {
                TStack_7e8.CurrentBitIndex = uVar40;
              }
            }
LAB_143fcac13:
            local_8d0 = local_1e8._8_4_ - local_1b4;
            local_8f8 = (longlong *)local_1e8;
            pTStack_8e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
            uStack_8e0 = CONCAT44(TStack_7e8.CurrentBitIndex,0xffffffff);
            uStack_8f0 = CONCAT44(uVar35,uVar27);
            uVar27 = uVar40 & 0xffffffe0;
            uStack_8d8 = CONCAT44(local_62c,uVar47);
            TStack_7e8._padding_ = uStack_8f0;
            iVar18 = (int)uVar40 >> 5;
            uStack_7c8 = CONCAT44(uStack_8cc,local_8d0);
            TStack_7e8.UnvisitedBitMask = 0xffffffff;
            TStack_7e8._24_8_ = uStack_8d8;
            uVar47 = uVar40;
            local_7f0 = (undefined1 *)local_8f8;
            TStack_7e8.Array = pTStack_8e8;
            if (((int)uVar40 < 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), uVar47 = local_1c0, bVar15)) {
              pcVar5 = (code *)swi(3);
              uVar16 = (*pcVar5)();
              return (bool)uVar16;
            }
            if (uVar40 != uVar47) {
              puVar32 = (uint *)(local_1e8 + 0x10);
              if (local_1c8 != (uint *)0x0) {
                puVar32 = local_1c8;
              }
              uVar35 = -1 << ((byte)uVar38 & 0x1f) & puVar32[iVar18];
              while (uVar35 == 0) {
                lVar31 = (longlong)iVar18;
                uVar27 = uVar27 + 0x20;
                iVar18 = iVar18 + 1;
                if ((int)((uVar47 - 1) + ((int)(uVar47 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) {
                  uVar38 = (ulonglong)uVar47;
                  goto LAB_143fcad60;
                }
                uVar35 = (puVar32 + 1)[lVar31];
              }
              uVar28 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
              lVar31 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                }
              }
              local_83c = (int)lVar31;
              uVar27 = (uVar27 - 1) + local_83c;
              if ((int)uVar47 < (int)uVar27) {
                uVar27 = uVar47;
              }
              uVar38 = (ulonglong)uVar27;
            }
LAB_143fcad60:
            while( true ) {
              puVar14 = local_7f0;
              if (*(int *)(local_7f0 + 8) - *(int *)(local_7f0 + 0x34) != (int)uStack_7c8) {
                local_a23 = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_a23);
              }
              if (((TStack_7e8.CurrentBitIndex == (int)uVar38) &&
                  (TStack_7e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10)))
                 && (puVar14 == local_1e8)) break;
              if (2 < (byte)LogDataflowMuscleActivationFacade._0_1_) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogDataflowMuscleActivationFacade);
              }
              TStack_7e8.UnvisitedBitMask =
                   TStack_7e8.UnvisitedBitMask & ~TStack_7e8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_7e8);
            }
            TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
                      (&local_9f0,local_a00.ArrayNum,Default);
            iVar18 = *(int *)&pTVar22->field_0x18;
            local_a1c = 0;
            puVar32 = puVar33;
            if (0 < iVar18) {
LAB_143fcb010:
              uVar27 = (uint)puVar32;
              uVar47 = uVar19;
              if ((int)uVar27 < iVar18) {
                uVar47 = ~uVar27 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                uVar16 = (*pcVar5)();
                return (bool)uVar16;
              }
              uVar47 = *(uint *)(*(longlong *)&pTVar22->field_0x10 + (longlong)(int)uVar27 * 0x10);
              uVar27 = uVar19;
              if ((int)uVar47 < local_9d0.ArrayNum) {
                uVar27 = ~uVar47 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                uVar16 = (*pcVar5)();
                return (bool)uVar16;
              }
              if (local_238.Elements._8_4_ != local_238.Elements._52_4_) {
                FVar29 = (ForElementType<FSetElementId>)&local_238.Hash;
                if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar29 = local_238.Hash.SecondaryData;
                }
                for (iVar18 = *(int *)((longlong)FVar29 +
                                      (ulonglong)
                                      (local_238.HashSize - 1U &
                                      *(uint *)(local_9d0.AllocatorInstance.Data +
                                               (longlong)(int)uVar47 * 4)) * 4); iVar18 != -1;
                    iVar18 = *(int *)(local_238.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10)) {
                  if (*(uint *)(local_238.Elements._0_8_ + (longlong)iVar18 * 0x10) ==
                      *(uint *)(local_9d0.AllocatorInstance.Data + (longlong)(int)uVar47 * 4)) {
                    lVar31 = (longlong)(int)local_a1c;
                    uVar47 = uVar19;
                    if ((int)local_a1c < *(int *)&pTVar22->field_0x18) {
                      uVar47 = ~local_a1c >> 0x1f;
                    }
                    if ((uVar47 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    uVar47 = *(uint *)(*(longlong *)&pTVar22->field_0x10 + lVar31 * 0x10);
                    uVar27 = uVar45;
                    if ((int)uVar47 < local_9d0.ArrayNum) {
                      uVar27 = ~uVar47 >> 0x1f;
                    }
                    if ((uVar27 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    puVar32 = puVar33;
                    if (local_238.Elements._8_4_ == local_238.Elements._52_4_) goto LAB_143fcb222;
                    FVar29 = (ForElementType<FSetElementId>)&local_238.Hash;
                    if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar29 = local_238.Hash.SecondaryData;
                    }
                    uVar27 = *(uint *)((longlong)FVar29 +
                                      (ulonglong)
                                      (local_238.HashSize - 1U &
                                      *(uint *)(local_9d0.AllocatorInstance.Data +
                                               (longlong)(int)uVar47 * 4)) * 4);
                    goto joined_r0x000143fcb1fd;
                  }
                }
              }
              goto LAB_143fcb332;
            }
LAB_143fcb348:
            fVar7 = __real_3f800000;
            fVar6 = __real_322bcc77;
            local_a28 = 0;
            if (0 < local_a00.ArrayNum) {
              do {
                if ((local_a00.ArrayNum < 1) ||
                   (iVar18 = local_a00.ArrayNum, local_9b0.ArrayNum < 1)) {
                  local_838 = &local_a28;
                  bVar15 = `GeometryCollection::Facades::FMuscleActivationFacade::
                           SetUpMuscleActivation'::__l222::<lambda_1>::operator()(&local_838);
                  if (bVar15) {
                    iVar18 = local_a00.ArrayNum;
                    goto LAB_143fcb39f;
                  }
                }
                else {
LAB_143fcb39f:
                  local_980.Data = (FScriptContainerElement *)0x0;
                  local_978._0_4_ = 0;
                  local_978._4_4_ = 0;
                  local_960.Data = (FScriptContainerElement *)0x0;
                  local_958[0] = 0;
                  local_958[1] = 0;
                  local_950.Data = (FScriptContainerElement *)0x0;
                  local_948 = 0;
                  local_940 = 0.5;
                  local_93c = 0.75;
                  local_938 = 1.0;
                  local_930.Data = (FScriptContainerElement *)0x0;
                  local_928._0_4_ = 0;
                  local_928._4_4_ = 0;
                  local_920.Data = (FScriptContainerElement *)0x0;
                  local_918._0_4_ = 0;
                  local_918._4_4_ = 0;
                  puVar33 = (uint *)0x0;
                  if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
                    FVar29 = (ForElementType<FSetElementId>)&local_148.Hash;
                    if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar29 = local_148.Hash.SecondaryData;
                    }
                    uVar47 = *(uint *)((longlong)FVar29 +
                                      (ulonglong)(local_148.HashSize - 1U & local_a28) * 4);
                    while (puVar33 = (uint *)0x0, uVar47 != 0xffffffff) {
                      puVar33 = (uint *)((longlong)(int)uVar47 * 0x10 + local_148.Elements._0_8_);
                      if (*puVar33 == local_a28) {
                        if (puVar33 != (uint *)0x0) goto LAB_143fcb48b;
                        break;
                      }
                      uVar47 = puVar33[2];
                    }
                  }
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x288,L"");
                  if (bVar15) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  iVar18 = local_a00.ArrayNum;
LAB_143fcb48b:
                  local_988._0_4_ = puVar33[1];
                  lVar31 = (longlong)(int)local_a28;
                  local_968 = 0.0;
                  uVar47 = 0;
                  if ((int)local_a28 < iVar18) {
                    uVar47 = ~local_a28 >> 0x1f;
                  }
                  if ((uVar47 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  local_908 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar31 * 0x10);
                  local_9a0 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                              local_a00.AllocatorInstance.Data;
                  local_9d8 = *(uint *)((longlong)&local_908->ArrayNum +
                                       local_a00.AllocatorInstance.Data);
                  uVar28 = (ulonglong)(int)local_9d8;
                  pTVar39 = *(TManagedArray<FString> **)
                             &local_a00.AllocatorInstance.Data
                              [(longlong)&local_908->AllocatorInstance].field_0x0;
                  local_828 = (TManagedArray<FString> *)((longlong)&pTVar39->field_0x0 + uVar28 * 4)
                  ;
                  while( true ) {
                    pTVar13 = local_828;
                    uVar38 = 0;
                    local_998 = pTVar39;
                    if (*(int *)((longlong)&local_908->ArrayNum + (longlong)local_9a0) !=
                        (int)uVar28) {
                      local_a22 = 0;
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (&local_a22);
                    }
                    lVar31 = (longlong)(int)local_a28;
                    if (pTVar39 == pTVar13) break;
                    uVar47 = *(uint *)pTVar39;
                    lVar48 = (longlong)(int)uVar47;
                    if ((int)local_a28 < local_9b0.ArrayNum) {
                      uVar38 = (ulonglong)(~local_a28 >> 0x1f);
                    }
                    if (((int)uVar38 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    local_8b8 = (TManagedArray<int> *)local_9b0.AllocatorInstance.Data;
                    local_9c0 = *(uint *)(local_9b0.AllocatorInstance.Data + lVar31 * 0x10 + 8);
                    uVar28 = (ulonglong)(int)local_9c0;
                    pTVar30 = *(TArray<int,TSizedDefaultAllocator<32>_> **)
                               (local_9b0.AllocatorInstance.Data + lVar31 * 0x10);
                    local_900 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                                ((longlong)&(pTVar30->AllocatorInstance).Data + uVar28 * 4);
                    while( true ) {
                      pTVar46 = local_900;
                      if (*(int *)(&local_8b8->field_0x8 + lVar31 * 0x10) != (int)uVar28) {
                        local_a21 = 0;
                        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(&local_a21);
                      }
                      if (pTVar30 == pTVar46) break;
                      uVar27 = *(uint *)&(pTVar30->AllocatorInstance).Data;
                      lVar34 = (longlong)(int)uVar27;
                      uVar35 = 0;
                      if ((int)uVar47 < local_9b8->ArrayNum) {
                        uVar35 = ~uVar47 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      pFVar41 = (local_9b8->AllocatorInstance).Data;
                      uVar35 = 0;
                      if ((int)uVar27 < local_9b8->ArrayNum) {
                        uVar35 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      pFVar37 = (local_9b8->AllocatorInstance).Data;
                      fVar50 = SQRT((*(float *)(pFVar41 + lVar48 * 0xc + 4) -
                                    *(float *)(pFVar37 + lVar34 * 0xc + 4)) *
                                    (*(float *)(pFVar41 + lVar48 * 0xc + 4) -
                                    *(float *)(pFVar37 + lVar34 * 0xc + 4)) +
                                    (*(float *)(pFVar41 + lVar48 * 0xc) -
                                    *(float *)(pFVar37 + lVar34 * 0xc)) *
                                    (*(float *)(pFVar41 + lVar48 * 0xc) -
                                    *(float *)(pFVar37 + lVar34 * 0xc)) +
                                    (*(float *)(pFVar41 + lVar48 * 0xc + 8) -
                                    *(float *)(pFVar37 + lVar34 * 0xc + 8)) *
                                    (*(float *)(pFVar41 + lVar48 * 0xc + 8) -
                                    *(float *)(pFVar37 + lVar34 * 0xc + 8)));
                      if (local_968 < fVar50) {
                        local_970._s_0.Y = uVar27;
                        local_970._s_0.X = uVar47;
                        local_968 = fVar50;
                        local_8a0 = uVar47;
                        uStack_89c = uVar27;
                      }
                      pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                                ((longlong)&(pTVar30->AllocatorInstance).Data + 4);
                      uVar28 = (ulonglong)local_9c0;
                    }
                    pTVar39 = (TManagedArray<FString> *)&local_998->field_0x4;
                    uVar28 = (ulonglong)local_9d8;
                  }
                  uVar47 = 0;
                  if ((int)local_a28 < local_9f0.ArrayNum) {
                    uVar47 = ~local_a28 >> 0x1f;
                  }
                  if ((uVar47 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  pFVar41 = local_9f0.AllocatorInstance.Data + lVar31 * 0x10;
                  if ((FScriptContainerElement *)(local_988 + 8) != pFVar41) {
                    iVar18 = *(int *)(pFVar41 + 8);
                    _Src = *(void **)&pFVar41->field_0x0;
                    local_978._0_4_ = iVar18;
                    if ((iVar18 == 0) && (local_978._4_4_ == 0)) {
                      local_978._0_4_ = 0;
                      local_978._4_4_ = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,iVar18,local_978._4_4_,(ForAnyElementType *)(local_988 + 8),
                                 iVar18,(int *)(local_988 + 0x14));
                      if (iVar18 != 0) {
                        memcpy(local_980.Data,_Src,(longlong)iVar18 << 2);
                      }
                    }
                  }
                  lVar31 = (longlong)(int)local_a28;
                  uVar27 = 0;
                  uVar47 = uVar27;
                  if ((int)local_a28 < local_9f0.ArrayNum) {
                    uVar47 = ~local_a28 >> 0x1f;
                  }
                  if ((uVar47 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  uVar47 = *(uint *)(local_9f0.AllocatorInstance.Data + lVar31 * 0x10 + 8);
                  if (local_958[0] < (int)uVar47) {
                    iVar17 = uVar47 - local_958[0];
                    iVar18 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x80,0x10,iVar17,(ForAnyElementType *)(local_988 + 0x28),
                                        (int *)(local_988 + 0x30),(int *)(local_988 + 0x34));
                    DefaultConstructItems<Chaos::PMatrix<double,3,3>,int>
                              (local_960.Data + (longlong)iVar18 * 0x80,iVar17);
                  }
                  else {
                    if ((int)uVar47 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar47);
                    }
                    if ((int)uVar47 < local_958[0]) {
                      uVar35 = local_958[0] - uVar47;
                      if (((int)(uVar47 | uVar35) < 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x458,
                                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      if (uVar35 != 0) {
                        iVar18 = (local_958[0] - uVar47) - uVar35;
                        if (iVar18 != 0) {
                          memmove(local_960.Data + (longlong)(int)uVar47 * 0x80,
                                  local_960.Data + (longlong)(int)uVar47 * 0x80 +
                                  (longlong)(int)uVar35 * 0x80,(longlong)iVar18 << 7);
                        }
                        iVar18 = local_958[0] - uVar35;
                        local_958[0] = iVar18;
                        UE::Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x80,0x10,(ForAnyElementType *)(local_988 + 0x28),iVar18,
                                   (int *)(local_988 + 0x34));
                      }
                    }
                  }
                  lVar31 = (longlong)(int)local_a28;
                  uVar47 = uVar27;
                  if ((int)local_a28 < local_9f0.ArrayNum) {
                    uVar47 = ~local_a28 >> 0x1f;
                  }
                  if ((uVar47 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  uVar47 = *(uint *)(local_9f0.AllocatorInstance.Data + lVar31 * 0x10 + 8);
                  uVar28 = uVar38;
                  uVar42 = uVar38;
                  uVar49 = uVar38;
                  if ((int)local_948 < (int)uVar47) {
                    iVar17 = uVar47 - (int)local_948;
                    iVar18 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (4,4,iVar17,(ForAnyElementType *)(local_988 + 0x38),
                                        (int *)(local_988 + 0x40),(int *)(local_988 + 0x44));
                    memset(local_950.Data + (longlong)iVar18 * 4,0,(longlong)iVar17 << 2);
                  }
                  else {
                    if ((int)uVar47 < 0) {
                    /* WARNING: Subroutine does not return */
                      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar47);
                    }
                    if ((int)uVar47 < (int)local_948) {
                      uVar35 = (int)local_948 - uVar47;
                      if ((int)(uVar47 | uVar35) < 0) {
                        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x458,
                                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                           );
                        if (bVar15) {
                          pcVar5 = (code *)swi(3);
                          uVar16 = (*pcVar5)();
                          return (bool)uVar16;
                        }
                      }
                      if (uVar35 != 0) {
                        iVar17 = ((int)local_948 - uVar47) - uVar35;
                        iVar18 = (int)local_948;
                        if (iVar17 != 0) {
                          memmove(local_950.Data + (longlong)(int)uVar47 * 4,
                                  local_950.Data + (longlong)(int)uVar47 * 4 +
                                  (longlong)(int)uVar35 * 4,(longlong)iVar17 << 2);
                          iVar18 = (int)local_948;
                        }
                        local_948 = CONCAT44(local_948._4_4_,iVar18 - uVar35);
                        UE::Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,(ForAnyElementType *)(local_988 + 0x38),iVar18 - uVar35,
                                   (int *)(local_988 + 0x44));
                      }
                    }
                  }
                  while( true ) {
                    lVar31 = (longlong)(int)local_a28;
                    uVar47 = uVar27;
                    if ((int)local_a28 < local_9f0.ArrayNum) {
                      uVar47 = ~local_a28 >> 0x1f;
                    }
                    if ((uVar47 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    lVar48 = (longlong)(int)local_a28;
                    uVar35 = (uint)uVar28;
                    uVar47 = 0;
                    if (*(int *)(local_9f0.AllocatorInstance.Data + lVar31 * 0x10 + 8) <=
                        (int)uVar35) break;
                    uVar40 = uVar27;
                    if ((int)local_a28 < local_9f0.ArrayNum) {
                      uVar40 = ~local_a28 >> 0x1f;
                    }
                    if ((uVar40 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    FVar10.Data = local_9f0.AllocatorInstance.Data;
                    uVar40 = uVar47;
                    if ((int)uVar35 < *(int *)(local_9f0.AllocatorInstance.Data + lVar48 * 0x10 + 8)
                       ) {
                      uVar40 = ~uVar35 >> 0x1f;
                    }
                    if ((uVar40 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    pTVar21 = local_830;
                    uVar40 = *(uint *)(uVar49 + *(longlong *)&FVar10.Data[lVar48 * 0x10].field_0x0);
                    uVar19 = uVar47;
                    if ((int)uVar40 < *(int *)&local_830->field_0x18) {
                      uVar19 = ~uVar40 >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    uVar12 = local_890;
                    uVar9 = _UNK_15061cbc8;
                    uVar8 = ___xmm_3ff00000000000000000000000000000;
                    local_708 = *(undefined8 *)
                                 (*(longlong *)&pTVar21->field_0x10 + (longlong)(int)uVar40 * 0xc);
                    fVar50 = (float)local_708;
                    local_8b0._4_4_ = (float)((ulonglong)local_708 >> 0x20);
                    if (local_8b0._4_4_ <= fVar50) {
                      fVar51 = local_8b0._4_4_ + fVar7;
                      fVar53 = fVar50;
                    }
                    else {
                      fVar53 = fVar50 + fVar7;
                      fVar51 = local_8b0._4_4_;
                    }
                    fVar1 = *(float *)(*(longlong *)&pTVar21->field_0x10 + 8 +
                                      (longlong)(int)uVar40 * 0xc);
                    fVar59 = (float)((ulonglong)
                                     UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
                    fVar55 = local_8b0._4_4_ * fVar1 - fVar51 * fVar1;
                    local_878 = fVar51 * fVar50 - fVar53 * local_8b0._4_4_;
                    fVar56 = fVar53 * fVar1 - fVar50 * fVar1;
                    fVar51 = fVar56 * fVar56 + fVar55 * fVar55 + local_878 * local_878;
                    local_890._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                    fVar53 = (float)local_890;
                    if (fVar51 == fVar7) {
                      fVar51 = fVar56;
                      fVar58 = fVar55;
                      uVar54 = local_878;
                      local_890 = CONCAT44(fVar56,fVar55);
                    }
                    else if (fVar6 <= fVar51) {
                      fVar52 = fVar7 / SQRT(fVar51);
                      fVar51 = fVar52 * fVar56;
                      fVar58 = fVar52 * fVar55;
                      uVar54 = fVar52 * local_878;
                      local_890 = uVar12;
                    }
                    else {
                      local_890 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                      fVar51 = fVar59;
                      fVar58 = fVar53;
                      uVar54 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    }
                    _local_880 = CONCAT44(fVar56,fVar55);
                    fVar55 = fVar51 * fVar1 - local_8b0._4_4_ * (float)uVar54;
                    fVar56 = fVar50 * (float)uVar54 - fVar58 * fVar1;
                    uVar57 = local_8b0._4_4_ * fVar58 - fVar50 * fVar51;
                    fVar52 = fVar56 * fVar56 + fVar55 * fVar55 + (float)uVar57 * (float)uVar57;
                    if (fVar52 != fVar7) {
                      if (fVar6 <= fVar52) {
                        fVar53 = fVar7 / SQRT(fVar52);
                        fVar55 = fVar53 * fVar55;
                        fVar56 = fVar53 * fVar56;
                        uVar57 = fVar53 * (float)uVar57;
                      }
                      else {
                        local_6f8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                        fVar55 = fVar53;
                        fVar56 = fVar59;
                        uVar57 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                      }
                    }
                    local_788 = (double)fVar50;
                    local_768 = (double)local_8b0._4_4_;
                    if ((int)uVar35 < local_958[0]) {
                      uVar47 = ~uVar35 >> 0x1f;
                    }
                    dStack_770 = 0.0;
                    dStack_750 = 0.0;
                    dStack_730 = 0.0;
                    dStack_780 = (double)fVar55;
                    local_748 = (double)fVar1;
                    dStack_760 = (double)fVar56;
                    dStack_740 = (double)(float)uVar57;
                    local_728 = 0;
                    uStack_720 = 0;
                    local_778 = (double)fVar58;
                    local_758 = (double)fVar51;
                    local_738 = (double)(float)uVar54;
                    local_718 = ___xmm_3ff00000000000000000000000000000;
                    uStack_710 = _UNK_15061cbc8;
                    local_8b0 = local_708;
                    if ((uVar47 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    *(double *)(local_960.Data + uVar42) = local_788;
                    *(double *)(local_960.Data + uVar42 + 8) = dStack_780;
                    *(double *)(local_960.Data + uVar42 + 0x10) = local_778;
                    *(double *)(local_960.Data + uVar42 + 0x10 + 8) = dStack_770;
                    *(double *)(local_960.Data + uVar42 + 0x20) = local_768;
                    *(double *)(local_960.Data + uVar42 + 0x20 + 8) = dStack_760;
                    *(double *)(local_960.Data + uVar42 + 0x30) = local_758;
                    *(double *)(local_960.Data + uVar42 + 0x30 + 8) = dStack_750;
                    *(double *)(local_960.Data + uVar42 + 0x40) = local_748;
                    *(double *)(local_960.Data + uVar42 + 0x40 + 8) = dStack_740;
                    *(double *)(local_960.Data + uVar42 + 0x50) = local_738;
                    *(double *)(local_960.Data + uVar42 + 0x50 + 8) = dStack_730;
                    *(undefined8 *)(local_960.Data + uVar42 + 0x60) = 0;
                    *(undefined8 *)(local_960.Data + uVar42 + 0x60 + 8) = 0;
                    *(undefined8 *)(local_960.Data + uVar42 + 0x70) = uVar8;
                    *(undefined8 *)(local_960.Data + uVar42 + 0x70 + 8) = uVar9;
                    uVar28 = (ulonglong)(uVar35 + 1);
                    uVar42 = uVar42 + 0x80;
                    uVar49 = uVar49 + 4;
                  }
                  if ((int)local_a28 < local_9f0.ArrayNum) {
                    uVar47 = ~local_a28 >> 0x1f;
                  }
                  if ((uVar47 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  uVar47 = *(uint *)(local_9f0.AllocatorInstance.Data + lVar48 * 0x10 + 8);
                  uVar28 = (ulonglong)uVar47;
                  if ((int)uVar47 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum(uVar28);
                  }
                  uVar42 = local_948 >> 0x20;
                  local_948 = local_948 & 0xffffffff00000000;
                  if ((uint)uVar42 != uVar47) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,uVar47,(ForAnyElementType *)(local_988 + 0x38),0,
                               (int *)(local_988 + 0x44));
                    uVar38 = local_948 & 0xffffffff;
                  }
                  if (0 < (int)uVar47) {
                    while( true ) {
                      iVar18 = (int)uVar38;
                      if ((local_950.Data <= (FScriptContainerElement *)local_9e0) &&
                         ((FScriptContainerElement *)local_9e0 <
                          local_950.Data + (longlong)local_948._4_4_ * 4)) {
                        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           );
                        if (bVar15) {
                          pcVar5 = (code *)swi(3);
                          uVar16 = (*pcVar5)();
                          return (bool)uVar16;
                        }
                        iVar18 = (int)local_948;
                      }
                      if (iVar18 == local_948._4_4_) {
                        iVar18 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)(local_988 + 0x38),
                                            (int *)(local_988 + 0x44));
                      }
                      local_948 = CONCAT44(local_948._4_4_,iVar18 + 1U);
                      *(float *)(local_950.Data + (longlong)iVar18 * 4) = local_9e0[0];
                      uVar28 = uVar28 - 1;
                      if (uVar28 == 0) break;
                      uVar38 = (ulonglong)(iVar18 + 1U);
                    }
                  }
                  pFVar11 = local_898;
                  if ((local_898->Collection == (FManagedArrayCollection *)0x0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!IsConst()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                                          ,0x66,L""), bVar15)) {
                    pcVar5 = (code *)swi(3);
                    uVar16 = (*pcVar5)();
                    return (bool)uVar16;
                  }
                  if (((((((pFVar11->GeometryGroupIndexAttribute).ConstAttributeArray !=
                           (TManagedArray<int> *)0x0) &&
                         ((pFVar11->MuscleActivationElementAttribute).ConstAttributeArray !=
                          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
                        ((pFVar11->OriginInsertionPairAttribute).ConstAttributeArray !=
                         (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
                       (((pFVar11->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
                         (TManagedArray<float> *)0x0 &&
                        ((pFVar11->FiberDirectionMatrixAttribute).ConstAttributeArray !=
                         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>
                          *)0x0)))) &&
                      (((pFVar11->ContractionVolumeScaleAttribute).ConstAttributeArray !=
                        (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
                       (((pFVar11->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
                         (TManagedArray<float> *)0x0 &&
                        ((pFVar11->MuscleLengthRatioThresholdForMaxActivationAttribute).
                         ConstAttributeArray != (TManagedArray<float> *)0x0)))))) &&
                     ((pFVar11->InflationVolumeScaleAttribute).ConstAttributeArray !=
                      (TManagedArray<float> *)0x0)) {
                    if (((pFVar11->MuscleActivationElementAttribute).Collection ==
                         (FManagedArrayCollection *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!IsConst()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                            ,0x41,L""), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    iVar18 = FManagedArrayCollection::AddElements
                                       ((pFVar11->MuscleActivationElementAttribute).Collection,1,
                                        (pFVar11->MuscleActivationElementAttribute).Group);
                    UpdateMuscleActivationData(pFVar11,iVar18,(FMuscleActivationData *)local_988);
                  }
                  if (local_920.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_920.Data);
                  }
                  DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                            ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                             local_930.Data,(int)local_928);
                  if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_930.Data
                      != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
                    FMemory::Free(local_930.Data);
                  }
                  if (local_950.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_950.Data);
                  }
                  if (local_960.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_960.Data);
                  }
                  if (local_980.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_980.Data);
                  }
                }
                local_a28 = local_a28 + 1;
              } while ((int)local_a28 < local_a00.ArrayNum);
            }
            bVar15 = true;
            local_1a0 = 0;
            if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_1a8);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_1e8);
            local_148.HashSize = 0;
            if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_148.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_148.Elements);
            local_238.HashSize = 0;
            if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_238.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_238.Elements);
            if (local_9d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_9d0.AllocatorInstance.Data);
            }
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)local_9b0.AllocatorInstance.Data,
                       local_9b0.ArrayNum);
            if ((TManagedArray<int> *)local_9b0.AllocatorInstance.Data != (TManagedArray<int> *)0x0)
            {
              FMemory::Free(local_9b0.AllocatorInstance.Data);
            }
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)local_a00.AllocatorInstance.Data,
                       local_a00.ArrayNum);
            if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_a00.AllocatorInstance.Data !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_a00.AllocatorInstance.Data);
            }
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)local_9f0.AllocatorInstance.Data,
                       local_9f0.ArrayNum);
            if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_9f0.AllocatorInstance.Data !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_9f0.AllocatorInstance.Data);
            }
            if (local_a10.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a10.Data);
            }
          }
          else {
            if (1 < (byte)LogDataflowMuscleActivationFacade._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        ((FStaticBasicLogRecord *)&PTR_u_Muscle_activati_150b316a8,
                         (FLogCategoryBase *)&LogDataflowMuscleActivationFacade);
            }
            pTVar24 = local_8b8;
            pTVar39 = local_998;
            if ((local_8b8 != (TManagedArray<int> *)0x0) &&
               (local_998 != (TManagedArray<FString> *)0x0)) {
              local_870.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
              local_870.UnvisitedBitMask = 0xffffffff;
              local_870._padding_._0_4_ = 0;
              local_870._padding_._4_4_ = 1;
              local_870.CurrentBitIndex = 0;
              local_870.BaseBitIndex = 0;
              if (local_170 != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_870);
              }
              uStack_8f0 = CONCAT44(local_870._padding_._4_4_,(undefined4)local_870._padding_);
              local_8f8 = (longlong *)local_198;
              uStack_8e0 = CONCAT44(local_870.CurrentBitIndex,local_870.UnvisitedBitMask);
              uStack_8d8 = CONCAT44(local_870._28_4_,local_870.BaseBitIndex);
              local_8d0 = local_198._8_4_ - local_164;
              pTStack_8e8 = local_870.Array;
              uStack_7f8._4_4_ = uStack_8cc;
              uStack_7f8._0_4_ = local_8d0;
              local_810 = local_870.Array;
              local_820._0_8_ = local_8f8;
              unique0x1000374f = uStack_8f0;
              uStack_808 = uStack_8e0;
              local_800 = uStack_8d8;
              pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                        TConstSetBitIterator<FDefaultBitArrayAllocator>
                                  (&local_628,
                                   (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),
                                   local_170);
              local_8f8 = (longlong *)local_198;
              uStack_8f0 = pTVar26->_padding_;
              pTStack_8e8 = pTVar26->Array;
              uStack_8e0._0_4_ = pTVar26->UnvisitedBitMask;
              uStack_8e0._4_4_ = pTVar26->CurrentBitIndex;
              uStack_8d8 = *(longlong *)&pTVar26->BaseBitIndex;
              local_8d0 = local_198._8_4_ - local_164;
              local_678._44_4_ = uStack_8cc;
              local_678.InitialNum = local_8d0;
              local_678._padding_ = (longlong)local_8f8;
              local_678._padding_ = uStack_8f0;
              local_678._padding_ = (longlong)pTStack_8e8;
              local_678._padding_ = uStack_8e0;
              local_678._padding_ = uStack_8d8;
              bVar15 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=((TRangedForIterator *)local_820,&local_678);
              if (bVar15) {
                do {
                  uVar47 = *(uint *)(*(longlong *)local_820._0_8_ + (longlong)uStack_808._4_4_ * 0xc
                                    );
                  if (((int)uVar47 < 0) || (*(int *)&pTVar24->field_0x18 <= (int)uVar47)) {
LAB_143fca1fc:
                    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<1867048598835822890>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                                        ,0x12a,
                                        "TransformIndex->IsValidIndex(GeomIdx) && BoneName->IsValidIndex((*TransformIndex)[GeomIdx])"
                                       );
                    if (bVar15) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                  }
                  else {
                    uVar27 = 0;
                    if ((int)uVar47 < *(int *)&pTVar24->field_0x18) {
                      uVar27 = ~uVar47 >> 0x1f;
                    }
                    if ((uVar27 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar5 = (code *)swi(3);
                      uVar16 = (*pcVar5)();
                      return (bool)uVar16;
                    }
                    iVar18 = *(int *)(*(longlong *)&pTVar24->field_0x10 + (longlong)(int)uVar47 * 4)
                    ;
                    if ((iVar18 < 0) || (*(int *)&pTVar39->field_0x18 <= iVar18))
                    goto LAB_143fca1fc;
                    if (1 < (byte)LogDataflowMuscleActivationFacade._0_1_) {
                      uVar35 = 0;
                      uVar27 = uVar35;
                      if ((int)uVar47 < *(int *)&pTVar24->field_0x18) {
                        uVar27 = ~uVar47 >> 0x1f;
                      }
                      if ((uVar27 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      uVar27 = *(uint *)(*(longlong *)&pTVar24->field_0x10 +
                                        (longlong)(int)uVar47 * 4);
                      uVar40 = uVar35;
                      if ((int)uVar27 < *(int *)&pTVar39->field_0x18) {
                        uVar40 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar40 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      if ((int)uVar47 < *(int *)&pTVar24->field_0x18) {
                        uVar35 = ~uVar47 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar5 = (code *)swi(3);
                        uVar16 = (*pcVar5)();
                        return (bool)uVar16;
                      }
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,
                                 (FLogCategoryBase *)&LogDataflowMuscleActivationFacade);
                    }
                  }
                  uStack_808 = CONCAT44(uStack_808._4_4_,(uint)uStack_808 & ~uStack_814);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_820 + 8));
                  bVar15 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           ::TRangedForIterator::operator!=
                                     ((TRangedForIterator *)local_820,&local_678);
                } while (bVar15);
              }
            }
            bVar15 = false;
          }
          local_150 = 0;
          if (local_158 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_158);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_198);
          return bVar15;
        }
        if (1 < (byte)LogDataflowMuscleActivationFacade._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogDataflowMuscleActivationFacade);
        }
      }
    }
  }
  return false;
LAB_143fc9cf1:
  do {
    uVar27 = 0;
    if ((int)uVar47 < *(int *)&pTVar24->field_0x18) {
      uVar27 = ~uVar47 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      uVar16 = (*pcVar5)();
      return (bool)uVar16;
    }
    if (*(int *)(*(longlong *)&pTVar24->field_0x10 + (longlong)(int)uVar47 * 4) <= iVar18) {
      uVar27 = 0;
      if ((int)uVar47 < *(int *)&pTVar25->field_0x18) {
        uVar27 = ~uVar47 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      lVar31 = *(longlong *)&pTVar25->field_0x10;
      uVar27 = 0;
      if ((int)uVar47 < *(int *)&pTVar24->field_0x18) {
        uVar27 = ~uVar47 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar5 = (code *)swi(3);
        uVar16 = (*pcVar5)();
        return (bool)uVar16;
      }
      if (iVar18 < *(int *)(*(longlong *)&pTVar24->field_0x10 + (longlong)(int)uVar47 * 4) +
                   *(int *)(lVar31 + (longlong)(int)uVar47 * 4)) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198,&local_850,
                   (bool *)local_a18);
        break;
      }
    }
    uVar47 = uVar47 + 1;
    local_a18[0] = uVar47;
    iVar17 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24);
  } while ((int)uVar47 < iVar17);
  pFVar36 = (FValueType *)(ulonglong)local_9d8;
  pTVar30 = local_9a0;
  param_2 = local_908;
LAB_143fc9e47:
  pTVar46 = (TArray<int,TSizedDefaultAllocator<32>_> *)
            ((longlong)&(local_900->AllocatorInstance).Data + 4);
  uVar28 = (ulonglong)local_9c0;
  goto LAB_143fc9c66;
joined_r0x000143fcb1fd:
  puVar32 = puVar33;
  if (uVar27 == 0xffffffff) goto LAB_143fcb222;
  puVar32 = (uint *)((longlong)(int)uVar27 * 0x10 + local_238.Elements._0_8_);
  if (*puVar32 == *(uint *)(local_9d0.AllocatorInstance.Data + (longlong)(int)uVar47 * 4)) {
    if (puVar32 != (uint *)0x0) goto LAB_143fcb248;
    goto LAB_143fcb222;
  }
  uVar27 = puVar32[2];
  goto joined_r0x000143fcb1fd;
LAB_143fcb222:
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar15) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
LAB_143fcb248:
  uVar47 = puVar32[1];
  uVar27 = uVar45;
  if ((int)uVar47 < local_9f0.ArrayNum) {
    uVar27 = ~uVar47 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  pFVar41 = local_9f0.AllocatorInstance.Data + (longlong)(int)uVar47 * 0x10;
  if (((*(FScriptContainerElement **)&pFVar41->field_0x0 <= (FScriptContainerElement *)&local_a1c)
      && ((FScriptContainerElement *)&local_a1c <
          *(FScriptContainerElement **)&pFVar41->field_0x0 + (longlong)*(int *)(pFVar41 + 0xc) * 4))
     && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar16 = (*pcVar5)();
    return (bool)uVar16;
  }
  iVar18 = *(int *)(pFVar41 + 8);
  if (iVar18 == *(int *)(pFVar41 + 0xc)) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)pFVar41,(int *)(pFVar41 + 0xc));
  }
  *(int *)(pFVar41 + 8) = iVar18 + 1;
  *(uint *)(*(FScriptContainerElement **)&pFVar41->field_0x0 + (longlong)iVar18 * 4) = local_a1c;
LAB_143fcb332:
  iVar18 = *(int *)&pTVar22->field_0x18;
  local_a1c = local_a1c + 1;
  puVar32 = (uint *)(ulonglong)local_a1c;
  if (iVar18 <= (int)local_a1c) goto LAB_143fcb348;
  goto LAB_143fcb010;
}

// UpdateGlobalLengthActivationCurve @ 143fcd2b0

void __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::UpdateGlobalLengthActivationCurve
          (FMuscleActivationFacade *this,FLinearCurve *param_1)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TManagedArray<Chaos::FLinearCurve> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                       ,0x1bf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = 0;
  while( true ) {
    pTVar1 = (this->MuscleActivationElementAttribute).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar5 = FManagedArrayCollection::NumElements
                        ((this->MuscleActivationElementAttribute).ConstCollection,
                         (this->MuscleActivationElementAttribute).Group);
    }
    else {
      iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (iVar5 <= (int)uVar7) break;
    if (this->Collection == (FManagedArrayCollection *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                         ,0x1c8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (((this->LengthActivationCurveAttribute).ConstAttributeArray !=
         (TManagedArray<Chaos::FLinearCurve> *)0x0) && (-1 < (int)uVar7)) {
      pTVar1 = (this->MuscleActivationElementAttribute).ConstAttributeArray;
      if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
        iVar5 = FManagedArrayCollection::NumElements
                          ((this->MuscleActivationElementAttribute).ConstCollection,
                           (this->MuscleActivationElementAttribute).Group);
      }
      else {
        iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
      }
      if ((int)uVar7 < iVar5) {
        if (((this->LengthActivationCurveAttribute).AttributeArray ==
             (TManagedArray<Chaos::FLinearCurve> *)0x0) ||
           ((this->LengthActivationCurveAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
        ((this->LengthActivationCurveAttribute).AttributeArray)->field_0x8 = 1;
        pTVar2 = (this->LengthActivationCurveAttribute).AttributeArray;
        uVar6 = 0;
        if ((int)uVar7 < *(int *)&pTVar2->field_0x18) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
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
        Chaos::FLinearCurve::operator=
                  ((FLinearCurve *)((longlong)(int)uVar7 * 0x10 + *(longlong *)&pTVar2->field_0x10),
                   param_1);
      }
    }
    uVar7 = uVar7 + 1;
  }
  return;
}

// UpdateGlobalMuscleActivationParameters @ 143fcd890

void __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::UpdateGlobalMuscleActivationParameters
          (FMuscleActivationFacade *this,float param_1,float param_2,float param_3,float param_4)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float local_res8 [2];
  FMuscleActivationData local_c8;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                       ,0x19c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = 0;
  while( true ) {
    pTVar1 = (this->MuscleActivationElementAttribute).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar4 = FManagedArrayCollection::NumElements
                        ((this->MuscleActivationElementAttribute).ConstCollection,
                         (this->MuscleActivationElementAttribute).Group);
    }
    else {
      iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (iVar4 <= iVar5) break;
    local_res8[0] = param_1;
    if (this->Collection == (FManagedArrayCollection *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                         ,0x1af,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (-1 < iVar5) {
      pTVar1 = (this->MuscleActivationElementAttribute).ConstAttributeArray;
      if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
        iVar4 = FManagedArrayCollection::NumElements
                          ((this->MuscleActivationElementAttribute).ConstCollection,
                           (this->MuscleActivationElementAttribute).Group);
      }
      else {
        iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
      }
      if (iVar5 < iVar4) {
        GetMuscleActivationData(this,&local_c8,iVar5);
        TArray<float,TSizedDefaultAllocator<32>_>::Init
                  (&local_c8.ContractionVolumeScale,local_res8,
                   local_c8.MuscleActivationElement.ArrayNum);
        local_c8.InflationVolumeScale = param_4;
        local_c8.FiberLengthRatioAtMaxActivation = param_2;
        local_c8.MuscleLengthRatioThresholdForMaxActivation = param_3;
        UpdateMuscleActivationData(this,iVar5,&local_c8);
        if (local_c8.FiberStreamlineRestLength.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.FiberStreamlineRestLength.AllocatorInstance.Data);
        }
        DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                   local_c8.FiberStreamline.AllocatorInstance.Data,local_c8.FiberStreamline.ArrayNum
                  );
        if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
            local_c8.FiberStreamline.AllocatorInstance.Data !=
            (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_c8.FiberStreamline.AllocatorInstance.Data);
        }
        if (local_c8.ContractionVolumeScale.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           ) {
          FMemory::Free(local_c8.ContractionVolumeScale.AllocatorInstance.Data);
        }
        if (local_c8.FiberDirectionMatrix.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_c8.FiberDirectionMatrix.AllocatorInstance.Data);
        }
        if (local_c8.MuscleActivationElement.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.MuscleActivationElement.AllocatorInstance.Data);
        }
      }
    }
    iVar5 = iVar5 + 1;
  }
  return;
}

// UpdateLengthActivationCurve @ 143fcda60

void __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::UpdateLengthActivationCurve
          (FMuscleActivationFacade *this,int param_1,FLinearCurve *param_2)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TManagedArray<Chaos::FLinearCurve> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                       ,0x1c8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->LengthActivationCurveAttribute).ConstAttributeArray !=
       (TManagedArray<Chaos::FLinearCurve> *)0x0) && (-1 < param_1)) {
    pTVar1 = (this->MuscleActivationElementAttribute).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar5 = FManagedArrayCollection::NumElements
                        ((this->MuscleActivationElementAttribute).ConstCollection,
                         (this->MuscleActivationElementAttribute).Group);
    }
    else {
      iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (param_1 < iVar5) {
      if (((this->LengthActivationCurveAttribute).AttributeArray ==
           (TManagedArray<Chaos::FLinearCurve> *)0x0) ||
         ((this->LengthActivationCurveAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
      ((this->LengthActivationCurveAttribute).AttributeArray)->field_0x8 = 1;
      pTVar2 = (this->LengthActivationCurveAttribute).AttributeArray;
      uVar6 = 0;
      if (param_1 < *(int *)&pTVar2->field_0x18) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      Chaos::FLinearCurve::operator=
                ((FLinearCurve *)((longlong)param_1 * 0x10 + *(longlong *)&pTVar2->field_0x10),
                 param_2);
    }
  }
  return;
}

// UpdateMuscleActivationData @ 143fcdba0

bool __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::UpdateMuscleActivationData
          (FMuscleActivationFacade *this,int param_1,FMuscleActivationData *param_2)

{
  float fVar1;
  TIntVector2<int>_u_0 TVar2;
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar3;
  TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  TManagedArray<int> *pTVar11;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar12;
  TManagedArray<float> *pTVar13;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  
  lVar17 = (longlong)param_1;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                       ,0x72,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  if (((((((this->GeometryGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
         ((this->MuscleActivationElementAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->OriginInsertionPairAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0)) &&
       (((this->OriginInsertionRestLengthAttribute).ConstAttributeArray !=
         (TManagedArray<float> *)0x0 &&
        ((this->FiberDirectionMatrixAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0))))
      && (((this->ContractionVolumeScaleAttribute).ConstAttributeArray !=
           (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0 &&
          (((this->FiberLengthRatioAtMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0 &&
           ((this->MuscleLengthRatioThresholdForMaxActivationAttribute).ConstAttributeArray !=
            (TManagedArray<float> *)0x0)))))) &&
     (((this->InflationVolumeScaleAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
      (-1 < param_1)))) {
    pTVar12 = (this->MuscleActivationElementAttribute).ConstAttributeArray;
    if (pTVar12 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((this->MuscleActivationElementAttribute).ConstCollection,
                         (this->MuscleActivationElementAttribute).Group);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar12 + 0x60))();
    }
    if (param_1 < iVar9) {
      iVar9 = param_2->GeometryGroupIndex;
      pTVar11 = TManagedArrayAccessor<int>::Modify(&this->GeometryGroupIndexAttribute);
      uVar19 = 0;
      uVar18 = (uint)~param_1 >> 0x1f;
      uVar15 = uVar19;
      if (param_1 < *(int *)&pTVar11->field_0x18) {
        uVar15 = uVar18;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      *(int *)(*(longlong *)&pTVar11->field_0x10 + lVar17 * 4) = iVar9;
      pTVar12 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Modify
                          (&this->MuscleActivationElementAttribute);
      uVar15 = uVar19;
      if (param_1 < *(int *)&pTVar12->field_0x18) {
        uVar15 = uVar18;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      lVar16 = lVar17 * 0x10;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 (lVar16 + *(longlong *)&pTVar12->field_0x10),&param_2->MuscleActivationElement);
      TVar2 = (param_2->OriginInsertionPair).field0_0x0;
      if (((this->OriginInsertionPairAttribute).AttributeArray ==
           (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0) ||
         ((this->OriginInsertionPairAttribute).Collection == (FManagedArrayCollection *)0x0)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      ((this->OriginInsertionPairAttribute).AttributeArray)->field_0x8 = 1;
      pTVar3 = (this->OriginInsertionPairAttribute).AttributeArray;
      uVar10 = 0;
      uVar15 = uVar10;
      if (param_1 < *(int *)&pTVar3->field_0x18) {
        uVar15 = uVar18;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      *(TIntVector2<int>_u_0 *)(*(longlong *)&pTVar3->field_0x10 + lVar17 * 8) = TVar2;
      fVar1 = param_2->OriginInsertionRestLength;
      pTVar13 = TManagedArrayAccessor<float>::Modify(&this->OriginInsertionRestLengthAttribute);
      uVar15 = uVar10;
      if (param_1 < *(int *)&pTVar13->field_0x18) {
        uVar15 = uVar18;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      *(float *)(*(longlong *)&pTVar13->field_0x10 + lVar17 * 4) = fVar1;
      if (((this->FiberDirectionMatrixAttribute).AttributeArray ==
           (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0) ||
         ((this->FiberDirectionMatrixAttribute).Collection == (FManagedArrayCollection *)0x0)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      ((this->FiberDirectionMatrixAttribute).AttributeArray)->field_0x8 = 1;
      pTVar4 = (this->FiberDirectionMatrixAttribute).AttributeArray;
      uVar15 = uVar10;
      if (param_1 < *(int *)&pTVar4->field_0x18) {
        uVar15 = uVar18;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&pTVar4->field_0x10 + lVar16),&param_2->FiberDirectionMatrix);
      pTVar14 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Modify
                          (&this->ContractionVolumeScaleAttribute);
      uVar15 = uVar10;
      if (param_1 < *(int *)&pTVar14->field_0x18) {
        uVar15 = uVar18;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&pTVar14->field_0x10 + lVar16),&param_2->ContractionVolumeScale);
      fVar1 = param_2->FiberLengthRatioAtMaxActivation;
      pTVar13 = TManagedArrayAccessor<float>::Modify
                          (&this->FiberLengthRatioAtMaxActivationAttribute);
      uVar15 = uVar10;
      if (param_1 < *(int *)&pTVar13->field_0x18) {
        uVar15 = uVar18;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      *(float *)(*(longlong *)&pTVar13->field_0x10 + lVar17 * 4) = fVar1;
      fVar1 = param_2->MuscleLengthRatioThresholdForMaxActivation;
      pTVar13 = TManagedArrayAccessor<float>::Modify
                          (&this->MuscleLengthRatioThresholdForMaxActivationAttribute);
      if (param_1 < *(int *)&pTVar13->field_0x18) {
        uVar10 = uVar18;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      *(float *)(*(longlong *)&pTVar13->field_0x10 + lVar17 * 4) = fVar1;
      fVar1 = param_2->InflationVolumeScale;
      pTVar13 = TManagedArrayAccessor<float>::Modify(&this->InflationVolumeScaleAttribute);
      uVar15 = 0;
      if (param_1 < *(int *)&pTVar13->field_0x18) {
        uVar15 = uVar18;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      *(float *)(*(longlong *)&pTVar13->field_0x10 + lVar17 * 4) = fVar1;
      if (((this->FiberStreamlineAttribute).AttributeArray ==
           (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
            *)0x0) ||
         ((this->FiberStreamlineAttribute).Collection == (FManagedArrayCollection *)0x0)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      ((this->FiberStreamlineAttribute).AttributeArray)->field_0x8 = 1;
      pTVar5 = (this->FiberStreamlineAttribute).AttributeArray;
      uVar15 = 0;
      if (param_1 < *(int *)&pTVar5->field_0x18) {
        uVar15 = uVar18;
      }
      if (uVar15 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::operator=((TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                   *)(*(longlong *)&pTVar5->field_0x10 + lVar16),&param_2->FiberStreamline);
      pTVar14 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Modify
                          (&this->FiberStreamlineRestLengthAttribute);
      if (param_1 < *(int *)&pTVar14->field_0x18) {
        uVar19 = uVar18;
      }
      if (uVar19 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&pTVar14->field_0x10 + lVar16),&param_2->FiberStreamlineRestLength);
      return true;
    }
  }
  return false;
}

// UpdateMuscleActivationParameters @ 143fce1e0

bool __thiscall
GeometryCollection::Facades::FMuscleActivationFacade::UpdateMuscleActivationParameters
          (FMuscleActivationFacade *this,int param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  float local_res18 [4];
  FMuscleActivationData local_98;
  
  local_res18[0] = param_2;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionMuscleActivationFacade.cpp"
                         ,0x1af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (-1 < param_1) {
    pTVar1 = (this->MuscleActivationElementAttribute).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar5 = FManagedArrayCollection::NumElements
                        ((this->MuscleActivationElementAttribute).ConstCollection,
                         (this->MuscleActivationElementAttribute).Group);
    }
    else {
      iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (param_1 < iVar5) {
      GetMuscleActivationData(this,&local_98,param_1);
      TArray<float,TSizedDefaultAllocator<32>_>::Init
                (&local_98.ContractionVolumeScale,local_res18,
                 local_98.MuscleActivationElement.ArrayNum);
      local_98.MuscleLengthRatioThresholdForMaxActivation = param_4;
      local_98.InflationVolumeScale = param_5;
      local_98.FiberLengthRatioAtMaxActivation = param_3;
      UpdateMuscleActivationData(this,param_1,&local_98);
      if (local_98.FiberStreamlineRestLength.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.FiberStreamlineRestLength.AllocatorInstance.Data);
      }
      DestructItems<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 local_98.FiberStreamline.AllocatorInstance.Data,local_98.FiberStreamline.ArrayNum);
      if ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
          local_98.FiberStreamline.AllocatorInstance.Data !=
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_98.FiberStreamline.AllocatorInstance.Data);
      }
      if (local_98.ContractionVolumeScale.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_98.ContractionVolumeScale.AllocatorInstance.Data);
      }
      if (local_98.FiberDirectionMatrix.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.FiberDirectionMatrix.AllocatorInstance.Data);
      }
      if (local_98.MuscleActivationElement.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_98.MuscleActivationElement.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// operator() @ 1504aae30

bool __thiscall
`GeometryCollection::Facades::FMuscleActivationFacade::SetUpMuscleActivation'::__l222::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1867048598835822954>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1867048598835822954>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


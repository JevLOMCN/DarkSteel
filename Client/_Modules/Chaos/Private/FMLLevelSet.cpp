// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 28

// FMLLevelSet @ 143bdf480

FMLLevelSet * __thiscall
Chaos::FMLLevelSet::FMLLevelSet
          (FMLLevelSet *this,TObjectPtr<UNNEModelData> param_1,TObjectPtr<UNNEModelData> param_2)

{
  UObject *local_res8;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x11');
  this->_padding_ = (longlong)&___7FMLLevelSet_Chaos__6B_;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  (this->ActiveBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoneNames).ArrayNum = 0;
  (this->ActiveBoneNames).ArrayMax = 0;
  (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesRelativeTransforms).ArrayNum = 0;
  (this->ActiveBonesRelativeTransforms).ArrayMax = 0;
  (this->NNESignedDistanceModel).Object = (IModelCPU *)0x0;
  (this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SignedDistanceNeuralInferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceNeuralInferences).ArrayNum = 0;
  (this->SignedDistanceNeuralInferences).ArrayMax = 0;
  (this->SignedDistanceModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeights).ArrayNum = 0;
  (this->SignedDistanceModelWeights).ArrayMax = 0;
  (this->SignedDistanceModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeightsShapes).ArrayNum = 0;
  (this->SignedDistanceModelWeightsShapes).ArrayMax = 0;
  (this->NNEIncorrectZoneModel).Object = (IModelCPU *)0x0;
  (this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->IncorrectZoneNeuralInferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneNeuralInferences).ArrayNum = 0;
  (this->IncorrectZoneNeuralInferences).ArrayMax = 0;
  (this->IncorrectZoneModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneModelWeights).ArrayNum = 0;
  (this->IncorrectZoneModelWeights).ArrayMax = 0;
  (this->IncorrectZoneModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneModelWeightsShapes).ArrayNum = 0;
  (this->IncorrectZoneModelWeightsShapes).ArrayMax = 0;
  (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridUnitAxesXYZ).ArrayNum = 0;
  (this->TrainingGridUnitAxesXYZ).ArrayMax = 0;
  (this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridAxesLengthsXYZ).ArrayNum = 0;
  (this->TrainingGridAxesLengthsXYZ).ArrayMax = 0;
  (this->ActiveBonesRotationComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesRotationComponents).ArrayNum = 0;
  (this->ActiveBonesRotationComponents).ArrayMax = 0;
  (this->ActiveBonesReferenceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceRotations).ArrayNum = 0;
  (this->ActiveBonesReferenceRotations).ArrayMax = 0;
  (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceTranslations).ArrayNum = 0;
  (this->ActiveBonesReferenceTranslations).ArrayMax = 0;
  *(undefined8 *)&(this->DebugPhi).field_0x10 = 0;
  *(undefined8 *)&(this->DebugPhi).field_0x18 = 0;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  *(undefined8 *)&this->DebugPhi = 0;
  *(undefined4 *)&(this->DebugPhi).field_0x8 = 0;
  local_res8 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  BuildNNEModel(this,(TObjectPtr<UNNEModelData>)&local_res8,&this->NNESignedDistanceModel);
  local_res8 = *(UObject **)param_2.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  BuildNNEModel(this,(TObjectPtr<UNNEModelData>)&local_res8,&this->NNEIncorrectZoneModel);
  return this;
}

// FMLLevelSet @ 143bdf640

FMLLevelSet * __thiscall Chaos::FMLLevelSet::FMLLevelSet(FMLLevelSet *this)

{
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x11');
  this->_padding_ = (longlong)&___7FMLLevelSet_Chaos__6B_;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  (this->ActiveBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoneNames).ArrayNum = 0;
  (this->ActiveBoneNames).ArrayMax = 0;
  (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesRelativeTransforms).ArrayNum = 0;
  (this->ActiveBonesRelativeTransforms).ArrayMax = 0;
  (this->NNESignedDistanceModel).Object = (IModelCPU *)0x0;
  (this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SignedDistanceNeuralInferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceNeuralInferences).ArrayNum = 0;
  (this->SignedDistanceNeuralInferences).ArrayMax = 0;
  (this->SignedDistanceModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeights).ArrayNum = 0;
  (this->SignedDistanceModelWeights).ArrayMax = 0;
  (this->SignedDistanceModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeightsShapes).ArrayNum = 0;
  (this->SignedDistanceModelWeightsShapes).ArrayMax = 0;
  (this->NNEIncorrectZoneModel).Object = (IModelCPU *)0x0;
  (this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->IncorrectZoneNeuralInferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneNeuralInferences).ArrayNum = 0;
  (this->IncorrectZoneNeuralInferences).ArrayMax = 0;
  (this->IncorrectZoneModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneModelWeights).ArrayNum = 0;
  (this->IncorrectZoneModelWeights).ArrayMax = 0;
  (this->IncorrectZoneModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneModelWeightsShapes).ArrayNum = 0;
  (this->IncorrectZoneModelWeightsShapes).ArrayMax = 0;
  (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridUnitAxesXYZ).ArrayNum = 0;
  (this->TrainingGridUnitAxesXYZ).ArrayMax = 0;
  (this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridAxesLengthsXYZ).ArrayNum = 0;
  (this->TrainingGridAxesLengthsXYZ).ArrayMax = 0;
  (this->ActiveBonesRotationComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesRotationComponents).ArrayNum = 0;
  (this->ActiveBonesRotationComponents).ArrayMax = 0;
  (this->ActiveBonesReferenceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceRotations).ArrayNum = 0;
  (this->ActiveBonesReferenceRotations).ArrayMax = 0;
  (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceTranslations).ArrayNum = 0;
  (this->ActiveBonesReferenceTranslations).ArrayMax = 0;
  *(undefined8 *)&(this->DebugPhi).field_0x10 = 0;
  *(undefined8 *)&(this->DebugPhi).field_0x18 = 0;
  *(undefined8 *)&this->DebugPhi = 0;
  *(undefined4 *)&(this->DebugPhi).field_0x8 = 0;
  return this;
}

// FMLLevelSet @ 143bdf780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FMLLevelSet * __thiscall
Chaos::FMLLevelSet::FMLLevelSet(FMLLevelSet *this,FMLLevelSetImportData *param_1)

{
  TAABB<double,3> *pTVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  code *pcVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  longlong lVar23;
  bool bVar24;
  uint uVar25;
  FMLLevelSet *pFVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  UObject *local_res8;
  FMLLevelSetImportData *local_res10;
  UObject *local_res18;
  TArray<double,TSizedDefaultAllocator<32>_> local_128;
  TVector<int,3>_u_0 local_118 [3];
  double local_f0;
  double dStack_e8;
  double local_e0;
  TUniformGridBase<double,3> local_d8;
  
  local_res10 = param_1;
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x11');
  uVar29 = 0;
  pTVar1 = &this->LocalBoundingBox;
  this->_padding_ = (longlong)&___7FMLLevelSet_Chaos__6B_;
  (this->ActiveBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoneNames).AllocatorInstance.Data = (param_1->ActiveBoneNames).AllocatorInstance.Data
  ;
  (param_1->ActiveBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoneNames).ArrayNum = (param_1->ActiveBoneNames).ArrayNum;
  (this->ActiveBoneNames).ArrayMax = (param_1->ActiveBoneNames).ArrayMax;
  (param_1->ActiveBoneNames).ArrayNum = 0;
  (param_1->ActiveBoneNames).ArrayMax = 0;
  (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesRelativeTransforms).ArrayNum = 0;
  (this->ActiveBonesRelativeTransforms).ArrayMax = 0;
  (this->NNESignedDistanceModel).Object = (IModelCPU *)0x0;
  (this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SignedDistanceNeuralInferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceNeuralInferences).ArrayNum = 0;
  (this->SignedDistanceNeuralInferences).ArrayMax = 0;
  (this->SignedDistanceModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeights).ArrayNum = 0;
  (this->SignedDistanceModelWeights).ArrayMax = 0;
  (this->SignedDistanceModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeightsShapes).ArrayNum = 0;
  (this->SignedDistanceModelWeightsShapes).ArrayMax = 0;
  (this->NNEIncorrectZoneModel).Object = (IModelCPU *)0x0;
  (this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->IncorrectZoneNeuralInferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneNeuralInferences).ArrayNum = 0;
  (this->IncorrectZoneNeuralInferences).ArrayMax = 0;
  (this->IncorrectZoneModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneModelWeights).ArrayNum = 0;
  (this->IncorrectZoneModelWeights).ArrayMax = 0;
  (this->IncorrectZoneModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneModelWeightsShapes).ArrayNum = 0;
  (this->IncorrectZoneModelWeightsShapes).ArrayMax = 0;
  *(undefined8 *)&pTVar1->MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  this->SignedDistanceScaling = param_1->SignedDistanceScaling;
  *(undefined8 *)&(this->TrainingGridMin).field0_0x0 =
       *(undefined8 *)&(param_1->TrainingGridMin).field0_0x0;
  (this->TrainingGridMin).field0_0x0._s_0.Z = (param_1->TrainingGridMin).field0_0x0._s_0.Z;
  (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data =
       (param_1->TrainingGridAxesXYZ).AllocatorInstance.Data;
  (param_1->TrainingGridAxesXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridUnitAxesXYZ).ArrayNum = (param_1->TrainingGridAxesXYZ).ArrayNum;
  (this->TrainingGridUnitAxesXYZ).ArrayMax = (param_1->TrainingGridAxesXYZ).ArrayMax;
  (param_1->TrainingGridAxesXYZ).ArrayNum = 0;
  (param_1->TrainingGridAxesXYZ).ArrayMax = 0;
  (this->ActiveBonesRotationComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridAxesLengthsXYZ).ArrayNum = 0;
  (this->TrainingGridAxesLengthsXYZ).ArrayMax = 0;
  (this->ActiveBonesRotationComponents).AllocatorInstance.Data =
       (param_1->ActiveBonesRotationComponents).AllocatorInstance.Data;
  (param_1->ActiveBonesRotationComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesRotationComponents).ArrayNum = (param_1->ActiveBonesRotationComponents).ArrayNum
  ;
  (this->ActiveBonesRotationComponents).ArrayMax = (param_1->ActiveBonesRotationComponents).ArrayMax
  ;
  (param_1->ActiveBonesRotationComponents).ArrayNum = 0;
  (param_1->ActiveBonesRotationComponents).ArrayMax = 0;
  (this->ActiveBonesReferenceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceRotations).AllocatorInstance.Data =
       (param_1->ActiveBonesReferenceRotations).AllocatorInstance.Data;
  (param_1->ActiveBonesReferenceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceRotations).ArrayNum = (param_1->ActiveBonesReferenceRotations).ArrayNum
  ;
  (this->ActiveBonesReferenceRotations).ArrayMax = (param_1->ActiveBonesReferenceRotations).ArrayMax
  ;
  (param_1->ActiveBonesReferenceRotations).ArrayNum = 0;
  (param_1->ActiveBonesReferenceRotations).ArrayMax = 0;
  (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data =
       (param_1->ActiveBonesReferenceTranslations).AllocatorInstance.Data;
  (param_1->ActiveBonesReferenceTranslations).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceTranslations).ArrayNum =
       (param_1->ActiveBonesReferenceTranslations).ArrayNum;
  (this->ActiveBonesReferenceTranslations).ArrayMax =
       (param_1->ActiveBonesReferenceTranslations).ArrayMax;
  (param_1->ActiveBonesReferenceTranslations).ArrayNum = 0;
  (param_1->ActiveBonesReferenceTranslations).ArrayMax = 0;
  *(undefined8 *)&(this->DebugPhi).field_0x10 = 0;
  *(undefined8 *)&(this->DebugPhi).field_0x18 = 0;
  *(undefined8 *)&this->DebugPhi = 0;
  *(undefined4 *)&(this->DebugPhi).field_0x8 = 0;
  this->TotalNumberOfRotationComponents = 0;
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < (this->ActiveBonesRotationComponents).ArrayNum) {
    do {
      uVar27 = (uint)uVar28;
      uVar25 = 0;
      if ((int)uVar27 < (this->ActiveBonesRotationComponents).ArrayNum) {
        uVar25 = ~uVar27 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar17 = (code *)swi(3);
        pFVar26 = (FMLLevelSet *)(*pcVar17)();
        return pFVar26;
      }
      this->TotalNumberOfRotationComponents =
           this->TotalNumberOfRotationComponents +
           *(int *)((this->ActiveBonesRotationComponents).AllocatorInstance.Data + uVar31 + 8);
      uVar28 = (ulonglong)(uVar27 + 1);
      uVar31 = uVar31 + 0x10;
    } while ((int)(uVar27 + 1) < (this->ActiveBonesRotationComponents).ArrayNum);
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ActiveBonesRelativeTransforms,(this->ActiveBoneNames).ArrayNum,Default);
  if (((param_1->NNEModelDataArr).ArrayNum < 1) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("MLLevelSetImportData.NNEModelDataArr.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\MLLevelset.cpp"
                          ,0x20,L""), bVar24)) {
    pcVar17 = (code *)swi(3);
    pFVar26 = (FMLLevelSet *)(*pcVar17)();
    return pFVar26;
  }
  if (((param_1->NNEModelDataArr).ArrayNum < 1) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    pFVar26 = (FMLLevelSet *)(*pcVar17)();
    return pFVar26;
  }
  pFVar15 = (param_1->NNEModelDataArr).AllocatorInstance.Data;
  if (((param_1->NNEModelDataArr).ArrayNum < 1) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    pFVar26 = (FMLLevelSet *)(*pcVar17)();
    return pFVar26;
  }
  local_res8 = *(UObject **)((param_1->NNEModelDataArr).AllocatorInstance.Data + 0x30);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  if (((param_1->NNEModelDataArr).ArrayNum < 1) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    pFVar26 = (FMLLevelSet *)(*pcVar17)();
    return pFVar26;
  }
  BuildNNEModel(this,(TArray<int,TSizedDefaultAllocator<32>_> *)
                     (param_1->NNEModelDataArr).AllocatorInstance.Data,
                (TObjectPtr<UNNEModelData>)&local_res8,(FString *)(pFVar15 + 0x10),
                &this->NNESignedDistanceModel,&this->SignedDistanceNeuralInferences,
                &this->SignedDistanceModelWeightsShapes,&this->SignedDistanceModelWeights);
  iVar30 = (param_1->NNEModelDataArr).ArrayNum;
  this->bUseIncorrectZoneModel = 1 < iVar30;
  if (1 < iVar30) {
    if (((param_1->NNEModelDataArr).ArrayNum < 2) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar17 = (code *)swi(3);
      pFVar26 = (FMLLevelSet *)(*pcVar17)();
      return pFVar26;
    }
    pFVar15 = (param_1->NNEModelDataArr).AllocatorInstance.Data;
    if (((param_1->NNEModelDataArr).ArrayNum < 2) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar17 = (code *)swi(3);
      pFVar26 = (FMLLevelSet *)(*pcVar17)();
      return pFVar26;
    }
    local_res18 = *(UObject **)((param_1->NNEModelDataArr).AllocatorInstance.Data + 0x68);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    if (((param_1->NNEModelDataArr).ArrayNum < 2) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar17 = (code *)swi(3);
      pFVar26 = (FMLLevelSet *)(*pcVar17)();
      return pFVar26;
    }
    BuildNNEModel(this,(TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((param_1->NNEModelDataArr).AllocatorInstance.Data + 0x38),
                  (TObjectPtr<UNNEModelData>)&local_res18,(FString *)(pFVar15 + 0x48),
                  &this->NNEIncorrectZoneModel,&this->IncorrectZoneNeuralInferences,
                  &this->IncorrectZoneModelWeightsShapes,&this->IncorrectZoneModelWeights);
  }
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum < 1) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    pFVar26 = (FMLLevelSet *)(*pcVar17)();
    return pFVar26;
  }
  pFVar15 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum < 2) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    pFVar26 = (FMLLevelSet *)(*pcVar17)();
    return pFVar26;
  }
  pFVar16 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  fVar3 = *(float *)pFVar15;
  fVar4 = *(float *)(pFVar16 + 0x10);
  fVar5 = *(float *)(pFVar16 + 0x14);
  fVar6 = *(float *)(pFVar16 + 0xc);
  fVar7 = *(float *)(pFVar15 + 4);
  fVar8 = *(float *)(pFVar15 + 8);
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum < 3) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    pFVar26 = (FMLLevelSet *)(*pcVar17)();
    return pFVar26;
  }
  pFVar15 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  fVar9 = (this->TrainingGridMin).field0_0x0._s_0.X;
  fVar10 = (this->TrainingGridMin).field0_0x0._s_0.Y;
  fVar11 = (this->TrainingGridMin).field0_0x0._s_0.Z;
  dVar21 = (double)(fVar3 + fVar6 + *(float *)(pFVar15 + 0x18) + fVar9);
  dVar19 = (double)(fVar4 + fVar7 + *(float *)(pFVar15 + 0x1c) + fVar10);
  dVar20 = (double)(fVar5 + fVar8 + *(float *)(pFVar15 + 0x20) + fVar11);
  *(double *)&pTVar1->MMin = (double)fVar9;
  *(double *)&(this->LocalBoundingBox).MMin.field_0x8 = (double)fVar10;
  *(double *)&(this->LocalBoundingBox).MMin.field_0x10 = (double)fVar11;
  *(double *)&(this->LocalBoundingBox).MMax = dVar21;
  *(double *)&(this->LocalBoundingBox).MMax.field_0x8 = dVar19;
  *(double *)&(this->LocalBoundingBox).MMax.field_0x10 = dVar20;
  uVar28 = uVar29;
  local_f0 = dVar21;
  dStack_e8 = dVar19;
  local_e0 = dVar20;
  while( true ) {
    iVar30 = (int)uVar28;
    if (((this->TrainingGridUnitAxesXYZ).ArrayNum <= iVar30) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar17 = (code *)swi(3);
      pFVar26 = (FMLLevelSet *)(*pcVar17)();
      return pFVar26;
    }
    pFVar15 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
    dVar32 = *(double *)&(this->LocalBoundingBox).MMin.field_0x10;
    dVar35 = (double)(this->TrainingGridMin).field0_0x0._s_0.X +
             (double)*(float *)(pFVar15 + uVar29);
    dVar33 = (double)*(float *)(pFVar15 + uVar29 + 4) +
             (double)(this->TrainingGridMin).field0_0x0._s_0.Y;
    dVar12 = *(double *)&(this->LocalBoundingBox).MMin.field_0x8;
    dVar18 = dVar33;
    if (dVar12 <= dVar33) {
      dVar18 = dVar12;
    }
    dVar34 = (double)*(float *)(pFVar15 + uVar29 + 8) +
             (double)(this->TrainingGridMin).field0_0x0._s_0.Z;
    dVar12 = *(double *)&pTVar1->MMin;
    if (dVar35 <= *(double *)&pTVar1->MMin) {
      dVar12 = dVar35;
    }
    if (dVar34 <= dVar32) {
      dVar32 = dVar34;
    }
    *(double *)&pTVar1->MMin = dVar12;
    *(double *)&(this->LocalBoundingBox).MMin.field_0x8 = dVar18;
    *(double *)&(this->LocalBoundingBox).MMin.field_0x10 = dVar32;
    dVar32 = *(double *)&(this->LocalBoundingBox).MMax.field_0x8;
    dVar12 = *(double *)&(this->LocalBoundingBox).MMax;
    if (dVar35 <= dVar12) {
      dVar35 = dVar12;
    }
    dVar12 = *(double *)&(this->LocalBoundingBox).MMax.field_0x10;
    if (dVar34 <= dVar12) {
      dVar34 = dVar12;
    }
    if (dVar32 <= dVar33) {
      dVar32 = dVar33;
    }
    *(double *)&(this->LocalBoundingBox).MMax = dVar35;
    *(double *)&(this->LocalBoundingBox).MMax.field_0x8 = dVar32;
    *(double *)&(this->LocalBoundingBox).MMax.field_0x10 = dVar34;
    if (((this->TrainingGridUnitAxesXYZ).ArrayNum <= iVar30) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) break;
    pFVar16 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
    dVar32 = *(double *)&(this->LocalBoundingBox).MMin.field_0x10;
    uVar28 = (ulonglong)(iVar30 + 1U);
    lVar23 = uVar29 + 4;
    dVar18 = dVar20 - (double)*(float *)(pFVar16 + uVar29 + 8);
    pFVar15 = pFVar16 + uVar29;
    uVar29 = uVar29 + 0xc;
    dVar33 = dVar19 - (double)*(float *)(pFVar16 + lVar23);
    dVar12 = *(double *)&(this->LocalBoundingBox).MMin.field_0x8;
    dVar35 = dVar21 - (double)*(float *)pFVar15;
    if (dVar18 <= dVar32) {
      dVar32 = dVar18;
    }
    if (dVar33 <= dVar12) {
      dVar12 = dVar33;
    }
    dVar34 = *(double *)&pTVar1->MMin;
    if (dVar35 <= *(double *)&pTVar1->MMin) {
      dVar34 = dVar35;
    }
    *(double *)&pTVar1->MMin = dVar34;
    *(double *)&(this->LocalBoundingBox).MMin.field_0x8 = dVar12;
    *(double *)&(this->LocalBoundingBox).MMin.field_0x10 = dVar32;
    dVar32 = *(double *)&(this->LocalBoundingBox).MMax;
    dVar12 = *(double *)&(this->LocalBoundingBox).MMax.field_0x8;
    if (dVar32 <= dVar35) {
      dVar32 = dVar35;
    }
    dVar35 = *(double *)&(this->LocalBoundingBox).MMax.field_0x10;
    if (dVar12 <= dVar33) {
      dVar12 = dVar33;
    }
    if (dVar35 <= dVar18) {
      dVar35 = dVar18;
    }
    *(double *)&(this->LocalBoundingBox).MMax = dVar32;
    *(double *)&(this->LocalBoundingBox).MMax.field_0x8 = dVar12;
    *(double *)&(this->LocalBoundingBox).MMax.field_0x10 = dVar35;
    if (2 < (int)(iVar30 + 1U)) {
      ProcessTrainingGridAxesVectors(this);
      iVar30 = (local_res10->DebugGridResolution).field0_0x0._s_0.X;
      iVar13 = (local_res10->DebugGridResolution).field0_0x0._s_0.Y;
      uVar22 = *(undefined8 *)&(local_res10->DebugGridResolution).field0_0x0;
      iVar14 = (local_res10->DebugGridResolution).field0_0x0._s_0.Z;
      local_118[0]._0_4_ = iVar30;
      local_118[0]._4_4_ = iVar13;
      local_118[0]._8_4_ = iVar14;
      TUniformGridBase<double,3>::TUniformGridBase<double,3>
                (&local_d8,&pTVar1->MMin,&(this->LocalBoundingBox).MMax,
                 (TVector<int,3> *)&local_118[0]._s_0,0);
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)&this->DebugGrid = local_d8.MMinCorner._0_8_;
      *(undefined8 *)&(this->DebugGrid).field_0x8 = local_d8.MMinCorner._8_8_;
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      *(undefined8 *)&(this->DebugGrid).field_0x10 = local_d8.MMinCorner._16_8_;
      *(undefined8 *)&(this->DebugGrid).field_0x18 = local_d8.MMaxCorner._0_8_;
      *(undefined8 *)&(this->DebugGrid).field_0x20 = local_d8.MMaxCorner._8_8_;
      *(undefined8 *)&(this->DebugGrid).field_0x28 = local_d8.MMaxCorner._16_8_;
      *(undefined8 *)&(this->DebugGrid).field_0x30 = local_d8.MCells.field0_0x0._0_8_;
      *(undefined8 *)&(this->DebugGrid).field_0x38 = local_d8._56_8_;
      *(undefined8 *)&(this->DebugGrid).field_0x40 = local_d8.MDx._0_8_;
      *(undefined8 *)&(this->DebugGrid).field_0x48 = local_d8.MDx._8_8_;
      *(undefined8 *)&(this->DebugGrid).field_0x50 = local_d8.MDx._16_8_;
      TArray<double,TSizedDefaultAllocator<32>_>::SetNum
                (&local_128,iVar14 * iVar13 * iVar30,Default);
      puVar2 = &(this->DebugPhi).field_0x10;
      *(undefined8 *)&this->DebugPhi = uVar22;
      *(int *)&(this->DebugPhi).field_0x8 = iVar14;
      if ((TArray<double,TSizedDefaultAllocator<32>_> *)puVar2 != &local_128) {
        if (*(void **)puVar2 != (void *)0x0) {
          FMemory::Free(*(void **)puVar2);
        }
        *(FScriptContainerElement **)puVar2 = local_128.AllocatorInstance.Data;
        *(int *)&(this->DebugPhi).field_0x18 = local_128.ArrayNum;
        *(int *)&(this->DebugPhi).field_0x1c = local_128.ArrayMax;
        local_128.ArrayNum = 0;
        local_128.ArrayMax = 0;
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      return this;
    }
  }
  pcVar17 = (code *)swi(3);
  pFVar26 = (FMLLevelSet *)(*pcVar17)();
  return pFVar26;
}

// FMLLevelSet @ 143be0130

FMLLevelSet * __thiscall Chaos::FMLLevelSet::FMLLevelSet(FMLLevelSet *this,FMLLevelSet *param_1)

{
  int *piVar1;
  TArray<Chaos::FMLLevelSetNeuralInference,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMLLevelSetNeuralInference *pFVar5;
  undefined8 uVar6;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x11');
  this->_padding_ = (longlong)&___7FMLLevelSet_Chaos__6B_;
  (this->ActiveBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoneNames).AllocatorInstance.Data = (param_1->ActiveBoneNames).AllocatorInstance.Data
  ;
  (param_1->ActiveBoneNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoneNames).ArrayNum = (param_1->ActiveBoneNames).ArrayNum;
  (this->ActiveBoneNames).ArrayMax = (param_1->ActiveBoneNames).ArrayMax;
  (param_1->ActiveBoneNames).ArrayNum = 0;
  (param_1->ActiveBoneNames).ArrayMax = 0;
  (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data =
       (param_1->ActiveBonesRelativeTransforms).AllocatorInstance.Data;
  (param_1->ActiveBonesRelativeTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesRelativeTransforms).ArrayNum = (param_1->ActiveBonesRelativeTransforms).ArrayNum
  ;
  (this->ActiveBonesRelativeTransforms).ArrayMax = (param_1->ActiveBonesRelativeTransforms).ArrayMax
  ;
  (param_1->ActiveBonesRelativeTransforms).ArrayNum = 0;
  (param_1->ActiveBonesRelativeTransforms).ArrayMax = 0;
  (this->NNESignedDistanceModel).Object = (param_1->NNESignedDistanceModel).Object;
  pTVar4 = (param_1->NNESignedDistanceModel).SharedReferenceCount.ReferenceController;
  (this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->SignedDistanceNeuralInferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceNeuralInferences).AllocatorInstance.Data =
       (param_1->SignedDistanceNeuralInferences).AllocatorInstance.Data;
  (param_1->SignedDistanceNeuralInferences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceNeuralInferences).ArrayNum =
       (param_1->SignedDistanceNeuralInferences).ArrayNum;
  (this->SignedDistanceNeuralInferences).ArrayMax =
       (param_1->SignedDistanceNeuralInferences).ArrayMax;
  (param_1->SignedDistanceNeuralInferences).ArrayNum = 0;
  (param_1->SignedDistanceNeuralInferences).ArrayMax = 0;
  (this->SignedDistanceModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeights).AllocatorInstance.Data =
       (param_1->SignedDistanceModelWeights).AllocatorInstance.Data;
  (param_1->SignedDistanceModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeights).ArrayNum = (param_1->SignedDistanceModelWeights).ArrayNum;
  (this->SignedDistanceModelWeights).ArrayMax = (param_1->SignedDistanceModelWeights).ArrayMax;
  (param_1->SignedDistanceModelWeights).ArrayNum = 0;
  (param_1->SignedDistanceModelWeights).ArrayMax = 0;
  (this->SignedDistanceModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeightsShapes).AllocatorInstance.Data =
       (param_1->SignedDistanceModelWeightsShapes).AllocatorInstance.Data;
  (param_1->SignedDistanceModelWeightsShapes).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SignedDistanceModelWeightsShapes).ArrayNum =
       (param_1->SignedDistanceModelWeightsShapes).ArrayNum;
  (this->SignedDistanceModelWeightsShapes).ArrayMax =
       (param_1->SignedDistanceModelWeightsShapes).ArrayMax;
  (param_1->SignedDistanceModelWeightsShapes).ArrayNum = 0;
  (param_1->SignedDistanceModelWeightsShapes).ArrayMax = 0;
  (this->NNEIncorrectZoneModel).Object = (param_1->NNEIncorrectZoneModel).Object;
  pTVar4 = (param_1->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController;
  (this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->IncorrectZoneNeuralInferences;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->IncorrectZoneNeuralInferences).ArrayMax;
  iVar3 = (param_1->IncorrectZoneNeuralInferences).ArrayNum;
  pFVar5 = (FMLLevelSetNeuralInference *)
           (param_1->IncorrectZoneNeuralInferences).AllocatorInstance.Data;
  (this->IncorrectZoneNeuralInferences).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<Chaos::FMLLevelSetNeuralInference,Chaos::FMLLevelSetNeuralInference,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  (this->IncorrectZoneModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneModelWeights).AllocatorInstance.Data =
       (param_1->IncorrectZoneModelWeights).AllocatorInstance.Data;
  (param_1->IncorrectZoneModelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneModelWeights).ArrayNum = (param_1->IncorrectZoneModelWeights).ArrayNum;
  (this->IncorrectZoneModelWeights).ArrayMax = (param_1->IncorrectZoneModelWeights).ArrayMax;
  (param_1->IncorrectZoneModelWeights).ArrayNum = 0;
  (param_1->IncorrectZoneModelWeights).ArrayMax = 0;
  (this->IncorrectZoneModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncorrectZoneModelWeightsShapes).AllocatorInstance.Data =
       (param_1->IncorrectZoneModelWeightsShapes).AllocatorInstance.Data;
  (param_1->IncorrectZoneModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->IncorrectZoneModelWeightsShapes).ArrayNum =
       (param_1->IncorrectZoneModelWeightsShapes).ArrayNum;
  (this->IncorrectZoneModelWeightsShapes).ArrayMax =
       (param_1->IncorrectZoneModelWeightsShapes).ArrayMax;
  (param_1->IncorrectZoneModelWeightsShapes).ArrayNum = 0;
  (param_1->IncorrectZoneModelWeightsShapes).ArrayMax = 0;
  this->bUseIncorrectZoneModel = param_1->bUseIncorrectZoneModel;
  uVar6 = *(undefined8 *)&(param_1->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMin = *(undefined8 *)&(param_1->LocalBoundingBox).MMin;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8 = uVar6;
  *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(param_1->LocalBoundingBox).MMin.field_0x10;
  uVar6 = *(undefined8 *)&(param_1->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(this->LocalBoundingBox).MMax = *(undefined8 *)&(param_1->LocalBoundingBox).MMax;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8 = uVar6;
  *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(param_1->LocalBoundingBox).MMax.field_0x10;
  this->SignedDistanceScaling = param_1->SignedDistanceScaling;
  *(undefined8 *)&(this->TrainingGridMin).field0_0x0 =
       *(undefined8 *)&(param_1->TrainingGridMin).field0_0x0;
  (this->TrainingGridMin).field0_0x0._s_0.Z = (param_1->TrainingGridMin).field0_0x0._s_0.Z;
  (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data =
       (param_1->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  (param_1->TrainingGridUnitAxesXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridUnitAxesXYZ).ArrayNum = (param_1->TrainingGridUnitAxesXYZ).ArrayNum;
  (this->TrainingGridUnitAxesXYZ).ArrayMax = (param_1->TrainingGridUnitAxesXYZ).ArrayMax;
  (param_1->TrainingGridUnitAxesXYZ).ArrayNum = 0;
  (param_1->TrainingGridUnitAxesXYZ).ArrayMax = 0;
  (this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data =
       (param_1->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data;
  (param_1->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrainingGridAxesLengthsXYZ).ArrayNum = (param_1->TrainingGridAxesLengthsXYZ).ArrayNum;
  (this->TrainingGridAxesLengthsXYZ).ArrayMax = (param_1->TrainingGridAxesLengthsXYZ).ArrayMax;
  (param_1->TrainingGridAxesLengthsXYZ).ArrayNum = 0;
  (param_1->TrainingGridAxesLengthsXYZ).ArrayMax = 0;
  iVar3 = param_1->TotalNumberOfRotationComponents;
  (this->ActiveBonesRotationComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TotalNumberOfRotationComponents = iVar3;
  (this->ActiveBonesRotationComponents).AllocatorInstance.Data =
       (param_1->ActiveBonesRotationComponents).AllocatorInstance.Data;
  (param_1->ActiveBonesRotationComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesRotationComponents).ArrayNum = (param_1->ActiveBonesRotationComponents).ArrayNum
  ;
  (this->ActiveBonesRotationComponents).ArrayMax = (param_1->ActiveBonesRotationComponents).ArrayMax
  ;
  (param_1->ActiveBonesRotationComponents).ArrayNum = 0;
  (param_1->ActiveBonesRotationComponents).ArrayMax = 0;
  (this->ActiveBonesReferenceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceRotations).AllocatorInstance.Data =
       (param_1->ActiveBonesReferenceRotations).AllocatorInstance.Data;
  (param_1->ActiveBonesReferenceRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceRotations).ArrayNum = (param_1->ActiveBonesReferenceRotations).ArrayNum
  ;
  (this->ActiveBonesReferenceRotations).ArrayMax = (param_1->ActiveBonesReferenceRotations).ArrayMax
  ;
  (param_1->ActiveBonesReferenceRotations).ArrayNum = 0;
  (param_1->ActiveBonesReferenceRotations).ArrayMax = 0;
  (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data =
       (param_1->ActiveBonesReferenceTranslations).AllocatorInstance.Data;
  (param_1->ActiveBonesReferenceTranslations).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveBonesReferenceTranslations).ArrayNum =
       (param_1->ActiveBonesReferenceTranslations).ArrayNum;
  (this->ActiveBonesReferenceTranslations).ArrayMax =
       (param_1->ActiveBonesReferenceTranslations).ArrayMax;
  (param_1->ActiveBonesReferenceTranslations).ArrayNum = 0;
  (param_1->ActiveBonesReferenceTranslations).ArrayMax = 0;
  uVar6 = *(undefined8 *)&(param_1->DebugGrid).field_0x8;
  *(undefined8 *)&this->DebugGrid = *(undefined8 *)&param_1->DebugGrid;
  *(undefined8 *)&(this->DebugGrid).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&(param_1->DebugGrid).field_0x18;
  *(undefined8 *)&(this->DebugGrid).field_0x10 = *(undefined8 *)&(param_1->DebugGrid).field_0x10;
  *(undefined8 *)&(this->DebugGrid).field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&(param_1->DebugGrid).field_0x28;
  *(undefined8 *)&(this->DebugGrid).field_0x20 = *(undefined8 *)&(param_1->DebugGrid).field_0x20;
  *(undefined8 *)&(this->DebugGrid).field_0x28 = uVar6;
  uVar6 = *(undefined8 *)&(param_1->DebugGrid).field_0x38;
  *(undefined8 *)&(this->DebugGrid).field_0x30 = *(undefined8 *)&(param_1->DebugGrid).field_0x30;
  *(undefined8 *)&(this->DebugGrid).field_0x38 = uVar6;
  uVar6 = *(undefined8 *)&(param_1->DebugGrid).field_0x48;
  *(undefined8 *)&(this->DebugGrid).field_0x40 = *(undefined8 *)&(param_1->DebugGrid).field_0x40;
  *(undefined8 *)&(this->DebugGrid).field_0x48 = uVar6;
  *(undefined8 *)&(this->DebugGrid).field_0x50 = *(undefined8 *)&(param_1->DebugGrid).field_0x50;
  *(undefined8 *)&this->DebugPhi = *(undefined8 *)&param_1->DebugPhi;
  *(undefined4 *)&(this->DebugPhi).field_0x8 = *(undefined4 *)&(param_1->DebugPhi).field_0x8;
  *(undefined8 *)&(this->DebugPhi).field_0x10 = 0;
  *(undefined8 *)&(this->DebugPhi).field_0x10 = *(undefined8 *)&(param_1->DebugPhi).field_0x10;
  *(undefined8 *)&(param_1->DebugPhi).field_0x10 = 0;
  *(undefined4 *)&(this->DebugPhi).field_0x18 = *(undefined4 *)&(param_1->DebugPhi).field_0x18;
  *(undefined4 *)&(this->DebugPhi).field_0x1c = *(undefined4 *)&(param_1->DebugPhi).field_0x1c;
  *(undefined8 *)&(param_1->DebugPhi).field_0x18 = 0;
  return this;
}

// ~FMLLevelSet @ 143be2d60

void __thiscall Chaos::FMLLevelSet::~FMLLevelSet(FMLLevelSet *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMLLevelSet_Chaos__6B_;
  pvVar1 = *(void **)&(this->DebugPhi).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveBonesReferenceRotations).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->ActiveBonesRotationComponents).AllocatorInstance.Data,
             (this->ActiveBonesRotationComponents).ArrayNum);
  pFVar2 = (this->ActiveBonesRotationComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->IncorrectZoneModelWeightsShapes).AllocatorInstance.Data,
             (this->IncorrectZoneModelWeightsShapes).ArrayNum);
  pFVar2 = (this->IncorrectZoneModelWeightsShapes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->IncorrectZoneModelWeights).AllocatorInstance.Data,
             (this->IncorrectZoneModelWeights).ArrayNum);
  pFVar2 = (this->IncorrectZoneModelWeights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Chaos::FMLLevelSetNeuralInference,int>
            ((FMLLevelSetNeuralInference *)
             (this->IncorrectZoneNeuralInferences).AllocatorInstance.Data,
             (this->IncorrectZoneNeuralInferences).ArrayNum);
  pFVar2 = (this->IncorrectZoneNeuralInferences).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController);
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->SignedDistanceModelWeightsShapes).AllocatorInstance.Data,
             (this->SignedDistanceModelWeightsShapes).ArrayNum);
  pFVar2 = (this->SignedDistanceModelWeightsShapes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->SignedDistanceModelWeights).AllocatorInstance.Data,
             (this->SignedDistanceModelWeights).ArrayNum);
  pFVar2 = (this->SignedDistanceModelWeights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<Chaos::FMLLevelSetNeuralInference,int>
            ((FMLLevelSetNeuralInference *)
             (this->SignedDistanceNeuralInferences).AllocatorInstance.Data,
             (this->SignedDistanceNeuralInferences).ArrayNum);
  pFVar2 = (this->SignedDistanceNeuralInferences).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveBoneNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FImplicitObject::~FImplicitObject((FImplicitObject *)this);
  return;
}

// BatchPhiWithNormal @ 143bef3f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FMLLevelSet::BatchPhiWithNormal
          (FMLLevelSet *this,TArrayView<Chaos::Softs::FPAndInvM_const_,int> *param_1,
          TRigidTransform<float,3> *param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,float param_5,
          int param_6,int param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  double *pdVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar39;
  double dVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  longlong local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_298;
  TArray<int,TSizedDefaultAllocator<32>_> local_288;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_278;
  undefined4 local_268;
  int local_264;
  undefined1 *local_260;
  ulonglong local_258;
  ulonglong local_250;
  longlong local_248;
  FScriptContainerElement *local_240;
  longlong local_238;
  TArray<float,TAlignedHeapAllocator<64>_> local_230;
  TArray<int,TSizedDefaultAllocator<32>_> local_220;
  TArray<float,TAlignedHeapAllocator<64>_> local_210;
  FScriptContainerElement *local_200;
  TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<float,TAlignedHeapAllocator<64>_> local_1e0;
  uint local_1d0;
  FPAndInvM *local_1c8;
  TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> local_1c0;
  TArray<float,TAlignedHeapAllocator<64>_> local_1b0;
  TArray<float,TAlignedHeapAllocator<64>_> local_1a0;
  TArray<float,TAlignedHeapAllocator<64>_> local_190;
  undefined8 local_180;
  float local_178;
  undefined8 local_174;
  float local_16c;
  undefined8 local_168;
  float local_160;
  double local_158 [3];
  FScriptContainerElement *local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId573,"FMLLevelSet_BatchPhiWithNormal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\MLLevelset.cpp"
               ,0x23d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId573);
  }
  fVar42 = this->SignedDistanceScaling;
  local_1c8 = param_1->DataPtr;
  uVar18 = (ulonglong)param_7;
  fVar47 = fVar42 * __real_3c23d70a;
  uVar23 = param_8 - param_7;
  local_240 = (param_3->AllocatorInstance).Data;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_140 = (param_4->AllocatorInstance).Data;
  local_1d0 = uVar23;
  TArray<float,TAlignedHeapAllocator<64>_>::SetNum(&local_1e0,uVar23 * 3,Default);
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.ArrayNum = 0;
  local_220.ArrayMax = 0;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (0 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar23,&local_220.AllocatorInstance,0,&local_220.ArrayMax);
  }
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  ComputeWeightsInput(this,&this->ActiveBonesRelativeTransforms,&this->SignedDistanceModelWeights,
                      &this->SignedDistanceModelWeightsShapes,&local_1f0);
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_278,3,Default);
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  if (((this->TrainingGridAxesLengthsXYZ).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar48 = __real_3f800000;
  fVar43 = __real_3f800000 / *(float *)(this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data;
  fVar29 = *(float *)pFVar4;
  fVar44 = *(float *)(pFVar4 + 4);
  fVar45 = *(float *)(pFVar4 + 8);
  if ((local_278.ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(float *)local_278.AllocatorInstance.Data = fVar43 * fVar29;
  *(float *)(local_278.AllocatorInstance.Data + 4) = fVar43 * fVar44;
  *(float *)(local_278.AllocatorInstance.Data + 8) = fVar43 * fVar45;
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  if (((this->TrainingGridAxesLengthsXYZ).ArrayNum < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar43 = fVar48 / *(float *)((this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data + 4);
  fVar29 = *(float *)(pFVar4 + 0xc);
  fVar44 = *(float *)(pFVar4 + 0x10);
  fVar45 = *(float *)(pFVar4 + 0x14);
  if ((local_278.ArrayNum < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_250 = 2;
  *(float *)(local_278.AllocatorInstance.Data + 0xc) = fVar43 * fVar29;
  *(float *)(local_278.AllocatorInstance.Data + 0x10) = fVar43 * fVar44;
  *(float *)(local_278.AllocatorInstance.Data + 0x14) = fVar43 * fVar45;
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum < 3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  if (((this->TrainingGridAxesLengthsXYZ).ArrayNum < 3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar43 = fVar48 / *(float *)((this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data + 8);
  fVar29 = *(float *)(pFVar4 + 0x18);
  fVar44 = *(float *)(pFVar4 + 0x1c);
  fVar45 = *(float *)(pFVar4 + 0x20);
  if ((local_278.ArrayNum < 3) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar20 = 0;
  param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0;
  *(float *)(local_278.AllocatorInstance.Data + 0x18) = fVar43 * fVar29;
  *(float *)(local_278.AllocatorInstance.Data + 0x1c) = fVar43 * fVar44;
  *(float *)(local_278.AllocatorInstance.Data + 0x20) = fVar43 * fVar45;
  if (param_7 < param_8) {
    local_248 = uVar18 * 4;
    local_238 = 0;
    lVar22 = 0;
    local_264 = 0;
    puVar25 = &local_1c8[uVar18].P.field_0x4;
    local_258 = uVar18;
    do {
      lVar24 = local_248;
      uVar15 = (uint)uVar18;
      uVar23 = 0;
      if ((int)uVar15 < param_3->ArrayNum) {
        uVar23 = ~uVar15 >> 0x1f;
      }
      local_260 = puVar25;
      if ((uVar23 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)((param_3->AllocatorInstance).Data + lVar24) = fVar42 + fVar42;
      if (*(float *)(puVar25 + 8) != 0.0) {
        fVar29 = *(float *)(puVar25 + 4);
        pdVar21 = local_158;
        iVar17 = 0;
        fVar41 = (float)*(undefined8 *)(puVar25 + -4);
        fVar33 = (float)((ulonglong)*(undefined8 *)(puVar25 + -4) >> 0x20);
        fVar44 = *(float *)param_2;
        fVar45 = *(float *)&param_2->field_0x4;
        fVar43 = *(float *)&param_2->field_0x8;
        fVar46 = *(float *)&param_2->field_0xc;
        fVar37 = fVar33 * fVar44 - fVar45 * fVar41;
        fVar39 = fVar29 * fVar45 - fVar43 * fVar33;
        fVar40 = fVar41 * fVar43 - fVar44 * fVar29;
        fVar39 = fVar39 + fVar39;
        fVar40 = fVar40 + fVar40;
        fVar37 = fVar37 + fVar37;
        fVar41 = fVar46 * fVar39 + fVar41 + (fVar37 * fVar45 - fVar40 * fVar43) +
                 *(float *)&param_2->field_0x10;
        fVar43 = fVar46 * fVar40 + fVar33 + (fVar39 * fVar43 - fVar37 * fVar44) +
                 *(float *)&param_2->field_0x14;
        local_180 = CONCAT44(fVar43,fVar41);
        local_178 = fVar46 * fVar37 + fVar29 + (fVar40 * fVar44 - fVar39 * fVar45) +
                    *(float *)&param_2->field_0x18;
        local_158[0] = (double)fVar41;
        local_158[2] = (double)local_178;
        local_158[1] = (double)fVar43;
        do {
          dVar34 = *pdVar21;
          puVar25 = local_260;
          uVar15 = param_7;
          uVar20 = (uint)param_4;
          if ((dVar34 < *(double *)
                         ((longlong)pdVar21 + (longlong)this + (200 - (longlong)local_158))) ||
             (dVar30 = UE::Math::TVector<double>::Component
                                 ((TVector<double> *)&(this->LocalBoundingBox).MMax,iVar17),
             puVar25 = local_260, dVar30 < dVar34)) goto LAB_143befd80;
          iVar17 = iVar17 + 1;
          pdVar21 = pdVar21 + 1;
        } while (iVar17 < 3);
        if (((this->ActiveBonesRelativeTransforms).ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data;
        dVar34 = *(double *)(pFVar4 + 0x20);
        dVar30 = *(double *)(pFVar4 + 0x28);
        dVar35 = *(double *)(pFVar4 + 0x30);
        local_128 = dVar35;
        local_138 = dVar34;
        dStack_130 = dVar30;
        if (((this->ActiveBonesReferenceTranslations).ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar17 = local_264;
        pFVar4 = (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data;
        iVar19 = 0;
        lVar24 = 0;
        local_200 = *(FScriptContainerElement **)pFVar4;
        dVar34 = local_158[0] -
                 (double)(((float)dVar34 - SUB84(local_200,0)) +
                         (this->TrainingGridMin).field0_0x0._s_0.X);
        dVar30 = local_158[1] -
                 (double)(((float)dVar30 - (float)((ulonglong)local_200 >> 0x20)) +
                         (this->TrainingGridMin).field0_0x0._s_0.Y);
        dVar35 = local_158[2] -
                 (double)(((float)dVar35 - *(float *)(pFVar4 + 8)) +
                         (this->TrainingGridMin).field0_0x0._s_0.Z);
        do {
          if (local_278.ArrayNum <= iVar19) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          local_200 = local_278.AllocatorInstance.Data;
          iVar12 = local_278.ArrayNum;
          if (local_278.ArrayNum <= iVar19) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = local_278.ArrayNum;
          }
          FVar8.Data = local_278.AllocatorInstance.Data;
          if ((iVar12 <= iVar19) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar29 = *(float *)(FVar8.Data + lVar24 + 4);
          fVar44 = *(float *)(local_200 + lVar24);
          fVar45 = *(float *)(local_278.AllocatorInstance.Data + lVar24 + 8);
          uVar23 = 0;
          if (iVar19 + iVar17 < local_1e0.ArrayNum) {
            uVar23 = (uint)~(iVar19 + iVar17) >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar19 = iVar19 + 1;
          lVar24 = lVar24 + 0xc;
          *(float *)(local_1e0.AllocatorInstance.Data + lVar22) =
               (float)dVar30 * fVar29 + (float)dVar34 * fVar44 + (float)dVar35 * fVar45;
          lVar22 = lVar22 + 4;
        } while (iVar19 < 3);
        uVar23 = 0;
        if ((int)(uint)param_4 < local_220.ArrayNum) {
          uVar23 = ~(uint)param_4 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar20 = (uint)param_4 + 1;
        local_264 = local_264 + 3;
        param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar20;
        *(int *)(local_220.AllocatorInstance.Data + local_238) = param_7;
        local_238 = local_238 + 4;
        puVar25 = local_260;
      }
LAB_143befd80:
      local_248 = local_248 + 4;
      param_7 = uVar15 + 1;
      uVar18 = (ulonglong)(uint)param_7;
      local_258 = local_258 + 1;
      puVar25 = puVar25 + 0x10;
      uVar23 = local_1d0;
      local_260 = puVar25;
    } while (param_7 < param_8);
  }
  TArray<float,TAlignedHeapAllocator<64>_>::SetNum(&local_1e0,uVar20 * 3,Default);
  TArray<float,TAlignedHeapAllocator<64>_>::SetNum(&local_190,uVar20,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_220,uVar20,Default);
  lVar22 = (longlong)param_6;
  uVar15 = (uint)~param_6 >> 0x1f;
  uVar20 = 0;
  if (param_6 < (this->SignedDistanceNeuralInferences).ArrayNum) {
    uVar20 = uVar15;
  }
  if ((uVar20 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar24 = lVar22 * 0x30;
  local_260 = (undefined1 *)lVar24;
  local_248 = lVar22;
  if (*(longlong *)((this->SignedDistanceNeuralInferences).AllocatorInstance.Data + lVar24 + 0x10)
      != 0) {
    uVar20 = 0;
    if (param_6 < (this->SignedDistanceNeuralInferences).ArrayNum) {
      uVar20 = uVar15;
    }
    if ((uVar20 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FMLLevelSetNeuralInference::RunInference
              ((FMLLevelSetNeuralInference *)
               ((this->SignedDistanceNeuralInferences).AllocatorInstance.Data + lVar24),&local_1e0,
               &local_190,3,1,&local_1f0);
  }
  local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.ArrayNum = 0;
  local_298.ArrayMax = 0;
  local_268 = 0xffffffff;
  if ((uVar23 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar23,&local_298.AllocatorInstance,0,&local_298.ArrayMax), 0 < (int)uVar23)) {
    uVar18 = (ulonglong)uVar23;
    do {
      if (((local_298.AllocatorInstance.Data <= (FScriptContainerElement *)&local_268) &&
          ((FScriptContainerElement *)&local_268 <
           local_298.AllocatorInstance.Data + (longlong)local_298.ArrayMax * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_298.ArrayNum == local_298.ArrayMax) {
        local_298.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_298.AllocatorInstance,&local_298.ArrayMax);
      }
      uVar23 = local_298.ArrayNum + 1;
      *(undefined4 *)(local_298.AllocatorInstance.Data + (longlong)local_298.ArrayNum * 4) =
           local_268;
      uVar18 = uVar18 - 1;
      local_298.ArrayNum = uVar23;
    } while (uVar18 != 0);
  }
  pFVar4 = local_240;
  uVar20 = 0;
  uVar23 = 0;
  if (0 < local_220.ArrayNum) {
    lVar22 = 0;
    local_res20 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar23 < local_220.ArrayNum) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar17 = *(int *)(local_220.AllocatorInstance.Data + lVar22);
      uVar13 = 0;
      if ((int)uVar23 < local_190.ArrayNum) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar29 = *(float *)(local_190.AllocatorInstance.Data + lVar22) * this->SignedDistanceScaling;
      *(float *)(pFVar4 + (longlong)iVar17 * 4) = fVar29;
      if (fVar29 < param_5) {
        uVar13 = 0;
        if ((int)uVar20 < local_298.ArrayNum) {
          uVar13 = ~uVar20 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar20 = uVar20 + 1;
        *(int *)(local_298.AllocatorInstance.Data + local_res20) = iVar17;
        local_res20 = local_res20 + 4;
      }
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 4;
    } while ((int)uVar23 < local_220.ArrayNum);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_298,uVar20,Default);
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  param_8 = 0;
  if (this->bUseIncorrectZoneModel == false) {
    local_288.AllocatorInstance.Data = local_298.AllocatorInstance.Data;
    local_288.ArrayMax = local_298.ArrayMax;
    local_288.ArrayNum = local_298.ArrayNum;
    local_298.ArrayNum = 0;
    local_298.ArrayMax = 0;
    local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    goto LAB_143bf08df;
  }
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  TArray<float,TAlignedHeapAllocator<64>_>::SetNumUninitialized
            (&local_1a0,local_298.ArrayNum * 3,Default);
  TArray<float,TAlignedHeapAllocator<64>_>::SetNumUninitialized
            (&local_1b0,local_298.ArrayNum,Default);
  iVar17 = local_298.ArrayNum;
  uVar18 = (ulonglong)local_298.ArrayNum;
  if (local_288.ArrayNum < local_298.ArrayNum) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_298.ArrayNum - local_288.ArrayNum,&local_288.AllocatorInstance,
               &local_288.ArrayNum,&local_288.ArrayMax);
LAB_143bf02ac:
    uVar16 = (ulonglong)(uint)local_298.ArrayNum;
  }
  else {
    if (local_298.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_298.ArrayNum);
    }
    uVar16 = uVar18;
    if (local_298.ArrayNum < local_288.ArrayNum) {
      uVar23 = local_288.ArrayNum - local_298.ArrayNum;
      if ((int)(local_298.ArrayNum | uVar23) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar16 = (ulonglong)(uint)local_298.ArrayNum;
      }
      if (uVar23 != 0) {
        iVar19 = (local_288.ArrayNum - iVar17) - uVar23;
        iVar17 = local_288.ArrayNum;
        if (iVar19 != 0) {
          memmove(local_288.AllocatorInstance.Data + uVar18 * 4,
                  local_288.AllocatorInstance.Data + uVar18 * 4 + (longlong)(int)uVar23 * 4,
                  (longlong)iVar19 << 2);
          iVar17 = local_288.ArrayNum;
        }
        local_288.ArrayNum = iVar17 - uVar23;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_288.AllocatorInstance,iVar17 - uVar23,&local_288.ArrayMax);
        goto LAB_143bf02ac;
      }
    }
  }
  if (0 < (int)uVar16) {
    lVar22 = 0;
    uVar23 = 0;
    iVar17 = 0;
    local_238 = 0;
    do {
      lVar24 = local_238;
      uVar18 = 0;
      uVar20 = 0;
      if ((int)uVar23 < (int)uVar16) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar29 = *(float *)&local_1c8[*(int *)(local_298.AllocatorInstance.Data + lVar24)].P.field_0x8
      ;
      fVar41 = (float)*(undefined8 *)
                       &local_1c8[*(int *)(local_298.AllocatorInstance.Data + lVar24)].P;
      fVar33 = (float)((ulonglong)
                       *(undefined8 *)
                        &local_1c8[*(int *)(local_298.AllocatorInstance.Data + lVar24)].P >> 0x20);
      fVar44 = *(float *)param_2;
      fVar45 = *(float *)&param_2->field_0x4;
      fVar43 = *(float *)&param_2->field_0x8;
      fVar46 = *(float *)&param_2->field_0xc;
      fVar37 = fVar33 * fVar44 - fVar45 * fVar41;
      fVar39 = fVar29 * fVar45 - fVar43 * fVar33;
      fVar40 = fVar41 * fVar43 - fVar44 * fVar29;
      fVar39 = fVar39 + fVar39;
      fVar40 = fVar40 + fVar40;
      fVar37 = fVar37 + fVar37;
      fVar41 = fVar46 * fVar39 + fVar41 + (fVar37 * fVar45 - fVar40 * fVar43) +
               *(float *)&param_2->field_0x10;
      fVar43 = fVar46 * fVar40 + fVar33 + (fVar39 * fVar43 - fVar37 * fVar44) +
               *(float *)&param_2->field_0x14;
      local_174 = CONCAT44(fVar43,fVar41);
      fVar29 = fVar46 * fVar37 + fVar29 + (fVar40 * fVar44 - fVar39 * fVar45) +
               *(float *)&param_2->field_0x18;
      local_16c = fVar29;
      if (((this->ActiveBonesRelativeTransforms).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data;
      local_120 = *(double *)(pFVar4 + 0x20);
      dStack_118 = *(double *)(pFVar4 + 0x28);
      local_110 = *(double *)(pFVar4 + 0x30);
      fVar44 = (float)local_120;
      fVar45 = (float)dStack_118;
      fVar46 = (float)local_110;
      if (((this->ActiveBonesReferenceTranslations).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data;
      local_200 = *(FScriptContainerElement **)pFVar4;
      fVar37 = *(float *)(pFVar4 + 8);
      fVar32 = SUB84(local_200,0);
      fVar39 = (this->TrainingGridMin).field0_0x0._s_0.Z;
      fVar40 = (this->TrainingGridMin).field0_0x0._s_0.X;
      uVar16 = (ulonglong)local_200 >> 0x20;
      fVar33 = (this->TrainingGridMin).field0_0x0._s_0.Y;
      uVar26 = uVar18;
      do {
        iVar19 = (int)uVar18;
        if (local_278.ArrayNum <= iVar19) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FVar8.Data = local_278.AllocatorInstance.Data;
        iVar12 = local_278.ArrayNum;
        if (local_278.ArrayNum <= iVar19) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = local_278.ArrayNum;
        }
        FVar9.Data = local_278.AllocatorInstance.Data;
        if ((iVar12 <= iVar19) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar1 = *(float *)(FVar9.Data + uVar26 + 4);
        fVar2 = *(float *)(FVar8.Data + uVar26);
        fVar3 = *(float *)(local_278.AllocatorInstance.Data + uVar26 + 8);
        uVar20 = 0;
        if (iVar19 + iVar17 < local_1a0.ArrayNum) {
          uVar20 = (uint)~(iVar19 + iVar17) >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = (ulonglong)(iVar19 + 1U);
        uVar26 = uVar26 + 0xc;
        *(float *)(local_1a0.AllocatorInstance.Data + lVar22) =
             (fVar43 - ((fVar45 - (float)uVar16) + fVar33)) * fVar1 +
             (fVar41 - ((fVar44 - fVar32) + fVar40)) * fVar2 +
             (fVar29 - ((fVar46 - fVar37) + fVar39)) * fVar3;
        lVar22 = lVar22 + 4;
      } while ((int)(iVar19 + 1U) < 3);
      iVar17 = iVar17 + 3;
      uVar16 = (ulonglong)(uint)local_298.ArrayNum;
      local_238 = local_238 + 4;
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < local_298.ArrayNum);
  }
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  ComputeWeightsInput(this,&this->ActiveBonesRelativeTransforms,&this->IncorrectZoneModelWeights,
                      &this->IncorrectZoneModelWeightsShapes,&local_1c0);
  uVar23 = 0;
  if (param_6 < (this->IncorrectZoneNeuralInferences).ArrayNum) {
    uVar23 = uVar15;
  }
  if ((uVar23 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FMLLevelSetNeuralInference::RunInference
            ((FMLLevelSetNeuralInference *)
             ((this->IncorrectZoneNeuralInferences).AllocatorInstance.Data + (longlong)local_260),
             &local_1a0,&local_1b0,3,1,&local_1c0);
  pFVar4 = local_240;
  uVar23 = 0;
  if (0 < local_298.ArrayNum) {
    lVar22 = 0;
    lVar24 = 0;
    param_8 = uVar23;
    do {
      uVar20 = 0;
      if ((int)uVar23 < local_298.ArrayNum) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar17 = *(int *)(local_298.AllocatorInstance.Data + lVar24);
      uVar20 = 0;
      if ((int)uVar23 < local_1b0.ArrayNum) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(float *)(local_1b0.AllocatorInstance.Data + lVar24) <= 0.0) {
        *(float *)(pFVar4 + (longlong)iVar17 * 4) = fVar42 + fVar42;
      }
      else {
        uVar20 = 0;
        if (param_8 < local_288.ArrayNum) {
          uVar20 = (uint)~param_8 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        param_8 = param_8 + 1;
        *(int *)(local_288.AllocatorInstance.Data + lVar22) = iVar17;
        lVar22 = lVar22 + 4;
      }
      uVar23 = uVar23 + 1;
      lVar24 = lVar24 + 4;
    } while ((int)uVar23 < local_298.ArrayNum);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_288,param_8,Default);
  DestructItems<TArray<float,TAlignedHeapAllocator<64>_>,int>
            ((TArray<float,TAlignedHeapAllocator<64>_> *)local_1c0.AllocatorInstance.Data,
             local_1c0.ArrayNum);
  if ((TArray<float,TAlignedHeapAllocator<64>_> *)local_1c0.AllocatorInstance.Data !=
      (TArray<float,TAlignedHeapAllocator<64>_> *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
LAB_143bf08df:
  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.ArrayNum = 0;
  local_210.ArrayMax = 0;
  TArray<float,TAlignedHeapAllocator<64>_>::SetNum(&local_210,local_288.ArrayNum * 9,Default);
  local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.ArrayNum = 0;
  local_230.ArrayMax = 0;
  TArray<float,TAlignedHeapAllocator<64>_>::SetNum(&local_230,local_288.ArrayNum * 3,Default);
  uVar23 = 0;
  if (0 < local_288.ArrayNum) {
    iVar17 = 0;
    local_res20 = 0;
    do {
      uVar20 = 0;
      if ((int)uVar23 < local_288.ArrayNum) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar42 = *(float *)&local_1c8[*(int *)(local_288.AllocatorInstance.Data + local_res20)].P.
                          field_0x8;
      fVar40 = (float)*(undefined8 *)
                       &local_1c8[*(int *)(local_288.AllocatorInstance.Data + local_res20)].P;
      fVar41 = (float)((ulonglong)
                       *(undefined8 *)
                        &local_1c8[*(int *)(local_288.AllocatorInstance.Data + local_res20)].P >>
                      0x20);
      fVar29 = *(float *)param_2;
      fVar44 = *(float *)&param_2->field_0x4;
      fVar45 = *(float *)&param_2->field_0x8;
      fVar43 = *(float *)&param_2->field_0xc;
      fVar46 = fVar41 * fVar29 - fVar44 * fVar40;
      fVar37 = fVar42 * fVar44 - fVar45 * fVar41;
      fVar39 = fVar40 * fVar45 - fVar29 * fVar42;
      fVar37 = fVar37 + fVar37;
      fVar39 = fVar39 + fVar39;
      fVar46 = fVar46 + fVar46;
      fVar40 = fVar43 * fVar37 + fVar40 + (fVar46 * fVar44 - fVar39 * fVar45) +
               *(float *)&param_2->field_0x10;
      fVar45 = fVar43 * fVar39 + fVar41 + (fVar37 * fVar45 - fVar46 * fVar29) +
               *(float *)&param_2->field_0x14;
      local_168 = CONCAT44(fVar45,fVar40);
      fVar42 = fVar43 * fVar46 + fVar42 + (fVar39 * fVar29 - fVar37 * fVar44) +
               *(float *)&param_2->field_0x18;
      local_160 = fVar42;
      if (((this->ActiveBonesRelativeTransforms).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data;
      local_108 = *(double *)(pFVar4 + 0x20);
      dStack_100 = *(double *)(pFVar4 + 0x28);
      local_f8 = *(double *)(pFVar4 + 0x30);
      fVar29 = (float)local_108;
      fVar44 = (float)dStack_100;
      fVar43 = (float)local_f8;
      if (((this->ActiveBonesReferenceTranslations).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data;
      param_8 = 0;
      local_200 = *(FScriptContainerElement **)pFVar4;
      fVar46 = *(float *)(pFVar4 + 8);
      fVar33 = SUB84(local_200,0);
      fVar37 = (this->TrainingGridMin).field0_0x0._s_0.Z;
      fVar39 = (this->TrainingGridMin).field0_0x0._s_0.X;
      uVar18 = (ulonglong)local_200 >> 0x20;
      fVar41 = (this->TrainingGridMin).field0_0x0._s_0.Y;
      do {
        uVar20 = 0;
        do {
          if (((this->TrainingGridUnitAxesXYZ).ArrayNum <= (int)uVar20) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
          lVar22 = (longlong)(int)uVar20;
          fVar32 = *(float *)(pFVar4 + lVar22 * 0xc + 4);
          fVar1 = *(float *)(pFVar4 + lVar22 * 0xc);
          fVar2 = *(float *)(pFVar4 + lVar22 * 0xc + 8);
          if (((this->TrainingGridAxesLengthsXYZ).ArrayNum <= (int)uVar20) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar13 = iVar17 + uVar20;
          fVar3 = *(float *)((this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data + lVar22 * 4)
          ;
          uVar14 = 0;
          if ((int)uVar13 < local_210.ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar24 = (longlong)(int)uVar13;
          *(float *)(local_210.AllocatorInstance.Data + lVar24 * 4) =
               ((fVar45 - ((fVar44 - (float)uVar18) + fVar41)) * fVar32 +
                (fVar40 - ((fVar29 - fVar33) + fVar39)) * fVar1 +
               (fVar42 - ((fVar43 - fVar46) + fVar37)) * fVar2) / fVar3;
          if (((this->TrainingGridUnitAxesXYZ).ArrayNum <= (int)uVar20) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
          if (((this->TrainingGridAxesLengthsXYZ).ArrayNum <= (int)uVar20) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar32 = *(float *)(pFVar4 + ((longlong)param_8 + lVar22 * 3) * 4);
          fVar1 = *(float *)((this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data + lVar22 * 4)
          ;
          uVar14 = 0;
          if ((int)uVar13 < local_210.ArrayNum) {
            uVar14 = ~uVar13 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar20 = uVar20 + 1;
          *(float *)(local_210.AllocatorInstance.Data + lVar24 * 4) =
               (fVar47 * fVar32) / fVar1 + *(float *)(local_210.AllocatorInstance.Data + lVar24 * 4)
          ;
        } while (uVar20 < 3);
        param_8 = param_8 + 1;
        iVar17 = iVar17 + 3;
      } while ((uint)param_8 < 3);
      uVar23 = uVar23 + 1;
      local_res20 = local_res20 + 4;
    } while ((int)uVar23 < local_288.ArrayNum);
  }
  uVar23 = 0;
  if (param_6 < (this->SignedDistanceNeuralInferences).ArrayNum) {
    uVar23 = uVar15;
  }
  iVar17 = local_288.ArrayNum;
  if (uVar23 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar17 = local_288.ArrayNum;
  }
  puVar25 = local_260;
  if (*(longlong *)
       ((this->SignedDistanceNeuralInferences).AllocatorInstance.Data + (longlong)local_260 + 0x10)
      != 0) {
    uVar23 = 0;
    if (param_6 < (this->SignedDistanceNeuralInferences).ArrayNum) {
      uVar23 = uVar15;
    }
    if ((uVar23 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FMLLevelSetNeuralInference::RunInference
              ((FMLLevelSetNeuralInference *)
               ((this->SignedDistanceNeuralInferences).AllocatorInstance.Data + (longlong)puVar25),
               &local_210,&local_230,3,1,&local_1f0);
    iVar17 = local_288.ArrayNum;
  }
  dVar30 = __real_3e45798ee2308c3a;
  dVar34 = __real_3ff0000000000000;
  uVar23 = 0;
  if (0 < iVar17) {
    lVar22 = 0;
    lVar24 = 8;
    fVar48 = fVar48 / fVar47;
    do {
      uVar20 = 0;
      if ((int)uVar23 < iVar17) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar17 = local_230.ArrayNum;
      lVar27 = (longlong)*(int *)(local_288.AllocatorInstance.Data + lVar22);
      uVar20 = 0;
      if ((int)local_250 + -2 < local_230.ArrayNum) {
        uVar20 = ~((int)local_250 - 2U) >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar10.Data = local_230.AllocatorInstance.Data;
      dVar35 = (double)((*(float *)(local_230.AllocatorInstance.Data + lVar24 + -8) *
                         this->SignedDistanceScaling - *(float *)(local_240 + lVar27 * 4)) * fVar48)
      ;
      uVar20 = 0;
      if ((int)local_250 + -1 < iVar17) {
        uVar20 = ~((int)local_250 - 1U) >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar15 = (uint)local_250;
      uVar20 = 0;
      if ((int)uVar15 < iVar17) {
        uVar20 = ~uVar15 >> 0x1f;
      }
      dVar7 = (double)((*(float *)(FVar10.Data + lVar24 + -4) * this->SignedDistanceScaling -
                       *(float *)(local_240 + lVar27 * 4)) * fVar48);
      if (uVar20 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar15 = (uint)local_250;
      }
      dVar38 = (double)((*(float *)(FVar10.Data + lVar24) * this->SignedDistanceScaling -
                        *(float *)(local_240 + lVar27 * 4)) * fVar48);
      auVar31._0_8_ = dVar35 * dVar35;
      auVar31._8_8_ = 0;
      dVar36 = dVar7 * dVar7 + auVar31._0_8_ + dVar38 * dVar38;
      if (dVar30 <= dVar36) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar36;
        auVar31 = sqrtpd(auVar31,auVar6);
        dVar36 = dVar34 / auVar31._0_8_;
        dVar35 = dVar35 * dVar36;
        dVar7 = dVar7 * dVar36;
        dVar38 = dVar38 * dVar36;
      }
      else {
        dVar7 = 0.0;
        dVar38 = 0.0;
        dVar35 = dVar34;
      }
      local_250 = (ulonglong)(uVar15 + 3);
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 4;
      lVar24 = lVar24 + 0xc;
      *(float *)(local_140 + lVar27 * 0xc) = (float)dVar35;
      *(float *)(local_140 + lVar27 * 0xc + 4) = (float)dVar7;
      *(float *)(local_140 + lVar27 * 0xc + 8) = (float)dVar38;
      iVar17 = local_288.ArrayNum;
    } while ((int)uVar23 < local_288.ArrayNum);
  }
  if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.AllocatorInstance.Data);
  }
  if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.AllocatorInstance.Data);
  }
  if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<64>_>,int>
            ((TArray<float,TAlignedHeapAllocator<64>_> *)local_1f0.AllocatorInstance.Data,
             local_1f0.ArrayNum);
  if ((TArray<float,TAlignedHeapAllocator<64>_> *)local_1f0.AllocatorInstance.Data !=
      (TArray<float,TAlignedHeapAllocator<64>_> *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.AllocatorInstance.Data);
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BoundingBox @ 143bf1270

TAABB<double,3> * __thiscall
Chaos::FMLLevelSet::BoundingBox(FMLLevelSet *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->LocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->LocalBoundingBox).MMax;
  uVar3 = *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// BuildNNEModel @ 143bf1430

/* WARNING: Removing unreachable block (ram,0x000143bf1687) */
/* WARNING: Removing unreachable block (ram,0x000143bf17e9) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FMLLevelSet::BuildNNEModel
          (FMLLevelSet *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TObjectPtr<UNNEModelData> param_2,FString *param_3,
          TSharedPtr<UE::NNE::IModelCPU,1> *param_4,
          TArray<Chaos::FMLLevelSetNeuralInference,TSizedDefaultAllocator<32>_> *param_5,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FMLLevelSetNeuralInference *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FString *pFVar12;
  TSharedPtr<UE::NNE::IModelCPU,1> *pTVar13;
  FMLLevelSetNeuralInference *pFVar14;
  FStaticBasicLogRecord *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  int *piVar19;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TWeakInterfacePtr<INNERuntimeCPU> local_c8;
  UObject *local_b8;
  TSharedPtr<UE::NNE::IModelCPU,1> local_b0;
  FString local_a0;
  undefined1 local_90 [8];
  TReferenceControllerBase<1> *local_88;
  FMLLevelSetNeuralInference local_80;
  
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(param_6->AllocatorInstance).Data,
             param_6->ArrayNum);
  uVar17 = 0;
  piVar1 = &param_6->ArrayMax;
  param_6->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_6->AllocatorInstance,0,piVar1);
  }
  iVar11 = param_1->ArrayNum;
  if (0 < iVar11 + -1) {
    lVar18 = 4;
    FVar7.Data = local_d8.Data;
    uVar8 = local_d0;
    do {
      local_d0 = uVar8;
      local_d8.Data = FVar7.Data;
      uVar10 = 0;
      if ((int)uVar17 < iVar11) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = uVar17 + 1;
      uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar18 + -4);
      uVar10 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar18);
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = CONCAT44(local_e0._4_4_,2);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,2,0,&local_e8,2,(int *)((longlong)&local_e0 + 4));
      *(ulonglong *)local_e8.Data = CONCAT44(uVar3,uVar2);
      pFVar16 = (param_6->AllocatorInstance).Data;
      if (((pFVar16 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = param_6->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_6->AllocatorInstance,piVar1);
      }
      param_6->ArrayNum = iVar11 + 1;
      pFVar16 = (param_6->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar16 = 0;
      *(FScriptContainerElement **)pFVar16 = local_e8.Data;
      *(undefined4 *)(pFVar16 + 8) = (undefined4)local_e0;
      *(undefined4 *)(pFVar16 + 0xc) = local_e0._4_4_;
      local_e0 = 0;
      local_e8.Data = (FScriptContainerElement *)0x0;
      uVar10 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar18);
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = CONCAT44(local_d0._4_4_,1);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&local_d8,1,(int *)((longlong)&local_d0 + 4));
      *(undefined4 *)local_d8.Data = uVar2;
      pFVar16 = (param_6->AllocatorInstance).Data;
      if (((pFVar16 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = param_6->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_6->AllocatorInstance,piVar1);
      }
      param_6->ArrayNum = iVar11 + 1;
      pFVar16 = (param_6->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar16 = 0;
      *(FScriptContainerElement **)pFVar16 = local_d8.Data;
      local_d8.Data = (FScriptContainerElement *)0x0;
      FVar7.Data = local_d8.Data;
      *(undefined4 *)(pFVar16 + 8) = (undefined4)local_d0;
      *(undefined4 *)(pFVar16 + 0xc) = local_d0._4_4_;
      local_d0 = 0;
      uVar8 = local_d0;
      local_d0 = 0;
      local_d8.Data = (FScriptContainerElement *)0x0;
      iVar11 = param_1->ArrayNum;
      lVar18 = lVar18 + 4;
    } while ((int)uVar17 < iVar11 + -1);
  }
  pFVar12 = ::FString::FString(&local_a0,"NNERuntimeIREECpu");
  UE::NNE::GetRuntime<INNERuntimeCPU>(&local_c8,pFVar12);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if ((local_c8.InterfaceInstance == (INNERuntimeCPU *)0x0) ||
     (bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_c8), !bVar9)) {
    if ((byte)LogChaos._0_1_ < 2) goto LAB_143bf1aca;
    pFVar15 = &::LOG_Static;
  }
  else {
    if (((local_c8.InterfaceInstance == (INNERuntimeCPU *)0x0) ||
        (bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_c8), !bVar9)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_b8 = *(UObject **)param_2.field0_0x0;
    pcVar6 = *(code **)((longlong)*local_c8.InterfaceInstance + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_b8);
    }
    pTVar13 = (TSharedPtr<UE::NNE::IModelCPU,1> *)(*pcVar6)(local_c8.InterfaceInstance,local_90);
    if (param_4 != pTVar13) {
      param_4->Object = pTVar13->Object;
      pTVar13->Object = (IModelCPU *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_4->SharedReferenceCount,&pTVar13->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
    if (param_4->Object != (IModelCPU *)0x0) {
      DestructItems<Chaos::FMLLevelSetNeuralInference,int>
                ((FMLLevelSetNeuralInference *)(param_5->AllocatorInstance).Data,param_5->ArrayNum);
      piVar1 = &param_5->ArrayMax;
      param_5->ArrayNum = 0;
      if (param_5->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&param_5->AllocatorInstance,0,piVar1);
      }
      local_b0.Object = param_4->Object;
      local_b0.SharedReferenceCount.ReferenceController =
           (param_4->SharedReferenceCount).ReferenceController;
      if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      piVar19 = &param_5->ArrayNum;
      pFVar14 = FMLLevelSetNeuralInference::FMLLevelSetNeuralInference(&local_80,&local_b0,param_6);
      pFVar4 = (FMLLevelSetNeuralInference *)(param_5->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + *piVar1)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *piVar19;
      if (iVar11 == param_5->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&param_5->AllocatorInstance,piVar1);
        *piVar19 = iVar11;
      }
      *piVar19 = iVar11 + 1;
      pFVar16 = (param_5->AllocatorInstance).Data + (longlong)iVar11 * 0x30;
      *(IModelCPU **)pFVar16 = (pFVar14->NNEModel).Object;
      pTVar5 = (pFVar14->NNEModel).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IModelInstanceCPU **)(pFVar16 + 0x10) = (pFVar14->ModelInstance).Object;
      pTVar5 = (pFVar14->ModelInstance).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar16 + 0x18) = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined8 *)(pFVar16 + 0x20) = 0;
      *(FScriptContainerElement **)(pFVar16 + 0x20) =
           (pFVar14->ModelWeightsShapes).AllocatorInstance.Data;
      (pFVar14->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar16 + 0x28) = (pFVar14->ModelWeightsShapes).ArrayNum;
      *(int *)(pFVar16 + 0x2c) = (pFVar14->ModelWeightsShapes).ArrayMax;
      (pFVar14->ModelWeightsShapes).ArrayNum = 0;
      (pFVar14->ModelWeightsShapes).ArrayMax = 0;
      DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                 local_80.ModelWeightsShapes.AllocatorInstance.Data,
                 local_80.ModelWeightsShapes.ArrayNum);
      if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
          local_80.ModelWeightsShapes.AllocatorInstance.Data !=
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_80.ModelWeightsShapes.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.ModelInstance.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.NNEModel.SharedReferenceCount.ReferenceController);
      goto LAB_143bf1aca;
    }
    if ((byte)LogChaos._0_1_ < 2) goto LAB_143bf1aca;
    pFVar15 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar15,(FLogCategoryBase *)&LogChaos);
LAB_143bf1aca:
  LoadMLModelWeightsFromString(this,param_3,param_7);
  return;
}

// BuildNNEModel @ 143bf1b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FMLLevelSet::BuildNNEModel
          (FMLLevelSet *this,TObjectPtr<UNNEModelData> param_1,
          TSharedPtr<UE::NNE::IModelCPU,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TSharedPtr<UE::NNE::IModelCPU,1> *pTVar4;
  UObject *local_res20;
  TWeakInterfacePtr<INNERuntimeCPU> local_38;
  FString local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pFVar3 = ::FString::FString(&local_28,"NNERuntimeIREECpu");
  UE::NNE::GetRuntime<INNERuntimeCPU>(&local_38,pFVar3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.InterfaceInstance == (INNERuntimeCPU *)0x0) {
LAB_143bf1c17:
    if (1 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    return;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_38);
  if (!bVar2) goto LAB_143bf1c17;
  if (local_38.InterfaceInstance != (INNERuntimeCPU *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_38);
    if (bVar2) goto LAB_143bf1ba2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                     ,0x8d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_143bf1ba2:
  local_res20 = *(UObject **)param_1.field0_0x0;
  pcVar1 = *(code **)((longlong)*local_38.InterfaceInstance + 0x18);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  pTVar4 = (TSharedPtr<UE::NNE::IModelCPU,1> *)
           (*pcVar1)(local_38.InterfaceInstance,local_18,&local_res20);
  if (param_2 != pTVar4) {
    param_2->Object = pTVar4->Object;
    pTVar4->Object = (IModelCPU *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_2->SharedReferenceCount,&pTVar4->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// ComputeIncorrectZoneNetworkWeightsInput @ 143bf8470

void __thiscall
Chaos::FMLLevelSet::ComputeIncorrectZoneNetworkWeightsInput
          (FMLLevelSet *this,
          TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  ComputeWeightsInput(this,&this->ActiveBonesRelativeTransforms,&this->IncorrectZoneModelWeights,
                      &this->IncorrectZoneModelWeightsShapes,param_1);
  return;
}

// ComputeSignedDistanceNetworkWeightsInput @ 143bfd390

void __thiscall
Chaos::FMLLevelSet::ComputeSignedDistanceNetworkWeightsInput
          (FMLLevelSet *this,
          TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  ComputeWeightsInput(this,&this->ActiveBonesRelativeTransforms,&this->SignedDistanceModelWeights,
                      &this->SignedDistanceModelWeightsShapes,param_1);
  return;
}

// ComputeWeightsInput @ 143bfd470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FMLLevelSet::ComputeWeightsInput
          (FMLLevelSet *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FMLLevelSet *pFVar22;
  longlong lVar23;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  int iVar29;
  undefined1 auStackY_1b8 [32];
  undefined1 local_164 [4];
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_160;
  float local_150;
  uint local_14c;
  longlong local_148;
  longlong local_140;
  ForAnyElementType local_138;
  int local_130;
  int iStack_12c;
  uint local_128;
  FMLLevelSet *local_120;
  ulonglong local_118;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_110;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_108;
  int *local_100;
  TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> *local_f8;
  longlong local_f0;
  longlong local_e8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_e0;
  TRotator<double> local_d8;
  TQuat<double> local_b8;
  float local_98;
  float local_94;
  float local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_4->ArrayNum;
  local_f8 = param_4;
  local_120 = this;
  local_110 = param_1;
  local_108 = param_2;
  local_100 = piVar1;
  local_e0 = param_3;
  DestructItems<TArray<float,TAlignedHeapAllocator<64>_>,int>
            ((TArray<float,TAlignedHeapAllocator<64>_> *)(param_4->AllocatorInstance).Data,*piVar1);
  uVar25 = 0;
  piVar2 = &param_4->ArrayMax;
  *piVar1 = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_4->AllocatorInstance,0,piVar2);
  }
  uVar19 = param_2->ArrayNum;
  iVar29 = *piVar1;
  if (iVar29 < (int)uVar19) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar19 - iVar29,&param_4->AllocatorInstance,piVar1,piVar2);
    memset((param_4->AllocatorInstance).Data + (longlong)iVar15 * 0x10,0,
           (longlong)(int)(uVar19 - iVar29) << 4);
  }
  else {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if ((int)uVar19 < iVar29) {
      uVar26 = iVar29 - uVar19;
      if (((int)(uVar19 | uVar26) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar26 != 0) {
        TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_4,uVar19,uVar26);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_4->AllocatorInstance,*piVar1,piVar2);
      }
    }
  }
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_160,param_1->ArrayNum,Default);
  fVar8 = __real_c3340000;
  fVar5 = __real_43b40000;
  fVar4 = __real_43340000;
  if (0 < local_160.ArrayNum) {
    local_148 = 0;
    local_118 = 0;
    local_140 = 0;
    uVar18 = uVar25;
    do {
      uVar10 = local_118;
      lVar23 = local_140;
      uVar20 = (uint)uVar18;
      uVar26 = ~uVar20 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar20 < param_1->ArrayNum) {
        uVar19 = uVar26;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar28 = pFVar6 + lVar23;
      local_b8.X = *(double *)pFVar28;
      local_b8.Y = *(double *)(pFVar28 + 8);
      pFVar6 = pFVar6 + lVar23 + 0x10;
      local_b8.Z = *(double *)pFVar6;
      local_b8.W = *(double *)(pFVar6 + 8);
      UE::Math::TRotator<double>::TRotator<double>(&local_d8,&local_b8);
      pFVar22 = local_120;
      uVar19 = 0;
      if ((int)uVar20 < (local_120->ActiveBonesReferenceRotations).ArrayNum) {
        uVar19 = uVar26;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar19 = 0;
      if ((int)uVar20 < (pFVar22->ActiveBonesReferenceRotations).ArrayNum) {
        uVar19 = uVar26;
      }
      local_98 = (float)(local_d8.Roll -
                        (double)*(float *)((pFVar22->ActiveBonesReferenceRotations).
                                           AllocatorInstance.Data + uVar10));
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar19 = 0;
      if ((int)uVar20 < (pFVar22->ActiveBonesReferenceRotations).ArrayNum) {
        uVar19 = uVar26;
      }
      local_94 = (float)(local_d8.Pitch -
                        (double)*(float *)((pFVar22->ActiveBonesReferenceRotations).
                                           AllocatorInstance.Data + uVar10 + 4));
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar19 = 0;
      if ((int)uVar20 < local_160.ArrayNum) {
        uVar19 = uVar26;
      }
      local_90 = (float)(local_d8.Yaw -
                        (double)*(float *)((pFVar22->ActiveBonesReferenceRotations).
                                           AllocatorInstance.Data + uVar10 + 8));
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)
                 (local_160.AllocatorInstance.Data + uVar25),&local_98,3,
                 ((TArray<float,TSizedDefaultAllocator<32>_> *)
                 (local_160.AllocatorInstance.Data + uVar25))->ArrayMax);
      iVar29 = 0;
      lVar27 = 0;
      lVar23 = 0;
      do {
        while( true ) {
          uVar19 = 0;
          if ((int)uVar20 < local_160.ArrayNum) {
            uVar19 = uVar26;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar9.Data = local_160.AllocatorInstance.Data;
          if ((*(int *)(local_160.AllocatorInstance.Data + uVar25 + 8) <= iVar29) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (fVar8 < *(float *)(*(longlong *)(FVar9.Data + uVar25) + lVar27)) break;
          uVar19 = 0;
          if ((int)uVar20 < local_160.ArrayNum) {
            uVar19 = uVar26;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar9.Data = local_160.AllocatorInstance.Data;
          if ((*(int *)(local_160.AllocatorInstance.Data + uVar25 + 8) <= iVar29) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)(*(longlong *)(FVar9.Data + uVar25) + lVar27) =
               *(float *)(*(longlong *)(FVar9.Data + uVar25) + lVar27) + fVar5;
        }
        while( true ) {
          uVar19 = 0;
          if ((int)uVar20 < local_160.ArrayNum) {
            uVar19 = uVar26;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar9.Data = local_160.AllocatorInstance.Data;
          if ((*(int *)(local_160.AllocatorInstance.Data + uVar25 + 8) <= iVar29) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(float *)(*(longlong *)(FVar9.Data + uVar25) + lVar27) <= fVar4) break;
          uVar19 = 0;
          if ((int)uVar20 < local_160.ArrayNum) {
            uVar19 = uVar26;
          }
          if ((uVar19 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar9.Data = local_160.AllocatorInstance.Data;
          if ((*(int *)(local_160.AllocatorInstance.Data + uVar25 + 8) <= iVar29) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)(*(longlong *)(FVar9.Data + uVar25) + lVar23 * 4) =
               *(float *)(*(longlong *)(FVar9.Data + uVar25) + lVar23 * 4) - fVar5;
        }
        iVar29 = iVar29 + 1;
        lVar23 = lVar23 + 1;
        lVar27 = lVar27 + 4;
      } while (iVar29 < 3);
      local_148 = local_148 + 1;
      local_140 = local_140 + 0x60;
      local_118 = local_118 + 0xc;
      uVar18 = (ulonglong)(uVar20 + 1);
      uVar25 = uVar25 + 0x10;
      param_1 = local_110;
    } while ((int)(uVar20 + 1) < local_160.ArrayNum);
  }
  pFVar22 = local_120;
  uVar25 = 0;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 0;
  iStack_12c = 0;
  uVar19 = local_120->TotalNumberOfRotationComponents;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&local_138,0,&iStack_12c);
  }
  fVar4 = __real_3b360b61;
  if (0 < (pFVar22->ActiveBonesRotationComponents).ArrayNum) {
    local_140 = 0;
    uVar18 = uVar25;
    do {
      lVar23 = local_140;
      uVar26 = (uint)uVar18;
      uVar19 = 0;
      if ((int)uVar26 < (pFVar22->ActiveBonesRotationComponents).ArrayNum) {
        uVar19 = ~uVar26 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar28 = (pFVar22->ActiveBonesRotationComponents).AllocatorInstance.Data;
      uVar18 = (ulonglong)*(int *)(pFVar28 + uVar25 + 8);
      pTVar24 = *(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> **)
                 (pFVar28 + uVar25);
      local_118 = CONCAT44(local_118._4_4_,*(int *)(pFVar28 + uVar25 + 8));
      local_110 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)&(pTVar24->AllocatorInstance).Data + uVar18 * 4);
      while( true ) {
        pTVar11 = local_110;
        if (*(int *)(pFVar28 + uVar25 + 8) != (int)uVar18) {
          local_164[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_164);
        }
        if (pTVar24 == pTVar11) break;
        uVar19 = *(uint *)&(pTVar24->AllocatorInstance).Data;
        uVar20 = 0;
        if ((int)uVar26 < local_160.ArrayNum) {
          uVar20 = ~uVar26 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar9.Data = local_160.AllocatorInstance.Data;
        uVar20 = 0;
        if ((int)uVar19 < *(int *)(local_160.AllocatorInstance.Data + uVar25 + 8)) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_150 = *(float *)(*(longlong *)(FVar9.Data + uVar25) + (longlong)(int)uVar19 * 4) *
                    fVar4;
        if (((local_138.Data <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 < local_138.Data + (longlong)iStack_12c * 4)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_130 == iStack_12c) {
          local_130 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_138,&iStack_12c);
        }
        lVar23 = (longlong)local_130;
        pTVar24 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)&(pTVar24->AllocatorInstance).Data + 4);
        local_130 = local_130 + 1;
        *(float *)(local_138.Data + lVar23 * 4) = local_150;
        uVar18 = local_118 & 0xffffffff;
        lVar23 = local_140;
      }
      local_140 = lVar23 + 1;
      uVar18 = (ulonglong)(uVar26 + 1);
      uVar25 = uVar25 + 0x10;
      pFVar22 = local_120;
    } while ((int)(uVar26 + 1) < (local_120->ActiveBonesRotationComponents).ArrayNum);
  }
  local_f0 = (longlong)local_130;
  local_14c = 0;
  local_120 = (FMLLevelSet *)CONCAT44(local_120._4_4_,local_130 + 1);
  if (0 < local_108->ArrayNum) {
    local_e8 = 0;
    local_110 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
    iVar29 = local_130 + 1;
    do {
      pTVar12 = local_108;
      pTVar24 = local_110;
      uVar19 = local_14c;
      uVar26 = ~local_14c >> 0x1f;
      uVar20 = 0;
      if ((int)local_14c < *local_100) {
        uVar20 = uVar26;
      }
      local_128 = uVar26;
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar28 = (local_f8->AllocatorInstance).Data + (longlong)&(pTVar24->AllocatorInstance).Data;
      uVar20 = 0;
      if ((int)uVar19 < pTVar12->ArrayNum) {
        uVar20 = uVar26;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = pFVar28 + 8;
      iVar15 = *(int *)&pFVar6->field_0x0;
      uVar25 = (longlong)
               *(int *)((longlong)&pTVar24->ArrayNum + (longlong)(pTVar12->AllocatorInstance).Data)
               / (longlong)iVar29;
      uVar19 = (uint)uVar25;
      if (iVar15 < (int)uVar19) {
        iVar29 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<64>::ForAnyElementType>
                           (4,4,uVar19 - iVar15,(ForAnyElementType *)pFVar28,(int *)pFVar6,
                            (int *)(pFVar28 + 0xc));
        memset(*(FScriptContainerElement **)&pFVar28->field_0x0 + (longlong)iVar29 * 4,0,
               (longlong)(int)(uVar19 - iVar15) << 2);
      }
      else {
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar25 & 0xffffffff);
        }
        if ((int)uVar19 < iVar15) {
          uVar20 = iVar15 - uVar19;
          if (((int)(uVar20 | uVar19) < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (uVar20 != 0) {
            iVar29 = (*(int *)&pFVar6->field_0x0 - uVar20) - uVar19;
            if (iVar29 != 0) {
              memmove(*(FScriptContainerElement **)&pFVar28->field_0x0 + (longlong)(int)uVar19 * 4,
                      *(FScriptContainerElement **)&pFVar28->field_0x0 + (longlong)(int)uVar19 * 4 +
                      (longlong)(int)uVar20 * 4,(longlong)iVar29 << 2);
            }
            *(uint *)&pFVar6->field_0x0 = *(int *)&pFVar6->field_0x0 - uVar20;
            UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<64>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar28,*(int *)&pFVar6->field_0x0,
                       (int *)(pFVar28 + 0xc));
          }
        }
      }
      uVar18 = (ulonglong)(int)local_14c;
      uVar19 = 0;
      local_140 = 0;
      uVar25 = uVar18;
      while( true ) {
        iVar29 = (int)uVar18;
        uVar20 = 0;
        if (iVar29 < *local_100) {
          uVar20 = uVar26;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar13 = local_e0;
        pTVar24 = local_110;
        if (*(int *)((longlong)&local_110->ArrayNum + (longlong)(local_f8->AllocatorInstance).Data)
            <= (int)uVar19) break;
        uVar20 = 0;
        if (iVar29 < local_e0->ArrayNum) {
          uVar20 = uVar26;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = (pTVar13->AllocatorInstance).Data;
        uVar20 = 0;
        if (iVar29 < pTVar13->ArrayNum) {
          uVar20 = uVar26;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar20 = *(int *)((longlong)&pTVar24->ArrayNum + (longlong)(pTVar13->AllocatorInstance).Data
                         ) - 1;
        uVar26 = 0;
        if ((int)uVar20 < *(int *)(pFVar28 + uVar25 * 0x10 + 8)) {
          uVar26 = ~uVar20 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar26 = local_128;
        iVar15 = *(int *)(*(longlong *)(pFVar28 + uVar25 * 0x10) + (longlong)(int)uVar20 * 4);
        local_118 = CONCAT44(local_118._4_4_,iVar15);
        uVar20 = 0;
        if (iVar29 < local_108->ArrayNum) {
          uVar20 = local_128;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = (local_108->AllocatorInstance).Data;
        uVar21 = iVar15 * (((int)uVar19 / iVar15 + 1) * (int)local_120 + -1) + (int)uVar19 % iVar15;
        uVar20 = 0;
        if ((int)uVar21 < *(int *)(pFVar28 + uVar25 * 0x10 + 8)) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar20 = local_14c;
        uVar18 = (ulonglong)local_14c;
        uVar3 = *(undefined4 *)(*(longlong *)(pFVar28 + uVar25 * 0x10) + (longlong)(int)uVar21 * 4);
        uVar21 = 0;
        if ((int)local_14c < *local_100) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar28 = (local_f8->AllocatorInstance).Data;
        local_148 = CONCAT44(local_148._4_4_,~uVar19 >> 0x1f);
        uVar26 = 0;
        if ((int)uVar19 < *(int *)(pFVar28 + uVar25 * 0x10 + 8)) {
          uVar26 = ~uVar19 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar26 = local_128;
        uVar21 = 0;
        lVar23 = 0;
        *(undefined4 *)(local_140 + *(longlong *)(pFVar28 + uVar25 * 0x10)) = uVar3;
        if (local_f0 < 1) {
          uVar19 = uVar19 + 1;
          local_140 = local_140 + 4;
          uVar25 = (ulonglong)(int)uVar20;
        }
        else {
          uVar20 = ((int)uVar19 / iVar15) * (int)local_118 * (int)local_120 + (int)uVar19 % iVar15;
          do {
            pTVar12 = local_108;
            uVar16 = 0;
            if ((int)uVar18 < local_108->ArrayNum) {
              uVar16 = uVar26;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar28 = (pTVar12->AllocatorInstance).Data;
            uVar16 = 0;
            if ((int)uVar21 < local_130) {
              uVar16 = ~uVar21 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar9.Data = local_138.Data;
            uVar16 = 0;
            if ((int)uVar20 < *(int *)(pFVar28 + uVar25 * 0x10 + 8)) {
              uVar16 = ~uVar20 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar16 = local_14c;
            fVar4 = *(float *)(*(longlong *)(pFVar28 + uVar25 * 0x10) + (longlong)(int)uVar20 * 4);
            fVar5 = *(float *)(FVar9.Data + lVar23 * 4);
            uVar18 = (ulonglong)(int)local_14c;
            uVar17 = 0;
            if ((int)local_14c < *local_100) {
              uVar17 = uVar26;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar28 = (local_f8->AllocatorInstance).Data;
            iVar29 = 0;
            if ((int)uVar19 < *(int *)(pFVar28 + uVar25 * 0x10 + 8)) {
              iVar29 = (int)local_148;
            }
            if ((iVar29 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar27 = *(longlong *)(pFVar28 + uVar25 * 0x10);
            uVar21 = uVar21 + 1;
            lVar23 = lVar23 + 1;
            uVar20 = uVar20 + (int)local_118;
            *(float *)(local_140 + lVar27) = fVar4 * fVar5 + *(float *)(local_140 + lVar27);
          } while (lVar23 < local_f0);
          uVar19 = uVar19 + 1;
          uVar25 = (ulonglong)(int)uVar16;
          local_140 = local_140 + 4;
        }
      }
      local_14c = iVar29 + 1;
      local_e8 = local_e8 + 1;
      local_110 = local_110 + 1;
      iVar29 = (int)local_120;
    } while ((int)local_14c < local_108->ArrayNum);
  }
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)local_160.AllocatorInstance.Data,
             local_160.ArrayNum);
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)local_160.AllocatorInstance.Data !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return;
}

// CopyGeometry @ 143bfe980

TRefCountPtr<Chaos::FImplicitObject> __thiscall Chaos::FMLLevelSet::CopyGeometry(FMLLevelSet *this)

{
  TReferenceControllerBase<1> *pTVar1;
  IModelCPU *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  FMLLevelSet *pFVar5;
  FImplicitObject *in_RDX;
  
  pFVar5 = ::operator_new(0x1d8);
  if (pFVar5 == (FMLLevelSet *)0x0) {
    pFVar5 = (FMLLevelSet *)0x0;
  }
  else {
    pFVar5 = FMLLevelSet(pFVar5);
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->ActiveBoneNames,&this->ActiveBoneNames);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->ActiveBonesRelativeTransforms,&this->ActiveBonesRelativeTransforms);
  pTVar1 = (this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->NNESignedDistanceModel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar5->NNESignedDistanceModel).SharedReferenceCount.ReferenceController;
  (pFVar5->NNESignedDistanceModel).Object = pIVar2;
  (pFVar5->NNESignedDistanceModel).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TArray<Chaos::FMLLevelSetNeuralInference,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->SignedDistanceNeuralInferences,&this->SignedDistanceNeuralInferences);
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->SignedDistanceModelWeights,&this->SignedDistanceModelWeights);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->SignedDistanceModelWeightsShapes,&this->SignedDistanceModelWeightsShapes);
  pTVar1 = (this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->NNEIncorrectZoneModel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar5->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController;
  (pFVar5->NNEIncorrectZoneModel).Object = pIVar2;
  (pFVar5->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TArray<Chaos::FMLLevelSetNeuralInference,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->IncorrectZoneNeuralInferences,&this->IncorrectZoneNeuralInferences);
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->IncorrectZoneModelWeights,&this->IncorrectZoneModelWeights);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->IncorrectZoneModelWeightsShapes,&this->IncorrectZoneModelWeightsShapes);
  pFVar5->bUseIncorrectZoneModel = this->bUseIncorrectZoneModel;
  uVar4 = *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(pFVar5->LocalBoundingBox).MMin = *(undefined8 *)&(this->LocalBoundingBox).MMin;
  *(undefined8 *)&(pFVar5->LocalBoundingBox).MMin.field_0x8 = uVar4;
  *(undefined8 *)&(pFVar5->LocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10;
  uVar4 = *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(pFVar5->LocalBoundingBox).MMax = *(undefined8 *)&(this->LocalBoundingBox).MMax;
  *(undefined8 *)&(pFVar5->LocalBoundingBox).MMax.field_0x8 = uVar4;
  *(undefined8 *)&(pFVar5->LocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10;
  pFVar5->SignedDistanceScaling = this->SignedDistanceScaling;
  *(undefined8 *)&(pFVar5->TrainingGridMin).field0_0x0 =
       *(undefined8 *)&(this->TrainingGridMin).field0_0x0;
  (pFVar5->TrainingGridMin).field0_0x0._s_0.Z = (this->TrainingGridMin).field0_0x0._s_0.Z;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->TrainingGridUnitAxesXYZ,&this->TrainingGridUnitAxesXYZ);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->TrainingGridAxesLengthsXYZ,&this->TrainingGridAxesLengthsXYZ);
  pFVar5->TotalNumberOfRotationComponents = this->TotalNumberOfRotationComponents;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->ActiveBonesRotationComponents,&this->ActiveBonesRotationComponents);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->ActiveBonesReferenceRotations,&this->ActiveBonesReferenceRotations);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar5->ActiveBonesReferenceTranslations,&this->ActiveBonesReferenceTranslations);
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x8;
  *(undefined8 *)&pFVar5->DebugGrid = *(undefined8 *)&this->DebugGrid;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x18;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x10 = *(undefined8 *)&(this->DebugGrid).field_0x10;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x18 = uVar4;
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x28;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x20 = *(undefined8 *)&(this->DebugGrid).field_0x20;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x28 = uVar4;
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x38;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x30 = *(undefined8 *)&(this->DebugGrid).field_0x30;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x38 = uVar4;
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x48;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x40 = *(undefined8 *)&(this->DebugGrid).field_0x40;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x48 = uVar4;
  *(undefined8 *)&(pFVar5->DebugGrid).field_0x50 = *(undefined8 *)&(this->DebugGrid).field_0x50;
  *(undefined8 *)&pFVar5->DebugPhi = *(undefined8 *)&this->DebugPhi;
  *(undefined4 *)&(pFVar5->DebugPhi).field_0x8 = *(undefined4 *)&(this->DebugPhi).field_0x8;
  TArray<double,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<double,TSizedDefaultAllocator<32>_> *)&(pFVar5->DebugPhi).field_0x10,
             (TArray<double,TSizedDefaultAllocator<32>_> *)&(this->DebugPhi).field_0x10);
  in_RDX->_padding_ = (longlong)pFVar5;
  LOCK();
  *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
  UNLOCK();
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 143bfef20

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::FMLLevelSet::CopyGeometryWithScale(FMLLevelSet *this,TVector<double,3> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IModelCPU *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  uchar uVar5;
  FMLLevelSet *pFVar6;
  TImplicitObjectScaled<Chaos::FMLLevelSet,1> *this_00;
  TVector<double,3> *in_R8;
  
  pFVar6 = ::operator_new(0x1d8);
  if (pFVar6 == (FMLLevelSet *)0x0) {
    pFVar6 = (FMLLevelSet *)0x0;
  }
  else {
    pFVar6 = FMLLevelSet(pFVar6);
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->ActiveBoneNames,&this->ActiveBoneNames);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->ActiveBonesRelativeTransforms,&this->ActiveBonesRelativeTransforms);
  pTVar1 = (this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->NNESignedDistanceModel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar6->NNESignedDistanceModel).SharedReferenceCount.ReferenceController;
  (pFVar6->NNESignedDistanceModel).Object = pIVar2;
  (pFVar6->NNESignedDistanceModel).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TArray<Chaos::FMLLevelSetNeuralInference,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->SignedDistanceNeuralInferences,&this->SignedDistanceNeuralInferences);
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->SignedDistanceModelWeights,&this->SignedDistanceModelWeights);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->SignedDistanceModelWeightsShapes,&this->SignedDistanceModelWeightsShapes);
  pTVar1 = (this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->NNEIncorrectZoneModel).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar6->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController;
  (pFVar6->NNEIncorrectZoneModel).Object = pIVar2;
  (pFVar6->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TArray<Chaos::FMLLevelSetNeuralInference,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->IncorrectZoneNeuralInferences,&this->IncorrectZoneNeuralInferences);
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->IncorrectZoneModelWeights,&this->IncorrectZoneModelWeights);
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->IncorrectZoneModelWeightsShapes,&this->IncorrectZoneModelWeightsShapes);
  pFVar6->bUseIncorrectZoneModel = this->bUseIncorrectZoneModel;
  uVar4 = *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x8;
  *(undefined8 *)&(pFVar6->LocalBoundingBox).MMin = *(undefined8 *)&(this->LocalBoundingBox).MMin;
  *(undefined8 *)&(pFVar6->LocalBoundingBox).MMin.field_0x8 = uVar4;
  *(undefined8 *)&(pFVar6->LocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(this->LocalBoundingBox).MMin.field_0x10;
  uVar4 = *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(pFVar6->LocalBoundingBox).MMax = *(undefined8 *)&(this->LocalBoundingBox).MMax;
  *(undefined8 *)&(pFVar6->LocalBoundingBox).MMax.field_0x8 = uVar4;
  *(undefined8 *)&(pFVar6->LocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(this->LocalBoundingBox).MMax.field_0x10;
  pFVar6->SignedDistanceScaling = this->SignedDistanceScaling;
  *(undefined8 *)&(pFVar6->TrainingGridMin).field0_0x0 =
       *(undefined8 *)&(this->TrainingGridMin).field0_0x0;
  (pFVar6->TrainingGridMin).field0_0x0._s_0.Z = (this->TrainingGridMin).field0_0x0._s_0.Z;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->TrainingGridUnitAxesXYZ,&this->TrainingGridUnitAxesXYZ);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->TrainingGridAxesLengthsXYZ,&this->TrainingGridAxesLengthsXYZ);
  pFVar6->TotalNumberOfRotationComponents = this->TotalNumberOfRotationComponents;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->ActiveBonesRotationComponents,&this->ActiveBonesRotationComponents);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->ActiveBonesReferenceRotations,&this->ActiveBonesReferenceRotations);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar6->ActiveBonesReferenceTranslations,&this->ActiveBonesReferenceTranslations);
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x8;
  *(undefined8 *)&pFVar6->DebugGrid = *(undefined8 *)&this->DebugGrid;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x18;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x10 = *(undefined8 *)&(this->DebugGrid).field_0x10;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x18 = uVar4;
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x28;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x20 = *(undefined8 *)&(this->DebugGrid).field_0x20;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x28 = uVar4;
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x38;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x30 = *(undefined8 *)&(this->DebugGrid).field_0x30;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x38 = uVar4;
  uVar4 = *(undefined8 *)&(this->DebugGrid).field_0x48;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x40 = *(undefined8 *)&(this->DebugGrid).field_0x40;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x48 = uVar4;
  *(undefined8 *)&(pFVar6->DebugGrid).field_0x50 = *(undefined8 *)&(this->DebugGrid).field_0x50;
  *(undefined8 *)&pFVar6->DebugPhi = *(undefined8 *)&this->DebugPhi;
  *(undefined4 *)&(pFVar6->DebugPhi).field_0x8 = *(undefined4 *)&(this->DebugPhi).field_0x8;
  TArray<double,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<double,TSizedDefaultAllocator<32>_> *)&(pFVar6->DebugPhi).field_0x10,
             (TArray<double,TSizedDefaultAllocator<32>_> *)&(this->DebugPhi).field_0x10);
  this_00 = ::operator_new(0x78);
  if (this_00 == (TImplicitObjectScaled<Chaos::FMLLevelSet,1> *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    uVar5 = FImplicitObject::GetType((FImplicitObject *)pFVar6);
    FImplicitObjectScaled::FImplicitObjectScaled((FImplicitObjectScaled *)this_00,2,uVar5);
    this_00->_padding_ = (longlong)&___7__TImplicitObjectScaled_VFMLLevelSet_Chaos___00_Chaos__6B_;
    (this_00->MObject).Reference = pFVar6;
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
    UNLOCK();
    if ((int)pFVar6->_padding_ == 1) {
      LOCK();
      *(undefined4 *)((longlong)&pFVar6->_padding_ + 4) = 1;
      UNLOCK();
    }
    TImplicitObjectScaled<Chaos::FMLLevelSet,1>::InitScaledImplicit(this_00,in_R8,0.0);
    *(TImplicitObjectScaled<Chaos::FMLLevelSet,1> **)param_1 = this_00;
    LOCK();
    *(int *)&this_00->_padding_ = (int)this_00->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CreatePhiFromMLModel @ 143c00b40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::FMLLevelSet::CreatePhiFromMLModel(FMLLevelSet *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  double dVar15;
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar25;
  longlong lVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int local_res8;
  int local_res10;
  int local_res18;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_128;
  TArray<TArray<float,TAlignedHeapAllocator<64>_>,TSizedDefaultAllocator<32>_> local_118;
  TArray<float,TAlignedHeapAllocator<64>_> local_108;
  TArray<float,TAlignedHeapAllocator<64>_> local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  ComputeWeightsInput(this,&this->ActiveBonesRelativeTransforms,&this->SignedDistanceModelWeights,
                      &this->SignedDistanceModelWeightsShapes,&local_118);
  TArray<float,TAlignedHeapAllocator<64>_>::SetNum
            (&local_108,
             *(int *)&(this->DebugGrid).field_0x38 * *(int *)&(this->DebugGrid).field_0x30 *
             *(int *)&(this->DebugGrid).field_0x34 * 3,Default);
  TArray<float,TAlignedHeapAllocator<64>_>::SetNum
            (&local_f8,
             *(int *)&(this->DebugGrid).field_0x38 * *(int *)&(this->DebugGrid).field_0x30 *
             *(int *)&(this->DebugGrid).field_0x34,Default);
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_128,3,Default);
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar13 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  if (((this->TrainingGridAxesLengthsXYZ).ArrayNum < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  fVar28 = __real_3f800000;
  fVar29 = __real_3f800000 / *(float *)(this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data;
  fVar30 = *(float *)pFVar13;
  fVar31 = *(float *)(pFVar13 + 4);
  fVar32 = *(float *)(pFVar13 + 8);
  if ((local_128.ArrayNum < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  *(float *)local_128.AllocatorInstance.Data = fVar29 * fVar30;
  *(float *)(local_128.AllocatorInstance.Data + 4) = fVar29 * fVar31;
  *(float *)(local_128.AllocatorInstance.Data + 8) = fVar29 * fVar32;
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar13 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  if (((this->TrainingGridAxesLengthsXYZ).ArrayNum < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  fVar29 = fVar28 / *(float *)((this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data + 4);
  fVar30 = *(float *)(pFVar13 + 0xc);
  fVar31 = *(float *)(pFVar13 + 0x10);
  fVar32 = *(float *)(pFVar13 + 0x14);
  if ((local_128.ArrayNum < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  *(float *)(local_128.AllocatorInstance.Data + 0xc) = fVar29 * fVar30;
  *(float *)(local_128.AllocatorInstance.Data + 0x10) = fVar29 * fVar31;
  *(float *)(local_128.AllocatorInstance.Data + 0x14) = fVar29 * fVar32;
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar13 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
  if (((this->TrainingGridAxesLengthsXYZ).ArrayNum < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  fVar28 = fVar28 / *(float *)((this->TrainingGridAxesLengthsXYZ).AllocatorInstance.Data + 8);
  fVar30 = *(float *)(pFVar13 + 0x18);
  fVar31 = *(float *)(pFVar13 + 0x1c);
  fVar32 = *(float *)(pFVar13 + 0x20);
  if ((local_128.ArrayNum < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_res18 = 0;
  *(float *)(local_128.AllocatorInstance.Data + 0x18) = fVar28 * fVar30;
  *(float *)(local_128.AllocatorInstance.Data + 0x1c) = fVar28 * fVar31;
  *(float *)(local_128.AllocatorInstance.Data + 0x20) = fVar28 * fVar32;
  dVar15 = __real_3fe0000000000000;
  if (0 < *(int *)&(this->DebugGrid).field_0x30) {
    do {
      local_res10 = 0;
      if (0 < *(int *)&(this->DebugGrid).field_0x34) {
        do {
          local_res8 = 0;
          if (0 < *(int *)&(this->DebugGrid).field_0x38) {
            do {
              if (((this->ActiveBonesRelativeTransforms).ArrayNum < 1) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar13 = (this->ActiveBonesRelativeTransforms).AllocatorInstance.Data;
              local_e8 = *(double *)(pFVar13 + 0x20);
              dStack_e0 = *(double *)(pFVar13 + 0x28);
              local_d8 = *(double *)(pFVar13 + 0x30);
              fVar30 = (float)local_e8;
              fVar31 = (float)dStack_e0;
              fVar32 = (float)local_d8;
              if (((this->ActiveBonesReferenceTranslations).ArrayNum < 1) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar13 = (this->ActiveBonesReferenceTranslations).AllocatorInstance.Data;
              uVar6 = *(undefined8 *)pFVar13;
              uVar23 = 0;
              fVar28 = *(float *)(pFVar13 + 8);
              dVar7 = *(double *)&(this->DebugGrid).field_0x50;
              dVar8 = *(double *)&(this->DebugGrid).field_0x40;
              lVar26 = 0;
              dVar9 = *(double *)&(this->DebugGrid).field_0x48;
              fVar29 = (this->TrainingGridMin).field0_0x0._s_0.X;
              fVar1 = (this->TrainingGridMin).field0_0x0._s_0.Z;
              dVar10 = *(double *)&this->DebugGrid;
              dVar11 = *(double *)&(this->DebugGrid).field_0x10;
              dVar12 = *(double *)&(this->DebugGrid).field_0x8;
              fVar2 = (this->TrainingGridMin).field0_0x0._s_0.Y;
              do {
                uVar20 = ~uVar23 >> 0x1f;
                uVar24 = 0;
                if ((int)uVar23 < local_128.ArrayNum) {
                  uVar24 = uVar20;
                }
                if (uVar24 == 0) {
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar18) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                FVar16.Data = local_128.AllocatorInstance.Data;
                uVar24 = 0;
                if ((int)uVar23 < local_128.ArrayNum) {
                  uVar24 = uVar20;
                }
                iVar27 = local_128.ArrayNum;
                if (uVar24 == 0) {
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar18) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = local_128.ArrayNum;
                }
                FVar17.Data = local_128.AllocatorInstance.Data;
                uVar24 = 0;
                if ((int)uVar23 < iVar27) {
                  uVar24 = uVar20;
                }
                if ((uVar24 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                fVar3 = *(float *)(local_128.AllocatorInstance.Data + lVar26 + 8);
                fVar4 = *(float *)(FVar16.Data + lVar26);
                fVar5 = *(float *)(FVar17.Data + lVar26 + 4);
                uVar24 = uVar23 + ((local_res18 * *(int *)&(this->DebugGrid).field_0x34 +
                                   local_res10) * *(int *)&(this->DebugGrid).field_0x38 + local_res8
                                  ) * 3;
                uVar20 = 0;
                if ((int)uVar24 < local_108.ArrayNum) {
                  uVar20 = ~uVar24 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                uVar23 = uVar23 + 1;
                lVar26 = lVar26 + 0xc;
                *(float *)(local_108.AllocatorInstance.Data + (longlong)(int)uVar24 * 4) =
                     fVar5 * (float)((((double)local_res10 + dVar15) * dVar9 + dVar12) -
                                    (double)((fVar31 - (float)((ulonglong)uVar6 >> 0x20)) + fVar2))
                     + (float)((((double)local_res18 + dVar15) * dVar8 + dVar10) -
                              (double)((fVar30 - (float)uVar6) + fVar29)) * fVar4 +
                     (float)((((double)local_res8 + dVar15) * dVar7 + dVar11) -
                            (double)((fVar32 - fVar28) + fVar1)) * fVar3;
              } while (uVar23 < 3);
              local_res8 = local_res8 + 1;
            } while (local_res8 < *(int *)&(this->DebugGrid).field_0x38);
          }
          local_res10 = local_res10 + 1;
        } while (local_res10 < *(int *)&(this->DebugGrid).field_0x34);
      }
      local_res18 = local_res18 + 1;
    } while (local_res18 < *(int *)&(this->DebugGrid).field_0x30);
  }
  puVar25 = &(this->DebugGrid).field_0x34;
  if (((this->SignedDistanceNeuralInferences).ArrayNum < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (*(longlong *)((this->SignedDistanceNeuralInferences).AllocatorInstance.Data + 0x10) != 0) {
    if (((this->SignedDistanceNeuralInferences).ArrayNum < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FMLLevelSetNeuralInference::RunInference
              ((FMLLevelSetNeuralInference *)
               (this->SignedDistanceNeuralInferences).AllocatorInstance.Data,&local_108,&local_f8,3,
               1,&local_118);
  }
  iVar27 = 0;
  if (0 < *(int *)&(this->DebugGrid).field_0x30) {
    do {
      iVar22 = 0;
      if (0 < *(int *)puVar25) {
        do {
          iVar19 = *(int *)&(this->DebugGrid).field_0x38;
          iVar21 = 0;
          if (0 < iVar19) {
            do {
              uVar24 = (iVar27 * *(int *)puVar25 + iVar22) * iVar19 + iVar21;
              uVar23 = 0;
              if ((int)uVar24 < local_f8.ArrayNum) {
                uVar23 = ~uVar24 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              fVar30 = *(float *)(local_f8.AllocatorInstance.Data + (longlong)(int)uVar24 * 4);
              fVar31 = this->SignedDistanceScaling;
              uVar24 = (iVar27 * *(int *)&(this->DebugPhi).field_0x4 + iVar22) *
                       *(int *)&(this->DebugPhi).field_0x8 + iVar21;
              uVar23 = 0;
              if ((int)uVar24 < *(int *)&(this->DebugPhi).field_0x18) {
                uVar23 = ~uVar24 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              iVar21 = iVar21 + 1;
              *(double *)(*(longlong *)&(this->DebugPhi).field_0x10 + (longlong)(int)uVar24 * 8) =
                   (double)(fVar30 * fVar31);
              iVar19 = *(int *)&(this->DebugGrid).field_0x38;
            } while (iVar21 < iVar19);
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < *(int *)puVar25);
      }
      iVar27 = iVar27 + 1;
    } while (iVar27 < *(int *)&(this->DebugGrid).field_0x30);
  }
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<64>_>,int>
            ((TArray<float,TAlignedHeapAllocator<64>_> *)local_118.AllocatorInstance.Data,
             local_118.ArrayNum);
  if ((TArray<float,TAlignedHeapAllocator<64>_> *)local_118.AllocatorInstance.Data !=
      (TArray<float,TAlignedHeapAllocator<64>_> *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// GetInteriorCells @ 143c06d80

void __thiscall
Chaos::FMLLevelSet::GetInteriorCells
          (FMLLevelSet *this,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_1,
          double param_2)

{
  int *piVar1;
  double *pdVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int local_58;
  int iStack_54;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar3 = *(undefined8 *)&(this->DebugGrid).field_0x30;
  iVar14 = 0;
  iVar4 = *(int *)&(this->DebugGrid).field_0x38;
  local_58 = (int)uVar3;
  if (0 < local_58) {
    iStack_54 = (int)((ulonglong)uVar3 >> 0x20);
    do {
      iVar12 = 0;
      if (0 < iStack_54) {
        do {
          iVar11 = 0;
          if (0 < iVar4) {
            do {
              uVar13 = (iVar14 * *(int *)&(this->DebugPhi).field_0x4 + iVar12) *
                       *(int *)&(this->DebugPhi).field_0x8 + iVar11;
              uVar8 = 0;
              if ((int)uVar13 < *(int *)&(this->DebugPhi).field_0x18) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pdVar2 = (double *)
                       (*(longlong *)&(this->DebugPhi).field_0x10 + (longlong)(int)uVar13 * 8);
              if (*pdVar2 <= param_2 && param_2 != *pdVar2) {
                iVar9 = param_1->ArrayNum;
                if (iVar9 == *piVar1) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x40c,&param_1->AllocatorInstance,piVar1);
                }
                lVar10 = (longlong)iVar9;
                param_1->ArrayNum = iVar9 + 1;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar10 * 0xc) = iVar14;
                *(int *)(pFVar5 + lVar10 * 0xc + 4) = iVar12;
                *(int *)(pFVar5 + lVar10 * 0xc + 8) = iVar11;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar4);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iStack_54);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < local_58);
  }
  return;
}

// GetTypeHash @ 143c079a0

uint __thiscall Chaos::FMLLevelSet::GetTypeHash(FMLLevelSet *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong local_res8;
  longlong local_res10;
  
  uVar5 = 0;
  uVar4 = 0;
  if (0 < (this->SignedDistanceModelWeights).ArrayNum) {
    local_res10 = 0;
    do {
      uVar8 = 0;
      local_res8 = 0;
      while( true ) {
        uVar7 = 0;
        if ((int)uVar4 < (this->SignedDistanceModelWeights).ArrayNum) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
        }
        if (*(int *)((this->SignedDistanceModelWeights).AllocatorInstance.Data + local_res10 + 8) <=
            (int)uVar8) break;
        uVar7 = 0;
        if ((int)uVar4 < (this->SignedDistanceModelWeights).ArrayNum) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
        }
        pFVar1 = (this->SignedDistanceModelWeights).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x10 + 8)) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
        }
        uVar8 = uVar8 + 1;
        uVar7 = *(uint *)(local_res8 + *(longlong *)(pFVar1 + (longlong)(int)uVar4 * 0x10));
        uVar6 = uVar5 - uVar7 ^ uVar7 >> 0xd;
        uVar5 = (-0x61c88647 - uVar6) - uVar7 ^ uVar6 << 8;
        uVar9 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 0xd;
        uVar7 = (uVar6 - uVar9) - uVar5 ^ uVar9 >> 0xc;
        uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar6 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 5;
        uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 3;
        uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 10;
        uVar5 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xf;
        local_res8 = local_res8 + 4;
      }
      local_res10 = local_res10 + 0x10;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->SignedDistanceModelWeights).ArrayNum);
  }
  uVar4 = 0;
  if (0 < (this->IncorrectZoneModelWeights).ArrayNum) {
    local_res10 = 0;
    do {
      uVar8 = 0;
      local_res8 = 0;
      while( true ) {
        uVar7 = 0;
        if ((int)uVar4 < (this->IncorrectZoneModelWeights).ArrayNum) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
        }
        if (*(int *)((this->IncorrectZoneModelWeights).AllocatorInstance.Data + local_res10 + 8) <=
            (int)uVar8) break;
        uVar7 = 0;
        if ((int)uVar4 < (this->IncorrectZoneModelWeights).ArrayNum) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
        }
        pFVar1 = (this->IncorrectZoneModelWeights).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(pFVar1 + (longlong)(int)uVar4 * 0x10 + 8)) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return uVar4;
          }
        }
        uVar8 = uVar8 + 1;
        uVar7 = *(uint *)(local_res8 + *(longlong *)(pFVar1 + (longlong)(int)uVar4 * 0x10));
        uVar6 = uVar5 - uVar7 ^ uVar7 >> 0xd;
        uVar5 = (-0x61c88647 - uVar6) - uVar7 ^ uVar6 << 8;
        uVar9 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 0xd;
        uVar7 = (uVar6 - uVar9) - uVar5 ^ uVar9 >> 0xc;
        uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar6 = (uVar9 - uVar5) - uVar7 ^ uVar5 >> 5;
        uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar6 >> 3;
        uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 10;
        uVar5 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xf;
        local_res8 = local_res8 + 4;
      }
      local_res10 = local_res10 + 0x10;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->IncorrectZoneModelWeights).ArrayNum);
  }
  return uVar5;
}

// GetZeroIsosurfaceGridCellFaces @ 143c092a0

void __thiscall
Chaos::FMLLevelSet::GetZeroIsosurfaceGridCellFaces
          (FMLLevelSet *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int local_res8;
  int local_res20;
  int local_134;
  int local_110;
  int iStack_10c;
  
  uVar1 = *(undefined8 *)&(this->DebugGrid).field_0x30;
  dVar2 = *(double *)&(this->DebugGrid).field_0x50;
  iVar4 = *(int *)&(this->DebugGrid).field_0x38;
  local_110 = (int)uVar1;
  dVar7 = *(double *)&(this->DebugGrid).field_0x40;
  dVar8 = *(double *)&(this->DebugGrid).field_0x48;
  local_134 = 0;
  if (0 < local_110 + -1) {
    iStack_10c = (int)((ulonglong)uVar1 >> 0x20);
    uVar20 = (undefined4)__real_3ff0000000000000;
    uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar23 = (undefined4)__real_bff0000000000000;
    uVar24 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    do {
      local_res20 = 0;
      if (0 < iStack_10c + -1) {
        do {
          local_res8 = 0;
          if (0 < iVar4 + -1) {
            do {
              uVar17 = (local_134 * *(int *)&(this->DebugPhi).field_0x4 + local_res20) *
                       *(int *)&(this->DebugPhi).field_0x8 + local_res8;
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&(this->DebugPhi).field_0x18) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar3 = *(double *)
                       (*(longlong *)&(this->DebugPhi).field_0x10 + (longlong)(int)uVar17 * 8);
              uVar29 = uVar20;
              uVar30 = uVar22;
              if ((dVar3 <= 0.0) && (uVar29 = uVar23, uVar30 = uVar24, 0.0 <= dVar3)) {
                uVar29 = 0;
                uVar30 = 0;
              }
              uVar17 = ((local_134 + 1) * *(int *)&(this->DebugPhi).field_0x4 + local_res20) *
                       *(int *)&(this->DebugPhi).field_0x8 + local_res8;
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&(this->DebugPhi).field_0x18) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar3 = *(double *)
                       (*(longlong *)&(this->DebugPhi).field_0x10 + (longlong)(int)uVar17 * 8);
              uVar18 = uVar20;
              uVar19 = uVar22;
              if ((dVar3 <= 0.0) && (uVar18 = uVar23, uVar19 = uVar24, 0.0 <= dVar3)) {
                uVar18 = 0;
                uVar19 = 0;
              }
              uVar17 = (local_134 * *(int *)&(this->DebugPhi).field_0x4 + 1 + local_res20) *
                       *(int *)&(this->DebugPhi).field_0x8 + local_res8;
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&(this->DebugPhi).field_0x18) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar3 = *(double *)
                       (*(longlong *)&(this->DebugPhi).field_0x10 + (longlong)(int)uVar17 * 8);
              uVar25 = uVar20;
              uVar26 = uVar22;
              if ((dVar3 <= 0.0) && (uVar25 = uVar23, uVar26 = uVar24, 0.0 <= dVar3)) {
                uVar25 = 0;
                uVar26 = 0;
              }
              uVar17 = (local_134 * *(int *)&(this->DebugPhi).field_0x4 + local_res20) *
                       *(int *)&(this->DebugPhi).field_0x8 + 1 + local_res8;
              uVar10 = 0;
              if ((int)uVar17 < *(int *)&(this->DebugPhi).field_0x18) {
                uVar10 = ~uVar17 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar3 = *(double *)
                       (*(longlong *)&(this->DebugPhi).field_0x10 + (longlong)(int)uVar17 * 8);
              if ((dVar3 <= 0.0) && (uVar20 = uVar23, uVar22 = uVar24, 0.0 <= dVar3)) {
                uVar20 = 0;
                uVar22 = 0;
              }
              bVar9 = (double)CONCAT44(uVar30,uVar29) < (double)CONCAT44(uVar19,uVar18);
              dVar3 = (double)local_res20 * dVar8 + *(double *)&(this->DebugGrid).field_0x8;
              dVar28 = (double)local_134 * dVar7 + *(double *)&this->DebugGrid;
              dVar27 = (double)local_res8 * dVar2 + *(double *)&(this->DebugGrid).field_0x10;
              if (bVar9 || (double)CONCAT44(uVar30,uVar29) == (double)CONCAT44(uVar19,uVar18)) {
                if (bVar9) {
                  iVar11 = param_1->ArrayNum;
                  if (iVar11 == param_1->ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar11 + 1;
                  lVar16 = (longlong)iVar11;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  fVar21 = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                  *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                  iVar12 = param_1->ArrayNum;
                  if (iVar12 == param_1->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar12 + 1;
                  lVar16 = (longlong)iVar12;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar3 + dVar8);
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                  iVar13 = param_1->ArrayNum;
                  if (iVar13 == param_1->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar13 + 1;
                  lVar16 = (longlong)iVar13;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar27 + dVar2);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar3 + dVar8);
                  iVar14 = param_1->ArrayNum;
                  if (iVar14 == param_1->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar14 + 1;
                  lVar16 = (longlong)iVar14;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar27 + dVar2);
                  iVar15 = param_2->ArrayNum;
                  if (iVar15 == param_2->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar15;
                  param_2->ArrayNum = iVar15 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar12;
                  iVar12 = param_2->ArrayNum;
                  if (iVar12 == param_2->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar12;
                  param_2->ArrayNum = iVar12 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar14;
                }
              }
              else {
                iVar11 = param_1->ArrayNum;
                if (iVar11 == param_1->ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar11 + 1;
                lVar16 = (longlong)iVar11;
                pFVar5 = (param_1->AllocatorInstance).Data;
                fVar21 = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                iVar12 = param_1->ArrayNum;
                if (iVar12 == param_1->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar12 + 1;
                lVar16 = (longlong)iVar12;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar3 + dVar8);
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                iVar13 = param_1->ArrayNum;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar13 + 1;
                lVar16 = (longlong)iVar13;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar27 + dVar2);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar3 + dVar8);
                iVar14 = param_1->ArrayNum;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar14 + 1;
                lVar16 = (longlong)iVar14;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar27 + dVar2);
                iVar15 = param_2->ArrayNum;
                if (iVar15 == param_2->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar15;
                param_2->ArrayNum = iVar15 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar12;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar13;
                iVar12 = param_2->ArrayNum;
                if (iVar12 == param_2->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar12;
                param_2->ArrayNum = iVar12 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar14;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar11;
              }
              bVar9 = (double)CONCAT44(uVar30,uVar29) < (double)CONCAT44(uVar26,uVar25);
              if (bVar9 || (double)CONCAT44(uVar30,uVar29) == (double)CONCAT44(uVar26,uVar25)) {
                if (bVar9) {
                  iVar11 = param_1->ArrayNum;
                  if (iVar11 == param_1->ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  fVar21 = (float)(dVar8 + dVar3);
                  param_1->ArrayNum = iVar11 + 1;
                  lVar16 = (longlong)iVar11;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                  iVar12 = param_1->ArrayNum;
                  if (iVar12 == param_1->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar12 + 1;
                  lVar16 = (longlong)iVar12;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                  iVar13 = param_1->ArrayNum;
                  if (iVar13 == param_1->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar13 + 1;
                  lVar16 = (longlong)iVar13;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar2 + dVar27);
                  iVar14 = param_1->ArrayNum;
                  if (iVar14 == param_1->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar14 + 1;
                  lVar16 = (longlong)iVar14;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar2 + dVar27);
                  iVar15 = param_2->ArrayNum;
                  if (iVar15 == param_2->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar15;
                  param_2->ArrayNum = iVar15 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar12;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar13;
                  iVar12 = param_2->ArrayNum;
                  if (iVar12 == param_2->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar12;
                  param_2->ArrayNum = iVar12 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar14;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar11;
                }
              }
              else {
                iVar11 = param_1->ArrayNum;
                if (iVar11 == param_1->ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                fVar21 = (float)(dVar8 + dVar3);
                param_1->ArrayNum = iVar11 + 1;
                lVar16 = (longlong)iVar11;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                iVar12 = param_1->ArrayNum;
                if (iVar12 == param_1->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar12 + 1;
                lVar16 = (longlong)iVar12;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)dVar27;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                iVar13 = param_1->ArrayNum;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar13 + 1;
                lVar16 = (longlong)iVar13;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar2 + dVar27);
                iVar14 = param_1->ArrayNum;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar14 + 1;
                lVar16 = (longlong)iVar14;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = (float)(dVar2 + dVar27);
                iVar15 = param_2->ArrayNum;
                if (iVar15 == param_2->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar15;
                param_2->ArrayNum = iVar15 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar13;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar12;
                iVar12 = param_2->ArrayNum;
                if (iVar12 == param_2->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar12;
                param_2->ArrayNum = iVar12 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar11;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar14;
              }
              bVar9 = (double)CONCAT44(uVar30,uVar29) < (double)CONCAT44(uVar22,uVar20);
              if (bVar9 || (double)CONCAT44(uVar30,uVar29) == (double)CONCAT44(uVar22,uVar20)) {
                if (bVar9) {
                  iVar11 = param_1->ArrayNum;
                  if (iVar11 == param_1->ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  fVar21 = (float)(dVar2 + dVar27);
                  param_1->ArrayNum = iVar11 + 1;
                  lVar16 = (longlong)iVar11;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                  iVar12 = param_1->ArrayNum;
                  if (iVar12 == param_1->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar12 + 1;
                  lVar16 = (longlong)iVar12;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                  iVar13 = param_1->ArrayNum;
                  if (iVar13 == param_1->ArrayMax) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar13 + 1;
                  lVar16 = (longlong)iVar13;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar8 + dVar3);
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                  iVar14 = param_1->ArrayNum;
                  if (iVar14 == param_1->ArrayMax) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                  }
                  param_1->ArrayNum = iVar14 + 1;
                  lVar16 = (longlong)iVar14;
                  pFVar5 = (param_1->AllocatorInstance).Data;
                  *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                  *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar8 + dVar3);
                  *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                  iVar15 = param_2->ArrayNum;
                  if (iVar15 == param_2->ArrayMax) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar15;
                  param_2->ArrayNum = iVar15 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar12;
                  iVar12 = param_2->ArrayNum;
                  if (iVar12 == param_2->ArrayMax) {
                    iVar12 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  lVar16 = (longlong)iVar12;
                  param_2->ArrayNum = iVar12 + 1;
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                  *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar11;
                  *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar14;
                }
              }
              else {
                iVar11 = param_1->ArrayNum;
                if (iVar11 == param_1->ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                fVar21 = (float)(dVar2 + dVar27);
                param_1->ArrayNum = iVar11 + 1;
                lVar16 = (longlong)iVar11;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                iVar12 = param_1->ArrayNum;
                if (iVar12 == param_1->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar12 + 1;
                lVar16 = (longlong)iVar12;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)dVar3;
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                iVar13 = param_1->ArrayNum;
                if (iVar13 == param_1->ArrayMax) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar13 + 1;
                lVar16 = (longlong)iVar13;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)(dVar7 + dVar28);
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar8 + dVar3);
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                iVar14 = param_1->ArrayNum;
                if (iVar14 == param_1->ArrayMax) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
                }
                param_1->ArrayNum = iVar14 + 1;
                lVar16 = (longlong)iVar14;
                pFVar5 = (param_1->AllocatorInstance).Data;
                *(float *)(pFVar5 + lVar16 * 0xc) = (float)dVar28;
                *(float *)(pFVar5 + lVar16 * 0xc + 4) = (float)(dVar8 + dVar3);
                *(float *)(pFVar5 + lVar16 * 0xc + 8) = fVar21;
                iVar15 = param_2->ArrayNum;
                if (iVar15 == param_2->ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar15;
                param_2->ArrayNum = iVar15 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar11;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar12;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar13;
                iVar12 = param_2->ArrayNum;
                if (iVar12 == param_2->ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                lVar16 = (longlong)iVar12;
                param_2->ArrayNum = iVar12 + 1;
                pFVar5 = (param_2->AllocatorInstance).Data;
                *(int *)(pFVar5 + lVar16 * 0xc) = iVar13;
                *(int *)(pFVar5 + lVar16 * 0xc + 4) = iVar14;
                *(int *)(pFVar5 + lVar16 * 0xc + 8) = iVar11;
              }
              local_res8 = local_res8 + 1;
              uVar20 = (undefined4)__real_3ff0000000000000;
              uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              uVar23 = (undefined4)__real_bff0000000000000;
              uVar24 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
            } while (local_res8 < iVar4 + -1);
          }
          local_res20 = local_res20 + 1;
        } while (local_res20 < iStack_10c + -1);
      }
      local_134 = local_134 + 1;
    } while (local_134 < local_110 + -1);
  }
  return;
}

// IsFTransformArraysDifferent @ 143c0ae00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FMLLevelSet::IsFTransformArraysDifferent
          (FMLLevelSet *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  TRotator<double> *pTVar17;
  TRotator<double> *pTVar18;
  uint uVar19;
  TRotator<double> *this_00;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  double dVar29;
  double extraout_XMM0_Qb;
  double dVar38;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar50;
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  TQuat<double> local_f8;
  TQuat<double> local_d8;
  undefined1 local_b8 [16];
  double local_a8;
  TRotator<double> local_a0;
  TRotator<double> local_88;
  double local_60;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("FTransformArr1.Num() == FTransformArr2.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\MLLevelset.cpp"
                          ,0x1de,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    uVar15 = (*pcVar3)();
    return (bool)uVar15;
  }
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar16 = param_1->ArrayNum;
  uVar20 = 0;
  if (0 < iVar16) {
    lVar21 = 0;
    do {
      uVar22 = ~uVar20 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar20 < iVar16) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        uVar15 = (*pcVar3)();
        return (bool)uVar15;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + lVar21 + 0x20;
      dVar29 = *(double *)pFVar1;
      dVar47 = *(double *)(pFVar1 + 8);
      dVar39 = *(double *)(pFVar2 + lVar21 + 0x30);
      uVar19 = 0;
      if ((int)uVar20 < param_2->ArrayNum) {
        uVar19 = uVar22;
      }
      dVar38 = dVar47;
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         dVar38 = extraout_XMM0_Qb, bVar14)) {
        pcVar3 = (code *)swi(3);
        uVar15 = (*pcVar3)();
        return (bool)uVar15;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_b8 = *(undefined1 (*) [16])(pFVar1 + lVar21 + 0x20);
      local_a8 = *(double *)(pFVar1 + lVar21 + 0x30);
      auVar9._4_8_ = dVar38;
      auVar9._0_4_ = local_b8._4_4_;
      auVar31._0_8_ = auVar9._0_8_ << 0x20;
      auVar31._8_4_ = local_b8._8_4_;
      auVar31._12_4_ = local_b8._12_4_;
      dVar47 = dVar47 - auVar31._8_8_;
      dVar29 = dVar29 - local_b8._0_8_;
      dVar47 = (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) & uVar11,SUB84(dVar47,0) & uVar10)
      ;
      dVar39 = dVar39 - local_a8;
      dVar29 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar11,SUB84(dVar29,0) & uVar10)
      ;
      if (dVar47 <= dVar29) {
        dVar47 = dVar29;
      }
      dVar39 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar11,SUB84(dVar39,0) & uVar10)
      ;
      if (dVar47 <= dVar39) {
        dVar47 = dVar39;
      }
      if (param_3 < dVar47) {
        return true;
      }
      uVar19 = 0;
      if ((int)uVar20 < param_1->ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        uVar15 = (*pcVar3)();
        return (bool)uVar15;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar2 + lVar21;
      local_f8.X = *(double *)pFVar1;
      local_f8.Y = *(double *)(pFVar1 + 8);
      pFVar2 = pFVar2 + lVar21 + 0x10;
      local_f8.Z = *(double *)pFVar2;
      local_f8.W = *(double *)(pFVar2 + 8);
      pTVar17 = UE::Math::TRotator<double>::TRotator<double>(&local_a0,&local_f8);
      uVar19 = 0;
      if ((int)uVar20 < param_2->ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        uVar15 = (*pcVar3)();
        return (bool)uVar15;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      this_00 = &local_88;
      pFVar1 = pFVar2 + lVar21;
      local_d8.X = *(double *)pFVar1;
      local_d8.Y = *(double *)(pFVar1 + 8);
      pFVar2 = pFVar2 + lVar21 + 0x10;
      local_d8.Z = *(double *)pFVar2;
      local_d8.W = *(double *)(pFVar2 + 8);
      pTVar18 = UE::Math::TRotator<double>::TRotator<double>(this_00,&local_d8);
      auVar32._0_8_ = pTVar17->Roll - pTVar18->Roll;
      dVar48 = pTVar17->Pitch - pTVar18->Pitch;
      auVar40._0_8_ = pTVar17->Yaw - pTVar18->Yaw;
      auVar40._8_8_ = 0;
      auVar30._8_4_ = SUB84(auVar40._0_8_,0);
      auVar30._0_8_ = dVar48;
      auVar30._12_4_ = (int)((ulonglong)auVar40._0_8_ >> 0x20);
      auVar31 = divpd(auVar30,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar31 = roundpd(auVar40,auVar31,3);
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar41._0_8_ = auVar31._0_8_ * dVar7;
      dVar8 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar41._8_8_ = auVar31._8_8_ * dVar8;
      auVar32._8_8_ = 0;
      dVar48 = dVar48 - auVar41._0_8_;
      dVar50 = auVar40._0_8_ - auVar41._8_8_;
      auVar31 = divpd(auVar32,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar31 = roundpd(auVar41,auVar31,3);
      dVar47 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar38 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar33._8_4_ = SUB84(dVar50,0);
      auVar33._0_8_ = dVar48;
      auVar33._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      dVar39 = auVar32._0_8_ - auVar31._0_8_ * dVar47;
      dVar29 = 0.0 - auVar31._8_8_ * dVar38;
      uVar23 = -(ulonglong)(0.0 <= dVar48);
      uVar25 = -(ulonglong)(0.0 <= dVar50);
      auVar42._0_8_ = uVar23 & (ulonglong)dVar48;
      auVar42._8_4_ = (undefined4)(uVar25 & (ulonglong)dVar50);
      auVar42._12_4_ = (undefined4)((uVar25 & (ulonglong)dVar50) >> 0x20);
      dVar50 = auVar33._8_8_ + dVar8;
      uVar24 = -(ulonglong)(0.0 <= dVar39);
      uVar26 = -(ulonglong)(0.0 <= dVar29);
      auVar51._0_4_ = ~(uint)uVar23 & SUB84(dVar48 + dVar7,0);
      auVar51._4_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)(dVar48 + dVar7) >> 0x20);
      auVar51._8_4_ = ~(uint)uVar25 & SUB84(dVar50,0);
      auVar51._12_4_ = ~(uint)(uVar25 >> 0x20) & (uint)((ulonglong)dVar50 >> 0x20);
      auVar51 = auVar51 | auVar42;
      auVar34._8_4_ = SUB84(dVar29,0);
      auVar34._0_8_ = dVar39;
      auVar34._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      dVar50 = auVar34._8_8_ + dVar38;
      uVar25 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar51._0_8_);
      uVar27 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar51._8_8_);
      auVar49._0_4_ = ~(uint)uVar24 & SUB84(dVar39 + dVar47,0);
      auVar49._4_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)(dVar39 + dVar47) >> 0x20);
      auVar49._8_4_ = ~(uint)uVar26 & SUB84(dVar50,0);
      auVar49._12_4_ = ~(uint)(uVar26 >> 0x20) & (uint)((ulonglong)dVar50 >> 0x20);
      auVar4._8_4_ = (int)((ulonglong)dVar29 & uVar26);
      auVar4._0_8_ = (ulonglong)dVar39 & uVar24;
      auVar4._12_4_ = (int)(((ulonglong)dVar29 & uVar26) >> 0x20);
      auVar49 = auVar49 | auVar4;
      uVar24 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar49._0_8_);
      uVar26 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar49._8_8_);
      auVar43._0_8_ = uVar24 & (ulonglong)(auVar49._0_8_ - dVar47);
      uVar23 = uVar26 & (ulonglong)(auVar49._8_8_ - dVar38);
      auVar43._8_4_ = (undefined4)uVar23;
      auVar43._12_4_ = (undefined4)(uVar23 >> 0x20);
      auVar35._0_4_ = ~(uint)uVar24 & auVar49._0_4_;
      auVar35._4_4_ = ~(uint)(uVar24 >> 0x20) & auVar49._4_4_;
      auVar35._8_4_ = ~(uint)uVar26 & auVar49._8_4_;
      auVar35._12_4_ = ~(uint)(uVar26 >> 0x20) & auVar49._12_4_;
      auVar43 = auVar43 | auVar35;
      auVar36._8_4_ = SUB84(param_3,0);
      auVar36._0_8_ = param_3;
      auVar36._12_4_ = (int)((ulonglong)param_3 >> 0x20);
      auVar44._0_8_ = (double)CONCAT44(auVar43._4_4_ & uVar11,auVar43._0_4_ & uVar10);
      auVar44._8_4_ = auVar43._8_4_ & uVar12;
      auVar44._12_4_ = auVar43._12_4_ & uVar13;
      auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < auVar44._8_8_);
      auVar37._0_8_ = -(ulonglong)(param_3 < auVar44._0_8_);
      uVar19 = movmskpd((int)this_00,auVar37);
      auVar45._0_8_ = uVar25 & (ulonglong)(auVar51._0_8_ - dVar7);
      uVar23 = uVar27 & (ulonglong)(auVar51._8_8_ - dVar8);
      auVar45._8_4_ = (undefined4)uVar23;
      auVar45._12_4_ = (undefined4)(uVar23 >> 0x20);
      auVar6._4_4_ = ~(uint)(uVar25 >> 0x20) & auVar51._4_4_;
      auVar6._0_4_ = ~(uint)uVar25 & auVar51._0_4_;
      auVar6._8_4_ = ~(uint)uVar27 & auVar51._8_4_;
      auVar6._12_4_ = ~(uint)(uVar27 >> 0x20) & auVar51._12_4_;
      auVar45 = auVar45 | auVar6;
      auVar46._0_8_ = (double)CONCAT44(auVar45._4_4_ & uVar11,auVar45._0_4_ & uVar10);
      auVar46._8_4_ = auVar45._8_4_ & uVar12;
      auVar46._12_4_ = auVar45._12_4_ & uVar13;
      lVar28 = -(ulonglong)(param_3 < auVar46._8_8_);
      auVar5._8_4_ = (int)lVar28;
      auVar5._0_8_ = -(ulonglong)(param_3 < auVar46._0_8_);
      auVar5._12_4_ = (int)((ulonglong)lVar28 >> 0x20);
      iVar16 = movmskpd((int)pTVar18,auVar5);
      if ((uVar19 & 0x3fffffff) != 0 || iVar16 != 0) {
        return true;
      }
      iVar16 = param_1->ArrayNum;
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0x60;
      local_60 = auVar32._0_8_;
    } while ((int)uVar20 < iVar16);
  }
  return false;
}

// LoadMLModelWeightsFromString @ 143c0bac0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FMLLevelSet::LoadMLModelWeightsFromString
          (FMLLevelSet *this,FString *param_1,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  wchar_t *_Str;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  double dVar15;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58 [2];
  
  uVar5 = 0;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,local_58,L"|",true);
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)(param_2->AllocatorInstance).Data,
             param_2->ArrayNum);
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,local_58[0].ArrayNum,Default);
  uVar12 = uVar5;
  if (0 < local_58[0].ArrayNum) {
    do {
      uVar8 = 0;
      uVar11 = (uint)uVar5;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      uVar6 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < local_58[0].ArrayNum) {
        uVar9 = uVar6;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::ParseIntoArray
                ((FString *)(local_58[0].AllocatorInstance.Data + uVar12),&local_68,L",",true);
      uVar9 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = uVar6;
      }
      if ((uVar9 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar10 = (param_2->AllocatorInstance).Data + uVar12;
      iVar7 = *(int *)(pFVar10 + 0xc);
      *(undefined4 *)&pFVar10[8].field_0x0 = 0;
      if (iVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar10,0,(int *)(pFVar10 + 0xc));
      }
      uVar5 = uVar8;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar5 = (ulonglong)uVar6;
      }
      if (((int)uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = local_68.ArrayNum;
      pFVar13 = (param_2->AllocatorInstance).Data + uVar12;
      iVar7 = *(int *)&pFVar13[8].field_0x0;
      pFVar10 = pFVar13 + 8;
      if (iVar7 < local_68.ArrayNum) {
        iVar7 = local_68.ArrayNum - iVar7;
        iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar7,(ForAnyElementType *)pFVar13,(int *)pFVar10,
                           (int *)(pFVar13 + 0xc));
        memset((void *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar3 * 4),0,
               (longlong)iVar7 << 2);
      }
      else {
        if (local_68.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(local_68._8_8_ & 0xffffffff);
        }
        if (local_68.ArrayNum < iVar7) {
          uVar9 = iVar7 - local_68.ArrayNum;
          if (((int)(local_68.ArrayNum | uVar9) < 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (uVar9 != 0) {
            _Dst = (void *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar3 * 4);
            iVar7 = (*(int *)&pFVar10->field_0x0 - iVar3) - uVar9;
            if (iVar7 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar9 * 4),(longlong)iVar7 << 2)
              ;
            }
            *(uint *)&pFVar10->field_0x0 = *(int *)&pFVar10->field_0x0 - uVar9;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)pFVar13,*(int *)&pFVar10->field_0x0,
                       (int *)(pFVar13 + 0xc));
          }
        }
      }
      lVar14 = 0;
      uVar5 = uVar8;
      while( true ) {
        uVar9 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar9 = uVar6;
        }
        if ((uVar9 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar9 = (uint)uVar5;
        if (*(int *)((param_2->AllocatorInstance).Data + uVar12 + 8) <= (int)uVar9) break;
        uVar4 = 0;
        if ((int)uVar9 < local_68.ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_68.AllocatorInstance.Data + lVar14 + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)(local_68.AllocatorInstance.Data + lVar14);
        }
        dVar15 = _wtof(_Str);
        uVar4 = 0;
        if ((int)uVar11 < param_2->ArrayNum) {
          uVar4 = uVar6;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar10 = (param_2->AllocatorInstance).Data;
        uVar4 = 0;
        if ((int)uVar9 < *(int *)(pFVar10 + uVar12 + 8)) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = (ulonglong)(uVar9 + 1);
        *(float *)(*(longlong *)(pFVar10 + uVar12) + uVar8 * 4) = (float)dVar15;
        uVar8 = uVar8 + 1;
        lVar14 = lVar14 + 0x10;
      }
      DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      uVar5 = (ulonglong)(uVar11 + 1);
      uVar12 = uVar12 + 0x10;
    } while ((int)(uVar11 + 1) < local_58[0].ArrayNum);
  }
  DestructItems<FString,int>((FString *)local_58[0].AllocatorInstance.Data,local_58[0].ArrayNum);
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return;
}

// PhiWithNormal @ 143c0f680

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
Chaos::FMLLevelSet::PhiWithNormal
          (FMLLevelSet *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  if (1 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  return __real_47eff933c78cdfad;
}

// ProcessTrainingGridAxesVectors @ 143c0fa00

void __thiscall Chaos::FMLLevelSet::ProcessTrainingGridAxesVectors(FMLLevelSet *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  
  if (((this->TrainingGridUnitAxesXYZ).ArrayNum != 3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TrainingGridUnitAxesXYZ.Num() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\MLLevelset.cpp"
                         ,0x187,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar1 = &this->TrainingGridAxesLengthsXYZ;
  uVar12 = 0;
  piVar2 = &(this->TrainingGridAxesLengthsXYZ).ArrayMax;
  (this->TrainingGridAxesLengthsXYZ).ArrayNum = 0;
  piVar3 = &(this->TrainingGridAxesLengthsXYZ).ArrayNum;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar14 = *piVar3;
  uVar13 = uVar12;
  uVar15 = uVar12;
  if (iVar14 < 3) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,3 - iVar14,&pTVar1->AllocatorInstance,piVar3,piVar2);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 4,0,(longlong)(3 - iVar14) << 2);
    fVar8 = __real_3f800000;
  }
  else {
    fVar8 = __real_3f800000;
    if (3 < iVar14) {
      iVar14 = iVar14 + -3;
      if (iVar14 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else if (iVar14 == 0) goto LAB_143c0fb83;
      pFVar11 = (pTVar1->AllocatorInstance).Data + 0xc;
      iVar10 = (*piVar3 - iVar14) + -3;
      if (iVar10 != 0) {
        memmove(pFVar11,pFVar11 + (longlong)iVar14 * 4,(longlong)iVar10 << 2);
      }
      *piVar3 = *piVar3 - iVar14;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&pTVar1->AllocatorInstance,*piVar3,piVar2);
      fVar8 = __real_3f800000;
    }
  }
LAB_143c0fb83:
  while( true ) {
    iVar14 = (int)uVar12;
    if (((this->TrainingGridUnitAxesXYZ).ArrayNum <= iVar14) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar11 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
    fVar4 = *(float *)(pFVar11 + uVar13);
    fVar5 = *(float *)(pFVar11 + uVar13 + 4);
    fVar6 = *(float *)(pFVar11 + uVar13 + 8);
    if ((*piVar3 <= iVar14) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(float *)((pTVar1->AllocatorInstance).Data + uVar15 * 4) =
         SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
    if (((this->TrainingGridUnitAxesXYZ).ArrayNum <= iVar14) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar11 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
    if ((*piVar3 <= iVar14) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    fVar16 = fVar8 / *(float *)((pTVar1->AllocatorInstance).Data + uVar15 * 4);
    fVar4 = *(float *)(pFVar11 + uVar13);
    fVar5 = *(float *)(pFVar11 + uVar13 + 4);
    fVar6 = *(float *)(pFVar11 + uVar13 + 8);
    if (((this->TrainingGridUnitAxesXYZ).ArrayNum <= iVar14) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar11 = (this->TrainingGridUnitAxesXYZ).AllocatorInstance.Data;
    uVar12 = (ulonglong)(iVar14 + 1U);
    *(float *)(pFVar11 + uVar13) = fVar16 * fVar4;
    *(float *)(pFVar11 + uVar13 + 4) = fVar16 * fVar5;
    *(float *)(pFVar11 + uVar13 + 8) = fVar16 * fVar6;
    uVar13 = uVar13 + 0xc;
    uVar15 = uVar15 + 1;
    if (2 < (int)(iVar14 + 1U)) {
      return;
    }
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// Serialize @ 143c14410

void __thiscall Chaos::FMLLevelSet::Serialize(FMLLevelSet *this,FArchive *param_1)

{
  float *pfVar1;
  TArray<Chaos::FMLLevelSetNeuralInference,TSizedDefaultAllocator<32>_> *pTVar2;
  float *pfVar3;
  int *piVar4;
  FMLLevelSetNeuralInference *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FMLLevelSetNeuralInference *pFVar10;
  FScriptContainerElement *pFVar11;
  TSharedPtr<UE::NNE::IModelCPU,1> local_a8;
  TSharedPtr<UE::NNE::IModelCPU,1> local_98;
  FMLLevelSetNeuralInference local_88;
  FMLLevelSetNeuralInference local_58;
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,param_1);
  TBox<double,3>::SerializeAsAABB(param_1,&this->LocalBoundingBox);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&this->ActiveBoneNames);
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ActiveBonesRelativeTransforms);
  TArrayPrivateFriend::
  Serialize<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->SignedDistanceModelWeights);
  TArrayPrivateFriend::
  Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->SignedDistanceModelWeightsShapes);
  TArrayPrivateFriend::
  Serialize<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->IncorrectZoneModelWeights);
  TArrayPrivateFriend::
  Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->IncorrectZoneModelWeightsShapes);
  ::operator<<(param_1,&this->bUseIncorrectZoneModel);
  pfVar1 = &this->SignedDistanceScaling;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&this->TrainingGridMin);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&this->TrainingGridUnitAxesXYZ);
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            (param_1,&this->TrainingGridAxesLengthsXYZ);
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->TotalNumberOfRotationComponents);
    }
  }
  else {
    this->TotalNumberOfRotationComponents = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ActiveBonesRotationComponents);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ActiveBonesReferenceRotations);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&this->ActiveBonesReferenceTranslations);
  SerializeReal<double,3>(param_1,(TVector<double,3> *)&this->DebugGrid);
  SerializeReal<double,3>(param_1,(TVector<double,3> *)&(this->DebugGrid).field_0x18);
  operator<<<int,3>(param_1,(TVector<int,3> *)&(this->DebugGrid).field_0x30);
  SerializeReal<double,3>(param_1,(TVector<double,3> *)&(this->DebugGrid).field_0x40);
  operator<<<Chaos::TArrayND<double,3>_double_3>
            (param_1,(TArrayNDBase<Chaos::TArrayND<double,3>,double,3> *)&this->DebugPhi);
  if ((param_1->field_0x28 & 1) != 0) {
    DestructItems<Chaos::FMLLevelSetNeuralInference,int>
              ((FMLLevelSetNeuralInference *)
               (this->SignedDistanceNeuralInferences).AllocatorInstance.Data,
               (this->SignedDistanceNeuralInferences).ArrayNum);
    piVar4 = &(this->SignedDistanceNeuralInferences).ArrayMax;
    (this->SignedDistanceNeuralInferences).ArrayNum = 0;
    if (*piVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->SignedDistanceNeuralInferences).AllocatorInstance,0,piVar4);
    }
    local_a8.Object = (this->NNESignedDistanceModel).Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10 = FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
                        (&local_88,&local_a8,&this->SignedDistanceModelWeightsShapes);
    pFVar5 = (FMLLevelSetNeuralInference *)
             (this->SignedDistanceNeuralInferences).AllocatorInstance.Data;
    if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + *piVar4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (this->SignedDistanceNeuralInferences).ArrayNum;
    if (iVar9 == *piVar4) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->SignedDistanceNeuralInferences).AllocatorInstance,piVar4);
    }
    (this->SignedDistanceNeuralInferences).ArrayNum = iVar9 + 1;
    pFVar11 = (this->SignedDistanceNeuralInferences).AllocatorInstance.Data + (longlong)iVar9 * 0x30
    ;
    *(IModelCPU **)pFVar11 = (pFVar10->NNEModel).Object;
    pTVar6 = (pFVar10->NNEModel).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IModelInstanceCPU **)(pFVar11 + 0x10) = (pFVar10->ModelInstance).Object;
    pTVar6 = (pFVar10->ModelInstance).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar11 + 0x18) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined8 *)(pFVar11 + 0x20) = 0;
    *(FScriptContainerElement **)(pFVar11 + 0x20) =
         (pFVar10->ModelWeightsShapes).AllocatorInstance.Data;
    (pFVar10->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 0x28) = (pFVar10->ModelWeightsShapes).ArrayNum;
    *(int *)(pFVar11 + 0x2c) = (pFVar10->ModelWeightsShapes).ArrayMax;
    (pFVar10->ModelWeightsShapes).ArrayNum = 0;
    (pFVar10->ModelWeightsShapes).ArrayMax = 0;
    DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
               local_88.ModelWeightsShapes.AllocatorInstance.Data,
               local_88.ModelWeightsShapes.ArrayNum);
    if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
        local_88.ModelWeightsShapes.AllocatorInstance.Data !=
        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_88.ModelWeightsShapes.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.ModelInstance.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.NNEModel.SharedReferenceCount.ReferenceController);
    if (this->bUseIncorrectZoneModel != false) {
      pTVar2 = &this->IncorrectZoneNeuralInferences;
      DestructItems<Chaos::FMLLevelSetNeuralInference,int>
                ((FMLLevelSetNeuralInference *)(pTVar2->AllocatorInstance).Data,
                 (this->IncorrectZoneNeuralInferences).ArrayNum);
      piVar4 = &(this->IncorrectZoneNeuralInferences).ArrayMax;
      (this->IncorrectZoneNeuralInferences).ArrayNum = 0;
      if (*piVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&pTVar2->AllocatorInstance,0,piVar4);
      }
      local_98.Object = (this->NNEIncorrectZoneModel).Object;
      local_98.SharedReferenceCount.ReferenceController =
           (this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar10 = FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
                          (&local_58,&local_98,&this->IncorrectZoneModelWeightsShapes);
      pFVar5 = (FMLLevelSetNeuralInference *)(pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + *piVar4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->IncorrectZoneNeuralInferences).ArrayNum;
      if (iVar9 == *piVar4) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&pTVar2->AllocatorInstance,piVar4);
      }
      (this->IncorrectZoneNeuralInferences).ArrayNum = iVar9 + 1;
      pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
      *(IModelCPU **)pFVar11 = (pFVar10->NNEModel).Object;
      pTVar6 = (pFVar10->NNEModel).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IModelInstanceCPU **)(pFVar11 + 0x10) = (pFVar10->ModelInstance).Object;
      pTVar6 = (pFVar10->ModelInstance).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar11 + 0x18) = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined8 *)(pFVar11 + 0x20) = 0;
      *(FScriptContainerElement **)(pFVar11 + 0x20) =
           (pFVar10->ModelWeightsShapes).AllocatorInstance.Data;
      (pFVar10->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 0x28) = (pFVar10->ModelWeightsShapes).ArrayNum;
      *(int *)(pFVar11 + 0x2c) = (pFVar10->ModelWeightsShapes).ArrayMax;
      (pFVar10->ModelWeightsShapes).ArrayNum = 0;
      (pFVar10->ModelWeightsShapes).ArrayMax = 0;
      DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                 local_58.ModelWeightsShapes.AllocatorInstance.Data,
                 local_58.ModelWeightsShapes.ArrayNum);
      if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
          local_58.ModelWeightsShapes.AllocatorInstance.Data !=
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_58.ModelWeightsShapes.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.ModelInstance.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.NNEModel.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// Serialize @ 143c14950

void __thiscall Chaos::FMLLevelSet::Serialize(FMLLevelSet *this,FChaosArchive *param_1)

{
  float *pfVar1;
  TArray<Chaos::FMLLevelSetNeuralInference,TSizedDefaultAllocator<32>_> *pTVar2;
  float *pfVar3;
  int *piVar4;
  FMLLevelSetNeuralInference *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FMLLevelSetNeuralInference *pFVar10;
  FScriptContainerElement *pFVar11;
  TSharedPtr<UE::NNE::IModelCPU,1> local_a8;
  TSharedPtr<UE::NNE::IModelCPU,1> local_98;
  FMLLevelSetNeuralInference local_88;
  FMLLevelSetNeuralInference local_58;
  
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&this->LocalBoundingBox);
  TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->ActiveBoneNames);
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->ActiveBonesRelativeTransforms);
  TArrayPrivateFriend::
  Serialize<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->SignedDistanceModelWeights);
  TArrayPrivateFriend::
  Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->SignedDistanceModelWeightsShapes);
  TArrayPrivateFriend::
  Serialize<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->IncorrectZoneModelWeights);
  TArrayPrivateFriend::
  Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->IncorrectZoneModelWeightsShapes);
  ::operator<<((FArchive *)param_1,&this->bUseIncorrectZoneModel);
  pfVar1 = &this->SignedDistanceScaling;
  pfVar3 = *(float **)param_1->_padding_;
  if ((float *)((undefined8 *)param_1->_padding_)[1] < pfVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  UE::Math::operator<<((FArchive *)param_1,&this->TrainingGridMin);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->TrainingGridUnitAxesXYZ);
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->TrainingGridAxesLengthsXYZ);
  piVar4 = *(int **)param_1->_padding_;
  if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar4 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped
                ((FArchive *)param_1,(uint *)&this->TotalNumberOfRotationComponents);
    }
  }
  else {
    this->TotalNumberOfRotationComponents = *piVar4;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  TArrayPrivateFriend::
  Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->ActiveBonesRotationComponents);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->ActiveBonesReferenceRotations);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            ((FArchive *)param_1,&this->ActiveBonesReferenceTranslations);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&this->DebugGrid);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&(this->DebugGrid).field_0x18);
  operator<<<int,3>((FArchive *)param_1,(TVector<int,3> *)&(this->DebugGrid).field_0x30);
  SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&(this->DebugGrid).field_0x40);
  operator<<<Chaos::TArrayND<double,3>_double_3>
            ((FArchive *)param_1,(TArrayNDBase<Chaos::TArrayND<double,3>,double,3> *)&this->DebugPhi
            );
  if ((param_1->_padding_ & 1) != 0) {
    DestructItems<Chaos::FMLLevelSetNeuralInference,int>
              ((FMLLevelSetNeuralInference *)
               (this->SignedDistanceNeuralInferences).AllocatorInstance.Data,
               (this->SignedDistanceNeuralInferences).ArrayNum);
    piVar4 = &(this->SignedDistanceNeuralInferences).ArrayMax;
    (this->SignedDistanceNeuralInferences).ArrayNum = 0;
    if (*piVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->SignedDistanceNeuralInferences).AllocatorInstance,0,piVar4);
    }
    local_a8.Object = (this->NNESignedDistanceModel).Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar10 = FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
                        (&local_88,&local_a8,&this->SignedDistanceModelWeightsShapes);
    pFVar5 = (FMLLevelSetNeuralInference *)
             (this->SignedDistanceNeuralInferences).AllocatorInstance.Data;
    if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + *piVar4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (this->SignedDistanceNeuralInferences).ArrayNum;
    if (iVar9 == *piVar4) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->SignedDistanceNeuralInferences).AllocatorInstance,piVar4);
    }
    (this->SignedDistanceNeuralInferences).ArrayNum = iVar9 + 1;
    pFVar11 = (this->SignedDistanceNeuralInferences).AllocatorInstance.Data + (longlong)iVar9 * 0x30
    ;
    *(IModelCPU **)pFVar11 = (pFVar10->NNEModel).Object;
    pTVar6 = (pFVar10->NNEModel).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IModelInstanceCPU **)(pFVar11 + 0x10) = (pFVar10->ModelInstance).Object;
    pTVar6 = (pFVar10->ModelInstance).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar11 + 0x18) = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined8 *)(pFVar11 + 0x20) = 0;
    *(FScriptContainerElement **)(pFVar11 + 0x20) =
         (pFVar10->ModelWeightsShapes).AllocatorInstance.Data;
    (pFVar10->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar11 + 0x28) = (pFVar10->ModelWeightsShapes).ArrayNum;
    *(int *)(pFVar11 + 0x2c) = (pFVar10->ModelWeightsShapes).ArrayMax;
    (pFVar10->ModelWeightsShapes).ArrayNum = 0;
    (pFVar10->ModelWeightsShapes).ArrayMax = 0;
    DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
               local_88.ModelWeightsShapes.AllocatorInstance.Data,
               local_88.ModelWeightsShapes.ArrayNum);
    if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
        local_88.ModelWeightsShapes.AllocatorInstance.Data !=
        (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_88.ModelWeightsShapes.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.ModelInstance.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.NNEModel.SharedReferenceCount.ReferenceController);
    if (this->bUseIncorrectZoneModel != false) {
      pTVar2 = &this->IncorrectZoneNeuralInferences;
      DestructItems<Chaos::FMLLevelSetNeuralInference,int>
                ((FMLLevelSetNeuralInference *)(pTVar2->AllocatorInstance).Data,
                 (this->IncorrectZoneNeuralInferences).ArrayNum);
      piVar4 = &(this->IncorrectZoneNeuralInferences).ArrayMax;
      (this->IncorrectZoneNeuralInferences).ArrayNum = 0;
      if (*piVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&pTVar2->AllocatorInstance,0,piVar4);
      }
      local_98.Object = (this->NNEIncorrectZoneModel).Object;
      local_98.SharedReferenceCount.ReferenceController =
           (this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController;
      if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar10 = FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
                          (&local_58,&local_98,&this->IncorrectZoneModelWeightsShapes);
      pFVar5 = (FMLLevelSetNeuralInference *)(pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + *piVar4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->IncorrectZoneNeuralInferences).ArrayNum;
      if (iVar9 == *piVar4) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&pTVar2->AllocatorInstance,piVar4);
      }
      (this->IncorrectZoneNeuralInferences).ArrayNum = iVar9 + 1;
      pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
      *(IModelCPU **)pFVar11 = (pFVar10->NNEModel).Object;
      pTVar6 = (pFVar10->NNEModel).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IModelInstanceCPU **)(pFVar11 + 0x10) = (pFVar10->ModelInstance).Object;
      pTVar6 = (pFVar10->ModelInstance).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar11 + 0x18) = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined8 *)(pFVar11 + 0x20) = 0;
      *(FScriptContainerElement **)(pFVar11 + 0x20) =
           (pFVar10->ModelWeightsShapes).AllocatorInstance.Data;
      (pFVar10->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar11 + 0x28) = (pFVar10->ModelWeightsShapes).ArrayNum;
      *(int *)(pFVar11 + 0x2c) = (pFVar10->ModelWeightsShapes).ArrayMax;
      (pFVar10->ModelWeightsShapes).ArrayNum = 0;
      (pFVar10->ModelWeightsShapes).ArrayMax = 0;
      DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                 local_58.ModelWeightsShapes.AllocatorInstance.Data,
                 local_58.ModelWeightsShapes.ArrayNum);
      if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
          local_58.ModelWeightsShapes.AllocatorInstance.Data !=
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_58.ModelWeightsShapes.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.ModelInstance.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.NNEModel.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// SignedDistance @ 143c1a6a0

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall Chaos::FMLLevelSet::SignedDistance(FMLLevelSet *this,TVector<double,3> *param_1)

{
  if (1 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  return __real_47eff933c78cdfad;
}

// UpdateActiveBonesRelativeTransforms @ 143c1b500

void __thiscall
Chaos::FMLLevelSet::UpdateActiveBonesRelativeTransforms
          (FMLLevelSet *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pTVar1 = &this->ActiveBonesRelativeTransforms;
  bVar3 = IsFTransformArraysDifferent(this,pTVar1,param_1,__real_3f1a36e2e0000000);
  if (bVar3) {
    if (pTVar1 != param_1) {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->ActiveBonesRelativeTransforms).ArrayNum = param_1->ArrayNum;
      (this->ActiveBonesRelativeTransforms).ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
    }
    if (MLLevelSetUpdatePhiFlag == 1) {
      CreatePhiFromMLModel(this);
    }
  }
  return;
}

// UpdateActiveBonesRelativeTransformsAndUpdateDebugPhi @ 143c1b590

void __thiscall
Chaos::FMLLevelSet::UpdateActiveBonesRelativeTransformsAndUpdateDebugPhi
          (FMLLevelSet *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pTVar1 = &this->ActiveBonesRelativeTransforms;
  bVar3 = IsFTransformArraysDifferent(this,pTVar1,param_1,__real_3f1a36e2e0000000);
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ActiveBonesRelativeTransforms).ArrayNum = param_1->ArrayNum;
    (this->ActiveBonesRelativeTransforms).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  if (bVar3) {
    CreatePhiFromMLModel(this);
  }
  return;
}

// UpdateNeuralInferencesNumber @ 143c1cb50

void __thiscall Chaos::FMLLevelSet::UpdateNeuralInferencesNumber(FMLLevelSet *this,int param_1)

{
  int *piVar1;
  TArray<Chaos::FMLLevelSetNeuralInference,TSizedDefaultAllocator<32>_> *pTVar2;
  FMLLevelSetNeuralInference *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMLLevelSetNeuralInference *pFVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  TSharedPtr<UE::NNE::IModelCPU,1> local_a8;
  TSharedPtr<UE::NNE::IModelCPU,1> local_98;
  FMLLevelSetNeuralInference local_88;
  FMLLevelSetNeuralInference local_58;
  
  iVar7 = (this->SignedDistanceNeuralInferences).ArrayNum;
  if (iVar7 < param_1) {
    uVar10 = (ulonglong)(uint)(param_1 - iVar7);
    do {
      local_a8.Object = (this->NNESignedDistanceModel).Object;
      local_a8.SharedReferenceCount.ReferenceController =
           (this->NNESignedDistanceModel).SharedReferenceCount.ReferenceController;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8 = FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
                         (&local_88,&local_a8,&this->SignedDistanceModelWeightsShapes);
      pFVar3 = (FMLLevelSetNeuralInference *)
               (this->SignedDistanceNeuralInferences).AllocatorInstance.Data;
      if (((pFVar3 <= pFVar8) && (pFVar8 < pFVar3 + (this->SignedDistanceNeuralInferences).ArrayMax)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->SignedDistanceNeuralInferences).ArrayNum;
      if (iVar7 == (this->SignedDistanceNeuralInferences).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&(this->SignedDistanceNeuralInferences).AllocatorInstance,
                           &(this->SignedDistanceNeuralInferences).ArrayMax);
      }
      (this->SignedDistanceNeuralInferences).ArrayNum = iVar7 + 1;
      pFVar9 = (this->SignedDistanceNeuralInferences).AllocatorInstance.Data +
               (longlong)iVar7 * 0x30;
      *(IModelCPU **)pFVar9 = (pFVar8->NNEModel).Object;
      pTVar4 = (pFVar8->NNEModel).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IModelInstanceCPU **)(pFVar9 + 0x10) = (pFVar8->ModelInstance).Object;
      pTVar4 = (pFVar8->ModelInstance).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar9 + 0x18) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined8 *)(pFVar9 + 0x20) = 0;
      *(FScriptContainerElement **)(pFVar9 + 0x20) =
           (pFVar8->ModelWeightsShapes).AllocatorInstance.Data;
      (pFVar8->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 0x28) = (pFVar8->ModelWeightsShapes).ArrayNum;
      *(int *)(pFVar9 + 0x2c) = (pFVar8->ModelWeightsShapes).ArrayMax;
      (pFVar8->ModelWeightsShapes).ArrayNum = 0;
      (pFVar8->ModelWeightsShapes).ArrayMax = 0;
      DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                 local_88.ModelWeightsShapes.AllocatorInstance.Data,
                 local_88.ModelWeightsShapes.ArrayNum);
      if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
          local_88.ModelWeightsShapes.AllocatorInstance.Data !=
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_88.ModelWeightsShapes.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.ModelInstance.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.NNEModel.SharedReferenceCount.ReferenceController);
      if (this->bUseIncorrectZoneModel != false) {
        local_98.Object = (this->NNEIncorrectZoneModel).Object;
        pTVar2 = &this->IncorrectZoneNeuralInferences;
        local_98.SharedReferenceCount.ReferenceController =
             (this->NNEIncorrectZoneModel).SharedReferenceCount.ReferenceController;
        if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar8 = FMLLevelSetNeuralInference::FMLLevelSetNeuralInference
                           (&local_58,&local_98,&this->IncorrectZoneModelWeightsShapes);
        pFVar3 = (FMLLevelSetNeuralInference *)(pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar8) &&
            (pFVar8 < pFVar3 + (this->IncorrectZoneNeuralInferences).ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (this->IncorrectZoneNeuralInferences).ArrayNum;
        piVar1 = &(this->IncorrectZoneNeuralInferences).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->IncorrectZoneNeuralInferences).ArrayNum = iVar7 + 1;
        pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
        *(IModelCPU **)pFVar9 = (pFVar8->NNEModel).Object;
        pTVar4 = (pFVar8->NNEModel).SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(IModelInstanceCPU **)(pFVar9 + 0x10) = (pFVar8->ModelInstance).Object;
        pTVar4 = (pFVar8->ModelInstance).SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)(pFVar9 + 0x18) = pTVar4;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined8 *)(pFVar9 + 0x20) = 0;
        *(FScriptContainerElement **)(pFVar9 + 0x20) =
             (pFVar8->ModelWeightsShapes).AllocatorInstance.Data;
        (pFVar8->ModelWeightsShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar9 + 0x28) = (pFVar8->ModelWeightsShapes).ArrayNum;
        *(int *)(pFVar9 + 0x2c) = (pFVar8->ModelWeightsShapes).ArrayMax;
        (pFVar8->ModelWeightsShapes).ArrayNum = 0;
        (pFVar8->ModelWeightsShapes).ArrayMax = 0;
        DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                   local_58.ModelWeightsShapes.AllocatorInstance.Data,
                   local_58.ModelWeightsShapes.ArrayNum);
        if ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
            local_58.ModelWeightsShapes.AllocatorInstance.Data !=
            (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_58.ModelWeightsShapes.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.ModelInstance.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.NNEModel.SharedReferenceCount.ReferenceController);
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}


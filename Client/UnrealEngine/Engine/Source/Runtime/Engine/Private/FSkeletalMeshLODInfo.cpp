// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FSkeletalMeshLODInfo @ 1485a4c30

FSkeletalMeshLODInfo * __thiscall
FSkeletalMeshLODInfo::FSkeletalMeshLODInfo(FSkeletalMeshLODInfo *this,FSkeletalMeshLODInfo *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FSectionReference,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FSkeletalMeshVertexAttributeInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UAnimSequence *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined3 uVar12;
  uint uVar13;
  TEnumAsByte<SkeletalMeshOptimizationType> TVar14;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar15;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar16;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar17;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar18;
  undefined4 uVar19;
  byte bVar20;
  
  pTVar1 = &this->LODMaterialMap;
  (this->ScreenSize).Default = (param_1->ScreenSize).Default;
  this->LODHysteresis = param_1->LODHysteresis;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LODMaterialMap).ArrayMax;
  iVar6 = (param_1->LODMaterialMap).ArrayNum;
  pFVar7 = (param_1->LODMaterialMap).AllocatorInstance.Data;
  (this->LODMaterialMap).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  fVar9 = (param_1->BuildSettings).ThresholdPosition;
  fVar10 = (param_1->BuildSettings).ThresholdTangentNormal;
  fVar11 = (param_1->BuildSettings).ThresholdUV;
  pTVar3 = &this->BonesToRemove;
  *(undefined4 *)&(this->BuildSettings).field_0x0 =
       *(undefined4 *)&(param_1->BuildSettings).field_0x0;
  (this->BuildSettings).ThresholdPosition = fVar9;
  (this->BuildSettings).ThresholdTangentNormal = fVar10;
  (this->BuildSettings).ThresholdUV = fVar11;
  iVar6 = (param_1->BuildSettings).BoneInfluenceLimit;
  (this->BuildSettings).MorphThresholdPosition = (param_1->BuildSettings).MorphThresholdPosition;
  (this->BuildSettings).BoneInfluenceLimit = iVar6;
  uVar12 = *(undefined3 *)&(param_1->ReductionSettings).field_0x1;
  fVar9 = (param_1->ReductionSettings).NumOfTrianglesPercentage;
  fVar10 = (param_1->ReductionSettings).NumOfVertPercentage;
  uVar13 = (param_1->ReductionSettings).MaxNumOfTriangles;
  (this->ReductionSettings).TerminationCriterion =
       (TEnumAsByte<SkeletalMeshTerminationCriterion>)
       (param_1->ReductionSettings).TerminationCriterion.Value;
  *(undefined3 *)&(this->ReductionSettings).field_0x1 = uVar12;
  (this->ReductionSettings).NumOfTrianglesPercentage = fVar9;
  (this->ReductionSettings).NumOfVertPercentage = fVar10;
  (this->ReductionSettings).MaxNumOfTriangles = uVar13;
  fVar9 = (param_1->ReductionSettings).MaxDeviationPercentage;
  TVar14.Value = (param_1->ReductionSettings).ReductionMethod.Value;
  TVar15.Value = (param_1->ReductionSettings).SilhouetteImportance.Value;
  TVar16.Value = (param_1->ReductionSettings).TextureImportance.Value;
  TVar17.Value = (param_1->ReductionSettings).ShadingImportance.Value;
  TVar18.Value = (param_1->ReductionSettings).SkinningImportance.Value;
  uVar12 = *(undefined3 *)&(param_1->ReductionSettings).field_0x1d;
  (this->ReductionSettings).MaxNumOfVerts = (param_1->ReductionSettings).MaxNumOfVerts;
  (this->ReductionSettings).MaxDeviationPercentage = fVar9;
  (this->ReductionSettings).ReductionMethod =
       (TEnumAsByte<SkeletalMeshOptimizationType>)TVar14.Value;
  (this->ReductionSettings).SilhouetteImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar15.Value;
  (this->ReductionSettings).TextureImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar16.Value;
  (this->ReductionSettings).ShadingImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar17.Value;
  (this->ReductionSettings).SkinningImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar18.Value;
  *(undefined3 *)&(this->ReductionSettings).field_0x1d = uVar12;
  fVar9 = (param_1->ReductionSettings).NormalsThreshold;
  iVar6 = (param_1->ReductionSettings).MaxBonesPerVertex;
  uVar19 = *(undefined4 *)&(param_1->ReductionSettings).field_0x2c;
  (this->ReductionSettings).WeldingThreshold = (param_1->ReductionSettings).WeldingThreshold;
  (this->ReductionSettings).NormalsThreshold = fVar9;
  (this->ReductionSettings).MaxBonesPerVertex = iVar6;
  *(undefined4 *)&(this->ReductionSettings).field_0x2c = uVar19;
  uVar19 = *(undefined4 *)&(param_1->ReductionSettings).field_0x34;
  (this->ReductionSettings).VolumeImportance = (param_1->ReductionSettings).VolumeImportance;
  *(undefined4 *)&(this->ReductionSettings).field_0x34 = uVar19;
  (this->ReductionSettings).BaseLOD = (param_1->ReductionSettings).BaseLOD;
  piVar2 = &(this->BonesToRemove).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->BonesToRemove).ArrayNum;
  pFVar7 = (param_1->BonesToRemove).AllocatorInstance.Data;
  (this->BonesToRemove).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 4);
  }
  pTVar3 = &this->BonesToPrioritize;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->BonesToPrioritize).ArrayMax;
  iVar6 = (param_1->BonesToPrioritize).ArrayNum;
  pFVar7 = (param_1->BonesToPrioritize).AllocatorInstance.Data;
  (this->BonesToPrioritize).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 4);
  }
  pTVar4 = &this->SectionsToPrioritize;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SectionsToPrioritize).ArrayMax;
  iVar6 = (param_1->SectionsToPrioritize).ArrayNum;
  pFVar7 = (param_1->SectionsToPrioritize).AllocatorInstance.Data;
  (this->SectionsToPrioritize).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  this->WeightOfPrioritization = param_1->WeightOfPrioritization;
  pUVar8 = (param_1->BakePose).field0_0x0.DebugPtr;
  (this->BakePose).field0_0x0.DebugPtr = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UAnimSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pUVar8 = (param_1->BakePoseOverride).field0_0x0.DebugPtr;
  (this->BakePoseOverride).field0_0x0.DebugPtr = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UAnimSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pTVar5 = &this->VertexAttributes;
  this->SkinCacheUsage = param_1->SkinCacheUsage;
  this->MorphTargetPositionErrorTolerance = param_1->MorphTargetPositionErrorTolerance;
  piVar2 = &(this->VertexAttributes).ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->VertexAttributes).ArrayNum;
  pFVar7 = (param_1->VertexAttributes).AllocatorInstance.Data;
  (this->VertexAttributes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 4);
  }
  bVar20 = (this->bHasBeenSimplified ^ param_1->bHasBeenSimplified) & 1 ^ this->field_0xd0;
  this->field_0xd0 = bVar20;
  bVar20 = (bVar20 ^ param_1->field_0xd0) & 2 ^ bVar20;
  this->field_0xd0 = bVar20;
  bVar20 = (bVar20 ^ param_1->field_0xd0) & 4 ^ bVar20;
  this->field_0xd0 = bVar20;
  bVar20 = (bVar20 ^ param_1->field_0xd0) & 8 ^ bVar20;
  this->field_0xd0 = bVar20;
  bVar20 = (bVar20 ^ param_1->field_0xd0) & 0x10 ^ bVar20;
  this->field_0xd0 = bVar20;
  this->field_0xd0 = (bVar20 ^ param_1->field_0xd0) & 0x20 ^ bVar20;
  return this;
}

// ~FSkeletalMeshLODInfo @ 1485a6080

void __thiscall FSkeletalMeshLODInfo::~FSkeletalMeshLODInfo(FSkeletalMeshLODInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->VertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SectionsToPrioritize).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BonesToPrioritize).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BonesToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LODMaterialMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1485a6560

FSkeletalMeshLODInfo * __thiscall
FSkeletalMeshLODInfo::operator=(FSkeletalMeshLODInfo *this,FSkeletalMeshLODInfo *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FSkeletalMeshVertexAttributeInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UAnimSequence *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined3 uVar10;
  uint uVar11;
  TEnumAsByte<SkeletalMeshOptimizationType> TVar12;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar13;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar14;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar15;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar16;
  undefined4 uVar17;
  byte bVar18;
  
  (this->ScreenSize).Default = (param_1->ScreenSize).Default;
  this->LODHysteresis = param_1->LODHysteresis;
  pTVar1 = &this->LODMaterialMap;
  if (pTVar1 != &param_1->LODMaterialMap) {
    iVar4 = (param_1->LODMaterialMap).ArrayNum;
    piVar2 = &(this->LODMaterialMap).ArrayMax;
    pFVar5 = (param_1->LODMaterialMap).AllocatorInstance.Data;
    (this->LODMaterialMap).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
      }
    }
  }
  fVar7 = (param_1->BuildSettings).ThresholdPosition;
  fVar8 = (param_1->BuildSettings).ThresholdTangentNormal;
  fVar9 = (param_1->BuildSettings).ThresholdUV;
  *(undefined4 *)&(this->BuildSettings).field_0x0 =
       *(undefined4 *)&(param_1->BuildSettings).field_0x0;
  (this->BuildSettings).ThresholdPosition = fVar7;
  (this->BuildSettings).ThresholdTangentNormal = fVar8;
  (this->BuildSettings).ThresholdUV = fVar9;
  iVar4 = (param_1->BuildSettings).BoneInfluenceLimit;
  (this->BuildSettings).MorphThresholdPosition = (param_1->BuildSettings).MorphThresholdPosition;
  (this->BuildSettings).BoneInfluenceLimit = iVar4;
  uVar10 = *(undefined3 *)&(param_1->ReductionSettings).field_0x1;
  fVar7 = (param_1->ReductionSettings).NumOfTrianglesPercentage;
  fVar8 = (param_1->ReductionSettings).NumOfVertPercentage;
  uVar11 = (param_1->ReductionSettings).MaxNumOfTriangles;
  (this->ReductionSettings).TerminationCriterion =
       (TEnumAsByte<SkeletalMeshTerminationCriterion>)
       (param_1->ReductionSettings).TerminationCriterion.Value;
  *(undefined3 *)&(this->ReductionSettings).field_0x1 = uVar10;
  (this->ReductionSettings).NumOfTrianglesPercentage = fVar7;
  (this->ReductionSettings).NumOfVertPercentage = fVar8;
  (this->ReductionSettings).MaxNumOfTriangles = uVar11;
  fVar7 = (param_1->ReductionSettings).MaxDeviationPercentage;
  TVar12.Value = (param_1->ReductionSettings).ReductionMethod.Value;
  TVar13.Value = (param_1->ReductionSettings).SilhouetteImportance.Value;
  TVar14.Value = (param_1->ReductionSettings).TextureImportance.Value;
  TVar15.Value = (param_1->ReductionSettings).ShadingImportance.Value;
  TVar16.Value = (param_1->ReductionSettings).SkinningImportance.Value;
  uVar10 = *(undefined3 *)&(param_1->ReductionSettings).field_0x1d;
  (this->ReductionSettings).MaxNumOfVerts = (param_1->ReductionSettings).MaxNumOfVerts;
  (this->ReductionSettings).MaxDeviationPercentage = fVar7;
  (this->ReductionSettings).ReductionMethod =
       (TEnumAsByte<SkeletalMeshOptimizationType>)TVar12.Value;
  (this->ReductionSettings).SilhouetteImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar13.Value;
  (this->ReductionSettings).TextureImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar14.Value;
  (this->ReductionSettings).ShadingImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar15.Value;
  (this->ReductionSettings).SkinningImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar16.Value;
  *(undefined3 *)&(this->ReductionSettings).field_0x1d = uVar10;
  fVar7 = (param_1->ReductionSettings).NormalsThreshold;
  iVar4 = (param_1->ReductionSettings).MaxBonesPerVertex;
  uVar17 = *(undefined4 *)&(param_1->ReductionSettings).field_0x2c;
  (this->ReductionSettings).WeldingThreshold = (param_1->ReductionSettings).WeldingThreshold;
  (this->ReductionSettings).NormalsThreshold = fVar7;
  (this->ReductionSettings).MaxBonesPerVertex = iVar4;
  *(undefined4 *)&(this->ReductionSettings).field_0x2c = uVar17;
  uVar17 = *(undefined4 *)&(param_1->ReductionSettings).field_0x34;
  (this->ReductionSettings).VolumeImportance = (param_1->ReductionSettings).VolumeImportance;
  *(undefined4 *)&(this->ReductionSettings).field_0x34 = uVar17;
  (this->ReductionSettings).BaseLOD = (param_1->ReductionSettings).BaseLOD;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->BonesToRemove,&param_1->BonesToRemove);
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->BonesToPrioritize,&param_1->BonesToPrioritize);
  TArray<FSectionReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->SectionsToPrioritize,&param_1->SectionsToPrioritize);
  this->WeightOfPrioritization = param_1->WeightOfPrioritization;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->BakePose).field0_0x0.DebugPtr, pUVar6 != (UAnimSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->BakePose).field0_0x0 = (param_1->BakePose).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->BakePoseOverride).field0_0x0.DebugPtr, pUVar6 != (UAnimSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->BakePoseOverride).field0_0x0 = (param_1->BakePoseOverride).field0_0x0;
  pTVar3 = &this->VertexAttributes;
  this->SkinCacheUsage = param_1->SkinCacheUsage;
  this->MorphTargetPositionErrorTolerance = param_1->MorphTargetPositionErrorTolerance;
  if (pTVar3 != &param_1->VertexAttributes) {
    iVar4 = (param_1->VertexAttributes).ArrayNum;
    piVar2 = &(this->VertexAttributes).ArrayMax;
    pFVar5 = (param_1->VertexAttributes).AllocatorInstance.Data;
    (this->VertexAttributes).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 4);
      }
    }
  }
  bVar18 = (this->bHasBeenSimplified ^ param_1->bHasBeenSimplified) & 1 ^ this->field_0xd0;
  this->field_0xd0 = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0xd0) & 2 ^ bVar18;
  this->field_0xd0 = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0xd0) & 4 ^ bVar18;
  this->field_0xd0 = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0xd0) & 8 ^ bVar18;
  this->field_0xd0 = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0xd0) & 0x10 ^ bVar18;
  this->field_0xd0 = bVar18;
  this->field_0xd0 = (bVar18 ^ param_1->field_0xd0) & 0x20 ^ bVar18;
  return this;
}

// FSkeletalMeshLODInfo @ 148620c60

FSkeletalMeshLODInfo * __thiscall
FSkeletalMeshLODInfo::FSkeletalMeshLODInfo(FSkeletalMeshLODInfo *this)

{
  FSkeletalMeshBuildSettings *pFVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  (this->ReductionSettings).bRemapMorphTargets = '\0';
  (this->ReductionSettings).bEnforceBoneBoundaries = '\0';
  (this->ReductionSettings).bLockEdges = '\0';
  (this->ReductionSettings).bLockColorBounaries = '\0';
  (this->BuildSettings).bUseBackwardsCompatibleF16TruncUVs = '\0';
  (this->ReductionSettings).bRecalcNormals = '\x01';
  (this->ReductionSettings).bMergeCoincidentVertBones = '\x01';
  (this->ReductionSettings).bImproveTrianglesForCloth = '\x01';
  (this->LODMaterialMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODMaterialMap).ArrayNum = 0;
  (this->LODMaterialMap).ArrayMax = 0;
  (this->ReductionSettings).TerminationCriterion.Value = '\0';
  (this->ReductionSettings).BaseLOD = 0;
  (this->BonesToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonesToRemove).ArrayNum = 0;
  (this->BonesToRemove).ArrayMax = 0;
  (this->BonesToPrioritize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonesToPrioritize).ArrayNum = 0;
  (this->BonesToPrioritize).ArrayMax = 0;
  (this->SectionsToPrioritize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionsToPrioritize).ArrayNum = 0;
  (this->SectionsToPrioritize).ArrayMax = 0;
  (this->BakePose).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->BakePoseOverride).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  this->SkinCacheUsage = Auto;
  (this->VertexAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexAttributes).ArrayNum = 0;
  (this->VertexAttributes).ArrayMax = 0;
  this->ScreenSize = 1.0;
  this->LODHysteresis = 0.0;
  pFVar1 = &this->BuildSettings;
  pFVar1->bRecomputeNormals = '\x01';
  pFVar1->bUseFullPrecisionUVs = '\0';
  pFVar1->bUseHighPrecisionSkinWeights = '\0';
  pFVar1->bUseHighPrecisionTangentBasis = '\0';
  pFVar1->bRemoveDegenerates = '\x01';
  pFVar1->bComputeWeightedNormals = '\0';
  pFVar1->bUseMikkTSpace = '\x01';
  pFVar1->bRecomputeTangents = '\x01';
  puVar3 = &this->field_0xd0;
  this->bHasBeenSimplified = '\0';
  this->bSupportUniformlyDistributedSampling = '\0';
  this->bAllowMeshDeformer = '\x01';
  this->bBuildHalfEdgeBuffers = '\0';
  this->bAllowCPUAccess = '\0';
  this->bHasPerLODVertexColors = '\0';
  (this->BuildSettings).ThresholdPosition = 2e-05;
  (this->BuildSettings).ThresholdTangentNormal = 2e-05;
  (this->BuildSettings).ThresholdUV = 0.0009765625;
  (this->BuildSettings).MorphThresholdPosition = 0.015;
  (this->BuildSettings).BoneInfluenceLimit = 0;
  (this->ReductionSettings).NumOfTrianglesPercentage = 0.5;
  (this->ReductionSettings).NumOfVertPercentage = 0.5;
  (this->ReductionSettings).MaxNumOfTriangles = 4;
  (this->ReductionSettings).MaxNumOfVerts = 6;
  (this->ReductionSettings).MaxDeviationPercentage = 0.5;
  (this->ReductionSettings).ReductionMethod = '\0';
  (this->ReductionSettings).SilhouetteImportance = '\x03';
  (this->ReductionSettings).TextureImportance = '\x03';
  (this->ReductionSettings).ShadingImportance = '\x03';
  (this->ReductionSettings).SkinningImportance.Value = '\x03';
  (this->ReductionSettings).WeldingThreshold = 0.1;
  (this->ReductionSettings).NormalsThreshold = 60.0;
  (this->ReductionSettings).MaxBonesPerVertex = 4;
  (this->ReductionSettings).VolumeImportance = 1.0;
  this->WeightOfPrioritization = 1.0;
  this->MorphTargetPositionErrorTolerance = 20.0;
  return this;
}

// StaticStruct @ 1486780b0

UScriptStruct * __cdecl FSkeletalMeshLODInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshLODInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshLODInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo,(UObject *)pUVar1,
                         L"SkeletalMeshLODInfo");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshLODInfo.OuterSingleton;
}


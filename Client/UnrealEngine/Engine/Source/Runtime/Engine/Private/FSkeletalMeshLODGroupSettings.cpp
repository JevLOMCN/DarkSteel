// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1485e38a0

UScriptStruct * __cdecl FSkeletalMeshLODGroupSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshLODGroupSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshLODGroupSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings,(UObject *)pUVar1,
                         L"SkeletalMeshLODGroupSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshLODGroupSettings.OuterSingleton;
}

// FSkeletalMeshLODGroupSettings @ 148620ba0

FSkeletalMeshLODGroupSettings * __thiscall
FSkeletalMeshLODGroupSettings::FSkeletalMeshLODGroupSettings(FSkeletalMeshLODGroupSettings *this)

{
  undefined1 *puVar1;
  
  (this->ReductionSettings).bRemapMorphTargets = '\0';
  (this->ReductionSettings).bEnforceBoneBoundaries = '\0';
  (this->ReductionSettings).bLockEdges = '\0';
  (this->ReductionSettings).bLockColorBounaries = '\0';
  (this->ReductionSettings).bRecalcNormals = '\x01';
  (this->ReductionSettings).bMergeCoincidentVertBones = '\x01';
  (this->ReductionSettings).bImproveTrianglesForCloth = '\x01';
  this->BoneFilterActionOption = Remove;
  (this->BoneList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneList).ArrayNum = 0;
  (this->BoneList).ArrayMax = 0;
  (this->BonesToPrioritize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonesToPrioritize).ArrayNum = 0;
  (this->BonesToPrioritize).ArrayMax = 0;
  (this->SectionsToPrioritize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionsToPrioritize).ArrayNum = 0;
  (this->SectionsToPrioritize).ArrayMax = 0;
  (this->BakePose).field0_0x0.DebugPtr = (UAnimSequence *)0x0;
  (this->ReductionSettings).TerminationCriterion.Value = '\0';
  (this->ReductionSettings).BaseLOD = 0;
  this->ScreenSize = 0.3;
  this->LODHysteresis = 0.0;
  this->WeightOfPrioritization = 1.0;
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
  this->bAllowMeshDeformer = true;
  return this;
}

// GetReductionSettings @ 14864cf20

FSkeletalMeshOptimizationSettings * __thiscall
FSkeletalMeshLODGroupSettings::GetReductionSettings
          (FSkeletalMeshLODGroupSettings *this,
          FSkeletalMeshOptimizationSettings *__return_storage_ptr__)

{
  int iVar1;
  undefined3 uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  TEnumAsByte<SkeletalMeshOptimizationType> TVar8;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar9;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar10;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar11;
  TEnumAsByte<SkeletalMeshOptimizationImportance> TVar12;
  undefined3 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar2 = *(undefined3 *)&(this->ReductionSettings).field_0x1;
  fVar3 = (this->ReductionSettings).NumOfTrianglesPercentage;
  fVar4 = (this->ReductionSettings).NumOfVertPercentage;
  uVar5 = (this->ReductionSettings).MaxNumOfTriangles;
  iVar1 = (this->ReductionSettings).BaseLOD;
  uVar6 = (this->ReductionSettings).MaxNumOfVerts;
  fVar7 = (this->ReductionSettings).MaxDeviationPercentage;
  TVar8.Value = (this->ReductionSettings).ReductionMethod.Value;
  TVar9.Value = (this->ReductionSettings).SilhouetteImportance.Value;
  TVar10.Value = (this->ReductionSettings).TextureImportance.Value;
  TVar11.Value = (this->ReductionSettings).ShadingImportance.Value;
  TVar12.Value = (this->ReductionSettings).SkinningImportance.Value;
  uVar13 = *(undefined3 *)&(this->ReductionSettings).field_0x1d;
  __return_storage_ptr__->TerminationCriterion =
       (TEnumAsByte<SkeletalMeshTerminationCriterion>)
       (this->ReductionSettings).TerminationCriterion.Value;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar2;
  __return_storage_ptr__->NumOfTrianglesPercentage = fVar3;
  __return_storage_ptr__->NumOfVertPercentage = fVar4;
  __return_storage_ptr__->MaxNumOfTriangles = uVar5;
  fVar3 = (this->ReductionSettings).WeldingThreshold;
  fVar4 = (this->ReductionSettings).NormalsThreshold;
  iVar14 = (this->ReductionSettings).MaxBonesPerVertex;
  uVar15 = *(undefined4 *)&(this->ReductionSettings).field_0x2c;
  __return_storage_ptr__->MaxNumOfVerts = uVar6;
  __return_storage_ptr__->MaxDeviationPercentage = fVar7;
  __return_storage_ptr__->ReductionMethod = (TEnumAsByte<SkeletalMeshOptimizationType>)TVar8.Value;
  __return_storage_ptr__->SilhouetteImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar9.Value;
  __return_storage_ptr__->TextureImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar10.Value;
  __return_storage_ptr__->ShadingImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar11.Value;
  __return_storage_ptr__->SkinningImportance =
       (TEnumAsByte<SkeletalMeshOptimizationImportance>)TVar12.Value;
  *(undefined3 *)&__return_storage_ptr__->field_0x1d = uVar13;
  fVar7 = (this->ReductionSettings).VolumeImportance;
  uVar16 = *(undefined4 *)&(this->ReductionSettings).field_0x34;
  __return_storage_ptr__->WeldingThreshold = fVar3;
  __return_storage_ptr__->NormalsThreshold = fVar4;
  __return_storage_ptr__->MaxBonesPerVertex = iVar14;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = uVar15;
  __return_storage_ptr__->VolumeImportance = fVar7;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = uVar16;
  __return_storage_ptr__->BaseLOD = iVar1;
  return __return_storage_ptr__;
}

// GetScreenSize @ 14864d9f0

float __thiscall FSkeletalMeshLODGroupSettings::GetScreenSize(FSkeletalMeshLODGroupSettings *this)

{
  return (this->ScreenSize).Default;
}


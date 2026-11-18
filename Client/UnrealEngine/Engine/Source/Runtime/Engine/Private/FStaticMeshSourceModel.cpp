// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 148766f60

UScriptStruct * __cdecl FStaticMeshSourceModel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshSourceModel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStaticMeshSourceModel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshSourceModel,(UObject *)pUVar1,
                         L"StaticMeshSourceModel");
  }
  return Z_Registration_Info_UScriptStruct_FStaticMeshSourceModel.OuterSingleton;
}

// FStaticMeshSourceModel @ 14877b270

FStaticMeshSourceModel * __thiscall
FStaticMeshSourceModel::FStaticMeshSourceModel
          (FStaticMeshSourceModel *this,FStaticMeshSourceModel *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  FMeshBuildSettings *pFVar4;
  
  pFVar4 = &this->BuildSettings;
  this->bUseMikkTSpace = '\x01';
  this->bUseFullPrecisionUVs = '\0';
  this->bUseHighPrecisionTangentBasis = '\0';
  this->bBuildReversedIndexBuffer = '\x01';
  this->bRemoveDegenerates = '\x01';
  this->bComputeWeightedNormals = '\0';
  this->bRecomputeTangents = '\x01';
  this->bRecomputeNormals = '\x01';
  (this->BuildSettings).MinLightmapResolution = 0x40;
  (this->BuildSettings).SrcLightmapIndex = 0;
  puVar2 = &(this->BuildSettings).field_0x1;
  (this->BuildSettings).bUseBackwardsCompatibleF16TruncUVs = '\0';
  (this->BuildSettings).bSupportFaceRemap = '\0';
  (this->BuildSettings).bGenerateDistanceFieldAsIfTwoSided = '\0';
  (this->BuildSettings).bGenerateLightmapUVs = '\x01';
  (this->BuildSettings).DstLightmapIndex = 1;
  (this->BuildSettings).BuildScale3D.field0_0x0._s_0.X = 1.0;
  (this->BuildSettings).BuildScale3D.field0_0x0._s_0.Y = 1.0;
  (this->BuildSettings).BuildScale3D.field0_0x0._s_0.Z = 1.0;
  (this->BuildSettings).BuildScale_DEPRECATED = 1.0;
  (this->BuildSettings).DistanceFieldResolutionScale = 1.0;
  (this->BuildSettings).DistanceFieldReplacementMesh.field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->BuildSettings).MaxLumenMeshCards = 0xc;
  FMeshReductionSettings::FMeshReductionSettings(&this->ReductionSettings);
  this->CacheMeshDescriptionTrianglesCount = 0xffffffff;
  this->CacheMeshDescriptionVerticesCount = 0xffffffff;
  (this->ScreenSize).Default = 0.0;
  (this->SourceImportFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceImportFilename).Data.ArrayNum = 0;
  (this->SourceImportFilename).Data.ArrayMax = 0;
  operator=(this,param_1);
  return this;
}

// FStaticMeshSourceModel @ 14877b320

FStaticMeshSourceModel * __thiscall
FStaticMeshSourceModel::FStaticMeshSourceModel(FStaticMeshSourceModel *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  FMeshBuildSettings *pFVar4;
  
  pFVar4 = &this->BuildSettings;
  this->bUseMikkTSpace = '\x01';
  this->bUseFullPrecisionUVs = '\0';
  this->bUseHighPrecisionTangentBasis = '\0';
  this->bBuildReversedIndexBuffer = '\x01';
  this->bRemoveDegenerates = '\x01';
  this->bComputeWeightedNormals = '\0';
  this->bRecomputeTangents = '\x01';
  this->bRecomputeNormals = '\x01';
  (this->BuildSettings).MinLightmapResolution = 0x40;
  (this->BuildSettings).SrcLightmapIndex = 0;
  puVar2 = &(this->BuildSettings).field_0x1;
  (this->BuildSettings).bUseBackwardsCompatibleF16TruncUVs = '\0';
  (this->BuildSettings).bSupportFaceRemap = '\0';
  (this->BuildSettings).bGenerateDistanceFieldAsIfTwoSided = '\0';
  (this->BuildSettings).bGenerateLightmapUVs = '\x01';
  (this->BuildSettings).DstLightmapIndex = 1;
  (this->BuildSettings).BuildScale3D.field0_0x0._s_0.X = 1.0;
  (this->BuildSettings).BuildScale3D.field0_0x0._s_0.Y = 1.0;
  (this->BuildSettings).BuildScale3D.field0_0x0._s_0.Z = 1.0;
  (this->BuildSettings).BuildScale_DEPRECATED = 1.0;
  (this->BuildSettings).DistanceFieldResolutionScale = 1.0;
  (this->BuildSettings).DistanceFieldReplacementMesh.field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->BuildSettings).MaxLumenMeshCards = 0xc;
  FMeshReductionSettings::FMeshReductionSettings(&this->ReductionSettings);
  this->CacheMeshDescriptionTrianglesCount = 0xffffffff;
  this->CacheMeshDescriptionVerticesCount = 0xffffffff;
  (this->SourceImportFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceImportFilename).Data.ArrayNum = 0;
  (this->SourceImportFilename).Data.ArrayMax = 0;
  this->LODDistance_DEPRECATED = 0.0;
  this->ScreenSize = 0.0;
  return this;
}

// ~FStaticMeshSourceModel @ 14877fa30

void __thiscall FStaticMeshSourceModel::~FStaticMeshSourceModel(FStaticMeshSourceModel *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->SourceImportFilename).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 148780c00

FStaticMeshSourceModel * __thiscall
FStaticMeshSourceModel::operator=(FStaticMeshSourceModel *this,FStaticMeshSourceModel *param_1)

{
  FString *pFVar1;
  UStaticMesh *pUVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  TEnumAsByte<EMeshFeatureImportance::Type> TVar10;
  TEnumAsByte<EMeshFeatureImportance::Type> TVar11;
  TEnumAsByte<EMeshFeatureImportance::Type> TVar12;
  undefined1 uVar13;
  FString *pFVar14;
  byte bVar15;
  
  if (this != param_1) {
    bVar15 = (this.bUseMikkTSpace ^ param_1.bUseMikkTSpace) & 1 ^ *(byte *)&this->BuildSettings;
    *(byte *)&this->BuildSettings = bVar15;
    bVar15 = (bVar15 ^ *(byte *)&param_1->BuildSettings) & 2 ^ bVar15;
    *(byte *)&this->BuildSettings = bVar15;
    bVar15 = (bVar15 ^ *(byte *)&param_1->BuildSettings) & 4 ^ bVar15;
    *(byte *)&this->BuildSettings = bVar15;
    bVar15 = (bVar15 ^ *(byte *)&param_1->BuildSettings) & 8 ^ bVar15;
    *(byte *)&this->BuildSettings = bVar15;
    bVar15 = (bVar15 ^ *(byte *)&param_1->BuildSettings) & 0x10 ^ bVar15;
    *(byte *)&this->BuildSettings = bVar15;
    bVar15 = (bVar15 ^ *(byte *)&param_1->BuildSettings) & 0x20 ^ bVar15;
    *(byte *)&this->BuildSettings = bVar15;
    bVar15 = (bVar15 ^ *(byte *)&param_1->BuildSettings) & 0x40 ^ bVar15;
    *(byte *)&this->BuildSettings = bVar15;
    *(byte *)&this->BuildSettings =
         (bVar15 ^ *(byte *)&param_1->BuildSettings) & 0x7f ^ *(byte *)&param_1->BuildSettings;
    bVar15 = ((this->BuildSettings).bUseBackwardsCompatibleF16TruncUVs ^
             (param_1->BuildSettings).bUseBackwardsCompatibleF16TruncUVs) & 1 ^
             (this->BuildSettings).field_0x1;
    (this->BuildSettings).field_0x1 = bVar15;
    bVar15 = (bVar15 ^ (param_1->BuildSettings).field_0x1) & 2 ^ bVar15;
    (this->BuildSettings).field_0x1 = bVar15;
    bVar15 = (bVar15 ^ (param_1->BuildSettings).field_0x1) & 4 ^ bVar15;
    (this->BuildSettings).field_0x1 = bVar15;
    (this->BuildSettings).field_0x1 = (bVar15 ^ (param_1->BuildSettings).field_0x1) & 8 ^ bVar15;
    (this->BuildSettings).MinLightmapResolution = (param_1->BuildSettings).MinLightmapResolution;
    (this->BuildSettings).SrcLightmapIndex = (param_1->BuildSettings).SrcLightmapIndex;
    (this->BuildSettings).DstLightmapIndex = (param_1->BuildSettings).DstLightmapIndex;
    (this->BuildSettings).BuildScale_DEPRECATED = (param_1->BuildSettings).BuildScale_DEPRECATED;
    dVar4 = (param_1->BuildSettings).BuildScale3D.field0_0x0._s_0.Y;
    (this->BuildSettings).BuildScale3D.field0_0x0._s_0.X =
         (param_1->BuildSettings).BuildScale3D.field0_0x0._s_0.X;
    (this->BuildSettings).BuildScale3D.field0_0x0._s_0.Y = dVar4;
    (this->BuildSettings).BuildScale3D.field0_0x0._s_0.Z =
         (param_1->BuildSettings).BuildScale3D.field0_0x0._s_0.Z;
    (this->BuildSettings).DistanceFieldResolutionScale =
         (param_1->BuildSettings).DistanceFieldResolutionScale;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_1->BuildSettings).DistanceFieldReplacementMesh.field0_0x0.DebugPtr,
       pUVar2 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pFVar1 = &this->SourceImportFilename;
    (this->BuildSettings).DistanceFieldReplacementMesh.field0_0x0 =
         (param_1->BuildSettings).DistanceFieldReplacementMesh.field0_0x0;
    (this->BuildSettings).MaxLumenMeshCards = (param_1->BuildSettings).MaxLumenMeshCards;
    uVar5 = (param_1->ReductionSettings).MaxNumOfTriangles;
    fVar6 = (param_1->ReductionSettings).PercentVertices;
    uVar7 = (param_1->ReductionSettings).MaxNumOfVerts;
    (this->ReductionSettings).PercentTriangles = (param_1->ReductionSettings).PercentTriangles;
    (this->ReductionSettings).MaxNumOfTriangles = uVar5;
    (this->ReductionSettings).PercentVertices = fVar6;
    (this->ReductionSettings).MaxNumOfVerts = uVar7;
    fVar6 = (param_1->ReductionSettings).PixelError;
    fVar8 = (param_1->ReductionSettings).WeldingThreshold;
    fVar9 = (param_1->ReductionSettings).HardAngleThreshold;
    (this->ReductionSettings).MaxDeviation = (param_1->ReductionSettings).MaxDeviation;
    (this->ReductionSettings).PixelError = fVar6;
    (this->ReductionSettings).WeldingThreshold = fVar8;
    (this->ReductionSettings).HardAngleThreshold = fVar9;
    TVar10.Value = (param_1->ReductionSettings).SilhouetteImportance.Value;
    TVar11.Value = (param_1->ReductionSettings).TextureImportance.Value;
    TVar12.Value = (param_1->ReductionSettings).ShadingImportance.Value;
    uVar13 = (param_1->ReductionSettings).field_0x27;
    (this->ReductionSettings).BaseLODModel = (param_1->ReductionSettings).BaseLODModel;
    (this->ReductionSettings).SilhouetteImportance =
         (TEnumAsByte<EMeshFeatureImportance::Type>)TVar10.Value;
    (this->ReductionSettings).TextureImportance =
         (TEnumAsByte<EMeshFeatureImportance::Type>)TVar11.Value;
    (this->ReductionSettings).ShadingImportance =
         (TEnumAsByte<EMeshFeatureImportance::Type>)TVar12.Value;
    (this->ReductionSettings).field_0x27 = uVar13;
    TVar10.Value = (param_1->ReductionSettings).VisibilityAggressiveness.Value;
    TVar11.Value = (param_1->ReductionSettings).VertexColorImportance.Value;
    uVar13 = (param_1->ReductionSettings).field_0x2b;
    (this->ReductionSettings).TerminationCriterion =
         (param_1->ReductionSettings).TerminationCriterion;
    (this->ReductionSettings).VisibilityAggressiveness =
         (TEnumAsByte<EMeshFeatureImportance::Type>)TVar10.Value;
    (this->ReductionSettings).VertexColorImportance =
         (TEnumAsByte<EMeshFeatureImportance::Type>)TVar11.Value;
    (this->ReductionSettings).field_0x2b = uVar13;
    this->LODDistance_DEPRECATED = param_1->LODDistance_DEPRECATED;
    pFVar14 = &param_1->SourceImportFilename;
    (this->ScreenSize).Default = (param_1->ScreenSize).Default;
    if (pFVar1 != pFVar14) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->SourceImportFilename).Data.ArrayNum = (param_1->SourceImportFilename).Data.ArrayNum;
      (this->SourceImportFilename).Data.ArrayMax = (param_1->SourceImportFilename).Data.ArrayMax;
      (param_1->SourceImportFilename).Data.ArrayNum = 0;
      (param_1->SourceImportFilename).Data.ArrayMax = 0;
    }
    return this;
  }
  return this;
}

// CreateSubObjects @ 148791bd0

void __thiscall
FStaticMeshSourceModel::CreateSubObjects(FStaticMeshSourceModel *this,UStaticMesh *param_1)

{
  return;
}


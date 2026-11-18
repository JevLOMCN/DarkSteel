// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147caabf0

UScriptStruct * __cdecl FHierarchicalSimplification::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHierarchicalSimplification.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FHierarchicalSimplification.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHierarchicalSimplification,(UObject *)pUVar1,
                         L"HierarchicalSimplification");
  }
  return Z_Registration_Info_UScriptStruct_FHierarchicalSimplification.OuterSingleton;
}

// FHierarchicalSimplification @ 147cc39c0

FHierarchicalSimplification * __thiscall
FHierarchicalSimplification::FHierarchicalSimplification(FHierarchicalSimplification *this)

{
  undefined1 *puVar1;
  
  this->bUseOverrideDrawDistance = '\0';
  this->bReusePreviousLevelClusters = '\0';
  this->bOnlyGenerateClustersForVolumes = '\0';
  this->bAllowSpecificExclusion = '\0';
  this->TransitionScreenSize = 0.315;
  this->OverrideDrawDistance = 10000.0;
  this->SimplificationMethod = Merge;
  FMeshProxySettings::FMeshProxySettings(&this->ProxySetting);
  FMeshMergingSettings::FMeshMergingSettings(&this->MergeSetting);
  (this->ApproximateSettings).OutputType = MeshAndMaterials;
  (this->ApproximateSettings).GroundClippingZHeight = 0.0;
  (this->ApproximateSettings).bGenerateNaniteEnabledMesh = false;
  (this->ApproximateSettings).NaniteFallbackTarget = Auto;
  (this->ApproximateSettings).MultiSamplingAA = 0;
  (this->ApproximateSettings).ApproximationAccuracy = 1.0;
  (this->ApproximateSettings).ClampVoxelDimension = 0x400;
  (this->ApproximateSettings).bAttemptAutoThickening = true;
  (this->ApproximateSettings).TargetMinThicknessMultiplier = 1.5;
  (this->ApproximateSettings).bIgnoreTinyParts = true;
  (this->ApproximateSettings).TinyPartSizeMultiplier = 0.05;
  (this->ApproximateSettings).BaseCapping = NoBaseCapping;
  (this->ApproximateSettings).WindingThreshold = 0.5;
  (this->ApproximateSettings).bFillGaps = true;
  (this->ApproximateSettings).GapDistance = 0.1;
  (this->ApproximateSettings).OcclusionMethod = VisibilityBasedFiltering;
  (this->ApproximateSettings).bOccludeFromBottom = true;
  (this->ApproximateSettings).SimplifyMethod = GeometricTolerance;
  (this->ApproximateSettings).TargetTriCount = 2000;
  (this->ApproximateSettings).TrianglesPerM = 2.0;
  (this->ApproximateSettings).GeometricDeviation = 0.1;
  (this->ApproximateSettings).GroundClipping = NoGroundClipping;
  (this->ApproximateSettings).bEstimateHardNormals = true;
  (this->ApproximateSettings).HardNormalAngle = 60.0;
  (this->ApproximateSettings).UVGenerationMethod = PreferXAtlas;
  (this->ApproximateSettings).InitialPatchCount = 0xfa;
  (this->ApproximateSettings).CurvatureAlignment = 1.0;
  (this->ApproximateSettings).MergingThreshold = 1.5;
  (this->ApproximateSettings).MaxAngleDeviation = 45.0;
  (this->ApproximateSettings).NaniteFallbackPercentTriangles = 1.0;
  (this->ApproximateSettings).NaniteFallbackRelativeError = 1.0;
  (this->ApproximateSettings).bSupportRayTracing = true;
  (this->ApproximateSettings).bAllowDistanceField = true;
  (this->ApproximateSettings).RenderCaptureResolution = 0x800;
  FMaterialProxySettings::FMaterialProxySettings(&(this->ApproximateSettings).MaterialSettings);
  (this->ApproximateSettings).CaptureFieldOfView = 30.0;
  (this->ApproximateSettings).NearPlaneDist = 1.0;
  (this->ApproximateSettings).bUseRenderLODMeshes = false;
  (this->ApproximateSettings).bEnableSimplifyPrePass = true;
  (this->ApproximateSettings).bEnableParallelBaking = true;
  (this->ApproximateSettings).bPrintDebugMessages = false;
  (this->ApproximateSettings).bEmitFullDebugMesh = false;
  (this->MergeSetting).bGenerateLightMapUV = '\x01';
  (this->MergeSetting).bMergeMaterials = '\x01';
  (this->ProxySetting).bCreateCollision = '\0';
  this->DesiredBoundRadius = 2000.0;
  this->DesiredFillingPercentage = 50.0;
  this->MinNumberOfActorsToBuild = 2;
  (this->ProxySetting).MaterialSettings.MaterialMergeType.Value = '\x01';
  return this;
}

// operator= @ 147cc9e00

FHierarchicalSimplification * __thiscall
FHierarchicalSimplification::operator=
          (FHierarchicalSimplification *this,FHierarchicalSimplification *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined3 uVar8;
  int iVar9;
  bool bVar10;
  undefined3 uVar11;
  EMeshApproximationBaseCappingType EVar12;
  EOccludedGeometryFilteringPolicy EVar13;
  bool bVar14;
  EMeshApproximationSimplificationPolicy EVar15;
  EMeshApproximationGroundPlaneClippingPolicy EVar16;
  EMeshApproximationUVGenerationPolicy EVar17;
  ENaniteFallbackTarget EVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  FMeshApproximationSettings *pFVar21;
  FMeshApproximationSettings *pFVar22;
  FMeshApproximationSettings *pFVar23;
  byte bVar24;
  FMeshApproximationSettings *pFVar25;
  longlong lVar26;
  byte bVar27;
  
  this->TransitionScreenSize = param_1->TransitionScreenSize;
  this->OverrideDrawDistance = param_1->OverrideDrawDistance;
  bVar27 = (this->bUseOverrideDrawDistance ^ param_1->bUseOverrideDrawDistance) & 1 ^
           this->field_0x8;
  this->field_0x8 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x8) & 2 ^ bVar27;
  this->field_0x8 = bVar27;
  bVar27 = (bVar27 ^ param_1->field_0x8) & 4 ^ bVar27;
  this->field_0x8 = bVar27;
  this->field_0x8 = (bVar27 ^ param_1->field_0x8) & 8 ^ bVar27;
  this->SimplificationMethod = param_1->SimplificationMethod;
  (this->ProxySetting).ScreenSize = (param_1->ProxySetting).ScreenSize;
  (this->ProxySetting).VoxelSize = (param_1->ProxySetting).VoxelSize;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->ProxySetting).MaterialSettings.TextureSize.field0_0x0 + 4);
  *(undefined8 *)&(this->ProxySetting).MaterialSettings =
       *(undefined8 *)&(param_1->ProxySetting).MaterialSettings;
  *(undefined8 *)((longlong)&(this->ProxySetting).MaterialSettings.TextureSize.field0_0x0 + 4) =
       uVar2;
  uVar4 = *(undefined4 *)&(param_1->ProxySetting).MaterialSettings.field_0x14;
  dVar3 = (param_1->ProxySetting).MaterialSettings.MeshMinDrawDistance;
  (this->ProxySetting).MaterialSettings.MeshMaxScreenSizePercent =
       (param_1->ProxySetting).MaterialSettings.MeshMaxScreenSizePercent;
  *(undefined4 *)&(this->ProxySetting).MaterialSettings.field_0x14 = uVar4;
  (this->ProxySetting).MaterialSettings.MeshMinDrawDistance = dVar3;
  fVar5 = (param_1->ProxySetting).MaterialSettings.MetallicConstant;
  fVar6 = (param_1->ProxySetting).MaterialSettings.RoughnessConstant;
  fVar7 = (param_1->ProxySetting).MaterialSettings.AnisotropyConstant;
  (this->ProxySetting).MaterialSettings.GutterSpace =
       (param_1->ProxySetting).MaterialSettings.GutterSpace;
  (this->ProxySetting).MaterialSettings.MetallicConstant = fVar5;
  (this->ProxySetting).MaterialSettings.RoughnessConstant = fVar6;
  (this->ProxySetting).MaterialSettings.AnisotropyConstant = fVar7;
  fVar5 = (param_1->ProxySetting).MaterialSettings.OpacityConstant;
  fVar6 = (param_1->ProxySetting).MaterialSettings.OpacityMaskConstant;
  fVar7 = (param_1->ProxySetting).MaterialSettings.AmbientOcclusionConstant;
  (this->ProxySetting).MaterialSettings.SpecularConstant =
       (param_1->ProxySetting).MaterialSettings.SpecularConstant;
  (this->ProxySetting).MaterialSettings.OpacityConstant = fVar5;
  (this->ProxySetting).MaterialSettings.OpacityMaskConstant = fVar6;
  (this->ProxySetting).MaterialSettings.AmbientOcclusionConstant = fVar7;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->ProxySetting).MaterialSettings.DiffuseTextureSize.field0_0x0 + 4);
  *(undefined8 *)&(this->ProxySetting).MaterialSettings.MaterialMergeType =
       *(undefined8 *)&(param_1->ProxySetting).MaterialSettings.MaterialMergeType;
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.DiffuseTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->ProxySetting).MaterialSettings.TangentTextureSize.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->ProxySetting).MaterialSettings.NormalTextureSize.field0_0x0 + 4)
       = *(undefined8 *)
          ((longlong)&(param_1->ProxySetting).MaterialSettings.NormalTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.TangentTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->ProxySetting).MaterialSettings.RoughnessTextureSize.field0_0x0 + 4)
  ;
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.MetallicTextureSize.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->ProxySetting).MaterialSettings.MetallicTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.RoughnessTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->ProxySetting).MaterialSettings.SpecularTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.AnisotropyTextureSize.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->ProxySetting).MaterialSettings.AnisotropyTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.SpecularTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->ProxySetting).MaterialSettings.OpacityTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.EmissiveTextureSize.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->ProxySetting).MaterialSettings.EmissiveTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.OpacityTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)
            &(param_1->ProxySetting).MaterialSettings.AmbientOcclusionTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.OpacityMaskTextureSize.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->ProxySetting).MaterialSettings.OpacityMaskTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->ProxySetting).MaterialSettings.AmbientOcclusionTextureSize.field0_0x0 + 4) =
       uVar2;
  (this->ProxySetting).MergeDistance = (param_1->ProxySetting).MergeDistance;
  (this->ProxySetting).UnresolvedGeometryColor.field0_0x0 =
       (param_1->ProxySetting).UnresolvedGeometryColor.field0_0x0;
  (this->ProxySetting).MaxRayCastDist = (param_1->ProxySetting).MaxRayCastDist;
  (this->ProxySetting).HardAngleThreshold = (param_1->ProxySetting).HardAngleThreshold;
  (this->ProxySetting).LightMapResolution = (param_1->ProxySetting).LightMapResolution;
  (this->ProxySetting).NormalCalculationMethod.Value =
       (param_1->ProxySetting).NormalCalculationMethod.Value;
  (this->ProxySetting).LandscapeCullingPrecision.Value =
       (param_1->ProxySetting).LandscapeCullingPrecision.Value;
  uVar1 = (this->ProxySetting).field_0xbe;
  bVar24 = ((this->ProxySetting).bCalculateCorrectLODModel ^
           (param_1->ProxySetting).bCalculateCorrectLODModel) & 1 ^ uVar1;
  (this->ProxySetting).field_0xbe = bVar24;
  bVar24 = (bVar24 ^ (param_1->ProxySetting).field_0xbe) & 2 ^ bVar24;
  (this->ProxySetting).field_0xbe = bVar24;
  bVar24 = (bVar24 ^ (param_1->ProxySetting).field_0xbe) & 4 ^ bVar24;
  (this->ProxySetting).field_0xbe = bVar24;
  bVar24 = (bVar24 ^ (param_1->ProxySetting).field_0xbe) & 8 ^ bVar24;
  (this->ProxySetting).field_0xbe = bVar24;
  bVar24 = (bVar24 ^ (param_1->ProxySetting).field_0xbe) & 0x10 ^ bVar24;
  (this->ProxySetting).field_0xbe = bVar24;
  bVar24 = (bVar24 ^ (param_1->ProxySetting).field_0xbe) & 0x20 ^ bVar24;
  (this->ProxySetting).field_0xbe = bVar24;
  bVar24 = (bVar24 ^ (param_1->ProxySetting).field_0xbe) & 0x40 ^ bVar24;
  (this->ProxySetting).field_0xbe = bVar24;
  bVar27 = (param_1->ProxySetting).field_0xbe;
  uVar1 = (this->ProxySetting).field_0xbf;
  (this->ProxySetting).field_0xbe = (bVar24 ^ bVar27) & 0x7f ^ bVar27;
  bVar27 = ((this->ProxySetting).bAllowDistanceField ^ (param_1->ProxySetting).bAllowDistanceField)
           & 1 ^ uVar1;
  (this->ProxySetting).field_0xbf = bVar27;
  bVar27 = (bVar27 ^ (param_1->ProxySetting).field_0xbf) & 2 ^ bVar27;
  (this->ProxySetting).field_0xbf = bVar27;
  bVar27 = (bVar27 ^ (param_1->ProxySetting).field_0xbf) & 4 ^ bVar27;
  (this->ProxySetting).field_0xbf = bVar27;
  bVar27 = (bVar27 ^ (param_1->ProxySetting).field_0xbf) & 8 ^ bVar27;
  (this->ProxySetting).field_0xbf = bVar27;
  bVar27 = (bVar27 ^ (param_1->ProxySetting).field_0xbf) & 0x10 ^ bVar27;
  (this->ProxySetting).field_0xbf = bVar27;
  (this->ProxySetting).field_0xbf = (bVar27 ^ (param_1->ProxySetting).field_0xbf) & 0x20 ^ bVar27;
  FMeshNaniteSettings::operator=
            (&(this->ProxySetting).NaniteSettings,&(param_1->ProxySetting).NaniteSettings);
  (this->MergeSetting).TargetLightMapResolution = (param_1->MergeSetting).TargetLightMapResolution;
  (this->MergeSetting).OutputUVs[0] = (param_1->MergeSetting).OutputUVs[0];
  (this->MergeSetting).OutputUVs[1] = (param_1->MergeSetting).OutputUVs[1];
  (this->MergeSetting).OutputUVs[2] = (param_1->MergeSetting).OutputUVs[2];
  (this->MergeSetting).OutputUVs[3] = (param_1->MergeSetting).OutputUVs[3];
  (this->MergeSetting).OutputUVs[4] = (param_1->MergeSetting).OutputUVs[4];
  (this->MergeSetting).OutputUVs[5] = (param_1->MergeSetting).OutputUVs[5];
  (this->MergeSetting).OutputUVs[6] = (param_1->MergeSetting).OutputUVs[6];
  (this->MergeSetting).OutputUVs[7] = (param_1->MergeSetting).OutputUVs[7];
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->MergeSetting).MaterialSettings.TextureSize.field0_0x0 + 4);
  *(undefined8 *)&(this->MergeSetting).MaterialSettings =
       *(undefined8 *)&(param_1->MergeSetting).MaterialSettings;
  *(undefined8 *)((longlong)&(this->MergeSetting).MaterialSettings.TextureSize.field0_0x0 + 4) =
       uVar2;
  uVar4 = *(undefined4 *)&(param_1->MergeSetting).MaterialSettings.field_0x14;
  dVar3 = (param_1->MergeSetting).MaterialSettings.MeshMinDrawDistance;
  (this->MergeSetting).MaterialSettings.MeshMaxScreenSizePercent =
       (param_1->MergeSetting).MaterialSettings.MeshMaxScreenSizePercent;
  *(undefined4 *)&(this->MergeSetting).MaterialSettings.field_0x14 = uVar4;
  (this->MergeSetting).MaterialSettings.MeshMinDrawDistance = dVar3;
  fVar5 = (param_1->MergeSetting).MaterialSettings.MetallicConstant;
  fVar6 = (param_1->MergeSetting).MaterialSettings.RoughnessConstant;
  fVar7 = (param_1->MergeSetting).MaterialSettings.AnisotropyConstant;
  (this->MergeSetting).MaterialSettings.GutterSpace =
       (param_1->MergeSetting).MaterialSettings.GutterSpace;
  (this->MergeSetting).MaterialSettings.MetallicConstant = fVar5;
  (this->MergeSetting).MaterialSettings.RoughnessConstant = fVar6;
  (this->MergeSetting).MaterialSettings.AnisotropyConstant = fVar7;
  fVar5 = (param_1->MergeSetting).MaterialSettings.OpacityConstant;
  fVar6 = (param_1->MergeSetting).MaterialSettings.OpacityMaskConstant;
  fVar7 = (param_1->MergeSetting).MaterialSettings.AmbientOcclusionConstant;
  (this->MergeSetting).MaterialSettings.SpecularConstant =
       (param_1->MergeSetting).MaterialSettings.SpecularConstant;
  (this->MergeSetting).MaterialSettings.OpacityConstant = fVar5;
  (this->MergeSetting).MaterialSettings.OpacityMaskConstant = fVar6;
  (this->MergeSetting).MaterialSettings.AmbientOcclusionConstant = fVar7;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->MergeSetting).MaterialSettings.DiffuseTextureSize.field0_0x0 + 4);
  *(undefined8 *)&(this->MergeSetting).MaterialSettings.MaterialMergeType =
       *(undefined8 *)&(param_1->MergeSetting).MaterialSettings.MaterialMergeType;
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.DiffuseTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->MergeSetting).MaterialSettings.TangentTextureSize.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->MergeSetting).MaterialSettings.NormalTextureSize.field0_0x0 + 4)
       = *(undefined8 *)
          ((longlong)&(param_1->MergeSetting).MaterialSettings.NormalTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.TangentTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->MergeSetting).MaterialSettings.RoughnessTextureSize.field0_0x0 + 4)
  ;
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.MetallicTextureSize.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->MergeSetting).MaterialSettings.MetallicTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.RoughnessTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->MergeSetting).MaterialSettings.SpecularTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.AnisotropyTextureSize.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->MergeSetting).MaterialSettings.AnisotropyTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.SpecularTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)&(param_1->MergeSetting).MaterialSettings.OpacityTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.EmissiveTextureSize.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->MergeSetting).MaterialSettings.EmissiveTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.OpacityTextureSize.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)
           ((longlong)
            &(param_1->MergeSetting).MaterialSettings.AmbientOcclusionTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.OpacityMaskTextureSize.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->MergeSetting).MaterialSettings.OpacityMaskTextureSize.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(this->MergeSetting).MaterialSettings.AmbientOcclusionTextureSize.field0_0x0 + 4) =
       uVar2;
  (this->MergeSetting).GutterSize = (param_1->MergeSetting).GutterSize;
  (this->MergeSetting).LODSelectionType = (param_1->MergeSetting).LODSelectionType;
  (this->MergeSetting).SpecificLOD = (param_1->MergeSetting).SpecificLOD;
  uVar1 = (this->MergeSetting).field_0xbc;
  bVar24 = ((this->MergeSetting).bGenerateLightMapUV ^ (param_1->MergeSetting).bGenerateLightMapUV)
           & 1 ^ uVar1;
  (this->MergeSetting).field_0xbc = bVar24;
  bVar24 = (bVar24 ^ (param_1->MergeSetting).field_0xbc) & 2 ^ bVar24;
  (this->MergeSetting).field_0xbc = bVar24;
  bVar24 = (bVar24 ^ (param_1->MergeSetting).field_0xbc) & 4 ^ bVar24;
  (this->MergeSetting).field_0xbc = bVar24;
  bVar24 = (bVar24 ^ (param_1->MergeSetting).field_0xbc) & 8 ^ bVar24;
  (this->MergeSetting).field_0xbc = bVar24;
  bVar24 = (bVar24 ^ (param_1->MergeSetting).field_0xbc) & 0x10 ^ bVar24;
  (this->MergeSetting).field_0xbc = bVar24;
  bVar24 = (bVar24 ^ (param_1->MergeSetting).field_0xbc) & 0x20 ^ bVar24;
  (this->MergeSetting).field_0xbc = bVar24;
  bVar24 = (bVar24 ^ (param_1->MergeSetting).field_0xbc) & 0x40 ^ bVar24;
  (this->MergeSetting).field_0xbc = bVar24;
  bVar27 = (param_1->MergeSetting).field_0xbc;
  uVar1 = (this->MergeSetting).field_0xbd;
  (this->MergeSetting).field_0xbc = (bVar24 ^ bVar27) & 0x7f ^ bVar27;
  bVar27 = ((this->MergeSetting).bUseTextureBinning ^ (param_1->MergeSetting).bUseTextureBinning) &
           1 ^ uVar1;
  (this->MergeSetting).field_0xbd = bVar27;
  bVar27 = (bVar27 ^ (param_1->MergeSetting).field_0xbd) & 2 ^ bVar27;
  (this->MergeSetting).field_0xbd = bVar27;
  bVar27 = (bVar27 ^ (param_1->MergeSetting).field_0xbd) & 4 ^ bVar27;
  (this->MergeSetting).field_0xbd = bVar27;
  bVar27 = (bVar27 ^ (param_1->MergeSetting).field_0xbd) & 8 ^ bVar27;
  (this->MergeSetting).field_0xbd = bVar27;
  bVar27 = (bVar27 ^ (param_1->MergeSetting).field_0xbd) & 0x10 ^ bVar27;
  (this->MergeSetting).field_0xbd = bVar27;
  bVar27 = (bVar27 ^ (param_1->MergeSetting).field_0xbd) & 0x20 ^ bVar27;
  (this->MergeSetting).field_0xbd = bVar27;
  (this->MergeSetting).field_0xbd = (bVar27 ^ (param_1->MergeSetting).field_0xbd) & 0x40 ^ bVar27;
  FMeshNaniteSettings::operator=
            (&(this->MergeSetting).NaniteSettings,&(param_1->MergeSetting).NaniteSettings);
  (this->MergeSetting).MergeType = (param_1->MergeSetting).MergeType;
  lVar26 = 2;
  pFVar21 = &param_1->ApproximateSettings;
  pFVar22 = &this->ApproximateSettings;
  do {
    pFVar25 = pFVar22;
    pFVar23 = pFVar21;
    pFVar22 = (FMeshApproximationSettings *)
              ((pFVar25->MaterialSettings).TextureSize.field0_0x0.XY + 1);
    uVar8 = *(undefined3 *)&pFVar23->field_0x1;
    fVar5 = pFVar23->ApproximationAccuracy;
    iVar9 = pFVar23->ClampVoxelDimension;
    bVar10 = pFVar23->bAttemptAutoThickening;
    uVar11 = *(undefined3 *)&pFVar23->field_0xd;
    pFVar21 = (FMeshApproximationSettings *)
              ((pFVar23->MaterialSettings).TextureSize.field0_0x0.XY + 1);
    pFVar25->OutputType = pFVar23->OutputType;
    *(undefined3 *)&pFVar25->field_0x1 = uVar8;
    pFVar25->ApproximationAccuracy = fVar5;
    pFVar25->ClampVoxelDimension = iVar9;
    pFVar25->bAttemptAutoThickening = bVar10;
    *(undefined3 *)&pFVar25->field_0xd = uVar11;
    bVar10 = pFVar23->bIgnoreTinyParts;
    uVar8 = *(undefined3 *)&pFVar23->field_0x15;
    fVar5 = pFVar23->TinyPartSizeMultiplier;
    EVar12 = pFVar23->BaseCapping;
    uVar11 = *(undefined3 *)&pFVar23->field_0x1d;
    pFVar25->TargetMinThicknessMultiplier = pFVar23->TargetMinThicknessMultiplier;
    pFVar25->bIgnoreTinyParts = bVar10;
    *(undefined3 *)&pFVar25->field_0x15 = uVar8;
    pFVar25->TinyPartSizeMultiplier = fVar5;
    pFVar25->BaseCapping = EVar12;
    *(undefined3 *)&pFVar25->field_0x1d = uVar11;
    bVar10 = pFVar23->bFillGaps;
    uVar8 = *(undefined3 *)&pFVar23->field_0x25;
    fVar5 = pFVar23->GapDistance;
    EVar13 = pFVar23->OcclusionMethod;
    bVar14 = pFVar23->bOccludeFromBottom;
    EVar15 = pFVar23->SimplifyMethod;
    uVar1 = pFVar23->field_0x2f;
    pFVar25->WindingThreshold = pFVar23->WindingThreshold;
    pFVar25->bFillGaps = bVar10;
    *(undefined3 *)&pFVar25->field_0x25 = uVar8;
    pFVar25->GapDistance = fVar5;
    pFVar25->OcclusionMethod = EVar13;
    pFVar25->bOccludeFromBottom = bVar14;
    pFVar25->SimplifyMethod = EVar15;
    pFVar25->field_0x2f = uVar1;
    fVar5 = pFVar23->TrianglesPerM;
    fVar6 = pFVar23->GeometricDeviation;
    EVar16 = pFVar23->GroundClipping;
    uVar8 = *(undefined3 *)&pFVar23->field_0x3d;
    pFVar25->TargetTriCount = pFVar23->TargetTriCount;
    pFVar25->TrianglesPerM = fVar5;
    pFVar25->GeometricDeviation = fVar6;
    pFVar25->GroundClipping = EVar16;
    *(undefined3 *)&pFVar25->field_0x3d = uVar8;
    bVar10 = pFVar23->bEstimateHardNormals;
    uVar8 = *(undefined3 *)&pFVar23->field_0x45;
    fVar5 = pFVar23->HardNormalAngle;
    EVar17 = pFVar23->UVGenerationMethod;
    uVar11 = *(undefined3 *)&pFVar23->field_0x4d;
    pFVar25->GroundClippingZHeight = pFVar23->GroundClippingZHeight;
    pFVar25->bEstimateHardNormals = bVar10;
    *(undefined3 *)&pFVar25->field_0x45 = uVar8;
    pFVar25->HardNormalAngle = fVar5;
    pFVar25->UVGenerationMethod = EVar17;
    *(undefined3 *)&pFVar25->field_0x4d = uVar11;
    fVar5 = pFVar23->CurvatureAlignment;
    fVar6 = pFVar23->MergingThreshold;
    fVar7 = pFVar23->MaxAngleDeviation;
    pFVar25->InitialPatchCount = pFVar23->InitialPatchCount;
    pFVar25->CurvatureAlignment = fVar5;
    pFVar25->MergingThreshold = fVar6;
    pFVar25->MaxAngleDeviation = fVar7;
    EVar18 = pFVar23->NaniteFallbackTarget;
    uVar19 = *(undefined2 *)&pFVar23->field_0x62;
    fVar5 = pFVar23->NaniteFallbackPercentTriangles;
    fVar6 = pFVar23->NaniteFallbackRelativeError;
    bVar10 = pFVar23->bSupportRayTracing;
    bVar14 = pFVar23->bAllowDistanceField;
    uVar20 = *(undefined2 *)&pFVar23->field_0x6e;
    pFVar25->bGenerateNaniteEnabledMesh = pFVar23->bGenerateNaniteEnabledMesh;
    pFVar25->NaniteFallbackTarget = EVar18;
    *(undefined2 *)&pFVar25->field_0x62 = uVar19;
    pFVar25->NaniteFallbackPercentTriangles = fVar5;
    pFVar25->NaniteFallbackRelativeError = fVar6;
    pFVar25->bSupportRayTracing = bVar10;
    pFVar25->bAllowDistanceField = bVar14;
    *(undefined2 *)&pFVar25->field_0x6e = uVar20;
    iVar9 = pFVar23->RenderCaptureResolution;
    uVar2 = *(undefined8 *)&pFVar23->MaterialSettings;
    pFVar25->MultiSamplingAA = pFVar23->MultiSamplingAA;
    pFVar25->RenderCaptureResolution = iVar9;
    *(undefined8 *)&pFVar25->MaterialSettings = uVar2;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  uVar8 = *(undefined3 *)&pFVar21->field_0x1;
  fVar5 = pFVar21->ApproximationAccuracy;
  fVar6 = (pFVar23->MaterialSettings).MeshMaxScreenSizePercent;
  uVar4 = *(undefined4 *)&(pFVar23->MaterialSettings).field_0x14;
  pFVar22->OutputType = pFVar21->OutputType;
  *(undefined3 *)&pFVar22->field_0x1 = uVar8;
  pFVar22->ApproximationAccuracy = fVar5;
  (pFVar25->MaterialSettings).MeshMaxScreenSizePercent = fVar6;
  *(undefined4 *)&(pFVar25->MaterialSettings).field_0x14 = uVar4;
  fVar5 = (pFVar23->MaterialSettings).GutterSpace;
  fVar6 = (pFVar23->MaterialSettings).MetallicConstant;
  (pFVar25->MaterialSettings).MeshMinDrawDistance = (pFVar23->MaterialSettings).MeshMinDrawDistance;
  (pFVar25->MaterialSettings).GutterSpace = fVar5;
  (pFVar25->MaterialSettings).MetallicConstant = fVar6;
  fVar5 = (pFVar23->MaterialSettings).AnisotropyConstant;
  (pFVar25->MaterialSettings).RoughnessConstant = (pFVar23->MaterialSettings).RoughnessConstant;
  (pFVar25->MaterialSettings).AnisotropyConstant = fVar5;
  this->DesiredBoundRadius = param_1->DesiredBoundRadius;
  this->DesiredFillingPercentage = param_1->DesiredFillingPercentage;
  this->MinNumberOfActorsToBuild = param_1->MinNumberOfActorsToBuild;
  return this;
}

// GetSimplificationMethodMaterialSettings @ 147d0dd80

FMaterialProxySettings * __thiscall
FHierarchicalSimplification::GetSimplificationMethodMaterialSettings
          (FHierarchicalSimplification *this)

{
  EHierarchicalSimplificationMethod EVar1;
  
  EVar1 = this->SimplificationMethod;
  if (EVar1 == Merge) {
    return &(this->MergeSetting).MaterialSettings;
  }
  if (EVar1 != Simplify) {
    if (EVar1 != Approximate) {
      return (FMaterialProxySettings *)0x0;
    }
    return &(this->ApproximateSettings).MaterialSettings;
  }
  return &(this->ProxySetting).MaterialSettings;
}


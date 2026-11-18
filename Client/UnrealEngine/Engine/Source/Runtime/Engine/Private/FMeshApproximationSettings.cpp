// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147f90c20

UScriptStruct * __cdecl FMeshApproximationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshApproximationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMeshApproximationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshApproximationSettings,(UObject *)pUVar1,
                         L"MeshApproximationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMeshApproximationSettings.OuterSingleton;
}

// FMeshApproximationSettings @ 147fa4520

FMeshApproximationSettings * __thiscall
FMeshApproximationSettings::FMeshApproximationSettings(FMeshApproximationSettings *this)

{
  this->OutputType = MeshAndMaterials;
  this->GroundClippingZHeight = 0.0;
  this->bGenerateNaniteEnabledMesh = false;
  this->NaniteFallbackTarget = Auto;
  this->MultiSamplingAA = 0;
  this->ApproximationAccuracy = 1.0;
  this->ClampVoxelDimension = 0x400;
  this->bAttemptAutoThickening = true;
  this->TargetMinThicknessMultiplier = 1.5;
  this->bIgnoreTinyParts = true;
  this->TinyPartSizeMultiplier = 0.05;
  this->BaseCapping = NoBaseCapping;
  this->WindingThreshold = 0.5;
  this->bFillGaps = true;
  this->GapDistance = 0.1;
  this->OcclusionMethod = VisibilityBasedFiltering;
  this->bOccludeFromBottom = true;
  this->SimplifyMethod = GeometricTolerance;
  this->TargetTriCount = 2000;
  this->TrianglesPerM = 2.0;
  this->GeometricDeviation = 0.1;
  this->GroundClipping = NoGroundClipping;
  this->bEstimateHardNormals = true;
  this->HardNormalAngle = 60.0;
  this->UVGenerationMethod = PreferXAtlas;
  this->InitialPatchCount = 0xfa;
  this->CurvatureAlignment = 1.0;
  this->MergingThreshold = 1.5;
  this->MaxAngleDeviation = 45.0;
  this->NaniteFallbackPercentTriangles = 1.0;
  this->NaniteFallbackRelativeError = 1.0;
  this->bSupportRayTracing = true;
  this->bAllowDistanceField = true;
  this->RenderCaptureResolution = 0x800;
  FMaterialProxySettings::FMaterialProxySettings(&this->MaterialSettings);
  this->CaptureFieldOfView = 30.0;
  this->NearPlaneDist = 1.0;
  this->bUseRenderLODMeshes = false;
  this->bEnableSimplifyPrePass = true;
  this->bEnableParallelBaking = true;
  this->bPrintDebugMessages = false;
  this->bEmitFullDebugMesh = false;
  return this;
}

// operator== @ 147fabc30

bool __thiscall
FMeshApproximationSettings::operator==
          (FMeshApproximationSettings *this,FMeshApproximationSettings *param_1)

{
  bool bVar1;
  
  if (((((((this->OutputType == param_1->OutputType) &&
          (param_1->ApproximationAccuracy == this->ApproximationAccuracy)) &&
         (this->ClampVoxelDimension == param_1->ClampVoxelDimension)) &&
        ((this->bAttemptAutoThickening == param_1->bAttemptAutoThickening &&
         (param_1->TargetMinThicknessMultiplier == this->TargetMinThicknessMultiplier)))) &&
       (this->BaseCapping == param_1->BaseCapping)) &&
      (((param_1->WindingThreshold == this->WindingThreshold &&
        (this->bFillGaps == param_1->bFillGaps)) &&
       ((param_1->GapDistance == this->GapDistance &&
        (((this->OcclusionMethod == param_1->OcclusionMethod &&
          (this->SimplifyMethod == param_1->SimplifyMethod)) &&
         (this->TargetTriCount == param_1->TargetTriCount)))))))) &&
     (((param_1->TrianglesPerM == this->TrianglesPerM &&
       (param_1->GeometricDeviation == this->GeometricDeviation)) &&
      ((this->bGenerateNaniteEnabledMesh == param_1->bGenerateNaniteEnabledMesh &&
       ((((this->NaniteFallbackTarget == param_1->NaniteFallbackTarget &&
          (param_1->NaniteFallbackPercentTriangles == this->NaniteFallbackPercentTriangles)) &&
         ((param_1->NaniteFallbackRelativeError == this->NaniteFallbackRelativeError &&
          (((this->bSupportRayTracing == param_1->bSupportRayTracing &&
            (this->bAllowDistanceField == param_1->bAllowDistanceField)) &&
           (this->MultiSamplingAA == param_1->MultiSamplingAA)))))) &&
        (this->RenderCaptureResolution == param_1->RenderCaptureResolution)))))))) {
    bVar1 = FMaterialProxySettings::operator==(&this->MaterialSettings,&param_1->MaterialSettings);
    if (((bVar1) && (param_1->CaptureFieldOfView == this->CaptureFieldOfView)) &&
       ((param_1->NearPlaneDist == this->NearPlaneDist &&
        ((this->bPrintDebugMessages == param_1->bPrintDebugMessages &&
         (this->bEmitFullDebugMesh == param_1->bEmitFullDebugMesh)))))) {
      return true;
    }
  }
  return false;
}

// operator!= @ 147facf50

bool __thiscall
FMeshApproximationSettings::operator!=
          (FMeshApproximationSettings *this,FMeshApproximationSettings *param_1)

{
  bool bVar1;
  
  if (((((((this->OutputType == param_1->OutputType) &&
          (param_1->ApproximationAccuracy == this->ApproximationAccuracy)) &&
         (this->ClampVoxelDimension == param_1->ClampVoxelDimension)) &&
        ((this->bAttemptAutoThickening == param_1->bAttemptAutoThickening &&
         (param_1->TargetMinThicknessMultiplier == this->TargetMinThicknessMultiplier)))) &&
       (this->BaseCapping == param_1->BaseCapping)) &&
      (((param_1->WindingThreshold == this->WindingThreshold &&
        (this->bFillGaps == param_1->bFillGaps)) &&
       ((param_1->GapDistance == this->GapDistance &&
        (((this->OcclusionMethod == param_1->OcclusionMethod &&
          (this->SimplifyMethod == param_1->SimplifyMethod)) &&
         (this->TargetTriCount == param_1->TargetTriCount)))))))) &&
     (((param_1->TrianglesPerM == this->TrianglesPerM &&
       (param_1->GeometricDeviation == this->GeometricDeviation)) &&
      ((this->bGenerateNaniteEnabledMesh == param_1->bGenerateNaniteEnabledMesh &&
       ((((this->NaniteFallbackTarget == param_1->NaniteFallbackTarget &&
          (param_1->NaniteFallbackPercentTriangles == this->NaniteFallbackPercentTriangles)) &&
         ((param_1->NaniteFallbackRelativeError == this->NaniteFallbackRelativeError &&
          (((this->bSupportRayTracing == param_1->bSupportRayTracing &&
            (this->bAllowDistanceField == param_1->bAllowDistanceField)) &&
           (this->MultiSamplingAA == param_1->MultiSamplingAA)))))) &&
        (this->RenderCaptureResolution == param_1->RenderCaptureResolution)))))))) {
    bVar1 = FMaterialProxySettings::operator==(&this->MaterialSettings,&param_1->MaterialSettings);
    if (((bVar1) && (param_1->CaptureFieldOfView == this->CaptureFieldOfView)) &&
       ((param_1->NearPlaneDist == this->NearPlaneDist &&
        ((this->bPrintDebugMessages == param_1->bPrintDebugMessages &&
         (this->bEmitFullDebugMesh == param_1->bEmitFullDebugMesh)))))) {
      return false;
    }
  }
  return true;
}


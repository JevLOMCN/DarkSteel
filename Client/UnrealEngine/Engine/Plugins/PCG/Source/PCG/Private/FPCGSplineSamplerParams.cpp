// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGSplineSamplerParams @ 14988ce60

FPCGSplineSamplerParams * __thiscall
FPCGSplineSamplerParams::FPCGSplineSamplerParams(FPCGSplineSamplerParams *this)

{
  this->Dimension = OnSpline;
  this->Mode = Subdivision;
  this->EndOffset = 0.0;
  this->MaxRandomOffsetNormalized = 0.0;
  this->bFitToCurve = false;
  this->bTreatSplineAsPolyline = false;
  this->InteriorOrientation = Uniform;
  this->bProjectOntoSurface = false;
  this->Fill = Fill;
  this->SubdivisionsPerSegment = 1;
  this->DistanceIncrement = 100.0;
  this->NumSamples = 8;
  this->NumPlanarSubdivisions = 8;
  this->NumHeightSubdivisions = 8;
  this->StartOffset = 0.0;
  this->InteriorSampleSpacing = 100.0;
  this->InteriorBorderSampleSpacing = 100.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->InteriorDensityFalloffCurve);
  this->bComputeDirectionDelta = false;
  this->NextDirectionDeltaAttribute = PCGSplineSamplerConstants::NextDirectionDeltaAttributeName;
  this->bComputeCurvature = false;
  this->CurvatureAttribute = PCGSplineSamplerConstants::CurvatureAttributeName;
  this->bComputeSegmentIndex = false;
  this->SegmentIndexAttribute = PCGSplineSamplerConstants::SegmentIndexAttributeName;
  this->bComputeSubsegmentIndex = false;
  this->SubsegmentIndexAttribute = PCGSplineSamplerConstants::SubsegmentIndexAttributeName;
  this->bComputeTangents = false;
  this->ArriveTangentAttribute = PCGSplineSamplerConstants::ArriveTangentAttributeName;
  this->LeaveTangentAttribute = PCGSplineSamplerConstants::LeaveTangentAttributeName;
  this->bComputeAlpha = false;
  this->AlphaAttribute = PCGSplineSamplerConstants::AlphaAttributeName;
  this->bComputeDistance = false;
  this->DistanceAttribute = PCGSplineSamplerConstants::DistanceAttributeName;
  this->bComputeInputKey = false;
  this->InputKeyAttribute = PCGSplineSamplerConstants::InputKeyAttributeName;
  this->bUnbounded = false;
  this->PointSteepness = 0.5;
  this->SeedingMode = SeedFromPosition;
  this->bSeedFromLocalPosition = false;
  this->bSeedFrom2DPosition = false;
  return this;
}

// StaticStruct @ 149c39c00

UScriptStruct * __cdecl FPCGSplineSamplerParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSplineSamplerParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSplineSamplerParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineSamplerParams,(UObject *)pUVar1,
                         L"PCGSplineSamplerParams");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSplineSamplerParams.OuterSingleton;
}


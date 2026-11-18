// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// FMeshSimpleShapeApproximation @ 14cda5ad0

FMeshSimpleShapeApproximation * __thiscall
UE::Geometry::FMeshSimpleShapeApproximation::FMeshSimpleShapeApproximation
          (FMeshSimpleShapeApproximation *this)

{
  this->bDetectSpheres = true;
  this->bDetectBoxes = true;
  this->bDetectCapsules = true;
  this->bDetectConvexes = true;
  this->MinDimension = 0.0;
  this->HullSimplifyTolerance = 1.0;
  this->DecompositionPreSimplifyEdgeLength = 1.0;
  this->ConvexDecompositionMinPartThickness = 0.1;
  this->NegativeSpaceTolerance = 3.0;
  this->NegativeSpaceMinRadius = 10.0;
  this->bSimplifyHulls = true;
  this->HullTargetFaceCount = 0x32;
  this->bDecompositionPreSimplifyWithEdgeLength = false;
  this->ConvexDecompositionMaxPieces = 1;
  this->bUseConvexDecompositionMaxPieces = true;
  this->ConvexDecompositionSearchFactor = 0.5;
  this->ConvexDecompositionErrorTolerance = 0.0;
  this->bConvexDecompositionProtectNegativeSpace = false;
  this->bIgnoreInternalNegativeSpace = true;
  this->bUseExactComputationForBox = false;
  this->LevelSetGridResolution = 10;
  (this->SourceMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceMeshes).ArrayNum = 0;
  (this->SourceMeshes).ArrayMax = 0;
  (this->SourceMeshCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceMeshCaches).ArrayNum = 0;
  (this->SourceMeshCaches).ArrayMax = 0;
  return this;
}


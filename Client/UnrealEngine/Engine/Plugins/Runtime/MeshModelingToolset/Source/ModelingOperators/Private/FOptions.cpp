// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// FOptions @ 14c946b60

FOptions * __thiscall
UE::Geometry::FSmoothingOpBase::FOptions::FOptions(FOptions *this,FOptions *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->SmoothAlpha = param_1->SmoothAlpha;
  this->BoundarySmoothAlpha = param_1->BoundarySmoothAlpha;
  this->Iterations = param_1->Iterations;
  this->SmoothPower = param_1->SmoothPower;
  this->bUseImplicit = param_1->bUseImplicit;
  this->bSmoothBoundary = param_1->bSmoothBoundary;
  this->bUniform = param_1->bUniform;
  this->WeightClamp = param_1->WeightClamp;
  (this->BaseNormals).Object = (param_1->BaseNormals).Object;
  pTVar1 = (param_1->BaseNormals).SharedReferenceCount.ReferenceController;
  (this->BaseNormals).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->NormalOffset = param_1->NormalOffset;
  (this->WeightMap).Object = (param_1->WeightMap).Object;
  pTVar1 = (param_1->WeightMap).SharedReferenceCount.ReferenceController;
  (this->WeightMap).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->bUseWeightMap = param_1->bUseWeightMap;
  this->WeightMapMinMultiplier = param_1->WeightMapMinMultiplier;
  return this;
}


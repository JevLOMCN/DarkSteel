// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// GetSettings @ 1439d3920

FCollisionDetectorSettings * __thiscall
Chaos::FCollisionDetector::GetSettings(FCollisionDetector *this)

{
  return &this->CollisionContainer->DetectorSettings;
}

// SetBoundsExpansion @ 1439de140

void __thiscall
Chaos::FCollisionDetector::SetBoundsExpansion(FCollisionDetector *this,double param_1)

{
  (this->CollisionContainer->DetectorSettings).BoundsExpansion = param_1;
  return;
}

// SetSettings @ 1439defe0

void __thiscall
Chaos::FCollisionDetector::SetSettings(FCollisionDetector *this,FCollisionDetectorSettings *param_1)

{
  FPBDCollisionConstraints *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FString *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pFVar1 = this->CollisionContainer;
  (pFVar1->DetectorSettings).BoundsExpansion = param_1->BoundsExpansion;
  (pFVar1->DetectorSettings).BoundsVelocityInflation = param_1->BoundsVelocityInflation;
  (pFVar1->DetectorSettings).MaxVelocityBoundsExpansion = param_1->MaxVelocityBoundsExpansion;
  (pFVar1->DetectorSettings).BoundsVelocityInflationMACD = param_1->BoundsVelocityInflationMACD;
  (pFVar1->DetectorSettings).MaxVelocityBoundsExpansionMACD =
       param_1->MaxVelocityBoundsExpansionMACD;
  (pFVar1->DetectorSettings).bFilteringEnabled = param_1->bFilteringEnabled;
  (pFVar1->DetectorSettings).bDeferNarrowPhase = param_1->bDeferNarrowPhase;
  (pFVar1->DetectorSettings).bAllowManifolds = param_1->bAllowManifolds;
  (pFVar1->DetectorSettings).bAllowManifoldReuse = param_1->bAllowManifoldReuse;
  (pFVar1->DetectorSettings).bAllowCCD = param_1->bAllowCCD;
  (pFVar1->DetectorSettings).bAllowMACD = param_1->bAllowMACD;
  pTVar2 = (param_1->EvolutionName).Name.SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->EvolutionName).Name.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar1->DetectorSettings).EvolutionName.Name.SharedReferenceCount.ReferenceController;
  (pFVar1->DetectorSettings).EvolutionName.Name.Object = pFVar3;
  (pFVar1->DetectorSettings).EvolutionName.Name.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// ~FCollisionDetector @ 143d031f0

void __thiscall Chaos::FCollisionDetector::~FCollisionDetector(FCollisionDetector *this)

{
  this->_padding_ = (longlong)&___7FCollisionDetector_Chaos__6B_;
  return;
}


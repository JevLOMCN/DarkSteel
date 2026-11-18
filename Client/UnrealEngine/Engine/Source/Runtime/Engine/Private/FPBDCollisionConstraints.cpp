// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SetDetectorSettings @ 1482aa550

void __thiscall
Chaos::FPBDCollisionConstraints::SetDetectorSettings
          (FPBDCollisionConstraints *this,FCollisionDetectorSettings *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FString *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  (this->DetectorSettings).BoundsExpansion = param_1->BoundsExpansion;
  (this->DetectorSettings).BoundsVelocityInflation = param_1->BoundsVelocityInflation;
  (this->DetectorSettings).MaxVelocityBoundsExpansion = param_1->MaxVelocityBoundsExpansion;
  (this->DetectorSettings).BoundsVelocityInflationMACD = param_1->BoundsVelocityInflationMACD;
  (this->DetectorSettings).MaxVelocityBoundsExpansionMACD = param_1->MaxVelocityBoundsExpansionMACD;
  (this->DetectorSettings).bFilteringEnabled = param_1->bFilteringEnabled;
  (this->DetectorSettings).bDeferNarrowPhase = param_1->bDeferNarrowPhase;
  (this->DetectorSettings).bAllowManifolds = param_1->bAllowManifolds;
  (this->DetectorSettings).bAllowManifoldReuse = param_1->bAllowManifoldReuse;
  (this->DetectorSettings).bAllowCCD = param_1->bAllowCCD;
  (this->DetectorSettings).bAllowMACD = param_1->bAllowMACD;
  pTVar1 = (param_1->EvolutionName).Name.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->EvolutionName).Name.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->DetectorSettings).EvolutionName.Name.SharedReferenceCount.ReferenceController;
  (this->DetectorSettings).EvolutionName.Name.Object = pFVar2;
  (this->DetectorSettings).EvolutionName.Name.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}


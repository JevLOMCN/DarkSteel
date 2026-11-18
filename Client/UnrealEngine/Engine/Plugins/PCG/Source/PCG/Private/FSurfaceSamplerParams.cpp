// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// InitializeFromSettings @ 149c7d8c0

void __thiscall
PCGSurfaceSampler::FSurfaceSamplerParams::InitializeFromSettings
          (FSurfaceSamplerParams *this,UPCGSurfaceSamplerSettings *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  if (param_1 == (UPCGSurfaceSamplerSettings *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Settings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSurfaceSampler.cpp"
                       ,0x1e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bUseLegacyGridCreationMethod = param_1->bUseLegacyGridCreationMethod;
  this->PointsPerSquaredMeter = param_1->PointsPerSquaredMeter;
  dVar2 = (param_1->PointExtents).field0_0x0._s_0.Y;
  (this->PointExtents).field0_0x0._s_0.X = (param_1->PointExtents).field0_0x0._s_0.X;
  (this->PointExtents).field0_0x0._s_0.Y = dVar2;
  (this->PointExtents).field0_0x0._s_0.Z = (param_1->PointExtents).field0_0x0._s_0.Z;
  this->Looseness = param_1->Looseness;
  this->bApplyDensityToPoints = param_1->bApplyDensityToPoints;
  this->PointSteepness = param_1->PointSteepness;
  return;
}


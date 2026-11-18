// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// Serialize @ 14d635660

void __thiscall
UE::Cameras::FBaseFramingCameraNodeEvaluator::FDesired::Serialize(FDesired *this,FArchive *param_1)

{
  UE::Math::operator<<(param_1,&this->ScreenTarget);
  UE::Math::operator<<(param_1,&this->FramingCorrection);
  ::operator<<(param_1,&this->bHasCorrection);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// IsEnabled @ 1452ce3e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FLensDistortionLUT::IsEnabled(FLensDistortionLUT *this)

{
  if ((this->DistortingDisplacementTexture != (FRDGTexture *)0x0) &&
     (this->UndistortingDisplacementTexture != (FRDGTexture *)0x0)) {
    return true;
  }
  return false;
}


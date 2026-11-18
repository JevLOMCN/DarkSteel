// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 1

// GetWindowToDesktopTransform @ 14acc4ae0

FDeprecateSlateVector2D __thiscall FPaintArgs::GetWindowToDesktopTransform(FPaintArgs *this)

{
  FDeprecateSlateVector2D in_RDX;
  
  *(TVector2<float>_u_0 *)in_RDX = (this->WindowOffset).field0_0x0;
  return in_RDX;
}


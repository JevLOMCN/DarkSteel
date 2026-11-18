// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FLumenGatherCvarState @ 144c1e270

FLumenGatherCvarState * __thiscall
FLumenGatherCvarState::FLumenGatherCvarState(FLumenGatherCvarState *this)

{
  this->TraceMeshSDFs = 1;
  this->DirectLighting = 0;
  this->MeshSDFTraceDistance = 180.0;
  this->SurfaceBias = 5.0;
  this->VoxelTracingMode = 0;
  return this;
}


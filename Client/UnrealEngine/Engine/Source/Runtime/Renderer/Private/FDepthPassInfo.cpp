// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// IsComputeStencilDitherEnabled @ 14481cd80

bool __thiscall FDepthPassInfo::IsComputeStencilDitherEnabled(FDepthPassInfo *this)

{
  if ((this->StencilDitherPassFlags != Raster) && (this->bDitheredLODTransitionsUseStencil != false)
     ) {
    return true;
  }
  return false;
}


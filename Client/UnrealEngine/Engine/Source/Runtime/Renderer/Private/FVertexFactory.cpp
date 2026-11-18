// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// RendersPrimitivesAsCameraFacingSprites @ 145887950

bool __thiscall FVertexFactory::RendersPrimitivesAsCameraFacingSprites(FVertexFactory *this)

{
  return false;
}

// SupportsPositionAndNormalOnlyStream @ 14588ec90

bool __thiscall FVertexFactory::SupportsPositionAndNormalOnlyStream(FVertexFactory *this)

{
  return (this->PositionAndNormalStream).ArrayNum != 0;
}

// SupportsPositionOnlyStream @ 14588ecb0

bool __thiscall FVertexFactory::SupportsPositionOnlyStream(FVertexFactory *this)

{
  return (this->PositionStream).ArrayNum != 0;
}


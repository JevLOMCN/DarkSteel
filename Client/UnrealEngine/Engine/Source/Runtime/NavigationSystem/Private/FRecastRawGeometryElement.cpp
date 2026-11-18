// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// GetRasterizationFlags @ 146e5d500

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

rcRasterizationFlags __cdecl
FRecastRawGeometryElement::GetRasterizationFlags(FCompositeNavModifier *param_1)

{
  rcRasterizationFlags rVar1;
  rcRasterizationFlags rVar2;
  
  rVar2 = param_1->bFillCollisionUnderneathForNavmesh;
  rVar1 = rVar2 | RC_RASTERIZE_AS_FILLED_CONVEX;
  if (param_1->bRasterizeAsFilledConvexVolume == 0) {
    rVar1 = rVar2;
  }
  return rVar1;
}


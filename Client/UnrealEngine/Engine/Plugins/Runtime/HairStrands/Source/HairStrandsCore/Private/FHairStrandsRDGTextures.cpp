// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// FHairStrandsRDGTextures @ 14e07ce80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FHairStrandsRDGTextures * __thiscall
FHairStrandsRDGTextures::FHairStrandsRDGTextures(FHairStrandsRDGTextures *this)

{
  this->Layout = Layout0;
  (this->TileCount).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->TileCoord).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  this->TriangleMaskTexture = (FRDGTexture *)0x0;
  this->DepthTestTexture = (FRDGTexture *)0x0;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetCachedInstanceSectionSize @ 14538ce20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall FRayTracingScene::FLayer::GetCachedInstanceSectionSize(FLayer *this)

{
  return this->NumCachedInstances + (this->CachedInstancesFreeList).ArrayNum;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FTranslucencyVolumeMarkData @ 1454d4e90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTranslucencyVolumeMarkData * __thiscall
FViewInfo::FTranslucencyVolumeMarkData::FTranslucencyVolumeMarkData
          (FTranslucencyVolumeMarkData *this)

{
  this->MarkTexture = (FRDGTexture *)0x0;
  this->VoxelAllocator = (FRDGBuffer *)0x0;
  this->VoxelData = (FRDGBuffer *)0x0;
  this->VoxelIndirectArgs = (FRDGBuffer *)0x0;
  return this;
}


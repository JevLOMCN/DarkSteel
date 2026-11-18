// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247c40

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IDeltaChunkEnumeration * __cdecl
BuildPatchServices::FDeltaChunkEnumerationFactory::Create
          (IManifestBuildStreamer *param_1,FStatsCollector *param_2,FBuildPatchAppManifest *param_3,
          uint param_4)

{
  FDeltaChunkEnumeration *this;
  FDeltaChunkEnumeration *pFVar1;
  
  this = ::operator_new(0x2f0);
  pFVar1 = (FDeltaChunkEnumeration *)0x0;
  if (this != (FDeltaChunkEnumeration *)0x0) {
    pFVar1 = FDeltaChunkEnumeration::FDeltaChunkEnumeration(this,param_1,param_2,param_3,param_4);
  }
  return (IDeltaChunkEnumeration *)pFVar1;
}


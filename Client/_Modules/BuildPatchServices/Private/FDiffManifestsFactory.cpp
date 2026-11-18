// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247da0

IDiffManifests * __cdecl
BuildPatchServices::FDiffManifestsFactory::Create(FDiffManifestsConfiguration *param_1)

{
  FDiffManifests *pFVar1;
  
  pFVar1 = ::operator_new(0x1d8);
  if (pFVar1 != (FDiffManifests *)0x0) {
    pFVar1 = FDiffManifests::FDiffManifests(pFVar1,param_1);
    return (IDiffManifests *)pFVar1;
  }
  return (IDiffManifests *)0x0;
}


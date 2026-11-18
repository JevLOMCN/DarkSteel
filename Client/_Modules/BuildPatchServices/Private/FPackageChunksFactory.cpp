// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c9c10

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IPackageChunks * __cdecl
BuildPatchServices::FPackageChunksFactory::Create(FPackageChunksConfiguration *param_1)

{
  FPackageChunks *pFVar1;
  
  pFVar1 = ::operator_new(0x308);
  if (pFVar1 != (FPackageChunks *)0x0) {
    pFVar1 = FPackageChunks::FPackageChunks(pFVar1,param_1);
    return (IPackageChunks *)pFVar1;
  }
  return (IPackageChunks *)0x0;
}


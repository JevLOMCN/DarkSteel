// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1431d3c20

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

IBuildManifestSet * __cdecl
BuildPatchServices::FBuildManifestSetFactory::Create
          (TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  FBuildPatchManifestSet *pFVar2;
  
  pFVar2 = ::operator_new(0x108);
  if (pFVar2 == (FBuildPatchManifestSet *)0x0) {
    pFVar2 = (FBuildPatchManifestSet *)0x0;
  }
  else {
    pFVar2 = FBuildPatchManifestSet::FBuildPatchManifestSet(pFVar2,param_1);
  }
  DestructItems<BuildPatchServices::FBuildPatchInstallerAction,int>
            ((FBuildPatchInstallerAction *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (IBuildManifestSet *)pFVar2;
}


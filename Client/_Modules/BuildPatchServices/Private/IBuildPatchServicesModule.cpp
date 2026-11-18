// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// GenerateChunksManifestFromDirectory @ 1431a7850

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

bool __thiscall
IBuildPatchServicesModule::GenerateChunksManifestFromDirectory
          (IBuildPatchServicesModule *this,FChunkBuildConfiguration *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001431a7853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 200))();
  return (bool)uVar1;
}

// ~IBuildPatchServicesModule @ 1431bf830

void __thiscall
IBuildPatchServicesModule::~IBuildPatchServicesModule(IBuildPatchServicesModule *this)

{
  *this = (IBuildPatchServicesModule)IModuleInterface::vftable;
  return;
}


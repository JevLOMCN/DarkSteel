// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// FDirectoryBuildStreamerConfig @ 1431bc960

FDirectoryBuildStreamerConfig * __thiscall
BuildPatchServices::FDirectoryBuildStreamerConfig::FDirectoryBuildStreamerConfig
          (FDirectoryBuildStreamerConfig *this,FDirectoryBuildStreamerConfig *param_1)

{
  ::FString::FString(&this->BuildRoot,&param_1->BuildRoot);
  ::FString::FString(&this->InputListFile,&param_1->InputListFile);
  ::FString::FString(&this->IgnoreListFile,&param_1->IgnoreListFile);
  return this;
}

// ~FDirectoryBuildStreamerConfig @ 1431bf360

void __thiscall
BuildPatchServices::FDirectoryBuildStreamerConfig::~FDirectoryBuildStreamerConfig
          (FDirectoryBuildStreamerConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IgnoreListFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputListFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuildRoot).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}


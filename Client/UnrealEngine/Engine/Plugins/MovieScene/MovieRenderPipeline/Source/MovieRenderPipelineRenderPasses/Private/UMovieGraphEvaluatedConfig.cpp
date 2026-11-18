// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// GetSettingForBranch @ 14dde5d40

UMovieGraphSettingNode * __thiscall
UMovieGraphEvaluatedConfig::GetSettingForBranch
          (UMovieGraphEvaluatedConfig *this,UClass *param_1,FName param_2,bool param_3,bool param_4)

{
  UMovieGraphSettingNode *pUVar1;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_18;
  
  GetSettingsForBranch(this,&local_18,param_1,param_2,param_3,param_4);
  if (local_18.ArrayNum < 1) {
    pUVar1 = (UMovieGraphSettingNode *)0x0;
  }
  else {
    pUVar1 = *(UMovieGraphSettingNode **)local_18.AllocatorInstance.Data;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar1;
}


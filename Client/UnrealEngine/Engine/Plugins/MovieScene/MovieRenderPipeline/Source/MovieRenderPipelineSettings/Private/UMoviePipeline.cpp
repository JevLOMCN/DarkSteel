// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineSettings
// Functions: 1

// FindOrAddSettingForShot<UMoviePipelineCameraSetting> @ 14ddb0e80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipelineCameraSetting * __thiscall
UMoviePipeline::FindOrAddSettingForShot<UMoviePipelineCameraSetting>
          (UMoviePipeline *this,UMoviePipelineExecutorShot *param_1)

{
  UMoviePipelinePrimaryConfig *pUVar1;
  UMoviePipelineCameraSetting *pUVar2;
  UClass *local_res18 [2];
  
  pUVar1 = GetPipelinePrimaryConfig(this);
  local_res18[0] = Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar2 = (UMoviePipelineCameraSetting *)
           UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                     ((TSubclassOf<UMoviePipelineSetting>)local_res18,pUVar1,param_1);
  return pUVar2;
}


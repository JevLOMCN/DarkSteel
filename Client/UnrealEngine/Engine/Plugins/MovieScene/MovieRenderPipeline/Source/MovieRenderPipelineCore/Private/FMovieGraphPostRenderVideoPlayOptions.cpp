// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// StaticStruct @ 14dd5eef0

UScriptStruct * __cdecl FMovieGraphPostRenderVideoPlayOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions,
                         (UObject *)pUVar1,L"MovieGraphPostRenderVideoPlayOptions");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderVideoPlayOptions.OuterSingleton;
}

// FMovieGraphPostRenderVideoPlayOptions @ 14dd69ff0

FMovieGraphPostRenderVideoPlayOptions * __thiscall
FMovieGraphPostRenderVideoPlayOptions::FMovieGraphPostRenderVideoPlayOptions
          (FMovieGraphPostRenderVideoPlayOptions *this)

{
  this->PlaybackMethod = OperatingSystem;
  (this->PlayerExecutable).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerExecutable).FilePath.Data.ArrayNum = 0;
  (this->PlayerExecutable).FilePath.Data.ArrayMax = 0;
  (this->AdditionalCommandLineArguments).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AdditionalCommandLineArguments).Data.ArrayNum = 0;
  (this->AdditionalCommandLineArguments).Data.ArrayMax = 0;
  this->JobPlayback = FirstJobOnly;
  this->RenderLayerPlayback = FirstRenderLayerOnly;
  return this;
}


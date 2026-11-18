// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// StaticStruct @ 14dc9dbe0

UScriptStruct * __cdecl FMovieGraphInitConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphInitConfig.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphInitConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphInitConfig,(UObject *)pUVar1,
                         L"MovieGraphInitConfig");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphInitConfig.OuterSingleton;
}

// FMovieGraphInitConfig @ 14dcadf30

FMovieGraphInitConfig * __thiscall
FMovieGraphInitConfig::FMovieGraphInitConfig(FMovieGraphInitConfig *this)

{
  UClass *pUVar1;
  
  (this->RendererClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DataSourceClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AudioRendererClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar1 = UMovieGraphDefaultRenderer::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->RendererClass).Class.field0_0x0.DebugPtr = pUVar1;
  pUVar1 = UMovieGraphSequenceDataSource::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DataSourceClass).Class.field0_0x0.DebugPtr = pUVar1;
  pUVar1 = UMovieGraphDefaultAudioRenderer::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->AudioRendererClass).Class.field0_0x0.DebugPtr = pUVar1;
  this->bRenderViewport = false;
  return this;
}


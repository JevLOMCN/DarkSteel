// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// StaticStruct @ 14dc9dba0

UScriptStruct * __cdecl FMovieGraphPinProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPinProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphPinProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphPinProperties,(UObject *)pUVar1,
                         L"MovieGraphPinProperties");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphPinProperties.OuterSingleton;
}

// FMovieGraphPinProperties @ 14dcae330

FMovieGraphPinProperties * __thiscall
FMovieGraphPinProperties::FMovieGraphPinProperties
          (FMovieGraphPinProperties *this,FMovieGraphPinProperties *param_1)

{
  UObject *pUVar1;
  
  this->Label = param_1->Label;
  this->Type = param_1->Type;
  pUVar1 = (param_1->TypeObject).field0_0x0.DebugPtr;
  (this->TypeObject).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this->bAllowMultipleConnections = param_1->bAllowMultipleConnections;
  this->bIsBranch = param_1->bIsBranch;
  this->bIsWildcard = param_1->bIsWildcard;
  this->bIsBuiltIn = param_1->bIsBuiltIn;
  return this;
}


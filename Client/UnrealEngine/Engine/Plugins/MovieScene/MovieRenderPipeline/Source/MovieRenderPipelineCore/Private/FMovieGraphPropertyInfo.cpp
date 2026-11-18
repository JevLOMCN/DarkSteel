// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// StaticStruct @ 14dc9b9a0

UScriptStruct * __cdecl FMovieGraphPropertyInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPropertyInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphPropertyInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphPropertyInfo,(UObject *)pUVar1,
                         L"MovieGraphPropertyInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphPropertyInfo.OuterSingleton;
}

// FMovieGraphPropertyInfo @ 14dcae3a0

FMovieGraphPropertyInfo * __thiscall
FMovieGraphPropertyInfo::FMovieGraphPropertyInfo
          (FMovieGraphPropertyInfo *this,FMovieGraphPropertyInfo *param_1)

{
  UObject *pUVar1;
  
  this->Name = param_1->Name;
  FText::FText(&this->ContextMenuName,&param_1->ContextMenuName);
  this->PromotionName = param_1->PromotionName;
  this->bIsDynamicProperty = param_1->bIsDynamicProperty;
  this->ValueType = param_1->ValueType;
  pUVar1 = (param_1->ValueTypeObject).field0_0x0.DebugPtr;
  (this->ValueTypeObject).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this->bIsPermanentlyExposed = param_1->bIsPermanentlyExposed;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// StaticStruct @ 14dc68b40

UScriptStruct * __cdecl FMovieGraphNamedResolution::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphNamedResolution.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphNamedResolution.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphNamedResolution,(UObject *)pUVar1,
                         L"MovieGraphNamedResolution");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphNamedResolution.OuterSingleton;
}

// operator= @ 14dc75640

FMovieGraphNamedResolution * __thiscall
FMovieGraphNamedResolution::operator=
          (FMovieGraphNamedResolution *this,FMovieGraphNamedResolution *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->Description;
  this->ProfileName = param_1->ProfileName;
  pFVar2 = &this->Description;
  (this->Resolution).field0_0x0 = (param_1->Resolution).field0_0x0;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Description).Data.ArrayNum = (param_1->Description).Data.ArrayNum;
    (this->Description).Data.ArrayMax = (param_1->Description).Data.ArrayMax;
    (param_1->Description).Data.ArrayNum = 0;
    (param_1->Description).Data.ArrayMax = 0;
  }
  return this;
}

// ~FMovieGraphNamedResolution @ 14dcb21b0

void __thiscall
FMovieGraphNamedResolution::~FMovieGraphNamedResolution(FMovieGraphNamedResolution *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}


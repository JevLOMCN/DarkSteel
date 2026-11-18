// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146162ea0

UScriptStruct * __cdecl FMovieSceneSubSectionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSectionData,(UObject *)pUVar1,
                         L"MovieSceneSubSectionData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSubSectionData.OuterSingleton;
}

// FMovieSceneSubSectionData @ 146180480

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneSubSectionData * __thiscall
FMovieSceneSubSectionData::FMovieSceneSubSectionData
          (FMovieSceneSubSectionData *this,UMovieSceneSubSection *param_1,FGuid *param_2,
          ESectionEvaluationFlags param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  UMovieSceneSubSection *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSubSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Section).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneSubSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  uVar1 = param_2->A;
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  this->Flags = param_3;
  (this->ObjectBindingId).A = uVar1;
  (this->ObjectBindingId).B = uVar2;
  (this->ObjectBindingId).C = uVar3;
  (this->ObjectBindingId).D = uVar4;
  return this;
}


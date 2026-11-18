// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// StaticStruct @ 146721450

UScriptStruct * __cdecl FMovieSceneDoubleVectorKeyStructBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase,
                         (UObject *)pUVar1,L"MovieSceneDoubleVectorKeyStructBase");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneDoubleVectorKeyStructBase.OuterSingleton;
}

// PropagateChanges @ 146721490

void __thiscall
FMovieSceneDoubleVectorKeyStructBase::PropagateChanges
          (FMovieSceneDoubleVectorKeyStructBase *this,FPropertyChangedEvent *param_1)

{
  FMovieSceneKeyStructHelper::Apply(&this->KeyStructInterop,(FFrameNumber)(this->Time).Value);
  return;
}

// GetPropertyChannelByIndex @ 1467214b0

double * __thiscall
FMovieSceneDoubleVectorKeyStructBase::GetPropertyChannelByIndex
          (FMovieSceneDoubleVectorKeyStructBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
             ,0x73,L"Pure virtual not implemented (%s)");
  return (double *)0x0;
}


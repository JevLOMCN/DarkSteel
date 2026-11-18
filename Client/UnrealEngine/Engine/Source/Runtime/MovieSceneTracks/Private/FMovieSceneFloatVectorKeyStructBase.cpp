// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// StaticStruct @ 146728760

UScriptStruct * __cdecl FMovieSceneFloatVectorKeyStructBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFloatVectorKeyStructBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneFloatVectorKeyStructBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatVectorKeyStructBase,
                         (UObject *)pUVar1,L"MovieSceneFloatVectorKeyStructBase");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneFloatVectorKeyStructBase.OuterSingleton;
}

// PropagateChanges @ 1467287a0

void __thiscall
FMovieSceneFloatVectorKeyStructBase::PropagateChanges
          (FMovieSceneFloatVectorKeyStructBase *this,FPropertyChangedEvent *param_1)

{
  FMovieSceneKeyStructHelper::Apply(&this->KeyStructInterop,(FFrameNumber)(this->Time).Value);
  return;
}

// GetPropertyChannelByIndex @ 1467287c0

float * __thiscall
FMovieSceneFloatVectorKeyStructBase::GetPropertyChannelByIndex
          (FMovieSceneFloatVectorKeyStructBase *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
             ,0x25,L"Pure virtual not implemented (%s)");
  return (float *)0x0;
}


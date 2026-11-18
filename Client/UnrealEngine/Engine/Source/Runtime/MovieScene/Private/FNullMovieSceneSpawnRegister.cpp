// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// DestroySpawnedObject @ 14620f230

void __thiscall
FNullMovieSceneSpawnRegister::DestroySpawnedObject
          (FNullMovieSceneSpawnRegister *this,UObject *param_1,
          UMovieSceneSpawnableBindingBase *param_2)

{
  return;
}

// SpawnObject @ 146237190

UObject * __thiscall
FNullMovieSceneSpawnRegister::SpawnObject
          (FNullMovieSceneSpawnRegister *this,FMovieSceneSpawnable *param_1,
          FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneSpawnRegister.h"
                     ,0x140,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return (UObject *)0x0;
}


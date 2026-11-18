// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// DestroySpawnedObject @ 14ac74b20

void __thiscall
FSequenceCameraShakeSpawnRegister::DestroySpawnedObject
          (FSequenceCameraShakeSpawnRegister *this,UObject *param_1,
          UMovieSceneSpawnableBindingBase *param_2)

{
  return;
}

// SpawnObject @ 14ac802f0

UObject * __thiscall
FSequenceCameraShakeSpawnRegister::SpawnObject
          (FSequenceCameraShakeSpawnRegister *this,FMovieSceneSpawnable *param_1,
          FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&this->SpawnedObject);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return pUVar1;
}


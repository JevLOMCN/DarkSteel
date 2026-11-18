// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// ~IPropertyTraits @ 146621430

void __thiscall UE::MovieScene::IPropertyTraits::~IPropertyTraits(IPropertyTraits *this)

{
  *this = (IPropertyTraits)&___7IPropertyTraits_MovieScene_UE__6B_;
  return;
}

// GetTrackClass @ 146698710

TSubclassOf<UMovieSceneTrack> __thiscall
UE::MovieScene::IPropertyTraits::GetTrackClass(IPropertyTraits *this,FProperty *param_1)

{
  param_1->_padding_ = 0;
  return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
}

// InitializeTrackFromProperty @ 1466a3b10

bool __thiscall
UE::MovieScene::IPropertyTraits::InitializeTrackFromProperty
          (IPropertyTraits *this,UMovieSceneTrack *param_1,FProperty *param_2)

{
  return false;
}


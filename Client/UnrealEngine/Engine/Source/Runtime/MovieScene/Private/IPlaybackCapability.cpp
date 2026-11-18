// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// ~IPlaybackCapability @ 1461ff970

void __thiscall UE::MovieScene::IPlaybackCapability::~IPlaybackCapability(IPlaybackCapability *this)

{
  *this = (IPlaybackCapability)&___7IPlaybackCapability_MovieScene_UE__6B_;
  return;
}

// Initialize @ 14621f8b0

void __thiscall
UE::MovieScene::IPlaybackCapability::Initialize
          (IPlaybackCapability *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InvalidateCachedData @ 146221990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::IPlaybackCapability::InvalidateCachedData
          (IPlaybackCapability *this,UMovieSceneEntitySystemLinker *param_1)

{
  return;
}

// OnSubInstanceCreated @ 146226e90

void __thiscall
UE::MovieScene::IPlaybackCapability::OnSubInstanceCreated
          (IPlaybackCapability *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,FInstanceHandle param_2
          )

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}


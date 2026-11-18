// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// CreateLegacyPlayer @ 146912ec0

/* WARNING: Enum "Type": Some values do not have unique names */

IMovieScenePlayer * __thiscall
UE::UMG::FUMGLegacyPlayerProvider::CreateLegacyPlayer
          (FUMGLegacyPlayerProvider *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  UUMGSequencePlayer *pUVar1;
  IMovieScenePlayer *pIVar2;
  
  pUVar1 = FWidgetAnimationState::GetOrCreateLegacyPlayer(this->State);
  pIVar2 = (IMovieScenePlayer *)&pUVar1->_padding_;
  if (pUVar1 == (UUMGSequencePlayer *)0x0) {
    pIVar2 = (IMovieScenePlayer *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pIVar2;
}


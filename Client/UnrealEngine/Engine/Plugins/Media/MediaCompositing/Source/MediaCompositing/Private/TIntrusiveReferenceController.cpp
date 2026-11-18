// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// DestroyObject @ 14ea6a2c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneMediaPlayerStore,1>::DestroyObject
          (TIntrusiveReferenceController<FMovieSceneMediaPlayerStore,1> *this)

{
  FMovieSceneMediaPlayerStore::~FMovieSceneMediaPlayerStore
            ((FMovieSceneMediaPlayerStore *)&this->ObjectStorage);
  return;
}


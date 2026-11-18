// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// operator= @ 1466221c0

TSubclassOf<UMovieSceneTrack> * __thiscall
TSubclassOf<UMovieSceneTrack>::operator=
          (TSubclassOf<UMovieSceneTrack> *this,TSubclassOf<UMovieSceneTrack> *param_1)

{
  UClass *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Class).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Class).field0_0x0 = (param_1->Class).field0_0x0;
  return this;
}


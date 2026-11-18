// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FromSection @ 1462153d0

FMovieSceneTrackEvaluationData * __cdecl
FMovieSceneTrackEvaluationData::FromSection
          (FMovieSceneTrackEvaluationData *__return_storage_ptr__,UMovieSceneSection *param_1)

{
  UMovieSceneSection *local_res8;
  
  (__return_storage_ptr__->ForcedTime).Value = -0x80000000;
  (__return_storage_ptr__->Track).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->Section).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->SortOrder = 0;
  __return_storage_ptr__->Flags = None;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieSceneSection *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(__return_storage_ptr__->Section).WeakPtr,(FObjectPtr)&local_res8);
  return __return_storage_ptr__;
}

// FromTrack @ 146215430

FMovieSceneTrackEvaluationData * __cdecl
FMovieSceneTrackEvaluationData::FromTrack
          (FMovieSceneTrackEvaluationData *__return_storage_ptr__,UMovieSceneTrack *param_1)

{
  UMovieSceneTrack *local_res8 [4];
  
  (__return_storage_ptr__->ForcedTime).Value = -0x80000000;
  (__return_storage_ptr__->Track).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->Section).WeakPtr = (FWeakObjectPtr)0x0;
  __return_storage_ptr__->SortOrder = 0;
  __return_storage_ptr__->Flags = None;
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieSceneTrack *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)local_res8);
  return __return_storage_ptr__;
}


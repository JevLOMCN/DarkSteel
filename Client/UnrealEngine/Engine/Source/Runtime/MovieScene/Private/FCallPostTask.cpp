// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Run @ 146152b60

void __cdecl
`UE::MovieScene::
SchedulePostTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>,UE::MovieScene::FEvaluationHookUpdater>'
::__l2::FCallPostTask::Run(ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  UMovieSceneEvaluationHookSystem::SortEvents((UMovieSceneEvaluationHookSystem *)param_1[1]);
  return;
}


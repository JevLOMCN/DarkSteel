// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// Run @ 1468688c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`UE::MovieScene::
SchedulePostTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FGatherTransformOriginsFromSubscenes,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>,UE::MovieScene::FGatherTransformOriginsFromSubscenes>'
::__l2::FCallPostTask::Run(ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  UE::MovieScene::FGatherTransformOriginsFromSubscenes::PostTask
            ((FGatherTransformOriginsFromSubscenes *)(param_1 + 1));
  return;
}

// Run @ 1468cd4a0

void __cdecl
`UE::MovieScene::
SchedulePostTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>,UE::MovieScene::FHarvestHierarchicalEasings>'
::__l2::FCallPostTask::Run(ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  UE::MovieScene::FHarvestHierarchicalEasings::PostTask
            ((FHarvestHierarchicalEasings *)(param_1 + 1));
  return;
}


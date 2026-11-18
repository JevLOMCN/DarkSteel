// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// Run @ 1467c0240

void __cdecl
`UE::MovieScene::
SchedulePreTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>,UE::MovieScene::FEvaluateConstraintChannels>'
::__l2::FCallPreTask::Run(ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  ITaskContext IVar1;
  
  IVar1 = param_1[3];
  *(undefined4 *)((longlong)IVar1 + 0x50) = 0;
  if (*(int *)((longlong)IVar1 + 0x54) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)((longlong)IVar1 + 0x48),0,
               (int *)((longlong)IVar1 + 0x54));
  }
  return;
}

// Run @ 1468688d0

void __cdecl
`UE::MovieScene::
SchedulePreTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FGatherSkeletalAnimations,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneSkeletalAnimationComponentData>,UE::MovieScene::TOptionalReadAccess<FFrameTime>,UE::MovieScene::TOptionalReadAccess<double>_>,UE::MovieScene::FGatherSkeletalAnimations>'
::__l2::FCallPreTask::Run(ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  UE::MovieScene::FSkeletalAnimationSystemData::ResetSkeletalAnimations
            ((FSkeletalAnimationSystemData *)param_1[2]);
  return;
}

// Run @ 1468688e0

void __cdecl
`UE::MovieScene::
SchedulePreTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FIntegerAdditiveFromBaseBlendTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>_>,UE::MovieScene::FIntegerAdditiveFromBaseBlendTask>'
::__l2::FCallPreTask::Run(ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1[1] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[1],0,(longlong)iVar1 << 4);
    return;
  }
  return;
}

// Run @ 1468cd4b0

void __cdecl
`UE::MovieScene::
SchedulePreTask<UE::MovieScene::TScheduledEntityTask<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>,UE::MovieScene::FHarvestHierarchicalEasings>'
::__l2::FCallPreTask::Run(ITaskContext *param_1,FEntityAllocationWriteContext param_2)

{
  ITaskContext IVar1;
  ITaskContext IVar2;
  
  IVar2 = param_1[1];
  IVar1 = (ITaskContext)((longlong)IVar2 + (longlong)*(int *)(param_1 + 2) * 0x18);
  for (; IVar2 != IVar1; IVar2 = (ITaskContext)((longlong)IVar2 + 0x18)) {
    *(undefined8 *)IVar2 = 0x3ff0000000000000;
    *(undefined8 *)((longlong)IVar2 + 8) = 0x3ff0000000000000;
  }
  return;
}


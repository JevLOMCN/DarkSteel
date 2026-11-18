// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// ForEachAllocation @ 146133620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluationHookUpdater::ForEachAllocation
          (FEvaluationHookUpdater *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FInstanceHandle> param_2,
          TRead<FMovieSceneEvaluationHookComponent> param_3,TRead<FFrameTime> param_4,
          TWrite<UE::MovieScene::FEvaluationHookFlags> param_5)

{
  ushort uVar1;
  FBuiltInComponentTypes *pFVar2;
  TOptional<FFrameTime> *pTVar3;
  TOptional<FFrameTime> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool local_res10;
  undefined1 local_b8 [24];
  FMovieSceneInverseSequenceTransform local_a0;
  FMovieSceneEvaluationHookEvent local_78;
  
  lVar5 = (longlong)param_1->AllocationIndex * 0x38 +
          *(longlong *)&param_1->Manager->EntityAllocationMasks;
  uVar7 = (ulonglong)
          *(ushort *)
           (*(longlong *)
             (*(longlong *)&param_1->Manager->EntityAllocations +
             (longlong)param_1->AllocationIndex * 8) + 0xe);
  pFVar2 = FBuiltInComponentTypes::Get();
  uVar1 = (pFVar2->Tags).RestoreState.Value;
  if (((uVar1 == 0xffff) || (*(int *)(lVar5 + 0x30) <= (int)(uint)uVar1)) ||
     (local_res10 = true,
     (*(uint *)(lVar5 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)) {
    local_res10 = false;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    if (*(char *)param_5 == '\0') {
      *(char *)param_5 = '\x01';
    }
    else {
      lVar6 = (ulonglong)*(ushort *)param_2 * 0x140;
      lVar5 = *(longlong *)&this->InstanceRegistry->Instances;
      FMovieSceneSequenceTransform::Inverse
                ((FMovieSceneSequenceTransform *)(lVar5 + 0x90 + lVar6),&local_a0);
      local_78.RootInstanceHandle = (FRootInstanceHandle)0xffff;
      local_78.Hook.Interface._0_8_ = 0;
      local_78.Hook.Interface._8_8_ = 0;
      local_78.Hook.ObjectBindingID.A = 0;
      local_78.Hook.ObjectBindingID.B = 0;
      local_78.Hook.ObjectBindingID.C = 0;
      local_78.Hook.ObjectBindingID.D = 0;
      local_78.SequenceID.Value = 0xffffffff;
      local_78.RootTime.FrameNumber.Value = 0;
      local_78.RootTime.SubFrame = 0.0;
      local_78.bRestoreState = false;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)param_3 != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)param_3);
      }
      local_78.Hook.Interface._0_8_ = *(undefined8 *)param_3;
      local_78.Hook.ObjectBindingID._0_8_ = *(undefined8 *)((longlong)param_3 + 0x10);
      local_78.Hook.ObjectBindingID._8_8_ = *(undefined8 *)((longlong)param_3 + 0x18);
      local_78.Hook.Interface._8_8_ = *(undefined8 *)((longlong)param_3 + 8);
      local_78.Type = Update;
      pTVar3 = FMovieSceneInverseSequenceTransform::TryTransformTime
                         (&local_a0,(TOptional<FFrameTime> *)(local_b8 + 8),*(FFrameTime *)param_4,
                          (FMovieSceneTransformBreadcrumbs *)(lVar5 + 0xb0 + lVar6));
      local_b8._0_4_ = 0;
      local_b8._4_4_ = 0.0;
      pTVar4 = (TOptional<FFrameTime> *)local_b8;
      if (pTVar3->bIsSet != false) {
        pTVar4 = pTVar3;
      }
      local_78.RootTime = pTVar4->TypedValue;
      local_78.RootInstanceHandle = *(FRootInstanceHandle *)(lVar6 + 0x13a + lVar5);
      local_78.SequenceID.Value = *(uint *)(lVar6 + 0x128 + lVar5);
      local_78.bRestoreState = local_res10;
      UMovieSceneEvaluationHookSystem::AddEvent
                (this->HookSystem,*(FInstanceHandle *)(lVar6 + 0x13a + lVar5),&local_78);
      if (local_a0.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.NestedTransforms.AllocatorInstance.Data);
      }
    }
    param_5 = (TWrite<UE::MovieScene::FEvaluationHookFlags>)((longlong)param_5 + 1);
    param_2 = (TRead<UE::MovieScene::FInstanceHandle>)((longlong)param_2 + 4);
    param_3 = (TRead<FMovieSceneEvaluationHookComponent>)((longlong)param_3 + 0x20);
    param_4 = (TRead<FFrameTime>)((longlong)param_4 + 8);
  }
  return;
}

// PostTask @ 146149cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEvaluationHookUpdater::PostTask(FEvaluationHookUpdater *this)

{
  UMovieSceneEvaluationHookSystem::SortEvents(this->HookSystem);
  return;
}


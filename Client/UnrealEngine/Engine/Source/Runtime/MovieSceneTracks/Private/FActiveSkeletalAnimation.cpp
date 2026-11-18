// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FActiveSkeletalAnimation @ 146807660

FActiveSkeletalAnimation * __thiscall
UE::MovieScene::FActiveSkeletalAnimation::FActiveSkeletalAnimation
          (FActiveSkeletalAnimation *this,FActiveSkeletalAnimation *param_1)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  FMovieSceneNestedSequenceTransform *pFVar5;
  longlong lVar6;
  FFrameNumber FVar7;
  byte bVar8;
  
  pTVar1 = &(this->Context).RootToSequenceTransform.NestedTransforms;
  this->AnimSection = param_1->AnimSection;
  lVar6 = (param_1->Context)._padding_;
  (this->Context)._padding_ = (param_1->Context)._padding_;
  (this->Context)._padding_ = lVar6;
  lVar6 = (param_1->Context)._padding_;
  (this->Context)._padding_ = (param_1->Context)._padding_;
  (this->Context)._padding_ = lVar6;
  (this->Context)._padding_ = (param_1->Context)._padding_;
  FVar7.Value = (param_1->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value;
  (this->Context).RootToSequenceTransform.LinearTransform.TimeScale =
       (param_1->Context).RootToSequenceTransform.LinearTransform.TimeScale;
  (this->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
       (FFrameNumber)FVar7.Value;
  (this->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame =
       (param_1->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
  iVar4 = (param_1->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
  pFVar5 = (FMovieSceneNestedSequenceTransform *)
           (param_1->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
  (this->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  FMovieSceneWarpCounter::FMovieSceneWarpCounter
            (&(this->Context).RootToSequenceWarpCounter,
             &(param_1->Context).RootToSequenceWarpCounter);
  (this->Context).Status = (param_1->Context).Status;
  (this->Context).PrePostRollStartEndTime.Value = (param_1->Context).PrePostRollStartEndTime.Value;
  (this->Context).HierarchicalBias = (param_1->Context).HierarchicalBias;
  uVar3 = (this->Context).field_0x7c;
  bVar8 = ((this->Context).bHasJumped ^ (param_1->Context).bHasJumped) & 1U ^ uVar3;
  (this->Context).field_0x7c = bVar8;
  bVar8 = (bVar8 ^ (param_1->Context).field_0x7c) & 2 ^ bVar8;
  (this->Context).field_0x7c = bVar8;
  bVar8 = (bVar8 ^ (param_1->Context).field_0x7c) & 4 ^ bVar8;
  (this->Context).field_0x7c = bVar8;
  bVar8 = (bVar8 ^ (param_1->Context).field_0x7c) & 8 ^ bVar8;
  (this->Context).field_0x7c = bVar8;
  bVar8 = (bVar8 ^ (param_1->Context).field_0x7c) & 0x10 ^ bVar8;
  (this->Context).field_0x7c = bVar8;
  bVar8 = (bVar8 ^ (param_1->Context).field_0x7c) & 0x20 ^ bVar8;
  (this->Context).field_0x7c = bVar8;
  (this->Context).field_0x7c = (bVar8 ^ (param_1->Context).field_0x7c) & 0x40 ^ bVar8;
  this->EvalFrameTime = param_1->EvalFrameTime;
  (this->EntityID).Value = (param_1->EntityID).Value;
  this->RootInstanceHandle = param_1->RootInstanceHandle;
  this->BlendWeight = param_1->BlendWeight;
  this->FromEvalTime = param_1->FromEvalTime;
  this->ToEvalTime = param_1->ToEvalTime;
  this->PlayerStatus = param_1->PlayerStatus;
  bVar8 = (this->bFireNotifies ^ param_1->bFireNotifies) & 1 ^ this->field_0xac;
  this->field_0xac = bVar8;
  bVar8 = (bVar8 ^ param_1->field_0xac) & 2 ^ bVar8;
  this->field_0xac = bVar8;
  bVar8 = (bVar8 ^ param_1->field_0xac) & 4 ^ bVar8;
  this->field_0xac = bVar8;
  bVar8 = (bVar8 ^ param_1->field_0xac) & 8 ^ bVar8;
  this->field_0xac = bVar8;
  this->field_0xac = (bVar8 ^ param_1->field_0xac) & 0x10 ^ bVar8;
  return this;
}


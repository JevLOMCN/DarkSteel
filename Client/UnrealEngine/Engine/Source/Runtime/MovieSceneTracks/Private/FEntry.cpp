// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// FEntry @ 14660f190

FEntry * __thiscall FMovieSceneExecutionTokens::FEntry::FEntry(FEntry *this,FEntry *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FMovieSceneTrackIdentifier FVar9;
  FFrameNumber FVar10;
  byte bVar11;
  
  uVar6 = (param_1->Operand).ObjectBindingID.B;
  uVar7 = (param_1->Operand).ObjectBindingID.C;
  uVar8 = (param_1->Operand).ObjectBindingID.D;
  (this->Operand).ObjectBindingID.A = (param_1->Operand).ObjectBindingID.A;
  (this->Operand).ObjectBindingID.B = uVar6;
  (this->Operand).ObjectBindingID.C = uVar7;
  (this->Operand).ObjectBindingID.D = uVar8;
  (this->Operand).SequenceID.Value = (param_1->Operand).SequenceID.Value;
  FVar9.Value = (param_1->Scope).Key.TrackIdentifier.Value;
  uVar4 = *(undefined8 *)&(param_1->Scope).Key.SectionIndex;
  (this->Scope).Key.SequenceID = (FMovieSceneSequenceID)(param_1->Scope).Key.SequenceID.Value;
  (this->Scope).Key.TrackIdentifier = (FMovieSceneTrackIdentifier)FVar9.Value;
  *(undefined8 *)&(this->Scope).Key.SectionIndex = uVar4;
  lVar5 = (param_1->Context)._padding_;
  (this->Context)._padding_ = (param_1->Context)._padding_;
  (this->Context)._padding_ = lVar5;
  lVar5 = (param_1->Context)._padding_;
  (this->Context)._padding_ = (param_1->Context)._padding_;
  (this->Context)._padding_ = lVar5;
  (this->Context)._padding_ = (param_1->Context)._padding_;
  FVar10.Value = (param_1->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value
  ;
  (this->Context).RootToSequenceTransform.LinearTransform.TimeScale =
       (param_1->Context).RootToSequenceTransform.LinearTransform.TimeScale;
  (this->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
       (FFrameNumber)FVar10.Value;
  (this->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame =
       (param_1->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame;
  (this->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
       (param_1->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
  (param_1->Context).RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Context).RootToSequenceTransform.NestedTransforms.ArrayNum =
       (param_1->Context).RootToSequenceTransform.NestedTransforms.ArrayNum;
  (this->Context).RootToSequenceTransform.NestedTransforms.ArrayMax =
       (param_1->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
  (param_1->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
  (param_1->Context).RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter
            (&(this->Context).RootToSequenceWarpCounter,
             &(param_1->Context).RootToSequenceWarpCounter);
  (this->Context).Status = (param_1->Context).Status;
  (this->Context).PrePostRollStartEndTime.Value = (param_1->Context).PrePostRollStartEndTime.Value;
  (this->Context).HierarchicalBias = (param_1->Context).HierarchicalBias;
  uVar3 = (this->Context).field_0x7c;
  bVar11 = ((this->Context).bHasJumped ^ (param_1->Context).bHasJumped) & 1U ^ uVar3;
  (this->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ (param_1->Context).field_0x7c) & 2 ^ bVar11;
  (this->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ (param_1->Context).field_0x7c) & 4 ^ bVar11;
  (this->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ (param_1->Context).field_0x7c) & 8 ^ bVar11;
  (this->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ (param_1->Context).field_0x7c) & 0x10 ^ bVar11;
  (this->Context).field_0x7c = bVar11;
  bVar11 = (bVar11 ^ (param_1->Context).field_0x7c) & 0x20 ^ bVar11;
  (this->Context).field_0x7c = bVar11;
  (this->Context).field_0x7c = (bVar11 ^ (param_1->Context).field_0x7c) & 0x40 ^ bVar11;
  puVar1 = &(this->Token).field_0x40;
  bVar11 = *puVar1;
  puVar2 = &(this->Token).field_0x40;
  (this->Token).bIsValid = false;
  (this->Token).bInline = true;
  if ((param_1->Token).bIsValid) {
    (this->Token).field_0x40 = bVar11 & 0xfe | 3;
    (param_1->Token).bIsValid = false;
    bVar11 = (this->Token).field_0x40;
    (this->Token).field_0x40 = ((param_1->Token).field_0x40 ^ bVar11) & 2 ^ bVar11;
    uVar4 = *(undefined8 *)((param_1->Token).Data.Pad + 8);
    *(undefined8 *)(this->Token).Data.Pad = *(undefined8 *)(param_1->Token).Data.Pad;
    *(undefined8 *)((this->Token).Data.Pad + 8) = uVar4;
    uVar4 = *(undefined8 *)((param_1->Token).Data.Pad + 0x18);
    *(undefined8 *)((this->Token).Data.Pad + 0x10) =
         *(undefined8 *)((param_1->Token).Data.Pad + 0x10);
    *(undefined8 *)((this->Token).Data.Pad + 0x18) = uVar4;
    uVar4 = *(undefined8 *)((param_1->Token).Data.Pad + 0x28);
    *(undefined8 *)((this->Token).Data.Pad + 0x20) =
         *(undefined8 *)((param_1->Token).Data.Pad + 0x20);
    *(undefined8 *)((this->Token).Data.Pad + 0x28) = uVar4;
    uVar4 = *(undefined8 *)((param_1->Token).Data.Pad + 0x38);
    *(undefined8 *)((this->Token).Data.Pad + 0x30) =
         *(undefined8 *)((param_1->Token).Data.Pad + 0x30);
    *(undefined8 *)((this->Token).Data.Pad + 0x38) = uVar4;
  }
  return this;
}

// FEntry @ 14660f360

FEntry * __thiscall
FMovieSceneExecutionTokens::FEntry::FEntry
          (FEntry *this,FMovieSceneEvaluationOperand *param_1,FMovieSceneEvaluationScope *param_2,
          FMovieSceneContext *param_3,TInlineValue<IMovieSceneExecutionToken,64,8> *param_4)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  FMovieSceneNestedSequenceTransform *pFVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  FMovieSceneTrackIdentifier FVar13;
  FFrameNumber FVar14;
  byte bVar15;
  
  uVar10 = (param_1->ObjectBindingID).B;
  uVar11 = (param_1->ObjectBindingID).C;
  uVar12 = (param_1->ObjectBindingID).D;
  pTVar1 = &(this->Context).RootToSequenceTransform.NestedTransforms;
  (this->Operand).ObjectBindingID.A = (param_1->ObjectBindingID).A;
  (this->Operand).ObjectBindingID.B = uVar10;
  (this->Operand).ObjectBindingID.C = uVar11;
  (this->Operand).ObjectBindingID.D = uVar12;
  (this->Operand).SequenceID.Value = (param_1->SequenceID).Value;
  FVar13.Value = (param_2->Key).TrackIdentifier.Value;
  uVar8 = *(undefined8 *)&(param_2->Key).SectionIndex;
  (this->Scope).Key.SequenceID = (FMovieSceneSequenceID)(param_2->Key).SequenceID.Value;
  (this->Scope).Key.TrackIdentifier = (FMovieSceneTrackIdentifier)FVar13.Value;
  *(undefined8 *)&(this->Scope).Key.SectionIndex = uVar8;
  lVar9 = param_3->_padding_;
  (this->Context)._padding_ = param_3->_padding_;
  (this->Context)._padding_ = lVar9;
  lVar9 = param_3->_padding_;
  (this->Context)._padding_ = param_3->_padding_;
  (this->Context)._padding_ = lVar9;
  (this->Context)._padding_ = param_3->_padding_;
  FVar14.Value = (param_3->RootToSequenceTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->Context).RootToSequenceTransform.LinearTransform.TimeScale =
       (param_3->RootToSequenceTransform).LinearTransform.TimeScale;
  (this->Context).RootToSequenceTransform.LinearTransform.Offset.FrameNumber =
       (FFrameNumber)FVar14.Value;
  (this->Context).RootToSequenceTransform.LinearTransform.Offset.SubFrame =
       (param_3->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Context).RootToSequenceTransform.NestedTransforms.ArrayMax;
  iVar6 = (param_3->RootToSequenceTransform).NestedTransforms.ArrayNum;
  pFVar7 = (FMovieSceneNestedSequenceTransform *)
           (param_3->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  (this->Context).RootToSequenceTransform.NestedTransforms.ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar2);
    ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
              ((pTVar1->AllocatorInstance).Data,pFVar7,iVar6);
  }
  FMovieSceneWarpCounter::FMovieSceneWarpCounter
            (&(this->Context).RootToSequenceWarpCounter,&param_3->RootToSequenceWarpCounter);
  (this->Context).Status = param_3->Status;
  (this->Context).PrePostRollStartEndTime.Value = (param_3->PrePostRollStartEndTime).Value;
  (this->Context).HierarchicalBias = param_3->HierarchicalBias;
  uVar5 = (this->Context).field_0x7c;
  bVar15 = ((this->Context).bHasJumped ^ param_3->bHasJumped) & 1U ^ uVar5;
  (this->Context).field_0x7c = bVar15;
  bVar15 = (bVar15 ^ param_3->field_0x7c) & 2 ^ bVar15;
  (this->Context).field_0x7c = bVar15;
  bVar15 = (bVar15 ^ param_3->field_0x7c) & 4 ^ bVar15;
  (this->Context).field_0x7c = bVar15;
  bVar15 = (bVar15 ^ param_3->field_0x7c) & 8 ^ bVar15;
  (this->Context).field_0x7c = bVar15;
  bVar15 = (bVar15 ^ param_3->field_0x7c) & 0x10 ^ bVar15;
  (this->Context).field_0x7c = bVar15;
  bVar15 = (bVar15 ^ param_3->field_0x7c) & 0x20 ^ bVar15;
  (this->Context).field_0x7c = bVar15;
  (this->Context).field_0x7c = (bVar15 ^ param_3->field_0x7c) & 0x40 ^ bVar15;
  puVar3 = &(this->Token).field_0x40;
  bVar15 = *puVar3;
  puVar4 = &(this->Token).field_0x40;
  (this->Token).bIsValid = false;
  (this->Token).bInline = true;
  if (param_4->bIsValid) {
    (this->Token).field_0x40 = bVar15 & 0xfe | 3;
    param_4->bIsValid = false;
    bVar15 = (this->Token).field_0x40;
    (this->Token).field_0x40 = (param_4->field_0x40 ^ bVar15) & 2 ^ bVar15;
    uVar8 = *(undefined8 *)((param_4->Data).Pad + 8);
    *(undefined8 *)(this->Token).Data.Pad = *(undefined8 *)(param_4->Data).Pad;
    *(undefined8 *)((this->Token).Data.Pad + 8) = uVar8;
    uVar8 = *(undefined8 *)((param_4->Data).Pad + 0x18);
    *(undefined8 *)((this->Token).Data.Pad + 0x10) = *(undefined8 *)((param_4->Data).Pad + 0x10);
    *(undefined8 *)((this->Token).Data.Pad + 0x18) = uVar8;
    uVar8 = *(undefined8 *)((param_4->Data).Pad + 0x28);
    *(undefined8 *)((this->Token).Data.Pad + 0x20) = *(undefined8 *)((param_4->Data).Pad + 0x20);
    *(undefined8 *)((this->Token).Data.Pad + 0x28) = uVar8;
    uVar8 = *(undefined8 *)((param_4->Data).Pad + 0x38);
    *(undefined8 *)((this->Token).Data.Pad + 0x30) = *(undefined8 *)((param_4->Data).Pad + 0x30);
    *(undefined8 *)((this->Token).Data.Pad + 0x38) = uVar8;
  }
  return this;
}


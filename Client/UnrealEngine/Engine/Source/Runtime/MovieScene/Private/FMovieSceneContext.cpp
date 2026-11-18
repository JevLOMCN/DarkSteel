// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// FMovieSceneContext @ 146119110

FMovieSceneContext * __thiscall
FMovieSceneContext::FMovieSceneContext(FMovieSceneContext *this,FMovieSceneContext *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  FFrameNumber FVar3;
  byte bVar4;
  
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  this->_padding_ = param_1->_padding_;
  FVar3.Value = (param_1->RootToSequenceTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->RootToSequenceTransform).LinearTransform.TimeScale =
       (param_1->RootToSequenceTransform).LinearTransform.TimeScale;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar3.Value;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame =
       (param_1->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
  (this->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (param_1->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  (param_1->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceTransform).NestedTransforms.ArrayNum =
       (param_1->RootToSequenceTransform).NestedTransforms.ArrayNum;
  (this->RootToSequenceTransform).NestedTransforms.ArrayMax =
       (param_1->RootToSequenceTransform).NestedTransforms.ArrayMax;
  (param_1->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
  (param_1->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter
            (&this->RootToSequenceWarpCounter,&param_1->RootToSequenceWarpCounter);
  this->Status = param_1->Status;
  (this->PrePostRollStartEndTime).Value = (param_1->PrePostRollStartEndTime).Value;
  this->HierarchicalBias = param_1->HierarchicalBias;
  bVar4 = (this->bHasJumped ^ param_1->bHasJumped) & 1U ^ this->field_0x7c;
  this->field_0x7c = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x7c) & 2 ^ bVar4;
  this->field_0x7c = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x7c) & 4 ^ bVar4;
  this->field_0x7c = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x7c) & 8 ^ bVar4;
  this->field_0x7c = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x7c) & 0x10 ^ bVar4;
  this->field_0x7c = bVar4;
  bVar4 = (bVar4 ^ param_1->field_0x7c) & 0x20 ^ bVar4;
  this->field_0x7c = bVar4;
  this->field_0x7c = (bVar4 ^ param_1->field_0x7c) & 0x40 ^ bVar4;
  return this;
}

// FMovieSceneContext @ 146119200

FMovieSceneContext * __thiscall
FMovieSceneContext::FMovieSceneContext(FMovieSceneContext *this,FMovieSceneContext *param_1)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  FMovieSceneNestedSequenceTransform *pFVar5;
  longlong lVar6;
  FFrameNumber FVar7;
  byte bVar8;
  
  lVar6 = param_1->_padding_;
  pTVar1 = &(this->RootToSequenceTransform).NestedTransforms;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar6;
  lVar6 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar6;
  this->_padding_ = param_1->_padding_;
  FVar7.Value = (param_1->RootToSequenceTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->RootToSequenceTransform).LinearTransform.TimeScale =
       (param_1->RootToSequenceTransform).LinearTransform.TimeScale;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar7.Value;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame =
       (param_1->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RootToSequenceTransform).NestedTransforms.ArrayMax;
  iVar4 = (param_1->RootToSequenceTransform).NestedTransforms.ArrayNum;
  pFVar5 = (FMovieSceneNestedSequenceTransform *)
           (param_1->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  (this->RootToSequenceTransform).NestedTransforms.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  FMovieSceneWarpCounter::FMovieSceneWarpCounter
            (&this->RootToSequenceWarpCounter,&param_1->RootToSequenceWarpCounter);
  this->Status = param_1->Status;
  (this->PrePostRollStartEndTime).Value = (param_1->PrePostRollStartEndTime).Value;
  this->HierarchicalBias = param_1->HierarchicalBias;
  bVar8 = (this->bHasJumped ^ param_1->bHasJumped) & 1U ^ this->field_0x7c;
  this->field_0x7c = bVar8;
  bVar8 = (bVar8 ^ param_1->field_0x7c) & 2 ^ bVar8;
  this->field_0x7c = bVar8;
  bVar8 = (bVar8 ^ param_1->field_0x7c) & 4 ^ bVar8;
  this->field_0x7c = bVar8;
  bVar8 = (bVar8 ^ param_1->field_0x7c) & 8 ^ bVar8;
  this->field_0x7c = bVar8;
  bVar8 = (bVar8 ^ param_1->field_0x7c) & 0x10 ^ bVar8;
  this->field_0x7c = bVar8;
  bVar8 = (bVar8 ^ param_1->field_0x7c) & 0x20 ^ bVar8;
  this->field_0x7c = bVar8;
  this->field_0x7c = (bVar8 ^ param_1->field_0x7c) & 0x40 ^ bVar8;
  return this;
}

// FMovieSceneContext @ 146119340

FMovieSceneContext * __thiscall FMovieSceneContext::FMovieSceneContext(FMovieSceneContext *this)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_48;
  TRange<FFrameTime> local_28;
  
  local_28.LowerBound._0_4_ = local_28.LowerBound._0_4_ & 0xffffff00;
  uVar2 = local_28.LowerBound._0_4_;
  local_48 = local_48 & 0xffffff00;
  local_28.LowerBound._0_4_ = local_48;
  uVar3 = local_28.LowerBound._0_4_;
  local_28.LowerBound.Value.FrameNumber.Value = 0;
  local_28.LowerBound.Value.SubFrame = 0.0;
  local_28.LowerBound.Type.Value = (uchar)uVar2;
  local_28.LowerBound._1_3_ = SUB43(uVar2,1);
  local_28.UpperBound.Type.Value = local_28.LowerBound.Type.Value;
  local_28.UpperBound._1_3_ = local_28.LowerBound._1_3_;
  local_28.UpperBound.Value.FrameNumber.Value = 0;
  local_28.UpperBound.Value.SubFrame = 0.0;
  local_28.LowerBound._0_4_ = uVar3;
  FMovieSceneEvaluationRange::FMovieSceneEvaluationRange
            ((FMovieSceneEvaluationRange *)this,&local_28,(FFrameRate)0x10000003c,Forwards);
  (this->RootToSequenceTransform).LinearTransform.TimeScale = 1.0;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = 0;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame = 0.0;
  (this->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
  (this->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter(&this->RootToSequenceWarpCounter);
  this->bHasJumped = false;
  this->bHasPostRollStartTime = false;
  this->bHasPreRollEndTime = false;
  this->bSectionPostRoll = false;
  this->bSectionPreRoll = false;
  this->bSilent = false;
  this->bHasLooped = false;
  this->Status = Stopped;
  (this->PrePostRollStartEndTime).Value = -0x80000000;
  this->HierarchicalBias = 0;
  return this;
}

// operator= @ 14611ec50

FMovieSceneContext * __thiscall
FMovieSceneContext::operator=(FMovieSceneContext *this,FMovieSceneContext *param_1)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FFrameNumber FVar6;
  byte bVar7;
  
  lVar5 = param_1->_padding_;
  pTVar1 = &(param_1->RootToSequenceTransform).NestedTransforms;
  pTVar2 = &(this->RootToSequenceTransform).NestedTransforms;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  this->_padding_ = param_1->_padding_;
  FVar6.Value = (param_1->RootToSequenceTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->RootToSequenceTransform).LinearTransform.TimeScale =
       (param_1->RootToSequenceTransform).LinearTransform.TimeScale;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar6.Value;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame =
       (param_1->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
  if (pTVar2 != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data,
               (this->RootToSequenceTransform).NestedTransforms.ArrayNum);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RootToSequenceTransform).NestedTransforms.ArrayNum =
         (param_1->RootToSequenceTransform).NestedTransforms.ArrayNum;
    (this->RootToSequenceTransform).NestedTransforms.ArrayMax =
         (param_1->RootToSequenceTransform).NestedTransforms.ArrayMax;
    (param_1->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
    (param_1->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  }
  FMovieSceneWarpCounter::operator=
            (&this->RootToSequenceWarpCounter,&param_1->RootToSequenceWarpCounter);
  this->Status = param_1->Status;
  (this->PrePostRollStartEndTime).Value = (param_1->PrePostRollStartEndTime).Value;
  this->HierarchicalBias = param_1->HierarchicalBias;
  bVar7 = (this->bHasJumped ^ param_1->bHasJumped) & 1U ^ this->field_0x7c;
  this->field_0x7c = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x7c) & 2 ^ bVar7;
  this->field_0x7c = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x7c) & 4 ^ bVar7;
  this->field_0x7c = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x7c) & 8 ^ bVar7;
  this->field_0x7c = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x7c) & 0x10 ^ bVar7;
  this->field_0x7c = bVar7;
  bVar7 = (bVar7 ^ param_1->field_0x7c) & 0x20 ^ bVar7;
  this->field_0x7c = bVar7;
  this->field_0x7c = (bVar7 ^ param_1->field_0x7c) & 0x40 ^ bVar7;
  return this;
}

// operator= @ 14611ed70

FMovieSceneContext * __thiscall
FMovieSceneContext::operator=(FMovieSceneContext *this,FMovieSceneContext *param_1)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  FMovieSceneNestedSequenceTransform *pFVar7;
  longlong lVar8;
  FFrameNumber FVar9;
  byte bVar10;
  
  lVar8 = param_1->_padding_;
  pTVar1 = &(param_1->RootToSequenceTransform).NestedTransforms;
  pTVar2 = &(this->RootToSequenceTransform).NestedTransforms;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar8;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar8;
  this->_padding_ = param_1->_padding_;
  FVar9.Value = (param_1->RootToSequenceTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->RootToSequenceTransform).LinearTransform.TimeScale =
       (param_1->RootToSequenceTransform).LinearTransform.TimeScale;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar9.Value;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame =
       (param_1->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
  if (pTVar2 != pTVar1) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data,
               (this->RootToSequenceTransform).NestedTransforms.ArrayNum);
    iVar5 = (param_1->RootToSequenceTransform).NestedTransforms.ArrayNum;
    piVar3 = &(this->RootToSequenceTransform).NestedTransforms.ArrayMax;
    pFVar7 = (FMovieSceneNestedSequenceTransform *)(pTVar1->AllocatorInstance).Data;
    iVar6 = *piVar3;
    (this->RootToSequenceTransform).NestedTransforms.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar5,iVar6,&pTVar2->AllocatorInstance,iVar5,piVar3);
      ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                ((pTVar2->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  FMovieSceneWarpCounter::operator=
            (&this->RootToSequenceWarpCounter,&param_1->RootToSequenceWarpCounter);
  this->Status = param_1->Status;
  (this->PrePostRollStartEndTime).Value = (param_1->PrePostRollStartEndTime).Value;
  this->HierarchicalBias = param_1->HierarchicalBias;
  bVar10 = (this->bHasJumped ^ param_1->bHasJumped) & 1U ^ this->field_0x7c;
  this->field_0x7c = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x7c) & 2 ^ bVar10;
  this->field_0x7c = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x7c) & 4 ^ bVar10;
  this->field_0x7c = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x7c) & 8 ^ bVar10;
  this->field_0x7c = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x7c) & 0x10 ^ bVar10;
  this->field_0x7c = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x7c) & 0x20 ^ bVar10;
  this->field_0x7c = bVar10;
  this->field_0x7c = (bVar10 ^ param_1->field_0x7c) & 0x40 ^ bVar10;
  return this;
}

// ReportOuterSectionRanges @ 146150bd0

void __thiscall
FMovieSceneContext::ReportOuterSectionRanges
          (FMovieSceneContext *this,TRange<FFrameNumber> *param_1,TRange<FFrameNumber> *param_2)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  FFrameNumber *pFVar7;
  TRangeBound<FFrameNumber> *pTVar8;
  FMovieSceneContext *pFVar9;
  TRange<FFrameNumber> *pTVar10;
  TRange<FFrameNumber> local_28;
  TRange<FFrameNumber> local_18;
  
  local_28.LowerBound.Value.Value = *(int *)((longlong)&this->_padding_ + 4);
  if (local_28.LowerBound.Value.Value == -0x80000000) {
    if ((int)this->_padding_ == 0) {
      pFVar9 = (FMovieSceneContext *)((longlong)&this->_padding_ + 4);
      if ((*(char *)((longlong)&this->_padding_ + 4) == '\x02') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      pFVar9 = this;
      if (((char)this->_padding_ == '\x02') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28.LowerBound.Value.Value = *(int *)((longlong)&pFVar9->_padding_ + 4);
  }
  uVar1 = (param_1->LowerBound).Type.Value;
  local_28.LowerBound.Type.Value = '\x01';
  if (uVar1 == '\x02') {
LAB_146150cf0:
    uVar1 = (param_1->UpperBound).Type.Value;
    pTVar8 = &param_1->UpperBound;
    local_28.UpperBound.Type.Value = '\x01';
    local_28.UpperBound.Value.Value = local_28.LowerBound.Value.Value;
    if (uVar1 != '\x02') {
      iVar2 = (param_1->UpperBound).Value.Value;
      if (iVar2 <= local_28.LowerBound.Value.Value) {
        if (iVar2 < local_28.LowerBound.Value.Value) {
          pTVar8 = &local_28.UpperBound;
        }
        if (uVar1 != '\x01') goto LAB_146150c8b;
      }
      if ((pTVar8->Value).Value != (param_1->UpperBound).Value.Value) goto LAB_146150c8b;
    }
    if (uVar1 != '\x02') {
      this->bHasPreRollEndTime = false;
      (this->PrePostRollStartEndTime).Value = (param_1->UpperBound).Value.Value;
      bVar6 = 0;
      if ((int)this->_padding_ == 0) {
        bVar6 = 0x20;
      }
      this->field_0x7c = this->field_0x7c | bVar6;
      bVar6 = this->field_0x7c;
      this->field_0x7c = (~(bVar6 * '\x02') ^ bVar6) & 0x40 ^ bVar6;
      return;
    }
  }
  else {
    iVar2 = (param_1->LowerBound).Value.Value;
    pTVar10 = param_1;
    if (iVar2 < local_28.LowerBound.Value.Value) {
LAB_146150ce7:
      if ((pTVar10->LowerBound).Value.Value == (param_1->LowerBound).Value.Value)
      goto LAB_146150cf0;
    }
    else {
      if (local_28.LowerBound.Value.Value < iVar2) {
        pTVar10 = &local_28;
      }
      if (uVar1 == '\x01') goto LAB_146150ce7;
    }
  }
LAB_146150c8b:
  uVar1 = (param_2->LowerBound).Type.Value;
  local_18.LowerBound.Type.Value = '\x01';
  local_18.LowerBound.Value.Value = local_28.LowerBound.Value.Value;
  if (uVar1 != '\x02') {
    iVar2 = (param_2->LowerBound).Value.Value;
    pTVar10 = param_2;
    if (local_28.LowerBound.Value.Value <= iVar2) {
      if (local_28.LowerBound.Value.Value < iVar2) {
        pTVar10 = &local_18;
      }
      if (uVar1 != '\x01') goto LAB_146150cc0;
    }
    if ((pTVar10->LowerBound).Value.Value != (param_2->LowerBound).Value.Value) goto LAB_146150cc0;
  }
  uVar1 = (param_2->UpperBound).Type.Value;
  pTVar8 = &param_2->UpperBound;
  local_18.UpperBound.Type.Value = '\x01';
  local_18.UpperBound.Value.Value = local_28.LowerBound.Value.Value;
  if (uVar1 != '\x02') {
    iVar2 = (param_2->UpperBound).Value.Value;
    if (iVar2 <= local_28.LowerBound.Value.Value) {
      if (iVar2 < local_28.LowerBound.Value.Value) {
        pTVar8 = &local_18.UpperBound;
      }
      if (uVar1 != '\x01') goto LAB_146150cc0;
    }
    if ((pTVar8->Value).Value != (param_2->UpperBound).Value.Value) goto LAB_146150cc0;
  }
  if ((param_2->LowerBound).Type.Value != '\x02') {
    pFVar7 = TRange<FFrameNumber>::GetLowerBoundValue(param_2);
    iVar2 = pFVar7->Value;
    this->bHasPreRollEndTime = false;
    lVar4 = this->_padding_;
    (this->PrePostRollStartEndTime).Value = iVar2;
    bVar6 = 0;
    if ((int)lVar4 == 1) {
      bVar6 = 0x20;
    }
    this->field_0x7c = this->field_0x7c | bVar6;
    bVar6 = this->field_0x7c;
    this->field_0x7c = (~(bVar6 * '\x02') ^ bVar6) & 0x40 ^ bVar6;
    return;
  }
LAB_146150cc0:
  this->bHasPostRollStartTime = false;
  (this->PrePostRollStartEndTime).Value = -0x80000000;
  this->bHasPreRollEndTime = false;
  return;
}

// GetSequenceToRootSequenceTransform @ 1461b3d60

FMovieSceneInverseSequenceTransform * __thiscall
FMovieSceneContext::GetSequenceToRootSequenceTransform
          (FMovieSceneContext *this,FMovieSceneInverseSequenceTransform *__return_storage_ptr__)

{
  FMovieSceneSequenceTransform::Inverse(&this->RootToSequenceTransform,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSequenceToRootTransform @ 1461b3d90

FMovieSceneTimeTransform * __thiscall
FMovieSceneContext::GetSequenceToRootTransform
          (FMovieSceneContext *this,FMovieSceneTimeTransform *__return_storage_ptr__)

{
  FMovieSceneInverseSequenceTransform *this_00;
  FMovieSceneInverseSequenceTransform local_28;
  
  this_00 = FMovieSceneSequenceTransform::Inverse(&this->RootToSequenceTransform,&local_28);
  FMovieSceneInverseSequenceTransform::AsLegacyLinearTimeTransform(this_00,__return_storage_ptr__);
  if (local_28.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.NestedTransforms.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Transform @ 1461d7b20

FMovieSceneContext * __thiscall
FMovieSceneContext::Transform
          (FMovieSceneContext *this,FMovieSceneContext *__return_storage_ptr__,
          FMovieSceneSequenceTransform *param_1,FFrameRate param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  uchar uVar9;
  int iVar10;
  FMovieSceneSequenceTransform *pFVar11;
  TRange<FFrameTime> *pTVar12;
  FMovieSceneContext *pFVar13;
  FMovieSceneTimeTransform *pFVar14;
  FMovieSceneWarpCounter *this_00;
  FMovieSceneNestedSequenceTransform *this_01;
  FMovieSceneNestedSequenceTransform *pFVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  uint local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  FFrameTime local_c8;
  FMovieSceneWarpCounter *local_c0;
  undefined8 local_b8;
  byte local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90 [8];
  FMovieSceneSequenceTransform local_88;
  TRange<FFrameTime> local_68;
  
  FMovieSceneContext(__return_storage_ptr__,this);
  pFVar11 = FMovieSceneSequenceTransform::operator*
                      (&__return_storage_ptr__->RootToSequenceTransform,&local_88,param_1);
  FMovieSceneSequenceTransform::operator=(&__return_storage_ptr__->RootToSequenceTransform,pFVar11);
  if (local_88.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.NestedTransforms.AllocatorInstance.Data);
  }
  __return_storage_ptr__->_padding_ = (longlong)param_2;
  pTVar12 = FMovieSceneSequenceTransform::ComputeTraversedHull
                      (param_1,&local_68,(TRange<FFrameTime> *)this);
  lVar4 = *(longlong *)&(pTVar12->LowerBound).Value.SubFrame;
  __return_storage_ptr__->_padding_ = *(longlong *)&pTVar12->LowerBound;
  __return_storage_ptr__->_padding_ = lVar4;
  __return_storage_ptr__->_padding_ = (longlong)(pTVar12->UpperBound).Value;
  local_a8 = __return_storage_ptr__->_padding_;
  local_a0 = (undefined4)__return_storage_ptr__->_padding_;
  if ((char)local_a8 != '\x02') {
    local_9c = *(undefined8 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    local_94 = *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    if ((char)local_9c != '\x02') {
      if ((*(char *)((longlong)&__return_storage_ptr__->_padding_ + 4) == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FMovieSceneContext *)(*pcVar5)();
        return pFVar13;
      }
      lVar4 = __return_storage_ptr__->_padding_;
      if (((char)__return_storage_ptr__->_padding_ == '\x02') &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FMovieSceneContext *)(*pcVar5)();
        return pFVar13;
      }
      local_res10 = *(undefined8 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
      local_res20 = lVar4;
      if ((int)local_res10 <= (int)lVar4) {
        if ((int)local_res10 != (int)lVar4) goto LAB_1461d7c6c;
        local_res10._4_4_ = (float)((ulonglong)local_res10 >> 0x20);
        local_res20._4_4_ = (float)((ulonglong)lVar4 >> 0x20);
        bVar8 = local_res10._4_4_ <= local_res20._4_4_;
        if (bVar8) goto LAB_1461d7c6c;
      }
      lVar4 = __return_storage_ptr__->_padding_;
      lVar7 = __return_storage_ptr__->_padding_;
      uVar1 = *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
      __return_storage_ptr__->_padding_ =
           *(longlong *)((longlong)&__return_storage_ptr__->_padding_ + 4);
      *(longlong *)((longlong)&__return_storage_ptr__->_padding_ + 4) = lVar4;
      *(undefined4 *)&__return_storage_ptr__->_padding_ = uVar1;
      *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4) = (int)lVar7;
      *(undefined4 *)&__return_storage_ptr__->_padding_ = 1;
    }
  }
LAB_1461d7c6c:
  local_b0 = local_b0 & 0xfe;
  this_00 = &__return_storage_ptr__->RootToSequenceWarpCounter;
  uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
  local_b8 = 0;
  local_c0 = this_00;
  if (uVar2 == 0x80000000) {
    if ((int)this->_padding_ == 0) {
      this = (FMovieSceneContext *)((longlong)&this->_padding_ + 4);
    }
    if (((char)this->_padding_ == '\x02') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar13 = (FMovieSceneContext *)(*pcVar5)();
      return pFVar13;
    }
    pFVar14 = *(FMovieSceneTimeTransform **)((longlong)&this->_padding_ + 4);
  }
  else {
    uStackX_1c = 0;
    pFVar14 = (FMovieSceneTimeTransform *)(ulonglong)uVar2;
    local_res18 = uVar2;
  }
  ::operator*((FFrameTime)&local_c8,pFVar14);
  if ((this_00 != (FMovieSceneWarpCounter *)0x0) &&
     ((char)(__return_storage_ptr__->RootToSequenceWarpCounter)._padding_ == '\x01')) {
    FMovieSceneTransformBreadcrumbs::AddBreadcrumb
              ((FMovieSceneTransformBreadcrumbs *)this_00,&local_c8);
  }
  iVar3 = (param_1->NestedTransforms).ArrayNum;
  if (iVar3 != 0) {
    this_01 = (FMovieSceneNestedSequenceTransform *)
              (param_1->NestedTransforms).AllocatorInstance.Data;
    pFVar15 = this_01 + iVar3;
    while( true ) {
      if ((param_1->NestedTransforms).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_01 == pFVar15) break;
      if ((this_00 != (FMovieSceneWarpCounter *)0x0) &&
         (((char)this_00->_padding_ == '\x01' ||
          (((*(ulonglong *)(this_01->TimeScale).Variant.Data & 0xfff8000000000000) ==
            0xfff8000000000000 &&
           (uVar9 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)this_01),
           uVar9 != 0xff)))))) {
        if (((FFrameTime *)this_00->_padding_ <= &local_c8) &&
           ((&local_c8 <
             (FFrameTime *)this_00->_padding_ + *(int *)((longlong)&this_00->_padding_ + 4) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FMovieSceneContext *)(*pcVar5)();
          return pFVar13;
        }
        iVar10 = (int)this_00->_padding_;
        piVar6 = (int *)((longlong)&this_00->_padding_ + 4);
        if (iVar10 == *piVar6) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)this_00,piVar6);
        }
        *(int *)&this_00->_padding_ = iVar10 + 1;
        *(FFrameTime *)(this_00->_padding_ + (longlong)iVar10 * 8) = local_c8;
      }
      local_c8 = FMovieSceneNestedSequenceTransform::TransformTime
                           (this_01,(FFrameTime)local_90,(FTransformTimeParams *)local_c8);
      this_01 = this_01 + 1;
      local_c8 = *(FFrameTime *)local_c8;
      this_00 = local_c0;
    }
  }
  return __return_storage_ptr__;
}


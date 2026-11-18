// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// FMovieSceneSequenceHierarchy @ 146093ef0

FMovieSceneSequenceHierarchy * __thiscall
FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy
          (FMovieSceneSequenceHierarchy *this,FMovieSceneSequenceHierarchy *param_1)

{
  longlong lVar1;
  FFrameNumber FVar2;
  uint local_res8;
  uint local_res10;
  
  (this->RootNode).ParentID.Value = (param_1->RootNode).ParentID.Value;
  (this->RootNode).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootNode).Children.AllocatorInstance.Data =
       (param_1->RootNode).Children.AllocatorInstance.Data;
  (param_1->RootNode).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootNode).Children.ArrayNum = (param_1->RootNode).Children.ArrayNum;
  (this->RootNode).Children.ArrayMax = (param_1->RootNode).Children.ArrayMax;
  (param_1->RootNode).Children.ArrayNum = 0;
  (param_1->RootNode).Children.ArrayMax = 0;
  lVar1 = (param_1->Tree).Data._padding_;
  local_res8 = CONCAT31(local_res8._1_3_,2);
  (this->Tree).Data._padding_ = (param_1->Tree).Data._padding_;
  (this->Tree).Data._padding_ = lVar1;
  lVar1 = (param_1->Tree).Data._padding_;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  (this->Tree).Data._padding_ = (param_1->Tree).Data._padding_;
  (this->Tree).Data._padding_ = lVar1;
  (this->Tree).Data._padding_ = 0;
  (this->Tree).Data._padding_ = (param_1->Tree).Data._padding_;
  (param_1->Tree).Data._padding_ = 0;
  *(int *)&(this->Tree).Data._padding_ = (int)(param_1->Tree).Data._padding_;
  *(undefined4 *)((longlong)&(this->Tree).Data._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Tree).Data._padding_ + 4);
  (param_1->Tree).Data._padding_ = 0;
  (this->Tree).Data._padding_ = 0;
  (this->Tree).Data._padding_ = (param_1->Tree).Data._padding_;
  (param_1->Tree).Data._padding_ = 0;
  *(int *)&(this->Tree).Data._padding_ = (int)(param_1->Tree).Data._padding_;
  *(undefined4 *)((longlong)&(this->Tree).Data._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->Tree).Data._padding_ + 4);
  (param_1->Tree).Data._padding_ = 0;
  (param_1->Tree).Data._padding_ = (ulonglong)local_res8;
  (param_1->Tree).Data._padding_ = (ulonglong)local_res10;
  (param_1->Tree).Data._padding_ = -1;
  (param_1->Tree).Data._padding_ = -1;
  (this->Tree).Data.Data.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tree).Data.Data.Entries.AllocatorInstance.Data =
       (param_1->Tree).Data.Data.Entries.AllocatorInstance.Data;
  (param_1->Tree).Data.Data.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tree).Data.Data.Entries.ArrayNum = (param_1->Tree).Data.Data.Entries.ArrayNum;
  (this->Tree).Data.Data.Entries.ArrayMax = (param_1->Tree).Data.Data.Entries.ArrayMax;
  (param_1->Tree).Data.Data.Entries.ArrayNum = 0;
  (param_1->Tree).Data.Data.Entries.ArrayMax = 0;
  (this->Tree).Data.Data.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tree).Data.Data.Items.AllocatorInstance.Data =
       (param_1->Tree).Data.Data.Items.AllocatorInstance.Data;
  (param_1->Tree).Data.Data.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tree).Data.Data.Items.ArrayNum = (param_1->Tree).Data.Data.Items.ArrayNum;
  (this->Tree).Data.Data.Items.ArrayMax = (param_1->Tree).Data.Data.Items.ArrayMax;
  (param_1->Tree).Data.Data.Items.ArrayNum = 0;
  (param_1->Tree).Data.Data.Items.ArrayMax = 0;
  FVar2.Value = (param_1->RootTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->RootTransform).LinearTransform.TimeScale =
       (param_1->RootTransform).LinearTransform.TimeScale;
  (this->RootTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar2.Value;
  (this->RootTransform).LinearTransform.Offset.SubFrame =
       (param_1->RootTransform).LinearTransform.Offset.SubFrame;
  (this->RootTransform).NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootTransform).NestedTransforms.AllocatorInstance.Data =
       (param_1->RootTransform).NestedTransforms.AllocatorInstance.Data;
  (param_1->RootTransform).NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootTransform).NestedTransforms.ArrayNum =
       (param_1->RootTransform).NestedTransforms.ArrayNum;
  (this->RootTransform).NestedTransforms.ArrayMax =
       (param_1->RootTransform).NestedTransforms.ArrayMax;
  (param_1->RootTransform).NestedTransforms.ArrayNum = 0;
  (param_1->RootTransform).NestedTransforms.ArrayMax = 0;
  *(undefined8 *)&(this->SubSequences).field_0x0 = 0;
  *(undefined8 *)&(this->SubSequences).field_0x8 = 0;
  *(undefined8 *)&(this->SubSequences).field_0x20 = 0;
  *(undefined4 *)&(this->SubSequences).field_0x28 = 0;
  *(undefined4 *)&(this->SubSequences).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubSequences).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubSequences).field_0x34 = 0;
  *(undefined8 *)&(this->SubSequences).field_0x40 = 0;
  *(undefined4 *)&(this->SubSequences).field_0x48 = 0;
  TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
              *)&this->SubSequences,
             (TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
              *)&param_1->SubSequences);
  *(undefined8 *)&(this->Hierarchy).field_0x0 = 0;
  *(undefined8 *)&(this->Hierarchy).field_0x8 = 0;
  *(undefined8 *)&(this->Hierarchy).field_0x20 = 0;
  *(undefined4 *)&(this->Hierarchy).field_0x28 = 0;
  *(undefined4 *)&(this->Hierarchy).field_0x2c = 0x80;
  *(undefined4 *)&(this->Hierarchy).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Hierarchy).field_0x34 = 0;
  *(undefined8 *)&(this->Hierarchy).field_0x40 = 0;
  *(undefined4 *)&(this->Hierarchy).field_0x48 = 0;
  TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
              *)&this->Hierarchy,
             (TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
              *)&param_1->Hierarchy);
  this->AccumulatedNetworkMask = param_1->AccumulatedNetworkMask;
  return this;
}

// FMovieSceneSequenceHierarchy @ 1460940f0

FMovieSceneSequenceHierarchy * __thiscall
FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy(FMovieSceneSequenceHierarchy *this)

{
  uint local_res8;
  uint local_res10;
  
  (this->RootNode).ParentID.Value = 0xffffffff;
  (this->RootNode).Children.ArrayNum = 0;
  (this->RootNode).Children.ArrayMax = 0;
  (this->RootNode).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8 = CONCAT31(local_res8._1_3_,2);
  (this->Tree).Data._padding_ = (ulonglong)local_res8;
  local_res10 = CONCAT31(local_res10._1_3_,2);
  (this->Tree).Data._padding_ = (ulonglong)local_res10;
  (this->Tree).Data._padding_ = -1;
  (this->Tree).Data._padding_ = -1;
  (this->Tree).Data._padding_ = 0;
  (this->Tree).Data._padding_ = 0;
  (this->Tree).Data.Data.Entries.ArrayNum = 0;
  (this->Tree).Data.Data.Entries.ArrayMax = 0;
  (this->Tree).Data.Data.Items.ArrayNum = 0;
  (this->Tree).Data.Data.Items.ArrayMax = 0;
  (this->Tree).Data._padding_ = 0;
  (this->Tree).Data._padding_ = 0;
  (this->Tree).Data.Data.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tree).Data.Data.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootTransform).NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootTransform).NestedTransforms.ArrayNum = 0;
  (this->RootTransform).NestedTransforms.ArrayMax = 0;
  *(undefined8 *)&this->SubSequences = 0;
  *(undefined8 *)&(this->SubSequences).field_0x8 = 0;
  *(undefined8 *)&(this->SubSequences).field_0x20 = 0;
  (this->RootTransform).LinearTransform.TimeScale = 1.0;
  (this->RootTransform).LinearTransform.Offset.FrameNumber = 0;
  (this->RootTransform).LinearTransform.Offset.SubFrame = 0.0;
  *(undefined4 *)&(this->SubSequences).field_0x28 = 0;
  *(undefined4 *)&(this->SubSequences).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubSequences).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubSequences).field_0x34 = 0;
  *(undefined8 *)&(this->SubSequences).field_0x40 = 0;
  *(undefined4 *)&(this->SubSequences).field_0x48 = 0;
  *(undefined8 *)&this->Hierarchy = 0;
  *(undefined8 *)&(this->Hierarchy).field_0x8 = 0;
  *(undefined8 *)&(this->Hierarchy).field_0x20 = 0;
  *(undefined4 *)&(this->Hierarchy).field_0x28 = 0;
  *(undefined4 *)&(this->Hierarchy).field_0x2c = 0x80;
  *(undefined4 *)&(this->Hierarchy).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Hierarchy).field_0x34 = 0;
  *(undefined8 *)&(this->Hierarchy).field_0x40 = 0;
  *(undefined4 *)&(this->Hierarchy).field_0x48 = 0;
  this->AccumulatedNetworkMask = All;
  return this;
}

// ~FMovieSceneSequenceHierarchy @ 146097e30

void __thiscall
FMovieSceneSequenceHierarchy::~FMovieSceneSequenceHierarchy(FMovieSceneSequenceHierarchy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Hierarchy).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Hierarchy).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Hierarchy);
  *(undefined4 *)&(this->SubSequences).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubSequences).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubSequences);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             (this->RootTransform).NestedTransforms.AllocatorInstance.Data,
             (this->RootTransform).NestedTransforms.ArrayNum);
  pFVar2 = (this->RootTransform).NestedTransforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMovieSceneSubSequenceTreeEntry,int>
            ((FMovieSceneSubSequenceTreeEntry *)(this->Tree).Data.Data.Items.AllocatorInstance.Data,
             (this->Tree).Data.Data.Items.ArrayNum);
  pFVar2 = (this->Tree).Data.Data.Items.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Tree).Data.Data.Entries.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = (void *)(this->Tree).Data._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Tree).Data._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->RootNode).Children.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14609a730

FMovieSceneSequenceHierarchy * __thiscall
FMovieSceneSequenceHierarchy::operator=
          (FMovieSceneSequenceHierarchy *this,FMovieSceneSequenceHierarchy *param_1)

{
  TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *pTVar4;
  TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *pTVar5;
  TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *pTVar6;
  TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *pTVar7;
  
  pTVar1 = &(param_1->RootNode).Children;
  pTVar2 = &(this->RootNode).Children;
  (this->RootNode).ParentID.Value = (param_1->RootNode).ParentID.Value;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RootNode).Children.ArrayNum = (param_1->RootNode).Children.ArrayNum;
    (this->RootNode).Children.ArrayMax = (param_1->RootNode).Children.ArrayMax;
    (param_1->RootNode).Children.ArrayNum = 0;
    (param_1->RootNode).Children.ArrayMax = 0;
  }
  FMovieSceneEvaluationTree::operator=
            ((FMovieSceneEvaluationTree *)&this->Tree,(FMovieSceneEvaluationTree *)&param_1->Tree);
  pTVar4 = &(param_1->Tree).Data.Data;
  pTVar6 = &(this->Tree).Data.Data;
  if (pTVar6 != pTVar4) {
    pFVar3 = (pTVar6->Entries).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar6->Entries).AllocatorInstance.Data = (pTVar4->Entries).AllocatorInstance.Data;
    (pTVar4->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Tree).Data.Data.Entries.ArrayNum = (param_1->Tree).Data.Data.Entries.ArrayNum;
    (this->Tree).Data.Data.Entries.ArrayMax = (param_1->Tree).Data.Data.Entries.ArrayMax;
    (param_1->Tree).Data.Data.Entries.ArrayNum = 0;
    (param_1->Tree).Data.Data.Entries.ArrayMax = 0;
  }
  pTVar5 = &(param_1->Tree).Data.Data.Items;
  pTVar7 = &(this->Tree).Data.Data.Items;
  if (pTVar7 != pTVar5) {
    DestructItems<FMovieSceneSubSequenceTreeEntry,int>
              ((FMovieSceneSubSequenceTreeEntry *)(pTVar7->AllocatorInstance).Data,
               (this->Tree).Data.Data.Items.ArrayNum);
    pFVar3 = (pTVar7->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar7->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Tree).Data.Data.Items.ArrayNum = (param_1->Tree).Data.Data.Items.ArrayNum;
    (this->Tree).Data.Data.Items.ArrayMax = (param_1->Tree).Data.Data.Items.ArrayMax;
    (param_1->Tree).Data.Data.Items.ArrayNum = 0;
    (param_1->Tree).Data.Data.Items.ArrayMax = 0;
  }
  FMovieSceneSequenceTransform::operator=(&this->RootTransform,&param_1->RootTransform);
  if (&this->SubSequences != &param_1->SubSequences) {
    TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
                *)&this->SubSequences,
               (TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
                *)&param_1->SubSequences);
  }
  if (&this->Hierarchy != &param_1->Hierarchy) {
    TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
                *)&this->Hierarchy,
               (TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
                *)&param_1->Hierarchy);
  }
  this->AccumulatedNetworkMask = param_1->AccumulatedNetworkMask;
  return this;
}

// operator= @ 14609a880

FMovieSceneSequenceHierarchy * __thiscall
FMovieSceneSequenceHierarchy::operator=
          (FMovieSceneSequenceHierarchy *this,FMovieSceneSequenceHierarchy *param_1)

{
  TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *pTVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FMovieSceneSubSequenceTreeEntry *pFVar8;
  TEvaluationTreeEntryContainer<FMovieSceneSubSequenceTreeEntry> *pTVar9;
  TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FMovieSceneSubSequenceTreeEntry,TSizedDefaultAllocator<32>_> *pTVar11;
  
  (this->RootNode).ParentID.Value = (param_1->RootNode).ParentID.Value;
  pTVar1 = &(param_1->RootNode).Children;
  pTVar2 = &(this->RootNode).Children;
  if (pTVar2 != pTVar1) {
    iVar5 = (param_1->RootNode).Children.ArrayNum;
    piVar3 = &(this->RootNode).Children.ArrayMax;
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    iVar6 = *piVar3;
    (this->RootNode).Children.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,iVar6,&pTVar2->AllocatorInstance,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar5 << 2);
      }
    }
  }
  FMovieSceneEvaluationTree::operator=
            ((FMovieSceneEvaluationTree *)&this->Tree,(FMovieSceneEvaluationTree *)&param_1->Tree);
  pTVar4 = &(param_1->Tree).Data.Data;
  pTVar9 = &(this->Tree).Data.Data;
  if (pTVar9 != pTVar4) {
    iVar5 = (param_1->Tree).Data.Data.Entries.ArrayNum;
    piVar3 = &(this->Tree).Data.Data.Entries.ArrayMax;
    pFVar7 = (pTVar4->Entries).AllocatorInstance.Data;
    iVar6 = *piVar3;
    (this->Tree).Data.Data.Entries.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar5,iVar6,(ForAnyElementType *)pTVar9,iVar5,piVar3);
      if (iVar5 != 0) {
        memcpy((pTVar9->Entries).AllocatorInstance.Data,pFVar7,(longlong)iVar5 * 0xc);
      }
    }
  }
  pTVar11 = &(param_1->Tree).Data.Data.Items;
  pTVar10 = &(this->Tree).Data.Data.Items;
  if (pTVar10 != pTVar11) {
    DestructItems<FMovieSceneSubSequenceTreeEntry,int>
              ((FMovieSceneSubSequenceTreeEntry *)(pTVar10->AllocatorInstance).Data,
               (this->Tree).Data.Data.Items.ArrayNum);
    iVar5 = (param_1->Tree).Data.Data.Items.ArrayNum;
    piVar3 = &(this->Tree).Data.Data.Items.ArrayMax;
    pFVar8 = (FMovieSceneSubSequenceTreeEntry *)(pTVar11->AllocatorInstance).Data;
    iVar6 = *piVar3;
    (this->Tree).Data.Data.Items.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar5,iVar6,&pTVar10->AllocatorInstance,iVar5,piVar3);
      ConstructItems<FMovieSceneSubSequenceTreeEntry,FMovieSceneSubSequenceTreeEntry,int>
                ((pTVar10->AllocatorInstance).Data,pFVar8,iVar5);
    }
  }
  FMovieSceneSequenceTransform::operator=(&this->RootTransform,&param_1->RootTransform);
  TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
               *)&this->SubSequences,
              (TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
               *)&param_1->SubSequences);
  if (&this->Hierarchy != &param_1->Hierarchy) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->Hierarchy).field_0x38,
               (int *)&(this->Hierarchy).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->Hierarchy).field_0x38,
               *(int *)&(param_1->Hierarchy).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->Hierarchy,
                (TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->Hierarchy);
  }
  this->AccumulatedNetworkMask = param_1->AccumulatedNetworkMask;
  return this;
}

// FindSubData @ 146131fc0

FMovieSceneSubSequenceData * __thiscall
FMovieSceneSequenceHierarchy::FindSubData
          (FMovieSceneSequenceHierarchy *this,FMovieSceneSequenceID *param_1)

{
  uint uVar1;
  uint uVar2;
  FMovieSceneSubSequenceData *pFVar3;
  undefined1 *puVar4;
  FMovieSceneSubSequenceData *pFVar5;
  FMovieSceneSubSequenceData *pFVar6;
  
  uVar1 = param_1->Value;
  pFVar6 = (FMovieSceneSubSequenceData *)0x0;
  if (uVar1 == 0) {
    return (FMovieSceneSubSequenceData *)0x0;
  }
  pFVar5 = pFVar6;
  if (*(int *)&(this->SubSequences).field_0x8 != *(int *)&(this->SubSequences).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SubSequences).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SubSequences).field_0x38;
    }
    uVar2 = *(uint *)(puVar4 + (ulonglong)(*(int *)&(this->SubSequences).field_0x48 - 1U & uVar1) *
                               4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar5 = (FMovieSceneSubSequenceData *)
                 ((longlong)(int)uVar2 * 0x120 + *(longlong *)&this->SubSequences);
        if ((pFVar5->Sequence).AssetPath.PackageName.ComparisonIndex.Value == uVar1) break;
        uVar2 = pFVar5[1].Sequence.AssetPath.AssetName.ComparisonIndex.Value;
        pFVar5 = pFVar6;
      } while (uVar2 != 0xffffffff);
    }
  }
  pFVar3 = (FMovieSceneSubSequenceData *)&(pFVar5->Sequence).AssetPath.AssetName;
  if (pFVar5 == (FMovieSceneSubSequenceData *)0x0) {
    pFVar3 = pFVar6;
  }
  return pFVar3;
}

// StaticStruct @ 146162c60

UScriptStruct * __cdecl FMovieSceneSequenceHierarchy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy,(UObject *)pUVar1,
                         L"MovieSceneSequenceHierarchy");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceHierarchy.OuterSingleton;
}

// Add @ 14618c4d0

void __thiscall
FMovieSceneSequenceHierarchy::Add
          (FMovieSceneSequenceHierarchy *this,FMovieSceneSubSequenceData *param_1,
          FMovieSceneSequenceID *param_2,FMovieSceneSequenceID *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovieSceneSequenceHierarchyNode *pFVar6;
  FMovieSceneSequenceHierarchyNode *pFVar7;
  FScriptContainerElement *pFVar8;
  TPairInitializer<FMovieSceneSequenceID_const_&,FMovieSceneSubSequenceData_const_&> local_res8;
  FMovieSceneSequenceID *local_58;
  FMovieSceneSubSequenceData *local_50;
  FMovieSceneSequenceID *local_48;
  uint *local_40;
  uint local_38 [2];
  void *local_30;
  undefined8 local_28;
  
  if ((param_3->Value == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentID != MovieSceneSequenceID::Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceHierarchy.cpp"
                         ,0x8e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_58 = param_2;
  local_50 = param_1;
  TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMovieSceneSequenceID_const_&,FMovieSceneSubSequenceData_const_&>_>
            ((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
              *)&this->SubSequences,&local_res8,(bool *)&local_58);
  pFVar6 = FindNode(this,param_2);
  if (pFVar6 == (FMovieSceneSequenceHierarchyNode *)0x0) {
    local_30 = (void *)0x0;
    local_28 = 0;
    local_40 = local_38;
    local_48 = param_2;
    local_38[0] = param_3->Value;
    TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FMovieSceneSequenceID_const_&,FMovieSceneSequenceHierarchyNode_const_&>_>
              ((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
                *)&this->Hierarchy,
               (TPairInitializer<FMovieSceneSequenceID_const_&,FMovieSceneSequenceHierarchyNode_const_&>
                *)&local_res8.Value,(bool *)&local_48);
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
  }
  else {
    if ((pFVar6->ParentID).Value == param_3->Value) {
      return;
    }
    pFVar7 = FindNode(this,&pFVar6->ParentID);
    if ((pFVar7 == (FMovieSceneSequenceHierarchyNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceHierarchy.cpp"
                           ,0xa1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_>::Remove(&pFVar7->Children,param_2);
    (pFVar6->ParentID).Value = param_3->Value;
  }
  pFVar6 = FindNode(this,param_3);
  if ((pFVar6 == (FMovieSceneSequenceHierarchyNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceHierarchy.cpp"
                         ,0xab,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (pFVar6->Children).AllocatorInstance.Data;
  pFVar2 = pFVar8 + (longlong)(pFVar6->Children).ArrayNum * 4;
  if (pFVar8 != pFVar2) {
    do {
      if (*(uint *)pFVar8 == param_2->Value) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5050299404523667628>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceHierarchy.cpp"
                           ,0xac,"!Parent->Children.Contains(ThisSequenceID)");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      pFVar8 = pFVar8 + 4;
    } while (pFVar8 != pFVar2);
  }
  pFVar2 = (pFVar6->Children).AllocatorInstance.Data;
  if (((pFVar2 <= param_2) && (param_2 < pFVar2 + (longlong)(pFVar6->Children).ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (pFVar6->Children).ArrayNum;
  piVar1 = &(pFVar6->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar6->Children).AllocatorInstance,piVar1);
  }
  (pFVar6->Children).ArrayNum = iVar5 + 1;
  *(uint *)((pFVar6->Children).AllocatorInstance.Data + (longlong)iVar5 * 4) = param_2->Value;
  return;
}

// AddRange @ 14618ef60

void __thiscall
FMovieSceneSequenceHierarchy::AddRange
          (FMovieSceneSequenceHierarchy *this,TRange<FFrameNumber> *param_1,
          FMovieSceneSequenceID *param_2,ESectionEvaluationFlags param_3)

{
  TRange<FFrameNumber> local_58;
  IMovieSceneEvaluationTreeNodeOperator local_48;
  FMovieSceneSubSequenceTree *local_40;
  uint local_38;
  ESectionEvaluationFlags local_34;
  void *local_30;
  undefined8 local_28;
  undefined1 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_58.LowerBound = param_1->LowerBound;
  local_58.UpperBound = param_1->UpperBound;
  local_40 = &this->Tree;
  local_48 = (IMovieSceneEvaluationTreeNodeOperator)
             &
             ___7FAddUniqueOperator___TMovieSceneEvaluationTree_UFMovieSceneSubSequenceTreeEntry____6B_
  ;
  local_38 = param_2->Value;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  local_34 = param_3;
  FMovieSceneEvaluationTree::AddTimeRange
            ((FMovieSceneEvaluationTree *)local_40,&local_58,&local_48,
             (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// AddRange @ 14618eff0

void __thiscall
FMovieSceneSequenceHierarchy::AddRange
          (FMovieSceneSequenceHierarchy *this,TRange<FFrameNumber> *param_1,
          FMovieSceneSequenceID *param_2,ESectionEvaluationFlags param_3,
          FMovieSceneWarpCounter *param_4)

{
  FScriptContainerElement *pFVar1;
  TRange<FFrameNumber> local_58;
  IMovieSceneEvaluationTreeNodeOperator local_48;
  FMovieSceneSubSequenceTree *local_40;
  uint local_38;
  ESectionEvaluationFlags local_34;
  void *local_30;
  undefined8 local_28;
  undefined1 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_58.LowerBound = param_1->LowerBound;
  local_58.UpperBound = param_1->UpperBound;
  local_40 = &this->Tree;
  local_48 = (IMovieSceneEvaluationTreeNodeOperator)
             &
             ___7FAddUniqueOperator___TMovieSceneEvaluationTree_UFMovieSceneSubSequenceTreeEntry____6B_
  ;
  local_38 = param_2->Value;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  local_34 = param_3;
  FMovieSceneEvaluationTree::AddTimeRange
            ((FMovieSceneEvaluationTree *)local_40,&local_58,&local_48,
             (FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  pFVar1 = (param_4->WarpCounts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)param_4->_padding_ != (void *)0x0) {
    FMemory::Free((void *)param_4->_padding_);
  }
  return;
}

// FindNode @ 1461a8fa0

FMovieSceneSequenceHierarchyNode * __thiscall
FMovieSceneSequenceHierarchy::FindNode
          (FMovieSceneSequenceHierarchy *this,FMovieSceneSequenceID *param_1)

{
  uint uVar1;
  int iVar2;
  FMovieSceneSequenceHierarchyNode *pFVar3;
  FMovieSceneSequenceHierarchyNode *pFVar4;
  undefined1 *puVar5;
  FMovieSceneSequenceHierarchyNode *pFVar6;
  
  uVar1 = param_1->Value;
  if (uVar1 == 0) {
    return &this->RootNode;
  }
  pFVar6 = (FMovieSceneSequenceHierarchyNode *)0x0;
  pFVar3 = pFVar6;
  if (*(int *)&(this->Hierarchy).field_0x8 != *(int *)&(this->Hierarchy).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Hierarchy).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Hierarchy).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->Hierarchy).field_0x48 - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      do {
        pFVar3 = (FMovieSceneSequenceHierarchyNode *)
                 (*(longlong *)&this->Hierarchy + (longlong)iVar2 * 0x28);
        if (*(uint *)(*(longlong *)&this->Hierarchy + (longlong)iVar2 * 0x28) == uVar1) break;
        iVar2 = *(int *)&pFVar3[1].Children.AllocatorInstance.Data;
        pFVar3 = pFVar6;
      } while (iVar2 != -1);
    }
  }
  pFVar4 = (FMovieSceneSequenceHierarchyNode *)&pFVar3->Children;
  if (pFVar3 == (FMovieSceneSequenceHierarchyNode *)0x0) {
    pFVar4 = pFVar6;
  }
  return pFVar4;
}

// LogHierarchy @ 1461bcdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall FMovieSceneSequenceHierarchy::LogHierarchy(FMovieSceneSequenceHierarchy *this)

{
  FScriptContainerElement *_Dst;
  longlong lVar1;
  TRangeBound<FFrameNumber> TVar2;
  void *_Src;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  TEnumAsByte<ERangeBoundTypes::Type> TVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  UMovieSceneSequence *pUVar16;
  undefined1 *puVar17;
  FMovieSceneSubSequenceData *pFVar18;
  ForAnyElementType FVar19;
  wchar_t *pwVar20;
  int *piVar21;
  longlong lVar22;
  uint uVar23;
  FMovieSceneSubSequenceData *this_00;
  FMovieSceneSubSequenceData *pFVar24;
  bool bVar25;
  FName local_res20;
  ForAnyElementType local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  FString local_148;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  uint local_120;
  undefined4 uStack_11c;
  int *piStack_118;
  int local_110;
  undefined4 uStack_10c;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  FMovieSceneSequenceHierarchy *pFStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  FString local_70;
  undefined8 local_60;
  longlong lStack_58;
  
  bVar9 = false;
  bVar7 = false;
  bVar5 = false;
  bVar12 = false;
  bVar10 = false;
  bVar8 = false;
  bVar6 = false;
  bVar25 = false;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_88 = 0;
  local_78 = 0;
  pFStack_80 = this;
  iVar13 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_168,(int *)((longlong)&local_160 + 4));
  local_160 = CONCAT44(local_160._4_4_,iVar13 + 1);
  *(ulonglong *)(local_168.Data + (longlong)iVar13 * 0x18) = CONCAT44(uStack_84,local_88);
  *(FMovieSceneSequenceHierarchy **)(local_168.Data + (longlong)iVar13 * 0x18 + 8) = pFStack_80;
  *(ulonglong *)(local_168.Data + (longlong)iVar13 * 0x18 + 0x10) = CONCAT44(uStack_74,local_78);
  iVar13 = iVar13 + 1;
  do {
    if (iVar13 < 1) {
      if (local_168.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data);
      }
      return;
    }
    pFVar24 = (FMovieSceneSubSequenceData *)0x0;
    iVar14 = iVar13 + -1;
    local_138 = *(undefined8 *)(local_168.Data + (longlong)iVar14 * 0x18);
    lStack_130 = *(longlong *)(local_168.Data + (longlong)iVar14 * 0x18 + 8);
    _Dst = local_168.Data + (longlong)iVar14 * 0x18;
    local_128 = *(undefined8 *)(_Dst + 0x10);
    iVar14 = (iVar13 - iVar14) + -1;
    local_60 = local_138;
    lStack_58 = lStack_130;
    if (iVar14 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar14 * 0x18);
      iVar13 = (int)local_160;
    }
    local_160 = CONCAT44(local_160._4_4_,iVar13 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&local_168,iVar13 + -1,(int *)((longlong)&local_160 + 4));
    if ((uint)local_138 == 0) {
      if (4 < (byte)LogMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
    }
    else {
      pFVar18 = pFVar24;
      if (*(int *)&(this->SubSequences).field_0x8 != *(int *)&(this->SubSequences).field_0x34) {
        puVar3 = *(undefined1 **)&(this->SubSequences).field_0x40;
        puVar17 = &(this->SubSequences).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar17 = puVar3;
        }
        uVar23 = *(uint *)(puVar17 +
                          (ulonglong)
                          (*(int *)&(this->SubSequences).field_0x48 - 1U & (uint)local_138) * 4);
        if (uVar23 != 0xffffffff) {
          do {
            pFVar18 = (FMovieSceneSubSequenceData *)
                      ((longlong)(int)uVar23 * 0x120 + *(longlong *)&this->SubSequences);
            if ((pFVar18->Sequence).AssetPath.PackageName.ComparisonIndex.Value == (uint)local_138)
            break;
            uVar23 = pFVar18[1].Sequence.AssetPath.AssetName.ComparisonIndex.Value;
            pFVar18 = pFVar24;
          } while (uVar23 != 0xffffffff);
        }
      }
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      this_00 = (FMovieSceneSubSequenceData *)&(pFVar18->Sequence).AssetPath.AssetName;
      if (pFVar18 == (FMovieSceneSubSequenceData *)0x0) {
        this_00 = pFVar24;
      }
      ::FString::AppendChars(&local_148,L" ",(int)local_128 * 2);
      if (4 < (byte)LogMovieScene._0_1_) {
        ::LexToString(&local_70,&this_00->RootToSequenceTransform);
        TVar2 = (this_00->ParentPlayRange).Value.LowerBound;
        TVar11 = (this_00->ParentPlayRange).Value.UpperBound.Type;
        if (TVar11.Value != '\x02') {
          bVar25 = bVar12;
          bVar6 = bVar5;
          if (TVar11.Value == '\x01') {
            bVar10 = true;
            ::FString::PrintfImpl(&local_c8,L"%i]");
            bVar8 = bVar7;
            bVar9 = bVar10;
          }
          else {
            bVar7 = true;
            ::FString::PrintfImpl(&local_d8,L"%i)");
            bVar8 = bVar7;
            bVar10 = bVar9;
          }
        }
        uVar23 = TVar2._0_4_ & 0xff;
        if (uVar23 != 2) {
          bVar25 = uVar23 != 1;
          if (bVar25) {
            ::FString::PrintfImpl(&local_f8,L"(%i");
          }
          else {
            ::FString::PrintfImpl(&local_e8,L"[%i");
          }
          bVar6 = (bool)(bVar5 | !bVar25);
          bVar12 = (bool)(bVar12 | bVar25);
          bVar25 = bVar12;
          bVar5 = bVar6;
          bVar8 = bVar7;
          bVar10 = bVar9;
        }
        ::FString::PrintfImpl(&local_108,L"%s,%s");
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar19.Data = local_108.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_98,(wchar_t *)FVar19.Data);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if ((bVar12) &&
           (bVar12 = false, bVar25 = bVar12, bVar6 = bVar5, bVar8 = bVar7, bVar10 = bVar9,
           local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if ((bVar5) &&
           (bVar5 = false, bVar25 = bVar12, bVar6 = bVar5, bVar8 = bVar7, bVar10 = bVar9,
           local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if ((bVar7) &&
           (bVar7 = false, bVar25 = bVar12, bVar6 = bVar5, bVar8 = bVar7, bVar10 = bVar9,
           local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if ((bVar9) &&
           (bVar9 = false, bVar25 = bVar12, bVar6 = bVar5, bVar8 = bVar7, bVar10 = bVar9,
           local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        pwVar20 = L"true";
        if (this_00->bCanLoop == false) {
          pwVar20 = L"false";
        }
        ::FString::FString(&local_a8,pwVar20);
        pUVar16 = FMovieSceneSubSequenceData::GetSequence(this_00);
        local_res20 = (FName)pUVar16->_padding_;
        ::FName::ToString(&local_res20,&local_b8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = *(int *)(lStack_58 + 0x10);
    lVar22 = (longlong)local_150;
    _Src = *(void **)(lStack_58 + 8);
    if (local_150 == 0) {
      local_14c = 0;
      iVar13 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_150,0,&local_158,local_150,&local_14c);
      memcpy(local_158.Data,_Src,lVar22 << 2);
      iVar13 = local_150;
    }
    uVar23 = iVar13 - 1;
    if (-1 < (int)uVar23) {
      lVar22 = (longlong)(int)uVar23 * 4;
      do {
        uVar15 = 0;
        if ((int)uVar23 < iVar13) {
          uVar15 = ~uVar23 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = *(uint *)(local_158.Data + lVar22);
        if (*(int *)&(this->Hierarchy).field_0x8 != *(int *)&(this->Hierarchy).field_0x34) {
          puVar3 = *(undefined1 **)&(this->Hierarchy).field_0x40;
          puVar17 = &(this->Hierarchy).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar17 = puVar3;
          }
          iVar13 = *(int *)(puVar17 +
                           (ulonglong)(*(int *)&(this->Hierarchy).field_0x48 - 1U & uVar15) * 4);
          if (iVar13 != -1) {
            do {
              lVar1 = *(longlong *)&this->Hierarchy + (longlong)iVar13 * 0x28;
              if (*(uint *)(*(longlong *)&this->Hierarchy + (longlong)iVar13 * 0x28) == uVar15) {
                piVar21 = (int *)(lVar1 + 8);
                if (lVar1 == 0) {
                  piVar21 = (int *)0x0;
                }
                if ((piVar21 != (int *)0x0) && (*piVar21 == (uint)local_138)) {
                  local_110 = (int)local_128 + 1;
                  local_120 = uVar15;
                  piStack_118 = piVar21;
                  if ((local_168.Data <= (FScriptContainerElement *)&local_120) &&
                     (((FScriptContainerElement *)&local_120 <
                       local_168.Data + (longlong)local_160._4_4_ * 0x18 &&
                      (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar12)))) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar13 = (int)local_160;
                  if ((int)local_160 == local_160._4_4_) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&local_168,(int *)((longlong)&local_160 + 4));
                  }
                  local_160 = CONCAT44(local_160._4_4_,iVar13 + 1);
                  *(ulonglong *)(local_168.Data + (longlong)iVar13 * 0x18) =
                       CONCAT44(uStack_11c,local_120);
                  *(int **)(local_168.Data + (longlong)iVar13 * 0x18 + 8) = piStack_118;
                  *(ulonglong *)(local_168.Data + (longlong)iVar13 * 0x18 + 0x10) =
                       CONCAT44(uStack_10c,local_110);
                  goto LAB_1461bd3ef;
                }
                break;
              }
              iVar13 = *(int *)(lVar1 + 0x20);
            } while (iVar13 != -1);
          }
        }
        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5050299404523667726>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceHierarchy.cpp"
                            ,0x10e,"CurChild && CurChild->ParentID == CurSequenceID");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1461bd3ef:
        lVar22 = lVar22 + -4;
        uVar23 = uVar23 - 1;
        iVar13 = local_150;
        bVar12 = bVar25;
        bVar5 = bVar6;
        bVar7 = bVar8;
        bVar9 = bVar10;
      } while (-1 < (int)uVar23);
    }
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
    iVar13 = (int)local_160;
  } while( true );
}

// LogSubSequenceTree @ 1461bd570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FMovieSceneSequenceHierarchy::LogSubSequenceTree(FMovieSceneSequenceHierarchy *this)

{
  code *pcVar1;
  ForElementType<TAlignedBytes<16,16>_> FVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int *piVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStackY_198 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  FDelegateAllocation local_160;
  int local_150;
  uint local_14c;
  longlong local_148;
  FDestructionSentinel local_138;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [32];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  int local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_b8._0_8_ = &this->Tree;
  local_78 = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_b8._8_8_ =
       (TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_b8._16_8_ = 0;
  local_a0._0_8_ = (FScriptContainerElement *)0x0;
  local_a0._8_8_ = 0;
  local_80 = (void *)0x0;
  local_60 = (ForElementType<FSetElementId>)0x0;
  local_58 = 0;
  local_38 = 0;
  local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_160.DelegateSize = 0;
  local_50 = 8;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_168,(FWriteAccessScope *)&local_d8);
  local_c0 = &local_160;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_160);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFMovieSceneSubSequenceTreeEntry__AEAV__TStringBuilderWithBuffer__W_0BAA____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(FMovieSceneSubSequenceTreeEntry_const_&,TStringBuilderWithBuffer<wchar_t,256>_&),FDefaultDelegateUserPolicy,`FMovieSceneSequenceHierarchy::LogSubSequenceTree'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_168,(FWriteAccessScope *)&local_138);
  iVar14 = local_160.DelegateSize;
  FVar2 = local_160.DelegateAllocator;
  local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_160.DelegateSize = 0;
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_120);
  if (local_38 != 0) {
    if (FStack_40.Data == (FScriptContainerElement *)0x0) goto LAB_1461bd6d6;
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = 0;
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
LAB_1461bd6d6:
  FStack_40.Data = (FScriptContainerElement *)FVar2;
  local_38 = iVar14;
  if (local_120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_168,(FWriteAccessScope *)&local_108);
  if ((local_160.DelegateSize != 0) &&
     (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_160,0,0,0x10);
    local_160.DelegateSize = 0;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_160.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
  if ((longlong)local_b8._16_8_ < 0) {
    DestructItems<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>
                *)local_b8._8_8_,local_b8._16_4_);
    iVar14 = SUB84(local_b8._16_8_,4);
    local_b8._16_8_ = local_b8._16_8_ & 0xffffffff00000000;
    if (iVar14 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)(local_b8 + 8),0,(int *)(local_b8 + 0x14));
    }
  }
  else {
    DestructItems<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>
                *)local_b8._8_8_,local_b8._16_4_);
    local_b8._16_8_ = local_b8._16_8_ & 0xffffffff00000000;
  }
  if (local_a0._8_4_ != uStack_70._4_4_) {
    TSet<TTuple<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>_>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>_>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,TTuple<int,TRange<FFrameNumber>_>,0>,FDefaultSetAllocator>
                      *)local_a0);
    uVar3 = local_a0._8_8_;
    local_a0._8_8_ = local_a0._8_8_ & 0xffffffff00000000;
    if ((longlong)uVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
    }
    uStack_70 = 0xffffffff;
    local_78 = local_78 & 0xffffffff00000000;
  }
  TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::BuildLogRows
            ((TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *)local_b8,-1,
             (FMovieSceneEvaluationTreeNode *)local_b8._0_8_,0);
  TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::AccumulateWidths
            ((TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *)local_b8);
  uVar9 = local_b8._16_8_ & 0xffffffff;
  local_14c = 1;
  if (1 < (int)local_b8._16_4_) {
    local_148 = 0x10;
    do {
      lVar10 = local_148;
      uVar16 = local_14c;
      uVar12 = 0;
      uVar11 = 0;
      if ((int)local_14c < (int)uVar9) {
        uVar11 = ~local_14c >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar9 = local_b8._16_8_ & 0xffffffff;
      }
      pFVar15 = (FScriptContainerElement *)(local_b8._8_8_ + lVar10);
      uVar7 = uVar12;
      if ((int)(uVar16 - 1) < (int)uVar9) {
        uVar7 = (ulonglong)(-uVar16 >> 0x1f);
      }
      if ((int)uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar9 = local_b8._16_8_ & 0xffffffff;
      }
      iVar14 = *(int *)(pFVar15 + 8);
      pFVar8 = (FScriptContainerElement *)(local_b8._8_8_ + lVar10 + -0x10);
      local_150 = -1;
      uVar7 = uVar12;
      uVar18 = uVar12;
      if (0 < iVar14) {
        do {
          iVar17 = (int)uVar7;
          uVar11 = (uint)uVar12;
          uVar16 = 0;
          if ((int)uVar11 < iVar14) {
            uVar16 = ~uVar11 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          piVar13 = (int *)(*(longlong *)pFVar15 + uVar18);
          iVar14 = *piVar13;
          if ((iVar14 < 0) || (*(int *)(pFVar8 + 8) <= iVar14)) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<1662972261398741126>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTreeFormatter.h"
                               ,0x86,"ParentLogRow.IsValidIndex(RowItem.ParentRowItemIndex)");
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          else {
            if ((iVar14 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*piVar13 != local_150) {
              iVar17 = local_50 / 2 + *(int *)((longlong)iVar14 * 0x20 + 0x18 + *(longlong *)pFVar8)
              ;
              local_150 = *piVar13;
            }
            piVar13[6] = iVar17;
            uVar7 = (ulonglong)(uint)(iVar17 + piVar13[4]);
          }
          iVar14 = *(int *)(pFVar15 + 8);
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar18 = uVar18 + 0x20;
        } while ((int)(uVar11 + 1) < iVar14);
        uVar9 = local_b8._16_8_ & 0xffffffff;
        lVar10 = local_148;
        uVar16 = local_14c;
      }
      local_14c = uVar16 + 1;
      local_148 = lVar10 + 0x10;
    } while ((int)local_14c < (int)uVar9);
  }
  TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::OutputLogRows
            ((TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *)local_b8);
  TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::OutputData
            ((TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry> *)local_b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_f0);
  if ((local_38 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_40.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_40.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  local_58 = 0;
  if (local_60 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60);
  }
  bVar4 = local_a0._12_4_ != 0;
  local_a0._8_8_ = (ulonglong)(uint)local_a0._12_4_ << 0x20;
  if (bVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,0,(ForAnyElementType *)local_a0,0,(int *)(local_a0 + 0xc));
  }
  uVar16 = local_78._4_4_;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  uStack_70 = 0xffffffff;
  if (0x80 < uVar16) {
    local_78 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a0 + 0x10),0);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if ((FScriptContainerElement *)local_a0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._0_8_);
  }
  DestructItems<TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>
              *)local_b8._8_8_,local_b8._16_4_);
  if ((TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>
       *)local_b8._8_8_ !=
      (TArray<TMovieSceneEvaluationTreeFormatter<FMovieSceneSubSequenceTreeEntry>::FLogRowItem,TSizedDefaultAllocator<32>_>
       *)0x0) {
    FMemory::Free((void *)local_b8._8_8_);
  }
  return;
}

// Remove @ 1461c8e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneSequenceHierarchy::Remove
          (FMovieSceneSequenceHierarchy *this,TArrayView<FMovieSceneSequenceID_const_,int> *param_1)

{
  FMovieSceneSequenceID *_Src;
  undefined1 *puVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FMovieSceneSequenceID FVar9;
  ForElementType<FMovieSceneSequenceID> FVar10;
  FMovieSceneSequenceHierarchy *pFVar11;
  ulonglong uVar12;
  TArray<FMovieSceneSequenceID,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStackY_128 [32];
  FMovieSceneSequenceID local_d8;
  uint local_d4;
  uint local_d0;
  FMovieSceneSequenceHierarchy *local_c8;
  FMovieSceneSequenceHierarchy *local_c0;
  longlong local_b8;
  longlong local_b0;
  FMovieSceneSequenceHierarchy *local_a8;
  ForElementType<FMovieSceneSequenceID> local_98;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar7 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  local_98.SecondaryData = (ForElementType<FMovieSceneSequenceID>)0x0;
  local_50 = 0;
  local_4c = 0x10;
  local_a8 = this;
  if (((_Src == (FMovieSceneSequenceID *)0x0) && (iVar7 != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneSequenceID>_>
                    (4,4,iVar7,&local_98,(int *)&local_50,&local_4c);
  FVar10 = (ForElementType<FMovieSceneSequenceID>)&local_98;
  if (local_98.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
    FVar10 = local_98.SecondaryData;
  }
  if (iVar7 != 0) {
    memcpy((void *)((longlong)FVar10 + (longlong)iVar6 * 4),_Src,(longlong)iVar7 << 2);
  }
  do {
    uVar15 = local_50;
    local_50 = uVar15;
    if (uVar15 == 0) {
      if (local_98.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
        FMemory::Free((void *)local_98.SecondaryData);
      }
      return;
    }
    local_d4 = 0;
    local_d0 = uVar15;
    if (0 < (int)uVar15) {
      local_b0 = 0;
      local_b8 = 0;
      do {
        lVar18 = local_b0;
        lVar21 = local_b8;
        uVar14 = local_d4;
        uVar19 = 0;
        if ((int)local_d4 < (int)local_50) {
          uVar19 = ~local_d4 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar10 = (ForElementType<FMovieSceneSequenceID>)&local_98;
        if (local_98.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
          FVar10 = local_98.SecondaryData;
        }
        local_d8.Value = *(uint *)(lVar18 + (longlong)FVar10);
        if (*(int *)&(this->SubSequences).field_0x8 != *(int *)&(this->SubSequences).field_0x34) {
          TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
          ::RemoveImpl<FMovieSceneSequenceID>
                    ((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>,FDefaultSetAllocator>
                      *)&this->SubSequences,local_d8.Value,&local_d8);
        }
        local_c0 = this;
        if (local_d8.Value != 0) {
          if (*(int *)&(this->Hierarchy).field_0x8 != *(int *)&(this->Hierarchy).field_0x34) {
            puVar1 = *(undefined1 **)&(this->Hierarchy).field_0x40;
            puVar17 = &(this->Hierarchy).field_0x38;
            if (puVar1 != (undefined1 *)0x0) {
              puVar17 = puVar1;
            }
            iVar7 = *(int *)(puVar17 +
                            (ulonglong)(*(int *)&(this->Hierarchy).field_0x48 - 1U & local_d8.Value)
                            * 4);
            if (iVar7 != -1) {
              lVar2 = *(longlong *)&this->Hierarchy;
              do {
                lVar8 = lVar2 + (longlong)iVar7 * 0x28;
                if (*(uint *)(lVar2 + (longlong)iVar7 * 0x28) == local_d8.Value) goto LAB_1461c906e;
                iVar7 = *(int *)(lVar8 + 0x20);
              } while (iVar7 != -1);
            }
          }
          lVar8 = 0;
LAB_1461c906e:
          local_c0 = (FMovieSceneSequenceHierarchy *)(lVar8 + 8);
          if (lVar8 == 0) {
            local_c0 = (FMovieSceneSequenceHierarchy *)0x0;
          }
        }
        if (local_c0 != (FMovieSceneSequenceHierarchy *)0x0) {
          uVar19 = (local_c0->RootNode).ParentID.Value;
          pFVar11 = this;
          if (uVar19 != 0) {
            if (*(int *)&(this->Hierarchy).field_0x8 != *(int *)&(this->Hierarchy).field_0x34) {
              puVar1 = *(undefined1 **)&(this->Hierarchy).field_0x40;
              puVar17 = &(this->Hierarchy).field_0x38;
              if (puVar1 != (undefined1 *)0x0) {
                puVar17 = puVar1;
              }
              iVar7 = *(int *)(puVar17 +
                              (ulonglong)(*(int *)&(this->Hierarchy).field_0x48 - 1U & uVar19) * 4);
              if (iVar7 != -1) {
                lVar2 = *(longlong *)&this->Hierarchy;
                do {
                  lVar8 = lVar2 + (longlong)iVar7 * 0x28;
                  if (*(uint *)(lVar2 + (longlong)iVar7 * 0x28) == uVar19) goto LAB_1461c90f2;
                  iVar7 = *(int *)(lVar8 + 0x20);
                } while (iVar7 != -1);
              }
            }
            lVar8 = 0;
LAB_1461c90f2:
            pFVar11 = (FMovieSceneSequenceHierarchy *)(lVar8 + 8);
            if (lVar8 == 0) {
              pFVar11 = (FMovieSceneSequenceHierarchy *)0x0;
            }
          }
          local_c8 = pFVar11;
          if (pFVar11 != (FMovieSceneSequenceHierarchy *)0x0) {
            pFVar3 = (pFVar11->RootNode).Children.AllocatorInstance.Data;
            if (((pFVar3 <= (FScriptContainerElement *)&local_d8) &&
                ((FScriptContainerElement *)&local_d8 <
                 pFVar3 + (longlong)(pFVar11->RootNode).Children.ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar12 = 0;
            iVar7 = (pFVar11->RootNode).Children.ArrayNum;
            if (iVar7 != 0) {
              pFVar3 = (pFVar11->RootNode).Children.AllocatorInstance.Data;
              bVar5 = *(uint *)pFVar3 != local_d8.Value;
              uVar16 = uVar12;
              uVar20 = uVar12;
              FVar9.Value = local_d8.Value;
              do {
                uVar14 = (uint)uVar16;
                uVar15 = uVar14;
                do {
                  uVar12 = uVar12 + 1;
                  uVar15 = uVar15 + 1;
                  uVar16 = (ulonglong)uVar15;
                  if ((longlong)iVar7 <= (longlong)uVar12) break;
                } while (bVar5 == (*(uint *)(pFVar3 + uVar12 * 4) != FVar9.Value));
                if (bVar5 != false) {
                  uVar19 = (uint)uVar20;
                  if (uVar19 != uVar14) {
                    memmove(pFVar3 + (longlong)(int)uVar19 * 4,pFVar3 + (longlong)(int)uVar14 * 4,
                            (longlong)(int)(uVar15 - uVar14) << 2);
                    FVar9.Value = local_d8.Value;
                  }
                  uVar20 = (ulonglong)(uVar19 + (uVar15 - uVar14));
                }
                bVar5 = (bool)(bVar5 ^ 1);
              } while ((longlong)uVar12 < (longlong)iVar7);
              (local_c8->RootNode).Children.ArrayNum = (int)uVar20;
              this = local_a8;
              lVar18 = local_b0;
              lVar21 = local_b8;
              uVar15 = local_d0;
              uVar14 = local_d4;
            }
          }
          pFVar11 = local_c0;
          pTVar13 = &(local_c0->RootNode).Children;
          if ((&local_98 == (ForElementType<FMovieSceneSequenceID> *)pTVar13) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (pFVar11->RootNode).Children.ArrayNum;
          if (iVar7 != 0) {
            iVar6 = UE::Core::Private::
                    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneSequenceID>_>
                              (4,4,iVar7,&local_98,(int *)&local_50,&local_4c);
            FVar10 = (ForElementType<FMovieSceneSequenceID>)&local_98;
            if (local_98.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
              FVar10 = local_98.SecondaryData;
            }
            memcpy((void *)((longlong)FVar10 + (longlong)iVar6 * 4),
                   (pTVar13->AllocatorInstance).Data,(longlong)iVar7 << 2);
          }
          if (*(int *)&(this->Hierarchy).field_0x8 != *(int *)&(this->Hierarchy).field_0x34) {
            TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
            ::RemoveImpl<FMovieSceneSequenceID>
                      ((TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
                        *)&this->Hierarchy,local_d8.Value,&local_d8);
          }
        }
        local_d4 = uVar14 + 1;
        local_b8 = lVar21 + 1;
        local_b0 = lVar18 + 4;
      } while ((int)local_d4 < (int)uVar15);
    }
    uVar14 = 0;
    if ((int)uVar15 <= (int)local_50) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar15 != 0) {
      FVar10 = (ForElementType<FMovieSceneSequenceID>)&local_98;
      if (local_98.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
        FVar10 = local_98.SecondaryData;
      }
      if (local_50 - uVar15 != 0) {
        memmove((void *)FVar10,(void *)((longlong)FVar10 + (longlong)(int)uVar15 * 4),
                (longlong)(int)(local_50 - uVar15) << 2);
      }
      local_50 = local_50 - uVar15;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneSequenceID>_>
                (4,4,&local_98,local_50,&local_4c);
    }
  } while( true );
}


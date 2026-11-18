// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 16

// FSequenceUpdater_Hierarchical @ 14611a330

FSequenceUpdater_Hierarchical * __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::FSequenceUpdater_Hierarchical
          (FSequenceUpdater_Hierarchical *this,FMovieSceneCompiledDataID param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  uint local_res8;
  uint local_res18;
  
  this->_padding_ = (longlong)&___7FSequenceUpdater_Hierarchical_MovieScene_UE__6B_;
  (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
        )0x0;
  (this->SequenceInstances).Pairs.ArrayNum = 0;
  (this->SequenceInstances).Pairs.ArrayMax = 8;
  (this->CompiledDataID).Value = param_1.Value;
  (this->bDynamicWeighting).bIsSet = false;
  *(undefined8 *)&this->CachedPerTickConditionalEntities = 0;
  *(undefined8 *)&(this->CachedPerTickConditionalEntities).field_0x8 = 0;
  *(undefined8 *)&(this->CachedPerTickConditionalEntities).field_0x20 = 0;
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).field_0x28 = 0;
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).field_0x34 = 0;
  *(undefined8 *)&(this->CachedPerTickConditionalEntities).field_0x40 = 0;
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).field_0x48 = 0;
  *(undefined8 *)&this->CachedConditionResults = 0;
  *(undefined8 *)&(this->CachedConditionResults).field_0x8 = 0;
  *(undefined8 *)&(this->CachedConditionResults).field_0x20 = 0;
  *(undefined4 *)&(this->CachedConditionResults).field_0x28 = 0;
  *(undefined4 *)&(this->CachedConditionResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedConditionResults).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedConditionResults).field_0x34 = 0;
  *(undefined8 *)&(this->CachedConditionResults).field_0x40 = 0;
  *(undefined4 *)&(this->CachedConditionResults).field_0x48 = 0;
  local_res8 = local_res8 & 0xffffff00;
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res8;
  (this->CachedEntityRange).LowerBound = TVar1;
  local_res18 = local_res18 & 0xffffff00;
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res18;
  (this->CachedEntityRange).UpperBound = TVar2;
  (this->RootOverrideSequenceID).Value = 0;
  return this;
}

// ~FSequenceUpdater_Hierarchical @ 14611e3f0

void __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::~FSequenceUpdater_Hierarchical
          (FSequenceUpdater_Hierarchical *this)

{
  void *pvVar1;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar2;
  
  this->_padding_ = (longlong)&___7FSequenceUpdater_Hierarchical_MovieScene_UE__6B_;
  *(undefined4 *)&(this->CachedConditionResults).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedConditionResults).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedConditionResults);
  *(undefined4 *)&(this->CachedPerTickConditionalEntities).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedPerTickConditionalEntities).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedPerTickConditionalEntities);
  FVar2 = (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7ISequenceUpdater_MovieScene_UE__6B_;
  return;
}

// CanFinishImmediately @ 146125b00

bool __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::CanFinishImmediately
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UObject *pUVar8;
  longlong lVar9;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar10;
  undefined1 local_res10 [8];
  
  pUVar8 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  uVar2 = *(ushort *)&param_1->Object->RootInstanceHandle;
  if ((*(longlong *)&pUVar8[0x23].field_0x8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceRegistry.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                         ,0x96,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lVar4 = *(longlong *)&pUVar8[0x23].field_0x8;
  lVar9 = (ulonglong)uVar2 * 0x140 + *(longlong *)(lVar4 + 8);
  if (*(int *)(lVar9 + 0x18) == *(int *)(lVar9 + 0x44)) {
    FVar10 = (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData;
    iVar3 = (this->SequenceInstances).Pairs.ArrayNum;
    if (FVar10 == (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                   )0x0) {
      FVar10 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )&this->SequenceInstances;
    }
    FVar1 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
             )((longlong)FVar10 + (longlong)iVar3 * 0x18);
    while( true ) {
      if ((this->SequenceInstances).Pairs.ArrayNum != iVar3) {
        `TCheckedPointerIterator<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar10 == FVar1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return true;
      }
      lVar9 = (*(ulonglong *)((longlong)FVar10 + 0x10) >> 0x20 & 0xffff) * 0x140 +
              *(longlong *)(lVar4 + 8);
      if (*(int *)(lVar9 + 0x18) != *(int *)(lVar9 + 0x44)) break;
      FVar10 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )((longlong)FVar10 + 0x18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
  }
  return false;
}

// Destroy @ 14612b1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::Destroy
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar1;
  int iVar2;
  FInstanceRegistry *this_00;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar6;
  undefined1 local_res8 [8];
  
  pUVar5 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  if (*(longlong *)&pUVar5[0x23].field_0x8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FInstanceRegistry **)&pUVar5[0x23].field_0x8;
  FVar6 = (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData;
  iVar2 = (this->SequenceInstances).Pairs.ArrayNum;
  if (FVar6 == (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    FVar6 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
             )&this->SequenceInstances;
  }
  FVar1 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
           )((longlong)FVar6 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->SequenceInstances).Pairs.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar1) break;
    FInstanceRegistry::DestroyInstance
              (this_00,SUB84((ulonglong)*(undefined8 *)((longlong)FVar6 + 0x10) >> 0x20,0));
    FVar6 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
             )((longlong)FVar6 + 0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// DissectContext @ 14612d2b0

/* WARNING: Removing unreachable block (ram,0x00014612d863) */
/* WARNING: Removing unreachable block (ram,0x00014612d888) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::DissectContext
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneContext *param_2,
          TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 uVar1;
  UMovieSceneCompiledDataManager *this_00;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  FMovieSceneEvaluationTreeNodeHandle FVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  code *pcVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameTime FVar9;
  FFrameTime FVar10;
  FFrameTime FVar11;
  bool bVar12;
  ForAnyElementType FVar13;
  undefined4 uVar14;
  FFrameNumber FVar15;
  float fVar16;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *this_01;
  undefined4 uVar17;
  bool bVar18;
  TEnumAsByte<ERangeBoundTypes::Type> TVar19;
  TOptional<UE::MovieScene::ETimeWarpChannelDomain> TVar20;
  FMovieSceneCompiledDataID FVar21;
  int iVar22;
  FFrameNumber FVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  FFrameTime FVar27;
  FMovieSceneSubSequenceData *pFVar28;
  undefined4 extraout_var_01;
  FMovieSceneContext *pFVar29;
  undefined6 extraout_var;
  FMovieSceneCompiledDataEntry *pFVar30;
  TArrayView<FMovieSceneDeterminismFence_const_,int> *pTVar31;
  FFrameNumber *pFVar32;
  TRange<FFrameTime> *pTVar33;
  FFrameTime *pFVar34;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *pTVar35;
  uint *puVar36;
  UMovieSceneSequence *pUVar37;
  undefined4 extraout_var_02;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar38;
  undefined6 extraout_var_00;
  TEnumAsByte<ERangeBoundTypes::Type> TVar39;
  uint uVar40;
  TRangeBound<FFrameTime> *pTVar41;
  undefined1 *puVar42;
  FMovieSceneDeterminismFenceWithSubframe *pFVar43;
  FEvaluationTreeEntryHandle FVar44;
  FMovieSceneSequenceTransform *this_02;
  FMovieSceneDeterminismFence *pFVar45;
  FFrameTime *pFVar46;
  longlong lVar47;
  FMovieSceneDeterminismFenceWithSubframe *pFVar48;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *pTVar49;
  uint uVar50;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *pTVar51;
  ulonglong uVar52;
  TLess<void> local_res10;
  float fStackX_14;
  ForAnyElementType local_578;
  undefined8 local_570;
  FFrameTime local_568;
  TRange<FFrameNumber> local_560;
  FFrameTime local_550;
  TRange<FFrameTime> local_548;
  TRange<FFrameTime> local_530;
  TRange<FFrameNumber> local_518;
  FMovieSceneDeterminismFenceWithSubframe local_508;
  TRange<FFrameTime> local_4f8;
  TRange<FFrameTime> local_4e0;
  undefined1 local_4c4;
  FFrameNumber local_4c0;
  undefined1 local_4bc;
  FFrameNumber local_4b8 [2];
  FFrameTime local_4b0;
  undefined4 uStack_4a4;
  int local_4a0;
  undefined4 uStack_49c;
  int local_498;
  undefined4 uStack_494;
  int local_490;
  undefined4 uStack_48c;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  int local_468;
  float fStack_464;
  uchar local_460;
  undefined1 uStack_45f;
  undefined1 uStack_45e;
  undefined1 uStack_45d;
  undefined4 uStack_45c;
  uchar uStack_458;
  undefined1 uStack_457;
  undefined1 uStack_456;
  undefined1 uStack_455;
  undefined1 uStack_454;
  undefined1 uStack_453;
  undefined1 uStack_452;
  undefined1 uStack_451;
  uint local_450;
  int iStack_44c;
  undefined4 uStack_448;
  uint local_444;
  undefined4 uStack_43c;
  uint local_438;
  undefined4 uStack_430;
  uint local_42c;
  int iStack_428;
  undefined4 uStack_424;
  uint local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  uint local_414;
  undefined4 uStack_410;
  float fStack_40c;
  uint local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  uint local_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  longlong local_3f0;
  uint local_3e8;
  longlong local_3e4;
  longlong lStack_3dc;
  FFrameTime local_3d4;
  FMovieSceneTransformBreadcrumbs local_3c8;
  undefined1 local_3b0 [16];
  char local_3a0;
  FMovieSceneEvaluationTreeNodeHandle local_398;
  TArrayView<FMovieSceneDeterminismFence_const_,int> local_390;
  FMovieSceneSequenceHierarchy *local_380;
  undefined1 local_378 [16];
  FMovieSceneEvaluationTreeRangeIterator local_368;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *local_348;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *pTStack_340;
  longlong local_338;
  TArrayView<FMovieSceneDeterminismFence_const_,int> local_330;
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  FMovieSceneDeterminismFenceWithSubframe *local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_2d8;
  FTransformTimeParams local_2c0;
  FMovieSceneContext local_2a8;
  undefined1 local_228 [16];
  TArrayView<FMovieSceneDeterminismFence_const_,int> local_218;
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_208;
  undefined8 uStack_200;
  TArrayView<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe_const_,int> local_1f8;
  TRange<FFrameTime> local_1e8;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_1d0;
  TRange<FFrameTime> local_1b8;
  FMovieSceneInverseSequenceTransform local_1a0;
  TArrayView<FMovieSceneDeterminismFence_const_,int> local_180;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_170;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_160;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_150;
  FMovieSceneContext local_140;
  FMovieSceneContext local_c0;
  
  this_00 = (param_1->Object->CompiledDataManager).field0_0x0.DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending) && (this_00 != (UMovieSceneCompiledDataManager *)0x0))
  {
    GC::MarkAsReachable((UObject *)this_00);
  }
  FVar21.Value = (this->CompiledDataID).Value;
  FMovieSceneContext::FMovieSceneContext(&local_2a8,param_2);
  FVar27 = (FFrameTime)
           UMovieSceneCompiledDataManager::FindHierarchy
                     (this_00,(FMovieSceneCompiledDataID)(this->CompiledDataID).Value);
  local_4b0 = FVar27;
  if (FVar27 == (FFrameTime)0x0) goto LAB_14612e6ec;
  if ((this->RootOverrideSequenceID).Value == 0) {
    TVar20 = FMovieSceneSequenceTransform::FindFirstWarpDomain
                       ((FMovieSceneSequenceTransform *)((longlong)FVar27 + 0x78));
    if ((((char *)CONCAT62(extraout_var,TVar20))[1] == '\x01') &&
       (*(char *)CONCAT62(extraout_var,TVar20) == '\0')) {
      pFVar29 = FMovieSceneContext::Transform
                          (param_2,&local_c0,
                           (FMovieSceneSequenceTransform *)((longlong)FVar27 + 0x78),
                           (FFrameRate)param_2->_padding_);
      FMovieSceneContext::operator=(&local_2a8,pFVar29);
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_c0.RootToSequenceWarpCounter);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_c0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                 local_c0.RootToSequenceTransform.NestedTransforms.ArrayNum);
      local_140.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
           local_c0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
      goto LAB_14612d424;
    }
  }
  else {
    pFVar28 = FMovieSceneSequenceHierarchy::FindSubData
                        ((FMovieSceneSequenceHierarchy *)FVar27,&this->RootOverrideSequenceID);
    if (pFVar28 != (FMovieSceneSubSequenceData *)0x0) {
      FMovieSceneSubSequenceData::GetSequence(pFVar28);
      FVar21 = UMovieSceneCompiledDataManager::GetDataID(this_00,(UMovieSceneSequence *)local_3b0);
      FVar21.Value = *(int *)CONCAT44(extraout_var_01,FVar21.Value);
      pFVar29 = FMovieSceneContext::Transform
                          (param_2,&local_140,&pFVar28->RootToSequenceTransform,
                           pFVar28->TickResolution);
      FMovieSceneContext::operator=(&local_2a8,pFVar29);
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_140.RootToSequenceWarpCounter);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_140.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                 local_140.RootToSequenceTransform.NestedTransforms.ArrayNum);
LAB_14612d424:
      if ((FMovieSceneNestedSequenceTransform *)
          local_140.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_140.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
    }
  }
  FMovieSceneEvaluationRange::TimeRangeToNumberRange(&local_560,(TRange<FFrameTime> *)&local_2a8);
  local_578.Data = (FScriptContainerElement *)0x0;
  local_570 = 0;
  pFVar30 = UMovieSceneCompiledDataManager::GetEntryRef(this_00,FVar21);
  local_1e8.LowerBound.Type.Value = (undefined1)local_2a8._padding_;
  local_1e8.LowerBound._1_3_ = local_2a8._padding_._1_3_;
  local_1e8.LowerBound.Value.FrameNumber.Value = local_2a8._padding_._4_4_;
  local_1e8.LowerBound.Value.SubFrame = (float)(undefined4)local_2a8._padding_;
  local_1e8.UpperBound.Type.Value = local_2a8._padding_._4_1_;
  local_1e8.UpperBound._1_3_ = local_2a8._padding_._5_3_;
  local_1e8.UpperBound.Value.FrameNumber.Value = (undefined4)local_2a8._padding_;
  local_1e8.UpperBound.Value.SubFrame = (float)local_2a8._padding_._4_4_;
  pTVar31 = TArrayView<FMovieSceneDeterminismFence_const_,int>::
            TArrayView<FMovieSceneDeterminismFence_const_,int><TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_const_&,TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>_>
                      (&local_180,&pFVar30->DeterminismFences);
  local_218.DataPtr = pTVar31->DataPtr;
  local_218.ArrayNum = pTVar31->ArrayNum;
  local_218._12_4_ = *(undefined4 *)&pTVar31->field_0xc;
  GetFencesWithinRange(&local_330,&local_218,&local_1e8);
  for (pFVar45 = local_330.DataPtr; pFVar45 != local_330.DataPtr + local_330.ArrayNum;
      pFVar45 = pFVar45 + 1) {
    local_508.FrameTime.FrameNumber.Value = (pFVar45->FrameNumber).Value;
    local_508.FrameTime.SubFrame = 0.0;
    local_508._9_3_ = SUB43((uint)local_508._8_4_ >> 8,0);
    local_508._8_4_ = CONCAT31(local_508._9_3_,pFVar45->field_0x4) & 0xffffff01;
    if (((local_578.Data <= &local_508) &&
        (local_570._4_4_ = (int)((ulonglong)local_570 >> 0x20), lVar47 = (longlong)local_570._4_4_,
        &local_508 <
        (FMovieSceneDeterminismFenceWithSubframe *)((longlong)local_578.Data + lVar47 * 0xc))) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar22 = (uint)local_570;
    if ((uint)local_570 == local_570._4_4_) {
      iVar22 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_578,(int *)((longlong)&local_570 + 4));
    }
    local_570 = CONCAT44(local_570._4_4_,iVar22 + 1);
    *(ulonglong *)&local_578.Data[(longlong)iVar22 * 0xc].field_0x0 =
         CONCAT44(local_508.FrameTime.SubFrame,local_508.FrameTime.FrameNumber.Value);
    *(undefined4 *)(local_578.Data + (longlong)iVar22 * 0xc + 8) = local_508._8_4_;
  }
  local_380 = UMovieSceneCompiledDataManager::FindHierarchy(this_00,FVar21);
  if (local_380 != (FMovieSceneSequenceHierarchy *)0x0) {
    TVar8.Value.Value = local_560.LowerBound.Value.Value;
    TVar8.Type.Value = local_560.LowerBound.Type.Value;
    TVar8._1_3_ = local_560.LowerBound._1_3_;
    pTVar51 = &(local_380->Tree).Data;
    local_378._8_8_ = pTVar51;
    FMovieSceneEvaluationTree::IterateFromLowerBound
              ((FMovieSceneEvaluationTree *)pTVar51,&local_368,TVar8);
    while ((local_368.CurrentNodeHandle.ChildrenHandle.EntryIndex != -1 ||
           (FVar27 = local_4b0, local_368.CurrentNodeHandle.Index == 0))) {
      local_518.LowerBound._1_1_ = local_368.CurrentRange.LowerBound._1_1_;
      local_518.LowerBound.Type.Value = local_368.CurrentRange.LowerBound.Type.Value;
      local_518.LowerBound._2_1_ = local_368.CurrentRange.LowerBound._2_1_;
      local_518.LowerBound._3_1_ = local_368.CurrentRange.LowerBound._3_1_;
      local_518.LowerBound.Value.Value._0_1_ =
           (undefined1)local_368.CurrentRange.LowerBound.Value.Value;
      local_518.LowerBound.Value.Value._1_1_ = local_368.CurrentRange.LowerBound.Value.Value._1_1_;
      local_518.LowerBound.Value.Value._2_1_ = local_368.CurrentRange.LowerBound.Value.Value._2_1_;
      local_518.LowerBound.Value.Value._3_1_ = local_368.CurrentRange.LowerBound.Value.Value._3_1_;
      local_518.UpperBound._1_1_ = local_368.CurrentRange.UpperBound._1_1_;
      local_518.UpperBound.Type.Value = local_368.CurrentRange.UpperBound.Type.Value;
      local_518.UpperBound._2_1_ = local_368.CurrentRange.UpperBound._2_1_;
      local_518.UpperBound._3_1_ = local_368.CurrentRange.UpperBound._3_1_;
      local_518.UpperBound.Value.Value._0_1_ =
           (undefined1)local_368.CurrentRange.UpperBound.Value.Value;
      local_518.UpperBound.Value.Value._1_1_ = local_368.CurrentRange.UpperBound.Value.Value._1_1_;
      local_518.UpperBound.Value.Value._2_1_ = local_368.CurrentRange.UpperBound.Value.Value._2_1_;
      local_518.UpperBound.Value.Value._3_1_ = local_368.CurrentRange.UpperBound.Value.Value._3_1_;
      bVar18 = TRange<FFrameNumber>::IsEmpty(&local_518);
      FVar23.Value = local_560.UpperBound.Value.Value;
      FVar27 = local_4b0;
      if (bVar18) break;
      TVar19.Value = local_560.LowerBound.Type.Value;
      if ((TVar19.Value != '\x02') && (local_560.UpperBound.Type.Value != '\x02')) {
        if ((TVar19.Value == '\x02') &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar27 = local_4b0;
        if (FVar23.Value < local_560.LowerBound.Value.Value) break;
        pFVar32 = TRangeBound<FFrameNumber>::GetValue(&local_560.UpperBound);
        iVar22 = pFVar32->Value;
        pFVar32 = TRangeBound<FFrameNumber>::GetValue(&local_560.LowerBound);
        TVar19.Value = local_560.LowerBound.Type.Value;
        if ((pFVar32->Value == iVar22) &&
           ((FVar27 = local_4b0, TVar19.Value == '\0' || (local_560.UpperBound.Type.Value == '\0')))
           ) break;
      }
      if ((local_518.UpperBound.Type.Value == '\x02') || (TVar19.Value == '\x02')) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      if ((local_518.LowerBound.Type.Value == '\x02') || (local_560.UpperBound.Type.Value == '\x02')
         ) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      bVar6 = true;
      if (!bVar18) {
        if ((TVar19.Value == '\x02') &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar23.Value = local_560.LowerBound.Value.Value;
        if ((local_518.UpperBound.Type.Value == '\x02') &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar6 = FVar23.Value < local_518.UpperBound.Value.Value;
        pFVar32 = TRangeBound<FFrameNumber>::GetValue(&local_560.LowerBound);
        iVar22 = pFVar32->Value;
        pFVar32 = TRangeBound<FFrameNumber>::GetValue(&local_518.UpperBound);
        if ((local_518.UpperBound.Type.Value == '\x01') &&
           (local_560.LowerBound.Type.Value == '\x01')) {
          bVar18 = true;
        }
        else {
          bVar18 = false;
        }
        if (bVar18) {
          bVar6 = iVar22 <= pFVar32->Value;
        }
      }
      bVar18 = true;
      if (!bVar12) {
        if ((local_560.UpperBound.Type.Value == '\x02') &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar23.Value = local_560.UpperBound.Value.Value;
        if ((local_518.LowerBound.Type.Value == '\x02') &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar18 = local_518.LowerBound.Value.Value < FVar23.Value;
        pFVar32 = TRangeBound<FFrameNumber>::GetValue(&local_560.UpperBound);
        iVar22 = pFVar32->Value;
        pFVar32 = TRangeBound<FFrameNumber>::GetValue(&local_518.LowerBound);
        if ((local_518.LowerBound.Type.Value == '\x01') &&
           (local_560.UpperBound.Type.Value == '\x01')) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if (bVar12) {
          bVar18 = pFVar32->Value <= iVar22;
        }
      }
      FVar27 = local_4b0;
      if ((!bVar6) || (!bVar18)) break;
      local_4e0.LowerBound._0_4_ = SUB84(local_2a8._padding_,0);
      local_4e0.LowerBound.Value.FrameNumber.Value = (int)((ulonglong)local_2a8._padding_ >> 0x20);
      local_4e0.LowerBound.Value.SubFrame = (float)local_2a8._padding_;
      local_4e0.UpperBound._0_4_ = SUB84((ulonglong)local_2a8._padding_ >> 0x20,0);
      local_548.LowerBound.Type.Value = 2;
      local_548.LowerBound.Value.FrameNumber.Value = 0;
      local_548.LowerBound.Value.SubFrame = 0.0;
      local_4e0.UpperBound.Value.FrameNumber.Value = (undefined4)local_2a8._padding_;
      local_4e0.UpperBound.Value.SubFrame = (float)local_2a8._padding_._4_4_;
      local_548.UpperBound.Type.Value = 2;
      local_548.UpperBound.Value.FrameNumber.Value = 0;
      local_548.UpperBound.Value.SubFrame = 0.0;
      local_460 = local_368.CurrentRange.LowerBound.Type.Value;
      uStack_45f = local_368.CurrentRange.LowerBound._1_1_;
      uStack_45e = local_368.CurrentRange.LowerBound._2_1_;
      uStack_45d = local_368.CurrentRange.LowerBound._3_1_;
      uStack_45c = CONCAT13(local_368.CurrentRange.LowerBound.Value.Value._3_1_,
                            CONCAT12(local_368.CurrentRange.LowerBound.Value.Value._2_1_,
                                     CONCAT11(local_368.CurrentRange.LowerBound.Value.Value._1_1_,
                                              (undefined1)
                                              local_368.CurrentRange.LowerBound.Value.Value)));
      uStack_458 = local_368.CurrentRange.UpperBound.Type.Value;
      uStack_457 = local_368.CurrentRange.UpperBound._1_1_;
      uStack_456 = local_368.CurrentRange.UpperBound._2_1_;
      uStack_455 = local_368.CurrentRange.UpperBound._3_1_;
      uStack_454 = (undefined1)local_368.CurrentRange.UpperBound.Value.Value;
      uStack_453 = local_368.CurrentRange.UpperBound.Value.Value._1_1_;
      uStack_452 = local_368.CurrentRange.UpperBound.Value.Value._2_1_;
      uStack_451 = local_368.CurrentRange.UpperBound.Value.Value._3_1_;
      if (local_368.CurrentRange.LowerBound.Type.Value != '\x02') {
        if (local_368.CurrentRange.LowerBound.Type.Value == '\x01') {
          local_4e0.UpperBound.Value.FrameNumber.Value = (undefined4)local_2a8._padding_;
          local_4e0.UpperBound.Value.SubFrame = (float)local_2a8._padding_._4_4_;
          local_548.UpperBound.Value.SubFrame = 0.0;
          local_548.UpperBound.Value.FrameNumber.Value = 0;
          uStack_4a4 = 0;
          uStack_43c = 0;
          local_444 = CONCAT31(local_444._1_3_,1);
          local_548.LowerBound._0_4_ = local_444;
          local_548.LowerBound.Value.FrameNumber.Value = uStack_45c;
        }
        else {
          if ((local_368.CurrentRange.LowerBound.Type.Value == '\x02') &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_4a0 = uStack_45c;
          uStack_49c = 0;
          uStack_430 = 0;
          local_438 = local_438 & 0xffffff00;
          local_548.LowerBound._0_4_ = local_438;
          local_548.LowerBound.Value.FrameNumber.Value = uStack_45c;
        }
      }
      local_548.LowerBound.Value.SubFrame = 0.0;
      if (uStack_458 != '\x02') {
        local_548.UpperBound.Value.FrameNumber.Value =
             CONCAT13(uStack_451,CONCAT12(uStack_452,CONCAT11(uStack_453,uStack_454)));
        if (uStack_458 == '\x01') {
          uStack_494 = 0;
          uStack_424 = 0;
          local_42c = CONCAT31(local_42c._1_3_,1);
          local_498 = local_548.UpperBound.Value.FrameNumber.Value;
          iStack_428 = local_548.UpperBound.Value.FrameNumber.Value;
          local_548.UpperBound._0_4_ = local_42c;
        }
        else {
          uStack_48c = 0;
          uStack_448 = 0;
          local_450 = local_450 & 0xffffff00;
          local_490 = local_548.UpperBound.Value.FrameNumber.Value;
          iStack_44c = local_548.UpperBound.Value.FrameNumber.Value;
          local_548.UpperBound._0_4_ = local_450;
        }
        local_548.UpperBound.Value.SubFrame = 0.0;
      }
      bVar18 = TRange<FFrameTime>::IsEmpty(&local_548);
      if (bVar18) {
        local_420 = local_420 & 0xffffff00;
        uStack_41c = 0;
        uStack_418 = 0;
        uStack_410 = 0;
        fStack_40c = 0.0;
        local_530.LowerBound._0_4_ = local_420;
        local_530.LowerBound.Value.FrameNumber.Value = 0;
        local_414 = local_414 & 0xffffff00;
        uVar52 = (ulonglong)local_414;
        local_530.LowerBound.Value.SubFrame = 0.0;
        local_488 = 0;
        local_480 = 0;
        fVar24 = fStack_40c;
      }
      else {
        bVar18 = TRange<FFrameTime>::IsEmpty(&local_4e0);
        if (bVar18) {
          local_408 = local_408 & 0xffffff00;
          uStack_404 = 0;
          uStack_400 = 0;
          uStack_3f8 = 0;
          uStack_3f4 = 0;
          local_530.LowerBound._0_4_ = local_408;
          local_530.LowerBound.Value.FrameNumber.Value = 0;
          local_3fc = local_3fc & 0xffffff00;
          uVar52 = (ulonglong)local_3fc;
          local_530.LowerBound.Value.SubFrame = 0.0;
          fVar24 = 0.0;
          local_478 = 0;
          local_470 = 0;
        }
        else {
          if (local_548.UpperBound.Type.Value == '\x02') {
LAB_14612da30:
            pTVar41 = &local_4e0.UpperBound;
          }
          else {
            if (local_4e0.UpperBound.Type.Value != '\x02') {
              local_550.SubFrame = local_548.UpperBound.Value.SubFrame;
              local_550.FrameNumber.Value = local_548.UpperBound.Value.FrameNumber.Value;
              local_568 = local_4e0.UpperBound.Value;
              FVar23 = local_4e0.UpperBound.Value.FrameNumber.Value;
              if ((FVar23.Value <= local_548.UpperBound.Value.FrameNumber.Value) &&
                 ((local_568.SubFrame = local_4e0.UpperBound.Value.SubFrame,
                  fVar24 = local_568.SubFrame,
                  local_548.UpperBound.Value.FrameNumber.Value != FVar23.Value ||
                  (bVar18 = local_568.SubFrame <= local_548.UpperBound.Value.SubFrame, bVar18)))) {
                local_568 = local_4e0.UpperBound.Value;
                if ((FVar23.Value < local_548.UpperBound.Value.FrameNumber.Value) ||
                   ((FVar23.Value == local_548.UpperBound.Value.FrameNumber.Value &&
                    (fVar24 < local_548.UpperBound.Value.SubFrame)))) goto LAB_14612da30;
                pTVar41 = &local_548.UpperBound;
                if (local_548.UpperBound.Type.Value != '\0') {
                  pTVar41 = &local_4e0.UpperBound;
                }
                goto LAB_14612da93;
              }
            }
            pTVar41 = &local_548.UpperBound;
          }
LAB_14612da93:
          if (local_548.LowerBound.Type.Value == '\x02') {
LAB_14612da9e:
            pTVar33 = &local_4e0;
          }
          else {
            FVar27 = local_568;
            if (local_4e0.LowerBound.Type.Value != '\x02') {
              local_568.SubFrame = local_4e0.LowerBound.Value.SubFrame;
              local_568.FrameNumber.Value = local_4e0.LowerBound.Value.FrameNumber.Value;
              FVar27.SubFrame = local_548.LowerBound.Value.SubFrame;
              FVar27.FrameNumber.Value = local_548.LowerBound.Value.FrameNumber.Value;
              local_550 = local_568;
              if ((local_548.LowerBound.Value.FrameNumber.Value <=
                   local_4e0.LowerBound.Value.FrameNumber.Value) &&
                 ((local_548.LowerBound.Value.FrameNumber.Value !=
                   local_4e0.LowerBound.Value.FrameNumber.Value ||
                  (local_548.LowerBound.Value.SubFrame <= local_4e0.LowerBound.Value.SubFrame)))) {
                local_550 = FVar27;
                if ((local_548.LowerBound.Value.FrameNumber.Value <
                     local_4e0.LowerBound.Value.FrameNumber.Value) ||
                   ((local_4e0.LowerBound.Value.FrameNumber.Value ==
                     local_548.LowerBound.Value.FrameNumber.Value &&
                    (local_548.LowerBound.Value.SubFrame < local_4e0.LowerBound.Value.SubFrame))))
                goto LAB_14612da9e;
                pTVar33 = &local_548;
                if (local_548.LowerBound.Type.Value != '\0') {
                  pTVar33 = &local_4e0;
                }
                goto LAB_14612db01;
              }
            }
            local_568 = FVar27;
            pTVar33 = &local_548;
          }
LAB_14612db01:
          uVar1._0_1_ = (pTVar33->LowerBound).Type;
          uVar1._1_3_ = *(undefined3 *)&(pTVar33->LowerBound).field_0x1;
          uVar1._4_4_ = (pTVar33->LowerBound).Value.FrameNumber;
          local_530.LowerBound._0_4_ = SUB84(uVar1,0);
          local_530.LowerBound.Value.FrameNumber.Value = uVar1._4_4_;
          uVar52._0_1_ = pTVar41->Type;
          uVar52._1_3_ = *(undefined3 *)&pTVar41->field_0x1;
          uVar52._4_4_ = (pTVar41->Value).FrameNumber;
          local_530.LowerBound.Value.SubFrame = (pTVar33->LowerBound).Value.SubFrame;
          fVar24 = (pTVar41->Value).SubFrame;
        }
      }
      local_530.UpperBound._0_4_ = SUB84(uVar52,0);
      local_530.UpperBound.Value.FrameNumber.Value = (int)(uVar52 >> 0x20);
      FVar23.Value = local_530.UpperBound.Value.FrameNumber.Value;
      local_530.UpperBound.Value.SubFrame = fVar24;
      if ((local_530.LowerBound.Type.Value == '\x02') ||
         (local_530.UpperBound.Type.Value = (uchar)uVar52,
         bVar18 = local_530.UpperBound.Type.Value == '\x02', bVar18)) goto LAB_14612dbd3;
      FVar9.SubFrame = fVar24;
      FVar9.FrameNumber.Value = local_530.UpperBound.Value.FrameNumber.Value;
      if ((local_530.LowerBound.Type.Value == '\x02') &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_568.SubFrame = local_530.LowerBound.Value.SubFrame;
      local_568.FrameNumber.Value = local_530.LowerBound.Value.FrameNumber.Value;
      local_550 = FVar9;
      if ((local_530.LowerBound.Value.FrameNumber.Value <= FVar23.Value) &&
         ((local_530.LowerBound.Value.FrameNumber.Value != FVar23.Value ||
          (local_530.LowerBound.Value.SubFrame <= fVar24)))) {
        pFVar34 = TRangeBound<FFrameTime>::GetValue(&local_530.UpperBound);
        FVar27 = *pFVar34;
        local_550 = FVar27;
        pFVar34 = TRangeBound<FFrameTime>::GetValue(&local_530.LowerBound);
        local_568 = *pFVar34;
        if (local_568.FrameNumber.Value.Value != FVar27.FrameNumber.Value.Value) {
LAB_14612dbd3:
          FVar4.Index = local_368.CurrentNodeHandle.Index;
          FVar4.ChildrenHandle.EntryIndex = local_368.CurrentNodeHandle.ChildrenHandle.EntryIndex;
          TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
          TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
                    (&local_1d0,pTVar51,FVar4);
          local_338 = local_1d0._16_8_;
          local_348 = local_1d0.Tree;
          pTStack_340 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                        local_1d0.CurrentNode;
          TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
          TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
                    (&local_2d8,local_1d0.Tree,
                     (FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
          this_01 = local_348;
          pTVar49 = pTStack_340;
          uVar50 = (uint)local_338;
LAB_14612dc34:
          if (((this_01 != local_2d8.Tree) ||
              (pTVar49 !=
               (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)local_2d8.CurrentNode))
             || (pTVar51 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                           local_378._8_8_, uVar50 != local_2d8.DataIndex)) {
            pTVar35 = TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::
                      GetDataForSingleNode
                                (this_01,&local_170,(FMovieSceneEvaluationTreeNode *)pTVar49);
            uVar26 = 0;
            if ((int)uVar50 < pTVar35->ArrayNum) {
              uVar26 = ~uVar50 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar18)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar26 = pTVar35->DataPtr[(int)uVar50].SequenceID.Value;
            if ((uVar26 != 0) &&
               (*(int *)&(local_380->SubSequences).field_0x8 !=
                *(int *)&(local_380->SubSequences).field_0x34)) {
              puVar2 = *(undefined1 **)&(local_380->SubSequences).field_0x40;
              puVar42 = &(local_380->SubSequences).field_0x38;
              if (puVar2 != (undefined1 *)0x0) {
                puVar42 = puVar2;
              }
              uVar40 = *(uint *)(puVar42 +
                                (ulonglong)
                                (*(int *)&(local_380->SubSequences).field_0x48 - 1U & uVar26) * 4);
              if (uVar40 != 0xffffffff) {
                do {
                  puVar36 = (uint *)((longlong)(int)uVar40 * 0x120 +
                                    *(longlong *)&local_380->SubSequences);
                  if (*puVar36 == uVar26) {
                    pFVar28 = (FMovieSceneSubSequenceData *)(puVar36 + 2);
                    if (puVar36 == (uint *)0x0) {
                      pFVar28 = (FMovieSceneSubSequenceData *)0x0;
                    }
                    if (pFVar28 != (FMovieSceneSubSequenceData *)0x0) {
                      pUVar37 = FMovieSceneSubSequenceData::GetSequence(pFVar28);
                      if (pUVar37 == (UMovieSceneSequence *)0x0) goto LAB_14612dd57;
                      FVar21 = UMovieSceneCompiledDataManager::GetDataID
                                         (this_00,(UMovieSceneSequence *)local_378);
                      uVar26 = *(uint *)CONCAT44(extraout_var_02,FVar21.Value);
                      lVar47 = (longlong)(int)uVar26;
                      if (uVar26 == 0xffffffff) goto LAB_14612dd57;
                      if (((int)uVar26 < 0) ||
                         (*(int *)&(this_00->CompiledDataEntries).field_0x28 <= (int)uVar26)) {
LAB_14612df10:
                        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("CompiledDataEntries.IsValidIndex(DataID.Value)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Compilation\\MovieSceneCompiledDataManager.h"
                                            ,0xe1,L"");
                        if (bVar18) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                      }
                      else {
                        if ((*(int *)&(this_00->CompiledDataEntries).field_0x28 <= (int)uVar26) &&
                           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Index>=0 && Index<NumBits",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                ,0x5c6,L""), bVar18)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        puVar2 = *(undefined1 **)&(this_00->CompiledDataEntries).field_0x20;
                        puVar42 = &(this_00->CompiledDataEntries).field_0x10;
                        if (puVar2 != (undefined1 *)0x0) {
                          puVar42 = puVar2;
                        }
                        uVar40 = uVar26 & 0x1f;
                        if ((int)uVar26 < 0) {
                          uVar26 = uVar26 + 0x1f;
                        }
                        if ((*(uint *)(puVar42 + (longlong)((int)uVar26 >> 5) * 4) >> uVar40 & 1) ==
                            0) goto LAB_14612df10;
                      }
                      local_318 = *(TObjectPtr<UMovieSceneCompiledData>_u_0 *)
                                   (*(longlong *)&this_00->CompiledDataEntries + 0x10 +
                                   lVar47 * 0x30);
                      iVar22 = *(int *)(*(longlong *)&this_00->CompiledDataEntries + 0x18 +
                                       lVar47 * 0x30);
                      if ((iVar22 < 0) &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("InCount >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xeb,L""), bVar18)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      iStack_310 = iVar22;
                      if (iVar22 < 1) goto LAB_14612dd57;
                      this_02 = &pFVar28->RootToSequenceTransform;
                      FMovieSceneSequenceTransform::ComputeTraversedHull
                                (this_02,&local_4f8,&local_530);
                      fVar24 = local_4f8.UpperBound.Value.SubFrame;
                      FVar23.Value = local_4f8.UpperBound.Value.FrameNumber.Value;
                      uVar17 = local_4f8.LowerBound._0_4_;
                      if ((local_4f8.LowerBound.Type.Value != '\x02') &&
                         (local_4f8.UpperBound.Type.Value != '\x02')) {
                        FVar10.SubFrame = local_4f8.UpperBound.Value.SubFrame;
                        FVar10.FrameNumber.Value = local_4f8.UpperBound.Value.FrameNumber.Value;
                        if ((local_4f8.LowerBound.Type.Value == '\x02') &&
                           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Type != ERangeBoundTypes::Open",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                                ,99,L""), bVar18)) {
                          pcVar7 = (code *)swi(3);
                          (*pcVar7)();
                          return;
                        }
                        fVar16 = local_4f8.LowerBound.Value.SubFrame;
                        FVar15.Value = local_4f8.LowerBound.Value.FrameNumber.Value;
                        uVar14 = local_4f8.LowerBound._0_4_;
                        local_568.SubFrame = local_4f8.LowerBound.Value.SubFrame;
                        local_568.FrameNumber.Value = local_4f8.LowerBound.Value.FrameNumber.Value;
                        local_550 = FVar10;
                        if ((FVar23.Value < local_4f8.LowerBound.Value.FrameNumber.Value) ||
                           ((uVar17 = local_4f8.LowerBound._0_4_,
                            local_4f8.LowerBound.Value.FrameNumber.Value == FVar23.Value &&
                            (fVar24 < local_4f8.LowerBound.Value.SubFrame)))) {
                          local_4f8.LowerBound.Type.Value = local_4f8.UpperBound.Type.Value;
                          local_4f8.LowerBound._1_3_ = local_4f8.UpperBound._1_3_;
                          uVar17 = local_4f8.LowerBound._0_4_;
                          local_4f8.LowerBound.Value.FrameNumber.Value =
                               local_4f8.UpperBound.Value.FrameNumber.Value;
                          local_4f8.LowerBound.Type.Value = (uchar)uVar14;
                          local_4f8.LowerBound._1_3_ = SUB43(uVar14,1);
                          local_4f8.UpperBound.Type.Value = local_4f8.LowerBound.Type.Value;
                          local_4f8.UpperBound._1_3_ = local_4f8.LowerBound._1_3_;
                          local_4f8.UpperBound.Value.FrameNumber.Value = FVar15.Value;
                          local_4f8.LowerBound.Value.SubFrame = local_4f8.UpperBound.Value.SubFrame;
                          local_4f8.UpperBound.Value.SubFrame = fVar16;
                        }
                      }
                      local_4f8.LowerBound._0_4_ = uVar17;
                      uStack_200 = CONCAT44(uStack_30c,iStack_310);
                      local_208 = local_318;
                      GetFencesWithinRange
                                (&local_390,
                                 (TArrayView<FMovieSceneDeterminismFence_const_,int> *)
                                 &local_208.ObjectPtr,&local_4f8);
                      iVar22 = local_390.ArrayNum;
                      if (iVar22 < 1) goto LAB_14612dd57;
                      local_2c0.bIgnoreClamps = '\0';
                      local_3c8.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_3c8.Breadcrumbs.ArrayNum = 0;
                      local_3c8.Breadcrumbs.ArrayMax = 0;
                      local_3c8.Mode = Sparse;
                      local_2c0.Breadcrumbs = (FMovieSceneTransformBreadcrumbs *)0x0;
                      local_2c0.CycleCount = (TOptional<int> *)0x0;
                      FTransformTimeParams::HarvestBreadcrumbs(&local_2c0,&local_3c8);
                      if ((local_530.LowerBound.Type.Value == '\x02') &&
                         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Type != ERangeBoundTypes::Open",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                              ,99,L""), bVar18)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      FMovieSceneSequenceTransform::TransformTime
                                (this_02,(FFrameTime)local_228,
                                 (FTransformTimeParams *)
                                 CONCAT44(local_530.LowerBound.Value.SubFrame,
                                          local_530.LowerBound.Value.FrameNumber.Value));
                      FMovieSceneSequenceTransform::Inverse(this_02,&local_1a0);
                      pFVar34 = (FFrameTime *)(local_390.DataPtr + iVar22);
                      if ((FFrameTime *)local_390.DataPtr == pFVar34) goto LAB_14612e25a;
                      fStack_464 = 0.0;
                      pFVar46 = (FFrameTime *)local_390.DataPtr;
                      goto LAB_14612e110;
                    }
                    break;
                  }
                  uVar40 = puVar36[0x46];
                } while (uVar40 != 0xffffffff);
              }
            }
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("SubData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceUpdaters.cpp"
                                ,0x246,
                                L"Sub data does not exist for a SequenceID that exists in the hierarchical tree - this indicates a corrupt compilation product."
                               );
            if (bVar18) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            goto LAB_14612dd57;
          }
          goto LAB_14612e3bf;
        }
        if ((local_568.SubFrame != local_550.SubFrame) ||
           ((local_530.LowerBound.Type.Value != '\0' && (local_530.UpperBound.Type.Value != '\0'))))
        goto LAB_14612dbd3;
      }
LAB_14612e3bf:
      FMovieSceneEvaluationTreeRangeIterator::Iter(&local_368,true);
    }
  }
  if ((int)(uint)local_570 < 1) {
    TVar20 = FMovieSceneSequenceTransform::FindFirstWarpDomain
                       ((FMovieSceneSequenceTransform *)((longlong)FVar27 + 0x78));
    if ((((char *)CONCAT62(extraout_var_00,TVar20))[1] == '\x01') &&
       (*(char *)CONCAT62(extraout_var_00,TVar20) == '\0')) {
      pFVar3 = (param_3->AllocatorInstance).Data;
      local_3d4.FrameNumber.Value = (undefined4)local_2a8._padding_;
      local_3d4.SubFrame = (float)local_2a8._padding_._4_4_;
      local_3e4 = local_2a8._padding_;
      lStack_3dc = local_2a8._padding_;
      if ((pFVar3 <= (FScriptContainerElement *)&local_3e4) &&
         (((FScriptContainerElement *)&local_3e4 < pFVar3 + (longlong)param_3->ArrayMax * 0x18 &&
          (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar18)))) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar22 = param_3->ArrayNum;
      if (iVar22 == param_3->ArrayMax) {
        iVar22 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar22 + 1;
      pFVar5 = (param_3->AllocatorInstance).Data;
      pFVar3 = pFVar5 + (longlong)iVar22 * 0x18;
      *(longlong *)pFVar3 = local_3e4;
      *(longlong *)(pFVar3 + 8) = lStack_3dc;
      *(FFrameTime *)(pFVar5 + (longlong)iVar22 * 0x18 + 0x10) = local_3d4;
    }
  }
  else {
    local_res10 = SUB81(param_1,0);
    AlgoImpl::
    IntroSortInternal<UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe,int,UE::Core::Private::TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>,TLess<void>_>
              ((FMovieSceneDeterminismFenceWithSubframe *)local_578.Data,(uint)local_570,
               (TProjectionMemberData<FFrameTime_UE::MovieScene::FMovieSceneDeterminismFenceWithSubframe::*>
                )0x0,local_res10);
    uVar50 = (uint)local_570;
    if (1 < (int)(uint)local_570) {
      FVar13.Data = local_578.Data;
      for (pFVar48 = (FMovieSceneDeterminismFenceWithSubframe *)(local_578.Data + 0xc);
          pFVar48 !=
          (FMovieSceneDeterminismFenceWithSubframe *)
          (local_578.Data + (longlong)(int)(uint)local_570 * 0xc); pFVar48 = pFVar48 + 1) {
        local_4b0 = pFVar48->FrameTime;
        if ((((FMovieSceneDeterminismFenceWithSubframe *)FVar13.Data)->FrameTime).FrameNumber.Value
            == local_4b0.FrameNumber.Value.Value) {
          fStackX_14 = (((FMovieSceneDeterminismFenceWithSubframe *)FVar13.Data)->FrameTime).
                       SubFrame;
          pFVar43 = (FMovieSceneDeterminismFenceWithSubframe *)FVar13.Data;
          if (fStackX_14 != local_4b0.SubFrame) goto LAB_14612e454;
        }
        else {
LAB_14612e454:
          pFVar43 = (FMovieSceneDeterminismFenceWithSubframe *)((longlong)FVar13.Data + 0xc);
          if (pFVar43 != pFVar48) {
            pFVar43->FrameTime = pFVar48->FrameTime;
            *(undefined4 *)
             &((FMovieSceneDeterminismFenceWithSubframe *)((longlong)FVar13.Data + 0xc))->field_0x8
                 = *(undefined4 *)&pFVar48->field_0x8;
          }
        }
        FVar13.Data = (FScriptContainerElement *)pFVar43;
      }
      lVar47 = (longlong)FVar13.Data + (0xc - (longlong)local_578.Data);
      lVar47 = lVar47 / 6 + (lVar47 >> 0x3f);
      uVar50 = (int)(lVar47 >> 1) - (int)(lVar47 >> 0x3f);
    }
    uStack_2e0 = (uint)local_570;
    if ((int)uVar50 < (int)(uint)local_570) {
      if ((int)uVar50 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar50);
      }
      uVar26 = (uint)local_570 - uVar50;
      if ((int)(uVar50 | uVar26) < 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar18) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uStack_2e0 = (uint)local_570;
      if (uVar26 != 0) {
        iVar22 = ((uint)local_570 - uVar26) - uVar50;
        uVar40 = (uint)local_570;
        if (iVar22 != 0) {
          memmove(local_578.Data + (longlong)(int)uVar50 * 0xc,
                  local_578.Data + (longlong)(int)uVar50 * 0xc + (longlong)(int)uVar26 * 0xc,
                  (longlong)iVar22 * 0xc);
          uVar40 = (uint)local_570;
        }
        local_570 = CONCAT44(local_570._4_4_,uVar40 - uVar26);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&local_578,uVar40 - uVar26,(int *)((longlong)&local_570 + 4));
        uStack_2e0 = (uint)local_570;
      }
    }
    local_1b8.UpperBound.Value.FrameNumber.Value = (undefined4)local_2a8._padding_;
    local_1b8.UpperBound.Value.SubFrame = (float)local_2a8._padding_._4_4_;
    local_2e8 = (FMovieSceneDeterminismFenceWithSubframe *)local_578.Data;
    local_1b8.LowerBound.Type.Value = (undefined1)local_2a8._padding_;
    local_1b8.LowerBound._1_3_ = local_2a8._padding_._1_3_;
    local_1b8.LowerBound.Value.FrameNumber.Value = local_2a8._padding_._4_4_;
    local_1b8.LowerBound.Value.SubFrame = (float)(undefined4)local_2a8._padding_;
    local_1b8.UpperBound.Type.Value = local_2a8._padding_._4_1_;
    local_1b8.UpperBound._1_3_ = local_2a8._padding_._5_3_;
    if (((int)uStack_2e0 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_1f8._12_4_ = uStack_2dc;
    local_1f8.ArrayNum = uStack_2e0;
    local_1f8.DataPtr = local_2e8;
    DissectRange(&local_1f8,&local_1b8,param_3);
  }
  if ((FMovieSceneDeterminismFenceWithSubframe *)local_578.Data !=
      (FMovieSceneDeterminismFenceWithSubframe *)0x0) {
    FMemory::Free(local_578.Data);
  }
LAB_14612e6ec:
  FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_2a8.RootToSequenceWarpCounter);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_2a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_2a8.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_2a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_2a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
LAB_14612e110:
  do {
    local_568 = *pFVar46;
    local_468 = (int)local_568.FrameNumber.Value;
    FVar11.SubFrame = fStack_464;
    FVar11.FrameNumber.Value = local_468;
    FMovieSceneInverseSequenceTransform::TryTransformTime
              (&local_1a0,(TOptional<FFrameTime> *)(local_3b0 + 8),FVar11,&local_3c8);
    if (local_3a0 != '\0') {
      local_4c4 = 1;
      local_4c0.Value = (int)local_3b0._8_8_;
      TVar19.Value = local_560.LowerBound.Type.Value;
      if (TVar19.Value == '\x02') {
        pFVar32 = &local_560.LowerBound.Value;
        TVar39.Value = TVar19.Value;
LAB_14612e18d:
        bVar18 = TVar39.Value != TVar19.Value;
        TVar19.Value = TVar39.Value;
        if (bVar18) goto LAB_14612e24d;
      }
      else {
        if (local_4c0.Value <= local_560.LowerBound.Value.Value) {
          if ((local_4c0.Value < local_560.LowerBound.Value.Value) ||
             (pFVar32 = &local_560.LowerBound.Value, TVar19.Value != '\x01')) {
            pFVar32 = &local_4c0;
          }
          TVar39.Value = '\x01';
          goto LAB_14612e18d;
        }
        pFVar32 = &local_560.LowerBound.Value;
      }
      if ((TVar19.Value == '\x02') || (pFVar32->Value == local_560.LowerBound.Value.Value)) {
        local_4bc = 1;
        local_4b8[0].Value = local_4c0.Value;
        TVar19.Value = local_560.UpperBound.Type.Value;
        if (TVar19.Value == '\x02') {
          pFVar32 = &local_560.UpperBound.Value;
          TVar39.Value = TVar19.Value;
LAB_14612e1e5:
          bVar18 = TVar39.Value != TVar19.Value;
          TVar19.Value = TVar39.Value;
          if (bVar18) goto LAB_14612e24d;
        }
        else {
          if (local_560.UpperBound.Value.Value <= local_4c0.Value) {
            if ((local_560.UpperBound.Value.Value < local_4c0.Value) ||
               (pFVar32 = &local_560.UpperBound.Value, TVar19.Value != '\x01')) {
              pFVar32 = local_4b8;
            }
            TVar39.Value = '\x01';
            goto LAB_14612e1e5;
          }
          pFVar32 = &local_560.UpperBound.Value;
        }
        if ((TVar19.Value == '\x02') || (pFVar32->Value == local_560.UpperBound.Value.Value)) {
          local_3f0 = local_3b0._8_8_;
          local_3e8 = CONCAT31(local_3e8._1_3_,local_568.SubFrame._0_1_) & 0xffffff01;
          iVar22 = (uint)local_570;
          if ((uint)local_570 == local_570._4_4_) {
            iVar22 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&local_578,(int *)((longlong)&local_570 + 4));
          }
          local_570 = CONCAT44(local_570._4_4_,iVar22 + 1);
          *(longlong *)&local_578.Data[(longlong)iVar22 * 0xc].field_0x0 = local_3f0;
          *(uint *)(local_578.Data + (longlong)iVar22 * 0xc + 8) = local_3e8;
        }
      }
    }
LAB_14612e24d:
    pFVar46 = pFVar46 + 1;
  } while (pFVar46 != pFVar34);
LAB_14612e25a:
  if (local_1a0.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.NestedTransforms.AllocatorInstance.Data);
  }
  if (local_3c8.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Breadcrumbs.AllocatorInstance.Data);
  }
LAB_14612dd57:
  pTVar51 = pTVar49;
  uVar50 = uVar50 + 1;
  while (pTVar49 = pTVar51,
        pTVar49 != (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)0x0) {
    uVar26 = ((FEvaluationTreeEntryHandle *)&pTVar49->_padding_)[1].EntryIndex;
    uVar40 = 0;
    if (uVar26 == 0xffffffff) {
      local_2f8 = 0;
      uStack_2f0 = 0;
      iVar22 = 0;
    }
    else {
      uVar25 = uVar40;
      if ((int)uVar26 < (this_01->Data).Entries.ArrayNum) {
        uVar25 = ~uVar26 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = (this_01->Data).Entries.AllocatorInstance.Data;
      uVar25 = *(uint *)(pFVar3 + (longlong)(int)uVar26 * 0xc);
      iVar22 = *(int *)(pFVar3 + (longlong)(int)uVar26 * 0xc + 4);
      uVar26 = uVar40;
      if ((int)uVar25 < (this_01->Data).Items.ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_308 = (this_01->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar25 * 0x30;
      iStack_300 = iVar22;
      if ((iVar22 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), iVar22 = iStack_300, bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if ((-1 < (int)uVar50) && ((int)uVar50 < iVar22)) break;
    uVar50 = uVar40;
    if (((((FMovieSceneEvaluationTreeNodeHandle *)&pTVar49->_padding_)->ChildrenHandle).EntryIndex
         != -1) ||
       (pTVar51 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)0x0,
       ((FMovieSceneEvaluationTreeNodeHandle *)&pTVar49->_padding_)->Index == 0)) {
      FVar4 = *(FMovieSceneEvaluationTreeNodeHandle *)&pTVar49->_padding_;
      FVar44 = FVar4.ChildrenHandle.EntryIndex;
      local_398 = FVar4;
      if (FVar44.EntryIndex == -1) {
        bVar18 = FVar4.Index == 0;
      }
      else {
        pTVar38 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                            ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                             &this_01->_padding_,&local_150,FVar44);
        if (((longlong)FVar4 < 0) || (pTVar38->ArrayNum <= FVar4.Index)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
      }
      if ((!bVar18) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid(Handle)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                              ,0x18d,L""), bVar18)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar51 = this_01;
      if (FVar44.EntryIndex != -1) {
        pTVar38 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                            ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                             &this_01->_padding_,&local_160,FVar44);
        lVar47 = (longlong)local_398.Index;
        uVar26 = 0;
        if (local_398.Index < pTVar38->ArrayNum) {
          uVar26 = (uint)~local_398.Index >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar18)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar51 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                  (pTVar38->DataPtr + lVar47);
      }
    }
  }
  goto LAB_14612dc34;
}

// EvaluateCondition @ 14612fa90

bool __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::EvaluateCondition
          (FSequenceUpdater_Hierarchical *this,FGuid *param_1,FMovieSceneSequenceID *param_2,
          UMovieSceneCondition *param_3,UObject *param_4,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_5)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  bool *pbVar5;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  FGuid local_18;
  
  if (param_3 == (UMovieSceneCondition *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
    bVar3 = true;
  }
  else {
    pcVar1 = *(code **)(param_3->_padding_ + 0x2c8);
    local_28.Object = param_5->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_5->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    cVar2 = (*pcVar1)(param_3,&local_28);
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(param_3->_padding_ + 0x2c0);
      local_28.Object = param_5->Object;
      local_28.SharedReferenceCount.ReferenceController =
           (param_5->SharedReferenceCount).ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.A = param_1->A;
      local_18.B = param_1->B;
      local_18.C = param_1->C;
      local_18.D = param_1->D;
      uVar4 = (*pcVar1)(param_3,&local_18,param_2->Value,&local_28,param_4);
      pbVar5 = TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
               ::Find((TMapBase<unsigned_int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>_>
                       *)&this->CachedConditionResults,uVar4);
      if (pbVar5 != (bool *)0x0) {
        bVar3 = *pbVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_5->SharedReferenceCount).ReferenceController);
        return bVar3;
      }
    }
    local_28.Object = param_5->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_5->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.A = param_1->A;
    local_18.B = param_1->B;
    local_18.C = param_1->C;
    local_18.D = param_1->D;
    bVar3 = UMovieSceneCondition::EvaluateCondition
                      (param_3,&local_18,(FMovieSceneSequenceID)param_2->Value,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
  }
  return bVar3;
}

// FindSubInstance @ 1461320b0

FInstanceHandle __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::FindSubInstance
          (FSequenceUpdater_Hierarchical *this,FMovieSceneSequenceID param_1)

{
  FSubInstanceData *pFVar1;
  undefined4 in_register_00000014;
  FInstanceHandle *pFVar2;
  FMovieSceneSequenceID local_res18 [4];
  
  pFVar2 = (FInstanceHandle *)CONCAT44(in_register_00000014,param_1.Value);
  pFVar1 = TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
           ::Find(&this->SequenceInstances,local_res18);
  if (pFVar1 != (FSubInstanceData *)0x0) {
    *pFVar2 = pFVar1->Handle;
    return (FInstanceHandle)param_1.Value;
  }
  pFVar2->InstanceID = 0xffff;
  pFVar2->InstanceSerial = 0;
  return (FInstanceHandle)param_1.Value;
}

// Finish @ 1461328d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::Finish
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar7;
  undefined1 local_res8 [8];
  FSharedPlaybackState *local_58;
  TReferenceControllerBase<1> *local_50;
  ulonglong local_38;
  
  pUVar6 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  if (*(longlong *)&pUVar6[0x23].field_0x8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)&pUVar6[0x23].field_0x8;
  FVar7 = (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData;
  iVar2 = (this->SequenceInstances).Pairs.ArrayNum;
  if (FVar7 == (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                )0x0) {
    FVar7 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
             )&this->SequenceInstances;
  }
  FVar1 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
           )((longlong)FVar7 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->SequenceInstances).Pairs.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar7 == FVar1) break;
    local_38 = *(ulonglong *)((longlong)FVar7 + 0x10);
    FSequenceInstance::Finish
              ((FSequenceInstance *)((local_38 >> 0x20 & 0xffff) * 0x140 + *(longlong *)(lVar3 + 8))
              );
    FVar7 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
             )((longlong)FVar7 + 0x18);
  }
  pcVar4 = *(code **)(this->_padding_ + 0x38);
  local_58 = param_1->Object;
  local_50 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar4)(this,&local_58,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetOrCreateSequenceInstance @ 14613bc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FInstanceHandle __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::GetOrCreateSequenceInstance
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          UMovieSceneSequence *param_2,FMovieSceneSequenceHierarchy *param_3,
          FInstanceRegistry *param_4,FMovieSceneSequenceID param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FInstanceHandle FVar5;
  int iVar6;
  FSubInstanceData *pFVar7;
  FMovieSceneSubSequenceData *this_00;
  FMovieSceneSequenceHierarchy *pFVar8;
  TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>
  *pTVar9;
  ForElementType<FSetElementId> *pFVar10;
  longlong lVar11;
  longlong lVar12;
  FInstanceRegistry *pFVar13;
  FSequenceInstance *this_01;
  undefined4 local_res8 [2];
  undefined4 in_stack_00000034;
  FMovieSceneSequenceID in_stack_00000038;
  uint local_78;
  undefined1 local_74 [12];
  longlong local_68;
  longlong lStack_60;
  uint local_48;
  
  if (((FRootInstanceHandle)in_stack_00000038.Value == (FRootInstanceHandle)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SequenceID != MovieSceneSequenceID::Root",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceUpdaters.cpp"
                         ,0x286,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar5 = (FInstanceHandle)(*pcVar3)();
    return FVar5;
  }
  pFVar7 = TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
           ::Find(&this->SequenceInstances,&stack0x00000038);
  if (pFVar7 != (FSubInstanceData *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)param_2->_padding_;
    *(FInstanceHandle *)&param_1->Object = pFVar7->Handle;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return SUB84(param_1,0);
  }
  lVar12 = 0;
  pFVar13 = param_4;
  if ((FRootInstanceHandle)in_stack_00000038.Value != (FRootInstanceHandle)0x0) {
    lVar11 = lVar12;
    if (*(int *)&param_4[1].InvalidatedObjectBindings.Elements.field_0x10 !=
        param_4[1].InvalidatedObjectBindings.Hash._padding_) {
      pFVar10 = *(ForElementType<FSetElementId> **)&param_4[1].InvalidatedObjectBindings.HashSize;
      if (pFVar10 == (ForElementType<FSetElementId> *)0x0) {
        pFVar10 = &param_4[1].InvalidatedObjectBindings.Hash.SecondaryData;
      }
      iVar6 = *(int *)(&pFVar10->field_0x0 +
                      (ulonglong)(*(int *)&param_4[2].Linker - 1U & in_stack_00000038.Value) * 4);
      if (iVar6 != -1) {
        lVar2 = *(longlong *)&param_4[1].InvalidatedObjectBindings.Elements.field_0x8;
        do {
          lVar11 = lVar2 + (longlong)iVar6 * 0x28;
          if (*(FRootInstanceHandle *)(lVar2 + (longlong)iVar6 * 0x28) ==
              (FRootInstanceHandle)in_stack_00000038.Value) break;
          iVar6 = *(int *)(lVar11 + 0x20);
          lVar11 = lVar12;
        } while (iVar6 != -1);
      }
    }
    pFVar13 = (FInstanceRegistry *)(lVar11 + 8);
    if (lVar11 == 0) {
      pFVar13 = (FInstanceRegistry *)0x0;
    }
  }
  if ((pFVar13 == (FInstanceRegistry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceUpdaters.cpp"
                         ,0x28e,
                         L"Attempting to construct a new sub sequence instance with a sub sequence ID that does not exist in the hierarchy"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar5 = (FInstanceHandle)(*pcVar3)();
    return FVar5;
  }
  if ((*(uint *)&pFVar13->Linker == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node->ParentID != MovieSceneSequenceID::Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceUpdaters.cpp"
                         ,0x28f,L"Parent should never be invalid for a non-root SequenceID"), bVar4)
     ) {
    pcVar3 = (code *)swi(3);
    FVar5 = (FInstanceHandle)(*pcVar3)();
    return FVar5;
  }
  lVar12 = param_2->_padding_;
  local_res8[0] = 0xffff;
  if (*(uint *)&pFVar13->Linker != 0) {
    this_00 = FMovieSceneSequenceHierarchy::FindSubData
                        ((FMovieSceneSequenceHierarchy *)param_4,(FMovieSceneSequenceID *)pFVar13);
    pFVar8 = (FMovieSceneSequenceHierarchy *)FMovieSceneSubSequenceData::GetSequence(this_00);
    if (pFVar8 != (FMovieSceneSequenceHierarchy *)0x0) {
      local_68 = param_2->_padding_;
      lStack_60 = param_2->_padding_;
      if (lStack_60 != 0) {
        LOCK();
        *(int *)(lStack_60 + 8) = *(int *)(lStack_60 + 8) + 1;
        UNLOCK();
      }
      GetOrCreateSequenceInstance
                (this,(TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)local_74,
                 (UMovieSceneSequence *)&stack0xffffffffffffff98,pFVar8,param_4,param_5);
    }
  }
  FInstanceRegistry::AllocateSubInstance
            ((FInstanceRegistry *)CONCAT44(in_stack_00000034,param_5.Value),
             (FMovieSceneSequenceID)(uint)&local_78,(FRootInstanceHandle)in_stack_00000038.Value,
             *(FInstanceHandle *)(lVar12 + 0x30));
  local_48 = local_78;
  local_68 = *(longlong *)((longlong)&(param_3->Tree).Data._padding_ + 4);
  lStack_60 = *(longlong *)((longlong)&(param_3->Tree).Data._padding_ + 4);
  pTVar9 = TSortedMap<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
           ::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>
                     (&this->SequenceInstances,&stack0x00000038);
  *(uint *)pTVar9 = in_stack_00000038.Value;
  *(longlong *)&pTVar9->field_0x4 = local_68;
  *(longlong *)&pTVar9->field_0xc = lStack_60;
  *(uint *)&pTVar9->field_0x14 = local_78;
  this_01 = (FSequenceInstance *)
            ((ulonglong)(local_78 & 0xffff) * 0x140 +
            *(longlong *)
             &((FInstanceRegistry *)CONCAT44(in_stack_00000034,param_5.Value))->Instances);
  if (this_01->bInitialized) {
    `UE::MovieScene::FSequenceInstance::Initialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  this_01->bInitialized = true;
  FSequenceInstance::InvalidateCachedData(this_01,All);
  pTVar1 = (TReferenceControllerBase<1> *)param_2->_padding_;
  *(uint *)&param_1->Object = local_78;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return SUB84(param_1,0);
}

// InvalidateCachedData @ 146140880

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::InvalidateCachedData
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          ESequenceInstanceInvalidationType param_2)

{
  FMovieSceneSequenceID *pFVar1;
  int iVar2;
  FMovieSceneCompiledDataID FVar3;
  FSharedPlaybackState *pFVar4;
  UMovieSceneCompiledDataManager *this_00;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  UObject *pUVar8;
  UMovieSceneSequence *pUVar9;
  FMovieSceneSequenceHierarchy *this_01;
  FMovieSceneSubSequenceData *this_02;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar10;
  int *piVar11;
  longlong lVar12;
  TRangeBound<FFrameNumber> TVar13;
  undefined1 local_res8 [8];
  TRangeBound<FFrameNumber> local_res10;
  uint local_res20;
  
  if ((this->bDynamicWeighting).bIsSet != false) {
    (this->bDynamicWeighting).bIsSet = false;
  }
  local_res20 = local_res20 & 0xffffff00;
  local_res10 = (TRangeBound<FFrameNumber>)(((ulonglong)local_res10 >> 8 & 0xffffff) << 8);
  (this->CachedEntityRange).LowerBound = local_res10;
  TVar13.Value.Value = 0;
  TVar13._0_4_ = local_res20;
  (this->CachedEntityRange).UpperBound = TVar13;
  TSet<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
           *)&this->CachedPerTickConditionalEntities);
  TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
           *)&this->CachedConditionResults);
  pUVar8 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  if (*(longlong *)&pUVar8[0x23].field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar10 = (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData;
  iVar2 = (this->SequenceInstances).Pairs.ArrayNum;
  local_res10 = *(TRangeBound<FFrameNumber> *)&pUVar8[0x23].field_0x8;
  if (FVar10 == (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                 )0x0) {
    FVar10 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
              )&this->SequenceInstances;
  }
  piVar11 = (int *)((longlong)FVar10 + 0x10);
  TVar13 = local_res10;
  do {
    while( true ) {
      if ((this->SequenceInstances).Pairs.ArrayNum != iVar2) {
        `TCheckedPointerIterator<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        TVar13 = local_res10;
      }
      pFVar1 = (FMovieSceneSequenceID *)(piVar11 + -4);
      if (pFVar1 == (FMovieSceneSequenceID *)((longlong)FVar10 + (longlong)iVar2 * 0x18)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return;
      }
      lVar12 = (ulonglong)*(ushort *)(piVar11 + 1) * 0x140 + *(longlong *)((longlong)TVar13 + 8);
      if (param_2 == DataChanged) break;
      if (param_2 == All) {
        *(undefined1 *)(lVar12 + 0x60) = 1;
        piVar11 = piVar11 + 6;
      }
      else {
LAB_146140a57:
        piVar11 = piVar11 + 6;
      }
    }
    pFVar4 = param_1->Object;
    if (pFVar1->Value != 0) {
      this_00 = (pFVar4->CompiledDataManager).field0_0x0.DebugPtr;
      if ((this_00 != (UMovieSceneCompiledDataManager *)0x0) &&
         (FVar3.Value = (pFVar4->RootCompiledDataID).Value, FVar3.Value != -1)) {
        this_01 = UMovieSceneCompiledDataManager::FindHierarchy(this_00,FVar3);
        if (this_01 != (FMovieSceneSequenceHierarchy *)0x0) {
          this_02 = FMovieSceneSequenceHierarchy::FindSubData(this_01,pFVar1);
          if (this_02 != (FMovieSceneSubSequenceData *)0x0) {
            pUVar9 = FMovieSceneSubSequenceData::GetSequence(this_02);
            goto LAB_1461409f8;
          }
        }
      }
LAB_146140a39:
      piVar11[-3] = 0;
      piVar11[-2] = 0;
      piVar11[-1] = 0;
      piVar11[0] = 0;
      *(undefined1 *)(lVar12 + 0x60) = 1;
      TVar13 = local_res10;
      goto LAB_146140a57;
    }
    pUVar9 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&(pFVar4->WeakRootSequence).WeakPtr);
LAB_1461409f8:
    if (pUVar9 == (UMovieSceneSequence *)0x0) goto LAB_146140a39;
    TVar13 = local_res10;
    if (((piVar11[-1] == *(int *)((longlong)&pUVar9->_padding_ + 4) &&
         piVar11[-2] == (int)pUVar9->_padding_) && (int)pUVar9->_padding_ == *piVar11) &&
        *(int *)((longlong)&pUVar9->_padding_ + 4) == piVar11[-3]) goto LAB_146140a57;
    uVar6 = *(undefined8 *)((longlong)&pUVar9->_padding_ + 4);
    *(undefined8 *)(piVar11 + -3) = *(undefined8 *)((longlong)&pUVar9->_padding_ + 4);
    *(undefined8 *)(piVar11 + -1) = uVar6;
    *(undefined1 *)(lVar12 + 0x60) = 1;
    piVar11 = piVar11 + 6;
  } while( true );
}

// MigrateToHierarchical @ 146143f20

TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
__thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::MigrateToHierarchical
          (FSequenceUpdater_Hierarchical *this)

{
  ISequenceUpdater *in_RDX;
  
  *in_RDX = (ISequenceUpdater)0x0;
  return (TUniquePtr<UE::MovieScene::ISequenceUpdater,TDefaultDelete<UE::MovieScene::ISequenceUpdater>_>
          )in_RDX;
}

// OverrideRootSequence @ 146149020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::OverrideRootSequence
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneSequenceID param_2)

{
  uint uVar1;
  code *pcVar2;
  UMovieSceneEntitySystemLinker *this_00;
  FInstanceRegistry *pFVar3;
  FSharedPlaybackState *local_18;
  TReferenceControllerBase<1> *local_10;
  
  uVar1 = (this->RootOverrideSequenceID).Value;
  if (uVar1 != param_2.Value) {
    if (uVar1 == 0) {
      this_00 = (UMovieSceneEntitySystemLinker *)
                FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
      pFVar3 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this_00);
      FEntityLedger::UnlinkEverything
                ((FEntityLedger *)
                 ((ulonglong)*(ushort *)&param_1->Object->RootInstanceHandle * 0x140 +
                 *(longlong *)&pFVar3->Instances),this_00,Normal);
    }
    pcVar2 = *(code **)(this->_padding_ + 0x38);
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(this,&local_18,1);
    (this->RootOverrideSequenceID).Value = param_2.Value;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PopulateUpdateFlags @ 1461493c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::PopulateUpdateFlags
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          ESequenceInstanceUpdateFlags *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  UMovieSceneCompiledDataManager *this_00;
  undefined1 *puVar3;
  code *pcVar4;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *pTVar5;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *pTVar6;
  bool bVar7;
  TOptional<UE::MovieScene::ETimeWarpChannelDomain> TVar8;
  uint uVar9;
  int iVar10;
  FMovieSceneCompiledDataID FVar11;
  IMovieScenePlayer *pIVar12;
  FMovieSceneCompiledDataEntry *pFVar13;
  FMovieSceneSequenceHierarchy *pFVar14;
  undefined6 extraout_var;
  UMovieSceneSequence *pUVar15;
  undefined4 extraout_var_00;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 local_res18 [16];
  undefined4 uStack_9c;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_88;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  longlong lStack_58;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_50;
  
  local_50.Object = param_1->Object;
  local_50.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar12 = FPlayerIndexPlaybackCapability::GetPlayer(&local_50);
  if (pIVar12 != (IMovieScenePlayer *)0x0) {
    (**(code **)(pIVar12->_padding_ + 0x78))(pIVar12,param_2);
  }
  if ((*param_2 & NeedsDissection) == None) {
    this_00 = (param_1->Object->CompiledDataManager).field0_0x0.DebugPtr;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UMovieSceneCompiledDataManager *)0x0)) {
      GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar13 = UMovieSceneCompiledDataManager::GetEntryRef
                        (this_00,(FMovieSceneCompiledDataID)(this->CompiledDataID).Value);
    if (0 < (pFVar13->DeterminismFences).ArrayNum) {
      *param_2 = *param_2 | NeedsDissection;
    }
    pFVar14 = UMovieSceneCompiledDataManager::FindHierarchy
                        (this_00,(FMovieSceneCompiledDataID)(this->CompiledDataID).Value);
    if (pFVar14 != (FMovieSceneSequenceHierarchy *)0x0) {
      TVar8 = FMovieSceneSequenceTransform::FindFirstWarpDomain(&pFVar14->RootTransform);
      if ((((char *)CONCAT62(extraout_var,TVar8))[1] != '\x01') ||
         (*(char *)CONCAT62(extraout_var,TVar8) != '\0')) {
        TStack_78.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar14->SubSequences).field_0x10;
        iVar18 = *(int *)&(pFVar14->SubSequences).field_0x28;
        local_88 = &pFVar14->SubSequences;
        iVar19 = 0;
        uVar9 = 1;
        iVar21 = 0;
        iVar10 = 0;
        if (iVar18 != 0) {
          puVar22 = *(uint **)&(pFVar14->SubSequences).field_0x20;
          if (puVar22 == (uint *)0x0) {
            puVar22 = (uint *)TStack_78.Array;
          }
          uVar17 = *puVar22;
          while (uVar17 == 0) {
            lVar16 = (longlong)iVar19;
            iVar21 = iVar21 + 0x20;
            iVar19 = iVar19 + 1;
            iVar10 = iVar18;
            if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19)
            goto LAB_146149550;
            uVar17 = puVar22[lVar16 + 1];
          }
          uVar9 = -uVar17 & uVar17;
          uVar2 = (ulonglong)uVar9 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar10 = iVar21 + -1 + (int)lVar16;
          if (iVar18 < iVar10) {
            iVar10 = iVar18;
          }
        }
LAB_146149550:
        uVar17 = *(uint *)&(pFVar14->SubSequences).field_0x28;
        puVar1 = &(pFVar14->SubSequences).field_0x10;
        TStack_78._16_8_ = CONCAT44(iVar10,0xffffffff);
        uVar23 = uVar17 & 0xffffffe0;
        TStack_78._padding_ = CONCAT44(uVar9,iVar19);
        iVar18 = (int)uVar17 >> 5;
        TStack_78._24_8_ = CONCAT44(iVar10,iVar21);
        lStack_58 = CONCAT44(uStack_9c,
                             *(int *)&(pFVar14->SubSequences).field_0x8 -
                             *(int *)&(pFVar14->SubSequences).field_0x34);
        local_80 = local_88;
        if (((int)uVar17 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar5 = local_88;
        uVar9 = *(uint *)&(pFVar14->SubSequences).field_0x28;
        if (uVar17 != uVar9) {
          puVar3 = *(undefined1 **)&(pFVar14->SubSequences).field_0x20;
          puVar20 = puVar1;
          if (puVar3 != (undefined1 *)0x0) {
            puVar20 = puVar3;
          }
          uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
          while (uVar17 == 0) {
            lVar16 = (longlong)iVar18;
            uVar23 = uVar23 + 0x20;
            iVar18 = iVar18 + 1;
            uVar17 = uVar9;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_146149670;
            uVar17 = *(uint *)(puVar20 + lVar16 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar17 = (int)lVar16 + -1 + uVar23;
          if ((int)uVar9 < (int)uVar17) {
            uVar17 = uVar9;
          }
        }
LAB_146149670:
        do {
          pTVar6 = local_80;
          if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)lStack_58) {
            `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (((TStack_78.CurrentBitIndex == uVar17) &&
              (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar6 == pTVar5)) goto LAB_14614971b;
          pUVar15 = FMovieSceneSubSequenceData::GetSequence
                              ((FMovieSceneSubSequenceData *)
                               ((longlong)TStack_78.CurrentBitIndex * 0x120 +
                               *(longlong *)pTVar6 + 8));
          if (pUVar15 != (UMovieSceneSequence *)0x0) {
            FVar11 = UMovieSceneCompiledDataManager::GetDataID
                               (this_00,(UMovieSceneSequence *)&stack0xffffffffffffff70);
            if ((*(int *)CONCAT44(extraout_var_00,FVar11.Value) != -1) &&
               (pFVar13 = UMovieSceneCompiledDataManager::GetEntryRef
                                    (this_00,(FMovieSceneCompiledDataID)
                                             *(int *)CONCAT44(extraout_var_00,FVar11.Value)),
               0 < (pFVar13->DeterminismFences).ArrayNum)) goto LAB_1461496ef;
          }
          TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
        } while( true );
      }
      *param_2 = *param_2 | NeedsDissection;
    }
  }
LAB_14614971b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
LAB_1461496ef:
  *param_2 = *param_2 | NeedsDissection;
  goto LAB_14614971b;
}

// Start @ 146155550

void __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::Start
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneContext *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Update @ 14615cbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::Update
          (FSequenceUpdater_Hierarchical *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneContext *param_2)

{
  FMovieSceneSequenceID *pFVar1;
  byte *pbVar2;
  int iVar3;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar4;
  ForElementType<FMovieSceneSequenceID> FVar5;
  uchar uVar6;
  UMovieSceneCompiledDataManager *this_00;
  undefined1 *puVar7;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar8;
  TReferenceControllerBase<1> *pTVar9;
  FMovieSceneEntitySystemRunner *this_01;
  code *pcVar10;
  TRangeBound<FFrameNumber> TVar11;
  FFrameTime FVar12;
  FFrameTime FVar13;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar14;
  FSharedReferencer<1> FVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  byte bVar19;
  bool bVar20;
  char cVar21;
  bool bVar22;
  FMovieSceneCompiledDataID FVar23;
  FFrameNumber FVar24;
  UMovieSceneEntitySystemLinker *pUVar25;
  FMovieSceneSubSequenceData *pFVar26;
  FMovieSceneSequenceHierarchy *pFVar27;
  undefined4 extraout_var;
  FMovieSceneContext *pFVar28;
  FMovieSceneEntityComponentField *pFVar29;
  FMovieSceneCompiledDataEntry *pFVar30;
  UMovieSceneSequence *pUVar31;
  IMovieScenePlayer *pIVar32;
  TRange<FFrameNumber> *pTVar33;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *pTVar34;
  UMovieSceneCondition *this_02;
  FString *pFVar35;
  size_t sVar36;
  UClass *pUVar37;
  undefined4 extraout_var_00;
  FFrameNumber *pFVar38;
  undefined8 *puVar39;
  longlong lVar40;
  TRangeBound<FFrameNumber> *pTVar41;
  uint *puVar42;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  *pTVar43;
  ForElementType<FMovieSceneSequenceID> FVar44;
  undefined1 *puVar45;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  uint *puVar50;
  ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
  FVar51;
  FInstanceHandle FVar52;
  TOptional<bool> *pTVar53;
  TMap<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>_>
  *this_03;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar54;
  uint uVar55;
  undefined8 uVar56;
  FEntityLedger *pFVar57;
  ERunnerUpdateFlags EVar58;
  undefined1 auStackY_738 [32];
  FMovieSceneSequenceID local_6d8;
  undefined1 local_6d4 [4];
  UMovieSceneEntitySystemLinker *local_6d0;
  byte local_6c8;
  byte local_6c7 [7];
  UMovieSceneCompiledDataManager *local_6c0;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *local_6b8;
  TRange<FFrameNumber> local_6b0;
  FInstanceHandle local_6a0;
  FSharedReferencer<1> local_698;
  FEntityLedger *local_690;
  TIndexedContainerIterator<TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,int>
  local_688;
  IMovieScenePlayer *local_678;
  TRange<FFrameNumber> local_670;
  FEntityImportSequenceParams local_660;
  FFrameNumber local_648;
  undefined1 local_644 [8];
  FMovieSceneCompiledDataID local_63c;
  FMovieSceneSequenceHierarchy *local_638;
  TKeyInitializer<FMovieSceneSequenceID_const_&> local_630;
  FEntityImportSequenceParams local_628;
  FEntityImportSequenceParams local_610;
  FEntityImportSequenceParams local_5f8;
  TOptional<FFrameTime> local_5e0;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  uint local_5c0;
  TRangeBound<FFrameNumber> local_5bc;
  uint local_5b4;
  undefined4 uStack_5b0;
  uint local_5ac;
  undefined4 uStack_5a8;
  uint local_5a4;
  undefined4 uStack_5a0;
  uint local_59c;
  undefined4 uStack_598;
  uint local_594;
  undefined4 uStack_590;
  uint local_58c;
  undefined4 uStack_588;
  uint local_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  int iStack_574;
  uint local_570;
  undefined4 uStack_56c;
  uint local_568;
  int iStack_564;
  TRange<FFrameNumber> local_560;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined1 local_528 [12];
  TRangeBound<FFrameNumber> TStack_51c;
  FScriptContainerElement *local_508;
  int iStack_500;
  undefined4 uStack_4fc;
  TOptional<FFrameTime> local_4f8;
  FMovieSceneSequenceID *local_4e8;
  FMovieSceneSequenceHierarchy *local_4e0;
  FMovieSceneSequenceID *local_4d8 [2];
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_4c8;
  FMovieSceneEvaluationTreeNode *pFStack_4c0;
  uint local_4b8;
  undefined4 uStack_4b4;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_4b0;
  undefined1 local_4a0 [56];
  TReferenceControllerBase<1> *local_468;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_460;
  undefined1 local_450 [24];
  FMovieSceneEvaluationTreeNode *local_438;
  uint local_430;
  TRange<FFrameNumber> local_428;
  TRange<FFrameNumber> local_418;
  TStringView<wchar_t> local_408;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  TObjectPtr<UMovieSceneCompiledData>_u_0 TStack_3f0;
  FString local_3e8;
  FGuid local_3d8;
  FGuid local_3c8;
  TRange<FFrameNumber> local_3b8;
  TRange<FFrameNumber> local_3a8;
  TRange<FFrameNumber> local_398;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_388;
  FMovieSceneInverseSequenceTransform local_370;
  undefined1 local_348 [72];
  FMovieSceneWarpCounter local_300;
  int local_2d0;
  byte local_2cc;
  FMovieSceneEvaluationTreeRangeIterator local_2c8;
  FMovieSceneContext local_2a8;
  TRange<FFrameNumber> local_228;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_218;
  TRange<FFrameNumber> local_208;
  TRange<FFrameNumber> local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  FMovieSceneContext local_1d0;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  local_148;
  ForElementType<FMovieSceneSequenceID> local_f8;
  int local_b0;
  int local_ac;
  FSubSequencePath local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_738;
  local_6b8 = param_1;
  pUVar25 = (UMovieSceneEntitySystemLinker *)
            FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  local_6d0 = pUVar25;
  if (((pUVar25->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_698.ReferenceController = (TReferenceControllerBase<1> *)(pUVar25->InstanceRegistry).Ptr;
  this_00 = (param_1->Object->CompiledDataManager).field0_0x0.DebugPtr;
  local_6c0 = this_00;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMovieSceneCompiledDataManager *)0x0)) {
    GC::MarkAsReachable((UObject *)this_00);
  }
  local_4b0.Object = param_1->Object;
  local_4b0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_4b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_4b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_4b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_678 = FPlayerIndexPlaybackCapability::GetPlayer(&local_4b0);
  FVar23.Value = (this->CompiledDataID).Value;
  local_148.Elements._0_8_ = 0;
  local_148.Elements._8_8_ = 0;
  local_148.Elements._32_8_ = 0;
  local_148.Elements._40_4_ = 0;
  local_148.Elements._44_4_ = 0x80;
  local_148.Elements._48_4_ = 0xffffffff;
  local_148.Elements._52_4_ = 0;
  local_148.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148.HashSize = 0;
  FVar52 = *(FInstanceHandle *)&param_1->Object->RootInstanceHandle;
  FSubSequencePath::FSubSequencePath(&local_a8);
  FMovieSceneContext::FMovieSceneContext(&local_2a8,param_2);
  local_f8.SecondaryData = (ForElementType<FMovieSceneSequenceID>)0x0;
  local_b0 = 0;
  local_ac = 0x10;
  local_638 = UMovieSceneCompiledDataManager::FindHierarchy
                        (this_00,(FMovieSceneCompiledDataID)(this->CompiledDataID).Value);
  pFVar1 = &this->RootOverrideSequenceID;
  if (pFVar1->Value != 0) {
    if (((local_638 == (FMovieSceneSequenceHierarchy *)0x0) ||
        (pFVar26 = FMovieSceneSequenceHierarchy::FindSubData(local_638,pFVar1),
        pFVar26 == (FMovieSceneSubSequenceData *)0x0)) ||
       (pFVar27 = (FMovieSceneSequenceHierarchy *)FMovieSceneSubSequenceData::GetSequence(pFVar26),
       pFVar27 == (FMovieSceneSequenceHierarchy *)0x0)) {
      bVar18 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5094565411945448147>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceUpdaters.cpp"
                          ,0x2d3,"RootSequence");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      local_4a0._0_8_ = local_6b8->Object;
      local_4a0._8_8_ = (local_6b8->SharedReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_4a0._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_4a0._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_4a0._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      GetOrCreateSequenceInstance
                (this,(TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)&local_6a0,
                 (UMovieSceneSequence *)local_4a0,pFVar27,(FInstanceRegistry *)local_638,
                 (FMovieSceneSequenceID)(uint)local_698.ReferenceController);
      FVar23 = UMovieSceneCompiledDataManager::GetDataID(local_6c0,(UMovieSceneSequence *)local_528)
      ;
      FVar23.Value = *(int *)CONCAT44(extraout_var,FVar23.Value);
      pFVar28 = FMovieSceneContext::Transform
                          (param_2,&local_1d0,&pFVar26->RootToSequenceTransform,
                           pFVar26->TickResolution);
      FMovieSceneContext::operator=(&local_2a8,pFVar28);
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_1d0.RootToSequenceWarpCounter);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_1d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                 local_1d0.RootToSequenceTransform.NestedTransforms.ArrayNum);
      if ((FMovieSceneNestedSequenceTransform *)
          local_1d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_1d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
      FSubSequencePath::Reset(&local_a8,(FMovieSceneSequenceID)pFVar1->Value,local_638);
      FVar44 = (ForElementType<FMovieSceneSequenceID>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
        FVar44 = local_f8.SecondaryData;
      }
      if ((ulonglong)FVar44 <= pFVar1) {
        FVar44 = (ForElementType<FMovieSceneSequenceID>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
          FVar44 = local_f8.SecondaryData;
        }
        if ((pFVar1 < (int *)((longlong)FVar44 + (longlong)local_ac * 4)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (local_b0 == local_ac) {
        local_b0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneSequenceID>_>
                             (0x404,&local_f8,&local_ac);
      }
      lVar40 = (longlong)local_b0;
      FVar44 = (ForElementType<FMovieSceneSequenceID>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
        FVar44 = local_f8.SecondaryData;
      }
      local_b0 = local_b0 + 1;
      *(uint *)((longlong)FVar44 + lVar40 * 4) = pFVar1->Value;
      FVar52 = local_6a0;
    }
  }
  FMovieSceneEvaluationRange::GetEvaluationFieldTime((FMovieSceneEvaluationRange *)&local_2a8);
  uVar6 = (this->CachedEntityRange).LowerBound.Type.Value;
  local_560.LowerBound.Type.Value = '\x01';
  local_560.LowerBound.Value.Value = local_648.Value;
  if (uVar6 == '\x02') {
LAB_14615cfd6:
    uVar6 = (this->CachedEntityRange).UpperBound.Type.Value;
    pTVar41 = &(this->CachedEntityRange).UpperBound;
    local_5bc.Type.Value = '\x01';
    local_5bc.Value.Value = local_648.Value;
    if (uVar6 != '\x02') {
      iVar49 = (this->CachedEntityRange).UpperBound.Value.Value;
      if (iVar49 <= local_648.Value) {
        if (iVar49 < local_648.Value) {
          pTVar41 = &local_5bc;
        }
        if (uVar6 != '\x01') goto LAB_14615d007;
      }
      if ((pTVar41->Value).Value != (this->CachedEntityRange).UpperBound.Value.Value)
      goto LAB_14615d007;
    }
    bVar18 = false;
  }
  else {
    iVar49 = (this->CachedEntityRange).LowerBound.Value.Value;
    if (iVar49 < local_648.Value) {
LAB_14615cfc9:
      pTVar33 = &this->CachedEntityRange;
LAB_14615cfcd:
      if ((pTVar33->LowerBound).Value.Value == (this->CachedEntityRange).LowerBound.Value.Value)
      goto LAB_14615cfd6;
    }
    else if (local_648.Value < iVar49) {
      pTVar33 = &local_560;
      if (uVar6 == '\x01') goto LAB_14615cfcd;
    }
    else if (uVar6 == '\x01') goto LAB_14615cfc9;
LAB_14615d007:
    bVar18 = true;
  }
  pFVar57 = (FEntityLedger *)
            ((ulonglong)((uint)FVar52 & 0xffff) * 0x140 +
            *(longlong *)&(local_698.ReferenceController)->SharedReferenceCount);
  FMovieSceneContext::operator=((FMovieSceneContext *)(pFVar57 + 1),&local_2a8);
  pFVar29 = UMovieSceneCompiledDataManager::FindEntityComponentField(local_6c0,FVar23);
  pFVar30 = UMovieSceneCompiledDataManager::GetEntryRef(local_6c0,FVar23);
  pUVar31 = FMovieSceneCompiledDataEntry::GetSequence(pFVar30);
  if (pUVar31 == (UMovieSceneSequence *)0x0) {
    FEntityLedger::UnlinkEverything(pFVar57,local_6d0,Normal);
    goto LAB_14615d3d8;
  }
  if ((this->bDynamicWeighting).bIsSet == false) {
    pFVar30 = UMovieSceneCompiledDataManager::GetEntryRef(local_6c0,FVar23);
    pTVar53 = &this->bDynamicWeighting;
    if ((TOptional<bool> *)&local_6c8 != pTVar53) {
      pTVar53->TypedValue = (bool)(pFVar30->AccumulatedFlags >> 2 & 1);
      (this->bDynamicWeighting).bIsSet = true;
    }
    if (local_678 != (IMovieScenePlayer *)0x0) {
      if ((this->bDynamicWeighting).bIsSet == false) {
        cVar21 = (**(code **)(local_678->_padding_ + 0xa0))();
        bVar20 = false;
        if (cVar21 != '\0') goto LAB_14615d0d4;
      }
      else {
LAB_14615d0d4:
        bVar20 = true;
      }
      if ((TOptional<bool> *)local_6c7 != pTVar53) {
        pTVar53->TypedValue = bVar20;
        (this->bDynamicWeighting).bIsSet = true;
      }
    }
  }
  this_03 = &this->CachedPerTickConditionalEntities;
  if (bVar18) {
    TSet<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
             *)this_03);
    local_5b4 = CONCAT31(local_5b4._1_3_,2);
    uStack_5b0 = 0;
    local_528._8_4_ = 0;
    local_528._4_4_ = local_5b4;
    uStack_5a8 = 0;
    local_5ac = CONCAT31(local_5ac._1_3_,2);
    TStack_51c.Value.Value = 0;
    TStack_51c._0_4_ = local_5ac;
    if (pFVar29 != (FMovieSceneEntityComponentField *)0x0) {
      FMovieSceneEntityComponentField::QueryPersistentEntities
                (pFVar29,local_648,(TRange<FFrameNumber> *)(local_528 + 4),&local_148);
    }
    local_5f8.SubSectionFlags = None;
    (this->CachedEntityRange).LowerBound.Type = (TEnumAsByte<ERangeBoundTypes::Type>)local_528[4];
    *(undefined3 *)&(this->CachedEntityRange).LowerBound.field_0x1 = local_528._5_3_;
    (this->CachedEntityRange).LowerBound.Value = (FFrameNumber)local_528._8_4_;
    (this->CachedEntityRange).UpperBound = TStack_51c;
    local_5f8.DefaultCompletionMode = pUVar31->DefaultCompletionMode;
    local_5f8.HierarchicalBias = 0;
    local_5f8.SequenceID.Value = 0;
    if ((this->bDynamicWeighting).bIsSet == false) {
      bVar19 = 0;
    }
    else {
      bVar19 = (this->bDynamicWeighting).TypedValue;
    }
    local_5f8.bDynamicWeighting = bVar19;
    local_5f8.bPostRoll = false;
    local_5f8.bPreRoll = false;
    local_4d8[0] = &MovieSceneSequenceID::Root;
    local_5f8.InstanceHandle = FVar52;
    local_5f8.RootInstanceHandle = (FRootInstanceHandle)FVar52;
    TSet<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FMovieSceneSequenceID_const_&>_>
              ((TSet<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)this_03,(TKeyInitializer<FMovieSceneSequenceID_const_&> *)local_644,
               (bool *)local_4d8);
    FEntityLedger::UpdateEntities
              (pFVar57,local_6d0,&local_5f8,pFVar29,&local_148,
               (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                *)((longlong)(int)local_644._0_4_ * 0x60 + 8 + *(longlong *)&this_03->field_0x0),
               &this->CachedConditionResults);
  }
  else {
    pTVar43 = TMapBase<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>_>
              ::Find((TMapBase<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>_>
                      *)this_03,&MovieSceneSequenceID::Root);
    if ((pTVar43 !=
         (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *)0x0) &&
       (*(int *)&(pTVar43->Elements).field_0x8 != *(int *)&(pTVar43->Elements).field_0x34)) {
      local_610.DefaultCompletionMode = pUVar31->DefaultCompletionMode;
      local_610.SubSectionFlags = None;
      local_610.HierarchicalBias = 0;
      local_610.SequenceID.Value = 0;
      if ((this->bDynamicWeighting).bIsSet == false) {
        bVar19 = 0;
      }
      else {
        bVar19 = (this->bDynamicWeighting).TypedValue;
      }
      local_610.bDynamicWeighting = bVar19;
      local_610.bPostRoll = false;
      local_610.bPreRoll = false;
      local_610.InstanceHandle = FVar52;
      local_610.RootInstanceHandle = (FRootInstanceHandle)FVar52;
      FEntityLedger::UpdateConditionalEntities(pFVar57,local_6d0,&local_610,pFVar29,pTVar43);
    }
  }
  if ((pFVar29 != (FMovieSceneEntityComponentField *)0x0) &&
     (bVar20 = FMovieSceneEntityComponentField::HasAnyOneShotEntities(pFVar29), bVar20)) {
    if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
      TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
      ::UnhashElements(&local_148);
      if ((longlong)local_148.Elements._8_8_ < 0) {
        local_148.Elements._8_8_ = (ulonglong)(uint)local_148.Elements._12_4_ << 0x20;
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)&local_148,0,(int *)&local_148.Elements.field_0xc);
      }
      else {
        local_148.Elements._8_8_ = (ulonglong)(uint)local_148.Elements._12_4_ << 0x20;
      }
      local_148.Elements._48_4_ = 0xffffffff;
      local_148.Elements._52_4_ = 0;
      local_148.Elements._40_4_ = 0;
    }
    FMovieSceneEvaluationRange::TimeRangeToNumberRange(&local_428,(TRange<FFrameTime> *)&local_2a8);
    FMovieSceneEntityComponentField::QueryOneShotEntities(pFVar29,&local_428,&local_148);
    if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
      local_628.DefaultCompletionMode = pUVar31->DefaultCompletionMode;
      local_628.SubSectionFlags = None;
      local_628.HierarchicalBias = 0;
      local_628.SequenceID.Value = 0;
      if ((this->bDynamicWeighting).bIsSet == false) {
        bVar19 = 0;
      }
      else {
        bVar19 = (this->bDynamicWeighting).TypedValue;
      }
      local_628.bDynamicWeighting = bVar19;
      local_628.bPostRoll = false;
      local_628.bPreRoll = false;
      local_628.InstanceHandle = FVar52;
      local_628.RootInstanceHandle = (FRootInstanceHandle)FVar52;
      FEntityLedger::UpdateOneShotEntities
                (pFVar57,local_6d0,&local_628,pFVar29,&local_148,&this->CachedConditionResults);
    }
  }
LAB_14615d3d8:
  pIVar32 = (IMovieScenePlayer *)UMovieSceneCompiledDataManager::FindHierarchy(local_6c0,FVar23);
  local_678 = pIVar32;
  if (pIVar32 != (IMovieScenePlayer *)0x0) {
    FMovieSceneEvaluationTree::IterateFromTime
              ((FMovieSceneEvaluationTree *)&((FMovieSceneSequenceHierarchy *)pIVar32)->Tree,
               &local_2c8,local_648);
    if (bVar18) {
      local_418.LowerBound = local_2c8.CurrentRange.LowerBound;
      local_418.UpperBound = local_2c8.CurrentRange.UpperBound;
      pTVar33 = TRange<FFrameNumber>::Intersection(&local_1f8,&this->CachedEntityRange,&local_418);
      TVar11 = pTVar33->UpperBound;
      (this->CachedEntityRange).LowerBound = pTVar33->LowerBound;
      (this->CachedEntityRange).UpperBound = TVar11;
    }
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
              (&local_388,&(((FMovieSceneSequenceHierarchy *)pIVar32)->Tree).Data,
               local_2c8.CurrentNodeHandle);
    local_4b8 = local_388.DataIndex;
    uStack_4b4 = local_388._20_4_;
    local_4c8.DebugPtr = (UMovieSceneCompiledData *)local_388.Tree;
    pFStack_4c0 = local_388.CurrentNode;
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
              ((TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
               (local_450 + 0x10),local_388.Tree,
               (FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
    while( true ) {
      uVar47 = local_4b8;
      lVar40 = (longlong)(int)local_4b8;
      if (((local_4c8.DebugPtr == (UMovieSceneCompiledData *)local_450._16_8_) &&
          (pFStack_4c0 == local_438)) && (local_4b8 == local_430)) break;
      pTVar34 = TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
                          ((TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                           local_4c8.DebugPtr,&local_218,pFStack_4c0);
      uVar48 = 0;
      if ((int)uVar47 < pTVar34->ArrayNum) {
        uVar48 = ~uVar47 >> 0x1f;
      }
      if ((uVar48 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_690 = (FEntityLedger *)pTVar34->DataPtr;
      uVar47 = *(uint *)&(&local_690->OneShotEntities)[lVar40 * 3].AllocatorInstance.Data;
      iVar49 = local_a8.PathToRoot.ArrayNum;
      if (iVar49 != 0) {
        FVar54 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)&local_a8;
        if (local_a8.PathToRoot.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
          FVar54 = local_a8.PathToRoot.AllocatorInstance.SecondaryData;
        }
        FVar4 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                ((longlong)FVar54 + (longlong)iVar49 * 8);
        uVar56 = local_a8.PathToRoot._72_8_;
        while( true ) {
          if ((int)uVar56 != iVar49) {
            local_6d4[0] = 0;
            `TCheckedPointerIterator<UE::MovieScene::FSubSequencePath::FSequenceIDPair_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_6d4);
            uVar56 = local_a8.PathToRoot._72_8_;
          }
          pIVar32 = local_678;
          if (FVar54 == FVar4) break;
          uVar48 = (uint)*(ulonglong *)FVar54;
          if (uVar47 == 0) {
            FVar54 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                     ((longlong)FVar54 + 8);
            uVar47 = uVar48;
          }
          else {
            uVar47 = uVar47 - uVar48 ^ (uint)(*(ulonglong *)FVar54 >> 0xd) & 0x7ffff;
            uVar55 = (-0x61c88647 - uVar48) - uVar47 ^ uVar47 << 8;
            uVar48 = (uVar48 - uVar55) - uVar47 ^ uVar55 >> 0xd;
            uVar47 = (uVar47 - uVar48) - uVar55 ^ uVar48 >> 0xc;
            uVar55 = (uVar55 - uVar48) - uVar47 ^ uVar47 << 0x10;
            uVar48 = (uVar48 - uVar55) - uVar47 ^ uVar55 >> 5;
            uVar47 = (uVar47 - uVar48) - uVar55 ^ uVar48 >> 3;
            uVar55 = (uVar55 - uVar47) - uVar48 ^ uVar47 << 10;
            uVar47 = (uVar48 - uVar55) - uVar47 ^ uVar55 >> 0xf;
            FVar54 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                     ((longlong)FVar54 + 8);
          }
        }
      }
      uVar48 = *(uint *)&(&local_690->OneShotEntities)[lVar40 * 3].AllocatorInstance.Data;
      if (uVar48 == 0) {
        pFVar26 = (FMovieSceneSubSequenceData *)0x0;
      }
      else {
        if (*(int *)&(((FMovieSceneSequenceHierarchy *)pIVar32)->SubSequences).field_0x8 !=
            *(int *)&(((FMovieSceneSequenceHierarchy *)pIVar32)->SubSequences).field_0x34) {
          puVar7 = *(undefined1 **)
                    &(((FMovieSceneSequenceHierarchy *)pIVar32)->SubSequences).field_0x40;
          puVar45 = &(((FMovieSceneSequenceHierarchy *)pIVar32)->SubSequences).field_0x38;
          if (puVar7 != (undefined1 *)0x0) {
            puVar45 = puVar7;
          }
          uVar55 = *(uint *)(puVar45 +
                            (ulonglong)
                            (*(int *)&(((FMovieSceneSequenceHierarchy *)pIVar32)->SubSequences).
                                      field_0x48 - 1U & uVar48) * 4);
          if (uVar55 != 0xffffffff) {
            do {
              puVar42 = (uint *)((longlong)(int)uVar55 * 0x120 +
                                *(longlong *)
                                 &((FMovieSceneSequenceHierarchy *)pIVar32)->SubSequences);
              if (*puVar42 == uVar48) goto LAB_14615d6b7;
              uVar55 = puVar42[0x46];
            } while (uVar55 != 0xffffffff);
          }
        }
        puVar42 = (uint *)0x0;
LAB_14615d6b7:
        pFVar26 = (FMovieSceneSubSequenceData *)(puVar42 + 2);
        if (puVar42 == (uint *)0x0) {
          pFVar26 = (FMovieSceneSubSequenceData *)0x0;
        }
      }
      FVar44 = (ForElementType<FMovieSceneSequenceID>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
        FVar44 = local_f8.SecondaryData;
      }
      local_6d8.Value = uVar47;
      if ((ulonglong)FVar44 <= &local_6d8) {
        FVar44 = (ForElementType<FMovieSceneSequenceID>)&local_f8;
        if (local_f8.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
          FVar44 = local_f8.SecondaryData;
        }
        if ((&local_6d8 < (FMovieSceneSequenceID *)((longlong)FVar44 + (longlong)local_ac * 4)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (local_b0 == local_ac) {
        local_b0 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneSequenceID>_>
                             (0x404,&local_f8,&local_ac);
      }
      FVar44 = (ForElementType<FMovieSceneSequenceID>)&local_f8;
      if (local_f8.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
        FVar44 = local_f8.SecondaryData;
      }
      lVar40 = (longlong)local_b0;
      local_b0 = local_b0 + 1;
      *(uint *)((longlong)FVar44 + lVar40 * 4) = local_6d8.Value;
      if ((pFVar26 == (FMovieSceneSubSequenceData *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("SubData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSequenceUpdaters.cpp"
                              ,0x349,
                              L"Sub data does not exist for a SequenceID that exists in the hierarchical tree - this indicates a corrupt compilation product."
                             ), bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar20 = false;
      this_02 = TSoftObjectPtr<UMovieSceneCondition_const_>::Get(&pFVar26->WeakCondition);
      pTVar14 = local_6b8;
      if (this_02 != (UMovieSceneCondition *)0x0) {
        pcVar10 = *(code **)(this_02->_padding_ + 0x2c8);
        local_4a0._16_8_ = local_6b8->Object;
        local_4a0._24_8_ = (local_6b8->SharedReferenceCount).ReferenceController;
        if ((TReferenceControllerBase<1> *)local_4a0._24_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)local_4a0._24_8_)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_4a0._24_8_)->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar21 = (*pcVar10)(this_02,local_4a0 + 0x10);
        if (cVar21 == '\0') {
          local_460.Object = pTVar14->Object;
          local_460.SharedReferenceCount.ReferenceController =
               (pTVar14->SharedReferenceCount).ReferenceController;
          if (local_460.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_460.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_460.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_560.UpperBound.Type.Value = '\0';
          local_560.UpperBound._1_3_ = 0;
          local_560.UpperBound.Value.Value = 0;
          uStack_550 = 0;
          local_3c8.A = 0;
          local_3c8.B = 0;
          local_3c8.C = 0;
          local_3c8.D = 0;
          bVar20 = UMovieSceneCondition::EvaluateCondition
                             (this_02,&local_3c8,
                              (FMovieSceneSequenceID)(this->RootOverrideSequenceID).Value,&local_460
                             );
          bVar20 = !bVar20;
        }
        else {
          pcVar10 = *(code **)(this_02->_padding_ + 0x2c0);
          pFVar35 = ::FName::ToString(&pFVar26->SectionPath,&local_3e8);
          if ((pFVar35->Data).ArrayNum == 0) {
            local_508 = (FScriptContainerElement *)0x15060d16c;
LAB_14615d890:
            sVar36 = wcslen((wchar_t *)local_508);
            iVar49 = (int)sVar36;
          }
          else {
            local_508 = (pFVar35->Data).AllocatorInstance.Data;
            iVar49 = 0;
            if (local_508 != (FScriptContainerElement *)0x0) goto LAB_14615d890;
          }
          iStack_500 = iVar49;
          pFVar30 = UMovieSceneCompiledDataManager::GetEntryRef(local_6c0,FVar23);
          pUVar31 = FMovieSceneCompiledDataEntry::GetSequence(pFVar30);
          pUVar37 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
          local_408._8_8_ = CONCAT44(uStack_4fc,iStack_500);
          local_408.DataPtr = (wchar_t *)local_508;
          StaticFindObject(pUVar37,(UObject *)pUVar31,&local_408,None);
          local_4a0._32_8_ = local_6b8->Object;
          local_4a0._40_8_ = (local_6b8->SharedReferenceCount).ReferenceController;
          if ((TReferenceControllerBase<1> *)local_4a0._40_8_ != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            ((TReferenceControllerBase<1> *)local_4a0._40_8_)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)((TReferenceControllerBase<1> *)local_4a0._40_8_)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_548 = 0;
          uStack_540 = 0;
          local_3f8 = 0;
          uStack_3f4 = 0;
          TStack_3f0._0_4_ = 0;
          TStack_3f0._4_4_ = 0;
          uVar47 = (*pcVar10)(this_02,&local_3f8,(this->RootOverrideSequenceID).Value,
                              local_4a0 + 0x20);
          if (*(int *)&(this->CachedConditionResults).field_0x8 !=
              *(int *)&(this->CachedConditionResults).field_0x34) {
            puVar7 = *(undefined1 **)&(this->CachedConditionResults).field_0x40;
            puVar45 = &(this->CachedConditionResults).field_0x38;
            if (puVar7 != (undefined1 *)0x0) {
              puVar45 = puVar7;
            }
            uVar48 = *(uint *)(puVar45 +
                              (ulonglong)
                              (*(int *)&(this->CachedConditionResults).field_0x48 - 1U & uVar47) * 4
                              );
            if (uVar48 != 0xffffffff) {
              do {
                puVar42 = (uint *)((longlong)(int)uVar48 * 0x10 +
                                  *(longlong *)&this->CachedConditionResults);
                if (*puVar42 == uVar47) goto LAB_14615d9ab;
                uVar48 = puVar42[2];
              } while (uVar48 != 0xffffffff);
            }
          }
          puVar42 = (uint *)0x0;
LAB_14615d9ab:
          puVar50 = puVar42 + 1;
          if (puVar42 == (uint *)0x0) {
            puVar50 = (uint *)0x0;
          }
          if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
          }
          if (puVar50 == (uint *)0x0) {
            local_4a0._48_8_ = local_6b8->Object;
            local_468 = (local_6b8->SharedReferenceCount).ReferenceController;
            if (local_468 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_468->SharedReferenceCount =
                   (atomic<int>)((int)local_468->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_538 = 0;
            uStack_530 = 0;
            local_3d8.A = 0;
            local_3d8.B = 0;
            local_3d8.C = 0;
            local_3d8.D = 0;
            bVar22 = UMovieSceneCondition::EvaluateCondition
                               (this_02,&local_3d8,
                                (FMovieSceneSequenceID)(this->RootOverrideSequenceID).Value,
                                (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                                (local_4a0 + 0x30));
            if (!bVar22) {
              bVar20 = true;
            }
          }
          else {
            bVar20 = (char)*puVar50 == '\0';
          }
        }
      }
      pFVar27 = (FMovieSceneSequenceHierarchy *)FMovieSceneSubSequenceData::GetSequence(pFVar26);
      local_4e0 = pFVar27;
      if ((pFVar27 == (FMovieSceneSequenceHierarchy *)0x0) || (bVar20)) {
        FVar51 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                  )&this->SequenceInstances;
        FVar8 = (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData;
        uVar47 = (this->SequenceInstances).Pairs.ArrayNum;
        FVar46 = FVar51;
        if (FVar8 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                      )0x0) {
          FVar46 = FVar8;
        }
        iVar49 = 0;
        if (0 < (int)uVar47) {
          do {
            iVar3 = (uVar47 >> 1) + iVar49;
            if (*(uint *)((longlong)FVar46 + (longlong)iVar3 * 0x18) < local_6d8.Value) {
              iVar49 = iVar3 + (uVar47 & 1);
            }
            uVar48 = uVar47 >> 1;
            uVar47 = uVar47 >> 1;
          } while (uVar48 != 0);
        }
        if (iVar49 < (this->SequenceInstances).Pairs.ArrayNum) {
          FVar8 = (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData;
          FVar46 = FVar51;
          if (FVar8 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                        )0x0) {
            FVar46 = FVar8;
          }
          if ((local_6d8.Value < *(uint *)((longlong)FVar46 + (longlong)iVar49 * 0x18)) ||
             (iVar49 == -1)) goto LAB_14615e267;
          if ((iVar49 < 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar8 = (this->SequenceInstances).Pairs.AllocatorInstance.SecondaryData;
          if (FVar8 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                        )0x0) {
            FVar51 = FVar8;
          }
          puVar39 = (undefined8 *)((longlong)iVar49 * 0x18 + 4 + (longlong)FVar51);
          if (puVar39 == (undefined8 *)0x0) goto LAB_14615e267;
          local_5d0 = *puVar39;
          uStack_5c8 = puVar39[1];
          local_5c0 = *(uint *)(puVar39 + 2);
        }
        else {
LAB_14615e267:
          local_5d0 = 0;
          local_5c0 = 0xffff;
          uStack_5c8 = 0;
        }
        if ((short)local_5c0 != -1) {
          pFVar57 = (FEntityLedger *)
                    ((ulonglong)(local_5c0 & 0xffff) * 0x140 +
                    *(longlong *)&(local_698.ReferenceController)->SharedReferenceCount);
          FEntityLedger::UnlinkEverything(pFVar57,local_6d0,Normal);
          pFVar57->bInvalidated = true;
        }
LAB_14615e2ad:
        TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::operator++
                  ((TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                   &local_4c8.ObjectPtr);
        pIVar32 = local_678;
      }
      else {
        UMovieSceneCompiledDataManager::GetDataID(local_6c0,(UMovieSceneSequence *)&local_63c);
        FVar15.ReferenceController = local_698.ReferenceController;
        local_450._0_8_ = local_6b8->Object;
        local_450._8_8_ = (local_6b8->SharedReferenceCount).ReferenceController;
        if ((TReferenceControllerBase<1> *)local_450._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)local_450._8_8_)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_450._8_8_)->SharedReferenceCount + 1);
          UNLOCK();
        }
        GetOrCreateSequenceInstance
                  (this,(TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(local_644 + 4)
                   ,(UMovieSceneSequence *)local_450,pFVar27,(FInstanceRegistry *)local_638,
                   (FMovieSceneSequenceID)(uint)local_698.ReferenceController);
        uVar16 = local_644._4_4_;
        pFVar57 = (FEntityLedger *)
                  ((ulonglong)(local_644._4_4_ & 0xffff) * 0x140 +
                  *(longlong *)&(FVar15.ReferenceController)->SharedReferenceCount);
        local_690 = pFVar57;
        FMovieSceneContext::Transform
                  (&local_2a8,(FMovieSceneContext *)local_348,&pFVar26->RootToSequenceTransform,
                   pFVar26->TickResolution);
        local_3b8.LowerBound = (pFVar26->PostRollRange).Value.LowerBound;
        local_3b8.UpperBound = (pFVar26->PostRollRange).Value.UpperBound;
        local_3a8.LowerBound = (pFVar26->PreRollRange).Value.LowerBound;
        local_3a8.UpperBound = (pFVar26->PreRollRange).Value.UpperBound;
        FMovieSceneContext::ReportOuterSectionRanges
                  ((FMovieSceneContext *)local_348,&local_3a8,&local_3b8);
        local_2d0 = (int)pFVar26->HierarchicalBias;
        bVar19 = pFVar57[2].ImportedEntities.field_0x4;
        if (((local_2cc & 0x20) == 0) && ((local_2cc & 8) == 0)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        if (((local_2cc & 0x40) == 0) && ((local_2cc & 0x10) == 0)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        if ((((bVar19 & 0x28) != 0) != bVar20) || (((bVar19 & 0x50) != 0) != bVar22)) {
          pFVar57->bInvalidated = true;
        }
        FMovieSceneContext::operator=
                  ((FMovieSceneContext *)(pFVar57 + 1),(FMovieSceneContext *)local_348);
        pbVar2 = (byte *)((longlong)&pFVar57[3].OneShotEntities.AllocatorInstance.Data + 6);
        *pbVar2 = *pbVar2 & 0xfd;
        pFVar29 = UMovieSceneCompiledDataManager::FindEntityComponentField(local_6c0,local_63c);
        FVar24 = FMovieSceneEvaluationRange::GetEvaluationFieldTime
                           ((FMovieSceneEvaluationRange *)local_348);
        uVar17 = local_644._4_4_;
        pFVar57 = local_690;
        pUVar25 = local_6d0;
        local_644._4_2_ = (undefined2)uVar16;
        local_644._6_2_ = SUB42(uVar16,2);
        local_660.InstanceHandle.InstanceID = local_644._4_2_;
        local_660.InstanceHandle.InstanceSerial = local_644._6_2_;
        local_660.DefaultCompletionMode =
             *(EMovieSceneCompletionMode *)&(local_4e0->Tree).Data.Data.Items.AllocatorInstance.Data
        ;
        FVar24.Value = *(int *)CONCAT44(extraout_var_00,FVar24.Value);
        local_660.HierarchicalBias = (int)pFVar26->HierarchicalBias;
        local_660.SubSectionFlags = pFVar26->AccumulatedFlags;
        local_660.SequenceID.Value = local_6d8.Value;
        if ((this->bDynamicWeighting).bIsSet == false) {
          bVar19 = 0;
        }
        else {
          bVar19 = (this->bDynamicWeighting).TypedValue;
        }
        local_660.bDynamicWeighting = bVar19;
        local_660.bPostRoll = bVar22;
        local_660.bPreRoll = bVar20;
        local_660.RootInstanceHandle = (FRootInstanceHandle)FVar52;
        local_644._4_4_ = uVar17;
        if ((bVar18) || (local_690->bInvalidated != false)) {
          if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
            TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
            ::UnhashElements(&local_148);
            if ((longlong)local_148.Elements._8_8_ < 0) {
              local_148.Elements._8_8_ = (ulonglong)(uint)local_148.Elements._12_4_ << 0x20;
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1c,4,0,(ForAnyElementType *)&local_148,0,
                         (int *)&local_148.Elements.field_0xc);
            }
            else {
              local_148.Elements._8_8_ = (ulonglong)(uint)local_148.Elements._12_4_ << 0x20;
            }
            local_148.Elements._48_4_ = 0xffffffff;
            local_148.Elements._52_4_ = 0;
            local_148.Elements._40_4_ = 0;
          }
          uStack_5a0 = 0;
          uStack_598 = 0;
          local_5a4 = CONCAT31(local_5a4._1_3_,2);
          local_670.LowerBound.Value.Value = 0;
          local_670.LowerBound._0_4_ = local_5a4;
          local_59c = CONCAT31(local_59c._1_3_,2);
          local_670.UpperBound.Value.Value = 0;
          local_670.UpperBound._0_4_ = local_59c;
          if (pFVar29 != (FMovieSceneEntityComponentField *)0x0) {
            FMovieSceneEntityComponentField::QueryPersistentEntities
                      (pFVar29,FVar24,&local_670,&local_148);
          }
          pTVar33 = TRange<FFrameNumber>::Intersection
                              (&local_208,&local_670,&(pFVar26->PlayRange).Value);
          local_670.LowerBound = pTVar33->LowerBound;
          local_670.UpperBound = pTVar33->UpperBound;
          local_4e8 = &local_6d8;
          TSet<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<FMovieSceneSequenceID_const_&>_>
                    ((TSet<TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->CachedPerTickConditionalEntities,&local_630,(bool *)&local_4e8);
          pUVar25 = local_6d0;
          FEntityLedger::UpdateEntities
                    (pFVar57,local_6d0,&local_660,pFVar29,&local_148,
                     (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                      *)((longlong)(int)local_630.Key * 0x60 +
                        *(longlong *)&this->CachedPerTickConditionalEntities + 8),
                     &this->CachedConditionResults);
          FMovieSceneContext::GetSequenceToRootSequenceTransform
                    ((FMovieSceneContext *)local_348,&local_370);
          local_594 = CONCAT31(local_594._1_3_,2);
          uStack_590 = 0;
          uStack_588 = 0;
          local_6b0.LowerBound.Value.Value = 0;
          local_6b0.LowerBound._0_4_ = local_594;
          local_58c = CONCAT31(local_58c._1_3_,2);
          local_6b0.UpperBound.Value.Value = 0;
          local_6b0.UpperBound._0_4_ = local_58c;
          if (local_670.LowerBound.Type.Value != '\x02') {
            pFVar38 = TRangeBound<FFrameNumber>::GetValue(&local_670.LowerBound);
            uStack_57c = 0;
            local_580 = pFVar38->Value;
            FVar12.SubFrame = 0.0;
            FVar12.FrameNumber.Value = local_580;
            FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_370,&local_5e0,FVar12,
                       (FMovieSceneTransformBreadcrumbs *)(local_348 + 0x48));
            if (local_5e0.bIsSet != false) {
              iStack_574 = local_5e0.TypedValue.FrameNumber.Value;
              if (local_5e0.TypedValue.SubFrame != 0.0) {
                iStack_574 = local_5e0.TypedValue.FrameNumber.Value + 1;
              }
              local_578 = CONCAT31(local_578._1_3_,1);
              local_6b0.LowerBound.Value.Value = iStack_574;
              local_6b0.LowerBound._0_4_ = local_578;
            }
          }
          if (local_670.UpperBound.Type.Value != '\x02') {
            pFVar38 = TRangeBound<FFrameNumber>::GetValue(&local_670.UpperBound);
            uStack_56c = 0;
            local_570 = pFVar38->Value;
            FVar13.SubFrame = 0.0;
            FVar13.FrameNumber.Value = local_570;
            FMovieSceneInverseSequenceTransform::TryTransformTime
                      (&local_370,&local_4f8,FVar13,
                       (FMovieSceneTransformBreadcrumbs *)(local_348 + 0x48));
            uVar47 = local_568;
            if (local_4f8.bIsSet != false) {
              iStack_564 = local_4f8.TypedValue.FrameNumber.Value;
              local_568 = local_568 & 0xffffff00;
              local_6b0.UpperBound =
                   (TRangeBound<FFrameNumber>)
                   (CONCAT44(local_4f8.TypedValue.FrameNumber.Value,uVar47) & 0xffffffffffffff00);
            }
          }
          if ((local_6b0.LowerBound.Type.Value != '\x02') &&
             (local_6b0.UpperBound.Type.Value != '\x02')) {
            pFVar38 = TRangeBound<FFrameNumber>::GetValue(&local_6b0.UpperBound);
            iVar49 = pFVar38->Value;
            pFVar38 = TRangeBound<FFrameNumber>::GetValue(&local_6b0.LowerBound);
            TVar11 = local_6b0.LowerBound;
            pUVar25 = local_6d0;
            if (iVar49 < pFVar38->Value) {
              local_6b0.LowerBound = local_6b0.UpperBound;
              local_6b0.UpperBound = TVar11;
            }
          }
          pTVar33 = TRange<FFrameNumber>::Intersection
                              (&local_228,&this->CachedEntityRange,&local_6b0);
          TVar11 = pTVar33->UpperBound;
          (this->CachedEntityRange).LowerBound = pTVar33->LowerBound;
          (this->CachedEntityRange).UpperBound = TVar11;
          if (local_370.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_370.NestedTransforms.AllocatorInstance.Data);
          }
        }
        else if (*(int *)&(this->CachedPerTickConditionalEntities).field_0x8 !=
                 *(int *)&(this->CachedPerTickConditionalEntities).field_0x34) {
          puVar7 = *(undefined1 **)&(this->CachedPerTickConditionalEntities).field_0x40;
          puVar45 = &(this->CachedPerTickConditionalEntities).field_0x38;
          if (puVar7 != (undefined1 *)0x0) {
            puVar45 = puVar7;
          }
          uVar47 = *(uint *)(puVar45 +
                            (ulonglong)
                            (*(int *)&(this->CachedPerTickConditionalEntities).field_0x48 - 1U &
                            local_6d8.Value) * 4);
          if (uVar47 != 0xffffffff) {
            do {
              puVar42 = (uint *)((longlong)(int)uVar47 * 0x60 +
                                *(longlong *)&this->CachedPerTickConditionalEntities);
              if (*puVar42 == local_6d8.Value) {
                pTVar43 = (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                           *)(puVar42 + 2);
                if (puVar42 == (uint *)0x0) {
                  pTVar43 = (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                             *)0x0;
                }
                if ((pTVar43 !=
                     (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
                      *)0x0) &&
                   (*(int *)&(pTVar43->Elements).field_0x8 !=
                    *(int *)&(pTVar43->Elements).field_0x34)) {
                  FEntityLedger::UpdateConditionalEntities
                            (local_690,local_6d0,&local_660,pFVar29,pTVar43);
                }
                break;
              }
              uVar47 = puVar42[0x16];
            } while (uVar47 != 0xffffffff);
          }
        }
        if ((pFVar29 != (FMovieSceneEntityComponentField *)0x0) &&
           (bVar20 = FMovieSceneEntityComponentField::HasAnyOneShotEntities(pFVar29), bVar20)) {
          if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
            TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
            ::UnhashElements(&local_148);
            bVar20 = (longlong)local_148.Elements._8_8_ < 0;
            local_148.Elements._8_8_ = local_148.Elements._8_8_ & 0xffffffff00000000;
            if (bVar20) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1c,4,0,(ForAnyElementType *)&local_148,0,
                         (int *)&local_148.Elements.field_0xc);
            }
            local_148.Elements._48_4_ = 0xffffffff;
            local_148.Elements._52_4_ = 0;
            local_148.Elements._40_4_ = 0;
          }
          FMovieSceneEvaluationRange::TimeRangeToNumberRange
                    (&local_398,(TRange<FFrameTime> *)local_348);
          FMovieSceneEntityComponentField::QueryOneShotEntities(pFVar29,&local_398,&local_148);
          if (local_148.Elements._8_4_ != local_148.Elements._52_4_) {
            FEntityLedger::UpdateOneShotEntities
                      (pFVar57,pUVar25,&local_660,pFVar29,&local_148,&this->CachedConditionResults);
          }
        }
        FMovieSceneWarpCounter::~FMovieSceneWarpCounter
                  ((FMovieSceneWarpCounter *)(local_348 + 0x48));
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)local_348._56_8_,local_348._64_4_);
        if ((FMovieSceneNestedSequenceTransform *)local_348._56_8_ ==
            (FMovieSceneNestedSequenceTransform *)0x0) goto LAB_14615e2ad;
        FMemory::Free((void *)local_348._56_8_);
        TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::operator++
                  ((TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *)
                   &local_4c8.ObjectPtr);
        pIVar32 = local_678;
      }
    }
  }
  pUVar25 = local_6d0;
  if (((local_6d0->Runner).Object == (FMovieSceneEntitySystemRunner *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar9 = (pUVar25->Runner).SharedReferenceCount.ReferenceController;
  this_01 = (pUVar25->Runner).Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_01 == (FMovieSceneEntitySystemRunner *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_688.Container = &(this->SequenceInstances).Pairs;
  iVar49 = 0;
  local_688._8_8_ = (ulonglong)(uint)local_688._12_4_ << 0x20;
  do {
    FVar51 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
              )local_688.Container;
    if ((iVar49 < 0) || (*(int *)((longlong)local_688.Container + 200) <= iVar49)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      if (local_f8.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
        FMemory::Free((void *)local_f8.SecondaryData);
      }
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_2a8.RootToSequenceWarpCounter);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_2a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                 local_2a8.RootToSequenceTransform.NestedTransforms.ArrayNum);
      if ((FMovieSceneNestedSequenceTransform *)
          local_2a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_2a8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
      if (local_a8.PathToRoot.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FMemory::Free((void *)local_a8.PathToRoot.AllocatorInstance.SecondaryData);
      }
      local_148.HashSize = 0;
      if (local_148.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_148.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FMovieSceneEvaluationFieldEntityQuery>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_148.Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((local_6b8->SharedReferenceCount).ReferenceController);
      return;
    }
    if ((iVar49 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar46 = (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
              )local_688.Container;
    FVar8 = *(ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
              *)((longlong)FVar51 + 0xc0);
    EVar58 = None;
    lVar40 = (longlong)local_688.Index;
    if (FVar8 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                  )0x0) {
      FVar51 = FVar8;
    }
    puVar39 = (undefined8 *)((longlong)FVar51 + 4 + (longlong)iVar49 * 0x18);
    FVar52 = *(FInstanceHandle *)((longlong)FVar51 + 0x14 + (longlong)iVar49 * 0x18);
    local_1e8 = *puVar39;
    uStack_1e0 = puVar39[1];
    uVar47 = 0;
    if (local_688.Index < *(int *)((longlong)local_688.Container + 200)) {
      uVar47 = (uint)~local_688.Index >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar51 = *(ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
               *)((longlong)FVar46 + 0xc0);
    if (FVar51 != (ForElementType<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>_>
                   )0x0) {
      FVar46 = FVar51;
    }
    FVar44 = (ForElementType<FMovieSceneSequenceID>)&local_f8;
    if (local_f8.SecondaryData != (ForElementType<FMovieSceneSequenceID>)0x0) {
      FVar44 = local_f8.SecondaryData;
    }
    FVar5 = (ForElementType<FMovieSceneSequenceID>)((longlong)FVar44 + (longlong)local_b0 * 4);
    if (FVar44 != FVar5) {
      do {
        if (*(int *)FVar44 == *(int *)((longlong)FVar46 + lVar40 * 0x18)) goto LAB_14615e48c;
        FVar44 = (ForElementType<FMovieSceneSequenceID>)((longlong)FVar44 + 4);
      } while (FVar44 != FVar5);
    }
    EVar58 = FinalDissectionMask;
    TIndexedContainerIterator<TArray<TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TTuple<FMovieSceneSequenceID,UE::MovieScene::FSequenceUpdater_Hierarchical::FSubInstanceData>,int>
    ::RemoveCurrent(&local_688);
LAB_14615e48c:
    FMovieSceneEntitySystemRunner::MarkForUpdate(this_01,FVar52,EVar58);
    iVar49 = local_688.Index + 1;
    local_688.Index = iVar49;
  } while( true );
}

// UpdateEntitiesForSequence @ 1461603d0

TRange<FFrameNumber> * __thiscall
UE::MovieScene::FSequenceUpdater_Hierarchical::UpdateEntitiesForSequence
          (FSequenceUpdater_Hierarchical *this,TRange<FFrameNumber> *__return_storage_ptr__,
          FMovieSceneEntityComponentField *param_1,FFrameTime param_2,
          TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
          *param_3)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  uint local_res10;
  uint local_res18;
  
  local_res10 = CONCAT31(local_res10._1_3_,2);
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res10;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  __return_storage_ptr__->LowerBound = TVar1;
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res18;
  __return_storage_ptr__->UpperBound = TVar2;
  if (param_1 != (FMovieSceneEntityComponentField *)0x0) {
    FMovieSceneEntityComponentField::QueryPersistentEntities
              (param_1,param_2.FrameNumber.Value,__return_storage_ptr__,param_3);
  }
  return __return_storage_ptr__;
}


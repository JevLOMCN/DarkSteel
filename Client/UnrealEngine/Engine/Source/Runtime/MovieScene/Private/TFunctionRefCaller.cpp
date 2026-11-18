// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 52

// Call @ 1460b11c0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool___cdecl(UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&),bool,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&,UE::MovieScene::FEvaluationTreePopulationRules::FSortedSection_const_&>
::Call(void *param_1,FSortedSection *param_2,FSortedSection *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001460b11cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*param_1)(param_2,param_3,param_3,param_1);
  return (bool)uVar1;
}

// Call @ 1460b11e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneDecorationContainerObject::AddDecoration'::__l2::<lambda_1>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001460b11e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x2b0))(*(longlong **)param_1,*param_2);
  return;
}

// Call @ 1460b1200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneDecorationContainerObject::GetOrCreateDecoration'::__l2::<lambda_1>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001460b1209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x2b0))(*(longlong **)param_1,*param_2);
  return;
}

// Call @ 1460b1220

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustom'::__l2::<lambda_1>,bool,FMovieSceneEvaluationTreeNodeHandle>
::Call(void *param_1,FMovieSceneEvaluationTreeNodeHandle *param_2)

{
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> *pTVar1;
  TArrayView<FMovieSceneTrackEvaluationData_const_,int> local_38;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData> local_28;
  
  if (**(char **)((longlong)param_1 + 8) == '\0') {
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneTrackEvaluationData>
              (&local_28,*(TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData> **)param_1,
               *param_2);
    if (local_28.CurrentNode != (FMovieSceneEvaluationTreeNode *)0x0) {
      pTVar1 = TMovieSceneEvaluationTree<FMovieSceneTrackEvaluationData>::GetDataForSingleNode
                         (local_28.Tree,&local_38,local_28.CurrentNode);
      if ((-1 < local_28.DataIndex) && (local_28.DataIndex < pTVar1->ArrayNum)) {
        return false;
      }
    }
  }
  return true;
}

// Call @ 1460b1280

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustomPerRow'::__l2::<lambda_1>,bool,FMovieSceneEvaluationTreeNodeHandle>
::Call(void *param_1,FMovieSceneEvaluationTreeNodeHandle *param_2)

{
  bool bVar1;
  
  bVar1 = `UE::MovieScene::FEvaluationTreePopulationRules::HighPassCustomPerRow'::__l2::<lambda_1>::
          operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 1460b1290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneDecorationContainerObject::RemoveDecoration'::__l2::<lambda_1>,void,UObject_*>
::Call(void *param_1,UObject **param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001460b1299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x2b8))(*(longlong **)param_1,*param_2);
  return;
}

// Call @ 1460b12b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneCompiledDataManager::PopulateSubSequenceTree'::__l22::<lambda_1>,bool,TRange<FFrameTime>_>
::Call(void *param_1,TRange<FFrameTime> *param_2)

{
  bool bVar1;
  TRange<FFrameTime> local_28;
  
  local_28.LowerBound.Type.Value = (param_2->LowerBound).Type.Value;
  local_28.LowerBound._1_3_ = *(undefined3 *)&(param_2->LowerBound).field_0x1;
  local_28.LowerBound.Value.FrameNumber.Value = (param_2->LowerBound).Value.FrameNumber.Value;
  local_28._8_8_ = *(undefined8 *)&(param_2->LowerBound).Value.SubFrame;
  local_28.UpperBound.Value = (param_2->UpperBound).Value;
  bVar1 = `UMovieSceneCompiledDataManager::PopulateSubSequenceTree'::__l22::<lambda_1>::operator()
                    (param_1,&local_28);
  return bVar1;
}

// Call @ 1460b12e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneCompiledDataManager::CompileSubSequences'::__l46::<lambda_1>,bool,FFrameTime>
::Call(void *param_1,FFrameTime *param_2)

{
  bool bVar1;
  
  bVar1 = `UMovieSceneCompiledDataManager::CompileSubSequences'::__l46::<lambda_1>::operator()
                    (param_1,*param_2);
  return bVar1;
}

// Call @ 1460b12f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneCompiledDataManager::GatherTrack'::__l55::<lambda_1>,bool,TRange<FFrameTime>_>
::Call(void *param_1,TRange<FFrameTime> *param_2)

{
  bool bVar1;
  TRange<FFrameTime> local_28;
  
  local_28.LowerBound.Type.Value = (param_2->LowerBound).Type.Value;
  local_28.LowerBound._1_3_ = *(undefined3 *)&(param_2->LowerBound).field_0x1;
  local_28.LowerBound.Value.FrameNumber.Value = (param_2->LowerBound).Value.FrameNumber.Value;
  local_28._8_8_ = *(undefined8 *)&(param_2->LowerBound).Value.SubFrame;
  local_28.UpperBound.Value = (param_2->UpperBound).Value;
  bVar1 = `UMovieSceneCompiledDataManager::GatherTrack'::__l55::<lambda_1>::operator()
                    (param_1,&local_28);
  return bVar1;
}

// Call @ 146125880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
  ::
  ScheduleImpl<UE::MovieScene::FAssignEvalSecondsTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 1461258b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>::ScheduleImpl<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
  ::
  ScheduleImpl<UE::MovieScene::FAssignEvalTimesTask,TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_*>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 1461258e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>::ScheduleImpl<UE::MovieScene::FEvaluationHookUpdater,UMovieSceneEvaluationHookSystem_*,UE::MovieScene::FInstanceRegistry_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
  ::PreLockComponentHeaders
            (*(TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
               **)param_1,&local_18,param_3);
  return;
}

// Call @ 146125910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneEntitySystemLinker::CleanGarbage'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
::Call(void *param_1,UMovieSceneEntitySystem **param_2)

{
  UMovieSceneEntitySystem *local_res8;
  UMovieSceneEntitySystem *local_res10 [3];
  
  local_res10[0] = *param_2;
  TSet<UMovieSceneEntitySystem_*,DefaultKeyFuncs<UMovieSceneEntitySystem_*,0>,FDefaultSetAllocator>
  ::Emplace<UMovieSceneEntitySystem_*_const_&>
            (*(TSet<UMovieSceneEntitySystem_*,DefaultKeyFuncs<UMovieSceneEntitySystem_*,0>,FDefaultSetAllocator>
               **)param_1,&local_res8,(bool *)local_res10);
  return;
}

// Call @ 146125940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneEntitySystemLinker::HandlePostGarbageCollection'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
::Call(void *param_1,UMovieSceneEntitySystem **param_2)

{
  UMovieSceneEntitySystem *local_res8;
  UMovieSceneEntitySystem *local_res10 [3];
  
  local_res10[0] = *param_2;
  TSet<UMovieSceneEntitySystem_*,DefaultKeyFuncs<UMovieSceneEntitySystem_*,0>,FDefaultSetAllocator>
  ::Emplace<UMovieSceneEntitySystem_*_const_&>
            (*(TSet<UMovieSceneEntitySystem_*,DefaultKeyFuncs<UMovieSceneEntitySystem_*,0>,FDefaultSetAllocator>
               **)param_1,&local_res8,(bool *)local_res10);
  return;
}

// Call @ 146125970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneCachePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
::Call(void *param_1,UMovieSceneEntitySystem **param_2)

{
  `UMovieSceneCachePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 146125980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneRestorePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>,void,UMovieSceneEntitySystem_*>
::Call(void *param_1,UMovieSceneEntitySystem **param_2)

{
  `UMovieSceneRestorePreAnimatedStateSystem::OnRun'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 146125990

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::FDirectedGraph::ToString'::__l2::<lambda_1>,void,unsigned_short,TStringBuilderBase<wchar_t>_&>
::Call(void *param_1,ushort *param_2,TStringBuilderBase<wchar_t> *param_3)

{
  TStringBuilderBase<wchar_t>::AppendfImpl(param_3,L"Node %d");
  return;
}

// Call @ 146195e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::FPreAnimatedStateExtension::DiscardGlobalState'::__l2::<lambda_1>,void,UE::MovieScene::IPreAnimatedStorage_&,UE::MovieScene::FPreAnimatedStorageIndex>
::Call(void *param_1,IPreAnimatedStorage *param_2,FPreAnimatedStorageIndex *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000146195e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_2 + 0x28))(param_2,param_3->Value,1);
  return;
}

// Call @ 146195e90

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneNestedSequenceTransform::ExtractBoundariesWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
::Call(void *param_1,FFrameTime *param_2)

{
  bool bVar1;
  
  bVar1 = `FMovieSceneNestedSequenceTransform::ExtractBoundariesWithinRange'::__l2::<lambda_1>::
          operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 146195ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::FPreAnimatedStateExtension::RestoreGlobalState'::__l2::<lambda_1>,void,UE::MovieScene::IPreAnimatedStorage_&,UE::MovieScene::FPreAnimatedStorageIndex>
::Call(void *param_1,IPreAnimatedStorage *param_2,FPreAnimatedStorageIndex *param_3)

{
  (**(code **)(*(longlong *)param_2 + 0x20))(param_2,param_3->Value,1,0,param_1);
  return;
}

// Call @ 146195ed0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
::Call(void *param_1,FFrameTime *param_2)

{
  bool bVar1;
  
  bVar1 = `FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange'::__l2::<lambda_1>::
          operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 146195ee0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneInverseNestedSequenceTransform::TransformTimeWithinRange'::__l2::<lambda_1>,bool,FFrameTime>
::Call(void *param_1,FFrameTime *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  int local_res8;
  float fStackX_c;
  undefined8 local_res10;
  
  uVar1 = *(undefined8 *)(*(longlong *)param_1 + 0x10);
  fStackX_c = (*param_2).SubFrame;
  local_res10._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  auVar3 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - local_res10._4_4_)),1);
  fVar4 = (fStackX_c - local_res10._4_4_) - auVar3._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar4) {
    fVar4 = ::FFrameTime::MaxSubframe;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  _local_res8 = CONCAT44(fVar4,(int)auVar3._0_4_ + ((*param_2).FrameNumber.Value - (int)uVar1));
  local_res10 = uVar1;
  uVar2 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],&local_res8);
  return (bool)uVar2;
}

// Call @ 146195f60

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneSequenceTransform::ExtractBoundariesWithinRange'::__l10::<lambda_1>,bool,FFrameTime>
::Call(void *param_1,FFrameTime *param_2)

{
  bool bVar1;
  
  bVar1 = FMovieSceneInverseSequenceTransform::TransformTimeWithinRange
                    (*(FMovieSceneInverseSequenceTransform **)((longlong)param_1 + 8),*param_2,
                     *(TFunctionRef<bool___cdecl(FFrameTime)> **)param_1,
                     *(FMovieSceneTransformBreadcrumbs **)((longlong)param_1 + 0x10),
                     *(FMovieSceneTransformBreadcrumbs **)((longlong)param_1 + 0x18));
  return bVar1;
}

// Call @ 146195f90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneTrackInstanceSystem::OnRun'::__l10::<lambda_1>,void>::Call
          (void *param_1)

{
  UMovieSceneTrackInstanceSystem::EvaluateAllInstances(*(UMovieSceneTrackInstanceSystem **)param_1);
  return;
}

// Call @ 146195fa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange'::__l2::<lambda_2>,bool,FFrameTime>
::Call(void *param_1,FFrameTime *param_2)

{
  bool bVar1;
  
  bVar1 = `FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange'::__l2::<lambda_2>::
          operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 146195fb0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneInverseSequenceTransform::RecursiveTransformTimeWithinRange'::__l11::<lambda_2>,bool,FFrameTime>
::Call(void *param_1,FFrameTime *param_2)

{
  bool bVar1;
  
  bVar1 = `FMovieSceneInverseSequenceTransform::RecursiveTransformTimeWithinRange'::__l11::
          <lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14620a250

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneSpawnRegister::CleanUp'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&>
::Call(void *param_1,FGuid *param_2,ESpawnOwnership *param_3,FMovieSceneSequenceID *param_4)

{
  return true;
}

// Call @ 14620a260

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneSpawnRegister::CleanUpSequence'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&>
::Call(void *param_1,FGuid *param_2,ESpawnOwnership *param_3,FMovieSceneSequenceID *param_4)

{
  return param_4->Value == **(uint **)param_1;
}

// Call @ 14620a280

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneSpawnRegister::DestroyObjectsByPredicate'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&,int>
::Call(void *param_1,FGuid *param_2,ESpawnOwnership *param_3,FMovieSceneSequenceID *param_4,
      int *param_5)

{
  undefined1 uVar1;
  ESpawnOwnership local_res8 [32];
  
  local_res8[0] = *param_3;
  uVar1 = (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1],param_2,local_res8);
  return (bool)uVar1;
}

// Call @ 14620a2b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneSpawnRegister::OnSequenceExpired'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&>
::Call(void *param_1,FGuid *param_2,ESpawnOwnership *param_3,FMovieSceneSequenceID *param_4)

{
  if ((*param_3 == InnerSequence) && (**(uint **)param_1 == param_4->Value)) {
    return true;
  }
  return false;
}

// Call @ 14620a2d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneSequenceTickManager::RunLatentActions'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  UMovieSceneSequenceTickManager::FlushRunners(*(UMovieSceneSequenceTickManager **)param_1);
  return;
}

// Call @ 14620a2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneSequencePlayer::RunLatentActions'::__l8::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x418) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMovieSceneEntitySystemRunner::Flush(*(FMovieSceneEntitySystemRunner **)(lVar1 + 0x418),0.0,None);
  return;
}

// Call @ 14620a340

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::VisitSubTrackImpl'::__l9::<lambda_1>,bool,TRange<FFrameTime>_>::
Call(void *param_1,TRange<FFrameTime> *param_2)

{
  bool bVar1;
  TRange<FFrameTime> local_28;
  
  local_28.LowerBound.Type.Value = (param_2->LowerBound).Type.Value;
  local_28.LowerBound._1_3_ = *(undefined3 *)&(param_2->LowerBound).field_0x1;
  local_28.LowerBound.Value.FrameNumber.Value = (param_2->LowerBound).Value.FrameNumber.Value;
  local_28._8_8_ = *(undefined8 *)&(param_2->LowerBound).Value.SubFrame;
  local_28.UpperBound.Value = (param_2->UpperBound).Value;
  bVar1 = `UE::MovieScene::VisitSubTrackImpl'::__l9::<lambda_1>::operator()(param_1,&local_28);
  return bVar1;
}

// Call @ 14620a370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::FMutualInclusivityGraph::ReconstructCommandBuffer'::__l61::<lambda_2>,void,unsigned_short,TStringBuilderBase<wchar_t>_&>
::Call(void *param_1,ushort *param_2,TStringBuilderBase<wchar_t> *param_3)

{
  MovieScene::FComponentRegistry::GetComponentTypeChecked
            (*(FComponentRegistry **)param_1,(FComponentTypeID)*param_2);
  TStringBuilderBase<wchar_t>::AppendfImpl(param_3,L"\t\tnode%d[label=\"%s\"];\n");
  return;
}

// Call @ 1462a6710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>::ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleStringTask>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>
  ::ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleStringTask>'::__l2::
  <lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 1462a6740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<double>_>::ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleTask>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<double>_>::
  ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleTask>'::__l2::<lambda_1>::
  operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 1462a6770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>::ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatStringTask>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>::
  ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatStringTask>'::__l2::<lambda_1>
  ::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 1462a67a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<float>_>::ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatTask>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<float>_>::
  ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatTask>'::__l2::<lambda_1>::
  operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 1462a67d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>::ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FIntTask,TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>_*>'::__l2::<lambda_1>,void,UE::MovieScene::FEntityAllocationProxy,TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,FEntityAllocationProxy *param_2,
      TArray<TRelativePtr<void,unsigned_int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FEntityAllocationProxy local_18;
  
  local_18.Manager = param_2->Manager;
  local_18.AllocationIndex = param_2->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  `UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>::
  ScheduleImpl<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FIntTask,TSortedMap<UE::MovieScene::FMovieSceneEntityID,int,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FMovieSceneEntityID_const_&>_>_*>'
  ::__l2::<lambda_1>::operator()(param_1,&local_18,param_3);
  return;
}

// Call @ 1462a6800

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMovieSceneSubSection::GetSnapTimes'::__l2::<lambda_1>,bool,FFrameTime>::Call
          (void *param_1,FFrameTime *param_2)

{
  bool bVar1;
  
  bVar1 = `UMovieSceneSubSection::GetSnapTimes'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 1462a6810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MovieScene::ResolveProperty'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::
Call(void *param_1,TStringView<wchar_t> *param_2)

{
  undefined4 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ForElementType<TStringView<wchar_t>_> FVar8;
  
  FVar2 = *(ForElementType<TStringView<wchar_t>_> *)param_1;
  uVar3 = *(undefined4 *)&param_2->DataPtr;
  uVar4 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iVar5 = param_2->Size;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  iVar7 = *(int *)((ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x48))->InlineData;
  if (iVar7 == *(int *)((longlong)FVar2 + 0x4c)) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                      (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                       (int *)((longlong)FVar2 + 0x4c));
  }
  *(int *)((ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x48))->InlineData =
       iVar7 + 1;
  FVar8 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x40);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x40) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar8 = FVar2;
  }
  puVar1 = (undefined4 *)((longlong)FVar8 + (longlong)iVar7 * 0x10);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = iVar5;
  puVar1[3] = uVar6;
  return;
}

// Call @ 1462a6870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneTimeWarpVariant::Serialize'::__l2::<lambda_1>,void,FArchive_&,unsigned_char_&,void_*>
::Call(void *param_1,FArchive *param_2,uchar *param_3,void **param_4)

{
  `FMovieSceneTimeWarpVariant::Serialize'::__l2::<lambda_1>::operator()
            (param_1,param_2,param_3,*param_4);
  return;
}

// Call @ 1462a6880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneNumericVariant::Serialize'::__l5::<lambda_1>,void,FArchive_&,unsigned_char_&,void_*>
::Call(void *param_1,FArchive *param_2,uchar *param_3,void **param_4)

{
  `FMovieSceneNumericVariant::Serialize'::__l5::<lambda_1>::operator()
            (param_1,param_2,param_3,*param_4);
  return;
}

// Call @ 1462a6890

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l27::<lambda_1>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneFixedPlayRateStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneFixedPlayRateStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFixedPlayRateStruct,(UObject *)pUVar1,
                         L"MovieSceneFixedPlayRateStruct");
  }
  local_res8[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneFixedPlayRateStruct.OuterSingleton)->
              _padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 1462a68f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneNumericVariant::Serialize'::__l7::<lambda_2>,void,FArchive_&,unsigned_char_&,void_*>
::Call(void *param_1,FArchive *param_2,uchar *param_3,void **param_4)

{
  `FMovieSceneNumericVariant::Serialize'::__l7::<lambda_2>::operator()
            (param_1,param_2,param_3,*param_4);
  return;
}

// Call @ 1462a6900

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l31::<lambda_2>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct,
                         (UObject *)pUVar1,L"MovieSceneCustomTimeWarpGetterStruct");
  }
  local_res8[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneCustomTimeWarpGetterStruct.
              OuterSingleton)->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 1462a6960

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l35::<lambda_3>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpFixedFrame.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpFixedFrame.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFixedFrame,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpFixedFrame");
  }
  local_res8[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpFixedFrame.OuterSingleton)->
              _padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 1462a69c0

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l39::<lambda_4>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpFrameRate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpFrameRate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpFrameRate,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpFrameRate");
  }
  local_res8[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpFrameRate.OuterSingleton)->
              _padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 1462a6a20

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l43::<lambda_5>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoop.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoop.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoop,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpLoop");
  }
  local_res8[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoop.OuterSingleton)->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 1462a6a80

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l47::<lambda_6>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClamp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClamp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClamp,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpClamp");
  }
  local_res8[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClamp.OuterSingleton)->_padding_
  ;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 1462a6ae0

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l51::<lambda_7>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoopFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoopFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpLoopFloat,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpLoopFloat");
  }
  local_res8[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpLoopFloat.OuterSingleton)->
              _padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 1462a6b40

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMovieSceneTimeWarpVariant::ImportTextItem'::__l55::<lambda_8>,FString>::Call
          (FString *__return_storage_ptr__,void *param_1)

{
  UPackage *pUVar1;
  FName local_res8 [4];
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClampFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClampFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeWarpClampFloat,(UObject *)pUVar1,
                         L"MovieSceneTimeWarpClampFloat");
  }
  local_res8[0] =
       (FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTimeWarpClampFloat.OuterSingleton)->
              _padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}


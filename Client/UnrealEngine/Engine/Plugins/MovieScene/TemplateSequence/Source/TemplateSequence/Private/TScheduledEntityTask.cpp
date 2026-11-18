// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 3

// ScheduledRun_PerAllocation @ 14ac7fc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
  ForEachAllocationImpl<UE::MovieScene::FScaleFloatProperties_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
            ((FScaleFloatProperties *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerAllocation @ 14ac7fc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::ScheduledRun_PerAllocation
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>_>::
  ForEachAllocationImpl<UE::MovieScene::FScaleTransformProperties_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
            ((FScaleTransformProperties *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 14ac7fca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  TArrayView<TRelativePtr<void,unsigned_int>_const_,int> local_28;
  FEntityAllocationProxy local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_18.Manager = param_1->Manager;
  local_18.AllocationIndex = param_1->AllocationIndex;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
  ForEachEntityImpl<UE::MovieScene::FGatherPropertyScales_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
            ((FGatherPropertyScales *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
              *)(param_3 + 3));
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// ScheduledRun_PerAllocation @ 146153390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
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
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
  ForEachAllocationImpl<UE::MovieScene::FEvaluationHookUpdater_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
            ((FEvaluationHookUpdater *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
              *)(param_3 + 3));
  return;
}

// ScheduledRun_PerEntity @ 1461533d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
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
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
  ForEachEntityImpl<UE::MovieScene::FAssignEvalSecondsTask_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
            ((FAssignEvalSecondsTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 146153410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
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
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
  ForEachEntityImpl<UE::MovieScene::FAssignEvalTimesTask_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
            ((FAssignEvalTimesTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1462bac40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleStringTask,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>
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
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
  ForEachEntityImpl<_FMovieSceneCustomSchedulerTest::RunTest_::__l2::FDoubleStringTask_const_,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>
            ((FDoubleStringTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TWriteAccess<FString>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1462bac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FDoubleTask,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<double>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TRelativePtr<void,unsigned_int> *pTVar5;
  float fVar6;
  bool bVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  FEntityAllocationProxy local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar2 = param_2->ArrayNum;
  pTVar5 = param_2->DataPtr;
  if (iVar2 < 2) {
    local_48 = 1;
    local_40 = (longlong)iVar2;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = FEntityAllocationProxy::GetAllocation(&local_38);
  puVar9 = (uchar *)0x0;
  uVar3 = pTVar5[1].Offset;
  puVar10 = puVar9;
  if (uVar3 != 0xffffffff) {
    puVar10 = pFVar8->ComponentData + uVar3;
  }
  if (iVar2 < 1) {
    local_48 = 0;
    local_40 = (longlong)iVar2;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = FEntityAllocationProxy::GetAllocation(&local_38);
  uVar3 = pTVar5->Offset;
  puVar11 = puVar9;
  if (uVar3 != 0xffffffff) {
    puVar11 = pFVar8->ComponentData + uVar3;
  }
  pFVar8 = FEntityAllocationProxy::GetAllocation(&local_38);
  fVar6 = Factor;
  uVar1 = pFVar8->Size;
  if (uVar1 != 0) {
    do {
      *(double *)(puVar10 + (longlong)puVar9 * 8) =
           (double)*(int *)(puVar11 + (longlong)puVar9 * 4) * (double)fVar6;
      puVar9 = puVar9 + 1;
    } while ((longlong)puVar9 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ScheduledRun_PerEntity @ 1462bade0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatStringTask,UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>
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
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
  ForEachEntityImpl<_FMovieSceneCustomSchedulerTest::RunTest_::__l2::FFloatStringTask_const_,UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>
            ((FFloatStringTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<float>,UE::MovieScene::TWriteAccess<FString>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 1462bae20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FFloatTask,UE::MovieScene::TReadAccess<int>,UE::MovieScene::TWriteAccess<float>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  TRelativePtr<void,unsigned_int> *pTVar4;
  float fVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  ulonglong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  FEntityAllocationProxy local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar1 = param_2->ArrayNum;
  pTVar4 = param_2->DataPtr;
  if (iVar1 < 2) {
    local_48 = 1;
    local_40 = (longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = FEntityAllocationProxy::GetAllocation(&local_38);
  pfVar11 = (float *)0x0;
  uVar2 = pTVar4[1].Offset;
  pfVar9 = pfVar11;
  if (uVar2 != 0xffffffff) {
    pfVar9 = (float *)(pFVar7->ComponentData + uVar2);
  }
  if (iVar1 < 1) {
    local_48 = 0;
    local_40 = (longlong)iVar1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = FEntityAllocationProxy::GetAllocation(&local_38);
  uVar2 = pTVar4->Offset;
  if (uVar2 != 0xffffffff) {
    pfVar11 = (float *)(pFVar7->ComponentData + uVar2);
  }
  pFVar7 = FEntityAllocationProxy::GetAllocation(&local_38);
  fVar5 = Factor;
  uVar8 = (ulonglong)pFVar7->Size;
  if (pFVar7->Size != 0) {
    pfVar10 = pfVar9;
    do {
      *pfVar10 = (float)*(int *)((longlong)pfVar10 + ((longlong)pfVar11 - (longlong)pfVar9)) * fVar5
      ;
      uVar8 = uVar8 - 1;
      pfVar10 = pfVar10 + 1;
    } while (uVar8 != 0);
  }
  return;
}

// ScheduledRun_PerEntity @ 1462baf80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<`FMovieSceneCustomSchedulerTest::RunTest'::__l2::FIntTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>
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
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
  ForEachEntityImpl<_FMovieSceneCustomSchedulerTest::RunTest_::__l2::FIntTask_const_,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>
            ((FIntTask *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TWriteAccess<int>_>
              *)(param_3 + 2));
  return;
}


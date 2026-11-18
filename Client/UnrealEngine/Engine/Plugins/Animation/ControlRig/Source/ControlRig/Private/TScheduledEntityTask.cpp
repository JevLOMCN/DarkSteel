// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// ScheduledRun_PerAllocation @ 14a4558c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FGatherControlRigParameterValues,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
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
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>_>::
  ForEachAllocationImpl<UE::MovieScene::FGatherControlRigParameterValues_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
            ((FGatherControlRigParameterValues *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)(param_3 + 4));
  return;
}

// ScheduledRun_PerEntity @ 14a455900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateBaseControlRigs,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
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
  TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
  ForEachEntityImpl<UE::MovieScene::FEvaluateBaseControlRigs_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
            ((FEvaluateBaseControlRigs *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 14a455940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FEvaluateControlRigSpaceChannels,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
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
  ForEachEntityImpl<UE::MovieScene::FEvaluateControlRigSpaceChannels_const_,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
            ((FEvaluateControlRigSpaceChannels *)(param_3 + 1),&local_18,&local_28,param_4,
             (TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
              *)(param_3 + 2));
  return;
}

// ScheduledRun_PerEntity @ 14a455980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TScheduledEntityTask<UE::MovieScene::FResetDoNotKey,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TReadAccess<UE::MovieScene::FBaseControlRigEvalData>_>
::ScheduledRun_PerEntity
          (FEntityAllocationProxy *param_1,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_2,ITaskContext *param_3,
          FEntityAllocationWriteContext param_4)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FEntityAllocation *pFVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  FEntityAllocationProxy local_38;
  TRelativePtr<void,unsigned_int> *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_28 = param_2->DataPtr;
  uStack_20 = *(undefined8 *)&param_2->ArrayNum;
  local_38.Manager = param_1->Manager;
  local_38.AllocationIndex = param_1->AllocationIndex;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 2) {
    local_48 = 1;
    local_40 = (longlong)iVar3;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = FEntityAllocationProxy::GetAllocation(&local_38);
  plVar9 = (longlong *)0x0;
  plVar8 = plVar9;
  if (local_28[1].Offset != 0xffffffff) {
    plVar8 = (longlong *)(pFVar7->ComponentData + local_28[1].Offset);
  }
  if (iVar3 < 1) {
    local_48 = 0;
    local_40 = (longlong)iVar3;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FEntityAllocationProxy::GetAllocation(&local_38);
  pFVar7 = FEntityAllocationProxy::GetAllocation(&local_38);
  uVar2 = pFVar7->Size;
  if ((ulonglong)uVar2 != 0) {
    do {
      pbVar1 = (byte *)(plVar8 + 2);
      plVar9 = (longlong *)((longlong)plVar9 + 1);
      lVar4 = *plVar8;
      plVar8 = plVar8 + 3;
      *(byte *)(lVar4 + 0x408) = *pbVar1 >> 2 & 1;
    } while ((longlong)plVar9 < (longlong)(ulonglong)uVar2);
  }
  return;
}


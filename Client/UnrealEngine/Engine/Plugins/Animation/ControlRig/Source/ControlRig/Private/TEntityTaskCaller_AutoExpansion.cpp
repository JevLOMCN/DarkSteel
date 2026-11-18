// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// ForEachAllocationImpl<UE::MovieScene::FGatherControlRigParameterValues_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_> @ 14a398570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14>_>::
ForEachAllocationImpl<UE::MovieScene::FGatherControlRigParameterValues_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          (FGatherControlRigParameterValues *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FAccumulatedControlEntryIndex>,UE::MovieScene::TReadAccess<FName>,UE::MovieScene::TOptionalReadAccess<FMovieSceneControlRigSpaceBaseKey>,UE::MovieScene::TOptionalReadAccess<bool>,UE::MovieScene::TOptionalReadAccess<unsigned_char>,UE::MovieScene::TOptionalReadAccess<__int64>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  FMovieSceneControlRigSpaceBaseKey *pFVar6;
  FMovieSceneControlRigSpaceBaseKey *pFVar7;
  FMovieSceneControlRigSpaceBaseKey *pFVar8;
  FMovieSceneControlRigSpaceBaseKey *pFVar9;
  FMovieSceneControlRigSpaceBaseKey *pFVar10;
  undefined1 auStackY_138 [32];
  double *local_a8;
  double *local_a0;
  double *local_98;
  double *local_90;
  double *local_88;
  double *local_80;
  double *local_78;
  double *local_70;
  double *local_68;
  long64 *local_60;
  FEntityAllocationProxy local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FEntityAllocationProxy::GetAllocation(param_2);
  iVar1 = param_3->ArrayNum;
  if ((iVar1 < 0xf) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar6 = (FMovieSceneControlRigSpaceBaseKey *)0x0;
  uVar2 = param_3->DataPtr[0xe].Offset;
  if (uVar2 == 0xffffffff) {
    local_a8 = (double *)0x0;
  }
  else {
    local_a8 = (double *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 0xe) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[0xd].Offset;
  if (uVar2 == 0xffffffff) {
    local_a0 = (double *)0x0;
  }
  else {
    local_a0 = (double *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 0xd) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[0xc].Offset;
  if (uVar2 == 0xffffffff) {
    local_98 = (double *)0x0;
  }
  else {
    local_98 = (double *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 0xc) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[0xb].Offset;
  if (uVar2 == 0xffffffff) {
    local_90 = (double *)0x0;
  }
  else {
    local_90 = (double *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 0xb) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[10].Offset;
  if (uVar2 == 0xffffffff) {
    local_88 = (double *)0x0;
  }
  else {
    local_88 = (double *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[9].Offset;
  if (uVar2 == 0xffffffff) {
    local_80 = (double *)0x0;
  }
  else {
    local_80 = (double *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 9) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[8].Offset;
  if (uVar2 == 0xffffffff) {
    local_78 = (double *)0x0;
  }
  else {
    local_78 = (double *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[7].Offset;
  if (uVar2 == 0xffffffff) {
    local_70 = (double *)0x0;
  }
  else {
    local_70 = (double *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[6].Offset;
  if (uVar2 == 0xffffffff) {
    local_68 = (double *)0x0;
  }
  else {
    local_68 = (double *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[5].Offset;
  if (uVar2 == 0xffffffff) {
    local_60 = (long64 *)0x0;
  }
  else {
    local_60 = (long64 *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[4].Offset;
  pFVar9 = pFVar6;
  if (uVar2 != 0xffffffff) {
    pFVar9 = (FMovieSceneControlRigSpaceBaseKey *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[3].Offset;
  pFVar8 = pFVar6;
  if (uVar2 != 0xffffffff) {
    pFVar8 = (FMovieSceneControlRigSpaceBaseKey *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[2].Offset;
  pFVar10 = pFVar6;
  if (uVar2 != 0xffffffff) {
    pFVar10 = (FMovieSceneControlRigSpaceBaseKey *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[1].Offset;
  pFVar7 = pFVar6;
  if (uVar2 != 0xffffffff) {
    pFVar7 = (FMovieSceneControlRigSpaceBaseKey *)(pFVar5->ComponentData + uVar2);
  }
  if ((iVar1 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr->Offset;
  if (uVar2 != 0xffffffff) {
    pFVar6 = (FMovieSceneControlRigSpaceBaseKey *)(pFVar5->ComponentData + uVar2);
  }
  local_48.Manager = param_2->Manager;
  local_48.AllocationIndex = param_2->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FGatherControlRigParameterValues::ForEachAllocation
            (param_1,&local_48,(FAccumulatedControlEntryIndex *)pFVar6,(FName *)pFVar7,pFVar10,
             (bool *)pFVar8,&pFVar9->SpaceType,local_60,local_68,local_70,local_78,local_80,local_88
             ,local_90,local_98,local_a0,local_a8);
  return;
}

// ForEachEntityImpl<UE::MovieScene::FEvaluateBaseControlRigs_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_> @ 14a399050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6>_>::
ForEachEntityImpl<UE::MovieScene::FEvaluateBaseControlRigs_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
          (FEvaluateBaseControlRigs *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TReadAccess<UE::MovieScene::FControlRigSourceData>,UE::MovieScene::TWriteAccess<UE::MovieScene::FBaseControlRigEvalData>_>
          *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uchar *puVar10;
  FFrameTime *pFVar11;
  FFrameTime *pFVar12;
  FFrameTime *pFVar13;
  FFrameTime *pFVar14;
  uchar *puVar15;
  longlong lVar16;
  uchar *local_48;
  uchar *local_40;
  
  iVar2 = param_3->ArrayNum;
  if ((iVar2 < 7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar11 = (FFrameTime *)0x0;
  uVar3 = param_3->DataPtr[6].Offset;
  if (uVar3 == 0xffffffff) {
    local_48 = (uchar *)0x0;
  }
  else {
    local_48 = pFVar6->ComponentData + uVar3;
  }
  if ((iVar2 < 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar3 = param_3->DataPtr[5].Offset;
  if (uVar3 == 0xffffffff) {
    local_40 = (uchar *)0x0;
  }
  else {
    local_40 = pFVar6->ComponentData + uVar3;
  }
  if ((iVar2 < 5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar3 = param_3->DataPtr[4].Offset;
  pFVar14 = pFVar11;
  if (uVar3 != 0xffffffff) {
    pFVar14 = (FFrameTime *)(pFVar6->ComponentData + uVar3);
  }
  if ((iVar2 < 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar3 = param_3->DataPtr[3].Offset;
  pFVar13 = pFVar11;
  if (uVar3 != 0xffffffff) {
    pFVar13 = (FFrameTime *)(pFVar6->ComponentData + uVar3);
  }
  if ((iVar2 < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar3 = param_3->DataPtr[2].Offset;
  if (uVar3 != 0xffffffff) {
    pFVar11 = (FFrameTime *)(pFVar6->ComponentData + uVar3);
  }
  if ((iVar2 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar3 = param_3->DataPtr[1].Offset;
  if (uVar3 == 0xffffffff) {
    puVar10 = (uchar *)0x0;
  }
  else {
    puVar10 = pFVar6->ComponentData + uVar3;
  }
  if ((iVar2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar3 = param_3->DataPtr->Offset;
  if (uVar3 == 0xffffffff) {
    puVar15 = (uchar *)0x0;
  }
  else {
    puVar15 = pFVar6->ComponentData + uVar3;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar1 = pFVar6->Size;
  uVar7 = 0;
  if (uVar1 != 0) {
    lVar16 = (longlong)pFVar13 - (longlong)pFVar11;
    uVar9 = uVar7;
    do {
      lVar8 = (longlong)(int)uVar7;
      pFVar13 = pFVar14 + lVar8;
      if (pFVar14 == (FFrameTime *)0x0) {
        pFVar13 = (FFrameTime *)0x0;
      }
      pFVar12 = (FFrameTime *)(puVar10 + lVar8 * 4);
      if (puVar10 == (uchar *)0x0) {
        pFVar12 = (FFrameTime *)0x0;
      }
      FEvaluateBaseControlRigs::ForEachEntity
                (param_1,*(FRootInstanceHandle *)(puVar15 + uVar9 * 4),
                 (FMovieSceneSequenceID *)pFVar12,*pFVar11,
                 (float)*(double *)((longlong)pFVar11 + lVar16),(double *)pFVar13,
                 (FControlRigSourceData *)(local_40 + lVar8 * 8),
                 (FBaseControlRigEvalData *)(local_48 + lVar8 * 0x18));
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar9 = uVar9 + 1;
      pFVar11 = pFVar11 + 1;
    } while ((longlong)uVar9 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachEntityImpl<UE::MovieScene::FEvaluateControlRigSpaceChannels_const_,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_> @ 14a399420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
ForEachEntityImpl<UE::MovieScene::FEvaluateControlRigSpaceChannels_const_,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
          (FEvaluateControlRigSpaceChannels *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FMovieSceneControlRigSpaceChannel_const_*>,UE::MovieScene::TWriteAccess<FMovieSceneControlRigSpaceBaseKey>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  FFrameTime FVar5;
  float fVar6;
  bool bVar7;
  FEntityAllocation *pFVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  float fStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar1 = param_3->ArrayNum;
  if (iVar1 < 3) {
    local_58 = 2;
    local_50 = (longlong)iVar1;
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
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  puVar14 = (ulonglong *)0x0;
  uVar2 = param_3->DataPtr[2].Offset;
  puVar15 = puVar14;
  if (uVar2 != 0xffffffff) {
    puVar15 = (ulonglong *)(pFVar8->ComponentData + uVar2);
  }
  if (iVar1 < 2) {
    local_50 = (longlong)iVar1;
    local_58 = 1;
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
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr[1].Offset;
  puVar12 = puVar14;
  if (uVar2 != 0xffffffff) {
    puVar12 = (ulonglong *)(pFVar8->ComponentData + uVar2);
  }
  if (iVar1 < 1) {
    local_50 = (longlong)iVar1;
    local_58 = 0;
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
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar2 = param_3->DataPtr->Offset;
  puVar10 = puVar14;
  if (uVar2 != 0xffffffff) {
    puVar10 = (ulonglong *)(pFVar8->ComponentData + uVar2);
  }
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  fVar6 = __real_3f000000;
  if (pFVar8->Size != 0) {
    lVar13 = (longlong)puVar12 - (longlong)puVar10;
    uVar11 = (ulonglong)pFVar8->Size;
    fStack_44 = 0.0;
    do {
      uVar3 = *puVar10;
      local_40._4_4_ = (float)(uVar3 >> 0x20);
      uVar9 = uVar3;
      if (fVar6 <= local_40._4_4_) {
        uVar9 = (ulonglong)((int)uVar3 + 1);
      }
      local_48 = (int)uVar9;
      FVar5.SubFrame = fStack_44;
      FVar5.FrameNumber.Value = local_48;
      local_40 = uVar3;
      FMovieSceneControlRigSpaceChannel::Evaluate
                (*(FMovieSceneControlRigSpaceChannel **)((longlong)puVar10 + lVar13),FVar5,
                 (FMovieSceneControlRigSpaceBaseKey *)(puVar15 + (longlong)(int)puVar14 * 2));
      puVar14 = (ulonglong *)(ulonglong)((int)puVar14 + 1);
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}


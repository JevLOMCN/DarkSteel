// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 7

// ForEachAllocationImpl<UE::MovieScene::FScaleFloatProperties_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_> @ 14ac67be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::FScaleFloatProperties_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
          (FScaleFloatProperties *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  TReadOptional<FMovieSceneSequenceID> TVar6;
  TRead<UE::MovieScene::FRootInstanceHandle> TVar7;
  TRead<FMovieScenePropertyBinding> TVar8;
  TRead<FGuid> TVar9;
  TWrite<double> local_48;
  TReadOptional<double> local_40;
  
  FEntityAllocationProxy::GetAllocation(param_2);
  iVar1 = param_3->ArrayNum;
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
  TVar7 = (TRead<UE::MovieScene::FRootInstanceHandle>)0x0;
  uVar2 = param_3->DataPtr[5].Offset;
  if (uVar2 == 0xffffffff) {
    local_48 = (TWrite<double>)0x0;
  }
  else {
    local_48 = (TWrite<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  if (uVar2 == 0xffffffff) {
    local_40 = (TReadOptional<double>)0x0;
  }
  else {
    local_40 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  TVar9 = (TRead<FGuid>)TVar7;
  if (uVar2 != 0xffffffff) {
    TVar9 = (TRead<FGuid>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  TVar8 = (TRead<FMovieScenePropertyBinding>)TVar7;
  if (uVar2 != 0xffffffff) {
    TVar8 = (TRead<FMovieScenePropertyBinding>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  TVar6 = (TReadOptional<FMovieSceneSequenceID>)TVar7;
  if (uVar2 != 0xffffffff) {
    TVar6 = (TReadOptional<FMovieSceneSequenceID>)
            ((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
    TVar7 = (TRead<UE::MovieScene::FRootInstanceHandle>)
            ((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  FScaleFloatProperties::ForEachAllocation(param_1,pFVar5,TVar7,TVar6,TVar8,TVar9,local_40,local_48)
  ;
  return;
}

// ForEachAllocationImpl<UE::MovieScene::FScaleTransformProperties_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_> @ 14ac67ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>_>::
ForEachAllocationImpl<UE::MovieScene::FScaleTransformProperties_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          (FScaleTransformProperties *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  TReadOptional<FMovieSceneSequenceID> TVar6;
  TReadOptional<double> TVar7;
  TReadOptional<double> TVar8;
  TReadOptional<double> TVar9;
  TReadOptional<double> TVar10;
  TWriteOptional<double> TVar11;
  TReadOptional<double> TVar12;
  TReadOptional<double> TVar13;
  TWriteOptional<double> local_88;
  TWriteOptional<double> local_80;
  TWriteOptional<double> local_78;
  TWriteOptional<double> local_70;
  TWriteOptional<double> local_68;
  TRead<FGuid> local_60;
  TRead<FMovieScenePropertyBinding> local_58;
  TRead<UE::MovieScene::FRootInstanceHandle> local_50;
  
  FEntityAllocationProxy::GetAllocation(param_2);
  iVar1 = param_3->ArrayNum;
  if ((iVar1 < 0x10) &&
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
  TVar7 = (TReadOptional<double>)0x0;
  local_50 = (TRead<UE::MovieScene::FRootInstanceHandle>)0x0;
  uVar2 = param_3->DataPtr[0xf].Offset;
  if (uVar2 == 0xffffffff) {
    local_88 = (TWriteOptional<double>)0x0;
  }
  else {
    local_88 = (TWriteOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
  }
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
  uVar2 = param_3->DataPtr[0xe].Offset;
  if (uVar2 == 0xffffffff) {
    local_80 = (TWriteOptional<double>)0x0;
  }
  else {
    local_80 = (TWriteOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
    local_78 = (TWriteOptional<double>)0x0;
  }
  else {
    local_78 = (TWriteOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
    local_70 = (TWriteOptional<double>)0x0;
  }
  else {
    local_70 = (TWriteOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
    local_68 = (TWriteOptional<double>)0x0;
  }
  else {
    local_68 = (TWriteOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  TVar11 = (TWriteOptional<double>)TVar7;
  if (uVar2 != 0xffffffff) {
    TVar11 = (TWriteOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  TVar10 = TVar7;
  if (uVar2 != 0xffffffff) {
    TVar10 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  TVar13 = TVar7;
  if (uVar2 != 0xffffffff) {
    TVar13 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  TVar12 = TVar7;
  if (uVar2 != 0xffffffff) {
    TVar12 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  if (uVar2 != 0xffffffff) {
    TVar7 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
    TVar8 = (TReadOptional<double>)0x0;
  }
  else {
    TVar8 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  if (uVar2 == 0xffffffff) {
    TVar9 = (TReadOptional<double>)0x0;
  }
  else {
    TVar9 = (TReadOptional<double>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  if (uVar2 == 0xffffffff) {
    local_60 = (TRead<FGuid>)0x0;
  }
  else {
    local_60 = (TRead<FGuid>)((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  if (uVar2 == 0xffffffff) {
    local_58 = (TRead<FMovieScenePropertyBinding>)0x0;
  }
  else {
    local_58 = (TRead<FMovieScenePropertyBinding>)
               ((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
  if (uVar2 == 0xffffffff) {
    TVar6 = (TReadOptional<FMovieSceneSequenceID>)0x0;
  }
  else {
    TVar6 = (TReadOptional<FMovieSceneSequenceID>)
            ((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
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
    local_50 = (TRead<UE::MovieScene::FRootInstanceHandle>)
               ((ulonglong)uVar2 + (longlong)pFVar5->ComponentData);
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  FScaleTransformProperties::ForEachAllocation
            (param_1,pFVar5,local_50,TVar6,local_58,local_60,TVar9,TVar8,TVar7,TVar12,TVar13,TVar10,
             TVar11,local_68,local_70,local_78,local_80,local_88);
  return;
}

// ForEachAllocationImpl<UE::MovieScene::TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_> @ 14ac68700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
ForEachAllocationImpl<UE::MovieScene::TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_>
          (TGetPropertyValues<UE::MovieScene::FFloatPropertyTraits> *param_1,
          FEntityAllocationProxy *param_2,FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TWriteAccess<double>_>
          *param_4)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  int iVar3;
  TRead<UObject_*> TVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FEntityAllocation *pFVar8;
  TComponentLock<UE::MovieScene::TWrite<double>_> *pTVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  ulonglong uVar12;
  undefined1 auStackY_1c8 [32];
  TWriteAccess<double> local_198 [4];
  longlong local_190;
  longlong lStack_188;
  FComponentHeader *local_180;
  FEntityAllocationProxy *local_178;
  TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
  *local_170;
  TComponentLock<UE::MovieScene::TWrite<double>_> local_168;
  undefined1 local_148 [80];
  FComponentHeader *local_f8;
  EComponentHeaderLockMode local_f0;
  TRead<UObject_*> local_e8;
  undefined1 local_e0 [72];
  longlong local_98;
  ulonglong local_90;
  int local_88;
  TWrite<double> local_80;
  undefined1 local_78 [32];
  TWrite<double> local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_198[0] = *(TWriteAccess<double> *)&param_4->field_0xe;
  local_178 = param_2;
  local_170 = (TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
               *)param_1;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  pTVar9 = TWriteAccess<double>::LockComponentData(local_198,&local_168,pFVar8,param_3);
  local_50 = *(undefined4 *)&param_4->field_0xa;
  local_58 = *(TWrite<double> *)&param_4->field_0x2;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  TUnpackMultiComponentData<TIntegerSequence<int,0,1,2>,UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
  ::LockComponentData((TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
                       *)local_148,pFVar8,(FOptionalReadAccess *)&local_58,param_3);
  uVar1 = *(ushort *)param_4;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar11 = pFVar8->ComponentHeaders;
  pFVar10 = pFVar11 + pFVar8->NumComponents;
  for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 1) {
    if ((pFVar11->ComponentType).Value == uVar1) goto LAB_14ac687f8;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar11 = (FComponentHeader *)0x0;
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14ac687f8:
  EVar2 = pFVar8->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
  }
  LOCK();
  pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + 1);
  UNLOCK();
  uVar12 = *(ulonglong *)&pTVar9->field_0x8;
  iVar3 = *(int *)&pTVar9->field_0x10;
  local_e0._0_8_ = local_148._0_8_;
  local_e0._8_4_ = local_148._8_4_;
  local_e0._24_8_ = local_148._24_8_;
  local_e0._32_4_ = local_148._32_4_;
  local_e0._40_8_ = local_148._40_8_;
  local_e0._48_8_ = local_148._48_8_;
  local_e0._56_4_ = local_148._56_4_;
  TVar4 = (TRead<UObject_*>)pFVar11->Components;
  lVar5 = *(longlong *)pTVar9;
  *(undefined8 *)pTVar9 = 0;
  local_e0._64_8_ = local_148._64_8_;
  local_80 = *(TWrite<double> *)&pTVar9->field_0x18;
  *(undefined8 *)&pTVar9->field_0x18 = 0;
  local_e0._16_8_ = local_148._16_8_;
  local_f8 = pFVar11;
  local_f0 = EVar2;
  local_e8 = TVar4;
  local_98 = lVar5;
  local_90 = uVar12;
  local_88 = iVar3;
  local_58 = local_80;
  if (local_168._0_8_ != 0) {
    if ((ulonglong)local_168._8_8_ < *(ulonglong *)(local_168._0_8_ + 0x28)) {
      local_168._8_8_ = *(ulonglong *)(local_168._0_8_ + 0x28);
    }
    *(undefined8 *)(local_168._0_8_ + 0x28) = local_168._8_8_;
    LOCK();
    *(int *)(local_168._0_8_ + 0x30) = *(int *)(local_168._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_168._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_168._0_8_ + 0x20));
    }
  }
  local_190 = 0;
  if (local_148._16_8_ != 0) {
    local_190 = local_148._16_8_;
  }
  lStack_188 = 0;
  if (local_148._40_8_ != 0) {
    lStack_188 = local_148._40_8_;
  }
  local_180 = (FComponentHeader *)0x0;
  if ((FComponentHeader *)local_148._64_8_ != (FComponentHeader *)0x0) {
    local_180 = (FComponentHeader *)local_148._64_8_;
  }
  pFVar8 = FEntityAllocationProxy::GetAllocation(local_178);
  local_78._0_8_ = local_190;
  local_78._8_8_ = lStack_188;
  local_78._16_8_ = local_180;
  TGetPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,UE::MovieScene::TPropertyMetaData<>_>
  ::ForEachAllocation(local_170,pFVar8,TVar4,
                      (TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>,UE::MovieScene::TReadOptional<unsigned_short>,UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                       *)local_78,local_58);
  if (lVar5 != 0) {
    if (uVar12 < *(ulonglong *)(lVar5 + 0x28)) {
      uVar12 = *(ulonglong *)(lVar5 + 0x28);
    }
    *(ulonglong *)(lVar5 + 0x28) = uVar12;
    LOCK();
    *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x20));
    }
  }
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
              *)local_e0);
  if (local_f8 != (FComponentHeader *)0x0) {
    LOCK();
    local_f8->ScheduledAccessCount = (atomic<int>)((int)local_f8->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_f0 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_f8->ReadWriteLock);
    }
  }
  return;
}

// ForEachAllocationImpl<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_> @ 14ac689d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
ForEachAllocationImpl<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
          (FScaleFloatProperties *param_1,FEntityAllocationProxy *param_2,
          FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
          *param_4)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  TRead<FGuid> TVar5;
  TRead<FMovieScenePropertyBinding> TVar6;
  TRead<UE::MovieScene::FRootInstanceHandle> TVar7;
  longlong lVar8;
  TWrite<double> TVar9;
  code *pcVar10;
  bool bVar11;
  FEntityAllocation *pFVar12;
  TComponentLock<UE::MovieScene::TWrite<double>_> *pTVar13;
  FComponentHeader *pFVar14;
  ulonglong uVar15;
  FComponentHeader *pFVar16;
  FComponentHeader *pFVar17;
  FComponentHeader *pFVar18;
  FComponentHeader *pFVar19;
  FComponentHeader *pFVar20;
  int local_res20 [2];
  TReadOptional<FMovieSceneSequenceID> local_b8;
  EComponentHeaderLockMode local_b0;
  EComponentHeaderLockMode local_98;
  TReadOptional<double> local_90;
  TComponentLock<UE::MovieScene::TWrite<double>_> local_58;
  
  local_res20[0] = CONCAT22(local_res20[0]._2_2_,*(undefined2 *)&param_4->field_0xe);
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  pTVar13 = TWriteAccess<double>::LockComponentData
                      ((TWriteAccess<double> *)local_res20,&local_58,pFVar12,param_3);
  uVar1 = *(ushort *)&param_4->field_0xa;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar18 = pFVar12->ComponentHeaders;
  pFVar17 = pFVar18 + pFVar12->NumComponents;
  for (; pFVar18 != pFVar17; pFVar18 = pFVar18 + 1) {
    if ((pFVar18->ComponentType).Value == uVar1) {
      local_98 = pFVar12->LockMode;
      if (local_98 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
      }
      LOCK();
      pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + 1);
      UNLOCK();
      local_90 = (TReadOptional<double>)pFVar18->Components;
      goto LAB_14ac68a76;
    }
  }
  local_98 = LockFree;
  local_90 = (TReadOptional<double>)0x0;
  pFVar18 = (FComponentHeader *)0x0;
LAB_14ac68a76:
  uVar1 = *(ushort *)&param_4->field_0x8;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar17 = pFVar12->ComponentHeaders;
  pFVar20 = pFVar17 + pFVar12->NumComponents;
  for (; pFVar17 != pFVar20; pFVar17 = pFVar17 + 1) {
    if ((pFVar17->ComponentType).Value == uVar1) goto LAB_14ac68adc;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar17 = (FComponentHeader *)0x0;
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14ac68adc:
  EVar2 = pFVar12->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar17->ReadWriteLock);
  }
  LOCK();
  pFVar17->ScheduledAccessCount = (atomic<int>)((int)pFVar17->ScheduledAccessCount + 1);
  UNLOCK();
  TVar5 = (TRead<FGuid>)pFVar17->Components;
  uVar1 = *(ushort *)&param_4->field_0x6;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar20 = pFVar12->ComponentHeaders;
  pFVar14 = pFVar20 + pFVar12->NumComponents;
  for (; pFVar20 != pFVar14; pFVar20 = pFVar20 + 1) {
    if ((pFVar20->ComponentType).Value == uVar1) goto LAB_14ac68b5f;
  }
  pFVar20 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14ac68b5f:
  EVar3 = pFVar12->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
  }
  LOCK();
  pFVar20->ScheduledAccessCount = (atomic<int>)((int)pFVar20->ScheduledAccessCount + 1);
  UNLOCK();
  TVar6 = (TRead<FMovieScenePropertyBinding>)pFVar20->Components;
  uVar1 = *(ushort *)&param_4->field_0x2;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar14 = pFVar12->ComponentHeaders;
  pFVar19 = pFVar14 + pFVar12->NumComponents;
  for (; pFVar14 != pFVar19; pFVar14 = pFVar14 + 1) {
    if ((pFVar14->ComponentType).Value == uVar1) {
      local_b0 = pFVar12->LockMode;
      if (local_b0 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
      }
      LOCK();
      pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
      UNLOCK();
      local_b8 = (TReadOptional<FMovieSceneSequenceID>)pFVar14->Components;
      goto LAB_14ac68bd0;
    }
  }
  pFVar14 = (FComponentHeader *)0x0;
  local_b8 = (TReadOptional<FMovieSceneSequenceID>)0x0;
  local_b0 = LockFree;
LAB_14ac68bd0:
  uVar1 = *(ushort *)param_4;
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar19 = pFVar12->ComponentHeaders;
  pFVar16 = pFVar19 + pFVar12->NumComponents;
  for (; pFVar19 != pFVar16; pFVar19 = pFVar19 + 1) {
    if ((pFVar19->ComponentType).Value == uVar1) goto LAB_14ac68c45;
  }
  pFVar19 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14ac68c45:
  EVar4 = pFVar12->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar19->ReadWriteLock);
  }
  LOCK();
  pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + 1);
  UNLOCK();
  TVar7 = (TRead<UE::MovieScene::FRootInstanceHandle>)pFVar19->Components;
  uVar15 = *(ulonglong *)&pTVar13->field_0x8;
  lVar8 = *(longlong *)pTVar13;
  *(undefined8 *)pTVar13 = 0;
  local_res20[0] = *(int *)&pTVar13->field_0x10;
  TVar9 = *(TWrite<double> *)&pTVar13->field_0x18;
  *(undefined8 *)&pTVar13->field_0x18 = 0;
  if (local_58._0_8_ != 0) {
    if ((ulonglong)local_58._8_8_ < *(ulonglong *)(local_58._0_8_ + 0x28)) {
      local_58._8_8_ = *(ulonglong *)(local_58._0_8_ + 0x28);
    }
    *(undefined8 *)(local_58._0_8_ + 0x28) = local_58._8_8_;
    LOCK();
    *(int *)(local_58._0_8_ + 0x30) = *(int *)(local_58._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_58._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_58._0_8_ + 0x20));
    }
  }
  pFVar12 = FEntityAllocationProxy::GetAllocation(param_2);
  FScaleFloatProperties::ForEachAllocation
            (param_1,pFVar12,TVar7,local_b8,TVar6,TVar5,local_90,TVar9);
  if (lVar8 != 0) {
    if (uVar15 < *(ulonglong *)(lVar8 + 0x28)) {
      uVar15 = *(ulonglong *)(lVar8 + 0x28);
    }
    *(ulonglong *)(lVar8 + 0x28) = uVar15;
    LOCK();
    *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + -1;
    UNLOCK();
    if (local_res20[0] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x20));
    }
  }
  if (pFVar18 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_98 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
    }
  }
  LOCK();
  pFVar17->ScheduledAccessCount = (atomic<int>)((int)pFVar17->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar17->ReadWriteLock);
  }
  LOCK();
  pFVar20->ScheduledAccessCount = (atomic<int>)((int)pFVar20->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
  }
  if (pFVar14 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_b0 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
    }
  }
  LOCK();
  pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar19->ReadWriteLock);
  }
  return;
}

// ForEachAllocationImpl<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_> @ 14ac68e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>_>::
ForEachAllocationImpl<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          (FScaleTransformProperties *param_1,FEntityAllocationProxy *param_2,
          FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
          *param_4)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  code *pcVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> *pTVar6;
  TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_> *pTVar7;
  TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_> *pTVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  TReadAccess<UE::MovieScene::FRootInstanceHandle> local_res20 [4];
  TOptionalWriteAccess<double> local_3e8;
  TOptionalWriteAccess<double> local_3e4;
  TOptionalWriteAccess<double> local_3e0;
  TOptionalWriteAccess<double> local_3dc;
  TOptionalWriteAccess<double> local_3d8;
  TOptionalWriteAccess<double> local_3d4;
  TOptionalReadAccess<FMovieSceneSequenceID> local_3d0 [2];
  FComponentHeader *local_3c8;
  undefined8 local_3c0;
  uchar *local_3b8;
  FComponentHeader *local_3b0;
  undefined8 local_3a8;
  uchar *local_3a0;
  FComponentHeader *local_398;
  undefined8 local_390;
  uchar *local_388;
  FComponentHeader *local_380;
  undefined8 local_378;
  uchar *local_370;
  FComponentHeader *local_368;
  undefined8 local_360;
  uchar *local_358;
  FComponentHeader *local_350;
  undefined8 local_348;
  uchar *local_340;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> *local_338;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> *local_330;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> *local_328;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> *local_320;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> *local_318;
  FComponentHeader *local_310;
  EComponentHeaderLockMode local_308;
  uchar *local_300;
  FComponentHeader *local_2f8;
  EComponentHeaderLockMode local_2f0;
  uchar *local_2e8;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> local_2e0;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> local_2c0;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> local_2a0;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> local_280;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> local_260;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> local_240;
  TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_> local_220;
  TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_> local_208;
  undefined1 local_1e8 [40];
  TReadOptional<FMovieSceneSequenceID> local_1c0;
  TRead<FMovieScenePropertyBinding> local_1a8;
  TRead<FGuid> local_190;
  TReadOptional<double> local_178;
  TReadOptional<double> local_160;
  TReadOptional<double> local_148;
  TReadOptional<double> local_130;
  TReadOptional<double> local_118;
  TReadOptional<double> local_100;
  TWriteOptional<double> local_e0;
  TWriteOptional<double> local_c0;
  TWriteOptional<double> local_a0;
  TWriteOptional<double> local_80;
  TWriteOptional<double> local_60;
  TWriteOptional<double> local_40;
  
  local_3e8 = *(TOptionalWriteAccess<double> *)&param_4->field_0x36;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  pTVar6 = TOptionalWriteAccess<double>::LockComponentData(&local_3e8,&local_240,pFVar5,param_3);
  local_3e4 = *(TOptionalWriteAccess<double> *)&param_4->field_0x32;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_338 = TOptionalWriteAccess<double>::LockComponentData(&local_3e4,&local_260,pFVar5,param_3);
  local_3e0 = *(TOptionalWriteAccess<double> *)&param_4->field_0x2e;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_330 = TOptionalWriteAccess<double>::LockComponentData(&local_3e0,&local_280,pFVar5,param_3);
  local_3dc = *(TOptionalWriteAccess<double> *)&param_4->field_0x2a;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_328 = TOptionalWriteAccess<double>::LockComponentData(&local_3dc,&local_2a0,pFVar5,param_3);
  local_3d8 = *(TOptionalWriteAccess<double> *)&param_4->field_0x26;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_320 = TOptionalWriteAccess<double>::LockComponentData(&local_3d8,&local_2c0,pFVar5,param_3);
  local_3d4 = *(TOptionalWriteAccess<double> *)&param_4->field_0x22;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_318 = TOptionalWriteAccess<double>::LockComponentData(&local_3d4,&local_2e0,pFVar5,param_3);
  uVar1 = *(ushort *)&param_4->field_0x1e;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_350 = pFVar5->ComponentHeaders;
  pFVar10 = local_350 + pFVar5->NumComponents;
  for (; local_350 != pFVar10; local_350 = local_350 + 1) {
    if ((local_350->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_350->ReadWriteLock);
      }
      LOCK();
      local_350->ScheduledAccessCount = (atomic<int>)((int)local_350->ScheduledAccessCount + 1);
      UNLOCK();
      local_340 = local_350->Components;
      local_348._0_4_ = EVar2;
      goto LAB_14ac68fa0;
    }
  }
  local_348 = 0;
  local_350 = (FComponentHeader *)0x0;
  local_340 = (uchar *)0x0;
LAB_14ac68fa0:
  uVar1 = *(ushort *)&param_4->field_0x1a;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_368 = pFVar5->ComponentHeaders;
  pFVar10 = local_368 + pFVar5->NumComponents;
  for (; local_368 != pFVar10; local_368 = local_368 + 1) {
    if ((local_368->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_368->ReadWriteLock);
      }
      LOCK();
      local_368->ScheduledAccessCount = (atomic<int>)((int)local_368->ScheduledAccessCount + 1);
      UNLOCK();
      local_358 = local_368->Components;
      local_360._0_4_ = EVar2;
      goto LAB_14ac68fe1;
    }
  }
  local_360 = 0;
  local_368 = (FComponentHeader *)0x0;
  local_358 = (uchar *)0x0;
LAB_14ac68fe1:
  uVar1 = *(ushort *)&param_4->field_0x16;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_380 = pFVar5->ComponentHeaders;
  pFVar10 = local_380 + pFVar5->NumComponents;
  for (; local_380 != pFVar10; local_380 = local_380 + 1) {
    if ((local_380->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_380->ReadWriteLock);
      }
      LOCK();
      local_380->ScheduledAccessCount = (atomic<int>)((int)local_380->ScheduledAccessCount + 1);
      UNLOCK();
      local_370 = local_380->Components;
      local_378._0_4_ = EVar2;
      goto LAB_14ac69022;
    }
  }
  local_378 = 0;
  local_380 = (FComponentHeader *)0x0;
  local_370 = (uchar *)0x0;
LAB_14ac69022:
  uVar1 = *(ushort *)&param_4->field_0x12;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_398 = pFVar5->ComponentHeaders;
  pFVar10 = local_398 + pFVar5->NumComponents;
  for (; local_398 != pFVar10; local_398 = local_398 + 1) {
    if ((local_398->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_398->ReadWriteLock);
      }
      LOCK();
      local_398->ScheduledAccessCount = (atomic<int>)((int)local_398->ScheduledAccessCount + 1);
      UNLOCK();
      local_388 = local_398->Components;
      local_390._0_4_ = EVar2;
      goto LAB_14ac69063;
    }
  }
  local_390 = 0;
  local_398 = (FComponentHeader *)0x0;
  local_388 = (uchar *)0x0;
LAB_14ac69063:
  uVar1 = *(ushort *)&param_4->field_0xe;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_3b0 = pFVar5->ComponentHeaders;
  pFVar10 = local_3b0 + pFVar5->NumComponents;
  for (; local_3b0 != pFVar10; local_3b0 = local_3b0 + 1) {
    if ((local_3b0->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_3b0->ReadWriteLock);
      }
      LOCK();
      local_3b0->ScheduledAccessCount = (atomic<int>)((int)local_3b0->ScheduledAccessCount + 1);
      UNLOCK();
      local_3a0 = local_3b0->Components;
      local_3a8._0_4_ = EVar2;
      goto LAB_14ac690a4;
    }
  }
  local_3a8 = 0;
  local_3b0 = (FComponentHeader *)0x0;
  local_3a0 = (uchar *)0x0;
LAB_14ac690a4:
  uVar1 = *(ushort *)&param_4->field_0xa;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  local_3c8 = pFVar5->ComponentHeaders;
  pFVar10 = local_3c8 + pFVar5->NumComponents;
  for (; local_3c8 != pFVar10; local_3c8 = local_3c8 + 1) {
    if ((local_3c8->ComponentType).Value == uVar1) {
      EVar2 = pFVar5->LockMode;
      if (EVar2 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_3c8->ReadWriteLock);
      }
      LOCK();
      local_3c8->ScheduledAccessCount = (atomic<int>)((int)local_3c8->ScheduledAccessCount + 1);
      UNLOCK();
      local_3b8 = local_3c8->Components;
      local_3c0._0_4_ = EVar2;
      goto LAB_14ac690e5;
    }
  }
  local_3c0 = 0;
  local_3c8 = (FComponentHeader *)0x0;
  local_3b8 = (uchar *)0x0;
LAB_14ac690e5:
  uVar1 = *(ushort *)&param_4->field_0x8;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar10 = pFVar5->ComponentHeaders;
  pFVar9 = pFVar10 + pFVar5->NumComponents;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 1) {
    if ((pFVar10->ComponentType).Value == uVar1) goto LAB_14ac69148;
  }
  pFVar10 = (FComponentHeader *)0x0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ac69148:
  local_2f0 = pFVar5->LockMode;
  local_2f8 = pFVar10;
  if (local_2f0 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
  }
  LOCK();
  pFVar10->ScheduledAccessCount = (atomic<int>)((int)pFVar10->ScheduledAccessCount + 1);
  UNLOCK();
  local_2e8 = pFVar10->Components;
  uVar1 = *(ushort *)&param_4->field_0x6;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar10 = pFVar5->ComponentHeaders;
  pFVar9 = pFVar10 + pFVar5->NumComponents;
  for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 1) {
    if ((pFVar10->ComponentType).Value == uVar1) goto LAB_14ac691cd;
  }
  pFVar10 = (FComponentHeader *)0x0;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ac691cd:
  local_308 = pFVar5->LockMode;
  local_310 = pFVar10;
  if (local_308 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
  }
  LOCK();
  pFVar10->ScheduledAccessCount = (atomic<int>)((int)pFVar10->ScheduledAccessCount + 1);
  UNLOCK();
  local_300 = pFVar10->Components;
  local_3d0[0] = *(TOptionalReadAccess<FMovieSceneSequenceID> *)&param_4->field_0x2;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  pTVar7 = TOptionalReadAccess<FMovieSceneSequenceID>::LockComponentData
                     (local_3d0,&local_208,pFVar5,param_3);
  local_res20[0] = *(TReadAccess<UE::MovieScene::FRootInstanceHandle> *)param_4;
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  pTVar8 = TReadAccess<UE::MovieScene::FRootInstanceHandle>::LockComponentData
                     (local_res20,&local_220,pFVar5,param_3);
  ____0U__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE__U__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___12_U__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___12_U__TComponentLock_U__TRead_UFGuid___MovieScene_UE___12_U__TComponentLock_U__TReadOptional_N_MovieScene_UE___12_U612_U612_U612_U612_U612_U__TComponentLock_U__TWriteOptional_N_MovieScene_UE___12_U712_U712_U712_U712_U712____TTuple_U__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE__U__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___23_U__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___23_U__TComponentLock_U__TRead_UFGuid___MovieScene_UE___23_U__TComponentLock_U__TReadOptional_N_MovieScene_UE___23_U723_U723_U723_U723_U723_U__TComponentLock_U__TWriteOptional_N_MovieScene_UE___23_U823_U823_U823_U823_U823___QEAA___QEAU__TComponentLock_U__TRead_UFRootInstanceHandle_MovieScene_UE___MovieScene_UE___MovieScene_UE____QEAU__TComponentLock_U__TReadOptional_UFMovieSceneSequenceID___MovieScene_UE___23___QEAU__TComponentLock_U__TRead_UFMovieScenePropertyBinding___MovieScene_UE___23___QEAU__TComponentLock_U__TRead_UFGuid___MovieScene_UE___23___QEAU__TComponentLock_U__TReadOptional_N_MovieScene_UE___23_44444__QEAU__TComponentLock_U__TWriteOptional_N_MovieScene_UE___23_55555_Z
            (local_1e8,pTVar8,pTVar7,
             (TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_> *)&local_310,
             (TComponentLock<UE::MovieScene::TRead<FGuid>_> *)&local_2f8,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_3c8,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_3b0,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_398,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_380,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_368,
             (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)&local_350,local_318,
             local_320,local_328,local_330,local_338,pTVar6);
  if (local_220._0_8_ != 0) {
    LOCK();
    *(int *)(local_220._0_8_ + 0x30) = *(int *)(local_220._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_220._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_220._0_8_ + 0x20));
    }
  }
  if (local_208._0_8_ != 0) {
    LOCK();
    *(int *)(local_208._0_8_ + 0x30) = *(int *)(local_208._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_208._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_208._0_8_ + 0x20));
    }
  }
  if (local_310 != (FComponentHeader *)0x0) {
    LOCK();
    local_310->ScheduledAccessCount = (atomic<int>)((int)local_310->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_308 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_310->ReadWriteLock);
    }
  }
  if (local_2f8 != (FComponentHeader *)0x0) {
    LOCK();
    local_2f8->ScheduledAccessCount = (atomic<int>)((int)local_2f8->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_2f0 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_2f8->ReadWriteLock);
    }
  }
  if (local_3c8 != (FComponentHeader *)0x0) {
    LOCK();
    local_3c8->ScheduledAccessCount = (atomic<int>)((int)local_3c8->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_3c0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_3c8->ReadWriteLock);
    }
  }
  if (local_3b0 != (FComponentHeader *)0x0) {
    LOCK();
    local_3b0->ScheduledAccessCount = (atomic<int>)((int)local_3b0->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_3a8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_3b0->ReadWriteLock);
    }
  }
  if (local_398 != (FComponentHeader *)0x0) {
    LOCK();
    local_398->ScheduledAccessCount = (atomic<int>)((int)local_398->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_390 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_398->ReadWriteLock);
    }
  }
  if (local_380 != (FComponentHeader *)0x0) {
    LOCK();
    local_380->ScheduledAccessCount = (atomic<int>)((int)local_380->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_378 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_380->ReadWriteLock);
    }
  }
  if (local_368 != (FComponentHeader *)0x0) {
    LOCK();
    local_368->ScheduledAccessCount = (atomic<int>)((int)local_368->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_360 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_368->ReadWriteLock);
    }
  }
  if (local_350 != (FComponentHeader *)0x0) {
    LOCK();
    local_350->ScheduledAccessCount = (atomic<int>)((int)local_350->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_348 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&local_350->ReadWriteLock);
    }
  }
  if (local_2e0._0_8_ != 0) {
    if ((ulonglong)local_2e0._8_8_ < *(ulonglong *)(local_2e0._0_8_ + 0x28)) {
      local_2e0._8_8_ = *(ulonglong *)(local_2e0._0_8_ + 0x28);
    }
    *(undefined8 *)(local_2e0._0_8_ + 0x28) = local_2e0._8_8_;
    LOCK();
    *(int *)(local_2e0._0_8_ + 0x30) = *(int *)(local_2e0._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_2e0._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_2e0._0_8_ + 0x20));
    }
  }
  if (local_2c0._0_8_ != 0) {
    if ((ulonglong)local_2c0._8_8_ < *(ulonglong *)(local_2c0._0_8_ + 0x28)) {
      local_2c0._8_8_ = *(ulonglong *)(local_2c0._0_8_ + 0x28);
    }
    *(undefined8 *)(local_2c0._0_8_ + 0x28) = local_2c0._8_8_;
    LOCK();
    *(int *)(local_2c0._0_8_ + 0x30) = *(int *)(local_2c0._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_2c0._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_2c0._0_8_ + 0x20));
    }
  }
  if (local_2a0._0_8_ != 0) {
    if ((ulonglong)local_2a0._8_8_ < *(ulonglong *)(local_2a0._0_8_ + 0x28)) {
      local_2a0._8_8_ = *(ulonglong *)(local_2a0._0_8_ + 0x28);
    }
    *(undefined8 *)(local_2a0._0_8_ + 0x28) = local_2a0._8_8_;
    LOCK();
    *(int *)(local_2a0._0_8_ + 0x30) = *(int *)(local_2a0._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_2a0._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_2a0._0_8_ + 0x20));
    }
  }
  if (local_280._0_8_ != 0) {
    if ((ulonglong)local_280._8_8_ < *(ulonglong *)(local_280._0_8_ + 0x28)) {
      local_280._8_8_ = *(ulonglong *)(local_280._0_8_ + 0x28);
    }
    *(undefined8 *)(local_280._0_8_ + 0x28) = local_280._8_8_;
    LOCK();
    *(int *)(local_280._0_8_ + 0x30) = *(int *)(local_280._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_280._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_280._0_8_ + 0x20));
    }
  }
  if (local_260._0_8_ != 0) {
    if ((ulonglong)local_260._8_8_ < *(ulonglong *)(local_260._0_8_ + 0x28)) {
      local_260._8_8_ = *(ulonglong *)(local_260._0_8_ + 0x28);
    }
    *(undefined8 *)(local_260._0_8_ + 0x28) = local_260._8_8_;
    LOCK();
    *(int *)(local_260._0_8_ + 0x30) = *(int *)(local_260._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_260._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_260._0_8_ + 0x20));
    }
  }
  if (local_240._0_8_ != 0) {
    if ((ulonglong)local_240._8_8_ < *(ulonglong *)(local_240._0_8_ + 0x28)) {
      local_240._8_8_ = *(ulonglong *)(local_240._0_8_ + 0x28);
    }
    *(undefined8 *)(local_240._0_8_ + 0x28) = local_240._8_8_;
    LOCK();
    *(int *)(local_240._0_8_ + 0x30) = *(int *)(local_240._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_240._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_240._0_8_ + 0x20));
    }
  }
  pFVar5 = FEntityAllocationProxy::GetAllocation(param_2);
  FScaleTransformProperties::ForEachAllocation
            (param_1,pFVar5,(TRead<UE::MovieScene::FRootInstanceHandle>)local_1e8._16_8_,local_1c0,
             local_1a8,local_190,local_178,local_160,local_148,local_130,local_118,local_100,
             local_e0,local_c0,local_a0,local_80,local_60,local_40);
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
              *)local_1e8);
  return;
}

// ForEachEntityImpl<UE::MovieScene::FGatherPropertyScales_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_> @ 14ac697c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
ForEachEntityImpl<UE::MovieScene::FGatherPropertyScales_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
          (FGatherPropertyScales *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
          *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  FEntityAllocation *pFVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar2 = param_3->ArrayNum;
  if (iVar2 < 3) {
    local_58 = 2;
    local_50 = (longlong)iVar2;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  puVar10 = (uchar *)0x0;
  uVar3 = param_3->DataPtr[2].Offset;
  puVar8 = puVar10;
  if (uVar3 != 0xffffffff) {
    puVar8 = pFVar6->ComponentData + uVar3;
  }
  if (iVar2 < 2) {
    local_50 = (longlong)iVar2;
    local_58 = 1;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar3 = param_3->DataPtr[1].Offset;
  puVar7 = puVar10;
  if (uVar3 != 0xffffffff) {
    puVar7 = pFVar6->ComponentData + uVar3;
  }
  if (iVar2 < 1) {
    local_50 = (longlong)iVar2;
    local_58 = 0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar3 = param_3->DataPtr->Offset;
  puVar9 = puVar10;
  if (uVar3 != 0xffffffff) {
    puVar9 = pFVar6->ComponentData + uVar3;
  }
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_2);
  uVar1 = pFVar6->Size;
  if (uVar1 != 0) {
    puVar7 = puVar7 + 4;
    do {
      local_48._0_1_ = puVar7[0x24];
      local_48._1_1_ = puVar7[0x25];
      local_48._2_1_ = puVar7[0x26];
      local_48._3_1_ = puVar7[0x27];
      local_40._0_1_ = puVar9[0];
      local_40._1_1_ = puVar9[1];
      local_40._2_1_ = puVar9[2];
      local_40._3_1_ = puVar9[3];
      local_48._4_4_ = (float)*(double *)(puVar8 + (longlong)puVar10 * 8);
      local_40._4_1_ = puVar7[-4];
      local_40._5_1_ = puVar7[-3];
      local_40._6_1_ = puVar7[-2];
      local_40._7_1_ = puVar7[-1];
      local_40._24_1_ = puVar7[0x18];
      local_40._25_1_ = puVar7[0x19];
      local_40._26_1_ = puVar7[0x1a];
      local_40._27_1_ = puVar7[0x1b];
      local_40._28_1_ = puVar7[0x1c];
      local_40._29_1_ = puVar7[0x1d];
      local_40._30_1_ = puVar7[0x1e];
      local_40._31_1_ = puVar7[0x1f];
      local_40._8_1_ = puVar7[0];
      local_40._9_1_ = puVar7[1];
      local_40._10_1_ = puVar7[2];
      local_40._11_1_ = puVar7[3];
      local_40._12_1_ = puVar7[4];
      local_40._13_1_ = puVar7[5];
      local_40._14_1_ = puVar7[6];
      local_40._15_1_ = puVar7[7];
      local_40._16_1_ = puVar7[8];
      local_40._17_1_ = puVar7[9];
      local_40._18_1_ = puVar7[10];
      local_40._19_1_ = puVar7[0xb];
      local_40._20_1_ = puVar7[0xc];
      local_40._21_1_ = puVar7[0xd];
      local_40._22_1_ = puVar7[0xe];
      local_40._23_1_ = puVar7[0xf];
      UTemplateSequencePropertyScalingEvaluatorSystem::AddPropertyScale
                (param_1->EvaluatorSystem,&local_40,
                 (TTuple<ETemplateSectionPropertyScaleType,float> *)&local_48);
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 4;
      puVar7 = puVar7 + 0x2c;
    } while ((longlong)puVar10 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachEntityImpl<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_> @ 14ac699c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
ForEachEntityImpl<UE::MovieScene::FGatherPropertyScales,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
          (FGatherPropertyScales *param_1,FEntityAllocationProxy *param_2,
          FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TReadAccess<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>,UE::MovieScene::TReadAccess<double>_>
          *param_4)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  uchar *puVar10;
  FComponentHeader *pFVar11;
  FComponentHeader *pFVar12;
  uchar *puVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *local_80;
  undefined8 local_78;
  uchar *local_70;
  uchar *local_68;
  TTuple<UE::MovieScene::FRootInstanceHandle,FMovieSceneSequenceID,FGuid,FName> local_60;
  
  uVar1 = *(ushort *)&param_4->field_0x4;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar14 = (FComponentHeader *)0x0;
  local_80 = pFVar8->ComponentHeaders;
  pFVar12 = local_80 + pFVar8->NumComponents;
  for (; local_80 != pFVar12; local_80 = local_80 + 1) {
    if ((local_80->ComponentType).Value == uVar1) goto LAB_14ac69a53;
  }
  local_80 = (FComponentHeader *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14ac69a53:
  EVar2 = pFVar8->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_80->ReadWriteLock);
  }
  LOCK();
  local_80->ScheduledAccessCount = (atomic<int>)((int)local_80->ScheduledAccessCount + 1);
  UNLOCK();
  local_68 = local_80->Components;
  uVar1 = *(ushort *)&param_4->field_0x2;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar12 = pFVar8->ComponentHeaders;
  pFVar11 = pFVar12 + pFVar8->NumComponents;
  for (; pFVar12 != pFVar11; pFVar12 = pFVar12 + 1) {
    if ((pFVar12->ComponentType).Value == uVar1) goto LAB_14ac69ad8;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar12 = pFVar14;
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14ac69ad8:
  EVar3 = pFVar8->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
  }
  LOCK();
  pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
  UNLOCK();
  local_70 = pFVar12->Components;
  uVar1 = *(ushort *)param_4;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar11 = pFVar8->ComponentHeaders;
  pFVar9 = pFVar11 + pFVar8->NumComponents;
  for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 1) {
    if ((pFVar11->ComponentType).Value == uVar1) goto LAB_14ac69b59;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar11 = pFVar14;
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14ac69b59:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
  }
  LOCK();
  pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + 1);
  UNLOCK();
  puVar13 = pFVar11->Components;
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_2);
  puVar6 = local_68;
  uVar1 = pFVar8->Size;
  if (uVar1 != 0) {
    puVar10 = local_70 + 4;
    do {
      local_78._0_1_ = puVar10[0x24];
      local_78._1_1_ = puVar10[0x25];
      local_78._2_1_ = puVar10[0x26];
      local_78._3_1_ = puVar10[0x27];
      local_60._0_1_ = puVar13[0];
      local_60._1_1_ = puVar13[1];
      local_60._2_1_ = puVar13[2];
      local_60._3_1_ = puVar13[3];
      local_78._4_4_ = (float)*(double *)(puVar6 + (longlong)pFVar14 * 8);
      local_60._4_1_ = puVar10[-4];
      local_60._5_1_ = puVar10[-3];
      local_60._6_1_ = puVar10[-2];
      local_60._7_1_ = puVar10[-1];
      local_60._24_1_ = puVar10[0x18];
      local_60._25_1_ = puVar10[0x19];
      local_60._26_1_ = puVar10[0x1a];
      local_60._27_1_ = puVar10[0x1b];
      local_60._28_1_ = puVar10[0x1c];
      local_60._29_1_ = puVar10[0x1d];
      local_60._30_1_ = puVar10[0x1e];
      local_60._31_1_ = puVar10[0x1f];
      local_60._8_1_ = puVar10[0];
      local_60._9_1_ = puVar10[1];
      local_60._10_1_ = puVar10[2];
      local_60._11_1_ = puVar10[3];
      local_60._12_1_ = puVar10[4];
      local_60._13_1_ = puVar10[5];
      local_60._14_1_ = puVar10[6];
      local_60._15_1_ = puVar10[7];
      local_60._16_1_ = puVar10[8];
      local_60._17_1_ = puVar10[9];
      local_60._18_1_ = puVar10[10];
      local_60._19_1_ = puVar10[0xb];
      local_60._20_1_ = puVar10[0xc];
      local_60._21_1_ = puVar10[0xd];
      local_60._22_1_ = puVar10[0xe];
      local_60._23_1_ = puVar10[0xf];
      UTemplateSequencePropertyScalingEvaluatorSystem::AddPropertyScale
                (param_1->EvaluatorSystem,&local_60,
                 (TTuple<ETemplateSectionPropertyScaleType,float> *)&local_78);
      pFVar14 = (FComponentHeader *)((longlong)&pFVar14->_padding_ + 1);
      puVar13 = puVar13 + 4;
      puVar10 = puVar10 + 0x2c;
    } while ((longlong)pFVar14 < (longlong)(ulonglong)uVar1);
  }
  LOCK();
  local_80->ScheduledAccessCount = (atomic<int>)((int)local_80->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_80->ReadWriteLock);
  }
  LOCK();
  pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
  }
  LOCK();
  pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
  }
  return;
}


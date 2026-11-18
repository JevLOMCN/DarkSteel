// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// ForEachAllocationImpl<UE::MovieScene::FBoundObjectTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*_(__cdecl*)(UObject_*)>_> @ 1460763e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
ForEachAllocationImpl<UE::MovieScene::FBoundObjectTask,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*_(__cdecl*)(UObject_*)>_>
          (FBoundObjectTask *param_1,FEntityAllocationProxy *param_2,
          FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<UObject_*_(__cdecl*)(UObject_*)>_>
          *param_4)

{
  ushort uVar1;
  EComponentHeaderLockMode EVar2;
  EComponentHeaderLockMode EVar3;
  TRead<FGuid> TVar4;
  TRead<UE::MovieScene::FInstanceHandle> TVar5;
  code *pcVar6;
  FComponentHeader *pFVar7;
  bool bVar8;
  FEntityAllocation *pFVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  FComponentHeader *pFVar12;
  EComponentHeaderLockMode EVar13;
  FEntityAllocationProxy local_68;
  FComponentHeader *local_58;
  undefined8 local_50;
  TReadOptional<UObject_*_(__cdecl*)(UObject_*)> local_48;
  
  uVar1 = *(ushort *)&param_4->field_0x6;
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_2);
  EVar13 = LockFree;
  local_58 = pFVar9->ComponentHeaders;
  pFVar12 = local_58 + pFVar9->NumComponents;
  for (; local_58 != pFVar12; local_58 = local_58 + 1) {
    if ((local_58->ComponentType).Value == uVar1) {
      EVar13 = pFVar9->LockMode;
      if (EVar13 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_58->ReadWriteLock);
      }
      LOCK();
      local_58->ScheduledAccessCount = (atomic<int>)((int)local_58->ScheduledAccessCount + 1);
      UNLOCK();
      local_48 = (TReadOptional<UObject_*_(__cdecl*)(UObject_*)>)local_58->Components;
      local_50 = CONCAT44(local_50._4_4_,EVar13);
      goto LAB_14607645e;
    }
  }
  local_50 = 0;
  local_58 = (FComponentHeader *)0x0;
  local_48 = (TReadOptional<UObject_*_(__cdecl*)(UObject_*)>)0x0;
LAB_14607645e:
  pFVar7 = local_58;
  uVar1 = *(ushort *)&param_4->field_0x4;
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar12 = pFVar9->ComponentHeaders;
  pFVar11 = pFVar12 + pFVar9->NumComponents;
  for (; pFVar12 != pFVar11; pFVar12 = pFVar12 + 1) {
    if ((pFVar12->ComponentType).Value == uVar1) goto LAB_1460764c4;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar12 = (FComponentHeader *)0x0;
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1460764c4:
  EVar2 = pFVar9->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
  }
  LOCK();
  pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + 1);
  UNLOCK();
  TVar4 = (TRead<FGuid>)pFVar12->Components;
  uVar1 = *(ushort *)&param_4->field_0x2;
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_2);
  pFVar11 = pFVar9->ComponentHeaders;
  pFVar10 = pFVar11 + pFVar9->NumComponents;
  for (; pFVar11 != pFVar10; pFVar11 = pFVar11 + 1) {
    if ((pFVar11->ComponentType).Value == uVar1) goto LAB_146076551;
  }
  pFVar11 = (FComponentHeader *)0x0;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_146076551:
  EVar3 = pFVar9->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
  }
  LOCK();
  pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + 1);
  UNLOCK();
  TVar5 = (TRead<UE::MovieScene::FInstanceHandle>)pFVar11->Components;
  pFVar9 = FEntityAllocationProxy::GetAllocation(param_2);
  local_68.Manager = param_2->Manager;
  local_68.AllocationIndex = param_2->AllocationIndex;
  local_68._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FBoundObjectTask::ForEachAllocation
            (param_1,&local_68,(TRead<UE::MovieScene::FMovieSceneEntityID>)pFVar9->EntityIDs,TVar5,
             TVar4,local_48);
  if (pFVar7 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar7->ScheduledAccessCount = (atomic<int>)((int)pFVar7->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar13 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar7->ReadWriteLock);
    }
  }
  LOCK();
  pFVar12->ScheduledAccessCount = (atomic<int>)((int)pFVar12->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar12->ReadWriteLock);
  }
  LOCK();
  pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
  }
  return;
}

// ForEachAllocationImpl<UE::MovieScene::FEvaluationHookUpdater_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_> @ 14610baa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
ForEachAllocationImpl<UE::MovieScene::FEvaluationHookUpdater_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
          (FEvaluationHookUpdater *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
          *param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  TRead<UE::MovieScene::FInstanceHandle> TVar5;
  TRead<FMovieSceneEvaluationHookComponent> TVar6;
  TWrite<UE::MovieScene::FEvaluationHookFlags> TVar7;
  TRead<FFrameTime> TVar8;
  undefined1 auStackY_78 [32];
  FEntityAllocationProxy local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_78;
  iVar1 = param_3->ArrayNum;
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
  TVar5 = (TRead<UE::MovieScene::FInstanceHandle>)0x0;
  uVar2 = param_3->DataPtr[3].Offset;
  TVar7 = (TWrite<UE::MovieScene::FEvaluationHookFlags>)TVar5;
  if (uVar2 != 0xffffffff) {
    TVar7 = (TWrite<UE::MovieScene::FEvaluationHookFlags>)
            ((ulonglong)uVar2 +
            *(longlong *)
             (*(longlong *)
               (*(longlong *)&param_2->Manager->EntityAllocations +
               (longlong)param_2->AllocationIndex * 8) + 0x20));
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
  uVar2 = param_3->DataPtr[2].Offset;
  TVar8 = (TRead<FFrameTime>)TVar5;
  if (uVar2 != 0xffffffff) {
    TVar8 = (TRead<FFrameTime>)
            ((ulonglong)uVar2 +
            *(longlong *)
             (*(longlong *)
               (*(longlong *)&param_2->Manager->EntityAllocations +
               (longlong)param_2->AllocationIndex * 8) + 0x20));
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
  uVar2 = param_3->DataPtr[1].Offset;
  TVar6 = (TRead<FMovieSceneEvaluationHookComponent>)TVar5;
  if (uVar2 != 0xffffffff) {
    TVar6 = (TRead<FMovieSceneEvaluationHookComponent>)
            ((ulonglong)uVar2 +
            *(longlong *)
             (*(longlong *)
               (*(longlong *)&param_2->Manager->EntityAllocations +
               (longlong)param_2->AllocationIndex * 8) + 0x20));
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
  uVar2 = param_3->DataPtr->Offset;
  if (uVar2 != 0xffffffff) {
    TVar5 = (TRead<UE::MovieScene::FInstanceHandle>)
            ((ulonglong)uVar2 +
            *(longlong *)
             (*(longlong *)
               (*(longlong *)&param_2->Manager->EntityAllocations +
               (longlong)param_2->AllocationIndex * 8) + 0x20));
  }
  local_48.Manager = param_2->Manager;
  local_48.AllocationIndex = param_2->AllocationIndex;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FEvaluationHookUpdater::ForEachAllocation(param_1,&local_48,TVar5,TVar6,TVar8,TVar7);
  return;
}

// ForEachAllocationImpl<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_> @ 14610bcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
ForEachAllocationImpl<UE::MovieScene::FEvaluationHookUpdater,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
          (FEvaluationHookUpdater *param_1,FEntityAllocationProxy *param_2,
          FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FMovieSceneEvaluationHookComponent>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FEvaluationHookFlags>_>
          *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  TWrite<UE::MovieScene::FEvaluationHookFlags> TVar7;
  TRead<FFrameTime> TVar8;
  TRead<FMovieSceneEvaluationHookComponent> TVar9;
  code *pcVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_c8 [24];
  longlong local_b0;
  int local_a8;
  TRead<FMovieSceneEvaluationHookComponent> local_a0;
  longlong local_98;
  int local_90;
  TRead<FFrameTime> local_88;
  longlong local_80;
  ulong64 local_78;
  int local_70;
  TWrite<UE::MovieScene::FEvaluationHookFlags> local_68;
  FEntityAllocationProxy local_58;
  
  lVar6 = *(longlong *)
           (*(longlong *)&param_2->Manager->EntityAllocations +
           (longlong)param_2->AllocationIndex * 8);
  lVar15 = *(longlong *)(lVar6 + 0x28);
  lVar16 = (ulonglong)*(ushort *)(lVar6 + 0xc) * 0x38 + lVar15;
  for (; lVar15 != lVar16; lVar15 = lVar15 + 0x38) {
    if (*(short *)(lVar15 + 0x36) == *(short *)&param_4->field_0x6) goto LAB_14610bd4b;
  }
  lVar15 = 0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14610bd4b:
  iVar3 = *(int *)(lVar6 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar15 + 0x20));
  }
  LOCK();
  piVar1 = (int *)(lVar15 + 0x30);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TVar7 = *(TWrite<UE::MovieScene::FEvaluationHookFlags> *)(lVar15 + 0x18);
  lVar6 = *(longlong *)
           (*(longlong *)&param_2->Manager->EntityAllocations +
           (longlong)param_2->AllocationIndex * 8);
  lVar16 = *(longlong *)(lVar6 + 0x28);
  lVar12 = (ulonglong)*(ushort *)(lVar6 + 0xc) * 0x38 + lVar16;
  for (; lVar16 != lVar12; lVar16 = lVar16 + 0x38) {
    if (*(short *)(lVar16 + 0x36) == *(short *)&param_4->field_0x4) goto LAB_14610bdfe;
  }
  lVar16 = 0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14610bdfe:
  iVar2 = *(int *)(lVar6 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar16 + 0x20));
  }
  LOCK();
  *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
  UNLOCK();
  TVar8 = *(TRead<FFrameTime> *)(lVar16 + 0x18);
  lVar6 = *(longlong *)
           (*(longlong *)&param_2->Manager->EntityAllocations +
           (longlong)param_2->AllocationIndex * 8);
  lVar12 = *(longlong *)(lVar6 + 0x28);
  lVar13 = (ulonglong)*(ushort *)(lVar6 + 0xc) * 0x38 + lVar12;
  for (; lVar12 != lVar13; lVar12 = lVar12 + 0x38) {
    if (*(short *)(lVar12 + 0x36) == *(short *)&param_4->field_0x2) goto LAB_14610be89;
  }
  lVar12 = 0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14610be89:
  iVar4 = *(int *)(lVar6 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar12 + 0x20));
  }
  LOCK();
  *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
  UNLOCK();
  TVar9 = *(TRead<FMovieSceneEvaluationHookComponent> *)(lVar12 + 0x18);
  lVar6 = *(longlong *)
           (*(longlong *)&param_2->Manager->EntityAllocations +
           (longlong)param_2->AllocationIndex * 8);
  lVar13 = *(longlong *)(lVar6 + 0x28);
  lVar14 = (ulonglong)*(ushort *)(lVar6 + 0xc) * 0x38 + lVar13;
  for (; lVar13 != lVar14; lVar13 = lVar13 + 0x38) {
    if (*(short *)(lVar13 + 0x36) == *(short *)param_4) goto LAB_14610bf0e;
  }
  lVar13 = 0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14610bf0e:
  iVar5 = *(int *)(lVar6 + 0x14);
  if (iVar5 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0x20));
  }
  LOCK();
  *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
  UNLOCK();
  local_c8._16_8_ = *(TRead<UE::MovieScene::FInstanceHandle> *)(lVar13 + 0x18);
  local_58.Manager = param_2->Manager;
  local_58.AllocationIndex = param_2->AllocationIndex;
  local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_c8._0_8_ = lVar13;
  local_c8._8_4_ = iVar5;
  local_b0 = lVar12;
  local_a8 = iVar4;
  local_a0 = TVar9;
  local_98 = lVar16;
  local_90 = iVar2;
  local_88 = TVar8;
  local_80 = lVar15;
  local_78 = param_3.SystemSerial;
  local_70 = iVar3;
  local_68 = TVar7;
  FEvaluationHookUpdater::ForEachAllocation
            (param_1,&local_58,(TRead<UE::MovieScene::FInstanceHandle>)local_c8._16_8_,TVar9,TVar8,
             TVar7);
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneEvaluationHookComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEvaluationHookFlags>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneEvaluationHookComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEvaluationHookFlags>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneEvaluationHookComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEvaluationHookFlags>_>_>
              *)local_c8);
  return;
}

// ForEachEntityImpl<UE::MovieScene::FAssignEvalSecondsTask_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_> @ 14610bff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
ForEachEntityImpl<UE::MovieScene::FAssignEvalSecondsTask_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
          (FAssignEvalSecondsTask *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
          *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  FEntityManager *pFVar5;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar3 = param_3->ArrayNum;
  local_40 = (longlong)iVar3;
  if (iVar3 < 2) {
    local_48 = 1;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar9 = 0;
  pFVar5 = param_2->Manager;
  uVar4 = param_3->DataPtr[1].Offset;
  if (uVar4 == 0xffffffff) {
    iVar10 = param_2->AllocationIndex;
    lVar12 = lVar9;
  }
  else {
    iVar10 = param_2->AllocationIndex;
    lVar12 = (ulonglong)uVar4 +
             *(longlong *)
              (*(longlong *)(*(longlong *)&pFVar5->EntityAllocations + (longlong)iVar10 * 8) + 0x20)
    ;
  }
  if (iVar3 < 1) {
    local_40 = (longlong)iVar3;
    local_48 = 0;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar4 = param_3->DataPtr->Offset;
  lVar13 = lVar9;
  if (uVar4 != 0xffffffff) {
    lVar13 = (ulonglong)uVar4 +
             *(longlong *)
              (*(longlong *)(*(longlong *)&pFVar5->EntityAllocations + (longlong)iVar10 * 8) + 0x20)
    ;
  }
  uVar1 = *(ushort *)
           (*(longlong *)(*(longlong *)&pFVar5->EntityAllocations + (longlong)iVar10 * 8) + 0xe);
  if (uVar1 != 0) {
    do {
      pTVar11 = param_1->EvaluatedTimes;
      uVar2 = *(ushort *)(lVar13 + lVar9 * 4);
      local_40 = (longlong)pTVar11->ArrayNum;
      if ((pTVar11->ArrayNum <= (int)(uint)uVar2) &&
         (local_48 = (ulonglong)uVar2,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar6 = *(TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 **)&(pTVar11->AllocatorInstance).SecondaryData.field_0x0;
      if (pTVar6 != (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        pTVar11 = pTVar6;
      }
      *(undefined8 *)(lVar12 + lVar9 * 8) =
           *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + 8 + (ulonglong)uVar2 * 0x10);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachEntityImpl<UE::MovieScene::FAssignEvalTimesTask_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_> @ 14610c1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
ForEachEntityImpl<UE::MovieScene::FAssignEvalTimesTask_const_,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
          (FAssignEvalTimesTask *param_1,FEntityAllocationProxy *param_2,
          TArrayView<TRelativePtr<void,unsigned_int>_const_,int> *param_3,
          FEntityAllocationWriteContext param_4,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
          *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  FEntityManager *pFVar5;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar3 = param_3->ArrayNum;
  local_40 = (longlong)iVar3;
  if (iVar3 < 2) {
    local_48 = 1;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar9 = 0;
  pFVar5 = param_2->Manager;
  uVar4 = param_3->DataPtr[1].Offset;
  if (uVar4 == 0xffffffff) {
    iVar10 = param_2->AllocationIndex;
    lVar12 = lVar9;
  }
  else {
    iVar10 = param_2->AllocationIndex;
    lVar12 = (ulonglong)uVar4 +
             *(longlong *)
              (*(longlong *)(*(longlong *)&pFVar5->EntityAllocations + (longlong)iVar10 * 8) + 0x20)
    ;
  }
  if (iVar3 < 1) {
    local_40 = (longlong)iVar3;
    local_48 = 0;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar4 = param_3->DataPtr->Offset;
  lVar13 = lVar9;
  if (uVar4 != 0xffffffff) {
    lVar13 = (ulonglong)uVar4 +
             *(longlong *)
              (*(longlong *)(*(longlong *)&pFVar5->EntityAllocations + (longlong)iVar10 * 8) + 0x20)
    ;
  }
  uVar1 = *(ushort *)
           (*(longlong *)(*(longlong *)&pFVar5->EntityAllocations + (longlong)iVar10 * 8) + 0xe);
  if (uVar1 != 0) {
    do {
      pTVar11 = param_1->EvaluatedTimes;
      uVar2 = *(ushort *)(lVar13 + lVar9 * 4);
      local_40 = (longlong)pTVar11->ArrayNum;
      if ((pTVar11->ArrayNum <= (int)(uint)uVar2) &&
         (local_48 = (ulonglong)uVar2,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar6 = *(TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 **)&(pTVar11->AllocatorInstance).SecondaryData.field_0x0;
      if (pTVar6 != (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        pTVar11 = pTVar6;
      }
      *(undefined8 *)(lVar12 + lVar9 * 8) =
           *(undefined8 *)((pTVar11->AllocatorInstance).InlineData + (ulonglong)uVar2 * 0x10);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (longlong)(ulonglong)uVar1);
  }
  return;
}

// ForEachEntityImpl<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_> @ 14610c390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
ForEachEntityImpl<UE::MovieScene::FAssignEvalSecondsTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
          (FAssignEvalSecondsTask *param_1,FEntityAllocationProxy *param_2,
          FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<double>_>
          *param_4)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  lVar15 = 0;
  lVar5 = *(longlong *)
           (*(longlong *)&param_2->Manager->EntityAllocations +
           (longlong)param_2->AllocationIndex * 8);
  lVar12 = *(longlong *)(lVar5 + 0x28);
  lVar13 = (ulonglong)*(ushort *)(lVar5 + 0xc) * 0x38 + lVar12;
  for (; lVar12 != lVar13; lVar12 = lVar12 + 0x38) {
    if (*(short *)(lVar12 + 0x36) == *(short *)&param_4->field_0x2) goto LAB_14610c419;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  lVar12 = lVar15;
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14610c419:
  iVar4 = *(int *)(lVar5 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x20));
  }
  LOCK();
  piVar1 = (int *)(lVar12 + 0x30);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar5 = *(longlong *)(lVar12 + 0x18);
  lVar13 = *(longlong *)
            (*(longlong *)&param_2->Manager->EntityAllocations +
            (longlong)param_2->AllocationIndex * 8);
  lVar11 = *(longlong *)(lVar13 + 0x28);
  lVar9 = (ulonglong)*(ushort *)(lVar13 + 0xc) * 0x38 + lVar11;
  for (; lVar11 != lVar9; lVar11 = lVar11 + 0x38) {
    if (*(short *)(lVar11 + 0x36) == *(short *)param_4) goto LAB_14610c4d9;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  lVar11 = lVar15;
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14610c4d9:
  iVar2 = *(int *)(lVar13 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
  }
  LOCK();
  *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
  UNLOCK();
  lVar13 = *(longlong *)(lVar11 + 0x18);
  uVar14 = (ulonglong)
           *(ushort *)
            (*(longlong *)
              (*(longlong *)&param_2->Manager->EntityAllocations +
              (longlong)param_2->AllocationIndex * 8) + 0xe);
  if (uVar14 != 0) {
    do {
      pTVar10 = param_1->EvaluatedTimes;
      uVar3 = *(ushort *)(lVar13 + lVar15 * 4);
      if ((pTVar10->ArrayNum <= (int)(uint)uVar3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar6 = *(TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 **)&(pTVar10->AllocatorInstance).SecondaryData.field_0x0;
      if (pTVar6 != (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        pTVar10 = pTVar6;
      }
      *(undefined8 *)(lVar5 + lVar15 * 8) =
           *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + 8 + (ulonglong)uVar3 * 0x10);
      lVar15 = lVar15 + 1;
    } while (lVar15 < (longlong)uVar14);
  }
  if (param_3.SystemSerial < *(ulonglong *)(lVar12 + 0x28)) {
    param_3.SystemSerial = *(ulong64 *)(lVar12 + 0x28);
  }
  *(ulong64 *)(lVar12 + 0x28) = param_3.SystemSerial;
  LOCK();
  *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + -1;
  UNLOCK();
  if (iVar4 == 1) {
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x20));
  }
  LOCK();
  *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
  UNLOCK();
  if (iVar2 == 1) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
  }
  return;
}

// ForEachEntityImpl<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_> @ 14610c600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
ForEachEntityImpl<UE::MovieScene::FAssignEvalTimesTask,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
          (FAssignEvalTimesTask *param_1,FEntityAllocationProxy *param_2,
          FEntityAllocationWriteContext param_3,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
          *param_4)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  lVar15 = 0;
  lVar5 = *(longlong *)
           (*(longlong *)&param_2->Manager->EntityAllocations +
           (longlong)param_2->AllocationIndex * 8);
  lVar12 = *(longlong *)(lVar5 + 0x28);
  lVar13 = (ulonglong)*(ushort *)(lVar5 + 0xc) * 0x38 + lVar12;
  for (; lVar12 != lVar13; lVar12 = lVar12 + 0x38) {
    if (*(short *)(lVar12 + 0x36) == *(short *)&param_4->field_0x2) goto LAB_14610c689;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  lVar12 = lVar15;
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14610c689:
  iVar4 = *(int *)(lVar5 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x20));
  }
  LOCK();
  piVar1 = (int *)(lVar12 + 0x30);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar5 = *(longlong *)(lVar12 + 0x18);
  lVar13 = *(longlong *)
            (*(longlong *)&param_2->Manager->EntityAllocations +
            (longlong)param_2->AllocationIndex * 8);
  lVar11 = *(longlong *)(lVar13 + 0x28);
  lVar9 = (ulonglong)*(ushort *)(lVar13 + 0xc) * 0x38 + lVar11;
  for (; lVar11 != lVar9; lVar11 = lVar11 + 0x38) {
    if (*(short *)(lVar11 + 0x36) == *(short *)param_4) goto LAB_14610c749;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  lVar11 = lVar15;
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14610c749:
  iVar2 = *(int *)(lVar13 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
  }
  LOCK();
  *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
  UNLOCK();
  lVar13 = *(longlong *)(lVar11 + 0x18);
  uVar14 = (ulonglong)
           *(ushort *)
            (*(longlong *)
              (*(longlong *)&param_2->Manager->EntityAllocations +
              (longlong)param_2->AllocationIndex * 8) + 0xe);
  if (uVar14 != 0) {
    do {
      pTVar10 = param_1->EvaluatedTimes;
      uVar3 = *(ushort *)(lVar13 + lVar15 * 4);
      if ((pTVar10->ArrayNum <= (int)(uint)uVar3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar6 = *(TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                 **)&(pTVar10->AllocatorInstance).SecondaryData.field_0x0;
      if (pTVar6 != (TArray<UE::MovieScene::FEvaluatedTime,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        pTVar10 = pTVar6;
      }
      *(undefined8 *)(lVar5 + lVar15 * 8) =
           *(undefined8 *)((pTVar10->AllocatorInstance).InlineData + (ulonglong)uVar3 * 0x10);
      lVar15 = lVar15 + 1;
    } while (lVar15 < (longlong)uVar14);
  }
  if (param_3.SystemSerial < *(ulonglong *)(lVar12 + 0x28)) {
    param_3.SystemSerial = *(ulong64 *)(lVar12 + 0x28);
  }
  *(ulong64 *)(lVar12 + 0x28) = param_3.SystemSerial;
  LOCK();
  *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + -1;
  UNLOCK();
  if (iVar4 == 1) {
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 0x20));
  }
  LOCK();
  *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + -1;
  UNLOCK();
  if (iVar2 == 1) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x20));
  }
  return;
}


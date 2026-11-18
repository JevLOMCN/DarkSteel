// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// Run @ 14a4544e0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneControlRigSpaceChannel_const_*>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneControlRigSpaceChannel_const_*> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uchar *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  uchar *puVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar17 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14a454566;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar10) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a454566:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar6 = param_1->Allocation;
  puVar7 = local_60->Components;
  local_68 = pFVar6->ComponentHeaders;
  pFVar15 = local_68 + pFVar6->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14a4545f2;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar10) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a4545f2:
  EVar4 = pFVar6->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_68->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  puVar16 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
  iVar5 = param_1->Num;
  if ((iVar5 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar14 = uVar17;
  uVar18 = uVar17;
  if (0 < iVar12) {
    do {
      uVar13 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar13 < iVar12) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar18) * 8);
      uVar11 = 0;
      if ((int)uVar13 < iVar5) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = param_3->ArrayNum;
      *(undefined8 *)puVar16 = uVar8;
      puVar16 = puVar16 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar18 = uVar18 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar17 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar17;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 14a4547c0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FAccumulatedControlEntryIndex>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FAccumulatedControlEntryIndex> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  undefined2 uVar1;
  EComponentHeaderLockMode EVar2;
  int iVar3;
  undefined4 uVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  FComponentHeader *pFVar13;
  undefined4 *puVar14;
  FComponentHeader *local_res18;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FAccumulatedControlEntryIndex>_> local_68;
  
  local_res18 = param_2->ComponentHeaders;
  pFVar13 = local_res18 + param_2->NumComponents;
  for (; local_res18 != pFVar13; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14a454848;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14a454848:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + 1);
  UNLOCK();
  puVar5 = local_res18->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FAccumulatedControlEntryIndex>
            (param_1->Allocation,&local_68,
             *(TComponentTypeID<UE::MovieScene::FAccumulatedControlEntryIndex> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  puVar14 = (undefined4 *)(local_68._24_8_ + (longlong)param_1->ComponentStartOffset * 6);
  iVar3 = param_1->Num;
  if ((iVar3 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = param_3->ArrayNum;
  uVar12 = 0;
  if (0 < iVar9) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < iVar9) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar10 = (longlong)*(int *)((longlong)param_3->DataPtr + lVar11);
      uVar4 = *(undefined4 *)(puVar5 + lVar10 * 6);
      uVar1 = *(undefined2 *)(puVar5 + lVar10 * 6 + 4);
      uVar8 = 0;
      if ((int)uVar12 < iVar3) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_3->ArrayNum;
      uVar12 = uVar12 + 1;
      *puVar14 = uVar4;
      lVar11 = lVar11 + 4;
      *(undefined2 *)(puVar14 + 1) = uVar1;
      puVar14 = (undefined4 *)((longlong)puVar14 + 6);
    } while ((int)uVar12 < iVar9);
  }
  if (local_68._0_8_ != 0) {
    if ((ulonglong)local_68._8_8_ < *(ulonglong *)(local_68._0_8_ + 0x28)) {
      local_68._8_8_ = *(ulonglong *)(local_68._0_8_ + 0x28);
    }
    *(undefined8 *)(local_68._0_8_ + 0x28) = local_68._8_8_;
    LOCK();
    *(int *)(local_68._0_8_ + 0x30) = *(int *)(local_68._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_68._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_68._0_8_ + 0x20));
    }
  }
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  return;
}

// Run @ 14a454a20

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FBaseControlRigEvalData>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FBaseControlRigEvalData> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  uchar *puVar1;
  undefined8 uVar2;
  EComponentHeaderLockMode EVar3;
  int iVar4;
  uchar *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  FComponentHeader *pFVar15;
  undefined4 *puVar16;
  uint uVar17;
  FComponentHeader *pFVar18;
  longlong lVar19;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_> local_58;
  
  pFVar15 = param_2->ComponentHeaders;
  pFVar18 = pFVar15 + param_2->NumComponents;
  for (; pFVar15 != pFVar18; pFVar15 = pFVar15 + 1) {
    if ((pFVar15->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14a454aa8;
  }
  pFVar15 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14a454aa8:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
  UNLOCK();
  puVar5 = pFVar15->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FBaseControlRigEvalData>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::MovieScene::FBaseControlRigEvalData> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  iVar4 = param_1->Num;
  puVar16 = (undefined4 *)(local_58._24_8_ + (longlong)param_1->ComponentStartOffset * 0x18);
  if ((iVar4 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar13 = param_3->ArrayNum;
  uVar17 = 0;
  if (0 < iVar13) {
    lVar19 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar17 < iVar13) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = (longlong)*(int *)(lVar19 + (longlong)param_3->DataPtr);
      puVar1 = puVar5 + lVar14 * 0x18;
      uVar7 = *(undefined4 *)puVar1;
      uVar8 = *(undefined4 *)(puVar1 + 4);
      uVar9 = *(undefined4 *)(puVar1 + 8);
      uVar10 = *(undefined4 *)(puVar1 + 0xc);
      uVar2 = *(undefined8 *)(puVar5 + lVar14 * 0x18 + 0x10);
      uVar12 = 0;
      if ((int)uVar17 < iVar4) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = param_3->ArrayNum;
      uVar17 = uVar17 + 1;
      *puVar16 = uVar7;
      puVar16[1] = uVar8;
      puVar16[2] = uVar9;
      puVar16[3] = uVar10;
      lVar19 = lVar19 + 4;
      *(undefined8 *)(puVar16 + 4) = uVar2;
      puVar16 = puVar16 + 6;
    } while ((int)uVar17 < iVar13);
  }
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
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  return;
}

// Run @ 14a454cc0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FControlRigSourceData> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  EComponentHeaderLockMode EVar1;
  int iVar2;
  uchar *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FComponentHeader *pFVar10;
  longlong lVar11;
  undefined8 *puVar12;
  FComponentHeader *local_res10;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FControlRigSourceData>_> local_58;
  
  local_res10 = param_2->ComponentHeaders;
  pFVar10 = local_res10 + param_2->NumComponents;
  for (; local_res10 != pFVar10; local_res10 = local_res10 + 1) {
    if ((local_res10->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14a454d59;
  }
  local_res10 = (FComponentHeader *)0x0;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14a454d59:
  EVar1 = param_2->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res10->ReadWriteLock);
  }
  LOCK();
  local_res10->ScheduledAccessCount = (atomic<int>)((int)local_res10->ScheduledAccessCount + 1);
  UNLOCK();
  puVar3 = local_res10->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FControlRigSourceData>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::MovieScene::FControlRigSourceData> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  iVar2 = param_1->Num;
  puVar12 = (undefined8 *)(local_58._24_8_ + (longlong)param_1->ComponentStartOffset * 8);
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = param_3->ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = 0;
      if ((int)uVar9 < iVar2) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      uVar4 = *(undefined8 *)(puVar3 + (longlong)*(int *)(lVar11 + (longlong)param_3->DataPtr) * 8);
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_3->ArrayNum;
      uVar9 = uVar9 + 1;
      *puVar12 = uVar4;
      lVar11 = lVar11 + 4;
      puVar12 = puVar12 + 1;
    } while ((int)uVar9 < iVar8);
  }
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
  LOCK();
  local_res10->ScheduledAccessCount = (atomic<int>)((int)local_res10->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar1 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_res10->ReadWriteLock);
  }
  return;
}

// Run @ 14a454f30

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneControlRigSpaceBaseKey>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneControlRigSpaceBaseKey> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  uchar *puVar2;
  atomic<int> aVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FComponentHeader *pFVar19;
  ulong64 uVar20;
  uchar *puVar21;
  ulong64 uVar22;
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar18;
  
  local_68 = param_2->ComponentHeaders;
  uVar22 = 0;
  pFVar19 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar19; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14a454fb6;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar14) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a454fb6:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_68->Components;
  local_res18 = pFVar7->ComponentHeaders;
  pFVar19 = local_res18 + pFVar7->NumComponents;
  for (; local_res18 != pFVar19; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14a455048;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar14) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14a455048:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar3 != (atomic<int>)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar6 = param_1->Num;
  puVar21 = local_res18->Components + (longlong)param_1->ComponentStartOffset * 0x10;
  if ((iVar6 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar16 = param_3->ArrayNum;
  uVar18 = uVar22;
  uVar20 = uVar22;
  if (0 < iVar16) {
    do {
      uVar17 = (uint)uVar18;
      uVar15 = 0;
      if ((int)uVar17 < iVar16) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar15 = 0;
      if ((int)uVar17 < iVar6) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      puVar2 = puVar8 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar20) * 0x10;
      uVar10 = *(undefined4 *)puVar2;
      uVar11 = *(undefined4 *)(puVar2 + 4);
      uVar12 = *(undefined4 *)(puVar2 + 8);
      uVar13 = *(undefined4 *)(puVar2 + 0xc);
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = param_3->ArrayNum;
      *(undefined4 *)puVar21 = uVar10;
      *(undefined4 *)(puVar21 + 4) = uVar11;
      *(undefined4 *)(puVar21 + 8) = uVar12;
      *(undefined4 *)(puVar21 + 0xc) = uVar13;
      puVar21 = puVar21 + 0x10;
      uVar18 = (ulonglong)(uVar17 + 1);
      uVar20 = uVar20 + 4;
    } while ((int)(uVar17 + 1) < iVar16);
  }
  if (local_res18->SerialNumber != 0) {
    uVar22 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar22;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// Run @ 14ac7eff0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData>::
Run(TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequenceComponentData> *this,
   FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  uchar *puVar2;
  atomic<int> aVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  undefined4 uVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  FComponentHeader *pFVar21;
  ulong64 uVar22;
  ulong64 uVar23;
  uchar *puVar24;
  FComponentHeader *local_78;
  FComponentHeader *local_70;
  ulonglong uVar20;
  
  local_70 = param_2->ComponentHeaders;
  uVar23 = 0;
  pFVar21 = local_70 + param_2->NumComponents;
  for (; local_70 != pFVar21; local_70 = local_70 + 1) {
    if ((local_70->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14ac7f076;
  }
  local_70 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14ac7f076:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_70->ReadWriteLock);
  }
  LOCK();
  local_70->ScheduledAccessCount = (atomic<int>)((int)local_70->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_70->Components;
  local_78 = pFVar8->ComponentHeaders;
  pFVar21 = local_78 + pFVar8->NumComponents;
  for (; local_78 != pFVar21; local_78 = local_78 + 1) {
    if ((local_78->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14ac7f102;
  }
  local_78 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_14ac7f102:
  EVar5 = pFVar8->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_78->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_78->ScheduledAccessCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar3 != (atomic<int>)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  puVar24 = local_78->Components + (longlong)param_1->ComponentStartOffset * 0x14;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar17 = param_3->ArrayNum;
  uVar20 = uVar23;
  uVar22 = uVar23;
  if (0 < iVar17) {
    do {
      uVar19 = (uint)uVar20;
      uVar16 = 0;
      if ((int)uVar19 < iVar17) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar18 = (longlong)*(int *)((longlong)param_3->DataPtr + uVar22);
      puVar2 = puVar9 + lVar18 * 0x14;
      uVar11 = *(undefined4 *)puVar2;
      uVar12 = *(undefined4 *)(puVar2 + 4);
      uVar13 = *(undefined4 *)(puVar2 + 8);
      uVar14 = *(undefined4 *)(puVar2 + 0xc);
      uVar7 = *(undefined4 *)(puVar9 + lVar18 * 0x14 + 0x10);
      uVar16 = 0;
      if ((int)uVar19 < iVar6) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar17 = param_3->ArrayNum;
      *(undefined4 *)puVar24 = uVar11;
      *(undefined4 *)(puVar24 + 4) = uVar12;
      *(undefined4 *)(puVar24 + 8) = uVar13;
      *(undefined4 *)(puVar24 + 0xc) = uVar14;
      *(undefined4 *)(puVar24 + 0x10) = uVar7;
      puVar24 = puVar24 + 0x14;
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar22 = uVar22 + 4;
    } while ((int)(uVar19 + 1) < iVar17);
  }
  if (local_78->SerialNumber != 0) {
    uVar23 = local_78->SerialNumber;
  }
  local_78->SerialNumber = uVar23;
  LOCK();
  local_78->ScheduledAccessCount = (atomic<int>)((int)local_78->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_78->ReadWriteLock);
  }
  LOCK();
  local_70->ScheduledAccessCount = (atomic<int>)((int)local_70->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_70->ReadWriteLock);
  }
  return;
}

// Run @ 14ac7f2f0

void __thiscall
UE::MovieScene::
TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FTemplateSequencePropertyScaleComponentData>
           *this,FEntityRange *param_1,FEntityAllocation *param_2,
          TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  uchar *puVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  int iVar7;
  undefined4 uVar8;
  FEntityAllocation *pFVar9;
  uchar *puVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  FComponentHeader *pFVar24;
  ulong64 uVar25;
  uchar *puVar26;
  ulong64 uVar27;
  FComponentHeader *local_88;
  FComponentHeader *local_80;
  ulonglong uVar23;
  
  local_80 = param_2->ComponentHeaders;
  uVar27 = 0;
  pFVar24 = local_80 + param_2->NumComponents;
  for (; local_80 != pFVar24; local_80 = local_80 + 1) {
    if ((local_80->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14ac7f376;
  }
  local_80 = (FComponentHeader *)0x0;
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar18) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_14ac7f376:
  EVar5 = param_2->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_80->ReadWriteLock);
  }
  LOCK();
  local_80->ScheduledAccessCount = (atomic<int>)((int)local_80->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar9 = param_1->Allocation;
  puVar10 = local_80->Components;
  local_88 = pFVar9->ComponentHeaders;
  pFVar24 = local_88 + pFVar9->NumComponents;
  for (; local_88 != pFVar24; local_88 = local_88 + 1) {
    if ((local_88->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14ac7f402;
  }
  local_88 = (FComponentHeader *)0x0;
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar18) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_14ac7f402:
  EVar6 = pFVar9->LockMode;
  if (EVar6 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_88->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_88->ScheduledAccessCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar3 != (atomic<int>)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar7 = param_1->Num;
  puVar26 = local_88->Components + (longlong)param_1->ComponentStartOffset * 0x2c;
  if ((iVar7 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar21 = param_3->ArrayNum;
  uVar23 = uVar27;
  uVar25 = uVar27;
  if (0 < iVar21) {
    do {
      uVar22 = (uint)uVar23;
      uVar19 = 0;
      if ((int)uVar22 < iVar21) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar20 = (longlong)*(int *)((longlong)param_3->DataPtr + uVar25) * 0x2c;
      puVar2 = puVar10 + lVar20;
      uVar12 = *(undefined4 *)puVar2;
      uVar13 = *(undefined4 *)(puVar2 + 4);
      uVar14 = *(undefined4 *)(puVar2 + 8);
      uVar15 = *(undefined4 *)(puVar2 + 0xc);
      uVar8 = *(undefined4 *)(puVar10 + lVar20 + 0x28);
      uVar16 = *(undefined8 *)(puVar10 + lVar20 + 0x10);
      uVar17 = *(undefined8 *)(puVar10 + lVar20 + 0x10 + 8);
      uVar4 = *(undefined8 *)(puVar10 + lVar20 + 0x20);
      uVar19 = 0;
      if ((int)uVar22 < iVar7) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar21 = param_3->ArrayNum;
      *(undefined4 *)puVar26 = uVar12;
      *(undefined4 *)(puVar26 + 4) = uVar13;
      *(undefined4 *)(puVar26 + 8) = uVar14;
      *(undefined4 *)(puVar26 + 0xc) = uVar15;
      *(undefined8 *)(puVar26 + 0x10) = uVar16;
      *(undefined8 *)(puVar26 + 0x18) = uVar17;
      *(undefined8 *)(puVar26 + 0x20) = uVar4;
      *(undefined4 *)(puVar26 + 0x28) = uVar8;
      puVar26 = puVar26 + 0x2c;
      uVar23 = (ulonglong)(uVar22 + 1);
      uVar25 = uVar25 + 4;
    } while ((int)(uVar22 + 1) < iVar21);
  }
  if (local_88->SerialNumber != 0) {
    uVar27 = local_88->SerialNumber;
  }
  local_88->SerialNumber = uVar27;
  LOCK();
  local_88->ScheduledAccessCount = (atomic<int>)((int)local_88->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar6 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_88->ReadWriteLock);
  }
  LOCK();
  local_80->ScheduledAccessCount = (atomic<int>)((int)local_80->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_80->ReadWriteLock);
  }
  return;
}


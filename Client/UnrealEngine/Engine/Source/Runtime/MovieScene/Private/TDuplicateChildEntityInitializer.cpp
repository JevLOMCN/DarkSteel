// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 47

// Run @ 1460e9de0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_char>::Run
          (TDuplicateChildEntityInitializer<unsigned_char> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uchar uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460e9e66;
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
LAB_1460e9e66:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460e9ef2;
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
LAB_1460e9ef2:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  iVar6 = param_1->Num;
  puVar17 = local_68->Components + param_1->ComponentStartOffset;
  if ((iVar6 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar3 = puVar8[*(int *)((longlong)param_3->DataPtr + uVar16)];
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *puVar17 = uVar3;
      puVar17 = puVar17 + 1;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460ea0b0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<short>::Run
          (TDuplicateChildEntityInitializer<short> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined2 uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ea136;
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
LAB_1460ea136:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ea1c2;
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
LAB_1460ea1c2:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  puVar16 = local_68->Components + (longlong)param_1->ComponentStartOffset * 2;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
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
      uVar3 = *(undefined2 *)(puVar8 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar18) * 2);
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *(undefined2 *)puVar16 = uVar3;
      puVar16 = puVar16 + 2;
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
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460ea390

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<unsigned_short>::Run
          (TDuplicateChildEntityInitializer<unsigned_short> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined2 uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ea416;
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
LAB_1460ea416:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ea4a2;
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
LAB_1460ea4a2:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  puVar16 = local_68->Components + (longlong)param_1->ComponentStartOffset * 2;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
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
      uVar3 = *(undefined2 *)(puVar8 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar18) * 2);
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *(undefined2 *)puVar16 = uVar3;
      puVar16 = puVar16 + 2;
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
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460ea670

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<int>::Run
          (TDuplicateChildEntityInitializer<int> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  uchar *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar16;
  
  local_68 = param_2->ComponentHeaders;
  uVar19 = 0;
  pFVar17 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ea6f6;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ea6f6:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar17 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar17; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ea78b;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ea78b:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar5 = param_1->ComponentStartOffset;
  puVar10 = local_res18->Components;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar16 = uVar19;
  uVar18 = uVar19;
  if (0 < iVar14) {
    do {
      uVar15 = (uint)uVar16;
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar7 = *(undefined4 *)(puVar9 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar18) * 4);
      uVar13 = 0;
      if ((int)uVar15 < iVar6) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar14 = param_3->ArrayNum;
      *(undefined4 *)(puVar10 + uVar18 + (longlong)iVar5 * 4) = uVar7;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar18 = uVar18 + 4;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  if (local_res18->SerialNumber != 0) {
    uVar19 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar19;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1460ea960

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<double>::Run
          (TDuplicateChildEntityInitializer<double> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  uchar *puVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar14;
  
  local_68 = param_2->ComponentHeaders;
  uVar17 = 0;
  pFVar15 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eaa03;
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
LAB_1460eaa03:
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
  pFVar15 = local_res18 + pFVar7->NumComponents;
  for (; local_res18 != pFVar15; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eaa98;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar10) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1460eaa98:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
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
  iVar6 = param_1->Num;
  puVar16 = local_res18->Components + (longlong)param_1->ComponentStartOffset * 8;
  if ((iVar6 < 0) &&
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
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      uVar3 = *(undefined8 *)(puVar8 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar18) * 8);
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
      *(undefined8 *)puVar16 = uVar3;
      puVar16 = puVar16 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar18 = uVar18 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_res18->SerialNumber != 0) {
    uVar17 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar17;
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

// Run @ 1460eac80

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UObject_*_(__cdecl*)(UObject_*)>::Run
          (TDuplicateChildEntityInitializer<UObject_*_(__cdecl*)(UObject_*)> *this,
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
  longlong lVar9;
  uint uVar10;
  FComponentHeader *pFVar11;
  undefined8 *puVar12;
  FComponentHeader *local_res10;
  TComponentLock<UE::MovieScene::TWrite<UObject_*_(__cdecl*)(UObject_*)>_> local_58;
  
  local_res10 = param_2->ComponentHeaders;
  pFVar11 = local_res10 + param_2->NumComponents;
  for (; local_res10 != pFVar11; local_res10 = local_res10 + 1) {
    if ((local_res10->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ead0a;
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
LAB_1460ead0a:
  EVar1 = param_2->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res10->ReadWriteLock);
  }
  LOCK();
  local_res10->ScheduledAccessCount = (atomic<int>)((int)local_res10->ScheduledAccessCount + 1);
  UNLOCK();
  puVar3 = local_res10->Components;
  FEntityAllocation::WriteComponents<UObject_*_(__cdecl*)(UObject_*)>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UObject_*_(__cdecl*)(UObject_*)> *)&this->field_0x8,
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
  uVar10 = 0;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
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
      if ((int)uVar10 < iVar2) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      uVar4 = *(undefined8 *)(puVar3 + (longlong)*(int *)((longlong)param_3->DataPtr + lVar9) * 8);
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
      uVar10 = uVar10 + 1;
      *puVar12 = uVar4;
      lVar9 = lVar9 + 4;
      puVar12 = puVar12 + 1;
    } while ((int)uVar10 < iVar8);
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

// Run @ 1460eaec0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UObject_*>::Run
          (TDuplicateChildEntityInitializer<UObject_*> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  EComponentHeaderLockMode EVar1;
  int iVar2;
  uchar *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  FComponentHeader *pFVar11;
  undefined8 *puVar12;
  FComponentHeader *local_res10;
  TComponentLock<UE::MovieScene::TWrite<UObject_*>_> local_58;
  
  local_res10 = param_2->ComponentHeaders;
  pFVar11 = local_res10 + param_2->NumComponents;
  for (; local_res10 != pFVar11; local_res10 = local_res10 + 1) {
    if ((local_res10->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eaf4a;
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
LAB_1460eaf4a:
  EVar1 = param_2->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res10->ReadWriteLock);
  }
  LOCK();
  local_res10->ScheduledAccessCount = (atomic<int>)((int)local_res10->ScheduledAccessCount + 1);
  UNLOCK();
  puVar3 = local_res10->Components;
  FEntityAllocation::WriteComponents<UObject_*>
            (param_1->Allocation,&local_58,*(TComponentTypeID<UObject_*> *)&this->field_0x8,
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
  uVar10 = 0;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
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
      if ((int)uVar10 < iVar2) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      uVar4 = *(undefined8 *)(puVar3 + (longlong)*(int *)((longlong)param_3->DataPtr + lVar9) * 8);
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
      uVar10 = uVar10 + 1;
      *puVar12 = uVar4;
      lVar9 = lVar9 + 4;
      puVar12 = puVar12 + 1;
    } while ((int)uVar10 < iVar8);
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

// Run @ 1460eb100

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<TObjectPtr<UMovieSceneCondition_const_>_>::Run
          (TDuplicateChildEntityInitializer<TObjectPtr<UMovieSceneCondition_const_>_> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  UObject *pUVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  ulong64 uVar16;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  uchar *local_58;
  ulonglong uVar15;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar17 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar17; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eb186;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460eb186:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_60->Components;
  local_68 = pFVar8->ComponentHeaders;
  pFVar17 = local_68 + pFVar8->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eb212;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460eb212:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_68->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_58 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
  iVar5 = param_1->Num;
  if ((iVar5 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar6 = param_3->ArrayNum;
  uVar15 = uVar18;
  uVar16 = uVar18;
  if (0 < iVar6) {
    do {
      uVar14 = (uint)uVar15;
      uVar13 = 0;
      if ((int)uVar14 < iVar6) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar7 = *(int *)((longlong)param_3->DataPtr + uVar16);
      uVar13 = 0;
      if ((int)uVar14 < iVar5) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 = *(UObject **)(puVar9 + (longlong)iVar7 * 8), pUVar10 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar10);
      }
      *(undefined8 *)local_58 = *(undefined8 *)(puVar9 + (longlong)iVar7 * 8);
      local_58 = local_58 + 8;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar14 + 1) < iVar6);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460eb420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TDuplicateChildEntityInitializer<UE::MovieScene::Interpolation::FCachedInterpolation>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::Interpolation::FCachedInterpolation>
           *this,FEntityRange *param_1,FEntityAllocation *param_2,
          TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  byte bVar4;
  FEntityAllocation *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  TArrayView<int_const_,int> *pTVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  FComponentHeader *pFVar22;
  uint uVar23;
  FComponentHeader *pFVar24;
  uchar *puVar25;
  longlong lVar26;
  FComponentHeader *pFVar27;
  FComponentHeader *pFVar28;
  FComponentHeader *pFVar29;
  uchar *puVar30;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  int local_d8;
  EComponentHeaderLockMode local_d4;
  EComponentHeaderLockMode local_d0;
  FComponentHeader *local_c8;
  FComponentHeader *local_c0;
  TArrayView<int_const_,int> *local_b8;
  uchar *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c0 = param_2->ComponentHeaders;
  pFVar28 = (FComponentHeader *)0x0;
  pFVar24 = local_c0 + param_2->NumComponents;
  for (; local_b8 = param_3, local_c0 != pFVar24; local_c0 = local_c0 + 1) {
    pFVar27 = local_c0;
    if ((local_c0->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eb4d3;
  }
  local_c0 = (FComponentHeader *)0x0;
  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar27 = pFVar28;
  if (bVar19) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1460eb4d3:
  local_d0 = param_2->LockMode;
  if (local_d0 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar27->ReadWriteLock);
  }
  LOCK();
  pFVar27->ScheduledAccessCount = (atomic<int>)((int)pFVar27->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar5 = param_1->Allocation;
  local_b0 = pFVar27->Components;
  local_c8 = pFVar5->ComponentHeaders;
  pFVar24 = local_c8 + pFVar5->NumComponents;
  for (; local_c8 != pFVar24; local_c8 = local_c8 + 1) {
    pFVar22 = local_c8;
    if ((local_c8->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eb558;
  }
  local_c8 = (FComponentHeader *)0x0;
  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar22 = pFVar28;
  if (bVar19) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1460eb558:
  local_d4 = pFVar5->LockMode;
  if (local_d4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar22->ReadWriteLock);
  }
  LOCK();
  paVar1 = &pFVar22->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_d8 = param_1->Num;
  puVar30 = pFVar22->Components + (longlong)param_1->ComponentStartOffset * 0x60;
  if ((local_d8 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar18 = local_b8;
  iVar17 = local_d8;
  iVar21 = param_3->ArrayNum;
  if (0 < iVar21) {
    lVar26 = (longlong)local_d8;
    pFVar24 = pFVar28;
    pFVar29 = pFVar28;
    do {
      uVar23 = (uint)pFVar24;
      uVar20 = 0;
      if ((int)uVar23 < iVar21) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_e0 = (longlong)iVar21;
        local_e8 = (longlong)(int)uVar23;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar25 = local_b0 +
                (longlong)*(int *)((longlong)&pFVar29->_padding_ + (longlong)pTVar18->DataPtr) *
                0x60;
      uVar20 = 0;
      if ((int)uVar23 < iVar17) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_e8 = (longlong)(int)uVar23;
        local_e0 = lVar26;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar19) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (puVar25 != puVar30) {
        bVar4 = puVar25[0x50];
        local_58 = CONCAT71(local_58._1_7_,bVar4);
        if ((7 < bVar4) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xec,L""), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::MovieScene::Interpolation::FInvalidValue,UE::MovieScene::Interpolation::FConstantValue,UE::MovieScene::Interpolation::FLinearInterpolation,UE::MovieScene::Interpolation::FQuadraticInterpolation,UE::MovieScene::Interpolation::FCubicInterpolation,UE::MovieScene::Interpolation::FQuarticInterpolation,UE::MovieScene::Interpolation::FCubicBezierInterpolation,UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[bVar4])(&local_a8,puVar25);
        uVar7 = *(undefined8 *)puVar30;
        uVar8 = *(undefined8 *)(puVar30 + 8);
        uVar9 = *(undefined8 *)(puVar30 + 0x10);
        uVar10 = *(undefined8 *)(puVar30 + 0x18);
        uVar11 = *(undefined8 *)(puVar30 + 0x20);
        uVar12 = *(undefined8 *)(puVar30 + 0x28);
        uVar13 = *(undefined8 *)(puVar30 + 0x30);
        uVar14 = *(undefined8 *)(puVar30 + 0x38);
        uVar15 = *(undefined8 *)(puVar30 + 0x40);
        uVar16 = *(undefined8 *)(puVar30 + 0x48);
        uVar3 = *(undefined8 *)(puVar30 + 0x50);
        *(undefined8 *)puVar30 = local_a8;
        *(undefined8 *)(puVar30 + 8) = uStack_a0;
        *(undefined8 *)(puVar30 + 0x10) = local_98;
        *(undefined8 *)(puVar30 + 0x18) = uStack_90;
        *(undefined8 *)(puVar30 + 0x20) = local_88;
        *(undefined8 *)(puVar30 + 0x28) = uStack_80;
        *(undefined8 *)(puVar30 + 0x30) = local_78;
        *(undefined8 *)(puVar30 + 0x38) = uStack_70;
        *(undefined8 *)(puVar30 + 0x40) = local_68;
        *(undefined8 *)(puVar30 + 0x48) = uStack_60;
        *(undefined8 *)(puVar30 + 0x50) = local_58;
        local_a8 = uVar7;
        uStack_a0 = uVar8;
        local_98 = uVar9;
        uStack_90 = uVar10;
        local_88 = uVar11;
        uStack_80 = uVar12;
        local_78 = uVar13;
        uStack_70 = uVar14;
        local_68 = uVar15;
        uStack_60 = uVar16;
        local_58 = uVar3;
      }
      pFVar24 = (FComponentHeader *)(ulonglong)(uVar23 + 1);
      iVar21 = pTVar18->ArrayNum;
      pFVar29 = (FComponentHeader *)((longlong)&pFVar29->_padding_ + 4);
      *(undefined8 *)(puVar30 + 0x58) = *(undefined8 *)(puVar25 + 0x58);
      puVar30 = puVar30 + 0x60;
      pFVar22 = local_c8;
      pFVar27 = local_c0;
    } while ((int)(uVar23 + 1) < iVar21);
  }
  if ((FComponentHeader *)pFVar22->SerialNumber != (FComponentHeader *)0x0) {
    pFVar28 = (FComponentHeader *)pFVar22->SerialNumber;
  }
  pFVar22->SerialNumber = (ulong64)pFVar28;
  LOCK();
  pFVar22->ScheduledAccessCount = (atomic<int>)((int)pFVar22->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_d4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar22->ReadWriteLock);
  }
  LOCK();
  pFVar27->ScheduledAccessCount = (atomic<int>)((int)pFVar27->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_d0 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar27->ReadWriteLock);
  }
  return;
}

// Run @ 1460eb870

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FCustomPropertyIndex>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FCustomPropertyIndex> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined2 uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eb8f6;
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
LAB_1460eb8f6:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eb982;
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
LAB_1460eb982:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 2;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar3 = *(undefined2 *)(puVar8 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 2);
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *(undefined2 *)puVar17 = uVar3;
      puVar17 = puVar17 + 2;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460ebb60

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FEasingComponentData>::Run
          (TDuplicateChildEntityInitializer<FEasingComponentData> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  UObject *pUVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  ulong64 uVar16;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  uchar *local_58;
  ulonglong uVar15;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar17 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar17; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ebbe6;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ebbe6:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_60->Components;
  local_68 = pFVar8->ComponentHeaders;
  pFVar17 = local_68 + pFVar8->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ebc72;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ebc72:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_68->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_58 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
  iVar5 = param_1->Num;
  if ((iVar5 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar6 = param_3->ArrayNum;
  uVar15 = uVar18;
  uVar16 = uVar18;
  if (0 < iVar6) {
    do {
      uVar14 = (uint)uVar15;
      uVar13 = 0;
      if ((int)uVar14 < iVar6) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar7 = *(int *)((longlong)param_3->DataPtr + uVar16);
      uVar13 = 0;
      if ((int)uVar14 < iVar5) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 = *(UObject **)(puVar9 + (longlong)iVar7 * 8), pUVar10 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar10);
      }
      *(undefined8 *)local_58 = *(undefined8 *)(puVar9 + (longlong)iVar7 * 8);
      local_58 = local_58 + 8;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar14 + 1) < iVar6);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460ebe80

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FEntityGroupID>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FEntityGroupID> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  undefined4 uVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  uchar *puVar20;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar16;
  
  local_60 = param_2->ComponentHeaders;
  uVar19 = 0;
  pFVar17 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar17; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ebf06;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460ebf06:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_60->Components;
  local_68 = pFVar8->ComponentHeaders;
  pFVar17 = local_68 + pFVar8->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ebf92;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460ebf92:
  EVar5 = pFVar8->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_68->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
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
  puVar20 = local_68->Components + (longlong)param_1->ComponentStartOffset * 0xc;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar13 = param_3->ArrayNum;
  uVar16 = uVar19;
  uVar18 = uVar19;
  if (0 < iVar13) {
    do {
      uVar15 = (uint)uVar16;
      uVar12 = 0;
      if ((int)uVar15 < iVar13) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar14 = (longlong)*(int *)((longlong)param_3->DataPtr + uVar18);
      uVar3 = *(undefined8 *)(puVar9 + lVar14 * 0xc);
      uVar7 = *(undefined4 *)(puVar9 + lVar14 * 0xc + 8);
      uVar12 = 0;
      if ((int)uVar15 < iVar6) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = param_3->ArrayNum;
      *(undefined8 *)puVar20 = uVar3;
      *(undefined4 *)(puVar20 + 8) = uVar7;
      puVar20 = puVar20 + 0xc;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar18 = uVar18 + 4;
    } while ((int)(uVar15 + 1) < iVar13);
  }
  if (local_68->SerialNumber != 0) {
    uVar19 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar19;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460ec190

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FEvaluationHookFlags>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FEvaluationHookFlags> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uchar uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  uchar *puVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar16 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ec216;
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
LAB_1460ec216:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ec2a2;
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
LAB_1460ec2a2:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  iVar6 = param_1->Num;
  puVar18 = local_68->Components + param_1->ComponentStartOffset;
  if ((iVar6 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar14 = uVar16;
  uVar17 = uVar16;
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
      uVar3 = puVar8[*(int *)((longlong)param_3->DataPtr + uVar17)];
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *puVar18 = uVar3;
      puVar18 = puVar18 + 1;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar17 = uVar17 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar16 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar16;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460ec470

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FFrameTime>::Run
          (TDuplicateChildEntityInitializer<FFrameTime> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ec4f6;
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
LAB_1460ec4f6:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ec582;
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
LAB_1460ec582:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460ec760

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FGuid>::Run
          (TDuplicateChildEntityInitializer<FGuid> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  uchar *puVar1;
  EComponentHeaderLockMode EVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FComponentHeader *pFVar13;
  undefined4 *puVar14;
  uint uVar15;
  FComponentHeader *pFVar16;
  longlong lVar17;
  TComponentLock<UE::MovieScene::TWrite<FGuid>_> local_58;
  
  pFVar13 = param_2->ComponentHeaders;
  pFVar16 = pFVar13 + param_2->NumComponents;
  for (; pFVar13 != pFVar16; pFVar13 = pFVar13 + 1) {
    if ((pFVar13->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ec7e8;
  }
  pFVar13 = (FComponentHeader *)0x0;
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar10) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1460ec7e8:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
  }
  LOCK();
  pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = pFVar13->Components;
  FEntityAllocation::WriteComponents<FGuid>
            (param_1->Allocation,&local_58,*(TComponentTypeID<FGuid> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  iVar3 = param_1->Num;
  puVar14 = (undefined4 *)((longlong)param_1->ComponentStartOffset * 0x10 + local_58._24_8_);
  if ((iVar3 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar15 = 0;
  if (0 < iVar12) {
    lVar17 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar15 < iVar12) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = 0;
      if ((int)uVar15 < iVar3) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      puVar1 = puVar4 + (longlong)*(int *)(lVar17 + (longlong)param_3->DataPtr) * 0x10;
      uVar6 = *(undefined4 *)puVar1;
      uVar7 = *(undefined4 *)(puVar1 + 4);
      uVar8 = *(undefined4 *)(puVar1 + 8);
      uVar9 = *(undefined4 *)(puVar1 + 0xc);
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = param_3->ArrayNum;
      uVar15 = uVar15 + 1;
      *puVar14 = uVar6;
      puVar14[1] = uVar7;
      puVar14[2] = uVar8;
      puVar14[3] = uVar9;
      puVar14 = puVar14 + 4;
      lVar17 = lVar17 + 4;
    } while ((int)uVar15 < iVar12);
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
  pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
  }
  return;
}

// Run @ 1460ec9d0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FHierarchicalBlendTarget>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FHierarchicalBlendTarget> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  uchar *puVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FComponentHeader *pFVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar15;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar16 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar16; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eca56;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460eca56:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar16 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar16; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ecae2;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460ecae2:
  EVar4 = pFVar7->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_68->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
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
  iVar5 = param_1->Num;
  iVar6 = param_1->ComponentStartOffset;
  puVar9 = local_68->Components;
  if ((iVar5 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar13 = param_3->ArrayNum;
  uVar15 = uVar18;
  uVar17 = uVar18;
  if (0 < iVar13) {
    do {
      uVar14 = (uint)uVar15;
      uVar12 = 0;
      if ((int)uVar14 < iVar13) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = *(int *)((longlong)param_3->DataPtr + uVar17);
      uVar12 = 0;
      if ((int)uVar14 < iVar5) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FHierarchicalBlendTarget::operator=
                ((FHierarchicalBlendTarget *)
                 (puVar9 + (longlong)(int)uVar14 * 0x10 + (longlong)iVar6 * 0x10),
                 (FHierarchicalBlendTarget *)(puVar8 + (longlong)iVar13 * 0x10));
      iVar13 = param_3->ArrayNum;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar17 = uVar17 + 4;
    } while ((int)(uVar14 + 1) < iVar13);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460eccb0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInitialValueIndex>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FInitialValueIndex> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined2 uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ecd36;
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
LAB_1460ecd36:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ecdc2;
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
LAB_1460ecdc2:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 2;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar3 = *(undefined2 *)(puVar8 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 2);
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *(undefined2 *)puVar17 = uVar3;
      puVar17 = puVar17 + 2;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460ecfa0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FInstanceHandle> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  uchar *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar16;
  
  local_68 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar17 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ed026;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ed026:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar17 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar17; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ed0bb;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ed0bb:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar5 = param_1->ComponentStartOffset;
  puVar10 = local_res18->Components;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar16 = uVar18;
  uVar19 = uVar18;
  if (0 < iVar14) {
    do {
      uVar15 = (uint)uVar16;
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar7 = *(undefined4 *)(puVar9 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar19) * 4);
      uVar13 = 0;
      if ((int)uVar15 < iVar6) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar14 = param_3->ArrayNum;
      *(undefined4 *)(puVar10 + uVar19 + (longlong)iVar5 * 4) = uVar7;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar19 = uVar19 + 4;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  if (local_res18->SerialNumber != 0) {
    uVar18 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar18;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1460ed290

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInterrogationInstance>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FInterrogationInstance> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ed316;
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
LAB_1460ed316:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ed3a2;
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
LAB_1460ed3a2:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460ed580

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FInterrogationKey>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FInterrogationKey> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ed606;
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
LAB_1460ed606:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ed692;
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
LAB_1460ed692:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460ed870

void __thiscall
UE::MovieScene::
TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>
           *this,FEntityRange *param_1,FEntityAllocation *param_2,
          TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uchar uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  uchar *puVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar16 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ed8f6;
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
LAB_1460ed8f6:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ed982;
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
LAB_1460ed982:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  iVar6 = param_1->Num;
  puVar18 = local_68->Components + param_1->ComponentStartOffset;
  if ((iVar6 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar14 = uVar16;
  uVar17 = uVar16;
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
      uVar3 = puVar8[*(int *)((longlong)param_3->DataPtr + uVar17)];
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *puVar18 = uVar3;
      puVar18 = puVar18 + 1;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar17 = uVar17 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar16 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar16;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460edb50

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneBlendChannelID>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneBlendChannelID> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  uchar *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar16;
  
  local_68 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar17 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460edbd6;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460edbd6:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar17 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar17; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460edc6b;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460edc6b:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar5 = param_1->ComponentStartOffset;
  puVar10 = local_res18->Components;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar16 = uVar18;
  uVar19 = uVar18;
  if (0 < iVar14) {
    do {
      uVar15 = (uint)uVar16;
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar7 = *(undefined4 *)(puVar9 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar19) * 4);
      uVar13 = 0;
      if ((int)uVar15 < iVar6) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar14 = param_3->ArrayNum;
      *(undefined4 *)(puVar10 + uVar19 + (longlong)iVar5 * 4) = uVar7;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar19 = uVar19 + 4;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  if (local_res18->SerialNumber != 0) {
    uVar18 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar18;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1460ede40

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneEntityID>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FMovieSceneEntityID> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined2 uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460edec6;
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
LAB_1460edec6:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460edf52;
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
LAB_1460edf52:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 2;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar3 = *(undefined2 *)(puVar8 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 2);
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *(undefined2 *)puVar17 = uVar3;
      puVar17 = puVar17 + 2;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460ee130

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneEvaluationHookComponent>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneEvaluationHookComponent> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  FComponentHeader *pFVar14;
  uchar *puVar15;
  uchar *puVar16;
  ulong64 uVar17;
  uint uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  longlong local_58;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar14 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar14; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ee1b6;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460ee1b6:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_60->Components;
  local_68 = pFVar8->ComponentHeaders;
  pFVar14 = local_68 + pFVar8->NumComponents;
  for (; local_68 != pFVar14; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ee242;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460ee242:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_68->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar5 = param_1->Num;
  iVar6 = param_1->ComponentStartOffset;
  puVar15 = local_68->Components;
  if ((iVar5 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar7 = param_3->ArrayNum;
  if (0 < iVar7) {
    puVar15 = puVar15 + (longlong)iVar6 * 0x20 + 0x10;
    local_58 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar18 < iVar7) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar16 = puVar9 + (longlong)*(int *)((longlong)param_3->DataPtr + local_58) * 0x20;
      uVar13 = 0;
      if ((int)uVar18 < iVar5) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)puVar16 != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)puVar16);
      }
      uVar18 = uVar18 + 1;
      *(undefined8 *)(puVar15 + -0x10) = *(undefined8 *)puVar16;
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar16 + 8);
      uVar11 = *(undefined8 *)(puVar16 + 0x18);
      local_58 = local_58 + 4;
      *(undefined8 *)puVar15 = *(undefined8 *)(puVar16 + 0x10);
      *(undefined8 *)(puVar15 + 8) = uVar11;
      puVar15 = puVar15 + 0x20;
    } while ((int)uVar18 < iVar7);
  }
  uVar17 = 0;
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

// Run @ 1460ee460

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieScenePropertyBinding>::Run
          (TDuplicateChildEntityInitializer<FMovieScenePropertyBinding> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
    if ((local_70->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ee4e6;
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
LAB_1460ee4e6:
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
    if ((local_78->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ee572;
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
LAB_1460ee572:
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

// Run @ 1460ee760

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSequenceID>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneSequenceID> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  uchar *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar16;
  
  local_68 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar17 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ee7e6;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ee7e6:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar17 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar17; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ee87b;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ee87b:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar5 = param_1->ComponentStartOffset;
  puVar10 = local_res18->Components;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar16 = uVar18;
  uVar19 = uVar18;
  if (0 < iVar14) {
    do {
      uVar15 = (uint)uVar16;
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar7 = *(undefined4 *)(puVar9 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar19) * 4);
      uVar13 = 0;
      if ((int)uVar15 < iVar6) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar14 = param_3->ArrayNum;
      *(undefined4 *)(puVar10 + uVar19 + (longlong)iVar5 * 4) = uVar7;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar19 = uVar19 + 4;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  if (local_res18->SerialNumber != 0) {
    uVar18 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar18;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1460eea50

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneTrackInstanceComponent>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneTrackInstanceComponent> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uchar *puVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uchar *puVar12;
  FComponentHeader *pFVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  uint uVar16;
  uchar *puVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar17;
  
  local_60 = param_2->ComponentHeaders;
  uVar14 = 0;
  pFVar13 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar13; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eead6;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_1460eead6:
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
  pFVar13 = local_68 + pFVar6->NumComponents;
  for (; local_68 != pFVar13; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eeb62;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_1460eeb62:
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
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar5 = param_1->Num;
  puVar18 = local_68->Components + (longlong)param_1->ComponentStartOffset * 0x10;
  if ((iVar5 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar11 = param_3->ArrayNum;
  uVar15 = uVar14;
  uVar17 = uVar14;
  if (0 < iVar11) {
    do {
      uVar16 = (uint)uVar17;
      uVar10 = 0;
      if ((int)uVar16 < iVar11) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar12 = puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar15) * 0x10;
      uVar10 = 0;
      if ((int)uVar16 < iVar5) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)puVar12 != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)puVar12);
      }
      *(undefined8 *)puVar18 = *(undefined8 *)puVar12;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(puVar12 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)(puVar12 + 8));
      }
      iVar11 = param_3->ArrayNum;
      *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar12 + 8);
      puVar18 = puVar18 + 0x10;
      uVar15 = uVar15 + 4;
      uVar17 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < iVar11);
  }
  if (local_68->SerialNumber != 0) {
    uVar14 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar14;
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

// Run @ 1460eed60

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FObjectComponent> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FComponentHeader *pFVar14;
  uchar *puVar15;
  uchar *puVar16;
  ulong64 uVar17;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  
  local_60 = param_2->ComponentHeaders;
  uVar13 = 0;
  pFVar14 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar14; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eede6;
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
LAB_1460eede6:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar14 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar14; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eee72;
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
LAB_1460eee72:
  EVar4 = pFVar7->LockMode;
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
  iVar5 = param_1->Num;
  puVar15 = local_68->Components + (longlong)param_1->ComponentStartOffset * 0x10;
  if ((iVar5 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar6 = param_3->ArrayNum;
  if (0 < iVar6) {
    lVar12 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      puVar16 = puVar8 + (longlong)*(int *)((longlong)param_3->DataPtr + lVar12) * 0x10;
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
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)puVar16 != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)puVar16);
      }
      uVar13 = uVar13 + 1;
      *(undefined8 *)puVar15 = *(undefined8 *)puVar16;
      lVar12 = lVar12 + 4;
      *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(puVar16 + 8);
      puVar15 = puVar15 + 0x10;
    } while ((int)uVar13 < iVar6);
  }
  uVar17 = 0;
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

// Run @ 1460ef090

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FObjectKey>::Run
          (TDuplicateChildEntityInitializer<FObjectKey> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
  TComponentLock<UE::MovieScene::TWrite<FObjectKey>_> local_58;
  
  local_res10 = param_2->ComponentHeaders;
  pFVar10 = local_res10 + param_2->NumComponents;
  for (; local_res10 != pFVar10; local_res10 = local_res10 + 1) {
    if ((local_res10->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ef129;
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
LAB_1460ef129:
  EVar1 = param_2->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res10->ReadWriteLock);
  }
  LOCK();
  local_res10->ScheduledAccessCount = (atomic<int>)((int)local_res10->ScheduledAccessCount + 1);
  UNLOCK();
  puVar3 = local_res10->Components;
  FEntityAllocation::WriteComponents<FObjectKey>
            (param_1->Allocation,&local_58,*(TComponentTypeID<FObjectKey> *)&this->field_0x8,
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

// Run @ 1460ef300

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FRootInstanceHandle> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  uchar *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar16;
  
  local_68 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar17 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ef386;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ef386:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar17 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar17; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ef41b;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460ef41b:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar5 = param_1->ComponentStartOffset;
  puVar10 = local_res18->Components;
  iVar6 = param_1->Num;
  if ((iVar6 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar16 = uVar18;
  uVar19 = uVar18;
  if (0 < iVar14) {
    do {
      uVar15 = (uint)uVar16;
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar7 = *(undefined4 *)(puVar9 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar19) * 4);
      uVar13 = 0;
      if ((int)uVar15 < iVar6) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar14 = param_3->ArrayNum;
      *(undefined4 *)(puVar10 + uVar19 + (longlong)iVar5 * 4) = uVar7;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar19 = uVar19 + 4;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  if (local_res18->SerialNumber != 0) {
    uVar18 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar18;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1460ef5f0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceBoolChannel> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ef676;
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
LAB_1460ef676:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ef702;
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
LAB_1460ef702:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460ef8e0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceByteChannel> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ef966;
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
LAB_1460ef966:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460ef9f2;
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
LAB_1460ef9f2:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460efbd0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceDoubleChannel> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460efc56;
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
LAB_1460efc56:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460efce2;
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
LAB_1460efce2:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460efec0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceFloatChannel> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460eff46;
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
LAB_1460eff46:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460effd2;
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
LAB_1460effd2:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460f01b0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceIntegerChannel> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f0236;
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
LAB_1460f0236:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f02c2;
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
LAB_1460f02c2:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460f04a0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceObjectPathChannel> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f0526;
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
LAB_1460f0526:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f05b2;
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
LAB_1460f05b2:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460f0790

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceStringChannel> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f0816;
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
LAB_1460f0816:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f08a2;
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
LAB_1460f08a2:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460f0a80

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FSourceTextChannel> *this,
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
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f0b06;
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
LAB_1460f0b06:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f0b92;
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
LAB_1460f0b92:
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
  puVar17 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
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
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar8 = *(undefined8 *)(puVar7 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 8);
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
      *(undefined8 *)puVar17 = uVar8;
      puVar17 = puVar17 + 8;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460f0d70

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FTrackInstanceInputComponent>::Run
          (TDuplicateChildEntityInitializer<FTrackInstanceInputComponent> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  EComponentHeaderLockMode EVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  FComponentHeader *pFVar10;
  undefined8 *puVar11;
  uchar *puVar12;
  FComponentHeader *local_res18;
  TComponentLock<UE::MovieScene::TWrite<FTrackInstanceInputComponent>_> local_68;
  
  local_res18 = param_2->ComponentHeaders;
  pFVar10 = local_res18 + param_2->NumComponents;
  for (; local_res18 != pFVar10; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f0e09;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1460f0e09:
  EVar1 = param_2->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = local_res18->Components;
  FEntityAllocation::WriteComponents<FTrackInstanceInputComponent>
            (param_1->Allocation,&local_68,
             *(TComponentTypeID<FTrackInstanceInputComponent> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  iVar2 = param_1->Num;
  puVar11 = (undefined8 *)((longlong)param_1->ComponentStartOffset * 0x10 + local_68._24_8_);
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = param_3->ArrayNum;
  uVar9 = 0;
  if (0 < iVar3) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < iVar3) {
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
      puVar12 = puVar4 + (longlong)*(int *)(lVar8 + (longlong)param_3->DataPtr) * 0x10;
      uVar7 = 0;
      if ((int)uVar9 < iVar2) {
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
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)puVar12 != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)puVar12);
      }
      uVar9 = uVar9 + 1;
      *puVar11 = *(undefined8 *)puVar12;
      lVar8 = lVar8 + 4;
      *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar12 + 8);
      puVar11 = puVar11 + 2;
    } while ((int)uVar9 < iVar3);
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
  if (EVar1 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  return;
}

// Run @ 1460f1020

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FVariantPropertyTypeIndex>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FVariantPropertyTypeIndex> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uchar uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  uchar *puVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar16 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f10a6;
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
LAB_1460f10a6:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f1132;
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
LAB_1460f1132:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  iVar6 = param_1->Num;
  puVar18 = local_68->Components + param_1->ComponentStartOffset;
  if ((iVar6 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar14 = uVar16;
  uVar17 = uVar16;
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
      uVar3 = puVar8[*(int *)((longlong)param_3->DataPtr + uVar17)];
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *puVar18 = uVar3;
      puVar18 = puVar18 + 1;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar17 = uVar17 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar16 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar16;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460f1300

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<TSharedPtr<FTrackInstancePropertyBindings,1>_>::Run
          (TDuplicateChildEntityInitializer<TSharedPtr<FTrackInstancePropertyBindings,1>_> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  FEntityAllocation *pFVar6;
  uchar *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FComponentHeader *pFVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  uint uVar18;
  uchar *puVar20;
  FComponentHeader *local_78;
  FComponentHeader *local_70;
  ulonglong uVar19;
  
  local_70 = param_2->ComponentHeaders;
  uVar16 = 0;
  pFVar15 = local_70 + param_2->NumComponents;
  for (; local_70 != pFVar15; local_70 = local_70 + 1) {
    if ((local_70->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f1386;
  }
  local_70 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460f1386:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_70->ReadWriteLock);
  }
  LOCK();
  local_70->ScheduledAccessCount = (atomic<int>)((int)local_70->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar6 = param_1->Allocation;
  puVar7 = local_70->Components;
  local_78 = pFVar6->ComponentHeaders;
  pFVar15 = local_78 + pFVar6->NumComponents;
  for (; local_78 != pFVar15; local_78 = local_78 + 1) {
    if ((local_78->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f1412;
  }
  local_78 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460f1412:
  EVar4 = pFVar6->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_78->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_78->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar5 = param_1->Num;
  puVar20 = local_78->Components + (longlong)param_1->ComponentStartOffset * 0x10;
  if ((iVar5 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar17 = uVar16;
  uVar19 = uVar16;
  if (0 < iVar14) {
    do {
      uVar18 = (uint)uVar19;
      uVar13 = 0;
      if ((int)uVar18 < iVar14) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar14 = *(int *)((longlong)param_3->DataPtr + uVar17);
      uVar13 = 0;
      if ((int)uVar18 < iVar5) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar8 = *(longlong *)(puVar7 + (longlong)iVar14 * 0x10 + 8);
      uVar9 = *(undefined8 *)(puVar7 + (longlong)iVar14 * 0x10);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      pTVar11 = *(TReferenceControllerBase<1> **)(puVar20 + 8);
      *(undefined8 *)puVar20 = uVar9;
      *(longlong *)(puVar20 + 8) = lVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      iVar14 = param_3->ArrayNum;
      puVar20 = puVar20 + 0x10;
      uVar17 = uVar17 + 4;
      uVar19 = (ulonglong)(uVar18 + 1);
    } while ((int)(uVar18 + 1) < iVar14);
  }
  if (local_78->SerialNumber != 0) {
    uVar16 = local_78->SerialNumber;
  }
  local_78->SerialNumber = uVar16;
  LOCK();
  local_78->ScheduledAccessCount = (atomic<int>)((int)local_78->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_78->ReadWriteLock);
  }
  LOCK();
  local_70->ScheduledAccessCount = (atomic<int>)((int)local_70->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_70->ReadWriteLock);
  }
  return;
}

// Run @ 1460f1600

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<TSubclassOf<UMovieSceneBlenderSystem>_>::Run
          (TDuplicateChildEntityInitializer<TSubclassOf<UMovieSceneBlenderSystem>_> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  UObject *pUVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  ulong64 uVar16;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  uchar *local_58;
  ulonglong uVar15;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar17 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar17; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f1686;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460f1686:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_60->Components;
  local_68 = pFVar8->ComponentHeaders;
  pFVar17 = local_68 + pFVar8->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f1712;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460f1712:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_68->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_58 = local_68->Components + (longlong)param_1->ComponentStartOffset * 8;
  iVar5 = param_1->Num;
  if ((iVar5 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar6 = param_3->ArrayNum;
  uVar15 = uVar18;
  uVar16 = uVar18;
  if (0 < iVar6) {
    do {
      uVar14 = (uint)uVar15;
      uVar13 = 0;
      if ((int)uVar14 < iVar6) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar7 = *(int *)((longlong)param_3->DataPtr + uVar16);
      uVar13 = 0;
      if ((int)uVar14 < iVar5) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar10 = *(UObject **)(puVar9 + (longlong)iVar7 * 8), pUVar10 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar10);
      }
      *(undefined8 *)local_58 = *(undefined8 *)(puVar9 + (longlong)iVar7 * 8);
      local_58 = local_58 + 8;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar14 + 1) < iVar6);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
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

// Run @ 1460f1920

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FString>::Run
          (TDuplicateChildEntityInitializer<FString> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  ForAnyElementType *pFVar2;
  atomic<int> aVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  uchar *puVar10;
  FScriptContainerElement *_Src;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong64 uVar16;
  ForAnyElementType *pFVar17;
  ulong64 uVar18;
  FComponentHeader *pFVar19;
  ulong64 uVar20;
  int *piVar21;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  
  local_60 = param_2->ComponentHeaders;
  uVar20 = 0;
  pFVar19 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar19; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f19a6;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460f19a6:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_60->Components;
  local_68 = pFVar8->ComponentHeaders;
  pFVar19 = local_68 + pFVar8->NumComponents;
  for (; local_68 != pFVar19; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f1a32;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1460f1a32:
  EVar5 = pFVar8->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_68->ScheduledAccessCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar3 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar6 = param_1->Num;
  iVar7 = param_1->ComponentStartOffset;
  puVar10 = local_68->Components;
  if ((iVar6 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  if (0 < iVar14) {
    piVar21 = (int *)(puVar10 + (longlong)iVar7 * 0x10 + 0xc);
    uVar16 = uVar20;
    uVar18 = uVar20;
    do {
      uVar15 = (uint)uVar16;
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar17 = (ForAnyElementType *)
                (puVar9 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar18) * 0x10);
      uVar13 = 0;
      if ((int)uVar15 < iVar6) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar2 = (ForAnyElementType *)(piVar21 + -3);
      if (pFVar2 != pFVar17) {
        iVar7 = *(int *)&pFVar17[1].Data;
        _Src = pFVar17->Data;
        piVar21[-1] = iVar7;
        if ((iVar7 == 0) && (*piVar21 == 0)) {
          *piVar21 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,*piVar21,pFVar2,iVar7,piVar21);
          if (iVar7 != 0) {
            memcpy(pFVar2->Data,_Src,(longlong)iVar7 * 2);
          }
        }
      }
      uVar16 = (ulong64)(uVar15 + 1);
      uVar18 = uVar18 + 4;
      piVar21 = piVar21 + 4;
      iVar14 = param_3->ArrayNum;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  if (local_68->SerialNumber != 0) {
    uVar20 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar20;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1460f1c60

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FText>::Run
          (TDuplicateChildEntityInitializer<FText> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  int iVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  longlong *plVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  FComponentHeader *pFVar16;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  longlong *plVar19;
  uint uVar20;
  longlong *plVar21;
  undefined1 local_68 [8];
  FComponentHeader *local_60;
  FComponentHeader *local_58;
  uchar *local_50;
  
  local_58 = param_2->ComponentHeaders;
  pFVar17 = (FComponentHeader *)0x0;
  pFVar16 = local_58 + param_2->NumComponents;
  for (; local_58 != pFVar16; local_58 = local_58 + 1) {
    pFVar15 = local_58;
    if ((local_58->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f1ce6;
  }
  local_58 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar15 = pFVar17;
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460f1ce6:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  local_50 = pFVar15->Components;
  local_60 = pFVar7->ComponentHeaders;
  pFVar16 = local_60 + pFVar7->NumComponents;
  for (; local_60 != pFVar16; local_60 = local_60 + 1) {
    pFVar14 = local_60;
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f1d72;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar14 = pFVar17;
  if (bVar11) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1460f1d72:
  EVar4 = pFVar7->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  LOCK();
  paVar1 = &pFVar14->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
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
  iVar5 = param_1->Num;
  plVar21 = (longlong *)(pFVar14->Components + (longlong)param_1->ComponentStartOffset * 0x10);
  if ((iVar5 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar6 = param_3->ArrayNum;
  if (0 < iVar6) {
    lVar13 = 0;
    do {
      uVar20 = (uint)pFVar17;
      uVar12 = 0;
      if ((int)uVar20 < iVar6) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar19 = (longlong *)
                (local_50 + (longlong)*(int *)((longlong)param_3->DataPtr + lVar13) * 0x10);
      uVar12 = 0;
      if ((int)uVar20 < iVar5) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      plVar8 = (longlong *)*plVar19;
      plVar9 = (longlong *)*plVar21;
      if (plVar9 != plVar8) {
        *plVar21 = (longlong)plVar8;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))(plVar8,local_68);
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      pFVar17 = (FComponentHeader *)(ulonglong)(uVar20 + 1);
      lVar13 = lVar13 + 4;
      *(int *)(plVar21 + 1) = (int)plVar19[1];
      plVar21 = plVar21 + 2;
      pFVar14 = local_60;
      pFVar15 = local_58;
    } while ((int)(uVar20 + 1) < iVar6);
  }
  uVar18 = 0;
  if (pFVar14->SerialNumber != 0) {
    uVar18 = pFVar14->SerialNumber;
  }
  pFVar14->SerialNumber = uVar18;
  LOCK();
  pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar14->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  return;
}

// Run @ 1460f1f90

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<__int64>::Run
          (TDuplicateChildEntityInitializer<__int64> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f2016;
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
LAB_1460f2016:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f20a2;
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
LAB_1460f20a2:
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

// Run @ 1460f2270

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<bool>::Run
          (TDuplicateChildEntityInitializer<bool> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uchar uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  FEntityAllocation *pFVar7;
  uchar *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FComponentHeader *pFVar15;
  ulong64 uVar16;
  uchar *puVar17;
  ulong64 uVar18;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  ulonglong uVar14;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar15 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar15; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f22f6;
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
LAB_1460f22f6:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_60->Components;
  local_68 = pFVar7->ComponentHeaders;
  pFVar15 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1460f2382;
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
LAB_1460f2382:
  EVar5 = pFVar7->LockMode;
  if (EVar5 == Mutex) {
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
  iVar6 = param_1->Num;
  puVar17 = local_68->Components + param_1->ComponentStartOffset;
  if ((iVar6 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar12 = param_3->ArrayNum;
  uVar14 = uVar18;
  uVar16 = uVar18;
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
      uVar3 = puVar8[*(int *)((longlong)param_3->DataPtr + uVar16)];
      uVar11 = 0;
      if ((int)uVar13 < iVar6) {
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
      *puVar17 = uVar3;
      puVar17 = puVar17 + 1;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 4;
    } while ((int)(uVar13 + 1) < iVar12);
  }
  if (local_68->SerialNumber != 0) {
    uVar18 = local_68->SerialNumber;
  }
  local_68->SerialNumber = uVar18;
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  return;
}

// Run @ 1462ba4a0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<float>::Run
          (TDuplicateChildEntityInitializer<float> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined4 uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  uchar *puVar9;
  uchar *puVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  FComponentHeader *pFVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  FComponentHeader *local_res18;
  FComponentHeader *local_res20;
  ulonglong uVar16;
  
  local_res20 = param_2->ComponentHeaders;
  uVar19 = 0;
  pFVar17 = local_res20 + param_2->NumComponents;
  for (; local_res20 != pFVar17; local_res20 = local_res20 + 1) {
    if ((local_res20->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1462ba541;
  }
  local_res20 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1462ba541:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res20->ReadWriteLock);
  }
  LOCK();
  local_res20->ScheduledAccessCount = (atomic<int>)((int)local_res20->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_res20->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar17 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar17; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1462ba5d8;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1462ba5d8:
  EVar5 = pFVar8->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar2 != (atomic<int>)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar6 = param_1->ComponentStartOffset;
  puVar10 = local_res18->Components;
  iVar7 = param_1->Num;
  if ((iVar7 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar16 = uVar19;
  uVar18 = uVar19;
  if (0 < iVar14) {
    do {
      uVar15 = (uint)uVar16;
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar15 < iVar7) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      uVar3 = *(undefined4 *)(puVar9 + (longlong)*(int *)((longlong)param_3->DataPtr + uVar18) * 4);
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar14 = param_3->ArrayNum;
      *(undefined4 *)(puVar10 + uVar18 + (longlong)iVar6 * 4) = uVar3;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar18 = uVar18 + 4;
    } while ((int)(uVar15 + 1) < iVar14);
  }
  if (local_res18->SerialNumber != 0) {
    uVar19 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar19;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_res20->ScheduledAccessCount = (atomic<int>)((int)local_res20->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_res20->ReadWriteLock);
  }
  return;
}


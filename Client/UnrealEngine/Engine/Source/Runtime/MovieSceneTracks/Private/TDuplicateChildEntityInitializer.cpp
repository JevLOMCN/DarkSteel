// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 25

// Run @ 1466e3db0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::Math::TRotator<double>_>::Run
          (TDuplicateChildEntityInitializer<UE::Math::TRotator<double>_> *this,FEntityRange *param_1
          ,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
  TComponentLock<UE::MovieScene::TWrite<UE::Math::TRotator<double>_>_> local_58;
  
  pFVar15 = param_2->ComponentHeaders;
  pFVar18 = pFVar15 + param_2->NumComponents;
  for (; pFVar15 != pFVar18; pFVar15 = pFVar15 + 1) {
    if ((pFVar15->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e3e38;
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
LAB_1466e3e38:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
  }
  LOCK();
  pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
  UNLOCK();
  puVar5 = pFVar15->Components;
  FEntityAllocation::WriteComponents<UE::Math::TRotator<double>_>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::Math::TRotator<double>_> *)&this->field_0x8,
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

// Run @ 1466e4050

void __thiscall
UE::MovieScene::
TDuplicateChildEntityInitializer<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>::Run
          (TDuplicateChildEntityInitializer<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
           *this,FEntityRange *param_1,FEntityAllocation *param_2,
          TArrayView<int_const_,int> *param_3)

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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e40d6;
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
LAB_1466e40d6:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e4162;
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
LAB_1466e4162:
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

// Run @ 1466e4340

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>::
Run(TDuplicateChildEntityInitializer<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> *this,
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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e43c6;
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
LAB_1466e43c6:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e4452;
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
LAB_1466e4452:
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

// Run @ 1466e4630

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  uchar *puVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  int iVar7;
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
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar20;
  
  local_68 = param_2->ComponentHeaders;
  uVar23 = 0;
  pFVar21 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar21; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e46b3;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1466e46b3:
  EVar5 = param_2->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar21 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar21; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e4748;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1466e4748:
  EVar6 = pFVar8->LockMode;
  if (EVar6 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
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
  iVar7 = param_1->Num;
  puVar24 = local_res18->Components + (longlong)param_1->ComponentStartOffset * 0x18;
  if ((iVar7 < 0) &&
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
      puVar2 = puVar9 + lVar18 * 0x18;
      uVar11 = *(undefined4 *)puVar2;
      uVar12 = *(undefined4 *)(puVar2 + 4);
      uVar13 = *(undefined4 *)(puVar2 + 8);
      uVar14 = *(undefined4 *)(puVar2 + 0xc);
      uVar4 = *(undefined8 *)(puVar9 + lVar18 * 0x18 + 0x10);
      uVar16 = 0;
      if ((int)uVar19 < iVar7) {
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
      *(undefined8 *)(puVar24 + 0x10) = uVar4;
      puVar24 = puVar24 + 0x18;
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar22 = uVar22 + 4;
    } while ((int)(uVar19 + 1) < iVar17);
  }
  if (local_res18->SerialNumber != 0) {
    uVar23 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar23;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar6 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1466e4940

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
::Run(TDuplicateChildEntityInitializer<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *this,
     FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  undefined2 uVar1;
  EComponentHeaderLockMode EVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FComponentHeader *pFVar10;
  longlong lVar11;
  undefined2 *puVar12;
  FComponentHeader *local_res10;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
  local_58;
  
  local_res10 = param_2->ComponentHeaders;
  pFVar10 = local_res10 + param_2->NumComponents;
  for (; local_res10 != pFVar10; local_res10 = local_res10 + 1) {
    if ((local_res10->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e49d9;
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
LAB_1466e49d9:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res10->ReadWriteLock);
  }
  LOCK();
  local_res10->ScheduledAccessCount = (atomic<int>)((int)local_res10->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = local_res10->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> *)
              &this->field_0x8,(FEntityAllocationWriteContext)0x0);
  iVar3 = param_1->Num;
  puVar12 = (undefined2 *)(local_58._24_8_ + (longlong)param_1->ComponentStartOffset * 2);
  if ((iVar3 < 0) &&
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
      if ((int)uVar9 < iVar3) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      uVar1 = *(undefined2 *)(puVar4 + (longlong)*(int *)(lVar11 + (longlong)param_3->DataPtr) * 2);
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
      *puVar12 = uVar1;
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
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_res10->ReadWriteLock);
  }
  return;
}

// Run @ 1466e4bb0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FComponentMaterialInfo>::Run
          (TDuplicateChildEntityInitializer<FComponentMaterialInfo> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e4c36;
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
LAB_1466e4c36:
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
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e4cc8;
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
LAB_1466e4cc8:
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

// Run @ 1466e4e90

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FConstraintComponentData>::Run
          (TDuplicateChildEntityInitializer<FConstraintComponentData> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  uchar *puVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  int iVar7;
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
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar20;
  
  local_68 = param_2->ComponentHeaders;
  uVar23 = 0;
  pFVar21 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar21; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e4f13;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1466e4f13:
  EVar5 = param_2->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar21 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar21; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e4fa8;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1466e4fa8:
  EVar6 = pFVar8->LockMode;
  if (EVar6 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
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
  iVar7 = param_1->Num;
  puVar24 = local_res18->Components + (longlong)param_1->ComponentStartOffset * 0x18;
  if ((iVar7 < 0) &&
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
      puVar2 = puVar9 + lVar18 * 0x18;
      uVar11 = *(undefined4 *)puVar2;
      uVar12 = *(undefined4 *)(puVar2 + 4);
      uVar13 = *(undefined4 *)(puVar2 + 8);
      uVar14 = *(undefined4 *)(puVar2 + 0xc);
      uVar4 = *(undefined8 *)(puVar9 + lVar18 * 0x18 + 0x10);
      uVar16 = 0;
      if ((int)uVar19 < iVar7) {
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
      *(undefined8 *)(puVar24 + 0x10) = uVar4;
      puVar24 = puVar24 + 0x18;
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar22 = uVar22 + 4;
    } while ((int)(uVar19 + 1) < iVar17);
  }
  if (local_res18->SerialNumber != 0) {
    uVar23 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar23;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar6 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1466e51a0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FDoubleIntermediateVector>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FDoubleIntermediateVector> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  FComponentHeader *pFVar16;
  undefined4 *puVar17;
  uint uVar18;
  FComponentHeader *pFVar19;
  longlong lVar20;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FDoubleIntermediateVector>_> local_58;
  
  pFVar16 = param_2->ComponentHeaders;
  pFVar19 = pFVar16 + param_2->NumComponents;
  for (; pFVar16 != pFVar19; pFVar16 = pFVar16 + 1) {
    if ((pFVar16->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e5228;
  }
  pFVar16 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1466e5228:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  LOCK();
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = pFVar16->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FDoubleIntermediateVector>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  iVar3 = param_1->Num;
  puVar17 = (undefined4 *)((longlong)param_1->ComponentStartOffset * 0x20 + local_58._24_8_);
  if ((iVar3 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar18 = 0;
  if (0 < iVar14) {
    lVar20 = 0;
    do {
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar15 = (longlong)*(int *)(lVar20 + (longlong)param_3->DataPtr) * 0x20;
      uVar13 = 0;
      if ((int)uVar18 < iVar3) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      puVar1 = puVar4 + lVar15;
      uVar6 = *(undefined4 *)puVar1;
      uVar7 = *(undefined4 *)(puVar1 + 4);
      uVar8 = *(undefined4 *)(puVar1 + 8);
      uVar9 = *(undefined4 *)(puVar1 + 0xc);
      puVar1 = puVar4 + lVar15 + 0x10;
      uVar10 = *(undefined8 *)puVar1;
      uVar11 = *(undefined8 *)(puVar1 + 8);
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = param_3->ArrayNum;
      uVar18 = uVar18 + 1;
      *puVar17 = uVar6;
      puVar17[1] = uVar7;
      puVar17[2] = uVar8;
      puVar17[3] = uVar9;
      lVar20 = lVar20 + 4;
      local_68 = (undefined4)uVar10;
      uStack_64 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_60 = (undefined4)uVar11;
      uStack_5c = (undefined4)((ulonglong)uVar11 >> 0x20);
      puVar17[4] = local_68;
      puVar17[5] = uStack_64;
      puVar17[6] = uStack_60;
      puVar17[7] = uStack_5c;
      puVar17 = puVar17 + 8;
    } while ((int)uVar18 < iVar14);
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
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  return;
}

// Run @ 1466e5420

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FFadeComponentData>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FFadeComponentData> *this,
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
    if ((local_70->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e54a6;
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
LAB_1466e54a6:
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
    if ((local_78->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e5532;
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
LAB_1466e5532:
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

// Run @ 1466e5720

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FFloatIntermediateVector>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FFloatIntermediateVector> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  FComponentHeader *pFVar16;
  undefined4 *puVar17;
  uint uVar18;
  FComponentHeader *pFVar19;
  longlong lVar20;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FFloatIntermediateVector>_> local_58;
  
  pFVar16 = param_2->ComponentHeaders;
  pFVar19 = pFVar16 + param_2->NumComponents;
  for (; pFVar16 != pFVar19; pFVar16 = pFVar16 + 1) {
    if ((pFVar16->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e57a8;
  }
  pFVar16 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1466e57a8:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  LOCK();
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = pFVar16->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FFloatIntermediateVector>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  iVar3 = param_1->Num;
  puVar17 = (undefined4 *)((longlong)param_1->ComponentStartOffset * 0x20 + local_58._24_8_);
  if ((iVar3 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar18 = 0;
  if (0 < iVar14) {
    lVar20 = 0;
    do {
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar15 = (longlong)*(int *)(lVar20 + (longlong)param_3->DataPtr) * 0x20;
      uVar13 = 0;
      if ((int)uVar18 < iVar3) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      puVar1 = puVar4 + lVar15;
      uVar6 = *(undefined4 *)puVar1;
      uVar7 = *(undefined4 *)(puVar1 + 4);
      uVar8 = *(undefined4 *)(puVar1 + 8);
      uVar9 = *(undefined4 *)(puVar1 + 0xc);
      puVar1 = puVar4 + lVar15 + 0x10;
      uVar10 = *(undefined8 *)puVar1;
      uVar11 = *(undefined8 *)(puVar1 + 8);
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = param_3->ArrayNum;
      uVar18 = uVar18 + 1;
      *puVar17 = uVar6;
      puVar17[1] = uVar7;
      puVar17[2] = uVar8;
      puVar17[3] = uVar9;
      lVar20 = lVar20 + 4;
      local_68 = (undefined4)uVar10;
      uStack_64 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_60 = (undefined4)uVar11;
      uStack_5c = (undefined4)((ulonglong)uVar11 >> 0x20);
      puVar17[4] = local_68;
      puVar17[5] = uStack_64;
      puVar17[6] = uStack_60;
      puVar17[7] = uStack_5c;
      puVar17 = puVar17 + 8;
    } while ((int)uVar18 < iVar14);
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
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  return;
}

// Run @ 1466e59a0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediate3DTransform>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediate3DTransform> *this,
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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  FComponentHeader *pFVar21;
  undefined4 *puVar22;
  uint uVar23;
  FComponentHeader *pFVar24;
  longlong lVar25;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediate3DTransform>_> local_58;
  
  pFVar21 = param_2->ComponentHeaders;
  pFVar24 = pFVar21 + param_2->NumComponents;
  for (; pFVar21 != pFVar24; pFVar21 = pFVar21 + 1) {
    if ((pFVar21->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e5a28;
  }
  pFVar21 = (FComponentHeader *)0x0;
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar17) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1466e5a28:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
  }
  LOCK();
  pFVar21->ScheduledAccessCount = (atomic<int>)((int)pFVar21->ScheduledAccessCount + 1);
  UNLOCK();
  puVar5 = pFVar21->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediate3DTransform>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  iVar4 = param_1->Num;
  puVar22 = (undefined4 *)(local_58._24_8_ + (longlong)param_1->ComponentStartOffset * 0x48);
  if ((iVar4 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar19 = param_3->ArrayNum;
  uVar23 = 0;
  if (0 < iVar19) {
    lVar25 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar23 < iVar19) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar20 = (longlong)*(int *)(lVar25 + (longlong)param_3->DataPtr);
      uVar11 = *(undefined8 *)(puVar5 + lVar20 * 0x48 + 0x10);
      uVar12 = *(undefined8 *)(puVar5 + lVar20 * 0x48 + 0x10 + 8);
      uVar13 = *(undefined8 *)(puVar5 + lVar20 * 0x48 + 0x20);
      uVar14 = *(undefined8 *)(puVar5 + lVar20 * 0x48 + 0x20 + 8);
      puVar1 = puVar5 + lVar20 * 0x48;
      uVar7 = *(undefined4 *)puVar1;
      uVar8 = *(undefined4 *)(puVar1 + 4);
      uVar9 = *(undefined4 *)(puVar1 + 8);
      uVar10 = *(undefined4 *)(puVar1 + 0xc);
      uVar15 = *(undefined8 *)(puVar5 + lVar20 * 0x48 + 0x30);
      uVar16 = *(undefined8 *)(puVar5 + lVar20 * 0x48 + 0x30 + 8);
      uVar2 = *(undefined8 *)(puVar5 + lVar20 * 0x48 + 0x40);
      uVar18 = 0;
      if ((int)uVar23 < iVar4) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar19 = param_3->ArrayNum;
      uVar23 = uVar23 + 1;
      *puVar22 = uVar7;
      puVar22[1] = uVar8;
      puVar22[2] = uVar9;
      puVar22[3] = uVar10;
      lVar25 = lVar25 + 4;
      *(undefined8 *)(puVar22 + 4) = uVar11;
      *(undefined8 *)(puVar22 + 6) = uVar12;
      *(undefined8 *)(puVar22 + 8) = uVar13;
      *(undefined8 *)(puVar22 + 10) = uVar14;
      *(undefined8 *)(puVar22 + 0xc) = uVar15;
      *(undefined8 *)(puVar22 + 0xe) = uVar16;
      *(undefined8 *)(puVar22 + 0x10) = uVar2;
      puVar22 = puVar22 + 0x12;
    } while ((int)uVar23 < iVar19);
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
  pFVar21->ScheduledAccessCount = (atomic<int>)((int)pFVar21->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar21->ReadWriteLock);
  }
  return;
}

// Run @ 1466e5c80

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateColor>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateColor> *this,
          FEntityRange *param_1,FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  FComponentHeader *pFVar16;
  undefined4 *puVar17;
  uint uVar18;
  FComponentHeader *pFVar19;
  longlong lVar20;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateColor>_> local_58;
  
  pFVar16 = param_2->ComponentHeaders;
  pFVar19 = pFVar16 + param_2->NumComponents;
  for (; pFVar16 != pFVar19; pFVar16 = pFVar16 + 1) {
    if ((pFVar16->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e5d08;
  }
  pFVar16 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar12) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1466e5d08:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  LOCK();
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = pFVar16->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateColor>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::MovieScene::FIntermediateColor> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  iVar3 = param_1->Num;
  puVar17 = (undefined4 *)((longlong)param_1->ComponentStartOffset * 0x20 + local_58._24_8_);
  if ((iVar3 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar14 = param_3->ArrayNum;
  uVar18 = 0;
  if (0 < iVar14) {
    lVar20 = 0;
    do {
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar15 = (longlong)*(int *)(lVar20 + (longlong)param_3->DataPtr) * 0x20;
      uVar13 = 0;
      if ((int)uVar18 < iVar3) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      puVar1 = puVar4 + lVar15;
      uVar6 = *(undefined4 *)puVar1;
      uVar7 = *(undefined4 *)(puVar1 + 4);
      uVar8 = *(undefined4 *)(puVar1 + 8);
      uVar9 = *(undefined4 *)(puVar1 + 0xc);
      puVar1 = puVar4 + lVar15 + 0x10;
      uVar10 = *(undefined8 *)puVar1;
      uVar11 = *(undefined8 *)(puVar1 + 8);
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = param_3->ArrayNum;
      uVar18 = uVar18 + 1;
      *puVar17 = uVar6;
      puVar17[1] = uVar7;
      puVar17[2] = uVar8;
      puVar17[3] = uVar9;
      lVar20 = lVar20 + 4;
      local_68 = (undefined4)uVar10;
      uStack_64 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_60 = (undefined4)uVar11;
      uStack_5c = (undefined4)((ulonglong)uVar11 >> 0x20);
      puVar17[4] = local_68;
      puVar17[5] = uStack_64;
      puVar17[6] = uStack_60;
      puVar17[7] = uStack_5c;
      puVar17 = puVar17 + 8;
    } while ((int)uVar18 < iVar14);
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
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  return;
}

// Run @ 1466e5f00

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FLevelVisibilityComponentData>::Run
          (TDuplicateChildEntityInitializer<FLevelVisibilityComponentData> *this,
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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e5f86;
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
LAB_1466e5f86:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e6012;
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
LAB_1466e6012:
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

// Run @ 1466e6220

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMaterialParameterInfo>::Run
          (TDuplicateChildEntityInitializer<FMaterialParameterInfo> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e62a6;
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
LAB_1466e62a6:
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
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e6338;
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
LAB_1466e6338:
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

// Run @ 1466e6500

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneAudioComponentData>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneAudioComponentData> *this,
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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e6586;
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
LAB_1466e6586:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e6612;
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
LAB_1466e6612:
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

// Run @ 1466e6820

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneAudioInputData>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneAudioInputData> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  FComponentHeader *pFVar30;
  ulong64 uVar31;
  uchar *puVar32;
  ulong64 uVar33;
  FComponentHeader *local_res18;
  FComponentHeader *local_b8;
  ulonglong uVar29;
  
  local_b8 = param_2->ComponentHeaders;
  uVar33 = 0;
  pFVar30 = local_b8 + param_2->NumComponents;
  for (; local_b8 != pFVar30; local_b8 = local_b8 + 1) {
    if ((local_b8->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e68a6;
  }
  local_b8 = (FComponentHeader *)0x0;
  bVar24 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar24) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1466e68a6:
  EVar4 = param_2->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_b8->ReadWriteLock);
  }
  LOCK();
  local_b8->ScheduledAccessCount = (atomic<int>)((int)local_b8->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar7 = param_1->Allocation;
  puVar8 = local_b8->Components;
  local_res18 = pFVar7->ComponentHeaders;
  pFVar30 = local_res18 + pFVar7->NumComponents;
  for (; local_res18 != pFVar30; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e6938;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar24 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar24) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1466e6938:
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
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("PreviousAccessCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x487,
                          L"Component header is still in use when it is being opened for write!"),
     bVar24)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar6 = param_1->Num;
  puVar32 = local_res18->Components + (longlong)param_1->ComponentStartOffset * 0x60;
  if ((iVar6 < 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar24)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar27 = param_3->ArrayNum;
  uVar29 = uVar33;
  uVar31 = uVar33;
  if (0 < iVar27) {
    do {
      uVar28 = (uint)uVar29;
      uVar25 = 0;
      if ((int)uVar28 < iVar27) {
        uVar25 = ~uVar28 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar24)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar26 = (longlong)*(int *)((longlong)param_3->DataPtr + uVar31) * 0x60;
      uVar14 = *(undefined8 *)(puVar8 + lVar26 + 0x10);
      uVar15 = *(undefined8 *)(puVar8 + lVar26 + 0x10 + 8);
      uVar16 = *(undefined8 *)(puVar8 + lVar26 + 0x20);
      uVar17 = *(undefined8 *)(puVar8 + lVar26 + 0x20 + 8);
      puVar2 = puVar8 + lVar26;
      uVar10 = *(undefined4 *)puVar2;
      uVar11 = *(undefined4 *)(puVar2 + 4);
      uVar12 = *(undefined4 *)(puVar2 + 8);
      uVar13 = *(undefined4 *)(puVar2 + 0xc);
      uVar18 = *(undefined8 *)(puVar8 + lVar26 + 0x30);
      uVar19 = *(undefined8 *)(puVar8 + lVar26 + 0x30 + 8);
      uVar20 = *(undefined8 *)(puVar8 + lVar26 + 0x40);
      uVar21 = *(undefined8 *)(puVar8 + lVar26 + 0x40 + 8);
      uVar22 = *(undefined8 *)(puVar8 + lVar26 + 0x50);
      uVar23 = *(undefined8 *)(puVar8 + lVar26 + 0x50 + 8);
      uVar25 = 0;
      if ((int)uVar28 < iVar6) {
        uVar25 = ~uVar28 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar24)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar27 = param_3->ArrayNum;
      *(undefined4 *)puVar32 = uVar10;
      *(undefined4 *)(puVar32 + 4) = uVar11;
      *(undefined4 *)(puVar32 + 8) = uVar12;
      *(undefined4 *)(puVar32 + 0xc) = uVar13;
      *(undefined8 *)(puVar32 + 0x10) = uVar14;
      *(undefined8 *)(puVar32 + 0x18) = uVar15;
      *(undefined8 *)(puVar32 + 0x20) = uVar16;
      *(undefined8 *)(puVar32 + 0x28) = uVar17;
      *(undefined8 *)(puVar32 + 0x30) = uVar18;
      *(undefined8 *)(puVar32 + 0x38) = uVar19;
      *(undefined8 *)(puVar32 + 0x40) = uVar20;
      *(undefined8 *)(puVar32 + 0x48) = uVar21;
      *(undefined8 *)(puVar32 + 0x50) = uVar22;
      *(undefined8 *)(puVar32 + 0x58) = uVar23;
      puVar32 = puVar32 + 0x60;
      uVar29 = (ulonglong)(uVar28 + 1);
      uVar31 = uVar31 + 4;
    } while ((int)(uVar28 + 1) < iVar27);
  }
  if (local_res18->SerialNumber != 0) {
    uVar33 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar33;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_b8->ScheduledAccessCount = (atomic<int>)((int)local_b8->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_b8->ReadWriteLock);
  }
  return;
}

// Run @ 1466e6b80

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneCameraShakeComponentData>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneCameraShakeComponentData> *this,
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
  uchar *puVar14;
  FComponentHeader *pFVar15;
  uint uVar16;
  ulong64 uVar17;
  longlong local_78;
  FComponentHeader *local_70;
  FComponentHeader *local_68;
  uchar *local_60;
  
  local_68 = param_2->ComponentHeaders;
  pFVar15 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar15; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e6c06;
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
LAB_1466e6c06:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_70 = pFVar8->ComponentHeaders;
  pFVar15 = local_70 + pFVar8->NumComponents;
  for (; local_70 != pFVar15; local_70 = local_70 + 1) {
    if ((local_70->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e6c92;
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
LAB_1466e6c92:
  EVar4 = pFVar8->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_70->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_70->ScheduledAccessCount;
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
  local_60 = local_70->Components;
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
    local_60 = local_60 + (longlong)iVar6 * 0x40 + 0xc;
    local_78 = 0;
    uVar17 = 0;
    do {
      uVar16 = (uint)uVar17;
      uVar13 = 0;
      if ((int)uVar16 < iVar7) {
        uVar13 = ~uVar16 >> 0x1f;
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
      puVar14 = puVar9 + (longlong)*(int *)((longlong)param_3->DataPtr + local_78) * 0x40;
      uVar13 = 0;
      if ((int)uVar16 < iVar5) {
        uVar13 = ~uVar16 >> 0x1f;
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
         (*(UObject **)puVar14 != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)puVar14);
      }
      uVar17 = (ulong64)(uVar16 + 1);
      local_78 = local_78 + 4;
      *(undefined8 *)(local_60 + -0xc) = *(undefined8 *)puVar14;
      *(undefined4 *)(local_60 + -4) = *(undefined4 *)(puVar14 + 8);
      *local_60 = puVar14[0xc];
      uVar11 = *(undefined8 *)(puVar14 + 0x18);
      *(undefined8 *)(local_60 + 4) = *(undefined8 *)(puVar14 + 0x10);
      *(undefined8 *)(local_60 + 0xc) = uVar11;
      *(undefined8 *)(local_60 + 0x14) = *(undefined8 *)(puVar14 + 0x20);
      *(undefined4 *)(local_60 + 0x1c) = *(undefined4 *)(puVar14 + 0x28);
      *(undefined4 *)(local_60 + 0x20) = *(undefined4 *)(puVar14 + 0x2c);
      uVar11 = *(undefined8 *)(puVar14 + 0x38);
      *(undefined8 *)(local_60 + 0x24) = *(undefined8 *)(puVar14 + 0x30);
      *(undefined8 *)(local_60 + 0x2c) = uVar11;
      local_60 = local_60 + 0x40;
    } while ((int)(uVar16 + 1) < iVar7);
  }
  uVar17 = 0;
  if (local_70->SerialNumber != 0) {
    uVar17 = local_70->SerialNumber;
  }
  local_70->SerialNumber = uVar17;
  LOCK();
  local_70->ScheduledAccessCount = (atomic<int>)((int)local_70->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_70->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1466e6ed0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneCameraShakeInstanceData>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneCameraShakeInstanceData> *this,
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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e6f56;
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
LAB_1466e6f56:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e6fe2;
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
LAB_1466e6fe2:
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
    puVar15 = puVar15 + (longlong)iVar6 * 0x20 + 0x18;
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
      *(undefined8 *)(puVar15 + -0x18) = *(undefined8 *)puVar16;
      uVar11 = *(undefined8 *)(puVar16 + 0x10);
      *(undefined8 *)(puVar15 + -0x10) = *(undefined8 *)(puVar16 + 8);
      *(undefined8 *)(puVar15 + -8) = uVar11;
      local_58 = local_58 + 4;
      *puVar15 = puVar16[0x18];
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

// Run @ 1466e7200

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneDataLayerComponentData>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneDataLayerComponentData> *this,
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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e7286;
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
LAB_1466e7286:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e7312;
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
LAB_1466e7312:
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

// Run @ 1466e7520

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  uchar *puVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  int iVar7;
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
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar20;
  
  local_68 = param_2->ComponentHeaders;
  uVar23 = 0;
  pFVar21 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar21; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e75a3;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1466e75a3:
  EVar5 = param_2->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar21 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar21; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e7638;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1466e7638:
  EVar6 = pFVar8->LockMode;
  if (EVar6 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
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
  iVar7 = param_1->Num;
  puVar24 = local_res18->Components + (longlong)param_1->ComponentStartOffset * 0x18;
  if ((iVar7 < 0) &&
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
      puVar2 = puVar9 + lVar18 * 0x18;
      uVar11 = *(undefined4 *)puVar2;
      uVar12 = *(undefined4 *)(puVar2 + 4);
      uVar13 = *(undefined4 *)(puVar2 + 8);
      uVar14 = *(undefined4 *)(puVar2 + 0xc);
      uVar4 = *(undefined8 *)(puVar9 + lVar18 * 0x18 + 0x10);
      uVar16 = 0;
      if ((int)uVar19 < iVar7) {
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
      *(undefined8 *)(puVar24 + 0x10) = uVar4;
      puVar24 = puVar24 + 0x18;
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar22 = uVar22 + 4;
    } while ((int)(uVar19 + 1) < iVar17);
  }
  if (local_res18->SerialNumber != 0) {
    uVar23 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar23;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar6 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1466e7830

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData>::Run
          (TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData> *this,
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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e78b6;
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
LAB_1466e78b6:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e7942;
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
LAB_1466e7942:
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

// Run @ 1466e7b50

void __thiscall
UE::MovieScene::
TDuplicateChildEntityInitializer<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
           *this,FEntityRange *param_1,FEntityAllocation *param_2,
          TArrayView<int_const_,int> *param_3)

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
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
  local_68;
  
  local_res18 = param_2->ComponentHeaders;
  pFVar10 = local_res18 + param_2->NumComponents;
  for (; local_res18 != pFVar10; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e7be9;
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
LAB_1466e7be9:
  EVar1 = param_2->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = local_res18->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
            (param_1->Allocation,&local_68,
             *(TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> *)
              &this->field_0x8,(FEntityAllocationWriteContext)0x0);
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
      *(uchar *)(puVar11 + 1) = puVar12[8];
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

// Run @ 1466e7e00

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FPerlinNoiseParams>::Run
          (TDuplicateChildEntityInitializer<FPerlinNoiseParams> *this,FEntityRange *param_1,
          FEntityAllocation *param_2,TArrayView<int_const_,int> *param_3)

{
  atomic<int> *paVar1;
  uchar *puVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  EComponentHeaderLockMode EVar5;
  EComponentHeaderLockMode EVar6;
  int iVar7;
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
  FComponentHeader *local_res18;
  FComponentHeader *local_68;
  ulonglong uVar20;
  
  local_68 = param_2->ComponentHeaders;
  uVar23 = 0;
  pFVar21 = local_68 + param_2->NumComponents;
  for (; local_68 != pFVar21; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e7e83;
  }
  local_68 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1466e7e83:
  EVar5 = param_2->LockMode;
  if (EVar5 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar8 = param_1->Allocation;
  puVar9 = local_68->Components;
  local_res18 = pFVar8->ComponentHeaders;
  pFVar21 = local_res18 + pFVar8->NumComponents;
  for (; local_res18 != pFVar21; local_res18 = local_res18 + 1) {
    if ((local_res18->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e7f18;
  }
  local_res18 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1466e7f18:
  EVar6 = pFVar8->LockMode;
  if (EVar6 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  paVar1 = &local_res18->ScheduledAccessCount;
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
  iVar7 = param_1->Num;
  puVar24 = local_res18->Components + (longlong)param_1->ComponentStartOffset * 0x18;
  if ((iVar7 < 0) &&
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
      puVar2 = puVar9 + lVar18 * 0x18;
      uVar11 = *(undefined4 *)puVar2;
      uVar12 = *(undefined4 *)(puVar2 + 4);
      uVar13 = *(undefined4 *)(puVar2 + 8);
      uVar14 = *(undefined4 *)(puVar2 + 0xc);
      uVar4 = *(undefined8 *)(puVar9 + lVar18 * 0x18 + 0x10);
      uVar16 = 0;
      if ((int)uVar19 < iVar7) {
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
      *(undefined8 *)(puVar24 + 0x10) = uVar4;
      puVar24 = puVar24 + 0x18;
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar22 = uVar22 + 4;
    } while ((int)(uVar19 + 1) < iVar17);
  }
  if (local_res18->SerialNumber != 0) {
    uVar23 = local_res18->SerialNumber;
  }
  local_res18->SerialNumber = uVar23;
  LOCK();
  local_res18->ScheduledAccessCount = (atomic<int>)((int)local_res18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar6 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_res18->ReadWriteLock);
  }
  LOCK();
  local_68->ScheduledAccessCount = (atomic<int>)((int)local_68->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar5 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_68->ReadWriteLock);
  }
  return;
}

// Run @ 1466e8110

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FPropertyNotifyComponentData>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FPropertyNotifyComponentData> *this,
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
    if ((local_70->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e8196;
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
LAB_1466e8196:
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
    if ((local_78->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e8222;
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
LAB_1466e8222:
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

// Run @ 1466e8410

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FName>::Run
          (TDuplicateChildEntityInitializer<FName> *this,FEntityRange *param_1,
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
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e8496;
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
LAB_1466e8496:
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
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_1466e8522;
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
LAB_1466e8522:
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


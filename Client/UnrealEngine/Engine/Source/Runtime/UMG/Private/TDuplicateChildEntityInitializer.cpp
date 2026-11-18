// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 4

// Run @ 14693e8c0

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateMargin>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateMargin> *this,
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
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_> local_58;
  
  pFVar16 = param_2->ComponentHeaders;
  pFVar19 = pFVar16 + param_2->NumComponents;
  for (; pFVar16 != pFVar19; pFVar16 = pFVar16 + 1) {
    if ((pFVar16->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14693e948;
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
LAB_14693e948:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  LOCK();
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = pFVar16->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateMargin>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::MovieScene::FIntermediateMargin> *)&this->field_0x8,
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

// Run @ 14693eb40

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateWidgetTransform>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FIntermediateWidgetTransform> *this,
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
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  FComponentHeader *pFVar19;
  undefined4 *puVar20;
  uint uVar21;
  FComponentHeader *pFVar22;
  longlong lVar23;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_> local_58;
  
  pFVar19 = param_2->ComponentHeaders;
  pFVar22 = pFVar19 + param_2->NumComponents;
  for (; pFVar19 != pFVar22; pFVar19 = pFVar19 + 1) {
    if ((pFVar19->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14693ebc8;
  }
  pFVar19 = (FComponentHeader *)0x0;
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar15) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14693ebc8:
  EVar3 = param_2->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar19->ReadWriteLock);
  }
  LOCK();
  pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + 1);
  UNLOCK();
  puVar5 = pFVar19->Components;
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateWidgetTransform>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> *)&this->field_0x8,
             (FEntityAllocationWriteContext)0x0);
  iVar4 = param_1->Num;
  puVar20 = (undefined4 *)((longlong)param_1->ComponentStartOffset * 0x38 + local_58._24_8_);
  if ((iVar4 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar18 = param_3->ArrayNum;
  uVar21 = 0;
  if (0 < iVar18) {
    lVar23 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar21 < iVar18) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar17 = (longlong)*(int *)(lVar23 + (longlong)param_3->DataPtr) * 0x38;
      uVar11 = *(undefined8 *)(puVar5 + lVar17 + 0x10);
      uVar12 = *(undefined8 *)(puVar5 + lVar17 + 0x10 + 8);
      puVar1 = puVar5 + lVar17;
      uVar7 = *(undefined4 *)puVar1;
      uVar8 = *(undefined4 *)(puVar1 + 4);
      uVar9 = *(undefined4 *)(puVar1 + 8);
      uVar10 = *(undefined4 *)(puVar1 + 0xc);
      uVar13 = *(undefined8 *)(puVar5 + lVar17 + 0x20);
      uVar14 = *(undefined8 *)(puVar5 + lVar17 + 0x20 + 8);
      uVar2 = *(undefined8 *)(puVar5 + lVar17 + 0x30);
      uVar16 = 0;
      if ((int)uVar21 < iVar4) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar18 = param_3->ArrayNum;
      uVar21 = uVar21 + 1;
      *puVar20 = uVar7;
      puVar20[1] = uVar8;
      puVar20[2] = uVar9;
      puVar20[3] = uVar10;
      lVar23 = lVar23 + 4;
      *(undefined8 *)(puVar20 + 4) = uVar11;
      *(undefined8 *)(puVar20 + 6) = uVar12;
      *(undefined8 *)(puVar20 + 8) = uVar13;
      *(undefined8 *)(puVar20 + 10) = uVar14;
      *(undefined8 *)(puVar20 + 0xc) = uVar2;
      puVar20 = puVar20 + 0xe;
    } while ((int)uVar21 < iVar18);
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
  pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar19->ReadWriteLock);
  }
  return;
}

// Run @ 14693ee10

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FWidgetMaterialPath>::Run
          (TDuplicateChildEntityInitializer<UE::MovieScene::FWidgetMaterialPath> *this,
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
  ulong64 uVar15;
  ForElementType<FName> _Src;
  ulong64 uVar16;
  FComponentHeader *pFVar17;
  ForElementType<FName> _Dst;
  ulong64 uVar18;
  int *piVar19;
  FComponentHeader *local_68;
  FComponentHeader *local_60;
  
  local_60 = param_2->ComponentHeaders;
  uVar18 = 0;
  pFVar17 = local_60 + param_2->NumComponents;
  for (; local_60 != pFVar17; local_60 = local_60 + 1) {
    if ((local_60->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14693ee96;
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
LAB_14693ee96:
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
  pFVar17 = local_68 + pFVar7->NumComponents;
  for (; local_68 != pFVar17; local_68 = local_68 + 1) {
    if ((local_68->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14693ef22;
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
LAB_14693ef22:
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
  if (0 < iVar13) {
    piVar19 = (int *)(puVar9 + (longlong)iVar6 * 0x20 + 0x1c);
    uVar15 = uVar18;
    uVar16 = uVar18;
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
      _Src = (ForElementType<FName>)
             ((longlong)*(int *)((longlong)param_3->DataPtr + uVar16) * 0x20 + (longlong)puVar8);
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
      _Dst = (ForElementType<FName>)(piVar19 + -7);
      if (_Dst != _Src) {
        iVar6 = *(int *)((longlong)_Src + 0x18);
        if (*(ForElementType<FName> *)((longlong)_Src + 0x10) != (ForElementType<FName>)0x0) {
          _Src = *(ForElementType<FName> *)((longlong)_Src + 0x10);
        }
        piVar19[-1] = iVar6;
        if ((iVar6 == 0) && (*piVar19 == 0)) {
          *piVar19 = 2;
        }
        else {
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                    (8,4,iVar6,*piVar19,(ForElementType<FName> *)_Dst,iVar6,piVar19);
          if (*(ForElementType<FName> *)(piVar19 + -3) != (ForElementType<FName>)0x0) {
            _Dst = *(ForElementType<FName> *)(piVar19 + -3);
          }
          if (iVar6 != 0) {
            memcpy((void *)_Dst,(void *)_Src,(longlong)iVar6 << 3);
          }
        }
      }
      uVar15 = (ulong64)(uVar14 + 1);
      uVar16 = uVar16 + 4;
      piVar19 = piVar19 + 8;
      iVar13 = param_3->ArrayNum;
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

// Run @ 14693f170

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FWidgetMaterialHandle>::Run
          (TDuplicateChildEntityInitializer<FWidgetMaterialHandle> *this,FEntityRange *param_1,
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
  TComponentLock<UE::MovieScene::TWrite<FWidgetMaterialHandle>_> local_58;
  
  pFVar13 = param_2->ComponentHeaders;
  pFVar16 = pFVar13 + param_2->NumComponents;
  for (; pFVar13 != pFVar16; pFVar13 = pFVar13 + 1) {
    if ((pFVar13->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14693f1f8;
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
LAB_14693f1f8:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
  }
  LOCK();
  pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = pFVar13->Components;
  FEntityAllocation::WriteComponents<FWidgetMaterialHandle>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<FWidgetMaterialHandle> *)&this->field_0x8,
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


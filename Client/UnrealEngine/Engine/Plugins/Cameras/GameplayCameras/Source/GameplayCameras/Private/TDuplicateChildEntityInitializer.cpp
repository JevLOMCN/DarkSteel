// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// Run @ 14d633280

void __thiscall
UE::MovieScene::TDuplicateChildEntityInitializer<FCameraFramingZone>::Run
          (TDuplicateChildEntityInitializer<FCameraFramingZone> *this,FEntityRange *param_1,
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
  TComponentLock<UE::MovieScene::TWrite<FCameraFramingZone>_> local_58;
  
  pFVar16 = param_2->ComponentHeaders;
  pFVar19 = pFVar16 + param_2->NumComponents;
  for (; pFVar16 != pFVar19; pFVar16 = pFVar16 + 1) {
    if ((pFVar16->ComponentType).Value == *(ushort *)&this->field_0x8) goto LAB_14d633308;
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
LAB_14d633308:
  EVar2 = param_2->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
  }
  LOCK();
  pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = pFVar16->Components;
  FEntityAllocation::WriteComponents<FCameraFramingZone>
            (param_1->Allocation,&local_58,*(TComponentTypeID<FCameraFramingZone> *)&this->field_0x8
             ,(FEntityAllocationWriteContext)0x0);
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


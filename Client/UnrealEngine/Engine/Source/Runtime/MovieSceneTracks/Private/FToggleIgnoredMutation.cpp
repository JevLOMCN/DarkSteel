// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// CreateMutation @ 146824680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FToggleIgnoredMutation::CreateMutation
          (FToggleIgnoredMutation *this,FEntityManager *param_1,FComponentMask *param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  FBuiltInComponentTypes *pFVar3;
  
  pFVar3 = FBuiltInComponentTypes::Get();
  uVar2 = (pFVar3->Tags).Ignored.Value;
  if (((uVar2 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar2)) ||
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1)
      == 0)) {
    FComponentMask::Set(param_2,(FComponentTypeID)(pFVar3->Tags).Ignored.Value);
  }
  else {
    uVar2 = (pFVar3->Tags).Ignored.Value;
    pTVar1 = (param_2->Bits).AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & ~(1 << ((byte)uVar2 & 0x1f));
  }
  FComponentMask::Set(param_2,(FComponentTypeID)(pFVar3->Tags).NeedsLink.Value);
  return;
}

// MarkAllocation @ 146841660

void __thiscall
UE::MovieScene::FToggleIgnoredMutation::MarkAllocation
          (FToggleIgnoredMutation *this,FEntityAllocation *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  uint *puVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  uint uVar4;
  uchar *puVar5;
  FHBiasMetaData *pFVar6;
  ForElementType<unsigned_int> FVar7;
  code *pcVar8;
  bool bVar9;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> TVar10;
  uint uVar11;
  int iVar12;
  FBuiltInComponentTypes *pFVar13;
  FComponentHeader *pFVar14;
  ForElementType<unsigned_int> FVar15;
  short sVar16;
  int iVar17;
  FComponentHeader *pFVar18;
  EComponentHeaderLockMode EVar19;
  int iVar20;
  longlong lVar21;
  uint *puVar22;
  uchar *puVar23;
  uint uVar24;
  bool local_res10;
  FComponentHeader *local_78;
  
  pFVar13 = FBuiltInComponentTypes::Get();
  local_78 = param_1->ComponentHeaders;
  pFVar14 = local_78 + param_1->NumComponents;
  for (pFVar18 = local_78; pFVar18 != pFVar14; pFVar18 = pFVar18 + 1) {
    if ((pFVar18->ComponentType).Value == (pFVar13->Tags).Ignored.Value) {
      TVar10 = pFVar13->Group;
      local_res10 = pFVar18 != (FComponentHeader *)0x0;
      goto LAB_1468416e5;
    }
  }
  TVar10 = pFVar13->Group;
  local_res10 = false;
  for (; local_78 != pFVar14; local_78 = local_78 + 1) {
LAB_1468416e5:
    if ((TComponentTypeID<UE::MovieScene::FEntityGroupID>)(local_78->ComponentType).Value == TVar10)
    goto LAB_146841726;
  }
  local_78 = (FComponentHeader *)0x0;
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_146841726:
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_78->ReadWriteLock);
  }
  LOCK();
  local_78->ScheduledAccessCount = (atomic<int>)((int)local_78->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar18 = param_1->ComponentHeaders;
  puVar5 = local_78->Components;
  pFVar14 = pFVar18 + param_1->NumComponents;
  do {
    if (pFVar18 == pFVar14) {
      pFVar18 = (FComponentHeader *)0x0;
      puVar23 = (uchar *)0x0;
      EVar19 = LockFree;
LAB_14684178f:
      uVar2 = param_1->Size;
      iVar20 = 0;
      if ((ulonglong)uVar2 != 0) {
        lVar21 = 0;
        puVar22 = (uint *)(puVar5 + 4);
        uVar24 = 1;
        do {
          if (puVar23 == (uchar *)0x0) {
            sVar16 = 0;
          }
          else {
            sVar16 = *(short *)(puVar23 + lVar21 * 2);
          }
          if ((puVar22[1] & 1) == 0) {
            uVar4 = *puVar22;
            uVar11 = 0;
            if ((int)uVar4 < (this->HBiasMetaData).ArrayNum) {
              uVar11 = ~uVar4 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (this->HBiasMetaData).DataPtr;
            if ((pFVar6[(int)uVar4].bBlendHierarchicalBias == 0) &&
               (sVar16 < pFVar6[(int)uVar4].HBias)) {
              bVar9 = true;
            }
            else {
              bVar9 = false;
            }
            if (bVar9 != local_res10) {
              iVar17 = (iVar20 - param_2->NumBits) + 1;
              if (0 < iVar17) {
                iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(param_2,iVar17);
                TBitArray<FDefaultBitArrayAllocator>::SetRange(param_2,iVar12,iVar17,false);
              }
              if (((iVar20 < 0) || (param_2->NumBits <= iVar20)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar7 = (param_2->AllocatorInstance).SecondaryData;
              FVar15 = (ForElementType<unsigned_int>)param_2;
              if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                FVar15 = FVar7;
              }
              iVar17 = iVar20;
              if (iVar20 < 0) {
                iVar17 = iVar20 + 0x1f;
              }
              puVar1 = (uint *)((longlong)FVar15 + (longlong)(iVar17 >> 5) * 4);
              *puVar1 = *puVar1 | uVar24;
            }
          }
          iVar20 = iVar20 + 1;
          uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
          lVar21 = lVar21 + 1;
          puVar22 = puVar22 + 3;
        } while (lVar21 < (longlong)(ulonglong)uVar2);
      }
      if (pFVar18 != (FComponentHeader *)0x0) {
        LOCK();
        pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar19 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
        }
      }
      LOCK();
      local_78->ScheduledAccessCount = (atomic<int>)((int)local_78->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&local_78->ReadWriteLock);
      }
      return;
    }
    if ((TComponentTypeID<short>)(pFVar18->ComponentType).Value == pFVar13->HierarchicalBias) {
      EVar19 = param_1->LockMode;
      if (EVar19 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
      }
      LOCK();
      pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + 1);
      UNLOCK();
      puVar23 = pFVar18->Components;
      goto LAB_14684178f;
    }
    pFVar18 = pFVar18 + 1;
  } while( true );
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// InitializeEntities @ 1468bbe10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FProviderEasingChannelMutation::InitializeEntities
          (FProviderEasingChannelMutation *this,FEntityRange *param_1,FComponentMask *param_2)

{
  EComponentHeaderLockMode EVar1;
  EComponentHeaderLockMode EVar2;
  FEntityAllocation *pFVar3;
  uchar *puVar4;
  uchar *puVar5;
  ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel> FVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FRootSequenceData *this_00;
  uint uVar10;
  undefined2 uVar11;
  ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel> FVar12;
  FComponentHeader *pFVar13;
  int iVar14;
  longlong lVar15;
  FComponentHeader *local_78;
  FComponentHeader *local_70;
  TComponentLock<UE::MovieScene::TWrite<unsigned_short>_> local_58;
  
  pFVar3 = param_1->Allocation;
  local_78 = pFVar3->ComponentHeaders;
  pFVar13 = local_78 + pFVar3->NumComponents;
  for (; local_78 != pFVar13; local_78 = local_78 + 1) {
    if ((local_78->ComponentType).Value == *(ushort *)(this->_padding_ + 0x60)) goto LAB_1468bbe96;
  }
  local_78 = (FComponentHeader *)0x0;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_1468bbe96:
  EVar1 = pFVar3->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_78->ReadWriteLock);
  }
  LOCK();
  local_78->ScheduledAccessCount = (atomic<int>)((int)local_78->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = local_78->Components;
  pFVar3 = param_1->Allocation;
  local_70 = pFVar3->ComponentHeaders;
  pFVar13 = local_70 + pFVar3->NumComponents;
  for (; local_70 != pFVar13; local_70 = local_70 + 1) {
    if ((local_70->ComponentType).Value == *(ushort *)(this->_padding_ + 0x104)) goto LAB_1468bbf28;
  }
  local_70 = (FComponentHeader *)0x0;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_1468bbf28:
  EVar2 = pFVar3->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_70->ReadWriteLock);
  }
  LOCK();
  local_70->ScheduledAccessCount = (atomic<int>)((int)local_70->ScheduledAccessCount + 1);
  UNLOCK();
  puVar5 = local_70->Components;
  FEntityAllocation::WriteComponents<unsigned_short>
            (param_1->Allocation,&local_58,
             *(TComponentTypeID<unsigned_short> *)(this->_padding_ + 0x102),
             (FEntityAllocationWriteContext)0x0);
  iVar14 = 0;
  if (0 < param_1->Num) {
    do {
      lVar15 = (longlong)(param_1->ComponentStartOffset + iVar14);
      this_00 = TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
                ::Find(this->SequenceDataMap,(FRootInstanceHandle *)(puVar4 + lVar15 * 4));
      if ((this_00 == (FRootSequenceData *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x148,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = FRootSequenceData::IndexOf
                        (this_00,(FMovieSceneSequenceID)*(uint *)(puVar5 + lVar15 * 4));
      if (uVar9 == 0xffffffff) {
        uVar11 = 0xffff;
      }
      else {
        uVar10 = 0;
        if ((int)uVar9 < (this_00->SequenceIDs).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar6 = (this_00->SequenceIDs).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
                 &this_00->SequenceIDs;
        if (FVar6 != (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0)
        {
          FVar12 = FVar6;
        }
        uVar11 = *(undefined2 *)((uchar *)((longlong)FVar12 + 4) + (longlong)(int)uVar9 * 0xc);
      }
      iVar14 = iVar14 + 1;
      *(undefined2 *)(local_58._24_8_ + lVar15 * 2) = uVar11;
    } while (iVar14 < param_1->Num);
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
  local_70->ScheduledAccessCount = (atomic<int>)((int)local_70->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_70->ReadWriteLock);
  }
  LOCK();
  local_78->ScheduledAccessCount = (atomic<int>)((int)local_78->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar1 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_78->ReadWriteLock);
  }
  return;
}

// MarkAllocation @ 1468bd3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FProviderEasingChannelMutation::MarkAllocation
          (FProviderEasingChannelMutation *this,FEntityAllocation *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  int *piVar1;
  uint *puVar2;
  EComponentHeaderLockMode EVar3;
  EComponentHeaderLockMode EVar4;
  FMovieSceneEntityID *pFVar5;
  uchar *puVar6;
  ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel> FVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FRootSequenceData *this_00;
  uint uVar14;
  FComponentHeader *pFVar15;
  ForElementType<unsigned_int> FVar16;
  short sVar17;
  uint *puVar18;
  int iVar19;
  ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel> FVar20;
  FMovieSceneEntityID *pFVar21;
  uint uVar22;
  int iVar23;
  FComponentHeader *local_a0;
  FComponentHeader *local_98;
  TComponentLock<UE::MovieScene::TWriteOptional<unsigned_short>_> local_70;
  
  local_a0 = param_1->ComponentHeaders;
  pFVar5 = param_1->EntityIDs;
  iVar23 = 0;
  pFVar15 = local_a0 + param_1->NumComponents;
  for (; local_a0 != pFVar15; local_a0 = local_a0 + 1) {
    if ((local_a0->ComponentType).Value == *(ushort *)(this->_padding_ + 0x60)) goto LAB_1468bd488;
  }
  local_a0 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1468bd488:
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_a0->ReadWriteLock);
  }
  LOCK();
  local_a0->ScheduledAccessCount = (atomic<int>)((int)local_a0->ScheduledAccessCount + 1);
  UNLOCK();
  local_98 = param_1->ComponentHeaders;
  puVar6 = local_a0->Components;
  pFVar15 = local_98 + param_1->NumComponents;
  for (; local_98 != pFVar15; local_98 = local_98 + 1) {
    if ((local_98->ComponentType).Value == *(ushort *)(this->_padding_ + 0x104)) goto LAB_1468bd517;
  }
  local_98 = (FComponentHeader *)0x0;
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1468bd517:
  EVar4 = param_1->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_98->ReadWriteLock);
  }
  LOCK();
  local_98->ScheduledAccessCount = (atomic<int>)((int)local_98->ScheduledAccessCount + 1);
  UNLOCK();
  puVar18 = (uint *)local_98->Components;
  FEntityAllocation::TryWriteComponents<unsigned_short>
            (param_1,&local_70,*(TComponentTypeID<unsigned_short> *)(this->_padding_ + 0x102),
             (FEntityAllocationWriteContext)0x0);
  uVar10 = local_70._24_8_;
  if (param_1->Size != 0) {
    uVar22 = 1;
    pFVar21 = pFVar5;
    do {
      this_00 = TSortedMap<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<UE::MovieScene::FRootInstanceHandle_const_&>_>
                ::Find(this->SequenceDataMap,(FRootInstanceHandle *)(puVar6 + (longlong)iVar23 * 4))
      ;
      if (this_00 == (FRootSequenceData *)0x0) {
LAB_1468bd6f4:
        if (uVar10 != 0) {
          if ((((FMovieSceneEntityID *)this->_padding_ <= pFVar21) &&
              (pFVar21 < (FMovieSceneEntityID *)this->_padding_ +
                         *(int *)((longlong)&this->_padding_ + 4))) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar19 = (int)this->_padding_;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          if (iVar19 == *piVar1) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          *(int *)&this->_padding_ = iVar19 + 1;
          *(ushort *)(this->_padding_ + (longlong)iVar19 * 2) = pFVar21->Value;
        }
      }
      else {
        uVar12 = FRootSequenceData::IndexOf(this_00,(FMovieSceneSequenceID)*puVar18);
        if (uVar12 == 0xffffffff) {
          sVar17 = -1;
        }
        else {
          uVar14 = 0;
          if ((int)uVar12 < (this_00->SequenceIDs).ArrayNum) {
            uVar14 = ~uVar12 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar7 = (this_00->SequenceIDs).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)
                   &this_00->SequenceIDs;
          if (FVar7 != (ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>)0x0
             ) {
            FVar20 = FVar7;
          }
          sVar17 = *(short *)((uchar *)((longlong)FVar20 + 4) + (longlong)(int)uVar12 * 0xc);
        }
        if (sVar17 == -1) goto LAB_1468bd6f4;
        if (uVar10 == 0) {
          iVar19 = (iVar23 - param_2->NumBits) + 1;
          if (0 < iVar19) {
            iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(param_2,iVar19);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(param_2,iVar13,iVar19,false);
          }
          if (((iVar23 < 0) || (param_2->NumBits <= iVar23)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar8 = (param_2->AllocatorInstance).SecondaryData;
          FVar16 = (ForElementType<unsigned_int>)param_2;
          if (FVar8 != (ForElementType<unsigned_int>)0x0) {
            FVar16 = FVar8;
          }
          iVar19 = iVar23;
          if (iVar23 < 0) {
            iVar19 = iVar23 + 0x1f;
          }
          puVar2 = (uint *)((longlong)FVar16 + (longlong)(iVar19 >> 5) * 4);
          *puVar2 = *puVar2 | uVar22;
        }
        else {
          *(short *)((local_70._24_8_ - (longlong)pFVar5) + (longlong)pFVar21) = sVar17;
        }
      }
      iVar23 = iVar23 + 1;
      puVar18 = puVar18 + 1;
      uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
      pFVar21 = pFVar21 + 1;
    } while (iVar23 < (int)(uint)param_1->Size);
  }
  if (local_70._0_8_ != 0) {
    if ((ulonglong)local_70._8_8_ < *(ulonglong *)(local_70._0_8_ + 0x28)) {
      local_70._8_8_ = *(ulonglong *)(local_70._0_8_ + 0x28);
    }
    *(undefined8 *)(local_70._0_8_ + 0x28) = local_70._8_8_;
    LOCK();
    *(int *)(local_70._0_8_ + 0x30) = *(int *)(local_70._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_70._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_70._0_8_ + 0x20));
    }
  }
  LOCK();
  local_98->ScheduledAccessCount = (atomic<int>)((int)local_98->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_98->ReadWriteLock);
  }
  LOCK();
  local_a0->ScheduledAccessCount = (atomic<int>)((int)local_a0->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_a0->ReadWriteLock);
  }
  return;
}


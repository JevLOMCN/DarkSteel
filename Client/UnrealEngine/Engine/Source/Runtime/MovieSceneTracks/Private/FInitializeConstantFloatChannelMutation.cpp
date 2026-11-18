// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// CreateMutation @ 146786e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInitializeConstantFloatChannelMutation::CreateMutation
          (FInitializeConstantFloatChannelMutation *this,FEntityManager *param_1,
          FComponentMask *param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  TComponentTypeID<UE::MovieScene::Interpolation::FCachedInterpolation> TVar2;
  
  TVar2 = (this->Association).CachedInterpolationType;
  if ((int)(uint)(ushort)TVar2 < (param_2->Bits).NumBits) {
    pTVar1 = (param_2->Bits).AllocatorInstance.InlineData + ((ushort)TVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & ~(1 << (TVar2._0_1_ & 0x1f));
  }
  return;
}

// InitializeEntities @ 1467a4890

void __thiscall
UE::MovieScene::FInitializeConstantFloatChannelMutation::InitializeEntities
          (FInitializeConstantFloatChannelMutation *this,FEntityRange *param_1,
          FComponentMask *param_2)

{
  EComponentHeaderLockMode EVar1;
  int iVar2;
  FEntityAllocation *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  double *pdVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  double dVar13;
  float local_res8 [2];
  undefined8 local_res10;
  TComponentLock<UE::MovieScene::TWrite<double>_> local_68;
  
  pFVar3 = param_1->Allocation;
  pFVar9 = pFVar3->ComponentHeaders;
  pFVar10 = pFVar9 + pFVar3->NumComponents;
  for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)(pFVar9->ComponentType).Value ==
        (this->Association).ChannelType) goto LAB_1467a490b;
  }
  pFVar9 = (FComponentHeader *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1467a490b:
  EVar1 = pFVar3->LockMode;
  if (EVar1 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
  }
  LOCK();
  pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = pFVar9->Components;
  FEntityAllocation::WriteComponents<double>
            (param_1->Allocation,&local_68,(this->Association).ResultType,
             (FEntityAllocationWriteContext)0x0);
  dVar6 = __real_0010000000000000;
  iVar2 = param_1->ComponentStartOffset;
  uVar12 = (ulonglong)iVar2;
  if (iVar2 < param_1->Num + iVar2) {
    local_res10 = 0;
    pdVar8 = (double *)(local_68._24_8_ + uVar12 * 8);
    do {
      bVar7 = FMovieSceneFloatChannel::Evaluate
                        (*(FMovieSceneFloatChannel **)
                          ((longlong)pdVar8 + ((longlong)puVar4 - local_68._24_8_)),(FFrameTime)0x0,
                         local_res8);
      dVar13 = dVar6;
      if (bVar7) {
        dVar13 = (double)local_res8[0];
      }
      *pdVar8 = dVar13;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      pdVar8 = pdVar8 + 1;
    } while ((int)uVar11 < param_1->Num + param_1->ComponentStartOffset);
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
  pFVar9->ScheduledAccessCount = (atomic<int>)((int)pFVar9->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar1 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar9->ReadWriteLock);
  }
  return;
}

// MarkAllocation @ 1467a7d40

void __thiscall
UE::MovieScene::FInitializeConstantFloatChannelMutation::MarkAllocation
          (FInitializeConstantFloatChannelMutation *this,FEntityAllocation *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  uint *puVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  uchar *puVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  FComponentHeader *pFVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FComponentHeader *pFVar14;
  FComponentHeader *pFVar15;
  
  pFVar10 = param_1->ComponentHeaders;
  pFVar14 = (FComponentHeader *)0x0;
  pFVar15 = pFVar10 + param_1->NumComponents;
  for (; pFVar10 != pFVar15; pFVar10 = pFVar10 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FSourceFloatChannel>)(pFVar10->ComponentType).Value ==
        (this->Association).ChannelType) goto LAB_1467a7db9;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar10 = pFVar14;
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1467a7db9:
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
  }
  LOCK();
  pFVar10->ScheduledAccessCount = (atomic<int>)((int)pFVar10->ScheduledAccessCount + 1);
  UNLOCK();
  uVar2 = param_1->Size;
  puVar4 = pFVar10->Components;
  if ((ulonglong)uVar2 != 0) {
    uVar12 = 1;
    pFVar15 = pFVar14;
    do {
      iVar11 = *(int *)(*(longlong *)(puVar4 + (longlong)pFVar15 * 8) + 0x78);
      iVar13 = (int)pFVar14;
      if (iVar11 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_1467a7e39:
        iVar11 = (iVar13 - param_2->NumBits) + 1;
        if (0 < iVar11) {
          iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(param_2,iVar11);
          TBitArray<FDefaultBitArrayAllocator>::SetRange(param_2,iVar8,iVar11,false);
        }
        if (((iVar13 < 0) || (param_2->NumBits <= iVar13)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<unsigned_int>)param_2;
        if (FVar5 != (ForElementType<unsigned_int>)0x0) {
          FVar9 = FVar5;
        }
        iVar11 = iVar13;
        if (iVar13 < 0) {
          iVar11 = iVar13 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar11 >> 5) * 4);
        *puVar1 = *puVar1 | uVar12;
      }
      else if (iVar11 < 2) goto LAB_1467a7e39;
      pFVar14 = (FComponentHeader *)(ulonglong)(iVar13 + 1);
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      pFVar15 = (FComponentHeader *)((longlong)&pFVar15->_padding_ + 1);
    } while ((longlong)pFVar15 < (longlong)(ulonglong)uVar2);
  }
  LOCK();
  pFVar10->ScheduledAccessCount = (atomic<int>)((int)pFVar10->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
                    /* WARNING: Could not recover jumptable at 0x0001467a7ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
    return;
  }
  return;
}


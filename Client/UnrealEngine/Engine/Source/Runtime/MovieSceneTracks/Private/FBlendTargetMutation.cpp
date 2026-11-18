// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// CreateMutation @ 1468245f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FBlendTargetMutation::CreateMutation
          (FBlendTargetMutation *this,FEntityManager *param_1,FComponentMask *param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> TVar2;
  FBuiltInComponentTypes *pFVar3;
  
  pFVar3 = FBuiltInComponentTypes::Get();
  TVar2 = pFVar3->HierarchicalBlendTarget;
  if (((TVar2 == (TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget>)0xffff) ||
      ((param_2->Bits).NumBits <= (int)(uint)(ushort)TVar2)) ||
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[(ushort)TVar2 >> 5].Pad >>
       ((ushort)TVar2 & 0x1f) & 1) == 0)) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)&pFVar3->HierarchicalBlendTarget);
  }
  else {
    pTVar1 = (param_2->Bits).AllocatorInstance.InlineData +
             ((ushort)pFVar3->HierarchicalBlendTarget >> 5);
    *(uint *)pTVar1->Pad =
         *(uint *)pTVar1->Pad & ~(1 << (SUB21(pFVar3->HierarchicalBlendTarget,0) & 0x1f));
  }
  FComponentMask::Set(param_2,(FComponentTypeID)(pFVar3->Tags).NeedsLink.Value);
  return;
}

// InitializeEntities @ 14683cc30

void __thiscall
UE::MovieScene::FBlendTargetMutation::InitializeEntities
          (FBlendTargetMutation *this,FEntityRange *param_1,FComponentMask *param_2)

{
  EComponentHeaderLockMode EVar1;
  uint uVar2;
  FEntityAllocation *pFVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FBuiltInComponentTypes *pFVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  int iVar11;
  TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FHierarchicalBlendTarget>_> local_38
  ;
  
  pFVar8 = FBuiltInComponentTypes::Get();
  FEntityAllocation::TryWriteComponents<UE::MovieScene::FHierarchicalBlendTarget>
            (param_1->Allocation,&local_38,pFVar8->HierarchicalBlendTarget,
             (FEntityAllocationWriteContext)0x0);
  if (local_38._24_8_ != 0) {
    pFVar3 = param_1->Allocation;
    pFVar10 = pFVar3->ComponentHeaders;
    pFVar9 = pFVar10 + pFVar3->NumComponents;
    for (; pFVar10 != pFVar9; pFVar10 = pFVar10 + 1) {
      if ((TComponentTypeID<UE::MovieScene::FEntityGroupID>)(pFVar10->ComponentType).Value ==
          pFVar8->Group) goto LAB_14683ccd9;
    }
    pFVar10 = (FComponentHeader *)0x0;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Header",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                       ,0x2cd,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14683ccd9:
    EVar1 = pFVar3->LockMode;
    if (EVar1 == Mutex) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
    }
    LOCK();
    pFVar10->ScheduledAccessCount = (atomic<int>)((int)pFVar10->ScheduledAccessCount + 1);
    UNLOCK();
    puVar4 = pFVar10->Components;
    iVar11 = 0;
    if (0 < param_1->Num) {
      do {
        uVar2 = *(uint *)(puVar4 + (longlong)(param_1->ComponentStartOffset + iVar11) * 0xc + 4);
        uVar7 = 0;
        if ((int)uVar2 < (this->HBiasMetaData).ArrayNum) {
          uVar7 = ~uVar2 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FHierarchicalBlendTarget::operator=
                  ((FHierarchicalBlendTarget *)((longlong)iVar11 * 0x10 + local_38._24_8_),
                   &(this->HBiasMetaData).DataPtr[(int)uVar2].BlendTarget);
        iVar11 = iVar11 + 1;
      } while (iVar11 < param_1->Num);
    }
    LOCK();
    pFVar10->ScheduledAccessCount = (atomic<int>)((int)pFVar10->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar1 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar10->ReadWriteLock);
    }
  }
  if (local_38._0_8_ != 0) {
    if ((ulonglong)local_38._8_8_ < *(ulonglong *)(local_38._0_8_ + 0x28)) {
      local_38._8_8_ = *(ulonglong *)(local_38._0_8_ + 0x28);
    }
    *(undefined8 *)(local_38._0_8_ + 0x28) = local_38._8_8_;
    LOCK();
    *(int *)(local_38._0_8_ + 0x30) = *(int *)(local_38._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_38._16_4_ == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014683cdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(local_38._0_8_ + 0x20));
      return;
    }
  }
  return;
}

// MarkAllocation @ 146841300

void __thiscall
UE::MovieScene::FBlendTargetMutation::MarkAllocation
          (FBlendTargetMutation *this,FEntityAllocation *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  uint *puVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FBuiltInComponentTypes *pFVar10;
  FHBiasMetaData *pFVar11;
  FComponentHeader *pFVar12;
  ForElementType<unsigned_int> FVar13;
  int iVar14;
  int iVar15;
  FComponentHeader *pFVar16;
  uint *puVar17;
  uint uVar18;
  longlong local_78;
  FComponentHeader *local_60;
  TComponentLock<UE::MovieScene::TWriteOptional<UE::MovieScene::FHierarchicalBlendTarget>_> local_58
  ;
  
  pFVar10 = FBuiltInComponentTypes::Get();
  FEntityAllocation::TryWriteComponents<UE::MovieScene::FHierarchicalBlendTarget>
            (param_1,&local_58,pFVar10->HierarchicalBlendTarget,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  local_60 = param_1->ComponentHeaders;
  pFVar16 = local_60 + param_1->NumComponents;
  for (; local_60 != pFVar16; local_60 = local_60 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FEntityGroupID>)(local_60->ComponentType).Value ==
        pFVar10->Group) goto LAB_1468413b2;
  }
  local_60 = (FComponentHeader *)0x0;
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1468413b2:
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar16 = param_1->ComponentHeaders;
  pFVar12 = pFVar16 + param_1->NumComponents;
  for (; pFVar16 != pFVar12; pFVar16 = pFVar16 + 1) {
    if ((pFVar16->ComponentType).Value == (pFVar10->Tags).Ignored.Value) goto LAB_146841401;
  }
  pFVar16 = (FComponentHeader *)0x0;
LAB_146841401:
  uVar2 = param_1->Size;
  iVar15 = 0;
  if ((ulonglong)uVar2 != 0) {
    puVar17 = (uint *)(local_60->Components + 4);
    uVar18 = 1;
    local_78 = 0;
    do {
      if ((puVar17[1] & 1) == 0) {
        uVar4 = *puVar17;
        uVar8 = 0;
        if ((int)uVar4 < (this->HBiasMetaData).ArrayNum) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((pFVar16 == (FComponentHeader *)0x0) &&
           ((this->HBiasMetaData).DataPtr[(int)uVar4].bBlendHierarchicalBias != 0)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        if (bVar7 == (local_58._24_8_ != 0)) {
          if (local_58._24_8_ != 0) {
            pFVar11 = TArrayView<UE::MovieScene::FHBiasMetaData_const_,int>::operator[]
                                (&this->HBiasMetaData,uVar4);
            FHierarchicalBlendTarget::operator=
                      ((FHierarchicalBlendTarget *)((longlong)iVar15 * 0x10 + local_58._24_8_),
                       &pFVar11->BlendTarget);
          }
        }
        else {
          iVar14 = (iVar15 - param_2->NumBits) + 1;
          if (0 < iVar14) {
            iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(param_2,iVar14);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(param_2,iVar9,iVar14,false);
          }
          if (((iVar15 < 0) || (param_2->NumBits <= iVar15)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar5 = (param_2->AllocatorInstance).SecondaryData;
          FVar13 = (ForElementType<unsigned_int>)param_2;
          if (FVar5 != (ForElementType<unsigned_int>)0x0) {
            FVar13 = FVar5;
          }
          iVar14 = iVar15;
          if (iVar15 < 0) {
            iVar14 = iVar15 + 0x1f;
          }
          puVar1 = (uint *)((longlong)FVar13 + (longlong)(iVar14 >> 5) * 4);
          *puVar1 = *puVar1 | uVar18;
        }
      }
      local_78 = local_78 + 1;
      uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      puVar17 = puVar17 + 3;
      iVar15 = iVar15 + 1;
    } while (local_78 < (longlong)(ulonglong)uVar2);
  }
  LOCK();
  local_60->ScheduledAccessCount = (atomic<int>)((int)local_60->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_60->ReadWriteLock);
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
  return;
}


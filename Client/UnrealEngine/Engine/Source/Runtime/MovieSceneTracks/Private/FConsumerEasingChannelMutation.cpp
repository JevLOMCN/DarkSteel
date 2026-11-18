// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// InitializeEntities @ 1468bba50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FConsumerEasingChannelMutation::InitializeEntities
          (FConsumerEasingChannelMutation *this,FEntityRange *param_1,FComponentMask *param_2)

{
  EComponentHeaderLockMode EVar1;
  FEntityAllocation *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  uint uVar12;
  FComponentHeader *pFVar13;
  longlong lVar14;
  FComponentHeader *pFVar15;
  FComponentHeader *pFVar16;
  undefined1 auStack_108 [32];
  uchar *local_e8;
  EComponentHeaderLockMode local_e0;
  FComponentHeader *local_d8;
  FComponentHeader *local_d0;
  undefined8 local_c8;
  uchar *puStack_c0;
  FConsumerEasingChannelMutation *local_b8;
  TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
  *local_b0;
  TComponentLock<UE::MovieScene::TReadOptional<short>_> local_a8;
  TComponentLock<UE::MovieScene::TWrite<unsigned_short>_> local_90;
  undefined1 local_70 [24];
  int local_58;
  FHierarchicalBlendTarget local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar10 = (FComponentHeader *)0x0;
  local_b8 = this;
  FEntityAllocation::WriteComponents<unsigned_short>
            (param_1->Allocation,&local_90,
             *(TComponentTypeID<unsigned_short> *)(this->_padding_ + 0x102),
             (FEntityAllocationWriteContext)0x0);
  pFVar2 = param_1->Allocation;
  local_d8 = pFVar2->ComponentHeaders;
  pFVar13 = local_d8 + pFVar2->NumComponents;
  for (; local_d8 != pFVar13; local_d8 = local_d8 + 1) {
    pFVar11 = local_d8;
    if ((local_d8->ComponentType).Value == *(ushort *)(this->_padding_ + 0x5e)) goto LAB_1468bbb04;
  }
  local_d8 = (FComponentHeader *)0x0;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar11 = pFVar10;
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1468bbb04:
  local_e0 = pFVar2->LockMode;
  if (local_e0 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
  }
  LOCK();
  pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar2 = param_1->Allocation;
  puVar3 = pFVar11->Components;
  pFVar13 = pFVar2->ComponentHeaders;
  pFVar15 = pFVar13 + pFVar2->NumComponents;
  do {
    if (pFVar13 == pFVar15) {
      local_d0 = (FComponentHeader *)0x0;
      local_c8 = 0;
      puStack_c0 = (uchar *)0x0;
LAB_1468bbb7e:
      pFVar13 = local_d0;
      local_e8 = puStack_c0;
      if (puStack_c0 == (uchar *)0x0) {
        if (0 < param_1->Num) {
          do {
            iVar9 = (int)pFVar10;
            uVar7 = iVar9 + 1;
            pFVar10 = (FComponentHeader *)(ulonglong)uVar7;
            lVar14 = (longlong)(param_1->ComponentStartOffset + iVar9);
            *(undefined2 *)(local_90._24_8_ + lVar14 * 2) =
                 *(undefined2 *)
                  (*(longlong *)this->InstanceIDToChannel +
                  (ulonglong)*(ushort *)(puVar3 + lVar14 * 4) * 8);
          } while ((int)uVar7 < param_1->Num);
        }
      }
      else {
        if ((this->CachedHierarchicalBlendTargetChannels ==
             (TMap<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>_>
              *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHierarchicalBlendTargetChannels",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                               ,0x1f9,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FEntityAllocation::TryReadComponents<short>
                  (param_1->Allocation,&local_a8,
                   *(TComponentTypeID<short> *)(this->_padding_ + 0x6e));
        puVar3 = local_e8;
        pFVar15 = pFVar10;
        pFVar16 = pFVar10;
        if (0 < param_1->Num) {
          do {
            iVar9 = (int)pFVar16;
            local_e8 = (uchar *)CONCAT44(local_e8._4_4_,param_1->ComponentStartOffset + iVar9);
            local_58 = 0;
            if (local_a8._16_8_ != 0) {
              local_58 = (int)*(short *)((longlong)&pFVar15->_padding_ + local_a8._16_8_);
            }
            FHierarchicalBlendTarget::FHierarchicalBlendTarget
                      (&local_50,(FHierarchicalBlendTarget *)(puVar3 + (longlong)iVar9 * 0x10));
            local_70._0_2_ = (short)local_58;
            FHierarchicalBlendTarget::FHierarchicalBlendTarget
                      ((FHierarchicalBlendTarget *)(local_70 + 8),&local_50);
            FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_50);
            uVar12 = (uint)(short)local_70._0_2_;
            local_b0 = (TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                        *)local_b8->CachedHierarchicalBlendTargetChannels;
            uVar7 = MovieScene::GetTypeHash((FHierarchicalBlendTarget *)(local_70 + 8));
            pTVar5 = local_b0;
            iVar8 = TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>_>
                              (local_b0,uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 + uVar7 ^ uVar12,
                               (TTuple<short,UE::MovieScene::FHierarchicalBlendTarget> *)local_70);
            pFVar13 = pFVar10;
            if (((iVar8 == -1) ||
                (pFVar13 = (FComponentHeader *)
                           (*(longlong *)&pTVar5->Elements + (longlong)iVar8 * 0x28),
                pFVar13 == (FComponentHeader *)0x0)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(undefined2 *)(local_90._24_8_ + (longlong)(int)local_e8 * 2) =
                 *(undefined2 *)&pFVar13->Components;
            FHierarchicalBlendTarget::~FHierarchicalBlendTarget
                      ((FHierarchicalBlendTarget *)(local_70 + 8));
            pFVar11 = local_d8;
            pFVar13 = local_d0;
            pFVar15 = (FComponentHeader *)((longlong)&pFVar15->_padding_ + 2);
            pFVar16 = (FComponentHeader *)(ulonglong)(iVar9 + 1U);
          } while ((int)(iVar9 + 1U) < param_1->Num);
        }
        if (local_a8._0_8_ != 0) {
          LOCK();
          *(int *)(local_a8._0_8_ + 0x30) = *(int *)(local_a8._0_8_ + 0x30) + -1;
          UNLOCK();
          if (local_a8._8_4_ == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8._0_8_ + 0x20));
          }
        }
      }
      if (pFVar13 != (FComponentHeader *)0x0) {
        LOCK();
        pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
        UNLOCK();
        if ((int)local_c8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
        }
      }
      LOCK();
      pFVar11->ScheduledAccessCount = (atomic<int>)((int)pFVar11->ScheduledAccessCount + -1);
      UNLOCK();
      if (local_e0 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar11->ReadWriteLock);
      }
      if (local_90._0_8_ != 0) {
        if ((ulonglong)local_90._8_8_ < *(ulonglong *)(local_90._0_8_ + 0x28)) {
          local_90._8_8_ = *(ulonglong *)(local_90._0_8_ + 0x28);
        }
        *(undefined8 *)(local_90._0_8_ + 0x28) = local_90._8_8_;
        LOCK();
        *(int *)(local_90._0_8_ + 0x30) = *(int *)(local_90._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_90._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_90._0_8_ + 0x20));
        }
      }
      return;
    }
    if ((pFVar13->ComponentType).Value == *(ushort *)(this->_padding_ + 0x106)) {
      EVar1 = pFVar2->LockMode;
      if (EVar1 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
      }
      LOCK();
      pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
      UNLOCK();
      local_c8 = CONCAT44(local_c8._4_4_,EVar1);
      puStack_c0 = pFVar13->Components;
      local_d0 = pFVar13;
      goto LAB_1468bbb7e;
    }
    pFVar13 = pFVar13 + 1;
  } while( true );
}

// MarkAllocation @ 1468bcd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FConsumerEasingChannelMutation::MarkAllocation
          (FConsumerEasingChannelMutation *this,FEntityAllocation *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  ushort uVar4;
  EComponentHeaderLockMode EVar5;
  ForElementType<unsigned_int> FVar6;
  TSparseArray<unsigned_short,FDefaultSparseArrayAllocator> *pTVar7;
  FMovieSceneEntityID *pFVar8;
  code *pcVar9;
  FConsumerEasingChannelMutation *pFVar10;
  TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FComponentHeader *pFVar16;
  ForElementType<unsigned_int> FVar17;
  longlong lVar18;
  FComponentHeader *pFVar19;
  FComponentHeader *pFVar20;
  FMovieSceneEntityID *pFVar21;
  uint uVar22;
  int iVar23;
  undefined1 *puVar24;
  FMovieSceneEntityID *pFVar25;
  uint uVar26;
  undefined1 auStack_148 [32];
  FMovieSceneEntityID *local_128;
  FMovieSceneEntityID *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  FConsumerEasingChannelMutation *local_f8;
  TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
  *local_f0;
  longlong local_e8;
  FComponentHeader *local_e0;
  EComponentHeaderLockMode local_d8;
  FEntityAllocation *local_d0;
  FComponentHeader *local_c8;
  undefined8 local_c0;
  uchar *puStack_b8;
  longlong local_b0;
  TComponentLock<UE::MovieScene::TWriteOptional<unsigned_short>_> local_a8;
  TComponentLock<UE::MovieScene::TReadOptional<short>_> local_88;
  undefined1 local_70 [24];
  int local_58;
  FHierarchicalBlendTarget local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar19 = (FComponentHeader *)0x0;
  pFVar25 = param_1->EntityIDs;
  local_e0 = param_1->ComponentHeaders;
  pFVar16 = local_e0 + param_1->NumComponents;
  for (; local_f8 = this, local_d0 = param_1, local_e0 != pFVar16; local_e0 = local_e0 + 1) {
    pFVar20 = local_e0;
    if ((local_e0->ComponentType).Value == *(ushort *)(this->_padding_ + 0x5e)) goto LAB_1468bcdc2;
  }
  local_e0 = (FComponentHeader *)0x0;
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar20 = pFVar19;
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1468bcdc2:
  local_d8 = param_1->LockMode;
  if (local_d8 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
  }
  LOCK();
  pFVar20->ScheduledAccessCount = (atomic<int>)((int)pFVar20->ScheduledAccessCount + 1);
  UNLOCK();
  local_f0 = (TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
              *)pFVar20->Components;
  FEntityAllocation::TryWriteComponents<unsigned_short>
            (param_1,&local_a8,*(TComponentTypeID<unsigned_short> *)(this->_padding_ + 0x102),
             (FEntityAllocationWriteContext)0x0);
  local_c8 = param_1->ComponentHeaders;
  pFVar16 = local_c8 + param_1->NumComponents;
  for (; local_c8 != pFVar16; local_c8 = local_c8 + 1) {
    if ((local_c8->ComponentType).Value == *(ushort *)(this->_padding_ + 0x106)) {
      EVar5 = param_1->LockMode;
      if (EVar5 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_c8->ReadWriteLock);
        this = local_f8;
      }
      LOCK();
      local_c8->ScheduledAccessCount = (atomic<int>)((int)local_c8->ScheduledAccessCount + 1);
      UNLOCK();
      puStack_b8 = local_c8->Components;
      local_c0 = CONCAT44(local_c0._4_4_,EVar5);
      param_1 = local_d0;
      goto LAB_1468bce4a;
    }
  }
  local_c8 = (FComponentHeader *)0x0;
  local_c0 = 0;
  puStack_b8 = (uchar *)0x0;
LAB_1468bce4a:
  pFVar16 = local_c8;
  local_e8 = local_a8._24_8_;
  if (puStack_b8 == (uchar *)0x0) {
    if (param_1->Size != 0) {
      uVar26 = 1;
      pFVar21 = pFVar25;
      lVar18 = local_a8._24_8_;
      do {
        pTVar7 = this->InstanceIDToChannel;
        uVar4 = *(ushort *)&local_f0->Elements;
        iVar14 = (int)pFVar19;
        if ((int)(uint)uVar4 < *(int *)&pTVar7->field_0x28) {
          if ((*(int *)&pTVar7->field_0x28 <= (int)(uint)uVar4) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), this = local_f8, lVar18 = local_e8, bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar24 = &pTVar7->field_0x10;
          if (*(undefined1 **)&pTVar7->field_0x20 != (undefined1 *)0x0) {
            puVar24 = *(undefined1 **)&pTVar7->field_0x20;
          }
          if ((*(uint *)(puVar24 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0)
          goto LAB_1468bd273;
          if (lVar18 == 0) {
            iVar23 = (iVar14 - param_2->NumBits) + 1;
            if (0 < iVar23) {
              iVar15 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(param_2,iVar23);
              TBitArray<FDefaultBitArrayAllocator>::SetRange(param_2,iVar15,iVar23,false);
            }
            if (((iVar14 < 0) || (param_2->NumBits <= iVar14)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar6 = (param_2->AllocatorInstance).SecondaryData;
            FVar17 = (ForElementType<unsigned_int>)param_2;
            if (FVar6 != (ForElementType<unsigned_int>)0x0) {
              FVar17 = FVar6;
            }
            iVar23 = iVar14;
            if (iVar14 < 0) {
              iVar23 = iVar14 + 0x1f;
            }
            puVar3 = (uint *)((longlong)FVar17 + (longlong)(iVar23 >> 5) * 4);
            *puVar3 = *puVar3 | uVar26;
            lVar18 = local_e8;
          }
          else {
            *(undefined2 *)((local_a8._24_8_ - (longlong)pFVar25) + (longlong)pFVar21) =
                 *(undefined2 *)
                  (*(longlong *)this->InstanceIDToChannel +
                  (ulonglong)*(ushort *)&local_f0->Elements * 8);
          }
        }
        else {
LAB_1468bd273:
          if (lVar18 != 0) {
            pFVar8 = (FMovieSceneEntityID *)this->_padding_;
            if ((pFVar8 <= pFVar21) &&
               (lVar18 = (longlong)*(int *)((longlong)&this->_padding_ + 4),
               pFVar21 < pFVar8 + lVar18)) {
              local_110 = (longlong)(int)this->_padding_;
              local_108 = 2;
              local_128 = pFVar21;
              local_120 = pFVar8;
              local_118 = lVar18;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            iVar23 = (int)this->_padding_;
            piVar1 = (int *)((longlong)&this->_padding_ + 4);
            if (iVar23 == *piVar1) {
              iVar23 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,(ForAnyElementType *)&this->_padding_,piVar1);
            }
            *(int *)&this->_padding_ = iVar23 + 1;
            *(ushort *)(this->_padding_ + (longlong)iVar23 * 2) = pFVar21->Value;
            lVar18 = local_e8;
          }
        }
        local_f0 = (TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                    *)&(local_f0->Elements).field_0x4;
        pFVar19 = (FComponentHeader *)(ulonglong)(iVar14 + 1U);
        uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
        pFVar21 = pFVar21 + 1;
        pFVar20 = local_e0;
        pFVar16 = local_c8;
        this = local_f8;
      } while ((int)(iVar14 + 1U) < (int)(uint)local_d0->Size);
    }
  }
  else {
    if ((this->CachedHierarchicalBlendTargetChannels ==
         (TMap<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>_>
          *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("CachedHierarchicalBlendTargetChannels",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                            ,0x1b7,L""), this = local_f8, bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FEntityAllocation::TryReadComponents<short>
              (param_1,&local_88,*(TComponentTypeID<short> *)(this->_padding_ + 0x6e));
    if (param_1->Size != 0) {
      uVar26 = 1;
      local_b0 = -(longlong)pFVar25;
      pFVar20 = pFVar19;
      do {
        lVar18 = local_b0;
        local_58 = 0;
        if (local_88._16_8_ != 0) {
          local_58 = (int)*(short *)((longlong)&pFVar25->Value + local_88._16_8_ + local_b0);
        }
        iVar23 = (int)pFVar20;
        FHierarchicalBlendTarget::FHierarchicalBlendTarget
                  (&local_50,(FHierarchicalBlendTarget *)(puStack_b8 + (longlong)iVar23 * 0x10));
        local_70._0_2_ = (short)local_58;
        FHierarchicalBlendTarget::FHierarchicalBlendTarget
                  ((FHierarchicalBlendTarget *)(local_70 + 8),&local_50);
        FHierarchicalBlendTarget::~FHierarchicalBlendTarget(&local_50);
        uVar22 = (uint)(short)local_70._0_2_;
        local_f0 = (TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                    *)local_f8->CachedHierarchicalBlendTargetChannels;
        uVar13 = MovieScene::GetTypeHash((FHierarchicalBlendTarget *)(local_70 + 8));
        pTVar11 = local_f0;
        iVar14 = TSet<TTuple<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short>,TDefaultMapHashableKeyFuncs<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>,unsigned_short,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TTuple<short,UE::MovieScene::FHierarchicalBlendTarget>_>
                           (local_f0,uVar22 * 0x40 + (uVar22 >> 2) + 0x9e3779b9 + uVar13 ^ uVar22,
                            (TTuple<short,UE::MovieScene::FHierarchicalBlendTarget> *)local_70);
        pFVar10 = local_f8;
        if (iVar14 == -1) {
LAB_1468bd051:
          if (local_e8 != 0) {
            pFVar21 = (FMovieSceneEntityID *)local_f8->_padding_;
            if ((pFVar21 <= pFVar25) &&
               (lVar18 = (longlong)*(int *)((longlong)&local_f8->_padding_ + 4),
               pFVar25 < pFVar21 + lVar18)) {
              local_110 = (longlong)(int)local_f8->_padding_;
              local_108 = 2;
              local_128 = pFVar25;
              local_120 = pFVar21;
              local_118 = lVar18;
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            iVar14 = (int)pFVar10->_padding_;
            piVar1 = (int *)((longlong)&pFVar10->_padding_ + 4);
            if (iVar14 == *piVar1) {
              iVar14 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,(ForAnyElementType *)&pFVar10->_padding_,piVar1);
            }
            *(int *)&pFVar10->_padding_ = iVar14 + 1;
            *(ushort *)(pFVar10->_padding_ + (longlong)iVar14 * 2) = pFVar25->Value;
          }
        }
        else {
          lVar2 = *(longlong *)&pTVar11->Elements + (longlong)iVar14 * 0x28;
          pFVar16 = (FComponentHeader *)(lVar2 + 0x18);
          if (lVar2 == 0) {
            pFVar16 = pFVar19;
          }
          if (pFVar16 == (FComponentHeader *)0x0) goto LAB_1468bd051;
          if (local_e8 == 0) {
            iVar14 = (iVar23 - param_2->NumBits) + 1;
            if (0 < iVar14) {
              iVar15 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(param_2,iVar14);
              TBitArray<FDefaultBitArrayAllocator>::SetRange(param_2,iVar15,iVar14,false);
            }
            if (((iVar23 < 0) || (param_2->NumBits <= iVar23)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar6 = (param_2->AllocatorInstance).SecondaryData;
            FVar17 = (ForElementType<unsigned_int>)param_2;
            if (FVar6 != (ForElementType<unsigned_int>)0x0) {
              FVar17 = FVar6;
            }
            iVar14 = iVar23;
            if (iVar23 < 0) {
              iVar14 = iVar23 + 0x1f;
            }
            puVar3 = (uint *)((longlong)FVar17 + (longlong)(iVar14 >> 5) * 4);
            *puVar3 = *puVar3 | uVar26;
          }
          else {
            *(short *)((longlong)&pFVar25->Value + local_a8._24_8_ + lVar18) =
                 (short)pFVar16->_padding_;
          }
        }
        FHierarchicalBlendTarget::~FHierarchicalBlendTarget
                  ((FHierarchicalBlendTarget *)(local_70 + 8));
        pFVar20 = (FComponentHeader *)(ulonglong)(iVar23 + 1U);
        pFVar25 = pFVar25 + 1;
        uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
        pFVar16 = local_c8;
      } while ((int)(iVar23 + 1U) < (int)(uint)local_d0->Size);
    }
    pFVar20 = local_e0;
    if (local_88._0_8_ != 0) {
      LOCK();
      *(int *)(local_88._0_8_ + 0x30) = *(int *)(local_88._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_88._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_88._0_8_ + 0x20));
        pFVar20 = local_e0;
      }
    }
  }
  if (pFVar16 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_c0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
    }
  }
  if (local_a8._0_8_ != 0) {
    if ((ulonglong)local_a8._8_8_ < *(ulonglong *)(local_a8._0_8_ + 0x28)) {
      local_a8._8_8_ = *(ulonglong *)(local_a8._0_8_ + 0x28);
    }
    *(undefined8 *)(local_a8._0_8_ + 0x28) = local_a8._8_8_;
    LOCK();
    *(int *)(local_a8._0_8_ + 0x30) = *(int *)(local_a8._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_a8._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_a8._0_8_ + 0x20));
    }
  }
  LOCK();
  pFVar20->ScheduledAccessCount = (atomic<int>)((int)pFVar20->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_d8 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar20->ReadWriteLock);
  }
  return;
}


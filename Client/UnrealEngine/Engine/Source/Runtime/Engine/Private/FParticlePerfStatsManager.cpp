// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// operator() @ 148161ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FParticlePerfStatsManager::Tick'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ParticleStats_TickRT> FVar12;
  ulonglong uVar13;
  FName FVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_1b8;
  FName local_1b0;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong *local_198;
  undefined1 auStack_190 [16];
  uint uStack_180;
  uint uStack_17c;
  longlong local_178;
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_170;
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *local_168;
  undefined2 local_160;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *local_e8;
  undefined2 local_e0;
  FName local_d8;
  undefined1 local_d0 [32];
  longlong local_b0;
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_a8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  FVar12 = StatPtr_STAT_ParticleStats_TickRT;
  if (StatPtr_STAT_ParticleStats_TickRT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleStats_TickRT>)0x0) {
    pFVar11 = ::FName::FName(&local_d8,"STAT_ParticleStats_TickRT");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ParticleStats_TickRT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleStats_TickRT,*pFVar11,
                        L"Particle Stats Tick [RT]","STATGROUP_ParticleStats","STATCAT_Advanced",
                        L"ParticleStats",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar7 = false;
  bVar6 = false;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                   ,0xfe);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar8 = true;
      goto LAB_148161c4d;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  FVar14 = local_1b0;
LAB_148161c4d:
  piVar1 = (int *)((longlong)this + 0x88);
  iVar15 = *piVar1;
  if (*(longlong **)((longlong)this + 0x80) != (longlong *)0x0) {
    this = *(longlong **)((longlong)this + 0x80);
  }
  plVar17 = (longlong *)((longlong)this + (longlong)iVar15 * 2 * 8);
  while( true ) {
    if (*piVar1 != iVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (this == plVar17) {
      EnterCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::WorldToPerfStatsGuard);
      TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_d0,
                 (TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                  *)&FParticlePerfStatsManager::WorldToPerfStats);
      local_168 = (TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                   *)&FParticlePerfStatsManager::WorldToPerfStats;
      local_160 = 0;
      iVar15 = 1;
      stack0xfffffffffffffe78 = local_d0._16_16_;
      local_198 = (longlong *)local_d0._0_8_;
      auStack_190._0_8_ = local_d0._8_8_;
      local_178 = local_b0;
      pTStack_170 = pTStack_a8;
      uVar13 = local_d0._24_8_ >> 0x20;
      if (local_d0._28_4_ < *(int *)(local_d0._16_8_ + 0x18)) {
        do {
          lVar4 = *(longlong *)(*local_198 + 8 + (longlong)(int)uVar13 * 0x18);
          bVar9 = IsInRenderingThread();
          if ((!bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInRenderingThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                                 ,0x274,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined8 *)(lVar4 + 0x38) = 0;
          uStack_180 = uStack_180 & ~auStack_190._4_4_;
          *(undefined8 *)(lVar4 + 0x40) = 0;
          *(undefined8 *)(lVar4 + 0x48) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_190);
          uVar13 = (ulonglong)uStack_17c;
        } while ((int)uStack_17c < *(int *)(auStack_190._8_8_ + 0x18));
        if (((char)local_160 != '\0') && (local_160._1_1_ != '\0')) {
          uVar16 = *(int *)&(local_168->Elements).field_0x8 -
                   *(int *)&(local_168->Elements).field_0x34;
          if (uVar16 < 4) {
            iVar10 = 1;
          }
          else {
            uVar13 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
            lVar4 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            local_1a0 = (undefined4)lVar4;
            iVar10 = 1 << ((byte)lVar4 & 0x1f);
          }
          if (((0 < (int)uVar16) && (local_168->HashSize < iVar10)) ||
             (iVar10 < local_168->HashSize)) {
            local_168->HashSize = iVar10;
            TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
            ::Rehash(local_168);
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::WorldToPerfStatsGuard);
      EnterCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::SystemToPerfStatsGuard);
      TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_a0,
                 (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                  *)&FParticlePerfStatsManager::SystemToPerfStats);
      local_128 = (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                   *)&FParticlePerfStatsManager::SystemToPerfStats;
      local_120 = 0;
      stack0xfffffffffffffeb8 = local_a0._16_16_;
      local_158 = (longlong *)local_a0._0_8_;
      auStack_150._0_8_ = local_a0._8_8_;
      local_138 = local_80;
      pTStack_130 = pTStack_78;
      uVar13 = local_a0._24_8_ >> 0x20;
      if (local_a0._28_4_ < *(int *)(local_a0._16_8_ + 0x18)) {
        do {
          lVar4 = *(longlong *)(*local_158 + 8 + (longlong)(int)uVar13 * 0x18);
          bVar9 = IsInRenderingThread();
          if ((!bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInRenderingThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                                 ,0x274,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined8 *)(lVar4 + 0x38) = 0;
          uStack_140 = uStack_140 & ~auStack_150._4_4_;
          *(undefined8 *)(lVar4 + 0x40) = 0;
          *(undefined8 *)(lVar4 + 0x48) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
          uVar13 = (ulonglong)uStack_13c;
        } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
        if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
          uVar16 = *(int *)&(local_128->Elements).field_0x8 -
                   *(int *)&(local_128->Elements).field_0x34;
          if (uVar16 < 4) {
            iVar10 = 1;
          }
          else {
            uVar13 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
            lVar4 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            local_19c = (undefined4)lVar4;
            iVar10 = 1 << ((byte)lVar4 & 0x1f);
          }
          if (((0 < (int)uVar16) && (local_128->HashSize < iVar10)) ||
             (iVar10 < local_128->HashSize)) {
            local_128->HashSize = iVar10;
            TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
            ::Rehash(local_128);
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&FParticlePerfStatsManager::SystemToPerfStatsGuard);
      EnterCriticalSection
                ((LPCRITICAL_SECTION)&FParticlePerfStatsManager::ComponentToPerfStatsGuard);
      TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_70,
                 (TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                  *)&FParticlePerfStatsManager::ComponentToPerfStats);
      local_e8 = (TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                  *)&FParticlePerfStatsManager::ComponentToPerfStats;
      local_e0 = 0;
      stack0xfffffffffffffef8 = local_70._16_16_;
      local_118 = (longlong *)local_70._0_8_;
      auStack_110._0_8_ = local_70._8_8_;
      local_f8 = local_50;
      pTStack_f0 = pTStack_48;
      uVar13 = local_70._24_8_ >> 0x20;
      if (local_70._28_4_ < *(int *)(local_70._16_8_ + 0x18)) {
        do {
          lVar4 = *(longlong *)(*local_118 + 8 + (longlong)(int)uVar13 * 0x18);
          bVar9 = IsInRenderingThread();
          if ((!bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInRenderingThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                                 ,0x274,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined8 *)(lVar4 + 0x38) = 0;
          uStack_100 = uStack_100 & ~auStack_110._4_4_;
          *(undefined8 *)(lVar4 + 0x40) = 0;
          *(undefined8 *)(lVar4 + 0x48) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
          uVar13 = (ulonglong)uStack_fc;
        } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
        if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
          uVar16 = *(int *)&(local_e8->Elements).field_0x8 -
                   *(int *)&(local_e8->Elements).field_0x34;
          if (3 < uVar16) {
            uVar13 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
            lVar4 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            iVar15 = 1 << ((byte)lVar4 & 0x1f);
          }
          if (((0 < (int)uVar16) && (local_e8->HashSize < iVar15)) || (iVar15 < local_e8->HashSize))
          {
            local_e8->HashSize = iVar15;
            TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
            ::Rehash(local_e8);
          }
        }
      }
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)&FParticlePerfStatsManager::ComponentToPerfStatsGuard);
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar8) {
        FThreadStats::AddMessage(FVar14,CycleScopeEnd);
      }
      return;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    plVar3 = *(longlong **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar3 == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) break;
    (**(code **)(*plVar3 + 0x20))(plVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    this = (void *)((longlong)this + 0x10);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// AddListener @ 148165800

void __cdecl
FParticlePerfStatsManager::AddListener
          (TSharedPtr<FParticlePerfStatsListener,1> *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  longlong lVar6;
  TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  
  if (param_2) {
    Reset();
  }
  if (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0) {
    pTVar7 = &Listeners;
    pTVar5 = &Listeners;
    if (Listeners.AllocatorInstance.SecondaryData !=
        (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
      pTVar5 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)Listeners.AllocatorInstance.SecondaryData;
    }
    if (pTVar5 <= param_1) {
      pTVar5 = &Listeners;
      if (Listeners.AllocatorInstance.SecondaryData !=
          (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
        pTVar5 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  *)Listeners.AllocatorInstance.SecondaryData;
      }
      if ((param_1 < (TSharedPtr<FParticlePerfStatsListener,1> *)
                     ((longlong)Listeners.ArrayMax * 0x10 + (longlong)pTVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (Listeners.ArrayNum == Listeners.ArrayMax) {
      Listeners.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>_>
                     (0x810,&Listeners.AllocatorInstance,&Listeners.ArrayMax);
    }
    if (Listeners.AllocatorInstance.SecondaryData !=
        (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
      pTVar7 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                *)Listeners.AllocatorInstance.SecondaryData;
    }
    lVar6 = (longlong)Listeners.ArrayNum;
    Listeners.ArrayNum = Listeners.ArrayNum + 1;
    *(FParticlePerfStatsListener **)((longlong)pTVar7 + lVar6 * 0x10) = param_1->Object;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)pTVar7 + 8 + lVar6 * 0x10) = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((param_1->Object == (FParticlePerfStatsListener *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*(longlong *)param_1->Object + 8))();
    if ((param_1->Object == (FParticlePerfStatsListener *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)(*(longlong *)param_1->Object + 0x58))();
    if (cVar4 != '\0') {
      LOCK();
      FParticlePerfStats::WorldStatsReaders =
           (TAtomic<int>)((int)FParticlePerfStats::WorldStatsReaders + 1);
      UNLOCK();
    }
    if ((param_1->Object == (FParticlePerfStatsListener *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)(*(longlong *)param_1->Object + 0x60))();
    if (cVar4 != '\0') {
      LOCK();
      FParticlePerfStats::SystemStatsReaders =
           (TAtomic<int>)((int)FParticlePerfStats::SystemStatsReaders + 1);
      UNLOCK();
    }
    if ((param_1->Object == (FParticlePerfStatsListener *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)(*(longlong *)param_1->Object + 0x68))();
    if (cVar4 != '\0') {
      LOCK();
      FParticlePerfStats::ComponentStatsReaders =
           (TAtomic<int>)((int)FParticlePerfStats::ComponentStatsReaders + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetComponentPerfStats @ 148178a70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FParticlePerfStats * __cdecl
FParticlePerfStatsManager::GetComponentPerfStats(UFXSystemComponent *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> TVar6;
  FParticlePerfStats *this;
  FParticlePerfStats *pFVar7;
  uint uVar8;
  FParticlePerfStats *pFVar9;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar11;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar12;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UFXSystemComponent *local_58;
  FWeakObjectPtr *local_50;
  FParticlePerfStats *local_48;
  UFXSystemComponent *local_40;
  longlong lVar10;
  
  if (param_1->ParticlePerfStats != (FParticlePerfStats *)0x0) {
    return param_1->ParticlePerfStats;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&ComponentToPerfStatsGuard);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar7 = (FParticlePerfStats *)0x0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_58 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_58);
  uVar8 = local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&ComponentToPerfStats,uVar8,
                     (TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *)&local_res18);
  if ((iVar5 == -1) || (lVar10 = ComponentToPerfStats._0_8_ + (longlong)iVar5 * 0x18, lVar10 == 0))
  {
    local_50 = &local_res18;
    TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&ComponentToPerfStats,(uint)local_res10,
               (TKeyInitializer<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_&&> *)
               (ulonglong)uVar8,(bool *)&local_50);
    lVar10 = ComponentToPerfStats._0_8_ + (longlong)local_res10[0] * 0x18;
  }
  pFVar9 = (FParticlePerfStats *)(lVar10 + 8);
  if ((pFVar9->GameThreadStats).NumInstances == 0) {
    if (FreeComponentStatsPool.ArrayNum == 0) {
      this = ::operator_new(0xd0);
      if (this != (FParticlePerfStats *)0x0) {
        pFVar7 = FParticlePerfStats::FParticlePerfStats(this);
      }
      local_48 = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
      if (local_48 == pFVar7) goto LAB_148178bfa;
      (pFVar9->GameThreadStats).NumInstances = (ulong64)pFVar7;
    }
    else {
      TVar6 = TArray<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,TSizedDefaultAllocator<32>_>
              ::Pop(&FreeComponentStatsPool,(EAllowShrinking)&local_48);
      if (pFVar9 != TVar6.Ptr) {
        pvVar1 = (void *)(pFVar9->GameThreadStats).NumInstances;
        (pFVar9->GameThreadStats).NumInstances = ((TVar6.Ptr)->GameThreadStats).NumInstances;
        ((TVar6.Ptr)->GameThreadStats).NumInstances = 0;
        ::operator_delete(pvVar1,0xd0);
      }
    }
    ::operator_delete(local_48,0xd0);
  }
LAB_148178bfa:
  param_1->ParticlePerfStats = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
  iVar5 = Listeners.ArrayNum;
  FVar11 = Listeners.AllocatorInstance.SecondaryData;
  if (Listeners.AllocatorInstance.SecondaryData ==
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)&Listeners;
  }
  FVar12 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
           ((longlong)iVar5 * 0x10 + (longlong)FVar11);
  while( true ) {
    if (Listeners.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar11 == FVar12) break;
    if ((*(longlong *)FVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParticlePerfStats *)(*pcVar3)();
      return pFVar7;
    }
    plVar2 = *(longlong **)FVar11;
    pcVar3 = *(code **)(*plVar2 + 0x48);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
    (*pcVar3)(plVar2,&local_res20);
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)((longlong)FVar11 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&ComponentToPerfStatsGuard);
  return param_1->ParticlePerfStats;
}

// GetSystemPerfStats @ 14817f540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FParticlePerfStats * __cdecl FParticlePerfStatsManager::GetSystemPerfStats(UFXSystemAsset *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> TVar6;
  FParticlePerfStats *this;
  FParticlePerfStats *pFVar7;
  uint uVar8;
  FParticlePerfStats *pFVar9;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar11;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar12;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UFXSystemAsset *local_58;
  FWeakObjectPtr *local_50;
  FParticlePerfStats *local_48;
  UFXSystemAsset *local_40;
  longlong lVar10;
  
  if (param_1->ParticlePerfStats != (FParticlePerfStats *)0x0) {
    return param_1->ParticlePerfStats;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar7 = (FParticlePerfStats *)0x0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_58 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_58);
  uVar8 = local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&SystemToPerfStats,uVar8,
                     (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_res18);
  if ((iVar5 == -1) || (lVar10 = SystemToPerfStats._0_8_ + (longlong)iVar5 * 0x18, lVar10 == 0)) {
    local_50 = &local_res18;
    TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&SystemToPerfStats,(uint)local_res10,
               (TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_&&> *)
               (ulonglong)uVar8,(bool *)&local_50);
    lVar10 = SystemToPerfStats._0_8_ + (longlong)local_res10[0] * 0x18;
  }
  pFVar9 = (FParticlePerfStats *)(lVar10 + 8);
  if ((pFVar9->GameThreadStats).NumInstances == 0) {
    if (FreeSystemStatsPool.ArrayNum == 0) {
      this = ::operator_new(0xd0);
      if (this != (FParticlePerfStats *)0x0) {
        pFVar7 = FParticlePerfStats::FParticlePerfStats(this);
      }
      local_48 = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
      if (local_48 == pFVar7) goto LAB_14817f6c7;
      (pFVar9->GameThreadStats).NumInstances = (ulong64)pFVar7;
    }
    else {
      TVar6 = TArray<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,TSizedDefaultAllocator<32>_>
              ::Pop(&FreeSystemStatsPool,(EAllowShrinking)&local_48);
      if (pFVar9 != TVar6.Ptr) {
        pvVar1 = (void *)(pFVar9->GameThreadStats).NumInstances;
        (pFVar9->GameThreadStats).NumInstances = ((TVar6.Ptr)->GameThreadStats).NumInstances;
        ((TVar6.Ptr)->GameThreadStats).NumInstances = 0;
        ::operator_delete(pvVar1,0xd0);
      }
    }
    ::operator_delete(local_48,0xd0);
  }
LAB_14817f6c7:
  pFVar7 = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
  param_1->ParticlePerfStats = pFVar7;
  FParticlePerfStats::PopulateStatNames(pFVar7,(FName)param_1->_padding_);
  iVar5 = Listeners.ArrayNum;
  FVar11 = Listeners.AllocatorInstance.SecondaryData;
  if (Listeners.AllocatorInstance.SecondaryData ==
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)&Listeners;
  }
  FVar12 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
           ((longlong)iVar5 * 0x10 + (longlong)FVar11);
  while( true ) {
    if (Listeners.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar11 == FVar12) break;
    if ((*(longlong *)FVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParticlePerfStats *)(*pcVar3)();
      return pFVar7;
    }
    plVar2 = *(longlong **)FVar11;
    pcVar3 = *(code **)(*plVar2 + 0x38);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
    (*pcVar3)(plVar2,&local_res20);
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)((longlong)FVar11 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  return param_1->ParticlePerfStats;
}

// GetWorldPerfStats @ 1481807c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FParticlePerfStats * __cdecl FParticlePerfStatsManager::GetWorldPerfStats(UWorld *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_> TVar6;
  FParticlePerfStats *this;
  FParticlePerfStats *pFVar7;
  uint uVar8;
  FParticlePerfStats *pFVar9;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar11;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar12;
  undefined1 local_res8 [8];
  int local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UWorld *local_58;
  FWeakObjectPtr *local_50;
  FParticlePerfStats *local_48;
  UWorld *local_40;
  longlong lVar10;
  
  if (param_1->ParticlePerfStats != (FParticlePerfStats *)0x0) {
    return param_1->ParticlePerfStats;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&WorldToPerfStatsGuard);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar7 = (FParticlePerfStats *)0x0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_58 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_58);
  uVar8 = local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&WorldToPerfStats,uVar8,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res18);
  if ((iVar5 == -1) || (lVar10 = WorldToPerfStats._0_8_ + (longlong)iVar5 * 0x18, lVar10 == 0)) {
    local_50 = &local_res18;
    TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&WorldToPerfStats,(uint)local_res10,
               (TKeyInitializer<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_&&> *)(ulonglong)uVar8,
               (bool *)&local_50);
    lVar10 = WorldToPerfStats._0_8_ + (longlong)local_res10[0] * 0x18;
  }
  pFVar9 = (FParticlePerfStats *)(lVar10 + 8);
  if ((pFVar9->GameThreadStats).NumInstances == 0) {
    if (FreeWorldStatsPool.ArrayNum == 0) {
      this = ::operator_new(0xd0);
      if (this != (FParticlePerfStats *)0x0) {
        pFVar7 = FParticlePerfStats::FParticlePerfStats(this);
      }
      local_48 = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
      if (local_48 == pFVar7) goto LAB_14818094a;
      (pFVar9->GameThreadStats).NumInstances = (ulong64)pFVar7;
    }
    else {
      TVar6 = TArray<TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,TSizedDefaultAllocator<32>_>
              ::Pop(&FreeWorldStatsPool,(EAllowShrinking)&local_48);
      if (pFVar9 != TVar6.Ptr) {
        pvVar1 = (void *)(pFVar9->GameThreadStats).NumInstances;
        (pFVar9->GameThreadStats).NumInstances = ((TVar6.Ptr)->GameThreadStats).NumInstances;
        ((TVar6.Ptr)->GameThreadStats).NumInstances = 0;
        ::operator_delete(pvVar1,0xd0);
      }
    }
    ::operator_delete(local_48,0xd0);
  }
LAB_14818094a:
  param_1->ParticlePerfStats = (FParticlePerfStats *)(pFVar9->GameThreadStats).NumInstances;
  iVar5 = Listeners.ArrayNum;
  FVar11 = Listeners.AllocatorInstance.SecondaryData;
  if (Listeners.AllocatorInstance.SecondaryData ==
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)&Listeners;
  }
  FVar12 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
           ((longlong)iVar5 * 0x10 + (longlong)FVar11);
  while( true ) {
    if (Listeners.ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar11 == FVar12) break;
    if ((*(longlong *)FVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParticlePerfStats *)(*pcVar3)();
      return pFVar7;
    }
    plVar2 = *(longlong **)FVar11;
    pcVar3 = *(code **)(*plVar2 + 0x28);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
    (*pcVar3)(plVar2,&local_res20);
    FVar11 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)((longlong)FVar11 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&WorldToPerfStatsGuard);
  return param_1->ParticlePerfStats;
}

// OnShutdown @ 148187790

void __cdecl FParticlePerfStatsManager::OnShutdown(void)

{
  FCsvProfiler *pFVar1;
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnBeginFrame,BeginFrameHandle);
  pFVar1 = FCsvProfiler::Get();
  if (pFVar1 != (FCsvProfiler *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar1->OnCSVProfileStartDelegate,CSVStartHandle);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar1->OnCSVProfileEndDelegate,CSVEndHandle);
    return;
  }
  return;
}

// OnStartup @ 148187c80

void __cdecl FParticlePerfStatsManager::OnStartup(void)

{
  FDelegateHandle FVar1;
  FCsvProfiler *pFVar2;
  undefined1 local_res8 [32];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnBeginFrame,(_func___cdecl_void *)local_res8);
                    /* WARNING: Load size is inaccurate */
  BeginFrameHandle.ID = *FVar1.ID;
  pFVar2 = FCsvProfiler::Get();
  if (pFVar2 != (FCsvProfiler *)0x0) {
    FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddStatic<>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                         *)&pFVar2->OnCSVProfileStartDelegate,(_func___cdecl_void *)local_res8);
                    /* WARNING: Load size is inaccurate */
    CSVStartHandle.ID = *FVar1.ID;
    FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddStatic<>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                         *)&pFVar2->OnCSVProfileEndDelegate,(_func___cdecl_void *)local_res8);
                    /* WARNING: Load size is inaccurate */
    CSVEndHandle.ID = *FVar1.ID;
  }
  return;
}

// RemoveListener @ 14818f8c0

void __cdecl FParticlePerfStatsManager::RemoveListener(FParticlePerfStatsListener *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FParticlePerfStatsListener *pFVar4;
  FParticlePerfStatsListener *pFVar5;
  FParticlePerfStatsListener *pFVar6;
  FParticlePerfStatsListener *pFVar7;
  bool bVar8;
  TSharedPtr<FParticlePerfStatsListener,1> local_18;
  
  pFVar4 = *(FParticlePerfStatsListener **)&param_1->field_0x10;
  pFVar7 = (FParticlePerfStatsListener *)0x0;
  pFVar5 = pFVar4;
  pFVar6 = pFVar7;
  if (pFVar4 != (FParticlePerfStatsListener *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar4->field_0x8;
    do {
      pFVar5 = pFVar7;
      pFVar6 = (FParticlePerfStatsListener *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14818f905;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar4->field_0x8;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        *(atomic<int> *)&pFVar4->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pFVar5 = pFVar4;
    pFVar6 = *(FParticlePerfStatsListener **)&param_1->field_0x8;
  }
LAB_14818f905:
  pFVar4 = (FParticlePerfStatsListener *)&pFVar6->field_0x8;
  if (pFVar6 == (FParticlePerfStatsListener *)0x0) {
    pFVar4 = pFVar7;
  }
  if ((pFVar4 != (FParticlePerfStatsListener *)&param_1->field_0x8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (pFVar6 == (FParticlePerfStatsListener *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar5 != (FParticlePerfStatsListener *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar5->field_0x8 = (atomic<int>)((int)*(atomic<int> *)&pFVar5->field_0x8 + 1);
    UNLOCK();
  }
  local_18.Object = pFVar6;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
  RemoveListener(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return;
}

// RemoveListener @ 14818f9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FParticlePerfStatsManager::RemoveListener(TSharedPtr<FParticlePerfStatsListener,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FParticlePerfStatsListener *pFStack_70;
  TReferenceControllerBase<1> *local_68;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  FParticlePerfStatsListener *pFStack_40;
  TReferenceControllerBase<1> *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = param_1->Object;
  local_68 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_68 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_68->SharedReferenceCount = (atomic<int>)((int)local_68->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = (undefined ***)0x0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FParticlePerfStatsManager::RemoveListener'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FParticlePerfStatsManager::RemoveListener'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FParticlePerfStatsManager::RemoveListener_::__l2::TSTR_FRemoveParticlePerfStatsListenerCmd155>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58[0] = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FParticlePerfStatsManager::RemoveListener'::__l2::TSTR_FRemoveParticlePerfStatsListenerCmd155>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_58[0] != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 2);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])();
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (param_1->Object == (FParticlePerfStatsListener *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)param_1->Object + 0x10))();
  TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::Remove(&Listeners,param_1);
  if (param_1->Object == (FParticlePerfStatsListener *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  cVar3 = (**(code **)(*(longlong *)param_1->Object + 0x58))();
  if (cVar3 != '\0') {
    LOCK();
    FParticlePerfStats::WorldStatsReaders =
         (TAtomic<int>)((int)FParticlePerfStats::WorldStatsReaders + -1);
    UNLOCK();
  }
  if (param_1->Object == (FParticlePerfStatsListener *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  cVar3 = (**(code **)(*(longlong *)param_1->Object + 0x60))();
  if (cVar3 != '\0') {
    LOCK();
    FParticlePerfStats::SystemStatsReaders =
         (TAtomic<int>)((int)FParticlePerfStats::SystemStatsReaders + -1);
    UNLOCK();
  }
  if (param_1->Object == (FParticlePerfStatsListener *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  cVar3 = (**(code **)(*(longlong *)param_1->Object + 0x68))();
  if (cVar3 != '\0') {
    LOCK();
    FParticlePerfStats::ComponentStatsReaders =
         (TAtomic<int>)((int)FParticlePerfStats::ComponentStatsReaders + -1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RenderStats @ 148190b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
FParticlePerfStatsManager::RenderStats
          (UWorld *param_1,FViewport *param_2,FCanvas *param_3,int param_4,int param_5,
          TVector<double> *param_6,TRotator<double> *param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  FWeakObjectPtr local_res8;
  UWorld *local_28;
  FWeakObjectPtr local_20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_28 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_28);
  local_20 = local_res8;
  iVar3 = TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>,0>,FDefaultSetAllocator>
                      *)&DebugRenderListenerUsers,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_20);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x20 + DebugRenderListenerUsers._0_8_;
    plVar5 = (longlong *)(lVar4 + 8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      if ((*plVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      param_5 = FParticlePerfStatsListener_DebugRender::RenderStats
                          ((FParticlePerfStatsListener_DebugRender *)*plVar5,param_1,param_2,param_3
                           ,param_4,param_5,param_6,param_7);
    }
  }
  return param_5;
}

// Reset @ 148191f20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FParticlePerfStatsManager::Reset(void)

{
  ulonglong uVar1;
  code *pcVar2;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *pTVar3;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *pTVar4;
  bool bVar5;
  int iVar6;
  EInternalObjectFlags EVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  TObjectIterator<UFXSystemComponent> local_148;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_130;
  uint uStack_128;
  uint uStack_124;
  undefined8 local_120;
  undefined4 uStack_118;
  uint uStack_114;
  uint local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  FlushRenderingCommands();
  EnterCriticalSection((LPCRITICAL_SECTION)&WorldToPerfStatsGuard);
  iVar6 = WorldToPerfStats._40_4_;
  uVar18 = 0;
  uStack_124 = 1;
  uStack_128 = 0;
  uVar16 = 0;
  uStack_114 = uStack_128;
  local_110 = uVar16;
  if (WorldToPerfStats._40_4_ != 0) {
    puVar17 = (uint *)&WorldToPerfStats.field_0x10;
    if (WorldToPerfStats._32_8_ != 0) {
      puVar17 = (uint *)WorldToPerfStats._32_8_;
    }
    uVar14 = *puVar17;
    local_110 = uVar18;
    uStack_128 = uVar18;
    while (uVar14 == 0) {
      lVar11 = (longlong)(int)uStack_128;
      local_110 = local_110 + 0x20;
      uStack_128 = uStack_128 + 1;
      uStack_114 = WorldToPerfStats._40_4_;
      if ((int)(WorldToPerfStats._40_4_ + -1 + (WorldToPerfStats._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5
          < (int)uStack_128) goto LAB_148191fe0;
      uVar14 = puVar17[lVar11 + 1];
    }
    uStack_124 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_124 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uStack_114 = (local_110 - 1) + local_res18;
    if ((int)WorldToPerfStats._40_4_ < (int)uStack_114) {
      uStack_114 = WorldToPerfStats._40_4_;
    }
  }
LAB_148191fe0:
  uStack_10c = local_4c;
  iStack_108 = WorldToPerfStats._8_4_ - WorldToPerfStats._52_4_;
  local_120 = 0x154c5ee20;
  uVar14 = WorldToPerfStats._40_4_ & 0xffffffe0;
  local_130 = &WorldToPerfStats;
  TStack_c0._padding_ = CONCAT44(uStack_124,uStack_128);
  uStack_118 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_114;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  local_c8 = &WorldToPerfStats;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_110;
  uStack_a0 = CONCAT44(uStack_104,iStack_108);
  iVar13 = (int)WorldToPerfStats._40_4_ >> 5;
  bVar10 = WorldToPerfStats._40_1_;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldToPerfStats.field_0x10;
  if (((int)WorldToPerfStats._40_4_ < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar6 != WorldToPerfStats._40_4_) {
    lVar11 = 0x154c5ee20;
    if (WorldToPerfStats._32_8_ != 0) {
      lVar11 = WorldToPerfStats._32_8_;
    }
    uVar15 = -1 << (bVar10 & 0x1f) & *(uint *)(lVar11 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar6 = WorldToPerfStats._40_4_;
      if ((int)(WorldToPerfStats._40_4_ + -1 + (WorldToPerfStats._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5
          < iVar13) goto LAB_148192110;
      uVar15 = *(uint *)(lVar11 + 4 + lVar12 * 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar6 = local_res20 + -1 + uVar14;
    if ((int)WorldToPerfStats._40_4_ < iVar6) {
      iVar6 = WorldToPerfStats._40_4_;
    }
  }
LAB_148192110:
  while( true ) {
    pTVar3 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c0.CurrentBitIndex == iVar6) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldToPerfStats.field_0x10))
       && (pTVar3 == &WorldToPerfStats)) break;
    pUVar8 = FWeakObjectPtr::GetEvenIfUnreachable
                       ((FWeakObjectPtr *)
                        (*(longlong *)pTVar3 + (longlong)TStack_c0.CurrentBitIndex * 0x18));
    if (pUVar8 != (UObject *)0x0) {
      *(undefined8 *)&pUVar8[0x3e].field_0x10 = 0;
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  bVar5 = 1 < (int)WorldToPerfStats._72_4_;
  if (!bVar5) {
    TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&WorldToPerfStats);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&WorldToPerfStats,0,WorldToPerfStats._8_4_);
  WorldToPerfStats._8_4_ = 0;
  if (WorldToPerfStats._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&WorldToPerfStats,0,(int *)&WorldToPerfStats.field_0xc)
    ;
  }
  WorldToPerfStats._48_4_ = 0xffffffff;
  WorldToPerfStats._52_4_ = 0;
  WorldToPerfStats._40_4_ = 0;
  if (0x80 < (uint)WorldToPerfStats._44_4_) {
    WorldToPerfStats._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&WorldToPerfStats.field_0x10,0);
  }
  if (bVar5) {
    WorldToPerfStats._72_4_ = 1;
    TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)&WorldToPerfStats);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&WorldToPerfStatsGuard);
  EnterCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  iVar6 = SystemToPerfStats._40_4_;
  uStack_ec = 1;
  uStack_dc = uVar16;
  local_d8 = uVar16;
  if (SystemToPerfStats._40_4_ != 0) {
    puVar17 = (uint *)&SystemToPerfStats.field_0x10;
    if (SystemToPerfStats._32_8_ != 0) {
      puVar17 = (uint *)SystemToPerfStats._32_8_;
    }
    uVar14 = *puVar17;
    local_d8 = uVar18;
    uVar16 = uVar18;
    while (uVar14 == 0) {
      lVar11 = (longlong)(int)uVar16;
      local_d8 = local_d8 + 0x20;
      uVar16 = uVar16 + 1;
      uStack_dc = SystemToPerfStats._40_4_;
      if ((int)(SystemToPerfStats._40_4_ + -1 + (SystemToPerfStats._40_4_ + -1 >> 0x1f & 0x1fU)) >>
          5 < (int)uVar16) goto LAB_1481922ce;
      uVar14 = puVar17[lVar11 + 1];
    }
    uStack_ec = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_ec * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_100 = (int)lVar11;
    uStack_dc = (local_d8 - 1) + local_100;
    if ((int)SystemToPerfStats._40_4_ < (int)uStack_dc) {
      uStack_dc = SystemToPerfStats._40_4_;
    }
  }
LAB_1481922ce:
  uStack_d4 = uStack_114;
  uVar14 = SystemToPerfStats._40_4_ & 0xffffffe0;
  iStack_d0 = SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_;
  uStack_e0 = 0xffffffff;
  local_f8 = &SystemToPerfStats;
  TStack_90._padding_ = CONCAT44(uStack_ec,uVar16);
  local_e8 = 0x154c5ee70;
  TStack_90.CurrentBitIndex = uStack_dc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  local_98 = &SystemToPerfStats;
  TStack_90._28_4_ = uStack_114;
  TStack_90.BaseBitIndex = local_d8;
  uStack_70 = CONCAT44(uStack_cc,iStack_d0);
  iVar13 = (int)SystemToPerfStats._40_4_ >> 5;
  bVar10 = SystemToPerfStats._40_1_;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10;
  uStack_f0 = uVar16;
  if (((int)SystemToPerfStats._40_4_ < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar6 != SystemToPerfStats._40_4_) {
    lVar11 = 0x154c5ee70;
    if (SystemToPerfStats._32_8_ != 0) {
      lVar11 = SystemToPerfStats._32_8_;
    }
    uVar16 = -1 << (bVar10 & 0x1f) & *(uint *)(lVar11 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar6 = SystemToPerfStats._40_4_;
      if ((int)(SystemToPerfStats._40_4_ + -1 + (SystemToPerfStats._40_4_ + -1 >> 0x1f & 0x1fU)) >>
          5 < iVar13) goto LAB_1481923e0;
      uVar16 = *(uint *)(lVar11 + 4 + lVar12 * 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_fc = (int)lVar11;
    iVar6 = local_fc + -1 + uVar14;
    if ((int)SystemToPerfStats._40_4_ < iVar6) {
      iVar6 = SystemToPerfStats._40_4_;
    }
  }
LAB_1481923e0:
  while( true ) {
    pTVar4 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == iVar6) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10))
       && (pTVar4 == &SystemToPerfStats)) break;
    pUVar8 = FWeakObjectPtr::GetEvenIfUnreachable
                       ((FWeakObjectPtr *)
                        (*(longlong *)pTVar4 + (longlong)TStack_90.CurrentBitIndex * 0x18));
    if (pUVar8 != (UObject *)0x0) {
      *(undefined8 *)&pUVar8[1].field_0x8 = 0;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  bVar5 = 1 < (int)SystemToPerfStats._72_4_;
  if (!bVar5) {
    TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&SystemToPerfStats);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&SystemToPerfStats,0,SystemToPerfStats._8_4_);
  SystemToPerfStats._8_4_ = 0;
  if (SystemToPerfStats._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&SystemToPerfStats,0,
               (int *)&SystemToPerfStats.field_0xc);
  }
  SystemToPerfStats._48_4_ = 0xffffffff;
  SystemToPerfStats._52_4_ = 0;
  SystemToPerfStats._40_4_ = 0;
  if (0x80 < (uint)SystemToPerfStats._44_4_) {
    SystemToPerfStats._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10,0);
  }
  if (bVar5) {
    SystemToPerfStats._72_4_ = 1;
    TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)&SystemToPerfStats);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  EnterCriticalSection((LPCRITICAL_SECTION)&ComponentToPerfStatsGuard);
  local_148.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ObjectArray.ArrayNum = 0;
  local_148.ObjectArray.ArrayMax = 0;
  local_148.Index = 0xffffffff;
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = UFXSystemComponent::StaticClass();
  GetObjectsOfClass(pUVar9,&local_148.ObjectArray,true,RF_ClassDefaultObject,
                    EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UFXSystemComponent>::Advance(&local_148);
    lVar11 = (longlong)local_148.Index;
    if ((local_148.Index < 0) || (local_148.ObjectArray.ArrayNum <= local_148.Index)) {
      if (local_148.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.ObjectArray.AllocatorInstance.Data);
      }
      bVar5 = 1 < (int)ComponentToPerfStats._72_4_;
      if (!bVar5) {
        TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                          *)&ComponentToPerfStats);
      }
      TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&ComponentToPerfStats,0,ComponentToPerfStats._8_4_);
      ComponentToPerfStats._8_4_ = 0;
      if (ComponentToPerfStats._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&ComponentToPerfStats,0,
                   (int *)&ComponentToPerfStats.field_0xc);
      }
      ComponentToPerfStats._48_4_ = 0xffffffff;
      ComponentToPerfStats._52_4_ = 0;
      ComponentToPerfStats._40_4_ = 0;
      if (0x80 < (uint)ComponentToPerfStats._44_4_) {
        ComponentToPerfStats._44_4_ = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&ComponentToPerfStats.field_0x10,0);
      }
      if (bVar5) {
        ComponentToPerfStats._72_4_ = 1;
        TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
                  *)&ComponentToPerfStats);
      }
                    /* WARNING: Could not recover jumptable at 0x000148192705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&ComponentToPerfStatsGuard);
      return;
    }
    uVar16 = uVar18;
    if (local_148.Index < local_148.ObjectArray.ArrayNum) {
      uVar16 = (uint)~local_148.Index >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    *(undefined8 *)
     (*(longlong *)(local_148.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 0x548) = 0;
    lVar11 = (longlong)local_148.Index;
    uVar16 = uVar18;
    if (local_148.Index < local_148.ObjectArray.ArrayNum) {
      uVar16 = (uint)~local_148.Index >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UActorComponent::MarkRenderStateDirty
              (*(UActorComponent **)(local_148.ObjectArray.AllocatorInstance.Data + lVar11 * 8));
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// Tick @ 1481a2910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001481a2ffe) */
/* WARNING: Removing unreachable block (ram,0x0001481a300c) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FParticlePerfStatsManager::Tick(void)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  TStatId TVar8;
  FParticlePerfStatsListener *pFVar9;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar10;
  UObject *pUVar11;
  undefined8 *puVar12;
  code **ppcVar13;
  ulonglong uVar14;
  longlong lVar15;
  TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar16;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar17;
  uint uVar18;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> FVar19;
  int iVar20;
  undefined1 auStackY_558 [32];
  undefined1 local_508;
  undefined1 local_507;
  undefined1 local_506;
  undefined1 local_505;
  undefined1 local_504 [4];
  FCycleCounter local_500;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  longlong *local_488;
  undefined1 auStack_480 [16];
  uint uStack_470;
  uint uStack_46c;
  longlong local_468;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_460;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *local_458;
  char local_450;
  char cStack_44f;
  longlong *local_448;
  undefined1 auStack_440 [16];
  uint uStack_430;
  uint uStack_42c;
  longlong local_428;
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_420;
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *local_418;
  char local_410;
  char cStack_40f;
  longlong *local_408;
  undefined1 auStack_400 [16];
  uint uStack_3f0;
  uint uStack_3ec;
  longlong local_3e8;
  TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_3e0;
  TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *local_3d8;
  char local_3d0;
  char cStack_3cf;
  undefined4 local_3c8;
  undefined4 local_3c4;
  FSourceLocation local_3b8;
  code *local_398;
  code *pcStack_390;
  code *local_388;
  code *pcStack_380;
  code *local_378;
  code *pcStack_370;
  code *local_368;
  code *pcStack_360;
  code *local_358;
  code *pcStack_350;
  TSharedPtr<FParticlePerfStatsListener,1> local_348;
  TSharedPtr<FParticlePerfStatsListener,1> local_338;
  FParticlePerfStatsListener *local_328;
  TReferenceControllerBase<1> *pTStack_320;
  code *local_318;
  code *pcStack_310;
  code *local_308;
  code *pcStack_300;
  undefined1 local_2f0 [32];
  longlong local_2d0;
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_2c8;
  undefined1 local_2c0 [32];
  longlong local_2a0;
  TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_298;
  undefined1 local_290 [32];
  longlong local_270;
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_268;
  code *local_258 [2];
  code *local_248 [3];
  code **local_230;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> local_228;
  int local_1a0;
  int local_19c;
  undefined1 local_198 [16];
  code *local_188;
  code *pcStack_180;
  code *local_178;
  code *pcStack_170;
  code *local_168;
  code *pcStack_160;
  code *local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  code *pcStack_130;
  code *local_128;
  code *pcStack_120;
  ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> local_118;
  int local_110;
  int local_10c;
  undefined1 local_108 [40];
  code **local_e0;
  byte local_d8;
  TSharedPtr<FParticlePerfStatsListener,1> local_c8;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code *pcStack_80;
  code *local_78;
  code *pcStack_70;
  code *local_68;
  code *pcStack_60;
  code *local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_558;
  if ((FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0) ||
     ((((int)FParticlePerfStats::WorldStatsReaders < 1 &&
       ((int)FParticlePerfStats::SystemStatsReaders < 1)) &&
      ((int)FParticlePerfStats::ComponentStatsReaders < 1)))) {
    while( true ) {
      if (Listeners.ArrayNum == 0) {
        return;
      }
      uVar18 = 0;
      if ((int)(Listeners.ArrayNum - 1U) < Listeners.ArrayNum) {
        uVar18 = ~(Listeners.ArrayNum - 1U) >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) break;
      pTVar16 = &Listeners;
      if (Listeners.AllocatorInstance.SecondaryData !=
          (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
        pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)Listeners.AllocatorInstance.SecondaryData;
      }
      lVar15 = (longlong)pTVar16 + (longlong)Listeners.ArrayNum * 0x10;
      local_338.Object = *(FParticlePerfStatsListener **)(lVar15 + -0x10);
      local_338.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar15 + -8);
      if (local_338.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      RemoveListener(&local_338);
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TVar8 = FThreadSafeStaticStatInner<FStat_STAT_ParticleStats_TickGT,1>::GetStatId
                    ((FThreadSafeStaticStatInner<FStat_STAT_ParticleStats_TickGT,1> *)
                     &StatPtr_STAT_ParticleStats_TickGT);
  local_3b8.Impl._Line = 0xeb;
  local_3b8.Impl._Column = 3;
  local_3b8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
  ;
  local_500.StatId.ComparisonIndex.Value = 0;
  local_500.StatId.Number = 0;
  local_3b8.Impl._Function = "void __cdecl FParticlePerfStatsManager::Tick(void)";
  local_500.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_500,*(TStatIdData **)&(TVar8.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_3b8);
  if ((Listeners.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Listeners.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                         ,0xed,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = Listeners.ArrayNum;
  local_228.SecondaryData = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0;
  local_1a0 = 0;
  local_19c = 8;
  pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
             *)Listeners.AllocatorInstance.SecondaryData;
  if (Listeners.AllocatorInstance.SecondaryData ==
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    pTVar16 = &Listeners;
  }
  FVar19 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
           ((longlong)Listeners.ArrayNum * 0x10 + (longlong)pTVar16);
  while( true ) {
    if (Listeners.ArrayNum != iVar7) {
      local_508 = 0;
      `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_508);
    }
    iVar20 = Listeners.ArrayNum;
    if ((ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)pTVar16 == FVar19) break;
    if (*(longlong *)pTVar16 == 0) {
LAB_1481a2ae8:
      FVar17 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)&local_228;
      if (local_228.SecondaryData != (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0)
      {
        FVar17 = local_228.SecondaryData;
      }
      if ((ulonglong)FVar17 <= pTVar16) {
        FVar17 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)&local_228;
        if (local_228.SecondaryData !=
            (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
          FVar17 = local_228.SecondaryData;
        }
        if ((pTVar16 < (ulonglong)((longlong)local_19c * 0x10 + (longlong)FVar17)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_1a0 == local_19c) {
        local_1a0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>_>
                              (0x810,&local_228,&local_19c);
      }
      lVar15 = (longlong)local_1a0;
      FVar17 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)&local_228;
      if (local_228.SecondaryData != (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0)
      {
        FVar17 = local_228.SecondaryData;
      }
      local_1a0 = local_1a0 + 1;
      puVar12 = (undefined8 *)((longlong)FVar17 + lVar15 * 0x10);
      *puVar12 = *(undefined8 *)pTVar16;
      lVar15 = *(longlong *)((longlong)pTVar16 + 8);
      puVar12[1] = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
    }
    else {
      if ((*(longlong *)((longlong)pTVar16 + 8) != 0) &&
         (*(int *)(*(longlong *)((longlong)pTVar16 + 8) + 8) == 1)) {
        pFVar9 = TSharedPtr<FParticlePerfStatsListener,1>::operator->
                           ((TSharedPtr<FParticlePerfStatsListener,1> *)pTVar16);
        cVar6 = (**(code **)(*(longlong *)pFVar9 + 0x70))(pFVar9);
        if (cVar6 == '\0') goto LAB_1481a2ae8;
      }
      pFVar9 = TSharedPtr<FParticlePerfStatsListener,1>::operator->
                         ((TSharedPtr<FParticlePerfStatsListener,1> *)pTVar16);
      cVar6 = (**(code **)(*(longlong *)pFVar9 + 0x18))(pFVar9);
      if (cVar6 == '\0') goto LAB_1481a2ae8;
    }
    pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)((longlong)pTVar16 + 0x10);
  }
  pTVar16 = &Listeners;
  local_118 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0;
  if (Listeners.AllocatorInstance.SecondaryData !=
      (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *)Listeners.AllocatorInstance.SecondaryData;
  }
  local_110 = Listeners.ArrayNum;
  if (Listeners.ArrayNum == 0) {
    local_10c = 8;
    local_118 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>_>
              (0x10,8,Listeners.ArrayNum,0,
               (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> *)local_198,
               Listeners.ArrayNum,&local_10c);
    FVar19 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)local_198;
    if (local_118 != (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
      FVar19 = local_118;
    }
    ConstructItems<TSharedPtr<FParticlePerfStatsListener,1>,TSharedPtr<FParticlePerfStatsListener,1>,int>
              ((void *)FVar19,(TSharedPtr<FParticlePerfStatsListener,1> *)pTVar16,iVar20);
    FVar19 = local_118;
    iVar7 = local_110;
    iVar20 = local_10c;
    if (local_118 != (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0)
    goto LAB_1481a2dbf;
  }
  local_c8.Object = (FParticlePerfStatsListener *)local_198._0_8_;
  local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_198._8_8_
  ;
  local_b8 = local_188;
  pcStack_b0 = pcStack_180;
  local_a8 = local_178;
  pcStack_a0 = pcStack_170;
  local_98 = local_168;
  pcStack_90 = pcStack_160;
  local_88 = local_158;
  pcStack_80 = pcStack_150;
  local_78 = local_148;
  pcStack_70 = pcStack_140;
  local_68 = local_138;
  pcStack_60 = pcStack_130;
  local_58 = local_128;
  pcStack_50 = pcStack_120;
  FVar19 = local_118;
  iVar7 = local_110;
  iVar20 = local_10c;
LAB_1481a2dbf:
  local_118 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0;
  local_110 = 0;
  local_10c = 8;
  local_258[0] = (code *)0x0;
  local_398 = local_98;
  pcStack_390 = pcStack_90;
  local_388 = local_88;
  pcStack_380 = pcStack_80;
  local_378 = local_78;
  pcStack_370 = pcStack_70;
  local_368 = local_68;
  pcStack_360 = pcStack_60;
  local_358 = local_58;
  pcStack_350 = pcStack_50;
  local_328 = local_c8.Object;
  pTStack_320 = local_c8.SharedReferenceCount.ReferenceController;
  local_318 = local_b8;
  pcStack_310 = pcStack_b0;
  local_308 = local_a8;
  pcStack_300 = pcStack_a0;
  local_230 = FMemory::Malloc(0x98,8);
  *local_230 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FParticlePerfStatsManager::Tick'::`5'::<lambda_1>,1,1>
                        ::_vftable_;
  local_230[0x11] = (code *)0x0;
  if (FVar19 == (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    local_230[1] = (code *)local_328;
    local_230[2] = (code *)pTStack_320;
    local_230[3] = local_318;
    local_230[4] = pcStack_310;
    local_230[5] = local_308;
    local_230[6] = pcStack_300;
    local_230[7] = local_398;
    local_230[8] = pcStack_390;
    local_230[9] = local_388;
    local_230[10] = pcStack_380;
    local_230[0xb] = local_378;
    local_230[0xc] = pcStack_370;
    local_230[0xd] = local_368;
    local_230[0xe] = pcStack_360;
    local_230[0xf] = local_358;
    local_230[0x10] = pcStack_350;
  }
  *(ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_> *)(local_230 + 0x11) = FVar19;
  *(int *)((longlong)local_230 + 0x94) = iVar20;
  *(int *)(local_230 + 0x12) = iVar7;
  if (local_230 + 1 != (code **)0x0) {
    local_258[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FParticlePerfStatsManager::Tick'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
  }
  local_48 = 0;
  local_40 = 0;
  local_3c = 8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FParticlePerfStatsManager::Tick_::__l5::TSTR_FParticlePerfStatsListenersRTTick250>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_258);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_108._0_8_ = local_258[0];
    local_e0 = local_230;
    local_230 = (code **)0x0;
    local_108._16_8_ = local_248[0];
    local_108._24_8_ = local_248[1];
    local_108._32_8_ = local_248[2];
    local_258[0] = (code *)0x0;
    local_d8 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`FParticlePerfStatsManager::Tick'::__l5::TSTR_FParticlePerfStatsListenersRTTick250>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_108,pFVar10);
    uVar14 = (ulonglong)local_d8;
    if ((2 < uVar14) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_108._0_8_ != (code *)0x0) {
        ppcVar13 = (code **)(local_108 + 0x10);
        if (local_e0 != (code **)0x0) {
          ppcVar13 = local_e0;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(local_108);
    }
  }
  if (local_258[0] != (code *)0x0) {
    ppcVar13 = local_258 + 2;
    if (local_230 != (code **)0x0) {
      ppcVar13 = local_230;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  DestructItems<TSharedPtr<FParticlePerfStatsListener,1>,int>(&local_c8,0);
  FVar19 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)local_198;
  if (local_118 != (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FVar19 = local_118;
  }
  DestructItems<TSharedPtr<FParticlePerfStatsListener,1>,int>
            ((TSharedPtr<FParticlePerfStatsListener,1> *)FVar19,local_110);
  if (local_118 != (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FMemory::Free((void *)local_118);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&WorldToPerfStatsGuard);
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_290,
             (TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)&WorldToPerfStats);
  local_418 = (TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
               *)&WorldToPerfStats;
  local_410 = '\0';
  cStack_40f = '\0';
  stack0xfffffffffffffbc8 = local_290._16_16_;
  local_448 = (longlong *)local_290._0_8_;
  auStack_440._0_8_ = local_290._8_8_;
  local_428 = local_270;
  pTStack_420 = pTStack_268;
  uVar14 = local_290._24_8_ >> 0x20;
  uVar18 = local_290._28_4_;
  if ((int)uVar18 < *(int *)(local_290._16_8_ + 0x18)) {
    do {
      plVar4 = local_448;
      lVar15 = (longlong)(int)uVar14 * 0x18;
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_448 + lVar15));
      lVar1 = *plVar4;
      if (pUVar11 == (UObject *)0x0) {
        uVar2 = *(undefined8 *)(lVar1 + 8 + lVar15);
        *(undefined8 *)(lVar1 + 8 + lVar15) = 0;
        if (FreeWorldStatsPool.ArrayNum == FreeWorldStatsPool.ArrayMax) {
          FreeWorldStatsPool.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&FreeWorldStatsPool.AllocatorInstance,&FreeWorldStatsPool.ArrayMax);
        }
        lVar15 = (longlong)FreeWorldStatsPool.ArrayNum;
        FreeWorldStatsPool.ArrayNum = FreeWorldStatsPool.ArrayNum + 1;
        *(undefined8 *)(FreeWorldStatsPool.AllocatorInstance.Data + lVar15 * 8) = uVar2;
        iVar7 = Listeners.ArrayNum;
        pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)Listeners.AllocatorInstance.SecondaryData;
        if (Listeners.AllocatorInstance.SecondaryData ==
            (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
          pTVar16 = &Listeners;
        }
        FVar19 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
                 ((longlong)Listeners.ArrayNum * 0x10 + (longlong)pTVar16);
        while( true ) {
          if (Listeners.ArrayNum != iVar7) {
            local_507 = 0;
            `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_507);
          }
          if ((ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)pTVar16 == FVar19) break;
          if ((*(longlong *)pTVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(**(longlong **)pTVar16 + 0x30))
                    (*(longlong **)pTVar16,*plVar4 + (longlong)(int)uVar18 * 0x18);
          pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)((longlong)pTVar16 + 0x10);
        }
        TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_420,uVar18);
        local_410 = '\x01';
      }
      else {
        puVar12 = *(undefined8 **)(lVar1 + 8 + (longlong)(int)uVar18 * 0x18);
        bVar5 = IsInGameThread();
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                               ,0x26e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *puVar12 = 0;
        puVar12[1] = 0;
        LOCK();
        puVar12[2] = 0;
        UNLOCK();
        puVar12[3] = 0;
        LOCK();
        puVar12[4] = 0;
        UNLOCK();
        LOCK();
        puVar12[5] = 0;
        UNLOCK();
        puVar12[6] = 0;
      }
      uStack_430 = uStack_430 & ~auStack_440._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_440);
      uVar14 = (ulonglong)uStack_42c;
      uVar18 = uStack_42c;
    } while ((int)uStack_42c < *(int *)(auStack_440._8_8_ + 0x18));
    if ((local_410 != '\0') && (cStack_40f != '\0')) {
      uVar18 = *(int *)&(local_418->Elements).field_0x8 - *(int *)&(local_418->Elements).field_0x34;
      if (uVar18 < 4) {
        iVar7 = 1;
      }
      else {
        uVar14 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_3c4 = (undefined4)lVar15;
        iVar7 = 1 << ((byte)lVar15 & 0x1f);
      }
      if (((0 < (int)uVar18) && (local_418->HashSize < iVar7)) || (iVar7 < local_418->HashSize)) {
        local_418->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_418);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&WorldToPerfStatsGuard);
  EnterCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_2f0,
             (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)&SystemToPerfStats);
  local_458 = (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
               *)&SystemToPerfStats;
  local_450 = '\0';
  cStack_44f = '\0';
  stack0xfffffffffffffb88 = local_2f0._16_16_;
  local_488 = (longlong *)local_2f0._0_8_;
  auStack_480._0_8_ = local_2f0._8_8_;
  local_468 = local_2d0;
  pTStack_460 = pTStack_2c8;
  uVar14 = local_2f0._24_8_ >> 0x20;
  uVar18 = local_2f0._28_4_;
  if ((int)uVar18 < *(int *)(local_2f0._16_8_ + 0x18)) {
    do {
      plVar4 = local_488;
      lVar15 = (longlong)(int)uVar14 * 0x18;
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_488 + lVar15));
      if (pUVar11 == (UObject *)0x0) {
        lVar1 = *(longlong *)(*plVar4 + 8 + (longlong)(int)uVar18 * 0x18);
        local_4e8 = 0;
        local_4e0 = 0;
        local_4d8 = 0;
        *(undefined8 *)(lVar1 + 0x68) = 0;
        *(undefined8 *)(lVar1 + 0x70) = 0;
        *(undefined8 *)(lVar1 + 0x78) = 0;
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(lVar1 + 0x60) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
        local_4f0 = 0;
        local_4d0 = 0;
        local_4c8 = 0;
        uVar2 = *(undefined8 *)(*plVar4 + 8 + lVar15);
        *(undefined8 *)(*plVar4 + 8 + lVar15) = 0;
        local_4c0 = 0;
        local_4b8 = 0;
        local_4b0 = 0;
        local_4a8 = 0;
        local_4a0 = 0;
        local_498 = 0;
        if (FreeSystemStatsPool.ArrayNum == FreeSystemStatsPool.ArrayMax) {
          FreeSystemStatsPool.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&FreeSystemStatsPool.AllocatorInstance,&FreeSystemStatsPool.ArrayMax
                         );
        }
        lVar15 = (longlong)FreeSystemStatsPool.ArrayNum;
        FreeSystemStatsPool.ArrayNum = FreeSystemStatsPool.ArrayNum + 1;
        *(undefined8 *)(FreeSystemStatsPool.AllocatorInstance.Data + lVar15 * 8) = uVar2;
        iVar7 = Listeners.ArrayNum;
        pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)Listeners.AllocatorInstance.SecondaryData;
        if (Listeners.AllocatorInstance.SecondaryData ==
            (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
          pTVar16 = &Listeners;
        }
        FVar19 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
                 ((longlong)Listeners.ArrayNum * 0x10 + (longlong)pTVar16);
        while( true ) {
          if (Listeners.ArrayNum != iVar7) {
            local_506 = 0;
            `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_506);
          }
          if ((ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)pTVar16 == FVar19) break;
          if ((*(longlong *)pTVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(**(longlong **)pTVar16 + 0x40))
                    (*(longlong **)pTVar16,*plVar4 + (longlong)(int)uVar18 * 0x18);
          pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)((longlong)pTVar16 + 0x10);
        }
        TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_460,uVar18);
        local_450 = '\x01';
      }
      else {
        puVar12 = *(undefined8 **)(*plVar4 + 8 + (longlong)(int)uVar18 * 0x18);
        bVar5 = IsInGameThread();
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                               ,0x26e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *puVar12 = 0;
        puVar12[1] = 0;
        LOCK();
        puVar12[2] = 0;
        UNLOCK();
        puVar12[3] = 0;
        LOCK();
        puVar12[4] = 0;
        UNLOCK();
        LOCK();
        puVar12[5] = 0;
        UNLOCK();
        puVar12[6] = 0;
      }
      uStack_470 = uStack_470 & ~auStack_480._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_480);
      uVar14 = (ulonglong)uStack_46c;
      uVar18 = uStack_46c;
    } while ((int)uStack_46c < *(int *)(auStack_480._8_8_ + 0x18));
    if ((local_450 != '\0') && (cStack_44f != '\0')) {
      uVar18 = *(int *)&(local_458->Elements).field_0x8 - *(int *)&(local_458->Elements).field_0x34;
      if (uVar18 < 4) {
        iVar7 = 1;
      }
      else {
        uVar14 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_3c8 = (undefined4)lVar15;
        iVar7 = 1 << ((byte)lVar15 & 0x1f);
      }
      if (((0 < (int)uVar18) && (local_458->HashSize < iVar7)) || (iVar7 < local_458->HashSize)) {
        local_458->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_458);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  EnterCriticalSection((LPCRITICAL_SECTION)&ComponentToPerfStatsGuard);
  TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_2c0,
             (TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)&ComponentToPerfStats);
  local_3d8 = (TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
               *)&ComponentToPerfStats;
  local_3d0 = '\0';
  cStack_3cf = '\0';
  stack0xfffffffffffffc08 = local_2c0._16_16_;
  local_408 = (longlong *)local_2c0._0_8_;
  auStack_400._0_8_ = local_2c0._8_8_;
  local_3e8 = local_2a0;
  pTStack_3e0 = pTStack_298;
  uVar14 = local_2c0._24_8_ >> 0x20;
  uVar18 = local_2c0._28_4_;
  if ((int)uVar18 < *(int *)(local_2c0._16_8_ + 0x18)) {
    do {
      plVar4 = local_408;
      lVar15 = (longlong)(int)uVar14 * 0x18;
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_408 + lVar15));
      lVar1 = *plVar4;
      if (pUVar11 == (UObject *)0x0) {
        uVar2 = *(undefined8 *)(lVar15 + 8 + lVar1);
        *(undefined8 *)(lVar15 + 8 + lVar1) = 0;
        if (FreeComponentStatsPool.ArrayNum == FreeComponentStatsPool.ArrayMax) {
          FreeComponentStatsPool.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&FreeComponentStatsPool.AllocatorInstance,
                          &FreeComponentStatsPool.ArrayMax);
        }
        lVar15 = (longlong)FreeComponentStatsPool.ArrayNum;
        FreeComponentStatsPool.ArrayNum = FreeComponentStatsPool.ArrayNum + 1;
        *(undefined8 *)(FreeComponentStatsPool.AllocatorInstance.Data + lVar15 * 8) = uVar2;
        iVar7 = Listeners.ArrayNum;
        pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                   *)Listeners.AllocatorInstance.SecondaryData;
        if (Listeners.AllocatorInstance.SecondaryData ==
            (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
          pTVar16 = &Listeners;
        }
        FVar19 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
                 ((longlong)Listeners.ArrayNum * 0x10 + (longlong)pTVar16);
        while( true ) {
          if (Listeners.ArrayNum != iVar7) {
            local_505 = 0;
            `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_505);
          }
          if ((ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)pTVar16 == FVar19) break;
          if ((*(longlong *)pTVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)(**(longlong **)pTVar16 + 0x50))
                    (*(longlong **)pTVar16,*plVar4 + (longlong)(int)uVar18 * 0x18);
          pTVar16 = (TArray<TSharedPtr<FParticlePerfStatsListener,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                     *)((longlong)pTVar16 + 0x10);
        }
        TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_3e0,uVar18);
        local_3d0 = '\x01';
      }
      else {
        puVar12 = *(undefined8 **)(lVar1 + 8 + (longlong)(int)uVar18 * 0x18);
        bVar5 = IsInGameThread();
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                               ,0x26e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *puVar12 = 0;
        puVar12[1] = 0;
        LOCK();
        puVar12[2] = 0;
        UNLOCK();
        puVar12[3] = 0;
        LOCK();
        puVar12[4] = 0;
        UNLOCK();
        LOCK();
        puVar12[5] = 0;
        UNLOCK();
        puVar12[6] = 0;
      }
      uStack_3f0 = uStack_3f0 & ~auStack_400._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_400);
      uVar14 = (ulonglong)uStack_3ec;
      uVar18 = uStack_3ec;
    } while ((int)uStack_3ec < *(int *)(auStack_400._8_8_ + 0x18));
    if ((local_3d0 != '\0') && (cStack_3cf != '\0')) {
      uVar18 = *(int *)&(local_3d8->Elements).field_0x8 - *(int *)&(local_3d8->Elements).field_0x34;
      if (uVar18 < 4) {
        iVar7 = 1;
      }
      else {
        uVar14 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar15 & 0x1f);
      }
      if (((0 < (int)uVar18) && (local_3d8->HashSize < iVar7)) || (iVar7 < local_3d8->HashSize)) {
        local_3d8->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_3d8);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&ComponentToPerfStatsGuard);
  iVar7 = local_1a0;
  FVar19 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)&local_228;
  if (local_228.SecondaryData != (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FVar19 = local_228.SecondaryData;
  }
  FVar17 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)
           ((longlong)local_1a0 * 0x10 + (longlong)FVar19);
  while( true ) {
    if (local_1a0 != iVar7) {
      `TCheckedPointerIterator<TSharedPtr<FParticlePerfStatsListener,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_504);
    }
    if (FVar19 == FVar17) break;
    local_348.Object = *(FParticlePerfStatsListener **)FVar19;
    local_348.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)FVar19 + 8);
    if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    RemoveListener(&local_348);
    FVar19 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)((longlong)FVar19 + 0x10);
  }
  FVar19 = (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)&local_228;
  if (local_228.SecondaryData != (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FVar19 = local_228.SecondaryData;
  }
  DestructItems<TSharedPtr<FParticlePerfStatsListener,1>,int>
            ((TSharedPtr<FParticlePerfStatsListener,1> *)FVar19,local_1a0);
  if (local_228.SecondaryData != (ForElementType<TSharedPtr<FParticlePerfStatsListener,1>_>)0x0) {
    FMemory::Free((void *)local_228.SecondaryData);
  }
  if ((local_500.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_500.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_500.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_500.StatId,CycleScopeEnd);
  }
  return;
}

// TogglePerfStatsRender @ 1481a56f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FParticlePerfStatsManager::TogglePerfStatsRender(UWorld *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  FWeakObjectPtr FVar9;
  TKeyInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&> local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TSharedPtr<FParticlePerfStatsListener,1> local_a8;
  UWorld *local_98;
  FWeakObjectPtr local_90;
  UWorld *local_88;
  FWeakObjectPtr local_80;
  UWorld *local_78;
  FWeakObjectPtr *local_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  TSharedPtr<FParticlePerfStatsListener,1> local_58;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_98 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_98);
  local_90 = local_res10;
  iVar5 = TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>,0>,FDefaultSetAllocator>
                      *)&DebugRenderListenerUsers,
                     local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_90);
  if (iVar5 != -1) {
    lVar7 = (longlong)iVar5 * 0x20 + DebugRenderListenerUsers._0_8_;
    pTVar6 = (TReferenceControllerBase<1> *)(lVar7 + 8);
    if (lVar7 == 0) {
      pTVar6 = pTVar8;
    }
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      local_58.Object = (FParticlePerfStatsListener *)pTVar6->_padding_;
      local_58.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)&pTVar6->SharedReferenceCount;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      RemoveListener(&local_58);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_88 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_88);
      local_80 = local_res18;
      if (DebugRenderListenerUsers._8_4_ == DebugRenderListenerUsers._52_4_) {
        return;
      }
      TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>,0>,FDefaultSetAllocator>
                  *)&DebugRenderListenerUsers,
                 local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                 (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_80);
      return;
    }
  }
  pTVar6 = ::operator_new(0x148);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    FVar9.ObjectIndex = 0x10;
    FVar9.ObjectSerialNumber = 0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFParticlePerfStatsListener_DebugRender___00_SharedPointerInternals__6B_
    ;
    FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
              ((FParticlePerfStatsListener_GatherAll *)(pTVar6 + 1),false,true,false);
    FVar9 = (FWeakObjectPtr)(pTVar6 + 1);
    pTVar6[1]._padding_ = (longlong)&___7FParticlePerfStatsListener_DebugRender__6B_;
    pTVar8 = pTVar6;
    if (FVar9 == (FWeakObjectPtr)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1481a5959;
    }
  }
  if (((*(longlong *)((longlong)FVar9 + 8) == 0) ||
      (lVar7 = ((TReferenceControllerBase<1> *)((longlong)FVar9 + 0x10))->_padding_, lVar7 == 0)) ||
     (*(int *)(lVar7 + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FWeakObjectPtr *)((longlong)FVar9 + 8) = FVar9;
    if (pTVar8 != (TReferenceControllerBase<1> *)
                  ((TReferenceControllerBase<1> *)((longlong)FVar9 + 0x10))->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar2 = (longlong *)((TReferenceControllerBase<1> *)((longlong)FVar9 + 0x10))->_padding_;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
      ((TReferenceControllerBase<1> *)((longlong)FVar9 + 0x10))->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_1481a5959:
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10 = FVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_78 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_78);
  local_70 = &local_res20;
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TSharedPtr<FParticlePerfStatsListener_DebugRender,1>,0>,FDefaultSetAllocator>
              *)&DebugRenderListenerUsers,&local_res8,(bool *)&local_70);
  lVar7 = (longlong)(int)local_res8.Key * 0x20 + DebugRenderListenerUsers._0_8_;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_68 = *(undefined8 *)(lVar7 + 8);
    pTStack_60 = *(TReferenceControllerBase<1> **)(lVar7 + 0x10);
    *(FWeakObjectPtr *)(lVar7 + 8) = FVar9;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  }
  else {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    local_68 = *(undefined8 *)(lVar7 + 8);
    pTStack_60 = *(TReferenceControllerBase<1> **)(lVar7 + 0x10);
    *(FWeakObjectPtr *)(lVar7 + 8) = local_res10;
    *(TReferenceControllerBase<1> **)(lVar7 + 0x10) = pTVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Object = (FParticlePerfStatsListener *)FVar9;
  local_a8.SharedReferenceCount.ReferenceController = pTVar8;
  AddListener(&local_a8,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}


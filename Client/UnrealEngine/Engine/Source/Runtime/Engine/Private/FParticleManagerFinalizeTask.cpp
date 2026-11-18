// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 1481e2150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FParticleManagerFinalizeTask::DoTask
          (FParticleManagerFinalizeTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  ForElementType<int> FVar2;
  int iVar3;
  FName FVar4;
  FParticleSystemWorldManager *pFVar5;
  UParticleSystemComponent *this_00;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_PSCMan_FinalizeBatch> FVar13;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar14;
  FNameEntryId FVar15;
  ForElementType<int> FVar16;
  uint local_res20;
  uint uStackX_24;
  FColor_u_0 local_88 [2];
  FName local_80;
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if (!`public:_void___cdecl_FParticleManagerFinalizeTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
       ::__l2::__CsvProfilerStat95) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    `public:_void___cdecl_FParticleManagerFinalizeTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat95 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FVar13 = StatPtr_STAT_PSCMan_FinalizeBatch;
  if (StatPtr_STAT_PSCMan_FinalizeBatch ==
      (FThreadSafeStaticStat<FStat_STAT_PSCMan_FinalizeBatch>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_PSCMan_FinalizeBatch");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_PSCMan_FinalizeBatch>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PSCMan_FinalizeBatch,*pFVar12,
                        L"PSC Manager Finalize Batch [GT]","STATGROUP_PSCWorldMan",
                        "STATCAT_Advanced",L"Particle World Manager",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar4 = *(FName *)FVar13;
  bVar7 = false;
  bVar8 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar9 = false;
  bVar10 = false;
  FVar15 = FVar4.ComparisonIndex.Value;
  uVar14 = FVar4.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar15.Value;
        local_80.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                   ,0x60);
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar15.Value;
      uStackX_24 = uVar14;
      local_78 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar9 = true;
      goto LAB_1481e2303;
    }
  }
  bVar8 = bVar10;
  bVar7 = bVar9;
  bVar9 = false;
  local_78 = local_60;
LAB_1481e2303:
  if (param_1 != GameThread) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == ENamedThreads::GameThread",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemManager.cpp"
                        ,0x62,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar3 = (this->PSCsToFinalize).ArrayNum;
  FVar16 = (this->PSCsToFinalize).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<int>)0x0) {
    FVar16 = (ForElementType<int>)&this->PSCsToFinalize;
  }
  FVar2 = (ForElementType<int>)((longlong)FVar16 + (longlong)iVar3 * 4);
  while( true ) {
    if ((this->PSCsToFinalize).ArrayNum != iVar3) {
      local_res20 = local_res20 & 0xffffff00;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    FVar4 = local_78;
    if (FVar16 == FVar2) break;
    uVar14 = *(uint *)FVar16;
    pFVar5 = this->Owner;
    uVar11 = 0;
    if ((int)uVar14 < (pFVar5->ManagedPSCs).ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    this_00 = *(UParticleSystemComponent **)
               ((pFVar5->ManagedPSCs).AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
    uVar11 = 0;
    if ((int)uVar14 < (this->Owner->PSCTickData).ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    UParticleSystemComponent::FinalizeTickComponent(this_00);
    FVar16 = (ForElementType<int>)((longlong)FVar16 + 4);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar4 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_50.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_50);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Effects");
  return;
}


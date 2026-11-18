// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// operator() @ 14768bde0

void __thiscall `FAudioThread::SuspendAudioThread'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskEvent this_00;
  code *pcVar3;
  TUniquePtr<UE::Tasks::FTaskEvent,TDefaultDelete<UE::Tasks::FTaskEvent>_> TVar4;
  bool bVar5;
  FTaskBase *pFVar6;
  
  TVar4.Ptr = FAudioThread::ResumeEvent.Ptr;
  GIsAudioThreadSuspended = (atomic<bool>)0x1;
  pFVar6 = UE::Tasks::Private::GetCurrentTask();
  if (pFVar6 == (FTaskBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0x1ff,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *TVar4.Ptr;
  LOCK();
  paVar1 = &pFVar6->NumLocks;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0xfffffffe) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x1c2,L"Max number of nested tasks reached: %d");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uint)aVar2 < 0x80000001) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevNumLocks > ExecutionFlag",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x1c3,
                       L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar5 = UE::Tasks::Private::FTaskBase::AddSubsequent((FTaskBase *)this_00,pFVar6);
  if (bVar5) {
    LOCK();
    *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
         (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::
    FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
              (&pFVar6->Prerequisites,(FTaskBase *)this_00);
  }
  else {
    LOCK();
    pFVar6->NumLocks = (atomic<unsigned_int>)((int)pFVar6->NumLocks + -1);
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x00014768bef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(undefined8 **)this + 0x10))();
  return;
}

// operator() @ 14768bf00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FAudioThread::GetCommandWrapper'::__l5::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  FName *pFVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FStatMessage local_38 [3];
  
  if (!__CsvProfilerStat463) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Audio");
    __CsvProfilerStat463 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Audio","CSV_Audio");
  pFVar2 = *(FName **)((longlong)this + 0x30);
  bVar6 = false;
  bVar8 = false;
  FVar12 = *pFVar2;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar2[2]);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x1d1);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar7 = true;
      goto LAB_14768c002;
    }
  }
  bVar7 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_14768c002:
  pTVar3 = *(TStatIdData **)((longlong)this + 0x30);
  EnterCriticalSection((LPCRITICAL_SECTION)&FAudioThread::CurrentAudioThreadStatIdCS);
  FAudioThread::CurrentAudioThreadStatId.StatIdPtr = pTVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)&FAudioThread::CurrentAudioThreadStatIdCS);
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar4 = *(code **)this;
  plVar11 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x28);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  QueryPerformanceCounter(&local_res8);
  dVar5 = ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
           FGenericPlatformTime::SecondsPerCycle - dVar5) * __real_408f400000000000;
  if (FAudioThread::LongestAudioThreadTimeMsec < dVar5) {
    pTVar3 = *(TStatIdData **)((longlong)this + 0x30);
    EnterCriticalSection((LPCRITICAL_SECTION)&FAudioThread::CurrentAudioThreadStatIdCS);
    FAudioThread::LongestAudioThreadStatId.StatIdPtr = pTVar3;
    FAudioThread::LongestAudioThreadTimeMsec = dVar5;
    LeaveCriticalSection((LPCRITICAL_SECTION)&FAudioThread::CurrentAudioThreadStatIdCS);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38[0].NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_38[0].StatData.Pad[4] = '\0';
      local_38[0].StatData.Pad[5] = '\0';
      local_38[0].StatData.Pad[6] = '\0';
      local_38[0].StatData.Pad[7] = '\0';
      local_38[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Audio");
  return;
}

// operator() @ 14768c830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FAudioThread::RunCommandOnGameThread'::__l20::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_20_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioThread_RunCommandOnGameThread>
  FVar11;
  undefined8 uVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  longlong *plVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_58;
  FStatMessage local_48;
  
  if (!__CsvProfilerStat589) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Audio");
    __CsvProfilerStat589 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Audio","CSV_Audio");
  FVar18.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_AudioThread_RunCommandOnGameThread ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_20_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioThread_RunCommandOnGameThread>
           )0x0) {
        pFVar10 = ::FName::FName((FName *)&local_res8.s,"STAT_AudioThread_RunCommandOnGameThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioThread_RunCommandOnGameThread,
                   *pFVar10,L"STAT_AudioThread_RunCommandOnGameThread","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_AudioThread_RunCommandOnGameThread;
  if (StatPtr_STAT_AudioThread_RunCommandOnGameThread ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_20_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioThread_RunCommandOnGameThread>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res10,"STAT_AudioThread_RunCommandOnGameThread");
    FVar11 = (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_20_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_AudioThread_RunCommandOnGameThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AudioThread_RunCommandOnGameThread,*pFVar10,
                          L"STAT_AudioThread_RunCommandOnGameThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar5 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar9 == 0)) {
LAB_14768c9c0:
    bVar6 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar16.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x24e);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14768c9c0;
    local_res8.s.LowPart = FVar16.Value;
    local_res8.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar6 = true;
    local_58 = FVar17;
  }
  pFVar10 = *(FName **)((longlong)this + 0x30);
  bVar3 = false;
  bVar7 = false;
  FVar17 = *pFVar10;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar10[2]);
      bVar3 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar16.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar10[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x24f);
        bVar3 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar16.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = true;
      FVar18.Value = FVar16.Value;
      goto LAB_14768ca73;
    }
  }
  bVar4 = false;
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
LAB_14768ca73:
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar2 = *(code **)this;
  plVar15 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar15 = *(longlong **)((longlong)this + 0x28);
  }
  uVar12 = (**(code **)(*plVar15 + 8))();
  (*pcVar2)(uVar12);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_48.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_48);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (local_58 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_48);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Audio");
  return;
}

// operator() @ 14768d9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FAudioThread::GetCommandWrapper'::__l7::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar9;
  FName FVar10;
  FNameEntryId FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FStatMessage local_28;
  
  if (!__CsvProfilerStat486) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Audio");
    __CsvProfilerStat486 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Audio","CSV_Audio");
  pFVar2 = *(FName **)((longlong)this + 0x30);
  FVar11.Value = 0;
  bVar4 = false;
  bVar6 = false;
  FVar10 = *pFVar2;
  FVar12 = FVar10.ComparisonIndex.Value;
  uVar7 = FVar10.Number;
  if ((FVar12.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar2[2]);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x1e8);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar5 = true;
      FVar11.Value = FVar12.Value;
      goto LAB_14768dabe;
    }
  }
  bVar5 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14768dabe:
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar3 = *(code **)this;
  plVar9 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar9 = *(longlong **)((longlong)this + 0x28);
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  (*pcVar3)(uVar8);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Audio");
  return;
}

// operator() @ 14768dc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FAudioThread::RunCommandOnGameThread'::__l22::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_22_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_AudioThread_RunCommandOnGameThread>
  FVar11;
  undefined8 uVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  longlong *plVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_58;
  FStatMessage local_48;
  
  if (!__CsvProfilerStat603) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Audio");
    __CsvProfilerStat603 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Audio","CSV_Audio");
  FVar18.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_AudioThread_RunCommandOnGameThread ==
          (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_22_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_AudioThread_RunCommandOnGameThread>
           )0x0) {
        pFVar10 = ::FName::FName((FName *)&local_res8.s,"STAT_AudioThread_RunCommandOnGameThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioThread_RunCommandOnGameThread,
                   *pFVar10,L"STAT_AudioThread_RunCommandOnGameThread","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_AudioThread_RunCommandOnGameThread;
  if (StatPtr_STAT_AudioThread_RunCommandOnGameThread ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_22_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_AudioThread_RunCommandOnGameThread>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res10,"STAT_AudioThread_RunCommandOnGameThread");
    FVar11 = (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_22_::<lambda_2>::operator()(void)const_::_2_::FStat_STAT_AudioThread_RunCommandOnGameThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AudioThread_RunCommandOnGameThread,*pFVar10,
                          L"STAT_AudioThread_RunCommandOnGameThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar5 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar9 == 0)) {
LAB_14768ddf0:
    bVar6 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar16.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x25c);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14768ddf0;
    local_res8.s.LowPart = FVar16.Value;
    local_res8.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar6 = true;
    local_58 = FVar17;
  }
  pFVar10 = *(FName **)((longlong)this + 0x30);
  bVar3 = false;
  bVar7 = false;
  FVar17 = *pFVar10;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8.s,(char *)pFVar10[2]);
      bVar3 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar16.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)pFVar10[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x25d);
        bVar3 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar16.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = true;
      FVar18.Value = FVar16.Value;
      goto LAB_14768dea3;
    }
  }
  bVar4 = false;
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
LAB_14768dea3:
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar2 = *(code **)this;
  plVar15 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar15 = *(longlong **)((longlong)this + 0x28);
  }
  uVar12 = (**(code **)(*plVar15 + 8))();
  (*pcVar2)(uVar12);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_48.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_48);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (local_58 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_48);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Audio");
  return;
}

// GetCommandWrapper @ 1476affb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001476b0091) */
/* WARNING: Removing unreachable block (ram,0x0001476b0148) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001476b0095 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TUniqueFunction<void___cdecl(void)> * __cdecl
FAudioThread::GetCommandWrapper
          (TUniqueFunction<void___cdecl(void)> *__return_storage_ptr__,
          TUniqueFunction<void___cdecl(void)> *param_1,TStatId param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  TStatIdData *local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = *(longlong *)param_1;
  bVar3 = GCVarEnableAudioCommandLogging == 1;
  local_40 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_58 = *(longlong *)&param_1->field_0x10;
  uStack_50 = *(undefined8 *)&param_1->field_0x18;
  local_48 = *(undefined8 *)&param_1->field_0x20;
  local_38 = param_2.StatIdPtr;
  if (bVar3) {
    if (local_68 != 0) {
      *(undefined8 *)param_1 = 0;
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    puVar1 = FMemory::Malloc(0x50,0x10);
    *(undefined8 **)&__return_storage_ptr__->field_0x28 = puVar1;
    *puVar1 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::`5'::<lambda_1>,1,1>::
               _vftable_;
    plVar2 = puVar1 + 2;
    *plVar2 = local_68;
    puVar1[7] = local_40;
    local_40 = 0;
    *(undefined4 *)(puVar1 + 4) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_58._4_4_;
    *(undefined4 *)(puVar1 + 5) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_50._4_4_;
    puVar1[6] = local_48;
    if (*plVar2 != 0) {
      local_68 = 0;
    }
    puVar1[8] = local_38;
    if (plVar2 != (longlong *)0x0) {
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FAudioThread::GetCommandWrapper'::__l5::<lambda_1>,void>::Call;
    }
    if (local_68 != 0) {
      (**(code **)(local_58 + 0x10))();
    }
    if (*(longlong *)param_1 != 0) {
      plVar2 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar2 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  else {
    if (local_68 != 0) {
      *(undefined8 *)param_1 = 0;
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    puVar1 = FMemory::Malloc(0x50,0x10);
    *(undefined8 **)&__return_storage_ptr__->field_0x28 = puVar1;
    *puVar1 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FAudioThread::GetCommandWrapper'::`7'::<lambda_2>,1,1>::
               _vftable_;
    plVar2 = puVar1 + 2;
    *plVar2 = local_68;
    puVar1[7] = local_40;
    local_40 = 0;
    *(undefined4 *)(puVar1 + 4) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_58._4_4_;
    *(undefined4 *)(puVar1 + 5) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_50._4_4_;
    puVar1[6] = local_48;
    if (*plVar2 != 0) {
      local_68 = 0;
    }
    puVar1[8] = local_38;
    if (plVar2 != (longlong *)0x0) {
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FAudioThread::GetCommandWrapper'::__l7::<lambda_2>,void>::Call;
    }
    if (local_68 != 0) {
      (**(code **)(local_58 + 0x10))();
    }
    if (*(longlong *)param_1 != 0) {
      plVar2 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar2 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetCurrentAudioThreadStatId @ 1476b01a0

FString * __cdecl FAudioThread::GetCurrentAudioThreadStatId(FString *__return_storage_ptr__)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  ::FString::FString(__return_storage_ptr__,
                     ((CurrentAudioThreadStatId.StatIdPtr)->StatDescriptionAnsi).Ptr);
  LeaveCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  return __return_storage_ptr__;
}

// GetLongestTaskInfo @ 1476b2210

void __cdecl FAudioThread::GetLongestTaskInfo(FString *param_1,double *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  pFVar2 = ::FString::FString(&local_18,
                              ((LongestAudioThreadStatId.StatIdPtr)->StatDescriptionAnsi).Ptr);
  if (param_1 != pFVar2) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *param_2 = LongestAudioThreadTimeMsec;
                    /* WARNING: Could not recover jumptable at 0x0001476b22a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  return;
}

// IsUsingThreadedAudio @ 1476bad20

bool __cdecl FAudioThread::IsUsingThreadedAudio(void)

{
  return bUseThreadedAudio;
}

// ProcessAllCommands @ 1476bfd20

void __cdecl FAudioThread::ProcessAllCommands(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsAudioThreadRunning();
  if (bVar2) {
    FAudioAsyncBatcher::Flush(&GAudioAsyncBatcher);
    return;
  }
  if (GAudioAsyncBatcher.WorkItems.ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GAudioAsyncBatcher.WorkItems.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                       ,0x238,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ResetAudioThreadTimers @ 1476c4530

void __cdecl FAudioThread::ResetAudioThreadTimers(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  LongestAudioThreadTimeMsec = 0.0;
  LongestAudioThreadStatId.StatIdPtr = &TStatId::TStatId_NAME_None;
                    /* WARNING: Could not recover jumptable at 0x0001476c4565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  return;
}

// ResumeAudioThread @ 1476c4810

void __cdecl FAudioThread::ResumeAudioThread(void)

{
  int *piVar1;
  atomic<bool> aVar2;
  int iVar3;
  code *pcVar4;
  TUniquePtr<UE::Tasks::FTaskEvent,TDefaultDelete<UE::Tasks::FTaskEvent>_> TVar5;
  bool bVar6;
  TUniquePtr<UE::Tasks::FTaskEvent,TDefaultDelete<UE::Tasks::FTaskEvent>_> TVar7;
  FTaskEvent FVar8;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                         ,0x16d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TVar7.Ptr = ResumeEvent.Ptr;
  if ((GIsAudioThreadRunning != (atomic<bool>)0x0) &&
     (SuspendCount = SuspendCount + -1, SuspendCount == 0)) {
    if ((GIsAudioThreadSuspended == (atomic<bool>)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GIsAudioThreadSuspended.load(std::memory_order_relaxed)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                           ,0x179,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    GIsAudioThreadSuspended = (atomic<bool>)0x0;
    if (((*ResumeEvent.Ptr == (FTaskEvent)0x0) ||
        (*(char *)((longlong)*ResumeEvent.Ptr + 0xd0) != '\0')) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ResumeEvent->IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                           ,0x17c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*ResumeEvent.Ptr != (FTaskEvent)0x0) &&
       (*(char *)((longlong)*ResumeEvent.Ptr + 0xd0) == '\0')) {
      FVar8 = *ResumeEvent.Ptr;
      LOCK();
      aVar2 = *(atomic<bool> *)((longlong)FVar8 + 0x45);
      *(atomic<bool> *)((longlong)FVar8 + 0x45) = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar2 == (atomic<bool>)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)FVar8 + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar8 + 0x30) + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar8,0xd8);
      }
    }
    TVar7.Ptr = ::operator_new(8);
    if (TVar7.Ptr == (FTaskEvent *)0x0) {
      TVar7.Ptr = (FTaskEvent *)0x0;
    }
    else {
      FVar8 = (FTaskEvent)
              UE::Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp(382)"
                        );
      *TVar7.Ptr = FVar8;
    }
    TVar5.Ptr = ResumeEvent.Ptr;
    if (ResumeEvent.Ptr != (FTaskEvent *)0x0) {
      FVar8 = *ResumeEvent.Ptr;
      ResumeEvent.Ptr = TVar7.Ptr;
      if (FVar8 != (FTaskEvent)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)FVar8 + 0x30);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)FVar8)(FVar8,1);
        }
      }
      ::operator_delete(TVar5.Ptr,8);
      return;
    }
  }
  ResumeEvent.Ptr = TVar7.Ptr;
  return;
}

// RunCommandOnAudioThread @ 1476c49a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAudioThread::RunCommandOnAudioThread(TUniqueFunction<void___cdecl(void)> *param_1,TStatId param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  ETaskPriority EVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  FTaskBase *this;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  FTaskBase *this_00;
  undefined1 auStackY_108 [32];
  TUniqueFunction<void___cdecl(void)> local_b8;
  FTaskBase *local_88 [2];
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_b8._0_8_ = *(undefined8 *)param_1;
  local_b8._40_8_ = *(undefined8 *)&param_1->field_0x28;
  this_00 = (FTaskBase *)0x0;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_b8._32_8_ = *(undefined8 *)&param_1->field_0x20;
  local_b8._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_b8._24_8_ = *(undefined8 *)&param_1->field_0x18;
  if (local_b8._0_8_ != 0) {
    *(undefined8 *)param_1 = 0;
  }
  GetCommandWrapper((TUniqueFunction<void___cdecl(void)> *)local_58,&local_b8,param_2);
  bVar6 = IsInAudioThread();
  if (bVar6) {
    UE::Core::Private::Function::CheckCallable((void *)local_58._0_8_);
    uVar5 = local_58._0_8_;
    plVar8 = (longlong *)(local_58 + 0x10);
    if (local_30 != (longlong *)0x0) {
      plVar8 = local_30;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*(code *)uVar5)(uVar7);
  }
  else {
    bVar6 = IsInGameThread();
    EVar4 = GAudioTaskPriority;
    if (bVar6) {
      bVar6 = IsInGameThread();
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                             ,0x19e,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (GCVarEnableBatchProcessing != 0) {
        if (GBatchAudioAsyncBatchSize <= GAudioAsyncBatcher.WorkItems.ArrayNum) {
          FAudioAsyncBatcher::Flush(&GAudioAsyncBatcher);
        }
        if (((GAudioAsyncBatcher.WorkItems.AllocatorInstance.Data <=
              (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 <
             GAudioAsyncBatcher.WorkItems.AllocatorInstance.Data +
             (longlong)GAudioAsyncBatcher.WorkItems.ArrayMax * 0x30)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (GAudioAsyncBatcher.WorkItems.ArrayNum == GAudioAsyncBatcher.WorkItems.ArrayMax) {
          GAudioAsyncBatcher.WorkItems.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1030,(ForAnyElementType *)&GAudioAsyncBatcher,
                          &GAudioAsyncBatcher.WorkItems.ArrayMax);
        }
        pFVar9 = GAudioAsyncBatcher.WorkItems.AllocatorInstance.Data +
                 (longlong)GAudioAsyncBatcher.WorkItems.ArrayNum * 0x30;
        GAudioAsyncBatcher.WorkItems.ArrayNum = GAudioAsyncBatcher.WorkItems.ArrayNum + 1;
        *(undefined8 *)pFVar9 = local_58._0_8_;
        *(longlong **)(pFVar9 + 0x28) = local_30;
        local_30 = (longlong *)0x0;
        *(undefined8 *)(pFVar9 + 0x10) = local_58._16_8_;
        *(undefined8 *)(pFVar9 + 0x18) = local_58._24_8_;
        *(undefined8 *)(pFVar9 + 0x20) = local_58._32_8_;
        if (*(longlong *)pFVar9 != 0) {
          local_58._0_8_ = (FTaskBase *)0x0;
          goto LAB_1476c4cf5;
        }
      }
    }
    else if (bUseThreadedAudio == false) {
      local_88[0] = (FTaskBase *)local_58._0_8_;
      local_60 = local_30;
      local_30 = (longlong *)0x0;
      local_78 = local_58._16_8_;
      lStack_70 = local_58._24_8_;
      local_68 = local_58._32_8_;
      local_58._0_8_ = (FTaskBase *)0x0;
      AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_88);
    }
    else {
      this = FMemory::Malloc(0x140,0x40);
      if (this != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::FTaskBase(this,2,true);
        this->_padding_ =
             (longlong)
             &___7__TExecutableTaskBase_V__TUniqueFunction___A6AXXZ__XX_Private_Tasks_UE__6B_;
        UE::Tasks::Private::FTaskBase::Init(this,L"AudioCommand",EVar4,None,None);
        this[1]._padding_ = local_58._0_8_;
        *(longlong **)&this[1].RefCount = local_30;
        local_30 = (longlong *)0x0;
        this[1]._padding_ = local_58._16_8_;
        this[1]._padding_ = local_58._24_8_;
        this[1]._padding_ = local_58._32_8_;
        if (this[1]._padding_ != 0) {
          local_58._0_8_ = this_00;
        }
        this->_padding_ =
             (longlong)&___7__TExecutableTask_V__TUniqueFunction___A6AXXZ___Private_Tasks_UE__6B_;
        this_00 = this;
      }
      LOCK();
      GAudioPipe.TaskCount = (atomic<unsigned___int64>)((longlong)GAudioPipe.TaskCount + 1);
      UNLOCK();
      LOCK();
      this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
      UNLOCK();
      this_00->Pipe = &GAudioPipe;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
  }
  if ((FTaskBase *)local_58._0_8_ != (FTaskBase *)0x0) {
    plVar8 = (longlong *)(local_58 + 0x10);
    if (local_30 != (longlong *)0x0) {
      plVar8 = local_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_1476c4cf5:
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// RunCommandOnGameThread @ 1476c4d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)> *param_1,TStatId param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FTSTicker *this;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_24_::FStat_STAT_AudioThread_RunCommandOnGameThread>
  FVar14;
  undefined8 uVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  uint uVar18;
  code **ppcVar19;
  longlong *plVar20;
  FName FVar21;
  FNameEntryId FVar22;
  FName FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_288 [32];
  FColor_u_0 local_228 [2];
  FName local_220;
  FName local_218;
  FColor_u_0 local_210 [2];
  FName local_208;
  FName local_1f8;
  undefined8 *local_1e8;
  LARGE_INTEGER local_1e0;
  LARGE_INTEGER local_1d8;
  FStatMessage local_1d0;
  FStatMessage local_1c0;
  FName local_1b0;
  FName local_1a8;
  TWeakPtr<FTSTicker::FElement,1> local_1a0;
  TUniqueFunction<void___cdecl(void)> local_188;
  code *local_158 [5];
  undefined8 *local_130;
  code *local_128;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code **local_100;
  TStatIdData *local_f8;
  code *local_e8;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code **local_c0;
  TStatIdData *local_b8;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code **local_80;
  TStatIdData *local_78;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if ((AudioCommandPrivate::bBatchGameThreadAudioCommands) &&
     (AudioCommandPrivate::CommandQueue.bIsTicking)) {
    local_188._0_8_ = *(undefined8 *)param_1;
    local_188._40_8_ = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_188._32_8_ = *(undefined8 *)&param_1->field_0x20;
    local_188._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_188._24_8_ = *(undefined8 *)&param_1->field_0x18;
    if (local_188._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    AudioCommandPrivate::FGameThreadAudioCommandQueue::RunCommandOnGameThread
              (&AudioCommandPrivate::CommandQueue,&local_188,param_2);
    goto LAB_1476c5577;
  }
  bVar12 = IsAudioThreadRunning();
  if (bVar12) {
    bVar12 = IsInAudioThread();
    if (!bVar12) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInAudioThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                          ,0x246,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pcVar6 = *(code **)param_1;
    bVar12 = GAudioThreadUseSafeRunCommandOnGameThread == false;
    pcVar5 = *(code **)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    if (bVar12) {
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)param_1 = 0;
      }
      local_158[0] = (code *)0x0;
      local_a8 = pcVar6;
      local_98 = *(code **)&param_1->field_0x10;
      pcStack_90 = *(code **)&param_1->field_0x18;
      local_88 = *(code **)&param_1->field_0x20;
      local_80 = (code **)pcVar5;
      local_78 = param_2.StatIdPtr;
      local_130 = FMemory::Malloc(0x50,0x10);
      *local_130 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FAudioThread::RunCommandOnGameThread'::`22'::<lambda_2>,1,1>
                    ::_vftable_;
      plVar20 = local_130 + 2;
      *plVar20 = (longlong)local_a8;
      local_130[7] = local_80;
      local_80 = (code **)0x0;
      local_130[4] = local_98;
      local_130[5] = pcStack_90;
      local_130[6] = local_88;
      if (*plVar20 != 0) {
        local_a8 = (code *)0x0;
      }
      local_130[8] = local_78;
      if (plVar20 != (longlong *)0x0) {
        local_158[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FAudioThread::RunCommandOnGameThread'::__l22::<lambda_2>,void>
                       ::Call;
      }
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_1e8,(TStatIdData *)local_158,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&TStatId::TStatId_NAME_None,MainQueue);
      if (local_1e8 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_1e8 + 6);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*local_1e8)(local_1e8,1);
        }
      }
      if (local_a8 != (code *)0x0) {
        ppcVar19 = &local_98;
        if (local_80 != (code **)0x0) {
          ppcVar19 = local_80;
        }
        (**(code **)(*ppcVar19 + 0x10))();
      }
    }
    else {
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)param_1 = 0;
      }
      local_e8 = pcVar6;
      local_d8 = *(code **)&param_1->field_0x10;
      pcStack_d0 = *(code **)&param_1->field_0x18;
      local_c8 = *(code **)&param_1->field_0x20;
      local_c0 = (code **)pcVar5;
      local_b8 = param_2.StatIdPtr;
      this = FTSTicker::GetCoreTicker();
      local_128 = local_e8;
      local_100 = local_c0;
      local_c0 = (code **)0x0;
      local_118 = local_d8;
      pcStack_110 = pcStack_d0;
      local_108 = local_c8;
      if (local_e8 != (code *)0x0) {
        local_e8 = (code *)0x0;
      }
      local_f8 = local_b8;
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x50,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`ExecuteOnGameThread<`FAudioThread::RunCommandOnGameThread'::`20'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar19 = local_40 + 2;
      *ppcVar19 = local_128;
      local_40[7] = (code *)local_100;
      local_100 = (code **)0x0;
      local_40[4] = local_118;
      local_40[5] = pcStack_110;
      local_40[6] = local_108;
      if (*ppcVar19 != (code *)0x0) {
        local_128 = (code *)0x0;
      }
      local_40[8] = (code *)local_f8;
      if (ppcVar19 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`ExecuteOnGameThread<`FAudioThread::RunCommandOnGameThread'::__l20::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                      ::Call;
      }
      FTSTicker::AddTicker
                (this,&local_1a0,L"FAudioThread::RunCommandOnGameThread",0.0,
                 (TUniqueFunction<bool___cdecl(float)> *)local_68);
      if (local_1a0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_1a0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((local_1a0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_1a0.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_68[0] != (code *)0x0) {
        ppcVar19 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar19 = local_40;
        }
        (**(code **)(*ppcVar19 + 0x10))();
      }
      if (local_128 != (code *)0x0) {
        ppcVar19 = &local_118;
        if (local_100 != (code **)0x0) {
          ppcVar19 = local_100;
        }
        (**(code **)(*ppcVar19 + 0x10))();
      }
      if (local_e8 != (code *)0x0) {
        ppcVar19 = &local_d8;
        if (local_c0 != (code **)0x0) {
          ppcVar19 = local_c0;
        }
        (**(code **)(*ppcVar19 + 0x10))();
      }
    }
    goto LAB_1476c5577;
  }
  bVar12 = IsInGameThread();
  if (!bVar12) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInGameThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                        ,0x267,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (__CsvProfilerStat616 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Audio");
    __CsvProfilerStat616 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Audio","CSV_Audio");
  FVar24.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_AudioThread_RunCommandOnGameThread ==
          (FThreadSafeStaticStat<_public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_24_::FStat_STAT_AudioThread_RunCommandOnGameThread>
           )0x0) {
        pFVar13 = ::FName::FName(&local_1b0,"STAT_AudioThread_RunCommandOnGameThread");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioThread_RunCommandOnGameThread,
                   *pFVar13,L"STAT_AudioThread_RunCommandOnGameThread","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar14 = StatPtr_STAT_AudioThread_RunCommandOnGameThread;
  if (StatPtr_STAT_AudioThread_RunCommandOnGameThread ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_24_::FStat_STAT_AudioThread_RunCommandOnGameThread>
       )0x0) {
    pFVar13 = ::FName::FName(&local_1a8,"STAT_AudioThread_RunCommandOnGameThread");
    FVar14 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FAudioThread::RunCommandOnGameThread(TUniqueFunction<void___cdecl(void)>,TStatId)_::_24_::FStat_STAT_AudioThread_RunCommandOnGameThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AudioThread_RunCommandOnGameThread,*pFVar13,
                          L"STAT_AudioThread_RunCommandOnGameThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar14;
  bVar12 = false;
  bVar11 = false;
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar18 = FVar23.Number;
  if ((FVar22.Value == 0) && (uVar18 == 0)) {
LAB_1476c52d9:
    bVar9 = false;
    FVar23 = local_1f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_210[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_210[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar22.Value;
        local_220.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x269);
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1476c52d9;
    local_220.ComparisonIndex.Value = FVar22.Value;
    local_220.Number = uVar18;
    local_1f8 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar9 = true;
  }
  FVar21 = *(FName *)&(param_2.StatIdPtr)->Name;
  bVar7 = false;
  bVar10 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  FVar22 = FVar21.ComparisonIndex.Value;
  uVar18 = FVar21.Number;
  if ((FVar22.Value == 0) && (uVar18 == 0)) {
LAB_1476c538c:
    bVar8 = false;
    FVar21 = local_208;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_228[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_228[0]._s_0,((param_2.StatIdPtr)->StatDescriptionAnsi).Ptr);
      bVar7 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = FVar22.Value;
        local_218.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,((param_2.StatIdPtr)->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                   ,0x26a);
        bVar7 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1476c538c;
    local_218.ComparisonIndex.Value = FVar22.Value;
    local_218.Number = uVar18;
    local_208 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar8 = true;
    FVar24.Value = local_208.ComparisonIndex.Value;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar6 = *(code **)param_1;
  plVar20 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar20 = *(longlong **)&param_1->field_0x28;
  }
  uVar15 = (**(code **)(*plVar20 + 8))();
  (*pcVar6)(uVar15);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_1d0.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      local_1d0.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_1e0);
      local_1d0.StatData.Pad[4] = '\0';
      local_1d0.StatData.Pad[5] = '\0';
      local_1d0.StatData.Pad[6] = '\0';
      local_1d0.StatData.Pad[7] = '\0';
      local_1d0.StatData.Pad[0] = local_1e0.s.LowPart._0_1_;
      local_1d0.StatData.Pad[1] = local_1e0.s.LowPart._1_1_;
      local_1d0.StatData.Pad[2] = local_1e0.s.LowPart._2_1_;
      local_1d0.StatData.Pad[3] = local_1e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_1d0);
      piVar2 = &pFVar16->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_1c0.NameAndInfo.Index.Value = local_1f8.ComparisonIndex.Value;
      local_1c0.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1d8);
      local_1c0.StatData.Pad[4] = '\0';
      local_1c0.StatData.Pad[5] = '\0';
      local_1c0.StatData.Pad[6] = '\0';
      local_1c0.StatData.Pad[7] = '\0';
      local_1c0.StatData.Pad[0] = local_1d8.s.LowPart._0_1_;
      local_1c0.StatData.Pad[1] = local_1d8.s.LowPart._1_1_;
      local_1c0.StatData.Pad[2] = local_1d8.s.LowPart._2_1_;
      local_1c0.StatData.Pad[3] = local_1d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_1c0);
      piVar2 = &pFVar16->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Audio");
LAB_1476c5577:
  if (*(longlong *)param_1 != 0) {
    plVar20 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar20 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  return;
}

// SetCurrentAudioThreadStatId @ 1476c7bb0

void __cdecl FAudioThread::SetCurrentAudioThreadStatId(TStatId param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  CurrentAudioThreadStatId = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001476c7bd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  return;
}

// SetLongestTimeAndId @ 1476c8710

void __cdecl FAudioThread::SetLongestTimeAndId(TStatId param_1,double param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  LongestAudioThreadStatId = param_1;
  LongestAudioThreadTimeMsec = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001476c874e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&CurrentAudioThreadStatIdCS);
  return;
}

// SetUseThreadedAudio @ 1476c9cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FAudioThread::SetUseThreadedAudio(bool param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = IsAudioThreadRunning();
  bVar1 = param_1;
  if (((bVar2) && (bVar1 = param_1, !param_1)) &&
     (bVar1 = bUseThreadedAudio, 1 < (byte)LogAudio._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    return;
  }
  bUseThreadedAudio = bVar1;
  return;
}

// StartAudioThread @ 1476c9ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FAudioThread::StartAudioThread(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TUniquePtr<UE::Tasks::FTaskEvent,TDefaultDelete<UE::Tasks::FTaskEvent>_> TVar4;
  bool bVar5;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  FDelegateHandle FVar7;
  TUniquePtr<UE::Tasks::FTaskEvent,TDefaultDelete<UE::Tasks::FTaskEvent>_> TVar8;
  FTaskEvent FVar9;
  UWorld *pUVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_28 [24];
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                       ,0x277,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (GIsAudioThreadRunning != (atomic<bool>)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsAudioThreadRunning.load(std::memory_order_relaxed)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                       ,0x279,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (bUseThreadedAudio != false) {
    pTVar6 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
    FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddStatic<>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                         *)pTVar6,(_func___cdecl_void *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    PreGC.ID = *FVar7.ID;
    pTVar6 = FCoreUObjectDelegates::GetPostGarbageCollect();
    FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddStatic<>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                         *)pTVar6,(_func___cdecl_void *)local_res10);
                    /* WARNING: Load size is inaccurate */
    PostGC.ID = *FVar7.ID;
    FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddStatic<>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                         *)&FCoreUObjectDelegates::PreGarbageCollectConditionalBeginDestroy,
                        (_func___cdecl_void *)local_res18);
                    /* WARNING: Load size is inaccurate */
    PreGCDestroy.ID = *FVar7.ID;
    FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddStatic<>((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                         *)&FCoreUObjectDelegates::PostGarbageCollectConditionalBeginDestroy,
                        (_func___cdecl_void *)local_res20);
                    /* WARNING: Load size is inaccurate */
    PostGCDestroy.ID = *FVar7.ID;
    if (ResumeEvent.Ptr != (FTaskEvent *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResumeEvent.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                         ,0x286,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TVar8.Ptr = ::operator_new(8);
    if (TVar8.Ptr == (FTaskEvent *)0x0) {
      TVar8.Ptr = (FTaskEvent *)0x0;
    }
    else {
      FVar9 = (FTaskEvent)
              UE::Tasks::Private::FTaskEventBase::Create
                        (
                        L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp(647)"
                        );
      *TVar8.Ptr = FVar9;
    }
    TVar4.Ptr = ResumeEvent.Ptr;
    if (ResumeEvent.Ptr != (FTaskEvent *)0x0) {
      FVar9 = *ResumeEvent.Ptr;
      ResumeEvent.Ptr = TVar8.Ptr;
      if (FVar9 != (FTaskEvent)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)FVar9 + 0x30);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)FVar9)(FVar9,1);
        }
      }
      ::operator_delete(TVar4.Ptr,8);
      TVar8 = ResumeEvent;
    }
    ResumeEvent.Ptr = TVar8.Ptr;
    if ((AudioCommandPrivate::CommandQueue.bIsTicking == false) &&
       (AudioCommandPrivate::bBatchGameThreadAudioCommands != false)) {
      if (GEngine != (UEngine *)0x0) {
        pUVar10 = UEngine::GetCurrentPlayWorld(GEngine,(UWorld *)0x0);
        if (pUVar10 != (UWorld *)0x0) {
          FTickFunction::RegisterTickFunction
                    ((FTickFunction *)&AudioCommandPrivate::CommandQueue,
                     (pUVar10->PersistentLevel).field0_0x0.DebugPtr);
        }
      }
      TMulticastDelegateRegistration<void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>
      ::AddRaw<AudioCommandPrivate::FGameThreadAudioCommandQueue>
                ((TMulticastDelegateRegistration<void___cdecl(FActorsInitializedParams_const_&),FDefaultDelegateUserPolicy>
                  *)&FWorldDelegates::OnWorldInitializedActors,
                 (FGameThreadAudioCommandQueue *)local_28,(pmf_647a4ab2)0x1551f2920);
      AudioCommandPrivate::CommandQueue.bIsTicking = true;
    }
    GIsAudioThreadRunning = (atomic<bool>)0x1;
  }
  return;
}

// StopAudioThread @ 1476ca480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FAudioThread::StopAudioThread(void)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<bool> aVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FTaskEvent FVar6;
  code *pcVar7;
  TUniquePtr<UE::Tasks::FTaskEvent,TDefaultDelete<UE::Tasks::FTaskEvent>_> TVar8;
  bool bVar9;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar10;
  FTaskHandle FVar11;
  
  bVar9 = IsAudioThreadRunning();
  if (!bVar9) {
    return;
  }
  FAudioAsyncBatcher::Flush(&GAudioAsyncBatcher);
  FVar11 = GAudioAsyncBatcher.LastBatch;
  if (GAudioAsyncBatcher.LastBatch.Pimpl.Reference != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)GAudioAsyncBatcher.LastBatch.Pimpl.Reference);
    FVar11 = GAudioAsyncBatcher.LastBatch;
  }
  GAudioAsyncBatcher.LastBatch.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  if (FVar11.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &((FTaskBase *)FVar11.Pimpl.Reference)->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)((FTaskBase *)FVar11.Pimpl.Reference)->_padding_)(FVar11.Pimpl.Reference,1);
    }
  }
  pTVar10 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             pTVar10,PreGC);
  pTVar10 = FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             pTVar10,PostGC);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PreGarbageCollectConditionalBeginDestroy,PreGCDestroy);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostGarbageCollectConditionalBeginDestroy,PostGCDestroy);
  GIsAudioThreadRunning = (atomic<bool>)0x0;
  if (ResumeEvent.Ptr == (FTaskEvent *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResumeEvent.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                       ,0x2a0,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((*ResumeEvent.Ptr != (FTaskEvent)0x0) &&
     (*(char *)((longlong)*ResumeEvent.Ptr + 0xd0) == '\0')) {
    FVar6 = *ResumeEvent.Ptr;
    LOCK();
    aVar3 = *(atomic<bool> *)((longlong)FVar6 + 0x45);
    *(atomic<bool> *)((longlong)FVar6 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar3 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar6 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar6 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar6,0xd8);
    }
  }
  TVar8.Ptr = ResumeEvent.Ptr;
  if (ResumeEvent.Ptr != (FTaskEvent *)0x0) {
    ResumeEvent.Ptr = (FTaskEvent *)0x0;
    FVar6 = *TVar8.Ptr;
    if (FVar6 != (FTaskEvent)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)FVar6 + 0x30);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)**(undefined8 **)FVar6)(FVar6,1);
      }
    }
    ::operator_delete(TVar8.Ptr,8);
  }
  if (AudioCommandPrivate::CommandQueue.bIsTicking != false) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldInitializedActors,&AudioCommandPrivate::CommandQueue);
    FTickFunction::UnRegisterTickFunction((FTickFunction *)&AudioCommandPrivate::CommandQueue);
    AudioCommandPrivate::CommandQueue.bIsTicking = false;
  }
  AudioCommandPrivate::FGameThreadAudioCommandQueue::FlushCommands
            (&AudioCommandPrivate::CommandQueue);
  return;
}

// SuspendAudioThread @ 1476ca750

void __cdecl FAudioThread::SuspendAudioThread(void)

{
  code *pcVar1;
  bool bVar2;
  FEventRef local_res8 [4];
  code *local_38 [2];
  undefined **local_28;
  FEventRef *local_20;
  undefined8 local_10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                       ,0x14b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((GIsAudioThreadRunning != (atomic<bool>)0x0) &&
     (SuspendCount = SuspendCount + 1, SuspendCount == 1)) {
    if (GIsAudioThreadSuspended != (atomic<bool>)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsAudioThreadSuspended.load(std::memory_order_relaxed)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioThread.cpp"
                         ,0x157,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FEventRef::FEventRef(local_res8,AutoReset);
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAudioThread::SuspendAudioThread'::`2'::<lambda_1>,1,0>::
                _vftable_;
    local_20 = local_res8;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAudioThread::SuspendAudioThread'::__l2::<lambda_1>,void>::
                  Call;
    RunCommandOnAudioThread((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
    ProcessAllCommands();
    (**(code **)((local_res8[0].Event)->_padding_ + 0x20))(local_res8[0].Event,0xffffffff,0);
    FEventRef::~FEventRef(local_res8);
  }
  return;
}


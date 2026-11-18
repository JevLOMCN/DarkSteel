// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Get @ 1419fc270

FStatsThread * __cdecl FStatsThread::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::Singleton.
      IncomingData.Packets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::Singleton.
      IncomingData.Packets.ArrayNum = 0;
      `public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::Singleton.
      IncomingData.Packets.ArrayMax = 0;
      `public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::Singleton.
      State = FStatsThreadState::GetLocalState();
      `public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::Singleton.
      bReadyToProcess = false;
      atexit(`FStatsThread::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::
              Singleton;
    }
  }
  return &`public:_static_class_FStatsThread&___ptr64___cdecl_FStatsThread::Get(void)'::__l2::
          Singleton;
}

// Process @ 141a10510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsThread::Process(FStatsThread *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  long64 lVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_StatsNewTick> FVar11;
  IStatGroupEnableManager *pIVar12;
  FThreadSafeStaticStat<FStat_STAT_StatFramePacketsRecv> FVar13;
  FThreadStats *this_00;
  FThreadSafeStaticStat<FStat_STAT_StatsNewParseMeta> FVar14;
  FStartupMessages *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ScanForAdvance> FVar16;
  FThreadSafeStaticStat<FStat_STAT_StatsNewAddToHistory> FVar17;
  FColor_u_0 FVar18;
  FNameEntryId FVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20;
  uint uStackX_24;
  FCycleCounter local_158;
  FCycleCounter local_148;
  FCycleCounter local_138;
  FCycleCounter local_128;
  uint local_118;
  uint uStack_114;
  FStatPacketArray local_110;
  FColor_u_0 local_100;
  uint uStack_fc;
  FColor_u_0 local_f8 [2];
  TArray<FStatMessage,TSizedDefaultAllocator<64>_> local_f0;
  FColor_u_0 local_d8;
  uint local_d4;
  FColor_u_0 local_d0;
  uint local_cc;
  FName local_c8;
  FName local_c0;
  LARGE_INTEGER local_b8;
  FName local_b0;
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70 [7];
  
  dVar7 = __real_4170000000000000;
  iVar21 = 0;
  if (FThreadStats::bIsRawStatsActive) {
    pFVar20 = (this->IncomingData).Packets.AllocatorInstance.Data;
    iVar2 = (this->IncomingData).Packets.ArrayNum;
    pFVar5 = pFVar20 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->IncomingData).Packets.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FStatPacket_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar20 == pFVar5) break;
      iVar21 = iVar21 + *(int *)(*(longlong *)pFVar20 + 0x28);
      pFVar20 = pFVar20 + 8;
    }
    if ((iVar21 < 0x180001) && ((this->IncomingData).Packets.ArrayNum < 0x11)) {
      return;
    }
  }
  else {
    if (this->bReadyToProcess == false) {
      return;
    }
    QueryPerformanceCounter(&local_b8);
    if (((((double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7) -
          `private:_void___cdecl_FStatsThread::Process(void)___ptr64'::__l2::LastTime <=
          __real_3f747ae140000000) && ((this->IncomingData).Packets.ArrayNum < 0x11)) &&
       (bVar8 = UE::Stats::FStats::EnabledForCommandlet(), !bVar8)) {
      return;
    }
  }
  FVar11 = StatPtr_STAT_StatsNewTick;
  if (StatPtr_STAT_StatsNewTick == (FThreadSafeStaticStat<FStat_STAT_StatsNewTick>)0x0) {
    pFVar10 = ::FName::FName(&local_90,"STAT_StatsNewTick");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_StatsNewTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatsNewTick,*pFVar10,
                        L"StatsNew Tick","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_128.StatId.ComparisonIndex.Value = 0;
  local_128.StatId.Number = 0;
  local_128.EmittedEvent = 0;
  FVar3 = *(FName *)FVar11;
  FVar18.Bits = (uint)FVar3.ComparisonIndex.Value;
  uVar9 = FVar3.Number;
  if ((FVar18.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      local_128.EmittedEvent = local_128.EmittedEvent | 1;
      if (-1 < CpuChannel->Enabled) {
        local_d8.Bits = FVar18.Bits;
        local_d4 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                   ,0x39b);
        local_128.EmittedEvent = local_128.EmittedEvent | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.Bits = FVar18.Bits;
      uStackX_24 = uVar9;
      local_128.StatId = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_128.EmittedEvent = local_128.EmittedEvent | 4;
    }
  }
  pIVar12 = IStatGroupEnableManager::Get();
  (**(code **)((longlong)*pIVar12 + 0x30))(pIVar12);
  FStatsThreadState::UpdateStatMessagesMemoryUsage(this->State);
  this->bReadyToProcess = false;
  local_110.Packets.AllocatorInstance.Data = (this->IncomingData).Packets.AllocatorInstance.Data;
  iVar21 = (this->IncomingData).Packets.ArrayNum;
  local_110.Packets.ArrayNum = (this->IncomingData).Packets.ArrayNum;
  local_110.Packets.ArrayMax = (this->IncomingData).Packets.ArrayMax;
  (this->IncomingData).Packets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingData).Packets.ArrayNum = 0;
  (this->IncomingData).Packets.ArrayMax = 0;
  if ((iVar21 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar13 = StatPtr_STAT_StatFramePacketsRecv;
    if (StatPtr_STAT_StatFramePacketsRecv ==
        (FThreadSafeStaticStat<FStat_STAT_StatFramePacketsRecv>)0x0) {
      pFVar10 = ::FName::FName(&local_88,"STAT_StatFramePacketsRecv");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_StatFramePacketsRecv>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatFramePacketsRecv,*pFVar10,
                          L"Frame Packets Received","STATGROUP_StatSystem","STATCAT_Advanced",
                          L"Stat System",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar13;
    FVar18.Bits = (uint)FVar3.ComparisonIndex.Value;
    uVar9 = FVar3.Number;
    local_res20.Bits = FVar18.Bits;
    uStackX_24 = uVar9;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = FThreadStats::GetThreadStats();
      local_a0.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
      local_b0 = FVar3;
      local_a0.StatData.Pad = (uchar  [8])(longlong)iVar21;
      local_a0.NameAndInfo.Index.Value = FVar18.Bits;
      FThreadStats::AddStatMessage(this_00,&local_a0);
      FStatsTrace::Add(&local_b0,(longlong)iVar21);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FVar14 = StatPtr_STAT_StatsNewParseMeta;
  if (StatPtr_STAT_StatsNewParseMeta == (FThreadSafeStaticStat<FStat_STAT_StatsNewParseMeta>)0x0) {
    pFVar10 = ::FName::FName(&local_80,"STAT_StatsNewParseMeta");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_StatsNewParseMeta>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatsNewParseMeta,*pFVar10,
                        L"Parse Meta","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  local_158.StatId.ComparisonIndex.Value = 0;
  local_158.StatId.Number = 0;
  local_158.EmittedEvent = 0;
  FVar3 = *(FName *)FVar14;
  FVar18.Bits = (uint)FVar3.ComparisonIndex.Value;
  uVar9 = FVar3.Number;
  if ((FVar18.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      local_158.EmittedEvent = local_158.EmittedEvent | 1;
      if (-1 < CpuChannel->Enabled) {
        local_d0.Bits = FVar18.Bits;
        local_cc = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d0._s_0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                   ,0x3a5);
        local_158.EmittedEvent = local_158.EmittedEvent | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_158.StatId = FVar3;
      local_100.Bits = FVar18.Bits;
      uStack_fc = uVar9;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_158.EmittedEvent = local_158.EmittedEvent | 4;
    }
  }
  local_f0.ArrayMax = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  pFVar15 = FStartupMessages::Get();
  lpCriticalSection = &pFVar15->CriticalSection;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar15 = FStartupMessages::Get();
  lVar1 = (pFVar15->DelayedMessages).ArrayMax;
  pFVar5 = (pFVar15->DelayedMessages).AllocatorInstance.Data;
  lVar6 = (pFVar15->DelayedMessages).ArrayNum;
  (pFVar15->DelayedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar15->DelayedMessages).ArrayNum = 0;
  (pFVar15->DelayedMessages).ArrayMax = local_f0.ArrayMax;
  local_f0.AllocatorInstance.Data = pFVar5;
  local_f0.ArrayNum = lVar6;
  local_f0.ArrayMax = lVar1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (lVar6 != 0) {
    FStatsThreadState::ProcessMetaDataOnly(this->State,&local_f0);
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FCycleCounter::Stop(&local_158);
  FVar16 = StatPtr_STAT_ScanForAdvance;
  if (StatPtr_STAT_ScanForAdvance == (FThreadSafeStaticStat<FStat_STAT_ScanForAdvance>)0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_ScanForAdvance");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ScanForAdvance>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ScanForAdvance,*pFVar10,
                        L"Scan For Advance","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_148.StatId.ComparisonIndex.Value = 0;
  local_148.StatId.Number = 0;
  local_148.EmittedEvent = 0;
  FVar3 = *(FName *)FVar16;
  FVar19 = FVar3.ComparisonIndex.Value;
  uVar9 = FVar3.Number;
  if ((FVar19.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      local_148.EmittedEvent = local_148.EmittedEvent | 1;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar19.Value;
        local_c8.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                   ,0x3b1);
        local_148.EmittedEvent = local_148.EmittedEvent | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_148.StatId = FVar3;
      local_118 = FVar19.Value;
      uStack_114 = uVar9;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_148.EmittedEvent = local_148.EmittedEvent | 4;
    }
  }
  FStatsThreadState::ScanForAdvance(this->State,&local_110);
  FCycleCounter::Stop(&local_148);
  if (FThreadStats::bIsRawStatsActive == false) {
    FVar17 = StatPtr_STAT_StatsNewAddToHistory;
    if (StatPtr_STAT_StatsNewAddToHistory ==
        (FThreadSafeStaticStat<FStat_STAT_StatsNewAddToHistory>)0x0) {
      pFVar10 = ::FName::FName(local_70,"STAT_StatsNewAddToHistory");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_StatsNewAddToHistory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StatsNewAddToHistory,*pFVar10,
                          L"Add To History","STATGROUP_StatSystem","STATCAT_Advanced",L"Stat System"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_138.StatId.ComparisonIndex.Value = 0;
    local_138.StatId.Number = 0;
    local_138.EmittedEvent = 0;
    FVar3 = *(FName *)FVar17;
    FVar19 = FVar3.ComparisonIndex.Value;
    uVar9 = FVar3.Number;
    if ((FVar19.Value != 0) || (uVar9 != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_100.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_100._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        local_138.EmittedEvent = local_138.EmittedEvent | 1;
        if (-1 < CpuChannel->Enabled) {
          local_c0.ComparisonIndex.Value = FVar19.Value;
          local_c0.Number = uVar9;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_c0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                     ,0x3be);
          local_138.EmittedEvent = local_138.EmittedEvent | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_138.StatId = FVar3;
        local_118 = FVar19.Value;
        uStack_114 = uVar9;
        FThreadStats::AddMessage(FVar3,CycleScopeStart);
        local_138.EmittedEvent = local_138.EmittedEvent | 4;
      }
    }
    FStatPacketArray::Empty(&this->State->StartupRawStats);
    FStatsThreadState::AddToHistoryAndEmpty(this->State,&local_110);
    FCycleCounter::Stop(&local_138);
  }
  else {
    FStatsThreadState::ProcessRawStats(this->State,&local_110);
    FStatsThreadState::ResetRegularStats(this->State);
  }
  if ((local_110.Packets.ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NowData.Packets.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                         ,0x3c2,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  QueryPerformanceCounter(&local_a8);
  `private:_void___cdecl_FStatsThread::Process(void)___ptr64'::__l2::LastTime =
       (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  FStatPacketArray::Empty(&local_110);
  if (local_110.Packets.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Packets.AllocatorInstance.Data);
  }
  FCycleCounter::Stop(&local_128);
  return;
}

// StatMessage @ 141a23cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStatsThread::StatMessage(FStatsThread *this,FStatPacket *param_1)

{
  int *piVar1;
  FThreadSafeCounter *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FLLMScope local_res8 [2];
  FStatPacket *local_res10;
  FMemScope local_res18;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,Stats,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Stats,true);
  pTVar5 = CVarDumpStatPackets.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      lVar8 = 4;
      goto LAB_141a23d2f;
    }
  }
  lVar8 = 0;
LAB_141a23d2f:
  if ((*(int *)((longlong)pTVar5->ShadowedValue + lVar8) != 0) && (4 < (byte)LogStats._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_void___cdecl_FStatsThread::StatMessage(FStatPacket*___ptr64)___ptr64'::__l6
                ::LOG_Static,(FLogCategoryBase *)&LogStats);
  }
  this->bReadyToProcess = local_res10->ThreadType != Other;
  pFVar3 = (this->IncomingData).Packets.AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 <
      pFVar3 + (longlong)(this->IncomingData).Packets.ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->IncomingData).Packets.ArrayNum;
  piVar1 = &(this->IncomingData).Packets.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->IncomingData).Packets.ArrayNum = iVar7 + 1;
  *(FStatPacket **)((this->IncomingData).Packets.AllocatorInstance.Data + (longlong)iVar7 * 8) =
       local_res10;
  LOCK();
  pFVar2 = &this->State->NumStatMessages;
  pFVar2->Counter = pFVar2->Counter + (local_res10->StatMessages).NumElements;
  UNLOCK();
  Process(this);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}


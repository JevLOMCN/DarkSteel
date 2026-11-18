// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// operator() @ 141482690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FBroadcastTask::DoTask'::__l2::<lambda_1>::operator()(void *this,wchar_t *param_1)

{
  longlong lVar1;
  LARGE_INTEGER local_res8;
  
  lVar1 = *(longlong *)(*(longlong *)this + 0x40);
  QueryPerformanceCounter(&local_res8);
  if ((((lVar1 != 0) &&
       (__real_3f947ae147ae147b <
        ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - *(double *)(*(longlong *)this + 0x50))) &&
      (2 < (byte)LogTaskGraph._0_1_)) && (GPrintBroadcastWarnings != 0)) {
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(wchar_t_const*___ptr64)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogTaskGraph);
  }
  return;
}

// DoTask @ 1414922f0

/* WARNING: Removing unreachable block (ram,0x000141492957) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBroadcastTask::DoTask(FBroadcastTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  int iVar2;
  FEvent *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  FThreadSafeCounter *pFVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  undefined8 uVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  longlong *plVar16;
  FNameEntryId FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res20;
  FBroadcastTask *local_68;
  FStatMessage local_60;
  FName local_50;
  
  pFVar3 = this->TaskEvent;
  local_68 = this;
  QueryPerformanceCounter(&local_res8);
  if ((((pFVar3 != (FEvent *)0x0) &&
       (__real_3f947ae147ae147b <
        ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
         FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) - this->StartTime)) &&
      (2 < (byte)LogTaskGraph._0_1_)) && (GPrintBroadcastWarnings != 0)) {
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(wchar_t_const*___ptr64)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogTaskGraph);
  }
  local_res20 = *(FName *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  FVar19.Value = 0;
  if ((*(int *)((longlong)local_res20 + 0x9d4c) <
       `public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
       ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Broadcast_PayloadFunction = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName((FName *)&local_res8.s,"STAT_Broadcast_PayloadFunction");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l3::StatPtr_STAT_Broadcast_PayloadFunction,*pFVar11,
               L"STAT_Broadcast_PayloadFunction","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_Broadcast_PayloadFunction;
  if (_StatPtr_STAT_Broadcast_PayloadFunction == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_60,"STAT_Broadcast_PayloadFunction");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                          ::__l3::StatPtr_STAT_Broadcast_PayloadFunction,*pFVar11,
                         L"STAT_Broadcast_PayloadFunction","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar7 = false;
  bVar9 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Value == 0) && (uVar10 == 0)) {
LAB_1414924e0:
    bVar8 = false;
    FVar18 = local_50;
    FVar17.Value = FVar19.Value;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar17.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                   ,0x747);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1414924e0;
    local_res8.s.LowPart = FVar17.Value;
    local_res8.s.HighPart = uVar10;
    local_50 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar8 = true;
    FVar17.Value = local_50.ComparisonIndex.Value;
  }
  local_res10[0] = (FColor_u_0)param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->Function);
  plVar4 = *(longlong **)&(this->Function).field_0x28;
  pcVar5 = *(code **)&this->Function;
  plVar16 = (longlong *)&(this->Function).field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar16 = plVar4;
  }
  uVar13 = (**(code **)(*plVar16 + 8))();
  (*pcVar5)(uVar13,local_res10);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_60.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      local_60.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_res8);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_60);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  pFVar3 = this->TaskEvent;
  QueryPerformanceCounter(&local_res8);
  if (((pFVar3 != (FEvent *)0x0) &&
      (__real_3f947ae147ae147b <
       ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
        FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) - this->StartTime)) &&
     ((2 < (byte)LogTaskGraph._0_1_ && (GPrintBroadcastWarnings != 0)))) {
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(wchar_t_const*___ptr64)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogTaskGraph);
  }
  pFVar6 = this->StallForTaskThread;
  if (pFVar6 == (FThreadSafeCounter *)0x0) {
    return;
  }
  LOCK();
  iVar2 = pFVar6->Counter;
  pFVar6->Counter = pFVar6->Counter + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(this->CallerEvent->_padding_ + 0x10))();
    pFVar3 = this->TaskEvent;
    QueryPerformanceCounter(&local_res8);
    if (pFVar3 == (FEvent *)0x0) {
      return;
    }
    if (((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
         FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) - this->StartTime <=
        __real_3f947ae147ae147b) {
      return;
    }
    if ((byte)LogTaskGraph._0_1_ < 3) {
      return;
    }
    if (GPrintBroadcastWarnings == 0) {
      return;
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:___cdecl_`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(wchar_t_const*___ptr64)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogTaskGraph);
    return;
  }
  if (this->TaskEvent == (FEvent *)0x0) {
    return;
  }
  if ((*(int *)((longlong)local_res20 + 0x9d4c) <
       `public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
       ::__l12::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                           ::__l12::_thread_safe_static_guard_1__),
     `public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
     ::__l12::_thread_safe_static_guard_1__ == -1)) {
    _StatPtr_STAT_Broadcast_WaitForOthers = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName((FName *)&local_res8.s,"STAT_Broadcast_WaitForOthers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l12::StatPtr_STAT_Broadcast_WaitForOthers,*pFVar11,
               L"STAT_Broadcast_WaitForOthers","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                         ::__l12::_thread_safe_static_guard_1__);
  }
  pTVar12 = _StatPtr_STAT_Broadcast_WaitForOthers;
  if (_StatPtr_STAT_Broadcast_WaitForOthers == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_res20,"STAT_Broadcast_WaitForOthers");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FBroadcastTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                          ::__l12::StatPtr_STAT_Broadcast_WaitForOthers,*pFVar11,
                         L"STAT_Broadcast_WaitForOthers","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar12->Name;
  bVar7 = false;
  bVar9 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = MainQueue;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar17.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                   ,0x753);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar17.Value;
      local_res8.s.HighPart = uVar10;
      local_50 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      FVar19.Value = local_50.ComparisonIndex.Value;
      goto LAB_1414927b9;
    }
  }
  bVar8 = false;
  FVar18 = local_50;
LAB_1414927b9:
  (**(code **)(this->TaskEvent->_padding_ + 0x20))(this->TaskEvent,0xffffffff);
  `FBroadcastTask::DoTask'::__l2::<lambda_1>::operator()
            (&local_68,L"receive broadcast do processing and wait for other task threads.");
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_60.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      local_60.NameAndInfo.Index.Value = FVar19.Value;
      QueryPerformanceCounter(&local_res8);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_60);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return;
}


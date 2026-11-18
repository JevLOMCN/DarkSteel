// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// ~FAsyncTaskBase @ 141620630

void __thiscall FAsyncTaskBase::~FAsyncTaskBase(FAsyncTaskBase *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  CheckIdle(this);
  DestroyEvent(this);
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar3 = (undefined8 *)this->_padding_;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141620687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// Abandon @ 141625d10

void __thiscall FAsyncTaskBase::Abandon(FAsyncTaskBase *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar2 == '\0') {
    DoWork(this);
    FinishThreadedWork(this);
    return;
  }
  if ((this->WorkNotFinishedCounter).Counter != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkNotFinishedCounter.GetValue() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                       ,0x144,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LOCK();
  (this->WorkNotFinishedCounter).Counter = (this->WorkNotFinishedCounter).Counter + -1;
  UNLOCK();
  FinishThreadedWork(this);
  return;
}

// CheckIdle @ 14162e160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncTaskBase::CheckIdle(FAsyncTaskBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->WorkNotFinishedCounter).Counter != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkNotFinishedCounter.GetValue() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                       ,0x16d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->QueuedPool != (FQueuedThreadPool *)0x0) {
    ::FDebug::DumpStackTraceToLog(Warning);
    if (this->QueuedPool != (FQueuedThreadPool *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!QueuedPool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// DestroyEvent @ 141634570

void __thiscall FAsyncTaskBase::DestroyEvent(FAsyncTaskBase *this)

{
  FEvent *pFVar1;
  FEvent *pFVar2;
  code *pcVar3;
  char cVar4;
  TLockFreePointerListLIFOPad<FEvent,64> *this_00;
  bool bVar5;
  
  pFVar1 = this->DoneEvent;
  if (pFVar1 == (FEvent *)0x0) {
    this->DoneEvent = (FEvent *)0x0;
    return;
  }
  cVar4 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
  if (cVar4 == '\0') {
    this_00 = (TLockFreePointerListLIFOPad<FEvent,64> *)TLazySingleton<TEventPool<0>_>::Get();
    cVar4 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    bVar5 = cVar4 == '\0';
  }
  else {
    this_00 = (TLockFreePointerListLIFOPad<FEvent,64> *)TLazySingleton<TEventPool<1>_>::Get();
    cVar4 = (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    bVar5 = cVar4 == '\x01';
  }
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Event->IsManualReset() == (PoolType == EEventMode::ManualReset)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                       ,0x65,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (FEvent *)pFVar1[1]._padding_;
  pFVar1->_padding_ = (longlong)&___7FEvent__6B_;
  pFVar1[1]._padding_ = 0;
  ::operator_delete(pFVar1,0x18);
  if (pFVar2 == (FEvent *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Event",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                       ,0x9c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  TLockFreePointerListLIFOPad<FEvent,64>::Push(this_00,pFVar2);
  this->DoneEvent = (FEvent *)0x0;
  return;
}

// DoThreadedWork @ 141635280

void __thiscall FAsyncTaskBase::DoThreadedWork(FAsyncTaskBase *this)

{
  DoWork(this);
  FinishThreadedWork(this);
  return;
}

// DoWork @ 141636460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncTaskBase::DoWork(FAsyncTaskBase *this)

{
  int *piVar1;
  TStatIdData *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar9;
  FNameEntryId FVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  LARGE_INTEGER local_60;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  FInheritedContextScope local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)&this->_padding_,&local_30);
  pTVar2 = (this->StatId).StatIdPtr;
  bVar5 = false;
  bVar7 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar9 = *(FName *)&pTVar2->Name;
  FVar10 = FVar9.ComparisonIndex.Value;
  uVar8 = FVar9.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_68[0] = 0;
      bVar5 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar5) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,local_68);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.ComparisonIndex.Value = FVar10.Value;
        local_58.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_58,(pTVar2->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x11e);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_60.s.LowPart = FVar10.Value;
      local_60.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar4 = true;
      goto LAB_14163657b;
    }
  }
  bVar4 = false;
  FVar9 = local_50;
LAB_14163657b:
  (**(code **)(this->_padding_ + 0x30))(this);
  if ((this->WorkNotFinishedCounter).Counter != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkNotFinishedCounter.GetValue() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                       ,0x121,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  (this->WorkNotFinishedCounter).Counter = (this->WorkNotFinishedCounter).Counter + -1;
  UNLOCK();
  if (bVar7) {
    bVar7 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
    if ((bVar7) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_60);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_30.MetaScope);
  FMemScope::~FMemScope(&local_30.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_30,local_30.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// EnsureCompletion @ 1416384b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncTaskBase::EnsureCompletion(FAsyncTaskBase *this,bool param_1,bool param_2)

{
  int *piVar1;
  FQueuedThreadPool *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FName FVar15;
  FNameEntryId FVar16;
  FName FVar17;
  byte bVar18;
  undefined4 local_res8 [2];
  byte local_res10;
  uint local_res20;
  uint uStackX_24;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_90;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FStatMessage local_60;
  FName local_50;
  FName local_48 [2];
  
  if (param_1) {
    pFVar2 = this->QueuedPool;
    if (pFVar2 == (FQueuedThreadPool *)0x0) {
      if ((this->WorkNotFinishedCounter).Counter != 0) {
        DoWork(this);
      }
    }
    else {
      cVar5 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2,this);
      if (cVar5 != '\0') {
        DoWork(this);
        FinishThreadedWork(this);
        this->QueuedPool = (FQueuedThreadPool *)0x0;
        goto LAB_141638a86;
      }
    }
  }
  if (this->QueuedPool != (FQueuedThreadPool *)0x0) {
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
                  __CpuProfilerEventSpecId343,"FAsyncTask::SyncCompletion",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                 ,0x157);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
                 __CpuProfilerEventSpecId343);
    }
    pTVar12 = (this->StatId).StatIdPtr;
    bVar18 = 0;
    local_a0.ComparisonIndex.Value = 0;
    local_a0.Number = 0;
    local_res10 = 0;
    FVar15 = *(FName *)&pTVar12->Name;
    FVar16 = FVar15.ComparisonIndex.Value;
    uVar10 = FVar15.Number;
    if ((FVar16.Value != 0) || (FVar17 = local_a0, uVar10 != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res8[0] = 0;
        bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
        if ((bVar6) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
          (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                    (FActiveExternalProfilerBase::ActiveProfiler,local_res8);
        }
        if (GTrackCsvNamedEvents != false) {
          LOCK();
          GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
          UNLOCK();
        }
        bVar18 = 1;
        local_res10 = 1;
        if (-1 < CpuChannel->Enabled) {
          local_b0.ComparisonIndex.Value = FVar16.Value;
          local_b0.Number = uVar10;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_b0,(pTVar12->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                     ,0x158);
          bVar18 = 3;
          local_res10 = 3;
        }
      }
      FVar17 = local_a0;
      if (FThreadStats::bPrimaryEnable != false) {
        local_res20 = FVar16.Value;
        uStackX_24 = uVar10;
        FThreadStats::AddMessage(FVar15,CycleScopeStart);
        local_res10 = bVar18 | 4;
        FVar17 = FVar15;
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::
                             __l5::_thread_safe_static_guard_0__),
       `private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
       _thread_safe_static_guard_0__ == -1)) {
      _StatPtr_STAT_FAsyncTask_SyncCompletion = (TStatIdData *)0x0;
      pFVar11 = ::FName::FName(&local_50,"STAT_FAsyncTask_SyncCompletion");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
                  StatPtr_STAT_FAsyncTask_SyncCompletion,*pFVar11,L"FAsyncTask::SyncCompletion",
                 "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
                 true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::
                           __l5::_thread_safe_static_guard_0__);
    }
    pTVar12 = _StatPtr_STAT_FAsyncTask_SyncCompletion;
    if (_StatPtr_STAT_FAsyncTask_SyncCompletion == (TStatIdData *)0x0) {
      pFVar11 = ::FName::FName(local_48,"STAT_FAsyncTask_SyncCompletion");
      pTVar12 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::
                            __l5::StatPtr_STAT_FAsyncTask_SyncCompletion,*pFVar11,
                           L"FAsyncTask::SyncCompletion","STATGROUP_ThreadPoolAsyncTasks",
                           "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,
                           false,MCR_Invalid);
    }
    FVar15 = *(FName *)&pTVar12->Name;
    bVar6 = false;
    bVar8 = false;
    local_90.ComparisonIndex.Value = 0;
    local_90.Number = 0;
    if ((FVar15.ComparisonIndex.Value.Value == 0) && (FVar15.Number == 0)) {
LAB_1416387e5:
      bVar4 = false;
      FVar15 = local_90;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20 = 0;
        bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
        if ((bVar6) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
          (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                    (FActiveExternalProfilerBase::ActiveProfiler,&local_res20);
        }
        if (GTrackCsvNamedEvents != false) {
          LOCK();
          GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
          UNLOCK();
        }
        bVar6 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_a8.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
          local_a8.Number = FVar15.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_a8,(pTVar12->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                     ,0x159);
          bVar6 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1416387e5;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar4 = true;
    }
    if ((this->DoneEvent == (FEvent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("DoneEvent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                           ,0x15b,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(this->DoneEvent->_padding_ + 0x20))(this->DoneEvent,0xffffffff);
    this->QueuedPool = (FQueuedThreadPool *)0x0;
    if (((bVar8) && (bVar8 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar8)) &&
       (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar4) && (FVar15 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
        local_70.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
        local_70.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_80);
        local_70.StatData.Pad[4] = '\0';
        local_70.StatData.Pad[5] = '\0';
        local_70.StatData.Pad[6] = '\0';
        local_70.StatData.Pad[7] = '\0';
        local_70.StatData.Pad[0] = local_80.s.LowPart._0_1_;
        local_70.StatData.Pad[1] = local_80.s.LowPart._1_1_;
        local_70.StatData.Pad[2] = local_80.s.LowPart._2_1_;
        local_70.StatData.Pad[3] = local_80.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar13,&local_70);
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
    bVar18 = local_res10;
    if ((((local_res10 & 1) != 0) &&
        (bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar6)) &&
       (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    }
    if ((bVar18 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((((bVar18 & 4) != 0) && (FVar17 != (FName)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
        local_60.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
        local_60.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_78);
        local_60.StatData.Pad[4] = '\0';
        local_60.StatData.Pad[5] = '\0';
        local_60.StatData.Pad[6] = '\0';
        local_60.StatData.Pad[7] = '\0';
        local_60.StatData.Pad[0] = local_78.s.LowPart._0_1_;
        local_60.StatData.Pad[1] = local_78.s.LowPart._1_1_;
        local_60.StatData.Pad[2] = local_78.s.LowPart._2_1_;
        local_60.StatData.Pad[3] = local_78.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar13,&local_60);
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
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (((this->WorkNotFinishedCounter).Counter != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkNotFinishedCounter.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16d,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->QueuedPool != (FQueuedThreadPool *)0x0) {
    ::FDebug::DumpStackTraceToLog(Warning);
  }
  if ((this->QueuedPool != (FQueuedThreadPool *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!QueuedPool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16f,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_141638a86:
  if (((this->WorkNotFinishedCounter).Counter != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkNotFinishedCounter.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16d,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar9 = this->QueuedPool == (FQueuedThreadPool *)0x0;
  if (!bVar9) {
    ::FDebug::DumpStackTraceToLog(Warning);
    bVar9 = this->QueuedPool == (FQueuedThreadPool *)0x0;
  }
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!QueuedPool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x16f,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// FinishThreadedWork @ 14163b8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncTaskBase::FinishThreadedWork(FAsyncTaskBase *this)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  bool bVar18;
  uint local_res8;
  uint uStackX_c;
  undefined4 local_res10 [2];
  FName local_res18;
  FName local_res20;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_78;
  FStatMessage local_68;
  FStatMessage local_58;
  
  if ((this->QueuedPool == (FQueuedThreadPool *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedPool",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x12a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->DoneEvent == (FEvent *)0x0) {
    return;
  }
  pTVar11 = (this->StatId).StatIdPtr;
  FVar16 = *(FName *)&pTVar11->Name;
  bVar5 = false;
  bVar8 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar14 = FVar16.ComparisonIndex.Value;
  FVar17.Value = 0;
  uVar9 = FVar16.Number;
  if ((FVar14.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = 0;
      bVar5 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar5) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,&local_res8);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar14.Value;
        local_res18.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x12d);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8 = FVar14.Value;
      uStackX_c = uVar9;
      local_78 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      goto LAB_14163ba3b;
    }
  }
  bVar4 = false;
  FVar16 = local_78;
LAB_14163ba3b:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FAsyncTaskBase::FinishThreadedWork(void)___ptr64'::__l12::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FAsyncTaskBase::FinishThreadedWork(void)___ptr64'
                           ::__l12::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FAsyncTaskBase::FinishThreadedWork(void)___ptr64'::__l12::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FAsyncTask_FinishThreadedWork = (TStatIdData *)0x0;
    pFVar10 = ::FName::FName(&local_98,"STAT_FAsyncTask_FinishThreadedWork");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_FAsyncTaskBase::FinishThreadedWork(void)___ptr64'::__l12::
                StatPtr_STAT_FAsyncTask_FinishThreadedWork,*pFVar10,
               L"FAsyncTask::FinishThreadedWork","STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced"
               ,L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_FAsyncTaskBase::FinishThreadedWork(void)___ptr64'::
                         __l12::_thread_safe_static_guard_0__);
  }
  pTVar11 = _StatPtr_STAT_FAsyncTask_FinishThreadedWork;
  if (_StatPtr_STAT_FAsyncTask_FinishThreadedWork == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(&local_90,"STAT_FAsyncTask_FinishThreadedWork");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_void___cdecl_FAsyncTaskBase::FinishThreadedWork(void)___ptr64'::
                          __l12::StatPtr_STAT_FAsyncTask_FinishThreadedWork,*pFVar10,
                         L"FAsyncTask::FinishThreadedWork","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar2 = *(FName *)&pTVar11->Name;
  bVar6 = false;
  bVar7 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar14 = FVar2.ComparisonIndex.Value;
  uVar9 = FVar2.Number;
  if ((FVar14.Value == 0) && (uVar9 == 0)) {
    (**(code **)(this->DoneEvent->_padding_ + 0x10))();
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0] = 0;
      bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar6) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,local_res10);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar6 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.Value;
        local_res20.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x12e);
        bVar6 = true;
        bVar7 = true;
      }
    }
    bVar18 = FThreadStats::bPrimaryEnable != false;
    FVar15 = local_88;
    if (bVar18) {
      local_res8 = FVar14.Value;
      uStackX_c = uVar9;
      local_88 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      FVar15 = FVar2;
      FVar17.Value = local_88.ComparisonIndex.Value;
    }
    (**(code **)(this->DoneEvent->_padding_ + 0x10))();
    if (((bVar7) && (bVar7 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar7)) &&
       (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar18) && (FVar15 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_68.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
        local_68.NameAndInfo.Index.Value = FVar17.Value;
        QueryPerformanceCounter(&local_a8);
        local_68.StatData.Pad[4] = '\0';
        local_68.StatData.Pad[5] = '\0';
        local_68.StatData.Pad[6] = '\0';
        local_68.StatData.Pad[7] = '\0';
        local_68.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
        local_68.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
        local_68.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
        local_68.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_68);
        piVar1 = &pFVar12->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
  }
  if (((bVar8) && (bVar8 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar8)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_58.NameAndInfo.Index.Value = local_78.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar12,&local_58);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  return;
}

// GetDebugName @ 141640a60

wchar_t * __thiscall FAsyncTaskBase::GetDebugName(FAsyncTaskBase *this)

{
  return this->DebugName;
}

// GetQueuedWorkFlags @ 141645bd0

EQueuedWorkFlags __thiscall FAsyncTaskBase::GetQueuedWorkFlags(FAsyncTaskBase *this)

{
  return this->Flags;
}

// GetRequiredMemory @ 141645cb0

long64 __thiscall FAsyncTaskBase::GetRequiredMemory(FAsyncTaskBase *this)

{
  return this->RequiredMemory;
}

// MarkAsCanceled @ 14164da70

void __thiscall FAsyncTaskBase::MarkAsCanceled(FAsyncTaskBase *this)

{
  return;
}

// Start @ 141660ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncTaskBase::Start
          (FAsyncTaskBase *this,bool param_1,FQueuedThreadPool *param_2,EQueuedWorkPriority param_3,
          EQueuedWorkFlags param_4,long64 param_5,wchar_t *param_6)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  TEventPool<1> *this_00;
  FEvent *pFVar15;
  FEvent *this_01;
  FName FVar16;
  FNameEntryId FVar17;
  FName FVar18;
  undefined4 local_res8 [2];
  char local_res10;
  uint local_res18;
  uint uStackX_1c;
  EQueuedWorkPriority local_res20;
  FStatMessage local_a8;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_78;
  FStatMessage local_68;
  FName local_58;
  FName local_50 [2];
  
  local_res10 = param_1;
  local_res20 = param_3;
  UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this->_padding_);
  pTVar12 = (this->StatId).StatIdPtr;
  bVar3 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar18 = *(FName *)&pTVar12->Name;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar17.Value == 0) && (uVar10 == 0)) {
LAB_141660ba7:
    bVar5 = false;
    FVar18 = local_88;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0] = 0;
      bVar7 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar7) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,local_res8);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar17.Value;
        local_98.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0xf7);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever != false) && (FThreadStats::bPrimaryEnable == false))
    goto LAB_141660ba7;
    local_res18 = FVar17.Value;
    uStackX_1c = uVar10;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_void___cdecl_FAsyncTaskBase::Start(bool,FQueuedThreadPool*___ptr64,EQueuedWorkPriority,EQueuedWorkFlags,__int64,wchar_t_const*___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_void___cdecl_FAsyncTaskBase::Start(bool,FQueuedThreadPool*___ptr64,EQueuedWorkPriority,EQueuedWorkFlags,__int64,wchar_t_const*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_void___cdecl_FAsyncTaskBase::Start(bool,FQueuedThreadPool*___ptr64,EQueuedWorkPriority,EQueuedWorkFlags,__int64,wchar_t_const*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _StatPtr_STAT_FAsyncTask_Start = (TStatIdData *)0x0;
      pFVar11 = ::FName::FName(&local_58,"STAT_FAsyncTask_Start");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`private:_void___cdecl_FAsyncTaskBase::Start(bool,FQueuedThreadPool*___ptr64,EQueuedWorkPriority,EQueuedWorkFlags,__int64,wchar_t_const*___ptr64)___ptr64'
                  ::__l2::StatPtr_STAT_FAsyncTask_Start,*pFVar11,L"FAsyncTask::Start",
                 "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
                 true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`private:_void___cdecl_FAsyncTaskBase::Start(bool,FQueuedThreadPool*___ptr64,EQueuedWorkPriority,EQueuedWorkFlags,__int64,wchar_t_const*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar12 = _StatPtr_STAT_FAsyncTask_Start;
  if (_StatPtr_STAT_FAsyncTask_Start == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(local_50,"STAT_FAsyncTask_Start");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_void___cdecl_FAsyncTaskBase::Start(bool,FQueuedThreadPool*___ptr64,EQueuedWorkPriority,EQueuedWorkFlags,__int64,wchar_t_const*___ptr64)___ptr64'
                          ::__l2::StatPtr_STAT_FAsyncTask_Start,*pFVar11,L"FAsyncTask::Start",
                         "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                         L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar12->Name;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value == 0) && (FVar16.Number == 0)) {
LAB_141660d37:
    bVar4 = false;
    FVar16 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18 = 0;
      bVar8 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar8) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,&local_res18);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar3 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_90.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0xf8);
        bVar3 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141660d37;
    local_a8.StatData.Pad = (uchar  [8])FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar3 = false;
    bVar4 = true;
  }
  this->RequiredMemory = param_5;
  this->DebugName = param_6;
  CheckIdle(this);
  LOCK();
  (this->WorkNotFinishedCounter).Counter = (this->WorkNotFinishedCounter).Counter + 1;
  UNLOCK();
  this->Priority = local_res20;
  this->Flags = param_4;
  this->QueuedPool = param_2;
  if (local_res10 == '\0') {
    if (param_2 != (FQueuedThreadPool *)0x0) {
      pFVar15 = this->DoneEvent;
      if (pFVar15 == (FEvent *)0x0) {
        this_00 = TLazySingleton<TEventPool<1>_>::Get();
        pFVar15 = ::operator_new(0x18);
        if (pFVar15 == (FEvent *)0x0) {
          pFVar15 = (FEvent *)0x0;
        }
        else {
          this_01 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                              ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_00);
          if (this_01 == (FEvent *)0x0) {
            this_01 = FWindowsPlatformProcess::CreateSynchEvent(true);
            if (this_01 == (FEvent *)0x0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Event",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                                 ,0x8f,L"");
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
          }
          FEvent::AdvanceStats(this_01);
          pFVar15[1]._padding_ = (longlong)this_01;
          pFVar15->EventId = 0;
          pFVar15->EventStartCycles = (TAtomic<unsigned_int>)0x0;
          pFVar15->_padding_ = (longlong)&___7FSafeRecyclableEvent__6B_;
        }
        this->DoneEvent = pFVar15;
      }
      (**(code **)(pFVar15->_padding_ + 0x18))(pFVar15);
      (**(code **)((longlong)*this->QueuedPool + 0x18))(this->QueuedPool,this);
      goto LAB_141660d8e;
    }
  }
  else {
    this->QueuedPool = (FQueuedThreadPool *)0x0;
  }
  DestroyEvent(this);
  DoWork(this);
LAB_141660d8e:
  if (bVar8) {
    bVar8 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
    if ((bVar8) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_5);
      local_a8.StatData.Pad = (uchar  [8])(param_5 & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_a8);
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
  if (bVar6) {
    bVar8 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
    if ((bVar8) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_68.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_6);
      local_68.StatData.Pad = (uchar  [8])((ulonglong)param_6 & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_68);
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
  return;
}

// SyncCompletion @ 141663990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAsyncTaskBase::SyncCompletion(FAsyncTaskBase *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FName FVar17;
  bool bVar18;
  undefined4 local_res8 [2];
  uint local_res18;
  uint uStackX_1c;
  uint local_res20;
  uint uStackX_24;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_88;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FStatMessage local_58;
  FName local_48;
  FName local_40;
  
  if (this->QueuedPool == (FQueuedThreadPool *)0x0) goto LAB_141663ea5;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
                __CpuProfilerEventSpecId343,"FAsyncTask::SyncCompletion",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
               ,0x157);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
               __CpuProfilerEventSpecId343);
  }
  pTVar12 = (this->StatId).StatIdPtr;
  bVar5 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar17 = *(FName *)&pTVar12->Name;
  FVar15 = FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar15.Value == 0) && (uVar10 == 0)) {
LAB_141663ae5:
    bVar4 = false;
    FVar17 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0] = 0;
      bVar5 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar5) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,local_res8);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar5 = -1 < CpuChannel->Enabled;
      if (bVar5) {
        local_a8.ComparisonIndex.Value = FVar15.Value;
        local_a8.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x158);
      }
      bVar9 = true;
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141663ae5;
    local_res18 = FVar15.Value;
    uStackX_1c = uVar10;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar4 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::
                           __l5::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FAsyncTask_SyncCompletion = (TStatIdData *)0x0;
    pFVar11 = ::FName::FName(&local_48,"STAT_FAsyncTask_SyncCompletion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5::
                StatPtr_STAT_FAsyncTask_SyncCompletion,*pFVar11,L"FAsyncTask::SyncCompletion",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5
                         ::_thread_safe_static_guard_0__);
  }
  pTVar12 = _StatPtr_STAT_FAsyncTask_SyncCompletion;
  if (_StatPtr_STAT_FAsyncTask_SyncCompletion == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_40,"STAT_FAsyncTask_SyncCompletion");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_void___cdecl_FAsyncTaskBase::SyncCompletion(bool)___ptr64'::__l5
                          ::StatPtr_STAT_FAsyncTask_SyncCompletion,*pFVar11,
                         L"FAsyncTask::SyncCompletion","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar12->Name;
  bVar6 = false;
  bVar8 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar10 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar10 == 0)) {
LAB_141663c5f:
    bVar3 = false;
    FVar16 = local_88;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18 = 0;
      bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar6) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,&local_res18);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar15.Value;
        local_a0.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x159);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141663c5f;
    local_res20 = FVar15.Value;
    uStackX_24 = uVar10;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar3 = true;
  }
  if ((this->DoneEvent == (FEvent *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DoneEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x15b,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(this->DoneEvent->_padding_ + 0x20))(this->DoneEvent,0xffffffff);
  this->QueuedPool = (FQueuedThreadPool *)0x0;
  if (((bVar8) && (bVar8 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar8)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_68.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_68);
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
  if (((bVar9) && (bVar9 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar9)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar5) {
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
      local_58.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_58);
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
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_141663ea5:
  if (((this->WorkNotFinishedCounter).Counter != 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("WorkNotFinishedCounter.GetValue() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                          ,0x16d,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar18 = this->QueuedPool == (FQueuedThreadPool *)0x0;
  if (!bVar18) {
    ::FDebug::DumpStackTraceToLog(Warning);
    bVar18 = this->QueuedPool == (FQueuedThreadPool *)0x0;
  }
  if ((!bVar18) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("!QueuedPool",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                          ,0x16f,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// WaitCompletionWithTimeout @ 14166b000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAsyncTaskBase::WaitCompletionWithTimeout(FAsyncTaskBase *this,float param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  TStatIdData *pTVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FNameEntryId FVar17;
  FName FVar18;
  FName FVar19;
  int iVar20;
  undefined4 local_res10 [2];
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  LARGE_INTEGER local_b8;
  FName local_b0;
  FName local_a8;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [4];
  
  if (param_1 <= 0.0) {
    if ((this->WorkNotFinishedCounter).Counter == 0) {
      SyncCompletion(this,false);
      return true;
    }
    return false;
  }
  if (this->QueuedPool == (FQueuedThreadPool *)0x0) {
    if (((this->WorkNotFinishedCounter).Counter != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorkNotFinishedCounter.GetValue() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                           ,0x16d,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    if (this->QueuedPool == (FQueuedThreadPool *)0x0) {
      return true;
    }
    ::FDebug::DumpStackTraceToLog(Warning);
    if (this->QueuedPool == (FQueuedThreadPool *)0x0) {
      return true;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!QueuedPool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                       ,0x16f,L"");
    if (!bVar5) {
      return true;
    }
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  pTVar14 = (this->StatId).StatIdPtr;
  FVar19 = *(FName *)&pTVar14->Name;
  bVar5 = false;
  bVar11 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  FVar17 = FVar19.ComparisonIndex.Value;
  uVar12 = FVar19.Number;
  if ((FVar17.Value == 0) && (uVar12 == 0)) {
LAB_14166b156:
    bVar4 = false;
    FVar19 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0] = 0;
      bVar5 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar5) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,local_res10);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar5 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar17.Value;
        local_res20.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(pTVar14->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x206);
        bVar5 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14166b156;
    local_res18 = FVar17.Value;
    uStackX_1c = uVar12;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar4 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_bool___cdecl_FAsyncTaskBase::WaitCompletionWithTimeout(float)___ptr64'::__l8::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_bool___cdecl_FAsyncTaskBase::WaitCompletionWithTimeout(float)___ptr64'
                           ::__l8::_thread_safe_static_guard_0__),
     `public:_bool___cdecl_FAsyncTaskBase::WaitCompletionWithTimeout(float)___ptr64'::__l8::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FAsyncTask_SyncCompletion = (TStatIdData *)0x0;
    pFVar13 = ::FName::FName(&local_60,"STAT_FAsyncTask_SyncCompletion");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_bool___cdecl_FAsyncTaskBase::WaitCompletionWithTimeout(float)___ptr64'::
                __l8::StatPtr_STAT_FAsyncTask_SyncCompletion,*pFVar13,L"FAsyncTask::SyncCompletion",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_bool___cdecl_FAsyncTaskBase::WaitCompletionWithTimeout(float)___ptr64'
                         ::__l8::_thread_safe_static_guard_0__);
  }
  pTVar14 = _StatPtr_STAT_FAsyncTask_SyncCompletion;
  if (_StatPtr_STAT_FAsyncTask_SyncCompletion == (TStatIdData *)0x0) {
    pFVar13 = ::FName::FName(local_58,"STAT_FAsyncTask_SyncCompletion");
    pTVar14 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_bool___cdecl_FAsyncTaskBase::WaitCompletionWithTimeout(float)___ptr64'
                          ::__l8::StatPtr_STAT_FAsyncTask_SyncCompletion,*pFVar13,
                         L"FAsyncTask::SyncCompletion","STATGROUP_ThreadPoolAsyncTasks",
                         "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar18 = *(FName *)&pTVar14->Name;
  bVar6 = false;
  bVar10 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar12 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18 = 0;
      bVar6 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar6) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,&local_res18);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar6 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar17.Value;
        local_b0.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(pTVar14->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                   ,0x207);
        bVar6 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8.s.LowPart = FVar17.Value;
      local_b8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar3 = true;
      goto LAB_14166b2cc;
    }
  }
  bVar3 = false;
  FVar18 = local_98;
LAB_14166b2cc:
  iVar20 = (int)(longlong)(param_1 * __real_447a0000) + 1;
  if ((iVar20 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x20a,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  if ((this->DoneEvent == (FEvent *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DoneEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x20c,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  cVar9 = (**(code **)(this->DoneEvent->_padding_ + 0x20))(this->DoneEvent,iVar20);
  if (cVar9 != '\0') {
    this->QueuedPool = (FQueuedThreadPool *)0x0;
    CheckIdle(this);
  }
  if (((bVar10) && (bVar10 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar10)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_80.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_80);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if (((bVar11) && (bVar11 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar11)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_70.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_70);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return cVar9 != '\0';
}


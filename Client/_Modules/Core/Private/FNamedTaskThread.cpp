// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// EnqueueFromOtherThread @ 1414936b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNamedTaskThread::EnqueueFromOtherThread(FNamedTaskThread *this,int param_1,FBaseGraphTask *param_2)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  FChaosMode FVar5;
  Type TVar6;
  int iVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  bool bVar14;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FStatMessage local_38;
  
  FVar5.State = GChaosMode.State;
  if ((GChaosMode.State != (atomic<FChaosMode::FState_*>)0x0) &&
     (*(int *)((longlong)GChaosMode.State + 0x2cb34) != 0)) {
    LOCK();
    iVar7 = *(int *)GChaosMode.State;
    *(int *)GChaosMode.State = *(int *)GChaosMode.State + 1;
    UNLOCK();
    fVar2 = *(float *)((longlong)FVar5.State + 4 + (ulonglong)((iVar7 + 1U) % 0xb2cb) * 4);
    if (0.0 < fVar2) {
      FWindowsPlatformProcess::Sleep(fVar2);
    }
  }
  TVar6 = UE::Tasks::Private::TranslatePriority
                    ((ETaskPriority)((ulonglong)*(undefined8 *)&param_2->field_0xb0 >> 0x3b) &
                     (Inherit|Default),param_2->field_0x44);
  iVar7 = FStallingTaskQueue<FBaseGraphTask,64,2>::Push
                    (&this->Queues[param_1].StallQueue,param_2,~(TVar6 >> 9) & 1);
  if (iVar7 < 0) {
    return false;
  }
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_bool___cdecl_FNamedTaskThread::EnqueueFromOtherThread(int,FBaseGraphTask*___ptr64)___ptr64'
       ::__l6::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_FNamedTaskThread::EnqueueFromOtherThread(int,FBaseGraphTask*___ptr64)___ptr64'
                           ::__l6::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_FNamedTaskThread::EnqueueFromOtherThread(int,FBaseGraphTask*___ptr64)___ptr64'
     ::__l6::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_TaskGraph_EnqueueFromOtherThread_Trigger = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_TaskGraph_EnqueueFromOtherThread_Trigger");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_bool___cdecl_FNamedTaskThread::EnqueueFromOtherThread(int,FBaseGraphTask*___ptr64)___ptr64'
                ::__l6::StatPtr_STAT_TaskGraph_EnqueueFromOtherThread_Trigger,*pFVar8,
               L"STAT_TaskGraph_EnqueueFromOtherThread_Trigger","STATGROUP_Quick","STATCAT_Advanced"
               ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_FNamedTaskThread::EnqueueFromOtherThread(int,FBaseGraphTask*___ptr64)___ptr64'
                         ::__l6::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_TaskGraph_EnqueueFromOtherThread_Trigger;
  if (_StatPtr_STAT_TaskGraph_EnqueueFromOtherThread_Trigger == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res18,"STAT_TaskGraph_EnqueueFromOtherThread_Trigger");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_bool___cdecl_FNamedTaskThread::EnqueueFromOtherThread(int,FBaseGraphTask*___ptr64)___ptr64'
                         ::__l6::StatPtr_STAT_TaskGraph_EnqueueFromOtherThread_Trigger,*pFVar8,
                        L"STAT_TaskGraph_EnqueueFromOtherThread_Trigger","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar3 = false;
  bVar4 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    (**(code **)((this->Queues[param_1].StallRestartEvent)->_padding_ + 0x10))();
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                   ,0x350);
        bVar3 = true;
        bVar4 = true;
      }
    }
    bVar14 = FThreadStats::bPrimaryEnable == false;
    if (bVar14) {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      FVar13.Value = FVar11.Value;
    }
    (**(code **)((this->Queues[param_1].StallRestartEvent)->_padding_ + 0x10))();
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar14) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar13.Value;
        QueryPerformanceCounter(&local_res8);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_38);
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
  }
  return true;
}

// EnqueueFromThisThread @ 141493ae0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNamedTaskThread::EnqueueFromThisThread(FNamedTaskThread *this,int param_1,FBaseGraphTask *param_2)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  int iVar4;
  
  TVar3 = UE::Tasks::Private::TranslatePriority
                    ((ETaskPriority)((ulonglong)*(undefined8 *)&param_2->field_0xb0 >> 0x3b) &
                     (Inherit|Default),param_2->field_0x44);
  iVar4 = FStallingTaskQueue<FBaseGraphTask,64,2>::Push
                    (&this->Queues[param_1].StallQueue,param_2,~((int)TVar3 >> 9) & 1);
  if (-1 < iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ThreadToStart < 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x32a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// IsProcessingTasks @ 14149e340

bool __thiscall FNamedTaskThread::IsProcessingTasks(FNamedTaskThread *this,int param_1)

{
  return this->Queues[param_1].RecursionGuard != 0;
}

// ProcessTasksNamedThread @ 1414a9ea0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FNamedTaskThread::ProcessTasksNamedThread(FNamedTaskThread *this,int param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FChaosMode FVar13;
  bool bVar14;
  uint uVar15;
  FName *pFVar16;
  FTaskBase *this_00;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  ulong64 uVar19;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  FName FVar23;
  TStatIdData *pTVar24;
  TStatIdData *pTVar25;
  bool bVar26;
  ulong64 local_138;
  FColor_u_0 local_130;
  FColor_u_0 local_12c;
  FColor_u_0 local_128 [2];
  FName local_120;
  FName local_110;
  FName local_108;
  uint local_100;
  uint uStack_fc;
  FName local_f8;
  uint local_f0;
  uint uStack_ec;
  FName local_e8;
  LARGE_INTEGER local_d0;
  FStallingTaskQueue<FBaseGraphTask,64,2> *local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FStatMessage local_90;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60 [4];
  
  local_138 = 0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0xb4) == '\0') {
    if (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0) {
      (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x50))();
    }
    *(undefined1 *)(lVar4 + 0xb4) = 1;
  }
  pTVar25 = &TStatId::TStatId_NAME_None;
  pTVar24 = &TStatId::TStatId_NAME_None;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  bVar14 = false;
  bVar9 = false;
  if ((int)this->_padding_ == 1) {
    pTVar24 = (TStatIdData *)StatPtr_STAT_TaskGraph_GameTasks;
    if (StatPtr_STAT_TaskGraph_GameTasks ==
        (FThreadSafeStaticStat<FStat_STAT_TaskGraph_GameTasks>)0x0) {
      pFVar16 = ::FName::FName(&local_80,"STAT_TaskGraph_GameTasks");
      pTVar24 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_GameTasks,*pFVar16,
                           L"Game TaskGraph Tasks","STATGROUP_Threading","STATCAT_Advanced",
                           L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
    }
    pTVar25 = (TStatIdData *)StatPtr_STAT_TaskGraph_GameStalls;
    if (StatPtr_STAT_TaskGraph_GameStalls ==
        (FThreadSafeStaticStat<FStat_STAT_TaskGraph_GameStalls>)0x0) {
      pFVar16 = ::FName::FName(&local_78,"STAT_TaskGraph_GameStalls");
      pTVar25 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_GameStalls,*pFVar16,
                           L"Game TaskGraph Stalls","STATGROUP_Threading","STATCAT_Advanced",
                           L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else if (*(TAtomic<ENamedThreads::Type> *)&this->_padding_ ==
           ENamedThreads::FRenderThreadStatics::RenderThread) {
    if ((0 < param_1) &&
       (pTVar25 = (TStatIdData *)StatPtr_STAT_TaskGraph_RenderStalls,
       StatPtr_STAT_TaskGraph_RenderStalls ==
       (FThreadSafeStaticStat<FStat_STAT_TaskGraph_RenderStalls>)0x0)) {
      pFVar16 = ::FName::FName(&local_70,"STAT_TaskGraph_RenderStalls");
      pTVar25 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_RenderStalls,
                           *pFVar16,L"Render Local Queue Stalls","STATGROUP_Threading",
                           "STATCAT_Advanced",L"Threading",true,true,ST_int64,true,false,MCR_Invalid
                          );
    }
  }
  else {
    pTVar24 = (TStatIdData *)StatPtr_STAT_TaskGraph_OtherTasks;
    if (StatPtr_STAT_TaskGraph_OtherTasks ==
        (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)0x0) {
      pFVar16 = ::FName::FName(&local_68,"STAT_TaskGraph_OtherTasks");
      pTVar24 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_OtherTasks,*pFVar16,
                           L"Other TaskGraph Tasks","STATGROUP_Threading","STATCAT_Advanced",
                           L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
    }
    pTVar25 = (TStatIdData *)StatPtr_STAT_TaskGraph_OtherStalls;
    if (StatPtr_STAT_TaskGraph_OtherStalls ==
        (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherStalls>)0x0) {
      pFVar16 = ::FName::FName(local_60,"STAT_TaskGraph_OtherStalls");
      pTVar25 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_OtherStalls,*pFVar16
                           ,L"Other TaskGraph Stalls","STATGROUP_Threading","STATCAT_Advanced",
                           L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  bVar10 = false;
  if ((((*(FName *)pTVar24).ComparisonIndex.Value != 0) || ((*(FName *)pTVar24).Number != 0)) &&
     (FThreadStats::bPrimaryEnable != false)) {
    FVar23 = *(FName *)pTVar24;
    bVar10 = true;
    if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents == 0) {
        bVar8 = false;
        bVar11 = false;
      }
      else {
        local_130.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_130._s_0,(char *)*(FName *)((longlong)pTVar24 + 0x10));
        bVar8 = false;
        bVar11 = true;
        bVar14 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_110.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
          local_110.Number = FVar23.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_110,(wchar_t *)*(FName *)((longlong)pTVar24 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                     ,0x2e8);
          bVar8 = true;
          bVar11 = true;
          bVar14 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_120 = FVar23;
        FThreadStats::AddMessage(FVar23,CycleScopeStart);
        bVar14 = true;
        goto LAB_1414aa2ce;
      }
    }
  }
  bVar11 = bVar9;
  bVar8 = bVar14;
  bVar14 = false;
  FVar23 = local_120;
LAB_1414aa2ce:
  uVar20 = (uint)this->_padding_ & 0xff;
  uVar15 = 0xff;
  if (uVar20 != 0xff) {
    uVar15 = uVar20;
  }
  if ((uVar15 == 2) && (param_1 == 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  bVar6 = bVar10;
  if (this->Queues[param_1].QuitForReturn == false) {
    local_c8 = &this->Queues[param_1].StallQueue;
    do {
      if ((bVar9) && (-1 < GRenderThreadPollPeriodMs)) {
        bVar26 = true;
      }
      else {
        bVar26 = false;
      }
      if ((!param_2) || (bVar26)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      this_00 = (FTaskBase *)FStallingTaskQueue<FBaseGraphTask,64,2>::Pop(local_c8,0,bVar26);
      FVar13 = GChaosMode;
      if ((GChaosMode.State != (atomic<FChaosMode::FState_*>)0x0) &&
         (*(int *)((longlong)GChaosMode.State + 0x2cb34) != 0)) {
        LOCK();
        iVar2 = *(int *)GChaosMode.State;
        *(int *)GChaosMode.State = *(int *)GChaosMode.State + 1;
        UNLOCK();
        fVar3 = *(float *)((longlong)FVar13.State + 4 + (ulonglong)((iVar2 + 1U) % 0xb2cb) * 4);
        if (0.0 < fVar3) {
          FWindowsPlatformProcess::Sleep(fVar3);
        }
      }
      if (this_00 == (FTaskBase *)0x0) {
        if (bVar10) {
          if (bVar11) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar8) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar14) {
            FThreadStats::AddMessage(FVar23,CycleScopeEnd);
          }
          bVar14 = false;
          bVar8 = false;
          bVar11 = false;
          bVar10 = false;
        }
        if (!param_2) {
          return local_138;
        }
        bVar26 = -1 < CpuChannel->Enabled;
        if (bVar26) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&`public:_unsigned___int64___cdecl_FNamedTaskThread::ProcessTasksNamedThread(int,bool)___ptr64'
                      ::__l34::__CpuProfilerEventSpecId765,"WaitForTasks",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                     ,0x2fd);
          FCpuProfilerTrace::OutputBeginEvent
                    (`public:_unsigned___int64___cdecl_FNamedTaskThread::ProcessTasksNamedThread(int,bool)___ptr64'
                     ::__l34::__CpuProfilerEventSpecId765);
        }
        FVar22 = *(FName *)pTVar25;
        bVar6 = false;
        bVar12 = false;
        local_e8.ComparisonIndex.Value = 0;
        local_e8.Number = 0;
        FVar21 = FVar22.ComparisonIndex.Value;
        uVar15 = FVar22.Number;
        if ((FVar21.Value == 0) && (uVar15 == 0)) {
LAB_1414aa4f8:
          bVar7 = false;
          FVar22 = local_e8;
        }
        else {
          if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
            local_12c.Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_12c._s_0,(char *)*(FName *)((longlong)pTVar25 + 0x10));
            bVar6 = false;
            bVar12 = true;
            if (-1 < CpuChannel->Enabled) {
              local_108.ComparisonIndex.Value = FVar21.Value;
              local_108.Number = uVar15;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_108,(wchar_t *)*(FName *)((longlong)pTVar25 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                         ,0x2ff);
              bVar6 = true;
              bVar12 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_1414aa4f8;
          local_100 = FVar21.Value;
          uStack_fc = uVar15;
          local_e8 = FVar22;
          FThreadStats::AddMessage(FVar22,CycleScopeStart);
          bVar7 = true;
        }
        (**(code **)((this->Queues[param_1].StallRestartEvent)->_padding_ + 0x20))();
        FVar13 = GChaosMode;
        if (this->Queues[param_1].QuitForShutdown != false) {
          if (bVar12) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar6) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar7) && (FVar22 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar17 == (FThreadStats *)0x0) {
              pFVar18 = FThreadStatsPool::Get();
              pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
            }
            if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
              local_a0.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
              local_a0.NameAndInfo.Index.Value = FVar22.ComparisonIndex.Value.Value;
              QueryPerformanceCounter(&local_c0);
              local_a0.StatData.Pad[4] = '\0';
              local_a0.StatData.Pad[5] = '\0';
              local_a0.StatData.Pad[6] = '\0';
              local_a0.StatData.Pad[7] = '\0';
              local_a0.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
              local_a0.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
              local_a0.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
              local_a0.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(pFVar17,&local_a0);
              piVar1 = &pFVar17->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(pFVar17,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar17,false,false);
              }
            }
          }
          if (!bVar26) {
            return local_138;
          }
          FCpuProfilerTrace::OutputEndEvent();
          return local_138;
        }
        if ((GChaosMode.State != (atomic<FChaosMode::FState_*>)0x0) &&
           (*(int *)((longlong)GChaosMode.State + 0x2cb34) != 0)) {
          LOCK();
          iVar2 = *(int *)GChaosMode.State;
          *(int *)GChaosMode.State = *(int *)GChaosMode.State + 1;
          UNLOCK();
          fVar3 = *(float *)((longlong)FVar13.State + 4 + (ulonglong)((iVar2 + 1U) % 0xb2cb) * 4);
          if (0.0 < fVar3) {
            FWindowsPlatformProcess::Sleep(fVar3);
          }
        }
        if (bVar12) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (((bVar7) && (FVar22 != (FName)0x0)) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar17 == (FThreadStats *)0x0) {
            pFVar18 = FThreadStatsPool::Get();
            pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
          }
          if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
            local_b0.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
            local_b0.NameAndInfo.Index.Value = FVar22.ComparisonIndex.Value.Value;
            QueryPerformanceCounter(&local_d0);
            local_b0.StatData.Pad[4] = '\0';
            local_b0.StatData.Pad[5] = '\0';
            local_b0.StatData.Pad[6] = '\0';
            local_b0.StatData.Pad[7] = '\0';
            local_b0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
            local_b0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
            local_b0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
            local_b0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar17,&local_b0);
            piVar1 = &pFVar17->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar17,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar17,false,false);
            }
          }
        }
        if ((!bVar10) &&
           ((((*(FName *)pTVar24).ComparisonIndex.Value != 0 || ((*(FName *)pTVar24).Number != 0))
            && (FThreadStats::bPrimaryEnable != false)))) {
          FVar22 = *(FName *)pTVar24;
          bVar10 = true;
          FVar21 = FVar22.ComparisonIndex.Value;
          uVar15 = FVar22.Number;
          if ((FVar21.Value != 0) || (uVar15 != 0)) {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_128[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)pTVar24 + 0x10));
              bVar11 = true;
              if (-1 < CpuChannel->Enabled) {
                local_f8.ComparisonIndex.Value = FVar21.Value;
                local_f8.Number = uVar15;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_f8,(wchar_t *)*(FName *)((longlong)pTVar24 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                           ,0x30b);
                bVar8 = true;
                bVar11 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable != false) {
              local_120 = FVar22;
              local_f0 = FVar21.Value;
              uStack_ec = uVar15;
              FThreadStats::AddMessage(FVar22,CycleScopeStart);
              bVar14 = true;
              FVar23 = FVar22;
            }
          }
        }
        bVar6 = bVar10;
        if (bVar26) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else {
        bVar26 = UE::Tasks::Private::FTaskBase::TryExecuteTask(this_00);
        if ((!bVar26) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("TryExecuteTask()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                ,0x1ef,L""), bVar26)) {
          pcVar5 = (code *)swi(3);
          uVar19 = (*pcVar5)();
          return uVar19;
        }
        bVar26 = LowLevelTasks::FTask::TryCancel(&this_00->LowLevelTask,DefaultFlags);
        if ((!bVar26) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("LowLevelTask.TryCancel()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                ,0x1b8,L""), bVar26)) {
          pcVar5 = (code *)swi(3);
          uVar19 = (*pcVar5)();
          return uVar19;
        }
        FVar13.State = GChaosMode.State;
        local_138 = local_138 + 1;
        if ((GChaosMode.State != (atomic<FChaosMode::FState_*>)0x0) &&
           (*(int *)((longlong)GChaosMode.State + 0x2cb34) != 0)) {
          LOCK();
          iVar2 = *(int *)GChaosMode.State;
          *(int *)GChaosMode.State = *(int *)GChaosMode.State + 1;
          UNLOCK();
          fVar3 = *(float *)((longlong)FVar13.State + 4 + (ulonglong)((iVar2 + 1U) % 0xb2cb) * 4);
          if (0.0 < fVar3) {
            FWindowsPlatformProcess::Sleep(fVar3);
          }
        }
      }
    } while (this->Queues[param_1].QuitForReturn == false);
  }
  if (bVar6) {
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar14) && (FVar23 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
        local_90.NameAndInfo.Index.Value = local_120.ComparisonIndex.Value;
        local_90.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_b8);
        local_90.StatData.Pad[4] = '\0';
        local_90.StatData.Pad[5] = '\0';
        local_90.StatData.Pad[6] = '\0';
        local_90.StatData.Pad[7] = '\0';
        local_90.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
        local_90.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
        local_90.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
        local_90.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar17,&local_90);
        piVar1 = &pFVar17->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar17,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar17,false,false);
        }
      }
    }
  }
  return local_138;
}

// ProcessTasksUntilIdle @ 1414aaa30

ulong64 __thiscall FNamedTaskThread::ProcessTasksUntilIdle(FNamedTaskThread *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  if ((this->Queues[param_1].StallRestartEvent == (FEvent *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Queue(QueueIndex).StallRestartEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                         ,0x2ae,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  this->Queues[param_1].QuitForReturn = false;
  puVar1 = &this->Queues[param_1].RecursionGuard;
  *puVar1 = *puVar1 + 1;
  if ((this->Queues[param_1].RecursionGuard != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("++Queue(QueueIndex).RecursionGuard == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                         ,0x2b1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar4 = ProcessTasksNamedThread(this,param_1,false);
  puVar1 = &this->Queues[param_1].RecursionGuard;
  *puVar1 = *puVar1 - 1;
  if ((*puVar1 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!--Queue(QueueIndex).RecursionGuard",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                         ,0x2b3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return uVar4;
}

// ProcessTasksUntilQuit @ 1414aab60

void __thiscall FNamedTaskThread::ProcessTasksUntilQuit(FNamedTaskThread *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->Queues[param_1].StallRestartEvent == (FEvent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Queue(QueueIndex).StallRestartEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x29f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->Queues[param_1].QuitForReturn = false;
  puVar1 = &this->Queues[param_1].RecursionGuard;
  *puVar1 = *puVar1 + 1;
  if (this->Queues[param_1].RecursionGuard != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("++Queue(QueueIndex).RecursionGuard == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x2a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar3) {
    bVar3 = FForkProcessHelper::IsForkedMultithreadInstance();
    if ((!bVar3) || (GAllowTaskGraphForkMultithreading == false)) {
      bVar3 = false;
      goto LAB_1414aac20;
    }
  }
  bVar3 = true;
LAB_1414aac20:
  do {
    ProcessTasksNamedThread(this,param_1,bVar3);
    if ((this->Queues[param_1].QuitForReturn != false) ||
       (this->Queues[param_1].QuitForShutdown != false)) break;
  } while (bVar3 != false);
  puVar1 = &this->Queues[param_1].RecursionGuard;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!--Queue(QueueIndex).RecursionGuard",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x2a9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RequestQuit @ 1414ae4c0

void __thiscall FNamedTaskThread::RequestQuit(FNamedTaskThread *this,int param_1)

{
  FEvent *pFVar1;
  
  pFVar1 = this->Queues[0].StallRestartEvent;
  if (pFVar1 != (FEvent *)0x0) {
    if (param_1 == -1) {
      this->Queues[0].QuitForShutdown = true;
      this->Queues[1].QuitForShutdown = true;
      (**(code **)(pFVar1->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001414ae4fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((this->Queues[1].StallRestartEvent)->_padding_ + 0x10))();
      return;
    }
    this->Queues[param_1].QuitForReturn = true;
  }
  return;
}

// WakeUp @ 1414b9b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNamedTaskThread::WakeUp(FNamedTaskThread *this,int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FStatMessage local_38;
  
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FNamedTaskThread::WakeUp(int)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FNamedTaskThread::WakeUp(int)___ptr64'::
                           __l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FNamedTaskThread::WakeUp(int)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_TaskGraph_Wakeup_Trigger = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_TaskGraph_Wakeup_Trigger");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FNamedTaskThread::WakeUp(int)___ptr64'::__l2::
                StatPtr_STAT_TaskGraph_Wakeup_Trigger,*pFVar5,L"STAT_TaskGraph_Wakeup_Trigger",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FNamedTaskThread::WakeUp(int)___ptr64'::__l2
                         ::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_TaskGraph_Wakeup_Trigger;
  if (_StatPtr_STAT_TaskGraph_Wakeup_Trigger == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_TaskGraph_Wakeup_Trigger");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_virtual_void___cdecl_FNamedTaskThread::WakeUp(int)___ptr64'::__l2
                         ::StatPtr_STAT_TaskGraph_Wakeup_Trigger,*pFVar5,
                        L"STAT_TaskGraph_Wakeup_Trigger","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                   ,0x35f);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_1414b9ca7;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_1414b9ca7:
  (**(code **)((this->Queues[param_1].StallRestartEvent)->_padding_ + 0x10))();
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// GetDesiredThread @ 143b20830

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl Chaos::FPhysicsSolverProcessPushDataTask::GetDesiredThread(void)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  
  TVar6 = CPrio_FPhysicsTickTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CPrio_FPhysicsTickTask.TaskPriority;
  TVar5 = CPrio_FPhysicsTickTask.ThreadPriority;
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_FPhysicsTickTask.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CPrio_FPhysicsTickTask.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0)) {
    if (((CPrio_FPhysicsTickTask.TaskPriorityIfForcedToNormalThreadPriority & ~HighTaskPriority) !=
         MainQueue) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
  }
  else {
    if ((((CPrio_FPhysicsTickTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_FPhysicsTickTask.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask) ||
        ((CPrio_FPhysicsTickTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
    TVar6 = TVar5 | TVar3;
  }
  return TVar6 | AnyNormalThreadNormalTask;
}

// ProcessPushData @ 143b2c2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPhysicsSolverProcessPushDataTask::ProcessPushData(FPhysicsSolverProcessPushDataTask *this)

{
  int *piVar1;
  FPhysicsSolverBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_ChaosTick> FVar9;
  uint *puVar10;
  FChaosVDThreadContext *pFVar11;
  FTlsAutoCleanup *pFVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FLLMScope local_c8;
  FColor_u_0 local_c4;
  FName local_c0;
  FName local_b8;
  LARGE_INTEGER local_a8;
  FMemScope local_a0;
  FStatMessage local_98;
  code *local_88;
  uint *local_80;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined1 *local_50;
  FName local_48 [2];
  
  FLLMScope::FLLMScope(&local_c8,ChaosUpdate,false,None,Default,true);
  FMemScope::FMemScope(&local_a0,ChaosUpdate,true);
  FVar9 = StatPtr_STAT_ChaosTick;
  if (StatPtr_STAT_ChaosTick == (FThreadSafeStaticStat<FStat_STAT_ChaosTick>)0x0) {
    pFVar8 = ::FName::FName(local_48,"STAT_ChaosTick");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_ChaosTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosTick,*pFVar8,L"Physics Tick",
                       "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar15 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c4._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar14.Value;
        local_c0.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                   ,0x67);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar14.Value;
      uStackX_c = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_143b2c44e;
    }
  }
  bVar5 = false;
  FVar15 = local_b8;
LAB_143b2c44e:
  if (__CsvProfilerStat104 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Physics");
    __CsvProfilerStat104 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Physics","CSV_Physics");
  if (__CsvProfilerStat105 == false) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat105 = true;
  }
  uVar13 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat("StepSolver",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver");
  pFVar2 = this->Solver;
  puVar10 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_80 = &local_res8;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar10);
  FChaosVDThreadContext::PushContext(pFVar11,&pFVar2->CVDContextData);
  puVar10 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_70 = local_res10;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar10);
  *(int *)(pFVar12 + 2) = *(int *)(pFVar12 + 2) + 1;
  (**(code **)(this->Solver->_padding_ + 0x60))(this->Solver,this->PushData->ExternalTimestamp);
  (**(code **)(this->Solver->_padding_ + 0x58))(this->Solver,this->PushData);
  (**(code **)(this->Solver->_padding_ + 0x40))(this->Solver,this->PushData->ExternalDt);
  puVar10 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_60 = local_res18;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar10);
  if (*(int *)(pFVar12 + 2) < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicsSimContext > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0xbd,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)(pFVar12 + 2) = *(int *)(pFVar12 + 2) + -1;
  puVar10 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_50 = local_res20;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,puVar10);
  FChaosVDThreadContext::PopContext(pFVar11);
  FCsvProfiler::EndStat("StepSolver",uVar13);
  FCsvProfiler::EndExclusiveStat("Physics");
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
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
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(&local_c8);
  return;
}


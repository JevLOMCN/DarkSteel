// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FPhysicsSolverAdvanceTask @ 143afa690

FPhysicsSolverAdvanceTask * __thiscall
Chaos::FPhysicsSolverAdvanceTask::FPhysicsSolverAdvanceTask
          (FPhysicsSolverAdvanceTask *this,FPhysicsSolverBase *param_1,FPushPhysicsData *param_2)

{
  atomic<int> *paVar1;
  TAtomic<int> *pTVar2;
  FSharedReferencer<1> FVar3;
  uint *puVar4;
  FChaosVDThreadContext *this_00;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  this->Solver = param_1;
  this->PushData = param_2;
  (this->CVDContext).OwnerID = -1;
  (this->CVDContext).Id = -1;
  (this->CVDContext).Type = -1;
  (this->CVDContext).Attributes = 0;
  (this->CVDContext).CurrentDataChannel.Object = CVDDC_Default.Object;
  FVar3 = CVDDC_Default.SharedReferenceCount;
  (this->CVDContext).CurrentDataChannel.SharedReferenceCount.ReferenceController =
       CVDDC_Default.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  puVar4 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this_00 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar4);
  FChaosVDThreadContext::GetCurrentContext(this_00,&this->CVDContext);
  LOCK();
  pTVar2 = &this->Solver->NumPendingSolverAdvanceTasks;
  *pTVar2 = (TAtomic<int>)((int)*pTVar2 + 1);
  UNLOCK();
  return this;
}

// AdvanceSolver @ 143b13550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPhysicsSolverAdvanceTask::AdvanceSolver(FPhysicsSolverAdvanceTask *this)

{
  int *piVar1;
  TAtomic<int> *pTVar2;
  FPhysicsSolverBase *pFVar3;
  FPushPhysicsData *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FSharedReferencer<1> FVar11;
  bool bVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ChaosTick> FVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ResetMarshallingData> FVar18;
  FThreadSafeStaticStat<FStat_STAT_ConditionalApplyRewind> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  uint uVar22;
  FNameEntryId FVar23;
  FName FVar24;
  FName FVar25;
  bool bVar26;
  uint local_res8;
  uint uStackX_c;
  uint local_res10;
  uint uStackX_14;
  FLLMScope local_res18 [2];
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_1a8;
  FColor_u_0 local_1a4;
  uint local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FChaosVDContext local_180;
  FChaosVDContext local_160;
  FName local_140;
  FName local_130;
  FName local_120;
  FName local_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  FMemScope local_f0;
  FStatMessage local_e8;
  FStatMessage local_d8;
  FStatMessage local_c8;
  double local_b8;
  int local_b0;
  int local_ac;
  char local_a8;
  FString local_a0;
  code *local_90;
  uint *local_88;
  code *local_80;
  uint *local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FChaosVDOptionalDataChannel *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  pTStack_50 = CVDDC_Default.SharedReferenceCount.ReferenceController;
  local_58 = CVDDC_Default.Object;
  pFVar3 = this->Solver;
  if (CVDDC_Default.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_180.OwnerID = (pFVar3->CVDContextData).OwnerID;
  local_180.CurrentDataChannel.Object = (pFVar3->CVDContextData).CurrentDataChannel.Object;
  local_180.Id = (pFVar3->CVDContextData).Id;
  local_180.Type = (pFVar3->CVDContextData).Type;
  local_180.Attributes = (pFVar3->CVDContextData).Attributes;
  local_180.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       (pFVar3->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController;
  if (local_180.CurrentDataChannel.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_180.CurrentDataChannel.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_180.CurrentDataChannel.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  iVar13 = (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3);
  local_110 = pFVar3->DebugName;
  ::FName::ToString(&local_110,&local_a0);
  FChaosVisualDebuggerTrace::TraceSolverFrameStart(&local_180,&local_a0,iVar13);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.CurrentDataChannel.SharedReferenceCount.ReferenceController);
  FLLMScope::FLLMScope(local_res18,ChaosUpdate,false,None,Default,true);
  FMemScope::FMemScope(&local_f0,ChaosUpdate,true);
  bVar7 = false;
  bVar12 = false;
  FVar15 = StatPtr_STAT_ChaosTick;
  if (StatPtr_STAT_ChaosTick == (FThreadSafeStaticStat<FStat_STAT_ChaosTick>)0x0) {
    pFVar14 = ::FName::FName(&local_70,"STAT_ChaosTick");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_ChaosTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosTick,*pFVar14,
                        L"Physics Tick","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar15;
  bVar8 = false;
  bVar10 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  FVar23 = FVar25.ComparisonIndex.Value;
  uVar22 = FVar25.Number;
  if ((FVar23.Value != 0) || (uVar22 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar23.Value;
        local_198.Number = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                   ,0xa0);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar23.Value;
      uStackX_c = uVar22;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar9 = true;
      goto LAB_143b13794;
    }
  }
  bVar9 = false;
  FVar25 = local_140;
LAB_143b13794:
  if (__CsvProfilerStat161 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Physics");
    __CsvProfilerStat161 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Physics","CSV_Physics");
  if (__CsvProfilerStat162 == false) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat162 = true;
  }
  local_1a0 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat("StepSolver",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver");
  puVar16 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_88 = &local_res8;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar16);
  local_b8 = __real_3ff0000000000000;
  *(int *)(pFVar17 + 2) = *(int *)(pFVar17 + 2) + 1;
  pFVar4 = this->PushData;
  local_a8 = pFVar4->bSolverSubstepped;
  if ((bool)local_a8 != false) {
    local_b8 = local_b8 / (double)(pFVar4->IntervalNumSteps - pFVar4->IntervalStep);
  }
  local_ac = pFVar4->IntervalNumSteps;
  local_b0 = pFVar4->IntervalStep;
  (**(code **)(this->Solver->_padding_ + 0x48))(this->Solver,&local_b8);
  FVar18 = StatPtr_STAT_ResetMarshallingData;
  if (StatPtr_STAT_ResetMarshallingData ==
      (FThreadSafeStaticStat<FStat_STAT_ResetMarshallingData>)0x0) {
    pFVar14 = ::FName::FName(&local_68,"STAT_ResetMarshallingData");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_ResetMarshallingData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResetMarshallingData,*pFVar14,
                        L"Reset Marshalling Data","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar18;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar23 = FVar5.ComparisonIndex.Value;
  uVar22 = FVar5.Number;
  if ((FVar23.Value == 0) && (uVar22 == 0)) {
    FChaosMarshallingManager::FreeDataToHistory_Internal
              (&this->Solver->MarshallingManager,this->PushData);
    this->PushData = (FPushPhysicsData *)0x0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar7 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar23.Value;
        local_190.Number = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                   ,0xb4);
        bVar7 = true;
        bVar12 = true;
      }
    }
    bVar26 = FThreadStats::bPrimaryEnable != false;
    FVar24 = local_130;
    if (bVar26) {
      local_res10 = FVar23.Value;
      uStackX_14 = uVar22;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar7 = false;
      FVar24 = FVar5;
    }
    FChaosMarshallingManager::FreeDataToHistory_Internal
              (&this->Solver->MarshallingManager,this->PushData);
    this->PushData = (FPushPhysicsData *)0x0;
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar26) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
        local_e8.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
        local_e8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_108);
        local_e8.StatData.Pad[4] = '\0';
        local_e8.StatData.Pad[5] = '\0';
        local_e8.StatData.Pad[6] = '\0';
        local_e8.StatData.Pad[7] = '\0';
        local_e8.StatData.Pad[0] = local_108.s.LowPart._0_1_;
        local_e8.StatData.Pad[1] = local_108.s.LowPart._1_1_;
        local_e8.StatData.Pad[2] = local_108.s.LowPart._2_1_;
        local_e8.StatData.Pad[3] = local_108.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar20,&local_e8);
        piVar1 = &pFVar20->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
  }
  FVar19 = StatPtr_STAT_ConditionalApplyRewind;
  if (StatPtr_STAT_ConditionalApplyRewind ==
      (FThreadSafeStaticStat<FStat_STAT_ConditionalApplyRewind>)0x0) {
    pFVar14 = ::FName::FName(&local_60,"STAT_ConditionalApplyRewind");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_ConditionalApplyRewind>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ConditionalApplyRewind,*pFVar14,
                        L"Conditional Apply Rewind","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar5 = *(FName *)FVar19;
  bVar12 = false;
  bVar7 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  FVar23 = FVar5.ComparisonIndex.Value;
  uVar22 = FVar5.Number;
  if ((FVar23.Value == 0) && (uVar22 == 0)) {
    (**(code **)(this->Solver->_padding_ + 0x18))();
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_188.ComparisonIndex.Value = FVar23.Value;
        local_188.Number = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_188,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                   ,0xba);
        bVar12 = true;
        bVar7 = true;
      }
    }
    bVar26 = FThreadStats::bPrimaryEnable != false;
    FVar24 = local_120;
    if (bVar26) {
      local_res10 = FVar23.Value;
      uStackX_14 = uVar22;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      FVar24 = FVar5;
    }
    (**(code **)(this->Solver->_padding_ + 0x18))();
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar26) && (FVar24 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
        local_d8.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
        local_d8.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_100);
        local_d8.StatData.Pad[4] = '\0';
        local_d8.StatData.Pad[5] = '\0';
        local_d8.StatData.Pad[6] = '\0';
        local_d8.StatData.Pad[7] = '\0';
        local_d8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
        local_d8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
        local_d8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
        local_d8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar20,&local_d8);
        piVar1 = &pFVar20->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
  }
  LOCK();
  pTVar2 = &this->Solver->NumPendingSolverAdvanceTasks;
  *pTVar2 = (TAtomic<int>)((int)*pTVar2 + -1);
  UNLOCK();
  puVar16 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_78 = &local_res10;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,puVar16);
  if ((*(int *)(pFVar17 + 2) < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PhysicsSimContext > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0xbd,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(int *)(pFVar17 + 2) = *(int *)(pFVar17 + 2) + -1;
  FCsvProfiler::EndStat("StepSolver",local_1a0);
  FCsvProfiler::EndExclusiveStat("Physics");
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_c8.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_f8);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_c8);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope(local_res18);
  FVar11 = CVDDC_Default.SharedReferenceCount;
  if (CVDDC_Default.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_160.OwnerID = (pFVar3->CVDContextData).OwnerID;
  local_160.CurrentDataChannel.Object = (pFVar3->CVDContextData).CurrentDataChannel.Object;
  local_160.Id = (pFVar3->CVDContextData).Id;
  local_160.Type = (pFVar3->CVDContextData).Type;
  local_160.Attributes = (pFVar3->CVDContextData).Attributes;
  local_160.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       (pFVar3->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController;
  if (local_160.CurrentDataChannel.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_160.CurrentDataChannel.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_160.CurrentDataChannel.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  FChaosVisualDebuggerTrace::TraceSolverFrameEnd(&local_160);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.CurrentDataChannel.SharedReferenceCount.ReferenceController);
  return;
}

// DoTask @ 143b1b710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPhysicsSolverAdvanceTask::DoTask
          (FPhysicsSolverAdvanceTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  uint *puVar1;
  FChaosVDThreadContext *pFVar2;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  FChaosVDThreadContext::PushContext(pFVar2,&this->CVDContext);
  AdvanceSolver(this);
  puVar1 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  FChaosVDThreadContext::PopContext(pFVar2);
  return;
}

// GetDesiredThread @ 143b20720

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl Chaos::FPhysicsSolverAdvanceTask::GetDesiredThread(void)

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
  if (PhysicsRunsOnGT != 0) {
    return GameThread;
  }
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


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 21

// FPBDIslandGroupManager @ 143b57400

FPBDIslandGroupManager * __thiscall
Chaos::Private::FPBDIslandGroupManager::FPBDIslandGroupManager
          (FPBDIslandGroupManager *this,FPBDIslandManager *param_1)

{
  int *piVar1;
  FPBDIslandManager *pFVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FTaskGraphInterface *pFVar8;
  FPBDConstraintGroupSolver *this_00;
  uint uVar9;
  int iVar10;
  FPBDConstraintGroupSolver *pFVar11;
  ulonglong uVar12;
  
  this->IslandManager = param_1;
  piVar1 = &(this->IslandGroups).ArrayMax;
  (this->IslandGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandGroups).ArrayNum = 0;
  *piVar1 = 0;
  this->NumActiveGroups = 0;
  this->NumWorkerThreads = 0;
  this->TargetNumBodiesPerTask = 0;
  this->TargetNumConstraintsPerTask = 0;
  (this->Iterations).NumPositionIterations = '\0';
  (this->Iterations).NumVelocityIterations = '\0';
  (this->Iterations).NumProjectionIterations = '\0';
  (this->GroupStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupStats).ArrayNum = 0;
  (this->GroupStats).ArrayMax = 0;
  bVar4 = FApp::ShouldUseThreadingForPerformance();
  iVar7 = MaxNumWorkers;
  iVar10 = 0;
  if ((bVar4) && (GSingleThreadedPhysics == 0)) {
    pFVar8 = FTaskGraphInterface::Get();
    iVar5 = (**(code **)((longlong)*pFVar8 + 0x20))(pFVar8);
    iVar10 = iVar7;
    if (iVar5 < iVar7) {
      iVar10 = iVar5;
    }
  }
  dVar3 = __real_bfe0000000000000;
  this->NumWorkerThreads = iVar10;
  uVar9 = 0x7fffffff;
  if (0 < CVars::GIslandGroupsMaxWorkers) {
    uVar9 = CVars::GIslandGroupsMaxWorkers;
  }
  uVar6 = -((int)ROUND(dVar3 - ((double)CVars::GIslandGroupsWorkerMultiplier +
                               (double)CVars::GIslandGroupsWorkerMultiplier) * (double)iVar10) >> 1)
  ;
  if ((int)uVar6 < (int)uVar9) {
    uVar9 = uVar6;
  }
  uVar6 = 1;
  if (1 < (int)uVar9) {
    uVar6 = uVar9;
  }
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (*piVar1 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar6,&(this->IslandGroups).AllocatorInstance,(this->IslandGroups).ArrayNum,
               piVar1);
  }
  if (0 < (int)uVar6) {
    uVar12 = (ulonglong)uVar6;
    do {
      pFVar2 = this->IslandManager;
      this_00 = ::operator_new(0x100);
      pFVar11 = (FPBDConstraintGroupSolver *)0x0;
      if (this_00 != (FPBDConstraintGroupSolver *)0x0) {
        FPBDConstraintGroupSolver::FPBDConstraintGroupSolver(this_00);
        this_00->_padding_ = (longlong)&___7FPBDIslandConstraintGroupSolver_Private_Chaos__6B_;
        this_00[1].SolverBodyContainer.Particles.ArrayNum = 0;
        this_00[1].SolverBodyContainer.Particles.ArrayMax = 0;
        this_00[1]._padding_ = (longlong)pFVar2;
        *(undefined8 *)&this_00[1].SolverBodyContainer.SolverBodies = 0;
        *(undefined4 *)&this_00[1].SolverBodyContainer.ParticleToIndexMap = 0;
        *(undefined4 *)&this_00[1].SolverBodyContainer.ParticleToIndexMap.field_0x4 = 5;
        *(undefined8 *)&this_00[1].SolverBodyContainer.ParticleToIndexMap.field_0x8 = 0;
        *(undefined8 *)&this_00[1].SolverBodyContainer.ParticleToIndexMap.field_0x10 = 0;
        pFVar11 = this_00;
      }
      iVar7 = (this->IslandGroups).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->IslandGroups).AllocatorInstance,piVar1);
      }
      (this->IslandGroups).ArrayNum = iVar7 + 1;
      *(FPBDConstraintGroupSolver **)
       ((this->IslandGroups).AllocatorInstance.Data + (longlong)iVar7 * 8) = pFVar11;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return this;
}

// ~FPBDIslandGroupManager @ 143b58210

void __thiscall
Chaos::Private::FPBDIslandGroupManager::~FPBDIslandGroupManager(FPBDIslandGroupManager *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GroupStats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<Chaos::Private::FPBDIslandConstraintGroupSolver,TDefaultDelete<Chaos::Private::FPBDIslandConstraintGroupSolver>_>,int>
            ((TUniquePtr<Chaos::Private::FPBDIslandConstraintGroupSolver,TDefaultDelete<Chaos::Private::FPBDIslandConstraintGroupSolver>_>
              *)(this->IslandGroups).AllocatorInstance.Data,(this->IslandGroups).ArrayNum);
  pFVar1 = (this->IslandGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 143b585e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Prepare> FVar7;
  double *pdVar8;
  FPBDIslandConstraintGroupSolver *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_48 [2];
  
  FVar12.Value = 0;
  FVar7 = StatPtr_STAT_Evolution_Gather_Prepare;
  if (StatPtr_STAT_Evolution_Gather_Prepare ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Prepare>)0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_Evolution_Gather_Prepare");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Prepare>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather_Prepare,*pFVar6,
                       L"FPBDRigidsEvolutionGBF::Gather::Prepare","STATGROUP_ChaosConstraintDetails"
                       ,"STATCAT_Advanced",L"ChaosConstraintDetails",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x142);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_143b58741;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_143b58741:
  pdVar8 = Chaos::Private::FPBDIslandGroupManager::GetThreadStatAccumulator
                     (*(FPBDIslandGroupManager **)this,param_1,PerIslandSolve_GatherTotalSerialized)
  ;
  QueryPerformanceCounter(&local_res8);
  dVar2 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  this_00 = Chaos::Private::FPBDIslandGroupManager::GetGroup
                      (*(FPBDIslandGroupManager **)this,param_1);
  Chaos::Private::FPBDConstraintGroupSolver::AddConstraintsAndBodies
            ((FPBDConstraintGroupSolver *)this_00);
  QueryPerformanceCounter(&local_res8);
  *pdVar8 = ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
             FGenericPlatformTime::SecondsPerCycle - dVar2) + *pdVar8;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_48[0].NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,local_48);
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
  return;
}

// operator() @ 143b58a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()
          (void *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  atomic<unsigned_int> *paVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> aVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FBaseGraphTask *this_00;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FPBDIslandConstraintGroupSolver *this_01;
  TStatId TVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Bodies> FVar16;
  FTaskBase *pFVar17;
  FTaskBase *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Constraints> FVar19;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Constraints> FVar20;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  FTaskBase *pFVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 auStackY_448 [32];
  EExtendedTaskPriority local_3e8;
  ETaskPriority local_3e7;
  EExtendedTaskPriority local_3e6;
  ETaskPriority local_3e5;
  EExtendedTaskPriority local_3e4;
  ETaskPriority local_3e3;
  EExtendedTaskPriority local_3e2;
  ETaskPriority local_3e1;
  undefined1 local_3e0 [16];
  TRefCountPtr<FBaseGraphTask> local_3d0;
  uint local_3c8;
  TRefCountPtr<FBaseGraphTask> local_3c0;
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  undefined1 local_3a8 [32];
  FCycleCounter local_388;
  FPBDIslandConstraintGroupSolver *local_378;
  FTaskBase *local_370;
  TRefCountPtr<FBaseGraphTask> *local_368;
  FTaskBase *local_360;
  code *local_358;
  longlong local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  longlong *local_330;
  code *local_328;
  longlong local_318;
  undefined8 uStack_310;
  FPipe *local_308;
  longlong *local_300;
  code *local_2f8;
  longlong local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  code *local_2c8;
  longlong local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  FSourceLocation local_298;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248 [2];
  code *local_238 [2];
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 *local_210;
  code *local_208 [2];
  longlong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  code *local_1d8 [2];
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  code *local_1a8 [5];
  undefined8 *local_180;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_178;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_148;
  int local_120;
  int local_11c;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_118;
  int local_f0;
  int local_ec;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_e8;
  int local_c0;
  int local_bc;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_3a8._24_8_ = this;
  local_368 = param_2;
  this_01 = Chaos::Private::FPBDIslandGroupManager::GetGroup
                      (*(FPBDIslandGroupManager **)this,*(int *)((longlong)this + 8));
  local_378 = this_01;
  TVar14 = FThreadSafeStaticStatInner<FStat_STAT_Evolution_Gather_Prepare,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Evolution_Gather_Prepare,1> *)
                      &StatPtr_STAT_Evolution_Gather_Prepare);
  local_298.Impl._Line = 0x1a4;
  local_298.Impl._Column = 8;
  local_298.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
  ;
  local_298.Impl._Function =
       "auto __cdecl Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks::<lambda_1>::operator ()(enum ENamedThreads::Type,const class TRefCountPtr<class FBaseGraphTask> &) const"
  ;
  local_388.StatId.ComparisonIndex.Value = 0;
  local_388.StatId.Number = 0;
  local_388.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_388,*(TStatIdData **)&(TVar14.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_298);
  Chaos::Private::FPBDConstraintGroupSolver::AddConstraintsAndBodies
            ((FPBDConstraintGroupSolver *)this_01);
  if ((local_388.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_388.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_388.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_388.StatId,CycleScopeEnd);
  }
  iVar26 = (int)this_01->_padding_;
  local_388.EmittedEvent = '\0';
  iVar24 = *(int *)(*(longlong *)this + 0x20);
  iVar11 = iVar24 / 2;
  if (iVar26 < 0) {
    iVar11 = (iVar26 - iVar11) + 1;
  }
  else {
    iVar11 = iVar11 + iVar26;
  }
  uVar29 = (uint)this_01->_padding_;
  uVar12 = iVar11 / iVar24;
  iVar24 = *(int *)(*(longlong *)this + 0x24);
  if ((int)uVar12 < 1) {
    uVar12 = 1;
  }
  uVar27 = (longlong)(int)(iVar26 + -1 + uVar12) / (longlong)(int)uVar12;
  local_3c8 = (uint)uVar27;
  uVar27 = uVar27 & 0xffffffff;
  iVar11 = iVar24 / 2;
  if ((int)uVar29 < 0) {
    iVar11 = (uVar29 - iVar11) + 1;
  }
  else {
    iVar11 = iVar11 + uVar29;
  }
  local_88.ArrayMax = 4;
  uVar13 = iVar11 / iVar24;
  if ((int)uVar13 < 1) {
    uVar13 = 1;
  }
  iVar24 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  uVar30 = (longlong)(int)((uVar29 - 1) + uVar13) / (longlong)(int)uVar13;
  local_88.ArrayNum = 0;
  local_3e0._12_4_ = (undefined4)uVar30;
  uVar30 = uVar30 & 0xffffffff;
  local_3e0._8_4_ = uVar29;
  local_3a8._8_4_ = uVar12;
  local_3a8._12_4_ = uVar13;
  local_3a8._16_4_ = iVar26;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (4 < (int)uVar12) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,uVar12,&local_88.AllocatorInstance,0,&local_88.ArrayMax);
    uVar27 = (ulonglong)local_3c8;
  }
  uVar5 = local_3a8._24_8_;
  if (0 < iVar26) {
    do {
      iVar28 = iVar24 + (int)uVar27;
      iVar11 = iVar26;
      if (iVar28 < iVar26) {
        iVar11 = iVar28;
      }
      FVar16 = StatPtr_STAT_Evolution_Gather_Bodies;
      if (StatPtr_STAT_Evolution_Gather_Bodies ==
          (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Bodies>)0x0) {
        pFVar15 = ::FName::FName(&local_260,"STAT_Evolution_Gather_Bodies");
        FVar16 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Bodies>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather_Bodies,
                            *pFVar15,L"FPBDRigidsEvolutionGBF::Gather::Bodies",
                            "STATGROUP_ChaosConstraintDetails","STATCAT_Advanced",
                            L"ChaosConstraintDetails",true,true,ST_int64,true,false,MCR_Invalid);
      }
      uVar4 = *(undefined8 *)(uVar5 + 0x10);
      local_328 = (code *)0x0;
      local_300 = (longlong *)0x0;
      local_300 = FMemory::Malloc(0x20,8);
      *local_300 = (longlong)
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`6'::<lambda_1>,1,1>
                    ::_vftable_;
      local_300[1] = (longlong)local_378;
      *(int *)(local_300 + 2) = iVar24;
      *(int *)((longlong)local_300 + 0x14) = iVar11;
      local_300[3] = uVar4;
      if (local_300 + 1 != (undefined8 *)0x0) {
        local_328 = UE::Core::Private::Function::
                    TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l6::<lambda_1>,void>
                    ::Call;
      }
      pFVar17 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
      if (pFVar17 == (FTaskBase *)0x0) {
        pFVar17 = (FTaskBase *)0x0;
      }
      else {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)pFVar17,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        pFVar17->_padding_ =
             (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
      }
      pFVar17[1]._padding_ = (longlong)FVar16;
      pFVar17[1]._padding_ = (longlong)local_328;
      *(longlong **)&pFVar17[1].StateChangeEvent = local_300;
      local_300 = (longlong *)0x0;
      pFVar17[1]._padding_ = local_318;
      pFVar17[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_310;
      pFVar17[1].NumLocks = (atomic<unsigned_int>)uStack_310._4_4_;
      pFVar17[1].Pipe = local_308;
      if (pFVar17[1]._padding_ != 0) {
        local_328 = (code *)0x0;
      }
      pFVar17[1].ExecutingThreadId = (atomic<unsigned_int>)0xff;
      UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,&local_3e7,&local_3e8);
      UE::Tasks::Private::FTaskBase::Init(pFVar17,L"GraphTask",local_3e7,local_3e8,None);
      LOCK();
      pFVar17->RefCount = (atomic<unsigned_int>)((int)pFVar17->RefCount + 1);
      UNLOCK();
      local_3c0.Reference = (FBaseGraphTask *)pFVar17;
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar17,0x130);
      if (local_328 != (code *)0x0) {
        plVar23 = &local_318;
        if (local_300 != (longlong *)0x0) {
          plVar23 = local_300;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar21 = local_88.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar21 <= &local_3c0) {
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_88.AllocatorInstance.SecondaryData;
        }
        if ((&local_3c0 <
             (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + (longlong)local_88.ArrayMax * 8))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (local_88.ArrayNum == local_88.ArrayMax) {
        local_88.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,&local_88.AllocatorInstance,&local_88.ArrayMax);
      }
      lVar22 = (longlong)local_88.ArrayNum;
      FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar21 = local_88.AllocatorInstance.SecondaryData;
      }
      local_88.ArrayNum = local_88.ArrayNum + 1;
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
           (FBaseGraphTask *)0x0;
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
           local_3c0.Reference;
      if ((FTaskBase *)local_3c0.Reference != (FTaskBase *)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)&(local_3c0.Reference)->field_0x30 =
             (atomic<unsigned_int>)
             ((int)*(atomic<unsigned_int> *)&(local_3c0.Reference)->field_0x30 + 1);
        UNLOCK();
        if ((FTaskBase *)local_3c0.Reference != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned_int> *)&(local_3c0.Reference)->field_0x30;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar3 == (atomic<unsigned_int>)0x1) &&
             ((FTaskBase *)local_3c0.Reference != (FTaskBase *)0x0)) {
            (*(code *)**(undefined8 **)local_3c0.Reference)(local_3c0.Reference,1);
          }
        }
      }
      uVar27 = (ulonglong)local_3c8;
      iVar24 = iVar28;
    } while (iVar28 < iVar26);
    uVar30 = (ulonglong)(uint)local_3e0._12_4_;
    uVar29 = local_3e0._8_4_;
    uVar13 = local_3a8._12_4_;
    uVar12 = local_3a8._8_4_;
  }
  pFVar25 = (FTaskBase *)0x0;
  pFVar18 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
  pFVar17 = pFVar25;
  if (pFVar18 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar18,&local_88);
    pFVar18->_padding_ = (longlong)&___7__TGraphTask_VFNullGraphTask____6B_;
    pFVar17 = pFVar18;
  }
  pFVar17[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
  *(undefined4 *)&pFVar17[1]._padding_ = 0xff;
  UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,&local_3e5,&local_3e6);
  UE::Tasks::Private::FTaskBase::Init(pFVar17,L"GraphTask",local_3e5,local_3e6,None);
  if (pFVar17 != (FTaskBase *)0x0) {
    LOCK();
    pFVar17->RefCount = (atomic<unsigned_int>)((int)pFVar17->RefCount + 1);
    UNLOCK();
  }
  local_3d0.Reference = (FBaseGraphTask *)pFVar17;
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar17,0xe8);
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 4;
  if (-1 < (int)uVar13) {
    if (4 < (int)uVar13) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,uVar13,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
    }
    uVar9 = local_3e0._12_4_;
    uVar8 = local_3e0._8_4_;
    if (0 < (int)uVar29) {
      do {
        uVar12 = (int)pFVar25 + uVar9;
        uVar29 = uVar8;
        if ((int)uVar12 < (int)uVar8) {
          uVar29 = uVar12;
        }
        FVar19 = StatPtr_STAT_Evolution_Gather_Constraints;
        if (StatPtr_STAT_Evolution_Gather_Constraints ==
            (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Constraints>)0x0) {
          pFVar15 = ::FName::FName(&local_258,"STAT_Evolution_Gather_Constraints");
          FVar19 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Constraints>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Evolution_Gather_Constraints,*pFVar15,
                              L"FPBDRigidsEvolutionGBF::Gather::Constraints",
                              "STATGROUP_ChaosConstraintDetails","STATCAT_Advanced",
                              L"ChaosConstraintDetails",true,true,ST_int64,true,false,MCR_Invalid);
        }
        uVar4 = *(undefined8 *)local_3a8._24_8_;
        uVar5 = *(undefined8 *)(local_3a8._24_8_ + 0x10);
        local_2f8 = (code *)0x0;
        local_2d0 = (longlong *)0x0;
        local_2d0 = FMemory::Malloc(0x28,8);
        *local_2d0 = (longlong)
                     &UE::Core::Private::Function::
                      TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`9'::<lambda_2>,1,1>
                      ::_vftable_;
        local_2d0[1] = uVar4;
        local_2d0[2] = (longlong)local_378;
        *(int *)(local_2d0 + 3) = (int)pFVar25;
        *(uint *)((longlong)local_2d0 + 0x1c) = uVar29;
        local_2d0[4] = uVar5;
        if (local_2d0 + 1 != (undefined8 *)0x0) {
          local_2f8 = UE::Core::Private::Function::
                      TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l9::<lambda_2>,void>
                      ::Call;
        }
        local_11c = 4;
        local_148.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_120 = 0;
        if (((FTaskBase *)local_3d0.Reference == (FTaskBase *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InPrerequisite.GetReference()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                ,0x47d,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_148;
        if (local_148.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_148.SecondaryData;
        }
        if ((ulonglong)FVar21 <= &local_3d0) {
          FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_148;
          if (local_148.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar21 = local_148.SecondaryData;
          }
          if ((&local_3d0 <
               (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + (longlong)local_11c * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_120 == local_11c) {
          local_120 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                (0x808,&local_148,&local_11c);
        }
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_148;
        if (local_148.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_148.SecondaryData;
        }
        lVar22 = (longlong)local_120;
        local_120 = local_120 + 1;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             local_3d0.Reference;
        if ((FTaskBase *)local_3d0.Reference != (FTaskBase *)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)&(local_3d0.Reference)->field_0x30 =
               (atomic<unsigned_int>)
               ((int)*(atomic<unsigned_int> *)&(local_3d0.Reference)->field_0x30 + 1);
          UNLOCK();
        }
        local_238[0] = local_2f8;
        local_210 = local_2d0;
        local_2d0 = (longlong *)0x0;
        local_228 = local_2e8;
        uStack_220 = uStack_2e0;
        local_218 = local_2d8;
        if (local_2f8 != (code *)0x0) {
          local_2f8 = (code *)0x0;
        }
        FFunctionGraphTask::CreateAndDispatchWhenReady
                  ((TUniqueFunction<void___cdecl(void)> *)local_3b8,(TStatIdData *)local_238,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)FVar19,(Type)&local_148);
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_148;
        if (local_148.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_148.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar21,local_120);
        if (local_148.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_148.SecondaryData);
        }
        if (local_2f8 != (code *)0x0) {
          plVar23 = &local_2e8;
          if (local_2d0 != (longlong *)0x0) {
            plVar23 = local_2d0;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
        if (local_b8.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_b8.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar21 <= local_3b8) {
          FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
          if (local_b8.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar21 = local_b8.AllocatorInstance.SecondaryData;
          }
          if (((TRefCountPtr<FBaseGraphTask> *)local_3b8 <
               (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + (longlong)local_b8.ArrayMax * 8))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_b8.ArrayNum == local_b8.ArrayMax) {
          local_b8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
        }
        lVar22 = (longlong)local_b8.ArrayNum;
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
        if (local_b8.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_b8.AllocatorInstance.SecondaryData;
        }
        local_b8.ArrayNum = local_b8.ArrayNum + 1;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)local_3b8;
        if (local_3b8 != (undefined1  [8])0x0) {
          LOCK();
          *(int *)((longlong)local_3b8 + 0x30) = *(int *)((longlong)local_3b8 + 0x30) + 1;
          UNLOCK();
          if (local_3b8 != (undefined1  [8])0x0) {
            LOCK();
            puVar2 = (undefined1 *)((longlong)local_3b8 + 0x30);
            iVar26 = *(int *)puVar2;
            *(int *)puVar2 = *(int *)puVar2 + -1;
            UNLOCK();
            if ((iVar26 == 1) && (local_3b8 != (undefined1  [8])0x0)) {
              (*(code *)**(undefined8 **)local_3b8)(local_3b8,1);
            }
          }
        }
        pFVar25 = (FTaskBase *)(ulonglong)uVar12;
      } while ((int)uVar12 < (int)uVar8);
      uVar30 = (ulonglong)(uint)local_3e0._12_4_;
      uVar29 = local_3e0._8_4_;
      uVar12 = local_3a8._8_4_;
      uVar13 = local_3a8._12_4_;
    }
    pFVar25 = (FTaskBase *)0x0;
    pFVar18 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
    pFVar17 = pFVar25;
    if (pFVar18 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar18,&local_b8);
      pFVar18->_padding_ = (longlong)&___7__TGraphTask_VFNullGraphTask____6B_;
      pFVar17 = pFVar18;
    }
    pFVar17[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    *(undefined4 *)&pFVar17[1]._padding_ = 0xff;
    UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,&local_3e3,&local_3e4);
    UE::Tasks::Private::FTaskBase::Init(pFVar17,L"GraphTask",local_3e3,local_3e4,None);
    if (pFVar17 != (FTaskBase *)0x0) {
      LOCK();
      pFVar17->RefCount = (atomic<unsigned_int>)((int)pFVar17->RefCount + 1);
      UNLOCK();
    }
    local_370 = pFVar17;
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar17,0xe8);
    local_1a8[0] = (code *)0x0;
    local_278 = *(undefined8 *)local_3a8._24_8_;
    uVar5 = *(undefined8 *)(local_3a8._24_8_ + 0x10);
    uStack_270 = *(undefined4 *)(local_3a8._24_8_ + 8);
    local_180 = FMemory::Malloc(0x20,8);
    *local_180 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`2'::<lambda_3>,1,1>
                  ::_vftable_;
    local_180[1] = local_278;
    local_180[2] = CONCAT44(uStack_26c,uStack_270);
    local_180[3] = uVar5;
    if (local_180 + 1 != (undefined8 *)0x0) {
      local_1a8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l2::<lambda_3>,void>
                     ::Call;
    }
    local_268 = uVar5;
    FFunctionGraphTask::CreateAndDispatchWhenReady
              ((TUniqueFunction<void___cdecl(void)> *)local_3e0,(TStatIdData *)local_1a8,
               (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)&local_370);
    uVar12 = uVar12 + uVar13;
    local_178.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 4;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if (4 < (int)uVar12) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,uVar12,&local_178.AllocatorInstance,0,&local_178.ArrayMax);
    }
    uVar5 = local_3a8._24_8_;
    if (0 < (int)uVar29) {
      do {
        uVar12 = (int)uVar30 + (int)pFVar25;
        if ((int)uVar12 < (int)uVar29) {
          uVar29 = uVar12;
        }
        FVar20 = StatPtr_STAT_Evolution_Scatter_Constraints;
        if (StatPtr_STAT_Evolution_Scatter_Constraints ==
            (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Constraints>)0x0) {
          pFVar15 = ::FName::FName(&local_250,"STAT_Evolution_Scatter_Constraints");
          FVar20 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Constraints>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Evolution_Scatter_Constraints,*pFVar15,
                              L"FPBDRigidsEvolutionGBF::Scatter::Constraints",
                              "STATGROUP_ChaosConstraintDetails","STATCAT_Advanced",
                              L"ChaosConstraintDetails",true,true,ST_int64,true,false,MCR_Invalid);
        }
        uVar6 = *(undefined8 *)uVar5;
        uVar4 = *(undefined8 *)(uVar5 + 0x10);
        local_358 = (code *)0x0;
        local_330 = (longlong *)0x0;
        local_330 = FMemory::Malloc(0x28,8);
        *local_330 = (longlong)
                     &UE::Core::Private::Function::
                      TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`12'::<lambda_4>,1,1>
                      ::_vftable_;
        local_330[1] = uVar6;
        local_330[2] = (longlong)local_378;
        *(int *)(local_330 + 3) = (int)pFVar25;
        *(uint *)((longlong)local_330 + 0x1c) = uVar29;
        local_330[4] = uVar4;
        if (local_330 + 1 != (undefined8 *)0x0) {
          local_358 = UE::Core::Private::Function::
                      TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l12::<lambda_4>,void>
                      ::Call;
        }
        local_ec = 4;
        local_118.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_f0 = 0;
        if (((FBaseGraphTask *)local_3e0._0_8_ == (FBaseGraphTask *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InPrerequisite.GetReference()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                ,0x47d,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_118;
        if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_118.SecondaryData;
        }
        if ((ulonglong)FVar21 <= local_3e0) {
          FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_118;
          if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar21 = local_118.SecondaryData;
          }
          if (((TRefCountPtr<FBaseGraphTask> *)local_3e0 <
               (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + (longlong)local_ec * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_f0 == local_ec) {
          local_f0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (0x808,&local_118,&local_ec);
        }
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_118;
        if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_118.SecondaryData;
        }
        lVar22 = (longlong)local_f0;
        local_f0 = local_f0 + 1;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)local_3e0._0_8_;
        if ((FBaseGraphTask *)local_3e0._0_8_ != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)(local_3e0._0_8_ + 0x30) = *(int *)(local_3e0._0_8_ + 0x30) + 1;
          UNLOCK();
        }
        local_208[0] = local_358;
        local_1e0 = local_330;
        local_330 = (longlong *)0x0;
        local_1f8 = local_348;
        uStack_1f0 = uStack_340;
        local_1e8 = local_338;
        if (local_358 != (code *)0x0) {
          local_358 = (code *)0x0;
        }
        FFunctionGraphTask::CreateAndDispatchWhenReady
                  ((TUniqueFunction<void___cdecl(void)> *)local_3b0,(TStatIdData *)local_208,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)FVar20,(Type)&local_118);
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_118;
        if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_118.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar21,local_f0);
        if (local_118.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_118.SecondaryData);
        }
        if (local_358 != (code *)0x0) {
          plVar23 = &local_348;
          if (local_330 != (longlong *)0x0) {
            plVar23 = local_330;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_178;
        if (local_178.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_178.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar21 <= local_3b0) {
          FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_178;
          if (local_178.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar21 = local_178.AllocatorInstance.SecondaryData;
          }
          if (((TRefCountPtr<FBaseGraphTask> *)local_3b0 <
               (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + (longlong)local_178.ArrayMax * 8)
              ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_178.ArrayNum == local_178.ArrayMax) {
          local_178.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&local_178.AllocatorInstance,&local_178.ArrayMax);
        }
        lVar22 = (longlong)local_178.ArrayNum;
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_178;
        if (local_178.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_178.AllocatorInstance.SecondaryData;
        }
        local_178.ArrayNum = local_178.ArrayNum + 1;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)local_3b0;
        if (local_3b0 != (undefined1  [8])0x0) {
          LOCK();
          *(int *)((longlong)local_3b0 + 0x30) = *(int *)((longlong)local_3b0 + 0x30) + 1;
          UNLOCK();
          if (local_3b0 != (undefined1  [8])0x0) {
            LOCK();
            puVar2 = (undefined1 *)((longlong)local_3b0 + 0x30);
            iVar26 = *(int *)puVar2;
            *(int *)puVar2 = *(int *)puVar2 + -1;
            UNLOCK();
            if ((iVar26 == 1) && (local_3b0 != (undefined1  [8])0x0)) {
              (*(code *)**(undefined8 **)local_3b0)(local_3b0,1);
            }
          }
        }
        pFVar25 = (FTaskBase *)(ulonglong)uVar12;
        uVar30 = (ulonglong)(uint)local_3e0._12_4_;
        uVar29 = local_3e0._8_4_;
      } while ((int)uVar12 < (int)local_3e0._8_4_);
    }
    uVar8 = local_3a8._16_4_;
    iVar26 = 0;
    if (0 < (int)local_3a8._16_4_) {
      do {
        iVar11 = local_3c8 + iVar26;
        iVar24 = uVar8;
        if (iVar11 < (int)uVar8) {
          iVar24 = iVar11;
        }
        FVar16 = StatPtr_STAT_Evolution_Gather_Bodies;
        if (StatPtr_STAT_Evolution_Gather_Bodies ==
            (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Bodies>)0x0) {
          pFVar15 = ::FName::FName(local_248,"STAT_Evolution_Gather_Bodies");
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Bodies>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather_Bodies,
                              *pFVar15,L"FPBDRigidsEvolutionGBF::Gather::Bodies",
                              "STATGROUP_ChaosConstraintDetails","STATCAT_Advanced",
                              L"ChaosConstraintDetails",true,true,ST_int64,true,false,MCR_Invalid);
        }
        uVar6 = *(undefined8 *)uVar5;
        uVar4 = *(undefined8 *)(uVar5 + 0x10);
        local_2c8 = (code *)0x0;
        local_2a0 = (longlong *)0x0;
        local_2a0 = FMemory::Malloc(0x28,8);
        *local_2a0 = (longlong)
                     &UE::Core::Private::Function::
                      TFunction_OwnedObject<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>::operator()'::`15'::<lambda_5>,1,1>
                      ::_vftable_;
        local_2a0[1] = uVar6;
        local_2a0[2] = (longlong)local_378;
        *(int *)(local_2a0 + 3) = iVar26;
        *(int *)((longlong)local_2a0 + 0x1c) = iVar24;
        local_2a0[4] = uVar4;
        if (local_2a0 + 1 != (undefined8 *)0x0) {
          local_2c8 = UE::Core::Private::Function::
                      TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l15::<lambda_5>,void>
                      ::Call;
        }
        local_bc = 4;
        local_e8.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_c0 = 0;
        if (((FBaseGraphTask *)local_3e0._0_8_ == (FBaseGraphTask *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InPrerequisite.GetReference()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                ,0x47d,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_e8;
        if (local_e8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_e8.SecondaryData;
        }
        if ((ulonglong)FVar21 <= local_3e0) {
          FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_e8;
          if (local_e8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar21 = local_e8.SecondaryData;
          }
          if (((TRefCountPtr<FBaseGraphTask> *)local_3e0 <
               (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + (longlong)local_bc * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_c0 == local_bc) {
          local_c0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (0x808,&local_e8,&local_bc);
        }
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_e8;
        if (local_e8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_e8.SecondaryData;
        }
        lVar22 = (longlong)local_c0;
        local_c0 = local_c0 + 1;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)local_3e0._0_8_;
        if ((FBaseGraphTask *)local_3e0._0_8_ != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)(local_3e0._0_8_ + 0x30) = *(int *)(local_3e0._0_8_ + 0x30) + 1;
          UNLOCK();
        }
        local_1d8[0] = local_2c8;
        local_1b0 = local_2a0;
        local_2a0 = (longlong *)0x0;
        local_1c8 = local_2b8;
        uStack_1c0 = uStack_2b0;
        local_1b8 = local_2a8;
        if (local_2c8 != (code *)0x0) {
          local_2c8 = (code *)0x0;
        }
        FFunctionGraphTask::CreateAndDispatchWhenReady
                  ((TUniqueFunction<void___cdecl(void)> *)local_3a8,(TStatIdData *)local_1d8,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)FVar16,(Type)&local_e8);
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_e8;
        if (local_e8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_e8.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar21,local_c0);
        if (local_e8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_e8.SecondaryData);
        }
        if (local_2c8 != (code *)0x0) {
          plVar23 = &local_2b8;
          if (local_2a0 != (longlong *)0x0) {
            plVar23 = local_2a0;
          }
          (**(code **)(*plVar23 + 0x10))();
        }
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_178;
        if (local_178.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_178.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar21 <= local_3a8) {
          FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_178;
          if (local_178.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar21 = local_178.AllocatorInstance.SecondaryData;
          }
          if (((TRefCountPtr<FBaseGraphTask> *)local_3a8 <
               (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + (longlong)local_178.ArrayMax * 8)
              ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_178.ArrayNum == local_178.ArrayMax) {
          local_178.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&local_178.AllocatorInstance,&local_178.ArrayMax);
        }
        lVar22 = (longlong)local_178.ArrayNum;
        FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_178;
        if (local_178.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar21 = local_178.AllocatorInstance.SecondaryData;
        }
        local_178.ArrayNum = local_178.ArrayNum + 1;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar21 + lVar22 * 8))->Reference =
             (FBaseGraphTask *)local_3a8._0_8_;
        if ((FBaseGraphTask *)local_3a8._0_8_ != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)(local_3a8._0_8_ + 0x30) = *(int *)(local_3a8._0_8_ + 0x30) + 1;
          UNLOCK();
          if ((FBaseGraphTask *)local_3a8._0_8_ != (FBaseGraphTask *)0x0) {
            LOCK();
            puVar2 = (undefined1 *)(local_3a8._0_8_ + 0x30);
            iVar26 = *(int *)puVar2;
            *(int *)puVar2 = *(int *)puVar2 + -1;
            UNLOCK();
            if ((iVar26 == 1) && ((FBaseGraphTask *)local_3a8._0_8_ != (FBaseGraphTask *)0x0)) {
              (*(code *)**(undefined8 **)local_3a8._0_8_)(local_3a8._0_8_,1);
            }
          }
        }
        iVar26 = iVar11;
      } while (iVar11 < (int)uVar8);
    }
    pFVar17 = (FTaskBase *)0x0;
    pFVar18 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
    if (pFVar18 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar18,&local_178);
      pFVar18->_padding_ = (longlong)&___7__TGraphTask_VFNullGraphTask____6B_;
      pFVar17 = pFVar18;
    }
    pFVar17[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
    *(undefined4 *)&pFVar17[1]._padding_ = 0xff;
    UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,&local_3e1,&local_3e2);
    UE::Tasks::Private::FTaskBase::Init(pFVar17,L"GraphTask",local_3e1,local_3e2,None);
    local_360 = pFVar17;
    if (pFVar17 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0xe8);
      FBaseGraphTask::DontCompleteUntil(local_368->Reference,(FBaseGraphTask *)&local_360);
    }
    else {
      LOCK();
      pFVar17->RefCount = (atomic<unsigned_int>)((int)pFVar17->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(pFVar17,0xe8);
      this_00 = local_368->Reference;
      LOCK();
      pFVar17->RefCount = (atomic<unsigned_int>)((int)pFVar17->RefCount + 1);
      UNLOCK();
      FBaseGraphTask::DontCompleteUntil(this_00,(FBaseGraphTask *)&local_360);
      LOCK();
      paVar1 = &pFVar17->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar17->_padding_)(pFVar17,1);
      }
    }
    FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_178;
    if (local_178.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar21 = local_178.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar21,local_178.ArrayNum);
    if (local_178.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_178.AllocatorInstance.SecondaryData);
    }
    if ((FBaseGraphTask *)local_3e0._0_8_ != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)(local_3e0._0_8_ + 0x30);
      iVar26 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar26 == 1) && ((FBaseGraphTask *)local_3e0._0_8_ != (FBaseGraphTask *)0x0)) {
        (*(code *)**(undefined8 **)local_3e0._0_8_)(local_3e0._0_8_,1);
      }
    }
    if (local_370 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &local_370->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar3 == (atomic<unsigned_int>)0x1) && (local_370 != (FTaskBase *)0x0)) {
        (**(code **)local_370->_padding_)(local_370,1);
      }
    }
    FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar21 = local_b8.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar21,local_b8.ArrayNum);
    if (local_b8.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
    }
    if ((FTaskBase *)local_3d0.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned_int> *)&(local_3d0.Reference)->field_0x30;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if ((aVar3 == (atomic<unsigned_int>)0x1) &&
         ((FTaskBase *)local_3d0.Reference != (FTaskBase *)0x0)) {
        (*(code *)**(undefined8 **)local_3d0.Reference)(local_3d0.Reference,1);
      }
    }
    FVar21 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
    if (local_88.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar21 = local_88.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar21,local_88.ArrayNum);
    if (local_88.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
}

// operator() @ 143b5a4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_2>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Bodies> FVar11;
  double *pdVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  longlong lVar16;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58 [2];
  
  lVar16 = (longlong)param_1;
  FVar11 = StatPtr_STAT_Evolution_Gather_Bodies;
  if (StatPtr_STAT_Evolution_Gather_Bodies ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Bodies>)0x0) {
    pFVar10 = ::FName::FName(&local_70,"STAT_Evolution_Gather_Bodies");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Bodies>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather_Bodies,*pFVar10,
                        L"FPBDRigidsEvolutionGBF::Gather::Bodies","STATGROUP_ChaosConstraintDetails"
                        ,"STATCAT_Advanced",L"ChaosConstraintDetails",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar15 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar13.Value;
        local_res8.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x151);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_143b5a64a;
    }
  }
  bVar7 = false;
  FVar14 = local_68;
LAB_143b5a64a:
  pdVar12 = Chaos::Private::FPBDIslandGroupManager::GetThreadStatAccumulator
                      (*(FPBDIslandGroupManager **)this,param_1,PerIslandSolve_GatherTotalSerialized
                      );
  QueryPerformanceCounter(&local_res18);
  plVar2 = *(longlong **)((longlong)this + 8);
  dVar5 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  uVar15 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *plVar2;
  Chaos::Private::FPBDConstraintGroupSolver::GatherBodies
            (*(FPBDConstraintGroupSolver **)(lVar3 + 8 + lVar16 * 0x10),
             *(double *)((longlong)this + 0x10),*(int *)(lVar3 + lVar16 * 0x10),
             *(int *)(lVar3 + 4 + lVar16 * 0x10));
  QueryPerformanceCounter(&local_res20);
  *pdVar12 = ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) +
             *pdVar12;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_58[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_58);
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

// operator() @ 143b5ab00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_3>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Constraints> FVar11;
  double *pdVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  longlong lVar16;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58 [2];
  
  lVar16 = (longlong)param_1;
  FVar11 = StatPtr_STAT_Evolution_Gather_Constraints;
  if (StatPtr_STAT_Evolution_Gather_Constraints ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Constraints>)0x0) {
    pFVar10 = ::FName::FName(&local_70,"STAT_Evolution_Gather_Constraints");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather_Constraints>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather_Constraints,
                        *pFVar10,L"FPBDRigidsEvolutionGBF::Gather::Constraints",
                        "STATGROUP_ChaosConstraintDetails","STATCAT_Advanced",
                        L"ChaosConstraintDetails",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar15 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar13.Value;
        local_res8.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x15c);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_143b5ac5a;
    }
  }
  bVar7 = false;
  FVar14 = local_68;
LAB_143b5ac5a:
  pdVar12 = Chaos::Private::FPBDIslandGroupManager::GetThreadStatAccumulator
                      (*(FPBDIslandGroupManager **)this,param_1,PerIslandSolve_GatherTotalSerialized
                      );
  QueryPerformanceCounter(&local_res18);
  plVar2 = *(longlong **)((longlong)this + 8);
  dVar5 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  uVar15 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *plVar2;
  Chaos::Private::FPBDConstraintGroupSolver::GatherConstraints
            (*(FPBDConstraintGroupSolver **)(lVar3 + 8 + lVar16 * 0x10),
             *(double *)((longlong)this + 0x10),*(int *)(lVar3 + lVar16 * 0x10),
             *(int *)(lVar3 + 4 + lVar16 * 0x10));
  QueryPerformanceCounter(&local_res20);
  *pdVar12 = ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) +
             *pdVar12;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_58[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_58);
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

// operator() @ 143b5b480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l7::<lambda_5>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Constraints> FVar11;
  double *pdVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  longlong lVar16;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58 [2];
  
  lVar16 = (longlong)param_1;
  FVar11 = StatPtr_STAT_Evolution_Scatter_Constraints;
  if (StatPtr_STAT_Evolution_Scatter_Constraints ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Constraints>)0x0) {
    pFVar10 = ::FName::FName(&local_70,"STAT_Evolution_Scatter_Constraints");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Constraints>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Scatter_Constraints,
                        *pFVar10,L"FPBDRigidsEvolutionGBF::Scatter::Constraints",
                        "STATGROUP_ChaosConstraintDetails","STATCAT_Advanced",
                        L"ChaosConstraintDetails",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar15 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar13.Value;
        local_res8.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x174);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_143b5b5da;
    }
  }
  bVar7 = false;
  FVar14 = local_68;
LAB_143b5b5da:
  pdVar12 = Chaos::Private::FPBDIslandGroupManager::GetThreadStatAccumulator
                      (*(FPBDIslandGroupManager **)this,param_1,
                       PerIslandSolve_ScatterTotalSerialized);
  QueryPerformanceCounter(&local_res18);
  plVar2 = *(longlong **)((longlong)this + 8);
  dVar5 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  uVar15 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *plVar2;
  Chaos::Private::FPBDConstraintGroupSolver::ScatterConstraints
            (*(FPBDConstraintGroupSolver **)(lVar3 + 8 + lVar16 * 0x10),
             *(double *)((longlong)this + 0x10),*(int *)(lVar3 + lVar16 * 0x10),
             *(int *)(lVar3 + 4 + lVar16 * 0x10));
  QueryPerformanceCounter(&local_res20);
  *pdVar12 = ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) +
             *pdVar12;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_58[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_58);
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

// operator() @ 143b5b830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l7::<lambda_6>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Bodies> FVar11;
  double *pdVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  longlong lVar16;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58 [2];
  
  lVar16 = (longlong)param_1;
  FVar11 = StatPtr_STAT_Evolution_Scatter_Bodies;
  if (StatPtr_STAT_Evolution_Scatter_Bodies ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Bodies>)0x0) {
    pFVar10 = ::FName::FName(&local_70,"STAT_Evolution_Scatter_Bodies");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter_Bodies>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Scatter_Bodies,*pFVar10
                        ,L"FPBDRigidsEvolutionGBF::Scatter::Bodies",
                        "STATGROUP_ChaosConstraintDetails","STATCAT_Advanced",
                        L"ChaosConstraintDetails",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar15 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar13.Value;
        local_res8.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x17f);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_143b5b98a;
    }
  }
  bVar7 = false;
  FVar14 = local_68;
LAB_143b5b98a:
  pdVar12 = Chaos::Private::FPBDIslandGroupManager::GetThreadStatAccumulator
                      (*(FPBDIslandGroupManager **)this,param_1,
                       PerIslandSolve_ScatterTotalSerialized);
  QueryPerformanceCounter(&local_res18);
  plVar2 = *(longlong **)((longlong)this + 8);
  dVar5 = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  uVar15 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *plVar2;
  Chaos::Private::FPBDConstraintGroupSolver::ScatterBodies
            (*(FPBDConstraintGroupSolver **)(lVar3 + 8 + lVar16 * 0x10),
             *(double *)((longlong)this + 0x10),*(int *)(lVar3 + lVar16 * 0x10),
             *(int *)(lVar3 + 4 + lVar16 * 0x10));
  QueryPerformanceCounter(&local_res20);
  *pdVar12 = ((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) +
             *pdVar12;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_58[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_58);
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

// AddConstraintContainer @ 143b5c950

void __thiscall
Chaos::Private::FPBDIslandGroupManager::AddConstraintContainer
          (FPBDIslandGroupManager *this,FPBDConstraintContainer *param_1,int param_2)

{
  int iVar1;
  FPBDConstraintGroupSolver *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
  *pTVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *local_res8;
  
  iVar1 = param_1->ContainerId;
  uVar6 = 0;
  if (0 < (this->IslandGroups).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->IslandGroups).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FPBDConstraintGroupSolver **)((this->IslandGroups).AllocatorInstance.Data + lVar7)
      ;
      pTVar5 = (TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
                *)(**(code **)(param_1->_padding_ + 0x50))(param_1,&local_res8,param_2);
      FPBDConstraintGroupSolver::SetConstraintSolver(this_00,iVar1,pTVar5);
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->IslandGroups).ArrayNum);
  }
  return;
}

// BuildGatherBatches @ 143b5ea40

void __thiscall
Chaos::Private::FPBDIslandGroupManager::BuildGatherBatches
          (FPBDIslandGroupManager *this,
          TArray<Chaos::Private::FPBDIslandGroupManager::FIslandGroupRange,TSizedDefaultAllocator<32>_>
          *param_1,TArray<Chaos::Private::FPBDIslandGroupManager::FIslandGroupRange,TSizedDefaultAllocator<32>_>
                   *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint local_res20;
  longlong local_58;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  uVar9 = (this->IslandGroups).ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  uVar9 = (this->IslandGroups).ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  local_res20 = 0;
  if (0 < this->NumActiveGroups) {
    local_58 = 0;
    do {
      uVar9 = 0;
      if ((int)local_res20 < (this->IslandGroups).ArrayNum) {
        uVar9 = ~local_res20 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)((this->IslandGroups).AllocatorInstance.Data + local_58);
      iVar3 = *(int *)(lVar4 + 0x98);
      if (-1 < iVar3) {
        iVar10 = (this->TargetNumConstraintsPerTask / 2 + iVar3) / this->TargetNumConstraintsPerTask
        ;
        if (iVar10 < 1) {
          iVar10 = 1;
        }
        iVar13 = 0;
        if (0 < iVar3) {
          do {
            iVar11 = param_2->ArrayNum;
            iVar2 = iVar13 + (iVar10 + -1 + iVar3) / iVar10;
            iVar7 = iVar3;
            if (iVar2 < iVar3) {
              iVar7 = iVar2;
            }
            if (iVar11 == param_2->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar11 + 1;
            lVar12 = (longlong)iVar11;
            pFVar5 = (param_2->AllocatorInstance).Data;
            *(int *)(pFVar5 + lVar12 * 0x10) = iVar13;
            *(int *)(pFVar5 + lVar12 * 0x10 + 4) = iVar7;
            *(longlong *)(pFVar5 + lVar12 * 0x10 + 8) = lVar4;
            iVar13 = iVar2;
          } while (iVar2 < iVar3);
        }
      }
      iVar3 = *(int *)(lVar4 + 0x18);
      if (-1 < iVar3) {
        iVar10 = (this->TargetNumBodiesPerTask / 2 + iVar3) / this->TargetNumBodiesPerTask;
        if (iVar10 < 1) {
          iVar10 = 1;
        }
        iVar13 = 0;
        if (0 < iVar3) {
          do {
            iVar11 = param_1->ArrayNum;
            iVar2 = iVar13 + (iVar10 + -1 + iVar3) / iVar10;
            iVar7 = iVar3;
            if (iVar2 < iVar3) {
              iVar7 = iVar2;
            }
            if (iVar11 == param_1->ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar11 + 1;
            lVar12 = (longlong)iVar11;
            pFVar5 = (param_1->AllocatorInstance).Data;
            *(int *)(pFVar5 + lVar12 * 0x10) = iVar13;
            *(int *)(pFVar5 + lVar12 * 0x10 + 4) = iVar7;
            *(longlong *)(pFVar5 + lVar12 * 0x10 + 8) = lVar4;
            iVar13 = iVar2;
          } while (iVar2 < iVar3);
        }
      }
      local_58 = local_58 + 8;
      local_res20 = local_res20 + 1;
    } while ((int)local_res20 < this->NumActiveGroups);
  }
  return;
}

// BuildGroups @ 143b5ed60

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Chaos::Private::FPBDIslandGroupManager::BuildGroups(FPBDIslandGroupManager *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FPBDIslandManager *pFVar9;
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  uint local_74;
  FPBDIsland *local_70;
  FScriptContainerElement *local_68;
  FPBDIsland *local_60;
  FScriptContainerElement *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  local_48._0_4_ = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  local_48 = 0;
  pFVar9 = this->IslandManager;
  if (0 < (pFVar9->Islands).Items.ArrayNum) {
    do {
      local_70 = TPoolBackedArray<Chaos::Private::FPBDIsland,Chaos::Private::TPoolBackedItemAdapter<Chaos::Private::FPBDIsland>_>
                 ::operator[](&pFVar9->Islands,iVar5);
      this_00 = FChaosSolversModule::GetModule();
      pIVar10 = FChaosSolversModule::GetSettingsProvider(this_00);
      cVar3 = (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
      if (cVar3 != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          FAutoConsoleVariableRef::FAutoConsoleVariableRef
                    (&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                      ::__l2::CVarDebugNetworkPhysicsPrediction,L"np2.DebugNetworkPhysicsPrediction"
                     ,&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                       ::__l2::DebugNetworkPhysicsPrediction,L"Debugs network physics prediction",0)
          ;
          atexit(`Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction'::__l2::
                 _dynamic_atexit_destructor_for__CVarDebugNetworkPhysicsPrediction__);
          _Init_thread_footer(&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        if (((`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
              ::__l2::DebugNetworkPhysicsPrediction != 0) && (param_1)) &&
           (4 < (byte)LogChaos._0_1_)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
      }
      if (((((local_70->Flags).Bits >> 6 & 1) == 0) && (0 < local_70->NumEdges)) &&
         ((!param_1 || (((local_70->Flags).Bits >> 9 & 1) != 0)))) {
        if (((local_50.Data <= (FScriptContainerElement *)&local_70) &&
            ((FScriptContainerElement *)&local_70 < local_50.Data + (longlong)local_48._4_4_ * 8))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar6 = (uint)local_48;
        if ((uint)local_48 == local_48._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_50,(int *)((longlong)&local_48 + 4));
        }
        local_48 = CONCAT44(local_48._4_4_,iVar6 + 1);
        *(FPBDIsland **)(local_50.Data + (longlong)iVar6 * 8) = local_70;
      }
      pFVar9 = this->IslandManager;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (pFVar9->Islands).Items.ArrayNum);
  }
  iVar5 = (uint)local_48;
  if (1 < (int)(uint)local_48) {
    AlgoImpl::
    IntroSortInternal<Chaos::Private::FPBDIsland_*,int,FIdentityFunctor,_Chaos::Private::FPBDIslandGroupManager::BuildGroups_::__l34::<lambda_1>_>
              ((FPBDIsland **)local_50.Data,(uint)local_48,local_res8[0],(<lambda_1>)local_res8[0]);
    iVar5 = (uint)local_48;
  }
  iVar6 = (this->IslandGroups).ArrayNum;
  iVar16 = 0;
  iVar21 = 0;
  pFVar1 = local_50.Data + (longlong)iVar5 * 8;
  FVar14.Data = local_50.Data;
  iVar18 = iVar5;
  while( true ) {
    if (iVar18 != iVar5) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      iVar18 = (uint)local_48;
    }
    if (FVar14.Data == pFVar1) break;
    iVar16 = iVar16 + ((*(FPBDIsland **)FVar14.Data)->Nodes).ArrayNum;
    iVar21 = iVar21 + (*(FPBDIsland **)FVar14.Data)->NumEdges;
    FVar14.Data = FVar14.Data + 8;
  }
  iVar18 = iVar21 / iVar6 + 1;
  this->TargetNumConstraintsPerTask = iVar18;
  this->TargetNumBodiesPerTask = iVar16 / iVar6 + 1;
  iVar5 = CVars::GIslandGroupsMinConstraintsPerWorker;
  if (CVars::GIslandGroupsMinConstraintsPerWorker < iVar18) {
    iVar5 = iVar18;
  }
  this->TargetNumConstraintsPerTask = iVar5;
  iVar6 = CVars::GIslandGroupsMinBodiesPerWorker;
  if (CVars::GIslandGroupsMinBodiesPerWorker < iVar5) {
    iVar6 = iVar5;
  }
  this->TargetNumBodiesPerTask = iVar6;
  pFVar15 = (this->IslandGroups).AllocatorInstance.Data;
  iVar5 = (this->IslandGroups).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->IslandGroups).ArrayNum != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<Chaos::Private::FPBDIslandConstraintGroupSolver,TDefaultDelete<Chaos::Private::FPBDIslandConstraintGroupSolver>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar1) break;
    FPBDConstraintGroupSolver::Reset(*(FPBDConstraintGroupSolver **)pFVar15);
    pFVar15 = pFVar15 + 8;
  }
  uVar11 = (ulonglong)(int)(uint)local_48;
  this->NumActiveGroups = 0;
  local_74 = (uint)local_48;
  local_58 = local_50.Data + uVar11 * 8;
  uVar12 = uVar11;
  FVar14.Data = local_50.Data;
  do {
    pFVar1 = local_58;
    local_68 = FVar14.Data;
    if ((int)uVar11 != (int)uVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<Chaos::Private::FPBDIsland_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar14.Data == pFVar1) {
      pFVar15 = (this->IslandGroups).AllocatorInstance.Data;
      iVar5 = (this->IslandGroups).ArrayNum;
      pFVar1 = pFVar15 + (longlong)iVar5 * 8;
      while( true ) {
        if ((this->IslandGroups).ArrayNum != iVar5) {
          `TCheckedPointerIterator<TUniquePtr<Chaos::Private::FPBDIslandConstraintGroupSolver,TDefaultDelete<Chaos::Private::FPBDIslandConstraintGroupSolver>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_78);
        }
        if (pFVar15 == pFVar1) break;
        (**(code **)(**(longlong **)pFVar15 + 8))(*(longlong **)pFVar15,&this->Iterations);
        pFVar15 = pFVar15 + 8;
      }
      iVar5 = this->NumActiveGroups;
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      return iVar5;
    }
    local_60 = *(FPBDIsland **)FVar14.Data;
    lVar17 = 0;
    uVar13 = 0;
    uVar8 = 0xffffffff;
    uVar7 = 0xffffffff;
    lVar19 = -1;
    iVar6 = 0x7fffffff;
    iVar5 = local_60->NumEdges;
    lVar20 = lVar19;
    if ((this->IslandGroups).ArrayNum < 1) {
LAB_143b5f0e5:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertGroupIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                         ,199,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    else {
      do {
        uVar7 = 0;
        if ((int)uVar13 < (this->IslandGroups).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar18 = *(int *)(*(longlong *)((this->IslandGroups).AllocatorInstance.Data + lVar17 * 8) +
                         0xc4);
        if (iVar18 < iVar6) {
          lVar20 = lVar17;
          iVar6 = iVar18;
          uVar8 = uVar13;
        }
        lVar19 = lVar17;
        uVar7 = uVar13;
        if (iVar18 + iVar5 < this->TargetNumConstraintsPerTask) break;
        uVar13 = uVar13 + 1;
        lVar17 = lVar17 + 1;
        lVar19 = lVar20;
        uVar7 = uVar8;
      } while ((int)uVar13 < (this->IslandGroups).ArrayNum);
      if (uVar7 == 0xffffffff) goto LAB_143b5f0e5;
    }
    uVar8 = 0;
    if ((int)uVar7 < (this->IslandGroups).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    FPBDIslandConstraintGroupSolver::AddIsland
              (*(FPBDIslandConstraintGroupSolver **)
                ((this->IslandGroups).AllocatorInstance.Data + lVar19 * 8),local_60);
    uVar12 = (ulonglong)local_74;
    iVar5 = uVar7 + 1;
    if ((int)(uVar7 + 1) < this->NumActiveGroups) {
      iVar5 = this->NumActiveGroups;
    }
    FVar14.Data = local_68 + 8;
    this->NumActiveGroups = iVar5;
    uVar11 = local_48 & 0xffffffff;
  } while( true );
}

// GetGroup @ 143b67840

FPBDIslandConstraintGroupSolver * __thiscall
Chaos::Private::FPBDIslandGroupManager::GetGroup(FPBDIslandGroupManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDIslandConstraintGroupSolver *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->IslandGroups).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDIslandConstraintGroupSolver *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FPBDIslandConstraintGroupSolver **)
          ((this->IslandGroups).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetThreadStatAccumulator @ 143b68920

double * __thiscall
Chaos::Private::FPBDIslandGroupManager::GetThreadStatAccumulator
          (FPBDIslandGroupManager *this,int param_1,EPerIslandStat param_2)

{
  TArray<Chaos::FIslandGroupStats,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  uint uVar9;
  
  if ((param_1 < 0) || ((this->GroupStats).ArrayNum <= param_1)) {
    pTVar1 = &this->GroupStats;
    iVar6 = (this->GroupStats).ArrayNum;
    piVar2 = &(this->GroupStats).ArrayNum;
    uVar8 = param_1 + 1;
    if (iVar6 < (int)uVar8) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x40,uVar8 - iVar6,&pTVar1->AllocatorInstance,piVar2,
                         &(this->GroupStats).ArrayMax);
      DefaultConstructItems<Chaos::FIslandGroupStats,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x40,uVar8 - iVar6);
    }
    else {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((int)uVar8 < iVar6) {
        uVar9 = iVar6 - uVar8;
        if (((int)(uVar9 | uVar8) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pdVar7 = (double *)(*pcVar3)();
          return pdVar7;
        }
        if (uVar9 != 0) {
          _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x40;
          iVar6 = (*piVar2 - uVar9) - uVar8;
          if (iVar6 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar9 * 0x40,(longlong)iVar6 << 6);
          }
          *piVar2 = *piVar2 - uVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x40,&pTVar1->AllocatorInstance,*piVar2,&(this->GroupStats).ArrayMax);
        }
      }
    }
  }
  uVar8 = 0;
  if (param_1 < (this->GroupStats).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pdVar7 = (double *)(*pcVar3)();
    return pdVar7;
  }
  return (double *)
         ((this->GroupStats).AllocatorInstance.Data +
         ((longlong)(int)param_2 + (longlong)param_1 * 8) * 8);
}

// RemoveConstraintContainer @ 143b73010

void __thiscall
Chaos::Private::FPBDIslandGroupManager::RemoveConstraintContainer
          (FPBDIslandGroupManager *this,FPBDConstraintContainer *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  TUniquePtr<Chaos::FConstraintContainerSolver,TDefaultDelete<Chaos::FConstraintContainerSolver>_>
  local_res8;
  
  iVar1 = param_1->ContainerId;
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < (this->IslandGroups).ArrayNum) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->IslandGroups).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res8.Ptr = (FConstraintContainerSolver *)0x0;
      FPBDConstraintGroupSolver::SetConstraintSolver
                (*(FPBDConstraintGroupSolver **)
                  ((this->IslandGroups).AllocatorInstance.Data + uVar7),iVar1,&local_res8);
      if (local_res8.Ptr != (FConstraintContainerSolver *)0x0) {
        (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar7 = uVar7 + 8;
    } while ((int)(uVar5 + 1) < (this->IslandGroups).ArrayNum);
  }
  return;
}

// SetConstraintContainerPriority @ 143b77bc0

void __thiscall
Chaos::Private::FPBDIslandGroupManager::SetConstraintContainerPriority
          (FPBDIslandGroupManager *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->IslandGroups).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->IslandGroups).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FPBDConstraintGroupSolver::SetConstraintSolverPriority
                (*(FPBDConstraintGroupSolver **)
                  ((this->IslandGroups).AllocatorInstance.Data + lVar5),param_1,param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->IslandGroups).ArrayNum);
  }
  return;
}

// SetIterationSettings @ 143b77ed0

void __thiscall
Chaos::Private::FPBDIslandGroupManager::SetIterationSettings
          (FPBDIslandGroupManager *this,TIterationSettings<signed_char> *param_1)

{
  schar sVar1;
  
  sVar1 = param_1->NumVelocityIterations;
  (this->Iterations).NumPositionIterations = param_1->NumPositionIterations;
  (this->Iterations).NumVelocityIterations = sVar1;
  (this->Iterations).NumProjectionIterations = param_1->NumProjectionIterations;
  return;
}

// Solve @ 143b79dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Private::FPBDIslandGroupManager::Solve(FPBDIslandGroupManager *this,double param_1)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_188 [32];
  undefined1 local_140 [64];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_188;
  piVar1 = &(this->GroupStats).ArrayMax;
  piVar2 = &(this->GroupStats).ArrayNum;
  *piVar2 = 0;
  if ((this->GroupStats).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x40,0,&(this->GroupStats).AllocatorInstance,0,piVar1);
  }
  iVar8 = (this->IslandGroups).ArrayNum;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40,0x40,iVar8,&(this->GroupStats).AllocatorInstance,piVar2,piVar1);
  DefaultConstructItems<Chaos::FIslandGroupStats,int>
            ((this->GroupStats).AllocatorInstance.Data + (longlong)iVar10 * 0x40,iVar8);
  if (((GSingleThreadedPhysics == 0) && ((this->IslandGroups).ArrayNum != 1)) &&
     (CVars::GIslandGroupsParallelMode != 0)) {
    if (CVars::GIslandGroupsParallelMode == 1) {
      SolveParallelFor(this,param_1);
    }
    else if (CVars::GIslandGroupsParallelMode == 2) {
      SolveParallelTasks(this,param_1);
    }
  }
  else {
    SolveSerial(this,param_1);
  }
  pFVar11 = (this->GroupStats).AllocatorInstance.Data;
  iVar8 = *piVar2;
  local_100 = 0;
  uStack_f8 = 0;
  local_e0 = 0;
  dVar3 = 0.0;
  dVar4 = 0.0;
  dVar5 = 0.0;
  local_f0 = 0;
  uStack_e8 = 0;
  dVar6 = 0.0;
  pFVar12 = pFVar11 + (longlong)iVar8 * 0x40;
  dVar7 = 0.0;
  while( true ) {
    if (*piVar2 != iVar8) {
      `TCheckedPointerIterator<Chaos::FIslandGroupStats_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_140);
    }
    if (pFVar11 == pFVar12) break;
    dVar5 = dVar5 + *(double *)pFVar11;
    dVar3 = dVar3 + *(double *)(pFVar11 + 8);
    dVar7 = dVar7 + *(double *)(pFVar11 + 0x10);
    dVar6 = dVar6 + *(double *)(pFVar11 + 0x18);
    dVar4 = dVar4 + *(double *)(pFVar11 + 0x20);
    pFVar11 = pFVar11 + 0x40;
  }
  if (`public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l3::
      __CsvProfilerStat33 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("PerIslandSolve_GatherTotalSerialized",_GCsvCategory_PhysicsVerbose.Index);
    `public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l3::
    __CsvProfilerStat33 = true;
  }
  dVar9 = __real_408f400000000000;
  FCsvProfiler::RecordCustomStat
            ("PerIslandSolve_GatherTotalSerialized",_GCsvCategory_PhysicsVerbose.Index,
             dVar5 * __real_408f400000000000,Set);
  if (`public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l7::
      __CsvProfilerStat34 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("PerIslandSolve_ApplyTotalSerialized",_GCsvCategory_PhysicsVerbose.Index);
    `public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l7::
    __CsvProfilerStat34 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PerIslandSolve_ApplyTotalSerialized",_GCsvCategory_PhysicsVerbose.Index,dVar3 * dVar9,
             Set);
  if (`public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l11::
      __CsvProfilerStat35 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("PerIslandSolve_ApplyPushOutTotalSerialized",_GCsvCategory_PhysicsVerbose.Index);
    `public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l11::
    __CsvProfilerStat35 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PerIslandSolve_ApplyPushOutTotalSerialized",_GCsvCategory_PhysicsVerbose.Index,
             dVar7 * dVar9,Set);
  if (`public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l15::
      __CsvProfilerStat36 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("PerIslandSolve_ApplyProjectionTotalSerialized",_GCsvCategory_PhysicsVerbose.Index);
    `public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l15::
    __CsvProfilerStat36 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PerIslandSolve_ApplyProjectionTotalSerialized",_GCsvCategory_PhysicsVerbose.Index,
             dVar6 * dVar9,Set);
  if (`public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l19::
      __CsvProfilerStat37 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("PerIslandSolve_ScatterTotalSerialized",_GCsvCategory_PhysicsVerbose.Index);
    `public:_void___cdecl_Chaos::FIslandGroupStats::ReportStats(void)const___ptr64'::__l19::
    __CsvProfilerStat37 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PerIslandSolve_ScatterTotalSerialized",_GCsvCategory_PhysicsVerbose.Index,
             dVar4 * dVar9,Set);
  return;
}

// SolveGroupConstraints @ 143b7a0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDIslandGroupManager::SolveGroupConstraints
          (FPBDIslandGroupManager *this,int param_1,double param_2)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FPBDIslandConstraintGroupSolver *this_00;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase1> FVar9;
  double *pdVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase2> FVar13;
  FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase3> FVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  LARGE_INTEGER local_res20;
  FStatMessage local_68;
  FName local_58;
  
  if (!__CsvProfilerStat253) {
    FCsvProfilerTrace::OutputInlineStat("ApplyConstraints",_GCsvCategory_Chaos.Index);
    __CsvProfilerStat253 = true;
  }
  uVar6 = _GCsvCategory_Chaos.Index;
  FCsvProfiler::BeginStat("ApplyConstraints",_GCsvCategory_Chaos.Index,"CSV_ApplyConstraints");
  this_00 = GetGroup(this,param_1);
  FVar17.Value = 0;
  FVar9 = StatPtr_STAT_Evolution_ApplyConstraintsPhase1;
  if (StatPtr_STAT_Evolution_ApplyConstraintsPhase1 ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase1>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_68,"STAT_Evolution_ApplyConstraintsPhase1");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase1>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_ApplyConstraintsPhase1,
                       *pFVar8,L"FPBDRigidsEvolutionGBF::ApplyConstraintsPhase1",
                       "STATGROUP_ChaosConstraintSolver","STATCAT_Advanced",L"ChaosConstraintSolver"
                       ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar7 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar7 == 0)) {
LAB_143b7a27b:
    bVar4 = false;
    FVar16 = local_58;
    FVar15.Value = FVar17.Value;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar15.Value;
        local_res20.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x102);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143b7a27b;
    local_res20.s.LowPart = FVar15.Value;
    local_res20.s.HighPart = uVar7;
    local_58 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar4 = true;
    FVar15.Value = local_58.ComparisonIndex.Value;
  }
  pdVar10 = GetThreadStatAccumulator(this,param_1,PerIslandSolve_ApplyTotalSerialized);
  QueryPerformanceCounter(&local_res20);
  dVar2 = (double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  FPBDConstraintGroupSolver::PreApplyPositionConstraints
            ((FPBDConstraintGroupSolver *)this_00,param_2);
  FPBDConstraintGroupSolver::ApplyPositionConstraints((FPBDConstraintGroupSolver *)this_00,param_2);
  QueryPerformanceCounter(&local_res20);
  *pdVar10 = ((double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) *
              FGenericPlatformTime::SecondsPerCycle - dVar2) + *pdVar10;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_68.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res20);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar11,&local_68);
      piVar1 = &pFVar11->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  FVar13 = StatPtr_STAT_Evolution_ApplyConstraintsPhase2;
  if (StatPtr_STAT_Evolution_ApplyConstraintsPhase2 ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase2>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_68,"STAT_Evolution_ApplyConstraintsPhase2");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase2>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_ApplyConstraintsPhase2,
                        *pFVar8,L"FPBDRigidsEvolutionGBF::ApplyConstraintsPhase2",
                        "STATGROUP_ChaosConstraintSolver","STATCAT_Advanced",
                        L"ChaosConstraintSolver",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar3 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar7 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar7 == 0)) {
LAB_143b7a4dc:
    bVar4 = false;
    FVar16 = local_58;
    FVar15.Value = FVar17.Value;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar15.Value;
        local_res20.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x109);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143b7a4dc;
    local_res20.s.LowPart = FVar15.Value;
    local_res20.s.HighPart = uVar7;
    local_58 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar4 = true;
    FVar15.Value = local_58.ComparisonIndex.Value;
  }
  pdVar10 = GetThreadStatAccumulator(this,param_1,PerIslandSolve_ApplyPushOutTotalSerialized);
  QueryPerformanceCounter(&local_res20);
  dVar2 = (double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  FPBDConstraintGroupSolver::PreApplyVelocityConstraints
            ((FPBDConstraintGroupSolver *)this_00,param_2);
  FPBDConstraintGroupSolver::ApplyVelocityConstraints((FPBDConstraintGroupSolver *)this_00,param_2);
  QueryPerformanceCounter(&local_res20);
  *pdVar10 = ((double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) *
              FGenericPlatformTime::SecondsPerCycle - dVar2) + *pdVar10;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_68.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res20);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar11,&local_68);
      piVar1 = &pFVar11->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  FVar14 = StatPtr_STAT_Evolution_ApplyConstraintsPhase3;
  if (StatPtr_STAT_Evolution_ApplyConstraintsPhase3 ==
      (FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase3>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_68,"STAT_Evolution_ApplyConstraintsPhase3");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Evolution_ApplyConstraintsPhase3>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_ApplyConstraintsPhase3,
                        *pFVar8,L"FPBDRigidsEvolutionGBF::ApplyConstraintsPhase3",
                        "STATGROUP_ChaosConstraintSolver","STATCAT_Advanced",
                        L"ChaosConstraintSolver",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar14;
  bVar3 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar7 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar15.Value;
        local_res20.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x110);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar15.Value;
      local_res20.s.HighPart = uVar7;
      local_58 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      FVar17.Value = local_58.ComparisonIndex.Value;
      goto LAB_143b7a73e;
    }
  }
  bVar4 = false;
  FVar16 = local_58;
LAB_143b7a73e:
  pdVar10 = GetThreadStatAccumulator(this,param_1,PerIslandSolve_ApplyProjectionTotalSerialized);
  QueryPerformanceCounter(&local_res20);
  dVar2 = (double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) *
          FGenericPlatformTime::SecondsPerCycle;
  FPBDConstraintGroupSolver::PreApplyProjectionConstraints
            ((FPBDConstraintGroupSolver *)this_00,param_2);
  FPBDConstraintGroupSolver::ApplyProjectionConstraints
            ((FPBDConstraintGroupSolver *)this_00,param_2);
  QueryPerformanceCounter(&local_res20);
  *pdVar10 = ((double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) *
              FGenericPlatformTime::SecondsPerCycle - dVar2) + *pdVar10;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_68.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_res20);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar11,&local_68);
      piVar1 = &pFVar11->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  FCsvProfiler::EndStat("ApplyConstraints",uVar6);
  return;
}

// SolveParallelFor @ 143b7a8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDIslandGroupManager::SolveParallelFor
          (FPBDIslandGroupManager *this,double param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SolveConstraints> FVar10;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  LARGE_INTEGER LVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_b8;
  LARGE_INTEGER local_a8;
  TArray<Chaos::Private::FPBDIslandGroupManager::FIslandGroupRange,TSizedDefaultAllocator<32>_>
  *local_a0;
  double local_98;
  TArray<Chaos::Private::FPBDIslandGroupManager::FIslandGroupRange,TSizedDefaultAllocator<32>_>
  local_90;
  TArray<Chaos::Private::FPBDIslandGroupManager::FIslandGroupRange,TSizedDefaultAllocator<32>_>
  local_80;
  LARGE_INTEGER local_70;
  FPBDIslandGroupManager *local_60;
  TArray<Chaos::Private::FPBDIslandGroupManager::FIslandGroupRange,TSizedDefaultAllocator<32>_>
  *local_58;
  double local_50;
  
  FVar10 = StatPtr_STAT_SolveConstraints;
  if (StatPtr_STAT_SolveConstraints == (FThreadSafeStaticStat<FStat_STAT_SolveConstraints>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_SolveConstraints");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SolveConstraints>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SolveConstraints,*pFVar9,
                        L"Chaos::SolveConstraints","STATGROUP_ChaosConstraintSolver",
                        "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar10;
  bVar4 = false;
  bVar7 = false;
  local_70.s.LowPart = 0;
  local_70.s.HighPart = 0;
  if ((LVar15.s.LowPart == 0) && (LVar15.s.HighPart == 0)) {
LAB_143b7aa01:
    bVar5 = false;
    LVar15 = local_70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x136);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143b7aa01;
    local_res8 = LVar15;
    FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
    bVar5 = true;
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  if (__CsvProfilerStat316 == false) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat316 = true;
  }
  uVar8 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Gather");
  local_b8.NameAndInfo = (FStatNameAndInfo)&local_res8;
  local_b8.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_1>,void,int>
       ::Call;
  local_res8 = (LARGE_INTEGER)this;
  PhysicsParallelFor(this->NumActiveGroups,(TFunctionRef<void___cdecl(int)> *)&local_b8,false);
  BuildGatherBatches(this,&local_80,&local_90);
  local_a0 = &local_80;
  local_b8.NameAndInfo = (FStatNameAndInfo)&local_a8;
  local_b8.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_2>,void,int>
       ::Call;
  local_a8 = (LARGE_INTEGER)this;
  local_98 = param_1;
  PhysicsParallelFor(local_80.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_b8,false);
  local_a0 = &local_90;
  local_b8.NameAndInfo = (FStatNameAndInfo)&local_a8;
  local_b8.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_3>,void,int>
       ::Call;
  local_a8 = (LARGE_INTEGER)this;
  local_98 = param_1;
  PhysicsParallelFor(local_90.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_b8,false);
  FCsvProfiler::EndStat("StepSolver_Gather",uVar8);
  local_a0 = (TArray<Chaos::Private::FPBDIslandGroupManager::FIslandGroupRange,TSizedDefaultAllocator<32>_>
              *)&local_b8;
  local_a8.QuadPart =
       (LONGLONG)
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l2::<lambda_4>,void,int>
       ::Call;
  local_b8.StatData.Pad = (uchar  [8])this;
  local_b8.NameAndInfo = (FStatNameAndInfo)param_1;
  PhysicsParallelFor(this->NumActiveGroups,(TFunctionRef<void___cdecl(int)> *)&local_a8.s,false);
  FVar11 = StatPtr_STAT_Evolution_Scatter;
  if (StatPtr_STAT_Evolution_Scatter == (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter>)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_Evolution_Scatter");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Scatter,*pFVar9,
                        L"FPBDRigidsEvolutionGBF::Scatter","STATGROUP_ChaosConstraintSolver",
                        "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  LVar14 = *(LARGE_INTEGER *)FVar11;
  bVar2 = false;
  bVar6 = false;
  local_a8.s.LowPart = 0;
  local_a8.s.HighPart = 0;
  if ((LVar14.s.LowPart != 0) || (LVar14.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar2 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x16e);
        bVar2 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar14;
      FThreadStats::AddMessage((FName)LVar14.s,CycleScopeStart);
      bVar3 = true;
      goto LAB_143b7ac3a;
    }
  }
  bVar3 = false;
  LVar14 = local_a8;
LAB_143b7ac3a:
  local_58 = &local_90;
  local_b8.NameAndInfo = (FStatNameAndInfo)&local_60;
  local_b8.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l7::<lambda_5>,void,int>
       ::Call;
  local_60 = this;
  local_50 = param_1;
  PhysicsParallelFor(local_90.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_b8,false);
  local_58 = &local_80;
  local_b8.NameAndInfo = (FStatNameAndInfo)&local_60;
  local_b8.StatData.Pad =
       (uchar  [8])
       UE::Core::Private::Function::
       TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l7::<lambda_6>,void,int>
       ::Call;
  local_60 = this;
  local_50 = param_1;
  PhysicsParallelFor(local_80.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_b8,false);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar14.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_b8.NameAndInfo =
           (FStatNameAndInfo)(LVar14.QuadPart & 0xffff6fffffffffffU | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_b8.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar12,&local_b8);
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
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && ((FName)LVar15.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_b8.NameAndInfo =
           (FStatNameAndInfo)(LVar15.QuadPart & 0xffff6fffffffffffU | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_b8.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar12,&local_b8);
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

// SolveParallelTasks @ 143b7ae80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks
          (FPBDIslandGroupManager *this,double param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_SolveConstraints> FVar12;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  FTaskGraphInterface *pFVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong *plVar15;
  longlong lVar16;
  FName FVar17;
  uint uVar18;
  FTaskBase *pFVar19;
  FTaskBase *this_03;
  undefined1 auStackY_178 [32];
  EExtendedTaskPriority local_117;
  ETaskPriority local_116 [6];
  TRefCountPtr<FBaseGraphTask> local_110;
  FColor_u_0 local_108 [2];
  FName local_100;
  FName local_f8;
  FName local_f0;
  code *local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  FPipe *local_b8;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  FStatMessage local_a0;
  FPBDIslandGroupManager *local_90;
  int iStack_88;
  undefined4 uStack_84;
  double local_80;
  FName local_78;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_70;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FVar12 = StatPtr_STAT_SolveConstraints;
  if (StatPtr_STAT_SolveConstraints == (FThreadSafeStaticStat<FStat_STAT_SolveConstraints>)0x0) {
    pFVar11 = ::FName::FName(&local_78,"STAT_SolveConstraints");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_SolveConstraints>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SolveConstraints,*pFVar11,
                        L"Chaos::SolveConstraints","STATGROUP_ChaosConstraintSolver",
                        "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) ||
     (bVar5 = bVar6, bVar7 = bVar8, FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_f8.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x18b);
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_100 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      goto LAB_143b7aff3;
    }
  }
  bVar8 = bVar10;
  bVar6 = bVar9;
  bVar9 = false;
  local_100 = local_f0;
  FVar17 = local_f0;
LAB_143b7aff3:
  uVar18 = this->NumActiveGroups;
  local_70.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_48 = 0;
  local_44 = 4;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (4 < (int)uVar18) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,uVar18,&local_70,0,&local_44);
  }
  pFVar19 = (FTaskBase *)0x0;
  if (0 < this->NumActiveGroups) {
    do {
      local_d8 = (code *)0x0;
      local_b0 = (longlong *)0x0;
      local_90 = this;
      iStack_88 = (int)pFVar19;
      local_b0 = FMemory::Malloc(0x20,8);
      *local_b0 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::`4'::<lambda_1>,1,1>
                   ::_vftable_;
      local_b0[1] = (longlong)local_90;
      local_b0[2] = CONCAT44(uStack_84,iStack_88);
      local_b0[3] = (longlong)param_1;
      if (local_b0 + 1 != (undefined8 *)0x0) {
        local_d8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
                   ::Call;
      }
      local_80 = param_1;
      this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
      this_03 = (FTaskBase *)0x0;
      if (this_00 != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_00,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this_00->_padding_ =
             (longlong)
             &
             ___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z_0A_____6B_
        ;
        this_03 = this_00;
      }
      this_03[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
      this_03[1]._padding_ = (longlong)local_d8;
      *(longlong **)&this_03[1].StateChangeEvent = local_b0;
      local_b0 = (longlong *)0x0;
      this_03[1]._padding_ = local_c8;
      this_03[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_c0;
      this_03[1].NumLocks = (atomic<unsigned_int>)uStack_c0._4_4_;
      this_03[1].Pipe = local_b8;
      if (this_03[1]._padding_ != 0) {
        local_d8 = (code *)0x0;
      }
      this_03[1].ExecutingThreadId = (atomic<unsigned_int>)0xff;
      UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_116,&local_117);
      UE::Tasks::Private::FTaskBase::Init(this_03,L"GraphTask",local_116[0],local_117,None);
      LOCK();
      this_03->RefCount = (atomic<unsigned_int>)((int)this_03->RefCount + 1);
      UNLOCK();
      local_110.Reference = (FBaseGraphTask *)this_03;
      UE::Tasks::Private::FTaskBase::TryLaunch(this_03,0x130);
      if (local_d8 != (code *)0x0) {
        plVar15 = &local_c8;
        if (local_b0 != (longlong *)0x0) {
          plVar15 = local_b0;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
      if (local_70.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar13 = local_70.SecondaryData;
      }
      if ((ulonglong)FVar13 <= &local_110) {
        FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
        if (local_70.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar13 = local_70.SecondaryData;
        }
        if ((&local_110 <
             (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar13 + (longlong)local_44 * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_48 == local_44) {
        local_48 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,&local_70,&local_44);
      }
      lVar16 = (longlong)local_48;
      FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
      if (local_70.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar13 = local_70.SecondaryData;
      }
      local_48 = local_48 + 1;
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar13 + lVar16 * 8))->Reference =
           (FBaseGraphTask *)0x0;
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar13 + lVar16 * 8))->Reference =
           local_110.Reference;
      if ((FTaskBase *)local_110.Reference != (FTaskBase *)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)&(local_110.Reference)->field_0x30 =
             (atomic<unsigned_int>)
             ((int)*(atomic<unsigned_int> *)&(local_110.Reference)->field_0x30 + 1);
        UNLOCK();
        if ((FTaskBase *)local_110.Reference != (FTaskBase *)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned_int> *)&(local_110.Reference)->field_0x30;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar3 == (atomic<unsigned_int>)0x1) &&
             ((FTaskBase *)local_110.Reference != (FTaskBase *)0x0)) {
            (*(code *)**(undefined8 **)local_110.Reference)(local_110.Reference,1);
          }
        }
      }
      uVar18 = (int)pFVar19 + 1;
      FVar17 = local_100;
      pFVar19 = (FTaskBase *)(ulonglong)uVar18;
      bVar5 = bVar6;
      bVar7 = bVar8;
    } while ((int)uVar18 < this->NumActiveGroups);
  }
  pFVar14 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar14 + 0x60))(pFVar14,&local_70);
  FVar13 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
  if (local_70.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar13 = local_70.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar13,local_48);
  if (local_70.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_70.SecondaryData);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_a0.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_a0);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SolveSerial @ 143b7b410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDIslandGroupManager::SolveSerial(FPBDIslandGroupManager *this,double param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  FPBDConstraintGroupSolver *this_00;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_SolveConstraints> FVar17;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Gather> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter> FVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  FNameEntryId FVar24;
  FName FVar25;
  uint uVar26;
  TArray<Chaos::FIslandGroupStats,TSizedDefaultAllocator<32>_> *pTVar27;
  FName FVar28;
  uint uVar29;
  FColor_u_0 local_150;
  FColor_u_0 local_14c;
  FColor_u_0 local_148;
  uint local_144;
  longlong local_140;
  FName local_138;
  FName local_130;
  uint local_128;
  uint uStack_124;
  FName local_120;
  uint local_118;
  uint uStack_114;
  FPBDConstraintGroupSolver *local_110;
  longlong local_108;
  FName local_100;
  FName local_f0;
  FName local_e0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68 [6];
  
  FVar17 = StatPtr_STAT_SolveConstraints;
  if (StatPtr_STAT_SolveConstraints == (FThreadSafeStaticStat<FStat_STAT_SolveConstraints>)0x0) {
    pFVar16 = ::FName::FName(&local_78,"STAT_SolveConstraints");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_SolveConstraints>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SolveConstraints,*pFVar16,
                        L"Chaos::SolveConstraints","STATGROUP_ChaosConstraintSolver",
                        "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar28 = *(FName *)FVar17;
  bVar8 = false;
  bVar7 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  bVar11 = false;
  bVar10 = false;
  if ((FVar28.ComparisonIndex.Value.Value != 0) || (FVar28.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_150.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_150._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar11 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_138.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                   ,0x11a);
        bVar8 = true;
        bVar7 = true;
        bVar11 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar10 = true;
      goto LAB_143b7b57c;
    }
  }
  bVar8 = bVar11;
  bVar7 = bVar10;
  bVar10 = false;
  FVar28 = local_100;
LAB_143b7b57c:
  if (0 < this->NumActiveGroups) {
    local_140 = 0;
    local_108 = 0;
    uVar29 = 1;
    do {
      lVar9 = local_108;
      uVar23 = ~(uVar29 - 1) >> 0x1f;
      iVar14 = uVar29 - 1;
      uVar26 = 0;
      if (iVar14 < (this->IslandGroups).ArrayNum) {
        uVar26 = uVar23;
      }
      local_144 = uVar29;
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_110 = *(FPBDConstraintGroupSolver **)
                   ((this->IslandGroups).AllocatorInstance.Data + lVar9);
      FVar18 = StatPtr_STAT_Evolution_Gather;
      if (StatPtr_STAT_Evolution_Gather == (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather>)0x0)
      {
        pFVar16 = ::FName::FName(&local_70,"STAT_Evolution_Gather");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Gather>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Gather,*pFVar16,
                            L"FPBDRigidsEvolutionGBF::Gather","STATGROUP_ChaosConstraintSolver",
                            "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,
                            false,MCR_Invalid);
      }
      FVar25 = *(FName *)FVar18;
      bVar11 = false;
      bVar6 = false;
      local_f0.ComparisonIndex.Value = 0;
      local_f0.Number = 0;
      FVar24 = FVar25.ComparisonIndex.Value;
      uVar26 = FVar25.Number;
      if ((FVar24.Value == 0) && (uVar26 == 0)) {
LAB_143b7b739:
        bVar5 = false;
        FVar25 = local_f0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_14c.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_14c._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
          bVar11 = false;
          bVar6 = true;
          if (-1 < CpuChannel->Enabled) {
            local_130.ComparisonIndex.Value = FVar24.Value;
            local_130.Number = uVar26;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_130,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                       ,0x121);
            bVar11 = true;
            bVar6 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_143b7b739;
        local_128 = FVar24.Value;
        uStack_124 = uVar26;
        local_f0 = FVar25;
        FThreadStats::AddMessage(FVar25,CycleScopeStart);
        bVar5 = true;
      }
      if ((iVar14 < 0) || ((this->GroupStats).ArrayNum <= iVar14)) {
        iVar14 = (this->GroupStats).ArrayNum;
        piVar2 = &(this->GroupStats).ArrayNum;
        if (iVar14 < (int)uVar29) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40,0x40,uVar29 - iVar14,&(this->GroupStats).AllocatorInstance,piVar2
                              ,&(this->GroupStats).ArrayMax);
          DefaultConstructItems<Chaos::FIslandGroupStats,int>
                    ((this->GroupStats).AllocatorInstance.Data + (longlong)iVar13 * 0x40,
                     uVar29 - iVar14);
        }
        else {
          if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
          }
          if ((int)uVar29 < iVar14) {
            uVar26 = iVar14 - uVar29;
            if (((int)(uVar26 | uVar29) < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar26 != 0) {
              pFVar22 = (this->GroupStats).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x40;
              iVar14 = (*piVar2 - uVar29) - uVar26;
              if (iVar14 != 0) {
                memmove(pFVar22,pFVar22 + (longlong)(int)uVar26 * 0x40,(longlong)iVar14 << 6);
              }
              *piVar2 = *piVar2 - uVar26;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x40,&(this->GroupStats).AllocatorInstance,*piVar2,
                         &(this->GroupStats).ArrayMax);
            }
          }
        }
      }
      pTVar27 = &this->GroupStats;
      piVar2 = &(this->GroupStats).ArrayNum;
      uVar26 = 0;
      if ((int)(uVar29 - 1) < (this->GroupStats).ArrayNum) {
        uVar26 = uVar23;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar22 = (pTVar27->AllocatorInstance).Data;
      QueryPerformanceCounter(&local_c8);
      this_00 = local_110;
      dVar4 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      FPBDConstraintGroupSolver::AddConstraintsAndBodies(local_110);
      FPBDConstraintGroupSolver::GatherBodies
                (this_00,param_1,0,*(int *)&(this_00->SolverBodyContainer).SolverBodies.field_0x10);
      FPBDConstraintGroupSolver::GatherConstraints(this_00,param_1,0,this_00->TotalNumConstraints);
      QueryPerformanceCounter(&local_c0);
      *(double *)(pFVar22 + local_140) =
           ((double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4) +
           *(double *)(pFVar22 + local_140);
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar5) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar19 == (FThreadStats *)0x0) {
          pFVar20 = FThreadStatsPool::Get();
          pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
        }
        if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
          local_98.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
          local_98.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_b8);
          local_98.StatData.Pad[4] = '\0';
          local_98.StatData.Pad[5] = '\0';
          local_98.StatData.Pad[6] = '\0';
          local_98.StatData.Pad[7] = '\0';
          local_98.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
          local_98.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
          local_98.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
          local_98.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar19,&local_98);
          piVar1 = &pFVar19->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      iVar14 = uVar29 - 1;
      SolveGroupConstraints(this,iVar14,param_1);
      FVar21 = StatPtr_STAT_Evolution_Scatter;
      if (StatPtr_STAT_Evolution_Scatter == (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter>)0x0
         ) {
        pFVar16 = ::FName::FName(local_68,"STAT_Evolution_Scatter");
        FVar21 = (FThreadSafeStaticStat<FStat_STAT_Evolution_Scatter>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Evolution_Scatter,*pFVar16,
                            L"FPBDRigidsEvolutionGBF::Scatter","STATGROUP_ChaosConstraintSolver",
                            "STATCAT_Advanced",L"ChaosConstraintSolver",true,true,ST_int64,true,
                            false,MCR_Invalid);
      }
      FVar25 = *(FName *)FVar21;
      bVar6 = false;
      bVar11 = false;
      local_e0.ComparisonIndex.Value = 0;
      local_e0.Number = 0;
      FVar24 = FVar25.ComparisonIndex.Value;
      uVar26 = FVar25.Number;
      if ((FVar24.Value == 0) && (uVar26 == 0)) {
LAB_143b7bb26:
        bVar5 = false;
        FVar25 = local_e0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_148.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
          bVar6 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_120.ComparisonIndex.Value = FVar24.Value;
            local_120.Number = uVar26;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_120,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandGroupManager.cpp"
                       ,300);
            bVar6 = true;
            bVar11 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_143b7bb26;
        local_118 = FVar24.Value;
        uStack_114 = uVar26;
        local_e0 = FVar25;
        FThreadStats::AddMessage(FVar25,CycleScopeStart);
        bVar5 = true;
      }
      if ((iVar14 < 0) || ((this->GroupStats).ArrayNum <= iVar14)) {
        iVar13 = *piVar2;
        if (iVar13 < (int)uVar29) {
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40,0x40,uVar29 - iVar13,&pTVar27->AllocatorInstance,piVar2,
                              &(this->GroupStats).ArrayMax);
          DefaultConstructItems<Chaos::FIslandGroupStats,int>
                    ((this->GroupStats).AllocatorInstance.Data + (longlong)iVar15 * 0x40,
                     uVar29 - iVar13);
        }
        else {
          if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
          }
          if ((int)uVar29 < iVar13) {
            uVar26 = iVar13 - uVar29;
            if (((int)(uVar26 | uVar29) < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (uVar26 != 0) {
              pFVar22 = (this->GroupStats).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x40;
              iVar13 = (*piVar2 - uVar26) - uVar29;
              if (iVar13 != 0) {
                memmove(pFVar22,pFVar22 + (longlong)(int)uVar26 * 0x40,(longlong)iVar13 << 6);
              }
              *piVar2 = *piVar2 - uVar26;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40,0x40,&pTVar27->AllocatorInstance,*piVar2,&(this->GroupStats).ArrayMax)
              ;
            }
          }
        }
      }
      uVar26 = 0;
      if (iVar14 < *piVar2) {
        uVar26 = uVar23;
      }
      if ((uVar26 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar22 = (pTVar27->AllocatorInstance).Data;
      QueryPerformanceCounter(&local_b0);
      dVar4 = (double)local_b0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      FPBDConstraintGroupSolver::ScatterConstraints(local_110,param_1);
      FPBDConstraintGroupSolver::ScatterBodies(local_110,param_1);
      QueryPerformanceCounter(&local_a8);
      lVar9 = local_140;
      *(double *)(pFVar22 + local_140 + 0x20) =
           ((double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4) +
           *(double *)(pFVar22 + local_140 + 0x20);
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar6) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar5) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar19 == (FThreadStats *)0x0) {
          pFVar20 = FThreadStatsPool::Get();
          pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
        }
        if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
          local_88.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
          local_88.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_a0);
          local_88.StatData.Pad[4] = '\0';
          local_88.StatData.Pad[5] = '\0';
          local_88.StatData.Pad[6] = '\0';
          local_88.StatData.Pad[7] = '\0';
          local_88.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
          local_88.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
          local_88.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
          local_88.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar19,&local_88);
          piVar2 = &pFVar19->ScopeCount;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FThreadStats::Flush(pFVar19,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar19,false,false);
          }
        }
      }
      local_140 = lVar9 + 0x40;
      local_108 = local_108 + 8;
      uVar29 = uVar29 + 1;
    } while ((int)local_144 < this->NumActiveGroups);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return;
}


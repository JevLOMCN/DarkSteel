// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 30

// operator()<Chaos::FPBDRigidsSolver> @ 144136570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FChaosScene::EndFrame'::__l74::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>
          (void *this,FPBDRigidsSolver *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_SqUpdateMaterials> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_28;
  
  FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(*(FChaosScene **)((longlong)this + 0x10),param_1)
  ;
  (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))();
  Chaos::FPBDRigidsSolver::SyncEvents_GameThread(param_1);
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_SqUpdateMaterials;
  if (StatPtr_STAT_SqUpdateMaterials == (FThreadSafeStaticStat<FStat_STAT_SqUpdateMaterials>)0x0) {
    pFVar4 = ::FName::FName(&local_res18,"STAT_SqUpdateMaterials");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_SqUpdateMaterials>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SqUpdateMaterials,*pFVar4,
                       L"SQ - Update Materials","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    Chaos::FPBDRigidsSolver::SyncQueryMaterials_External(param_1);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                   ,0x239);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    Chaos::FPBDRigidsSolver::SyncQueryMaterials_External(param_1);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
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
  }
  return;
}

// SyncBodies<Chaos::FPBDRigidsSolver> @ 14414acd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(FChaosScene *this,FPBDRigidsSolver *param_1)

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
  FName local_res18 [2];
  FStatMessage local_38;
  
  FVar10.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(Chaos::FPBDRigidsSolver*___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(Chaos::FPBDRigidsSolver*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(Chaos::FPBDRigidsSolver*___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_SyncBodies = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_SyncBodies");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(Chaos::FPBDRigidsSolver*___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_SyncBodies,*pFVar5,L"SyncBodies","STATGROUP_Physics",
               "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(Chaos::FPBDRigidsSolver*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_SyncBodies;
  if (_StatPtr_STAT_SyncBodies == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_SyncBodies");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_void___cdecl_FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(Chaos::FPBDRigidsSolver*___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_SyncBodies,*pFVar5,L"SyncBodies","STATGROUP_Physics",
                        "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                   ,0x1c1);
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
      goto LAB_14414ae57;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14414ae57:
  if (`private:_void___cdecl_FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(Chaos::FPBDRigidsSolver*___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat450 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("SyncBodies");
    `private:_void___cdecl_FChaosScene::SyncBodies<Chaos::FPBDRigidsSolver>(Chaos::FPBDRigidsSolver*___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat450 = true;
  }
  FCsvProfiler::BeginExclusiveStat("SyncBodies","CSV_SyncBodies");
  (**(code **)(this->_padding_ + 0x28))(this,param_1);
  FCsvProfiler::EndExclusiveStat("SyncBodies");
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

// FChaosScene @ 14419ff60

FChaosScene * __thiscall
FChaosScene::FChaosScene(FChaosScene *this,UObject *param_1,double param_2,FName *param_3)

{
  atomic<int> *paVar1;
  FPhysicsRwLock *this_00;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  FSharedReferencer<1> FVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  int iVar8;
  FChaosSolversModule *pFVar9;
  FChaosScene *pFVar10;
  FPBDRigidsSolver *pFVar11;
  FChaosVDRuntimeModule *this_01;
  FChaosSceneSimCallback *pFVar12;
  UPhysicsSettingsCore *pUVar13;
  longlong lVar14;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->MNetworkDeltaTimeScale = 1.0;
  this->SolverAccelerationStructure =
       (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  this->_padding_ = (longlong)&___7FChaosScene__6B_;
  *(undefined8 *)&this->OnPhysScenePostTick = 0;
  *(undefined8 *)&(this->OnPhysScenePostTick).field_0x8 = 0;
  *(undefined8 *)&(this->OnPhysScenePostTick).field_0x10 = 0;
  *(undefined8 *)&(this->OnPhysScenePostTick).field_0x18 = 2;
  this->ChaosModule = (FChaosSolversModule *)0x0;
  this->SceneSolver = (FPBDRigidsSolver *)0x0;
  (this->CompletionEvents).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  this->Owner = param_1;
  (this->CompletionEvents).ArrayNum = 0;
  (this->CompletionEvents).ArrayMax = 4;
  (this->CVDContextData).OwnerID = -1;
  (this->CVDContextData).Id = -1;
  (this->CVDContextData).Type = -1;
  (this->CVDContextData).Attributes = 0;
  (this->CVDContextData).CurrentDataChannel.Object = CVDDC_Default.Object;
  FVar5 = CVDDC_Default.SharedReferenceCount;
  (this->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController =
       CVDDC_Default.SharedReferenceCount.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->CDDScene).Object = (FChaosDDScene *)0x0;
  (this->CDDScene).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FLLMScope::FLLMScope(local_res8,ChaosScene,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,ChaosScene,true);
  pFVar9 = FChaosSolversModule::GetModule();
  this->ChaosModule = pFVar9;
  if (pFVar9 == (FChaosSolversModule *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChaosModule",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                       ,0x47,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FChaosScene *)(*pcVar2)();
      return pFVar10;
    }
  }
  bVar7 = FApp::ShouldUseThreadingForPerformance();
  if (bVar7) {
LAB_1441a00a9:
    cVar3 = '\0';
  }
  else {
    bVar7 = FForkProcessHelper::SupportsMultithreadingPostFork();
    cVar3 = '\x01';
    if (bVar7) goto LAB_1441a00a9;
  }
  pFVar11 = FChaosSolversModule::CreateSolver
                      (this->ChaosModule,param_1,param_2,cVar3 + TaskGraph,param_3);
  this->SceneSolver = pFVar11;
  if (pFVar11 == (FPBDRigidsSolver *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneSolver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                       ,0x4e,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FChaosScene *)(*pcVar2)();
      return pFVar10;
    }
  }
  *(int *)&this->SceneSolver->_padding_ = (this->CVDContextData).Id;
  this_01 = FChaosVDRuntimeModule::Get();
  iVar8 = FChaosVDRuntimeModule::GenerateUniqueID(this_01);
  *(int *)((longlong)&this->SceneSolver->_padding_ + 4) = iVar8;
  *(undefined4 *)&this->SceneSolver->_padding_ = 1;
  this->SceneSolver->PhysSceneHack = this;
  pFVar12 = Chaos::FPhysicsSolverBase::
            CreateAndRegisterSimCallbackObject_External<FChaosSceneSimCallback>
                      ((FPhysicsSolverBase *)this->SceneSolver);
  this->SimCallback = pFVar12;
  pTVar6 = CVar_ApplyProjectSettings.Ref;
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    lVar14 = 4;
    if (!bVar7) goto LAB_1441a0164;
  }
  lVar14 = 0;
LAB_1441a0164:
  if (*(int *)((longlong)pTVar6->ShadowedValue + lVar14) != 0) {
    pUVar13 = UPhysicsSettingsCore::Get();
    Chaos::FPBDRigidsSolver::ApplyConfig(this->SceneSolver,&pUVar13->SolverOptions);
    Chaos::FPBDRigidsSolver::SetIsDeterministic
              (this->SceneSolver,pUVar13->bEnableEnhancedDeterminism);
  }
  if (this->SceneSolver != (FPBDRigidsSolver *)0x0) {
    this_00 = (FPhysicsRwLock *)this->SceneSolver->_padding_;
    if (`public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
        ::__l2::__CsvProfilerStat912 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index);
      `public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat912 = true;
    }
    uVar4 = _GCsvCategory_PhysicsVerbose.Index;
    FCsvProfiler::BeginStat
              ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index,
               "CSV_AcquireSceneWriteLock");
    Chaos::FPhysicsRwLock::WriteLock(this_00);
    FCsvProfiler::EndStat("AcquireSceneWriteLock",uVar4);
    Chaos::FPBDRigidsSolver::UpdateExternalAccelerationStructure_External
              (this->SceneSolver,&this->SolverAccelerationStructure);
    Chaos::FPhysicsRwLock::WriteUnlock(this_00);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// ~FChaosScene @ 1441a17a0

void __thiscall FChaosScene::~FChaosScene(FChaosScene *this)

{
  FPBDRigidsSolver *pFVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar8;
  longlong *SRWLock;
  ForAnyElementType *pFVar9;
  EEventType local_res8 [2];
  FChaosSceneSimCallback *local_18 [2];
  
  this->_padding_ = (longlong)&___7FChaosScene__6B_;
  if (this->SceneSolver == (FPBDRigidsSolver *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3284298325167177832>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                       ,0x68,"SceneSolver");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    local_res8[0] = Collision;
    Chaos::FEventManager::UnregisterHandler((this->SceneSolver->MEventManager).Ptr,local_res8,this);
    pFVar1 = this->SceneSolver;
    local_18[0] = this->SimCallback;
    SRWLock = (longlong *)0x0;
    if (Chaos::CVars::bEnableAsyncInitBody != false) {
      SRWLock = &pFVar1->_padding_;
    }
    if (SRWLock != (longlong *)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    local_18[0]->field_0x9 = 1;
    lVar2 = pFVar1->_padding_;
    pFVar9 = (ForAnyElementType *)(lVar2 + 0x2b0);
    if ((pFVar9->Data <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar9->Data + (longlong)*(int *)(lVar2 + 700) * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = *(int *)(lVar2 + 0x2b8);
    if (iVar7 == *(int *)(lVar2 + 700)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar9,(int *)(lVar2 + 700));
    }
    *(int *)(lVar2 + 0x2b8) = iVar7 + 1;
    *(FChaosSceneSimCallback **)(pFVar9->Data + (longlong)iVar7 * 8) = local_18[0];
    if (SRWLock != (longlong *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
  }
  if (this->ChaosModule == (FChaosSolversModule *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3284298325167177839>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                       ,0x6f,"ChaosModule");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    FChaosSolversModule::DestroySolver(this->ChaosModule,(FPhysicsSolverBase *)this->SceneSolver);
  }
  pTVar3 = (this->CDDScene).SharedReferenceCount.ReferenceController;
  this->SimCallback = (FChaosSceneSimCallback *)0x0;
  this->ChaosModule = (FChaosSolversModule *)0x0;
  this->SceneSolver = (FPBDRigidsSolver *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController);
  FVar8 = (this->CompletionEvents).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->CompletionEvents;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar8,(this->CompletionEvents).ArrayNum);
  FVar8 = (this->CompletionEvents).AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPhysScenePostTick).field_0x8,*(int *)&(this->OnPhysScenePostTick).field_0x10
            );
  pvVar4 = *(void **)&(this->OnPhysScenePostTick).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPhysScenePostTick);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddActorsToScene_AssumesLocked @ 1441a3220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FChaosScene::AddActorsToScene_AssumesLocked
          (FChaosScene *this,
          TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar7;
  TThreadedSingleParticlePhysicsProxyBase<1> *this_00;
  longlong *plVar8;
  longlong lVar9;
  TGeometryParticle<double,3> *pTVar10;
  code *pcVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  TAABB<double,3> *pTVar24;
  FScriptContainerElement *pFVar25;
  FPBDRigidsSolver *this_01;
  bool bVar26;
  undefined1 auStackY_248 [32];
  undefined1 local_217;
  char local_216;
  TGeometryParticle<double,3> *local_210;
  undefined8 local_208;
  int local_200;
  FCollisionFilterData local_1fc;
  FCollisionFilterData local_1ec;
  undefined1 local_1dc;
  TArray<Chaos::FSingleParticlePhysicsProxy_*,TSizedDefaultAllocator<32>_> *local_1d8;
  FPBDRigidsSolver *local_1d0;
  FPhysicsRwLock *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  TAABB<double,3> local_190;
  TAABB<double,3> local_160;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar26 = -1 < CpuChannel->Enabled;
  local_216 = param_2;
  local_1d8 = param_1;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId282,"FChaosScene::AddActorsToScene_AssumesLocked",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
               ,0x11a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId282);
  }
  this_01 = this->SceneSolver;
  local_1c8 = (FPhysicsRwLock *)0x0;
  if (Chaos::CVars::bEnableAsyncInitBody != false) {
    local_1c8 = (FPhysicsRwLock *)this_01->_padding_;
  }
  local_1d0 = this_01;
  if (local_1c8 != (FPhysicsRwLock *)0x0) {
    Chaos::FPhysicsRwLock::WriteLock(local_1c8);
  }
  uVar22 = _UNK_150a9e6d8;
  uVar21 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar20 = _UNK_150a9e648;
  uVar19 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar18 = _UNK_1508ffb58;
  uVar17 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar16 = _UNK_150689688;
  uVar15 = ___xmm_3ff00000000000003ff0000000000000;
  uVar14 = _UNK_150689518;
  uVar13 = ___xmm_00000000000000003ff0000000000000;
  pFVar25 = (param_1->AllocatorInstance).Data;
  iVar6 = param_1->ArrayNum;
  pIVar7 = this->SolverAccelerationStructure;
  pFVar1 = pFVar25 + (longlong)iVar6 * 8;
  do {
    if (param_1->ArrayNum != iVar6) {
      local_217 = 0;
      `TCheckedPointerIterator<Chaos::FSingleParticlePhysicsProxy_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_217);
    }
    if (pFVar25 == pFVar1) {
      if (local_1c8 != (FPhysicsRwLock *)0x0) {
        Chaos::FPhysicsRwLock::WriteUnlock(local_1c8);
      }
      if (bVar26) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    Chaos::FPBDRigidsSolver::RegisterObject(this_01,*(FSingleParticlePhysicsProxy **)pFVar25);
    if ((param_2 != false) &&
       (pIVar7 != (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)
                  0x0)) {
      this_00 = *(TThreadedSingleParticlePhysicsProxyBase<1> **)pFVar25;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_00);
      cVar5 = *(char *)(*(longlong *)(*(longlong *)&this_00->field_0x40 + 0x50) + 0x16);
      local_1c0 = uVar19;
      uStack_1b8 = uVar20;
      local_1b0 = uVar21;
      uStack_1a8 = uVar22;
      local_1a0 = uVar17;
      uStack_198 = uVar18;
      if (cVar5 != '\0') {
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_00);
        plVar8 = *(longlong **)(*(longlong *)&this_00->field_0x40 + 0x50);
        (**(code **)(*plVar8 + 0x90))(plVar8,&local_190);
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_00);
        lVar9 = *(longlong *)&this_00->field_0x40;
        fVar2 = *(float *)(lVar9 + 0x40);
        fVar3 = *(float *)(lVar9 + 0x44);
        uVar4 = *(undefined8 *)(lVar9 + 0x48);
        dVar12 = (double)(float)((ulonglong)uVar4 >> 0x20);
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_00);
        lVar9 = *(longlong *)&this_00->field_0x40;
        local_118._8_4_ = SUB84(dVar12,0);
        local_118._0_8_ = (double)(float)uVar4;
        local_118._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_128._8_4_ = SUB84((double)fVar3,0);
        local_128._0_8_ = (double)fVar2;
        local_128._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
        local_f8 = *(undefined8 *)(lVar9 + 0x30);
        local_108 = *(undefined8 *)(lVar9 + 0x20);
        uStack_100 = *(undefined8 *)(lVar9 + 0x28);
        uStack_f0 = 0;
        local_e8 = uVar15;
        uStack_e0 = uVar16;
        local_d8 = uVar13;
        uStack_d0 = uVar14;
        pTVar24 = Chaos::TAABB<double,3>::TransformedAABB
                            (&local_190,&local_160,(TRigidTransform<double,3> *)local_128);
        local_1c0 = *(undefined8 *)&pTVar24->MMin;
        uStack_1b8 = *(undefined8 *)&(pTVar24->MMin).field_0x8;
        local_1b0 = *(undefined8 *)&(pTVar24->MMin).field_0x10;
        uStack_1a8 = *(undefined8 *)&pTVar24->MMax;
        local_1a0 = *(undefined8 *)&(pTVar24->MMax).field_0x8;
        uStack_198 = *(undefined8 *)&(pTVar24->MMax).field_0x10;
      }
      pTVar10 = *(TGeometryParticle<double,3> **)(*(longlong *)pFVar25 + 0x40);
      local_210 = pTVar10;
      if (pTVar10 == (TGeometryParticle<double,3> *)0x0) {
        local_200 = -1;
        local_208 = 0;
      }
      else if (pTVar10->Proxy == (IPhysicsProxyBase *)0x0) {
        local_200 = (pTVar10->MNonFrequentData).Property.MUniqueIdx.Idx;
        local_208 = 0;
      }
      else {
        local_208 = (**(code **)pTVar10->Proxy->_padding_)();
        local_200 = (pTVar10->MNonFrequentData).Property.MUniqueIdx.Idx;
      }
      local_1fc.Word2 = 0;
      local_1fc.Word3 = 0;
      local_1fc.Word0 = 0;
      local_1fc.Word1 = 0;
      local_1ec.Word2 = 0;
      local_1ec.Word3 = 0;
      local_1ec.Word0 = 0;
      local_1ec.Word1 = 0;
      local_1dc = 0;
      if (pTVar10 != (TGeometryParticle<double,3> *)0x0) {
        if ((local_200 == -1) &&
           (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564218010>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf66,"CachedUniqueIdx.IsValid()"), bVar23)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar23 = IsInGameThread(), !bVar23))
           && (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_3133560516564218009>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                   ,0xf67,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()"),
              bVar23)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        Chaos::FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
                  (pTVar10,&local_1fc);
        Chaos::FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
                  (pTVar10,&local_1ec);
        local_1dc = 1;
      }
      pcVar11 = *(code **)(pIVar7->_padding_ + 0x98);
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext(this_00);
      (*pcVar11)(pIVar7,&local_210,&local_1c0,cVar5);
      param_1 = local_1d8;
      this_01 = local_1d0;
      param_2 = (bool)local_216;
    }
    pFVar25 = pFVar25 + 8;
  } while( true );
}

// AddReferencedObjects @ 1441a6280

void __thiscall FChaosScene::AddReferencedObjects(FChaosScene *this,FReferenceCollector *param_1)

{
  return;
}

// AreAnyTasksPending @ 1441a71d0

bool __thiscall FChaosScene::AreAnyTasksPending(FChaosScene *this)

{
  char cVar1;
  
  if (this->SceneSolver != (FPBDRigidsSolver *)0x0) {
    cVar1 = (**(code **)(this->SceneSolver->_padding_ + 0x10))();
    return cVar1 != '\0';
  }
  return false;
}

// BeginDestroy @ 1441a7210

void __thiscall FChaosScene::BeginDestroy(FChaosScene *this)

{
  if (this->SceneSolver == (FPBDRigidsSolver *)0x0) {
    return;
  }
  *(undefined1 *)((longlong)&((this->SceneSolver->MEvolution).Ptr)->_padding_ + 1) = 0;
  return;
}

// CopySolverAccelerationStructure @ 1441a7540

void __thiscall FChaosScene::CopySolverAccelerationStructure(FChaosScene *this)

{
  FPhysicsRwLock *this_00;
  uint uVar1;
  
  if (this->SceneSolver != (FPBDRigidsSolver *)0x0) {
    this_00 = (FPhysicsRwLock *)this->SceneSolver->_padding_;
    if (!`public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
         ::__l2::__CsvProfilerStat912) {
      FCsvProfilerTrace::OutputInlineStat
                ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index);
      `public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat912 = true;
    }
    uVar1 = _GCsvCategory_PhysicsVerbose.Index;
    FCsvProfiler::BeginStat
              ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index,
               "CSV_AcquireSceneWriteLock");
    Chaos::FPhysicsRwLock::WriteLock(this_00);
    FCsvProfiler::EndStat("AcquireSceneWriteLock",uVar1);
    Chaos::FPBDRigidsSolver::UpdateExternalAccelerationStructure_External
              (this->SceneSolver,&this->SolverAccelerationStructure);
    Chaos::FPhysicsRwLock::WriteUnlock(this_00);
  }
  return;
}

// EndFrame @ 1441abf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosScene::EndFrame(FChaosScene *this)

{
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FPBDRigidsSolver *pFVar6;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FChaosVDOptionalDataChannel *pFVar14;
  FSharedReferencer<1> FVar15;
  TConsoleVariableData<int> *pTVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_Scene_EndFrame> FVar23;
  uint *puVar24;
  FChaosVDThreadContext *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyAABBTreeElements> FVar26;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyGridOverflowElements> FVar27;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid> FVar28;
  FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid> FVar29;
  FCsvProfiler *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_FlipResults> FVar31;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar32;
  ulonglong uVar33;
  uint uVar34;
  longlong lVar35;
  FName FVar36;
  ForAnyElementType FVar37;
  FName FVar38;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FChaosCVDScopedDataChannelOverride local_180;
  undefined1 local_17f;
  undefined1 local_17e [6];
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> local_178;
  FColor_u_0 local_168;
  FColor_u_0 local_164;
  AABBTreeExpensiveStatistics local_160;
  FName local_148;
  FName local_140;
  AABBTreeStatistics local_138;
  FChaosVDContext local_128;
  FName local_108;
  FName local_f8;
  FPBDRigidsSolver *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *local_b0;
  FPBDRigidsSolver *local_a8;
  FChaosScene *local_a0;
  FDestructionSentinel local_98;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FChaosVDOptionalDataChannel *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  
  FVar23 = StatPtr_STAT_Scene_EndFrame;
  if (StatPtr_STAT_Scene_EndFrame == (FThreadSafeStaticStat<FStat_STAT_Scene_EndFrame>)0x0) {
    pFVar22 = ::FName::FName(&local_80,"STAT_Scene_EndFrame");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_Scene_EndFrame>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Scene_EndFrame,*pFVar22,
                        L"[Scene] - EndFrame","STATGROUP_ChaosEngine","STATCAT_Advanced",
                        L"ChaosEngine",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar38 = *(FName *)FVar23;
  bVar13 = false;
  bVar12 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar18 = false;
  bVar17 = false;
  if ((FVar38.ComparisonIndex.Value.Value == 0) && (FVar38.Number == 0)) {
LAB_1441ac0c6:
    bVar13 = bVar18;
    bVar12 = bVar17;
    bVar17 = false;
    FVar38 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_168.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_168._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar18 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_148.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_148,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                   ,0x1f9);
        bVar13 = true;
        bVar12 = true;
        bVar18 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1441ac0c6;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar17 = true;
  }
  pTVar16 = CVar_ChaosSimulationEnable.Ref;
  bVar18 = IsInParallelGameThread();
  if (!bVar18) {
    bVar18 = IsInGameThread();
    if (!bVar18) {
      bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FVar15.ReferenceController = CVDDC_Default.SharedReferenceCount.ReferenceController;
  pFVar14 = CVDDC_Default.Object;
  if ((pTVar16->ShadowedValue[0] == 0) || (this->SceneSolver == (FPBDRigidsSolver *)0x0))
  goto LAB_1441aca75;
  if (CVDDC_Default.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    (CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(CVDDC_Default.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = this->SceneSolver;
  local_128.OwnerID = (int)pFVar6->_padding_;
  local_128.Id = *(int *)((longlong)&pFVar6->_padding_ + 4);
  local_128.Type = (int)pFVar6->_padding_;
  local_128.Attributes = *(int *)((longlong)&pFVar6->_padding_ + 4);
  local_128.CurrentDataChannel.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6->_padding_;
  local_128.CurrentDataChannel.Object = (FChaosVDOptionalDataChannel *)pFVar6->_padding_;
  if (local_128.CurrentDataChannel.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.CurrentDataChannel.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.CurrentDataChannel.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = pFVar14;
  pTStack_48 = FVar15.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  puVar24 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_d8 = local_res20;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar25 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e0,puVar24);
  FChaosVDThreadContext::PushContext(pFVar25,&local_128);
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_180,&CVDDC_AccelerationStructures);
  FChaosVisualDebuggerTrace::TraceSceneAccelerationStructures(this->SolverAccelerationStructure);
  puVar24 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_c8 = &local_17f;
  local_d0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar25 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d0,puVar24);
  FChaosVDThreadContext::PopContext(pFVar25);
  puVar24 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_b8 = local_17e;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar25 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c0,puVar24);
  FChaosVDThreadContext::PopContext(pFVar25);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.CurrentDataChannel.SharedReferenceCount.ReferenceController);
  pIVar7 = this->SolverAccelerationStructure;
  local_160.StatGlobalPayloadsSize = 0;
  local_138.StatNumNonEmptyCellsInGrid = 0;
  local_138.StatNumElementsTooLargeForGrid = 0;
  local_138.StatNumDirtyElements = 0;
  local_138.StatNumGridOverflowElements = 0;
  local_160.StatMaxNumLeaves = 0;
  local_160.StatMaxDirtyElements = 0;
  local_160.StatMaxLeafSize = 0;
  local_160.StatMaxTreeDepth = 0;
  if (*(char *)((longlong)&pIVar7->_padding_ + 5) != '\x03') {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Type == TConcrete::StaticType",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                        ,399,L"");
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  GetAABBTreeStats(pIVar7,&local_138,&local_160);
  if (__CsvProfilerStat520 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("AABBTreeDirtyElementCount",_GCsvCategory_ChaosPhysics.Index);
    __CsvProfilerStat520 = true;
  }
  lVar35 = (longlong)local_138.StatNumDirtyElements;
  FCsvProfiler::RecordCustomStat
            ("AABBTreeDirtyElementCount",_GCsvCategory_ChaosPhysics.Index,
             local_138.StatNumDirtyElements,Set);
  FVar26 = StatPtr_STAT_ChaosCounter_NumDirtyAABBTreeElements;
  if (StatPtr_STAT_ChaosCounter_NumDirtyAABBTreeElements ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyAABBTreeElements>)0x0) {
    pFVar22 = ::FName::FName(&local_78,"STAT_ChaosCounter_NumDirtyAABBTreeElements");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyAABBTreeElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosCounter_NumDirtyAABBTreeElements,*pFVar22,
                        L"NumDirtyAABBTreeElements","STATGROUP_ChaosCounters","STATCAT_Advanced",
                        L"ChaosCounters",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FThreadStats::AddMessage<__int64>(*(FName *)FVar26,Set,lVar35,false);
  if (__CsvProfilerStat523 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("AABBTreeDirtyGridOverflowCount",_GCsvCategory_ChaosPhysics.Index);
    __CsvProfilerStat523 = true;
  }
  lVar35 = (longlong)local_138.StatNumGridOverflowElements;
  FCsvProfiler::RecordCustomStat
            ("AABBTreeDirtyGridOverflowCount",_GCsvCategory_ChaosPhysics.Index,
             local_138.StatNumGridOverflowElements,Set);
  FVar27 = StatPtr_STAT_ChaosCounter_NumDirtyGridOverflowElements;
  if (StatPtr_STAT_ChaosCounter_NumDirtyGridOverflowElements ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyGridOverflowElements>)0x0) {
    pFVar22 = ::FName::FName(&local_70,"STAT_ChaosCounter_NumDirtyGridOverflowElements");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyGridOverflowElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosCounter_NumDirtyGridOverflowElements,*pFVar22,
                        L"NumDirtyGridOverflowElements","STATGROUP_ChaosCounters","STATCAT_Advanced"
                        ,L"ChaosCounters",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FThreadStats::AddMessage<__int64>(*(FName *)FVar27,Set,lVar35,false);
  if (__CsvProfilerStat526 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("AABBTreeDirtyElementTooLargeCount",_GCsvCategory_ChaosPhysics.Index);
    __CsvProfilerStat526 = true;
  }
  lVar35 = (longlong)local_138.StatNumElementsTooLargeForGrid;
  FCsvProfiler::RecordCustomStat
            ("AABBTreeDirtyElementTooLargeCount",_GCsvCategory_ChaosPhysics.Index,
             local_138.StatNumElementsTooLargeForGrid,Set);
  FVar28 = StatPtr_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid;
  if (StatPtr_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid>)0x0) {
    pFVar22 = ::FName::FName(&local_68,"STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosCounter_NumDirtyElementsTooLargeForGrid,*pFVar22,
                        L"NumDirtyElementsTooLargeForGrid","STATGROUP_ChaosCounters",
                        "STATCAT_Advanced",L"ChaosCounters",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FThreadStats::AddMessage<__int64>(*(FName *)FVar28,Set,lVar35,false);
  if (__CsvProfilerStat529 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("AABBTreeDirtyElementNonEmptyCellCount",_GCsvCategory_ChaosPhysics.Index);
    __CsvProfilerStat529 = true;
  }
  lVar35 = (longlong)local_138.StatNumNonEmptyCellsInGrid;
  FCsvProfiler::RecordCustomStat
            ("AABBTreeDirtyElementNonEmptyCellCount",_GCsvCategory_ChaosPhysics.Index,
             local_138.StatNumNonEmptyCellsInGrid,Set);
  FVar29 = StatPtr_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid;
  if (StatPtr_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid>)0x0) {
    pFVar22 = ::FName::FName(&local_60,"STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosCounter_NumDirtyNonEmptyCellsInGrid,*pFVar22,
                        L"NumDirtyNonEmptyCellsInGrid","STATGROUP_ChaosCounters","STATCAT_Advanced",
                        L"ChaosCounters",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FThreadStats::AddMessage<__int64>(*(FName *)FVar29,Set,lVar35,false);
  pFVar30 = FCsvProfiler::Get();
  bVar18 = FCsvProfiler::IsCapturing(pFVar30);
  if (bVar18) {
    pFVar30 = FCsvProfiler::Get();
    bVar18 = FCsvProfiler::IsCategoryEnabled(pFVar30,_GCsvCategory_AABBTreeExpensiveStats.Index);
    if (bVar18) {
      if (__CsvProfilerStat535 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AABBTreeMaxNumLeaves",_GCsvCategory_AABBTreeExpensiveStats.Index);
        __CsvProfilerStat535 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AABBTreeMaxNumLeaves",_GCsvCategory_AABBTreeExpensiveStats.Index,
                 local_160.StatMaxNumLeaves,Set);
      if (__CsvProfilerStat536 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AABBTreeMaxDirtyElements",_GCsvCategory_AABBTreeExpensiveStats.Index);
        __CsvProfilerStat536 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AABBTreeMaxDirtyElements",_GCsvCategory_AABBTreeExpensiveStats.Index,
                 local_160.StatMaxDirtyElements,Set);
      if (__CsvProfilerStat537 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AABBTreeMaxTreeDepth",_GCsvCategory_AABBTreeExpensiveStats.Index);
        __CsvProfilerStat537 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AABBTreeMaxTreeDepth",_GCsvCategory_AABBTreeExpensiveStats.Index,
                 local_160.StatMaxTreeDepth,Set);
      if (__CsvProfilerStat538 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AABBTreeMaxLeafSize",_GCsvCategory_AABBTreeExpensiveStats.Index);
        __CsvProfilerStat538 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AABBTreeMaxLeafSize",_GCsvCategory_AABBTreeExpensiveStats.Index,
                 local_160.StatMaxLeafSize,Set);
      if (__CsvProfilerStat539 == false) {
        FCsvProfilerTrace::OutputInlineStat
                  ("AABBTreeGlobalPayloadsSize",_GCsvCategory_AABBTreeExpensiveStats.Index);
        __CsvProfilerStat539 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("AABBTreeGlobalPayloadsSize",_GCsvCategory_AABBTreeExpensiveStats.Index,
                 local_160.StatGlobalPayloadsSize,Set);
    }
  }
  bVar18 = IsCompletionEventComplete(this);
  if (!bVar18) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsCompletionEventComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                        ,0x221,L"");
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FVar32 = (this->CompletionEvents).AllocatorInstance.SecondaryData;
  pTVar1 = &this->CompletionEvents;
  piVar2 = &(this->CompletionEvents).ArrayMax;
  iVar5 = (this->CompletionEvents).ArrayNum;
  if (*piVar2 < 0) {
    if (FVar32 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar32 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar1;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar32,iVar5);
    (this->CompletionEvents).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    if (FVar32 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar32 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar1;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar32,iVar5);
    (this->CompletionEvents).ArrayNum = 0;
  }
  local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.ArrayNum = 0;
  local_178.ArrayMax = 0;
  if (this->SceneSolver != (FPBDRigidsSolver *)0x0) {
    if ((char)this->SceneSolver->_padding_ == '\0') {
      FChaosSolversModule::GetSolversMutable(this->ChaosModule,this->Owner,&local_178);
    }
    local_e8 = this->SceneSolver;
    TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<Chaos::FPhysicsSolverBase_*>(&local_178,(FPhysicsSolverBase **)&local_e8);
  }
  FVar31 = StatPtr_STAT_FlipResults;
  if (StatPtr_STAT_FlipResults == (FThreadSafeStaticStat<FStat_STAT_FlipResults>)0x0) {
    pFVar22 = ::FName::FName(&local_58,"STAT_FlipResults");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_FlipResults>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FlipResults,*pFVar22,
                        L"Flip Results","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar36 = *(FName *)FVar31;
  bVar18 = false;
  bVar19 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_1441ac901:
    bVar11 = false;
    FVar36 = local_f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_164.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_164._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar18 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar36.ComparisonIndex.Value.Value;
        local_140.Number = FVar36.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                   ,0x22b);
        bVar18 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1441ac901;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar11 = true;
  }
  CopySolverAccelerationStructure(this);
  iVar5 = local_178.ArrayNum;
  uVar33 = (ulonglong)local_178.ArrayNum;
  pFVar4 = local_178.AllocatorInstance.Data + uVar33 * 8;
  FVar37.Data = local_178.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar33 != iVar5) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar37.Data == pFVar4) break;
    local_a8 = *(FPBDRigidsSolver **)FVar37.Data;
    local_b0 = &local_178;
    local_a0 = this;
    `FChaosScene::EndFrame'::__l74::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>
              (&local_b0,local_a8);
    uVar33 = local_178._8_8_ & 0xffffffff;
    FVar37.Data = FVar37.Data + 8;
  }
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar36,CycleScopeEnd);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPhysScenePostTick,
             (FWriteAccessScope *)&local_98);
  puVar3 = &(this->OnPhysScenePostTick).field_0x1c;
  *(int *)puVar3 = *(int *)puVar3 + 1;
  bVar18 = false;
  uVar34 = *(int *)&(this->OnPhysScenePostTick).field_0x10 - 1;
  if (-1 < (int)uVar34) {
    lVar35 = (longlong)(int)uVar34 << 4;
    bVar18 = false;
    do {
      uVar21 = 0;
      if ((int)uVar34 < *(int *)&(this->OnPhysScenePostTick).field_0x10) {
        uVar21 = ~uVar34 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      lVar8 = *(longlong *)&(this->OnPhysScenePostTick).field_0x8;
      if ((*(int *)(lVar8 + 8 + lVar35) == 0) ||
         (plVar9 = *(longlong **)(lVar8 + lVar35), plVar9 == (longlong *)0x0)) {
LAB_1441aca28:
        bVar18 = true;
      }
      else {
        cVar20 = (**(code **)(*plVar9 + 0x68))();
        if (cVar20 == '\0') goto LAB_1441aca28;
      }
      lVar35 = lVar35 + -0x10;
      uVar34 = uVar34 - 1;
    } while (-1 < (int)uVar34);
  }
  puVar3 = &(this->OnPhysScenePostTick).field_0x1c;
  *(int *)puVar3 = *(int *)puVar3 + -1;
  if (bVar18) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnPhysScenePostTick,
               false);
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
LAB_1441aca75:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  return;
}

// Flush @ 1441acbe0

void __thiscall FChaosScene::Flush(FChaosScene *this)

{
  int *piVar1;
  int iVar2;
  FPBDRigidsSolver *this_00;
  FPBDRigidsEvolutionGBF *this_01;
  code *pcVar3;
  bool bVar4;
  double in_XMM1_Qa;
  undefined8 *local_res8;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                       ,0xa7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = this->SceneSolver;
  if (this_00 != (FPBDRigidsSolver *)0x0) {
    Chaos::FPhysicsSolverBase::AdvanceAndDispatch_External((FPhysicsSolverBase *)this_00,in_XMM1_Qa)
    ;
    if (local_res8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res8 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    Chaos::FPhysicsSolverBase::WaitOnPendingTasks_External((FPhysicsSolverBase *)this_00);
    this_01 = (this_00->MEvolution).Ptr;
    if (this_01 != (FPBDRigidsEvolutionGBF *)0x0) {
      Chaos::FPBDRigidsEvolutionBase::FlushSpatialAcceleration((FPBDRigidsEvolutionBase *)this_01);
    }
  }
  CopySolverAccelerationStructure(this);
  return;
}

// GetCompletionEvents @ 1441adab0

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
FChaosScene::GetCompletionEvents
          (FChaosScene *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  FVar4 = (this->CompletionEvents).AllocatorInstance.SecondaryData;
  iVar1 = (this->CompletionEvents).ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (FVar4 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->CompletionEvents;
  }
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 4;
    return __return_storage_ptr__;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
  if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar3 = FVar2;
  }
  ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
            ((void *)FVar3,(TRefCountPtr<FBaseGraphTask> *)FVar4,iVar1);
  return __return_storage_ptr__;
}

// GetPhysicsSolvers @ 1441af1b0

TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> * __thiscall
FChaosScene::GetPhysicsSolvers
          (FChaosScene *this,
          TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FPBDRigidsSolver *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->SceneSolver != (FPBDRigidsSolver *)0x0) {
    if ((char)this->SceneSolver->_padding_ == '\0') {
      FChaosSolversModule::GetSolversMutable(this->ChaosModule,this->Owner,__return_storage_ptr__);
    }
    local_res8 = this->SceneSolver;
    TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<Chaos::FPhysicsSolverBase_*>
              (__return_storage_ptr__,(FPhysicsSolverBase **)&local_res8);
  }
  return __return_storage_ptr__;
}

// GetReferencerName @ 1441afd70

FString * __thiscall
FChaosScene::GetReferencerName(FChaosScene *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"FChaosScene");
  return __return_storage_ptr__;
}

// GetSpacialAcceleration @ 1441b02d0

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
FChaosScene::GetSpacialAcceleration(FChaosScene *this)

{
  return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
         this->SolverAccelerationStructure;
}

// GetSpacialAcceleration @ 1441b02e0

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
FChaosScene::GetSpacialAcceleration(FChaosScene *this)

{
  return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
         this->SolverAccelerationStructure;
}

// IsCompletionEventComplete @ 1441b1440

bool __thiscall FChaosScene::IsCompletionEventComplete(FChaosScene *this)

{
  int *piVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  undefined1 local_res8 [8];
  
  FVar6 = (this->CompletionEvents).AllocatorInstance.SecondaryData;
  iVar4 = (this->CompletionEvents).ArrayNum;
  if (FVar6 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->CompletionEvents;
  }
  FVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar6 + (longlong)iVar4 * 8);
  while( true ) {
    if ((this->CompletionEvents).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar2) break;
    puVar5 = *(undefined8 **)FVar6;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 6) = *(int *)(puVar5 + 6) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)(puVar5 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*(char *)(puVar5 + 0x1a) == '\0') {
        if (iVar3 == 1) {
          (**(code **)*puVar5)(puVar5,1);
        }
        return false;
      }
      if (iVar3 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar6 + 8);
  }
  return true;
}

// KillSafeAsyncTasks @ 1441b1880

void __thiscall FChaosScene::KillSafeAsyncTasks(FChaosScene *this)

{
  if (this->SceneSolver != (FPBDRigidsSolver *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441b188c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->SceneSolver->_padding_ + 8))();
    return;
  }
  return;
}

// OnStartFrame @ 1441b2100

float __thiscall FChaosScene::OnStartFrame(FChaosScene *this,float param_1)

{
  return param_1;
}

// OnSyncBodies @ 1441b2110

void __thiscall FChaosScene::OnSyncBodies(FChaosScene *this,FPhysicsSolverBase *param_1)

{
  FDispatcher local_res18 [16];
  
  Chaos::FPhysicsSolverBase::
  PullPhysicsStateForEachDirtyProxy_External<_FChaosScene::OnSyncBodies_::__l2::FDispatcher>
            (param_1,local_res18);
  return;
}

// RemoveActorFromAccelerationStructure @ 1441b4400

void __thiscall
FChaosScene::RemoveActorFromAccelerationStructure
          (FChaosScene *this,FSingleParticlePhysicsProxy *param_1)

{
  TGeometryParticle<double,3> *pTVar1;
  FPhysicsRwLock *this_00;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  TGeometryParticle<double,3> *local_48;
  undefined8 local_40;
  int local_38;
  FCollisionFilterData local_34;
  FCollisionFilterData local_24;
  undefined1 local_14;
  
  pTVar1 = (param_1->Particle).Ptr;
  if ((this->SolverAccelerationStructure !=
       (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) &&
     ((pTVar1->MNonFrequentData).Property.MUniqueIdx.Idx != -1)) {
    this_00 = (FPhysicsRwLock *)this->SceneSolver->_padding_;
    if (!`public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
         ::__l2::__CsvProfilerStat912) {
      FCsvProfilerTrace::OutputInlineStat
                ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index);
      `public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat912 = true;
    }
    uVar3 = _GCsvCategory_PhysicsVerbose.Index;
    FCsvProfiler::BeginStat
              ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index,
               "CSV_AcquireSceneWriteLock");
    Chaos::FPhysicsRwLock::WriteLock(this_00);
    FCsvProfiler::EndStat("AcquireSceneWriteLock",uVar3);
    local_40 = 0;
    local_48 = pTVar1;
    if (pTVar1->Proxy != (IPhysicsProxyBase *)0x0) {
      local_40 = (**(code **)pTVar1->Proxy->_padding_)();
    }
    local_38 = (pTVar1->MNonFrequentData).Property.MUniqueIdx.Idx;
    local_34.Word2 = 0;
    local_34.Word3 = 0;
    local_34.Word0 = 0;
    local_34.Word1 = 0;
    local_24.Word2 = 0;
    local_24.Word3 = 0;
    local_24.Word0 = 0;
    local_24.Word1 = 0;
    local_14 = 0;
    if ((local_38 == -1) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3133560516564218010>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xf66,"CachedUniqueIdx.IsValid()"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar4 = IsInGameThread(), !bVar4)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3133560516564218009>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xf67,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()"), bVar4))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    Chaos::FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>(pTVar1,&local_34);
    Chaos::FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>(pTVar1,&local_24);
    local_14 = 1;
    (**(code **)(this->SolverAccelerationStructure->_padding_ + 0x88))
              (this->SolverAccelerationStructure,&local_48,
               (pTVar1->MNonFrequentData).Property.MSpatialIdx);
    Chaos::FPhysicsRwLock::WriteUnlock(this_00);
  }
  return;
}

// RemoveActorFromAccelerationStructureImp @ 1441b45a0

void __thiscall
FChaosScene::RemoveActorFromAccelerationStructureImp
          (FChaosScene *this,TGeometryParticle<double,3> *param_1)

{
  FPhysicsRwLock *this_00;
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TGeometryParticle<double,3> *local_48;
  undefined8 local_40;
  int local_38;
  FCollisionFilterData local_34;
  FCollisionFilterData local_24;
  undefined1 local_14;
  
  if ((this->SolverAccelerationStructure !=
       (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) &&
     ((param_1->MNonFrequentData).Property.MUniqueIdx.Idx != -1)) {
    this_00 = (FPhysicsRwLock *)this->SceneSolver->_padding_;
    if (!`public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
         ::__l2::__CsvProfilerStat912) {
      FCsvProfilerTrace::OutputInlineStat
                ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index);
      `public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat912 = true;
    }
    uVar2 = _GCsvCategory_PhysicsVerbose.Index;
    FCsvProfiler::BeginStat
              ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index,
               "CSV_AcquireSceneWriteLock");
    Chaos::FPhysicsRwLock::WriteLock(this_00);
    FCsvProfiler::EndStat("AcquireSceneWriteLock",uVar2);
    local_40 = 0;
    local_48 = param_1;
    if (param_1->Proxy != (IPhysicsProxyBase *)0x0) {
      local_40 = (**(code **)param_1->Proxy->_padding_)();
    }
    local_38 = (param_1->MNonFrequentData).Property.MUniqueIdx.Idx;
    local_34.Word2 = 0;
    local_34.Word3 = 0;
    local_34.Word0 = 0;
    local_34.Word1 = 0;
    local_24.Word2 = 0;
    local_24.Word3 = 0;
    local_24.Word0 = 0;
    local_24.Word1 = 0;
    local_14 = 0;
    if ((local_38 == -1) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3133560516564218010>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xf66,"CachedUniqueIdx.IsValid()"), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3133560516564218009>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xf67,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()"), bVar3))
    {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Chaos::FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>(param_1,&local_34)
    ;
    Chaos::FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>(param_1,&local_24);
    local_14 = 1;
    (**(code **)(this->SolverAccelerationStructure->_padding_ + 0x88))
              (this->SolverAccelerationStructure,&local_48,
               (param_1->MNonFrequentData).Property.MSpatialIdx);
    Chaos::FPhysicsRwLock::WriteUnlock(this_00);
  }
  return;
}

// SetDebugDrawScene @ 1441b67d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosScene::SetDebugDrawScene
          (FChaosScene *this,TSharedPtr<ChaosDD::Private::FChaosDDScene,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FChaosDDScene *pFVar2;
  FPBDRigidsSolver *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSimCallbackCommandObject *pFVar6;
  undefined ***pppuVar7;
  FSimCallbackCommandObject *pFVar8;
  FSimCallbackCommandObject *pFVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  FChaosDDScene *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  FSimCallbackCommandObject *local_48;
  undefined **local_38;
  FChaosScene *pFStack_30;
  undefined8 local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar8 = (FSimCallbackCommandObject *)0x0;
  local_64 = 0;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = (this->CDDScene).Object;
  pTStack_58 = (this->CDDScene).SharedReferenceCount.ReferenceController;
  (this->CDDScene).Object = pFVar2;
  (this->CDDScene).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  pFVar3 = this->SceneSolver;
  if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = ::operator_new(0xc0);
  pFVar9 = pFVar8;
  if (pFVar6 != (FSimCallbackCommandObject *)0x0) {
    pFStack_30 = this;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FChaosScene::SetDebugDrawScene'::`2'::<lambda_1>,1,0>::
                _vftable_;
    local_20 = (undefined ***)0x0;
    *(undefined ***)pFVar6 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar6->field_0x8 = 0;
    *(undefined8 *)&pFVar6->field_0x10 = 0;
    *(undefined8 *)&pFVar6->field_0x18 = 0;
    *(undefined8 *)&pFVar6->field_0x20 = 0;
    *(undefined8 *)&pFVar6->field_0x28 = 0;
    *(undefined2 *)&pFVar6->field_0x40 = 1;
    *(code **)&pFVar6->Func =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FChaosScene::SetDebugDrawScene'::__l2::<lambda_1>,void>::Call;
    *(undefined8 *)&(pFVar6->Func).field_0x28 = 0;
    *(undefined ***)&(pFVar6->Func).field_0x10 =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`FChaosScene::SetDebugDrawScene'::`2'::<lambda_1>,1,0>::_vftable_;
    *(FChaosScene **)&(pFVar6->Func).field_0x18 = this;
    *(undefined8 *)&(pFVar6->Func).field_0x20 = local_28;
    local_48 = (FSimCallbackCommandObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`FChaosScene::SetDebugDrawScene'::__l2::<lambda_1>,void>::Call;
    if (*(longlong *)&pFVar6->Func != 0) {
      local_48 = pFVar8;
    }
    *(undefined8 *)&pFVar6->Func2 = 0;
    *(undefined8 *)&(pFVar6->Func2).field_0x28 = 0;
    pFVar6->bFuncHasTimeParameters = false;
    pFVar6->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar6->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_68);
    }
    pFVar8 = pFVar6;
    pFVar9 = (FSimCallbackCommandObject *)&DAT_00000001;
  }
  if ((pFVar9 != (FSimCallbackCommandObject *)0x0) && (local_48 != (FSimCallbackCommandObject *)0x0)
     ) {
    pppuVar7 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar7 = local_20;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  Chaos::FChaosMarshallingManager::RegisterSimCommand_External
            ((FChaosMarshallingManager *)&pFVar3->_padding_,pFVar8);
  return;
}

// SetGravity @ 1441b7420

void __thiscall FChaosScene::SetGravity(FChaosScene *this,TVector<double,3> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FSimCallbackInput *pFVar5;
  
  lVar2 = *(longlong *)param_1;
  uVar3 = *(undefined4 *)&param_1->field_0x8;
  uVar4 = *(undefined4 *)&param_1->field_0xc;
  lVar1 = *(longlong *)&param_1->field_0x10;
  pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                     ((ISimCallbackObject *)this->SimCallback);
  pFVar5[1]._padding_ = lVar2;
  pFVar5[1].NumSteps = uVar3;
  *(undefined4 *)&pFVar5[1].field_0xc = uVar4;
  pFVar5[2]._padding_ = lVar1;
  return;
}

// SetUpForFrame @ 1441b9c40

void __thiscall
FChaosScene::SetUpForFrame
          (FChaosScene *this,TVector<double> *param_1,float param_2,float param_3,float param_4,
          float param_5,int param_6,bool param_7)

{
  double dVar1;
  FPBDRigidsSolver *pFVar2;
  double dVar3;
  double dVar4;
  FSimCallbackInput *pFVar5;
  float fVar6;
  float fVar7;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                     ((ISimCallbackObject *)this->SimCallback);
  pFVar5[1]._padding_ = (longlong)dVar3;
  *(double *)&pFVar5[1].NumSteps = dVar4;
  pFVar5[2]._padding_ = (longlong)dVar1;
  fVar7 = param_2 * this->MNetworkDeltaTimeScale;
  fVar6 = fVar7;
  if (param_7) {
    if ((0.0 < param_5) && (fVar6 = (float)param_6 * param_5, fVar7 <= (float)param_6 * param_5)) {
      fVar6 = fVar7;
    }
  }
  else if ((0.0 < param_4) && (param_4 <= fVar7)) {
    fVar6 = param_4;
  }
  this->MDeltaTime = fVar6;
  pFVar2 = this->SceneSolver;
  if (pFVar2 != (FPBDRigidsSolver *)0x0) {
    if (!param_7) {
      param_5 = param_4;
    }
    *(float *)&pFVar2->_padding_ = param_5;
    if (!param_7) {
      param_6 = 1;
    }
    *(int *)&pFVar2->_padding_ = param_6;
    if (param_3 <= __real_322bcc77) {
      param_3 = __real_322bcc77;
    }
    *(float *)((longlong)&pFVar2->_padding_ + 4) = param_3;
  }
  return;
}

// StartFrame @ 1441ba5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosScene::StartFrame(FChaosScene *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TConsoleVariableData<int> *pTVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Scene_StartFrame> FVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  ForAnyElementType FVar18;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar19;
  float fVar20;
  undefined4 uVar21;
  uint local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  undefined8 *local_88;
  FPBDRigidsSolver *local_80;
  FName local_78;
  FName local_70;
  TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  FVar13 = StatPtr_STAT_Scene_StartFrame;
  if (StatPtr_STAT_Scene_StartFrame == (FThreadSafeStaticStat<FStat_STAT_Scene_StartFrame>)0x0) {
    pFVar12 = ::FName::FName(&local_78,"STAT_Scene_StartFrame");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Scene_StartFrame>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Scene_StartFrame,*pFVar12,
                        L"[Scene] - StartFrame","STATGROUP_ChaosEngine","STATCAT_Advanced",
                        L"ChaosEngine",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.Value;
        local_res20.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                   ,0x16f);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar16.Value;
      uStackX_14 = uVar15;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_1441ba731;
    }
  }
  bVar6 = false;
  FVar17 = local_70;
LAB_1441ba731:
  pTVar8 = CVar_ChaosSimulationEnable.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar8->ShadowedValue[0] != 0) {
    fVar20 = this->MDeltaTime;
    uVar21 = 0;
    (**(code **)(this->_padding_ + 0x20))(this);
    local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60[0].ArrayNum = 0;
    local_60[0].ArrayMax = 0;
    if (this->SceneSolver != (FPBDRigidsSolver *)0x0) {
      if ((char)this->SceneSolver->_padding_ == '\0') {
        FChaosSolversModule::GetSolversMutable(this->ChaosModule,this->Owner,local_60);
      }
      local_80 = this->SceneSolver;
      TArray<Chaos::FPhysicsSolverBase_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<Chaos::FPhysicsSolverBase_*>(local_60,(FPhysicsSolverBase **)&local_80);
    }
    iVar9 = local_60[0].ArrayNum;
    pFVar2 = local_60[0].AllocatorInstance.Data + (longlong)local_60[0].ArrayNum * 8;
    FVar18.Data = local_60[0].AllocatorInstance.Data;
    while( true ) {
      if (local_60[0].ArrayNum != iVar9) {
        local_res10 = local_res10 & 0xffffff00;
        `TCheckedPointerIterator<Chaos::FPhysicsSolverBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (FVar18.Data == pFVar2) break;
      Chaos::FPhysicsSolverBase::AdvanceAndDispatch_External
                (*(FPhysicsSolverBase **)FVar18.Data,(double)CONCAT44(uVar21,fVar20));
      if (local_88 != (undefined8 *)0x0) {
        FVar3 = (this->CompletionEvents).AllocatorInstance.SecondaryData;
        FVar19 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->CompletionEvents;
        FVar14 = FVar19;
        if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar14 = FVar3;
        }
        if ((ulonglong)FVar14 <= &local_88) {
          FVar14 = FVar19;
          if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar14 = FVar3;
          }
          if ((&local_88 <
               (undefined8 **)((longlong)FVar14 + (longlong)(this->CompletionEvents).ArrayMax * 8))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
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
        iVar11 = (this->CompletionEvents).ArrayNum;
        piVar1 = &(this->CompletionEvents).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar19,piVar1);
        }
        (this->CompletionEvents).ArrayNum = iVar11 + 1;
        FVar3 = (this->CompletionEvents).AllocatorInstance.SecondaryData;
        if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar19 = FVar3;
        }
        *(undefined8 *)((longlong)FVar19 + (longlong)iVar11 * 8) = 0;
        *(undefined8 **)((longlong)FVar19 + (longlong)iVar11 * 8) = local_88;
        if (local_88 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_88 + 6) = *(int *)(local_88 + 6) + 1;
          UNLOCK();
          if (local_88 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_88 + 6);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar11 == 1) && (local_88 != (undefined8 *)0x0)) {
              (**(code **)*local_88)(local_88,1);
            }
          }
        }
      }
      FVar18.Data = FVar18.Data + 8;
    }
    if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].AllocatorInstance.Data);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// UpdateActorInAccelerationStructure @ 1441bc330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FChaosScene::UpdateActorInAccelerationStructure
          (FChaosScene *this,FSingleParticlePhysicsProxy **param_1)

{
  float fVar1;
  undefined8 uVar2;
  bool bVar3;
  FPhysicsRwLock *this_00;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar4;
  FSingleParticlePhysicsProxy *this_01;
  FImplicitObject *pFVar5;
  TGeometryParticle<double,3> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  bool bVar11;
  TAABB<double,3> *pTVar12;
  undefined1 auStackY_1d8 [32];
  TGeometryParticle<double,3> *local_1a0;
  undefined8 local_198;
  int local_190;
  FCollisionFilterData local_18c;
  FCollisionFilterData local_17c;
  undefined1 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [48];
  TAABB<double,3> local_108;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->SolverAccelerationStructure !=
      (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    this_00 = (FPhysicsRwLock *)this->SceneSolver->_padding_;
    if (!`public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
         ::__l2::__CsvProfilerStat912) {
      FCsvProfilerTrace::OutputInlineStat
                ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index);
      `public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat912 = true;
    }
    uVar10 = _GCsvCategory_PhysicsVerbose.Index;
    FCsvProfiler::BeginStat
              ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index,
               "CSV_AcquireSceneWriteLock");
    Chaos::FPhysicsRwLock::WriteLock(this_00);
    FCsvProfiler::EndStat("AcquireSceneWriteLock",uVar10);
    pIVar4 = this->SolverAccelerationStructure;
    this_01 = *param_1;
    if (pIVar4 != (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)
                  0x0) {
      local_168 = ___xmm_7fefffffffffffff7fefffffffffffff;
      uStack_160 = _UNK_150a9e648;
      local_148 = ___xmm_ffefffffffffffffffefffffffffffff;
      uStack_140 = _UNK_1508ffb58;
      local_158 = ___xmm_ffefffffffffffff7fefffffffffffff;
      uStack_150 = _UNK_150a9e6d8;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_01);
      bVar3 = ((((this_01->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference)->
              bHasBoundingBox;
      if (bVar3 != false) {
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_01);
        pFVar5 = (((this_01->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference;
        pTVar12 = (TAABB<double,3> *)(**(code **)(pFVar5->_padding_ + 0x90))(pFVar5,local_138);
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_01);
        pTVar6 = (this_01->Particle).Ptr;
        fVar1 = *(float *)&(pTVar6->MXR).Property.MR;
        uVar2 = *(undefined8 *)&(pTVar6->MXR).Property.MR.field_0x8;
        dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
        dVar9 = (double)*(float *)&(pTVar6->MXR).Property.MR.field_0x4;
        Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_01);
        pTVar6 = (this_01->Particle).Ptr;
        local_c8._8_4_ = SUB84(dVar8,0);
        local_c8._0_8_ = (double)(float)uVar2;
        local_c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_d8._8_4_ = SUB84(dVar9,0);
        local_d8._0_8_ = (double)fVar1;
        local_d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_b8 = *(undefined8 *)&(pTVar6->MXR).Property.MX;
        uStack_b0 = *(undefined8 *)&(pTVar6->MXR).Property.MX.field_0x8;
        local_a8 = *(undefined8 *)&(pTVar6->MXR).Property.MX.field_0x10;
        local_88 = ___xmm_00000000000000003ff0000000000000;
        uStack_80 = _UNK_150689518;
        uStack_a0 = 0;
        local_98 = ___xmm_3ff00000000000003ff0000000000000;
        uStack_90 = _UNK_150689688;
        pTVar12 = Chaos::TAABB<double,3>::TransformedAABB
                            (pTVar12,&local_108,(TRigidTransform<double,3> *)local_d8);
        local_168 = *(undefined8 *)&pTVar12->MMin;
        uStack_160 = *(undefined8 *)&(pTVar12->MMin).field_0x8;
        local_158 = *(undefined8 *)&(pTVar12->MMin).field_0x10;
        uStack_150 = *(undefined8 *)&pTVar12->MMax;
        local_148 = *(undefined8 *)&(pTVar12->MMax).field_0x8;
        uStack_140 = *(undefined8 *)&(pTVar12->MMax).field_0x10;
      }
      pTVar6 = ((*param_1)->Particle).Ptr;
      local_1a0 = pTVar6;
      if (pTVar6 == (TGeometryParticle<double,3> *)0x0) {
        local_198 = 0;
        local_190 = -1;
      }
      else if (pTVar6->Proxy == (IPhysicsProxyBase *)0x0) {
        local_198 = 0;
        local_190 = (pTVar6->MNonFrequentData).Property.MUniqueIdx.Idx;
      }
      else {
        local_198 = (**(code **)pTVar6->Proxy->_padding_)();
        local_190 = (pTVar6->MNonFrequentData).Property.MUniqueIdx.Idx;
      }
      local_18c.Word2 = 0;
      local_18c.Word3 = 0;
      local_18c.Word0 = 0;
      local_18c.Word1 = 0;
      local_17c.Word2 = 0;
      local_17c.Word3 = 0;
      local_17c.Word0 = 0;
      local_17c.Word1 = 0;
      local_16c = 0;
      if (pTVar6 != (TGeometryParticle<double,3> *)0x0) {
        if (local_190 == -1) {
          bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3133560516564218010>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                              ,0xf66,"CachedUniqueIdx.IsValid()");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (Chaos::CVars::bEnableAsyncInitBody == false) {
          bVar11 = IsInGameThread();
          if (!bVar11) {
            bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3133560516564218009>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                ,0xf67,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()");
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
        Chaos::FAccelerationStructureHandle::
        ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
                  (pTVar6,&local_18c);
        Chaos::FAccelerationStructureHandle::
        ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
                  (pTVar6,&local_17c);
        local_16c = 1;
      }
      pcVar7 = *(code **)(pIVar4->_padding_ + 0x98);
      Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_01);
      (*pcVar7)(pIVar4,&local_1a0,&local_168,bVar3);
    }
    Chaos::FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
              ((FPhysicsSolverBase *)this->SceneSolver,((*param_1)->Particle).Ptr,Update);
    Chaos::FPhysicsRwLock::WriteUnlock(this_00);
  }
  return;
}

// UpdateActorsInAccelerationStructure @ 1441bc6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FChaosScene::UpdateActorsInAccelerationStructure
          (FChaosScene *this,TArrayView<Chaos::FSingleParticlePhysicsProxy_*,int> *param_1)

{
  float fVar1;
  undefined8 uVar2;
  FSingleParticlePhysicsProxy **ppFVar3;
  FSingleParticlePhysicsProxy *this_00;
  FImplicitObject *pFVar4;
  TGeometryParticle<double,3> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *pIVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  TAABB<double,3> *pTVar24;
  int iVar25;
  FPhysicsRwLock *this_01;
  uint uVar26;
  longlong lVar27;
  undefined1 auStackY_258 [32];
  TGeometryParticle<double,3> *local_220;
  undefined8 local_218;
  int local_210;
  FCollisionFilterData local_20c;
  FCollisionFilterData local_1fc;
  undefined1 local_1ec;
  ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *local_1e0;
  FPhysicsRwLock *local_1d8;
  FChaosScene *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [48];
  TAABB<double,3> local_168;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (this->SolverAccelerationStructure !=
      (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
    this_01 = (FPhysicsRwLock *)this->SceneSolver->_padding_;
    local_1d8 = this_01;
    local_1d0 = this;
    if (!`public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
         ::__l2::__CsvProfilerStat912) {
      FCsvProfilerTrace::OutputInlineStat
                ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index);
      `public:___cdecl_Chaos::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>::TPhysicsSceneGuardScopedWrite<Chaos::FPhysicsRwLock>(Chaos::FPhysicsRwLock&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat912 = true;
    }
    uVar26 = _GCsvCategory_PhysicsVerbose.Index;
    FCsvProfiler::BeginStat
              ("AcquireSceneWriteLock",_GCsvCategory_PhysicsVerbose.Index,
               "CSV_AcquireSceneWriteLock");
    Chaos::FPhysicsRwLock::WriteLock(this_01);
    FCsvProfiler::EndStat("AcquireSceneWriteLock",uVar26);
    uVar19 = _UNK_150a9e6d8;
    uVar18 = ___xmm_ffefffffffffffff7fefffffffffffff;
    uVar17 = _UNK_150a9e648;
    uVar16 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uVar15 = _UNK_1508ffb58;
    uVar14 = ___xmm_ffefffffffffffffffefffffffffffff;
    uVar13 = _UNK_150689688;
    uVar12 = ___xmm_3ff00000000000003ff0000000000000;
    uVar11 = _UNK_150689518;
    uVar10 = ___xmm_00000000000000003ff0000000000000;
    local_1e0 = this->SolverAccelerationStructure;
    if (local_1e0 !=
        (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      iVar25 = param_1->ArrayNum;
      uVar26 = 0;
      if (0 < (longlong)iVar25) {
        lVar27 = 0;
        do {
          uVar23 = 0;
          if ((int)uVar26 < param_1->ArrayNum) {
            uVar23 = ~uVar26 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar21)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          ppFVar3 = param_1->DataPtr;
          this_00 = ppFVar3[lVar27];
          if (this_00 != (FSingleParticlePhysicsProxy *)0x0) {
            local_1c8 = uVar16;
            uStack_1c0 = uVar17;
            local_1b8 = uVar18;
            uStack_1b0 = uVar19;
            local_1a8 = uVar14;
            uStack_1a0 = uVar15;
            Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                      ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
            bVar21 = ((((this_00->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference)->
                     bHasBoundingBox;
            if (bVar21 != false) {
              Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                        ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
              pFVar4 = (((this_00->Particle).Ptr)->MNonFrequentData).Property.MGeometry.Reference;
              pTVar24 = (TAABB<double,3> *)(**(code **)(pFVar4->_padding_ + 0x90))(pFVar4,local_198)
              ;
              Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                        ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
              pTVar5 = (this_00->Particle).Ptr;
              fVar1 = *(float *)&(pTVar5->MXR).Property.MR;
              uVar2 = *(undefined8 *)&(pTVar5->MXR).Property.MR.field_0x8;
              dVar8 = (double)(float)((ulonglong)uVar2 >> 0x20);
              dVar9 = (double)*(float *)&(pTVar5->MXR).Property.MR.field_0x4;
              Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                        ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
              pTVar5 = (this_00->Particle).Ptr;
              local_128._8_4_ = SUB84(dVar8,0);
              local_128._0_8_ = (double)(float)uVar2;
              local_128._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              local_138._8_4_ = SUB84(dVar9,0);
              local_138._0_8_ = (double)fVar1;
              local_138._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              local_108 = *(undefined8 *)&(pTVar5->MXR).Property.MX.field_0x10;
              local_118 = *(undefined8 *)&(pTVar5->MXR).Property.MX;
              uStack_110 = *(undefined8 *)&(pTVar5->MXR).Property.MX.field_0x8;
              uStack_100 = 0;
              local_f8 = uVar12;
              uStack_f0 = uVar13;
              local_e8 = uVar10;
              uStack_e0 = uVar11;
              pTVar24 = Chaos::TAABB<double,3>::TransformedAABB
                                  (pTVar24,&local_168,(TRigidTransform<double,3> *)local_138);
              local_1c8 = *(undefined8 *)&pTVar24->MMin;
              uStack_1c0 = *(undefined8 *)&(pTVar24->MMin).field_0x8;
              local_1b8 = *(undefined8 *)&(pTVar24->MMin).field_0x10;
              uStack_1b0 = *(undefined8 *)&pTVar24->MMax;
              local_1a8 = *(undefined8 *)&(pTVar24->MMax).field_0x8;
              uStack_1a0 = *(undefined8 *)&(pTVar24->MMax).field_0x10;
            }
            pTVar5 = (ppFVar3[lVar27]->Particle).Ptr;
            local_220 = pTVar5;
            if (pTVar5 == (TGeometryParticle<double,3> *)0x0) {
              local_210 = -1;
              local_218 = 0;
            }
            else if (pTVar5->Proxy == (IPhysicsProxyBase *)0x0) {
              local_210 = (pTVar5->MNonFrequentData).Property.MUniqueIdx.Idx;
              local_218 = 0;
            }
            else {
              local_218 = (**(code **)pTVar5->Proxy->_padding_)();
              local_210 = (pTVar5->MNonFrequentData).Property.MUniqueIdx.Idx;
            }
            local_20c.Word2 = 0;
            local_20c.Word3 = 0;
            local_20c.Word0 = 0;
            local_20c.Word1 = 0;
            local_1fc.Word2 = 0;
            local_1fc.Word3 = 0;
            local_1fc.Word0 = 0;
            local_1fc.Word1 = 0;
            local_1ec = 0;
            if (pTVar5 != (TGeometryParticle<double,3> *)0x0) {
              if ((local_210 == -1) &&
                 (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_3133560516564218010>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                      ,0xf66,"CachedUniqueIdx.IsValid()"), bVar22)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (((Chaos::CVars::bEnableAsyncInitBody == false) &&
                  (bVar22 = IsInGameThread(), !bVar22)) &&
                 (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_3133560516564218009>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                      ,0xf67,
                                      "Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()"),
                 bVar22)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              Chaos::FAccelerationStructureHandle::
              ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
                        (pTVar5,&local_20c);
              Chaos::FAccelerationStructureHandle::
              ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
                        (pTVar5,&local_1fc);
              local_1ec = 1;
            }
            pIVar20 = local_1e0;
            pcVar7 = *(code **)(local_1e0->_padding_ + 0x98);
            Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
                      ((TThreadedSingleParticlePhysicsProxyBase<1> *)this_00);
            (*pcVar7)(pIVar20,&local_220,&local_1c8,bVar21);
          }
          uVar26 = uVar26 + 1;
          lVar27 = lVar27 + 1;
          this_01 = local_1d8;
          this = local_1d0;
        } while (lVar27 < iVar25);
      }
    }
    iVar25 = param_1->ArrayNum;
    uVar26 = 0;
    if (0 < iVar25) {
      lVar27 = 0;
      do {
        uVar23 = 0;
        if ((int)uVar26 < iVar25) {
          uVar23 = ~uVar26 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)(lVar27 + (longlong)param_1->DataPtr);
        if (lVar6 != 0) {
          Chaos::FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
                    ((FPhysicsSolverBase *)this->SceneSolver,
                     *(TGeometryParticle<double,3> **)(lVar6 + 0x40),Update);
        }
        iVar25 = param_1->ArrayNum;
        uVar26 = uVar26 + 1;
        lVar27 = lVar27 + 8;
      } while ((int)uVar26 < iVar25);
    }
    Chaos::FPhysicsRwLock::WriteUnlock(this_01);
  }
  return;
}

// WaitPhysScenes @ 1441bcd70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosScene::WaitPhysScenes(FChaosScene *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_void___cdecl_FChaosScene::WaitPhysScenes(void)_::_5_::FStat_STAT_FPhysScene_WaitPhysScenes>
  FVar6;
  FTaskGraphInterface *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FStatMessage local_28;
  
  bVar4 = IsCompletionEventComplete(this);
  if (bVar4) {
    return;
  }
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FPhysScene_WaitPhysScenes ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FChaosScene::WaitPhysScenes(void)_::_5_::FStat_STAT_FPhysScene_WaitPhysScenes>
         )0x0) {
      pFVar5 = ::FName::FName((FName *)&local_res10.s,"STAT_FPhysScene_WaitPhysScenes");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FPhysScene_WaitPhysScenes,*pFVar5,
                 L"STAT_FPhysScene_WaitPhysScenes","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_FPhysScene_WaitPhysScenes;
  if (StatPtr_STAT_FPhysScene_WaitPhysScenes ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FChaosScene::WaitPhysScenes(void)_::_5_::FStat_STAT_FPhysScene_WaitPhysScenes>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_FPhysScene_WaitPhysScenes");
    FVar6 = (FThreadSafeStaticStat<_public:_void___cdecl_FChaosScene::WaitPhysScenes(void)_::_5_::FStat_STAT_FPhysScene_WaitPhysScenes>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FPhysScene_WaitPhysScenes,
                         *pFVar5,L"STAT_FPhysScene_WaitPhysScenes","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar4 = false;
  bVar3 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar9.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosScene.cpp"
                   ,0x247);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar9.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar2 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_1441bcf16;
    }
  }
  bVar2 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_1441bcf16:
  pFVar7 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar7 + 0x60))(pFVar7,&this->CompletionEvents);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res10);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
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
  return;
}

// WaitSolverTasks @ 1441bd0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FChaosScene::WaitSolverTasks(FChaosScene *this)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  FPBDRigidsSolver *pFVar4;
  FTaskGraphInterface *pFVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  undefined1 auStackY_88 [32];
  TRefCountPtr<FBaseGraphTask> TStack_48;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FStack_40;
  int iStack_18;
  int iStack_14;
  ulonglong uStack_10;
  
  pFVar4 = this->SceneSolver;
  if (pFVar4 == (FPBDRigidsSolver *)0x0) {
    return;
  }
  uStack_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((pFVar4->_padding_ != 0) && (*(char *)(pFVar4->_padding_ + 0xd0) == '\0')) {
    pFVar5 = FTaskGraphInterface::Get();
    pcVar3 = *(code **)((longlong)*pFVar5 + 0x60);
    TStack_48.Reference = (FBaseGraphTask *)pFVar4->_padding_;
    if (TStack_48.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(TStack_48.Reference)->field_0x30 = *(int *)&(TStack_48.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    FStack_40.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    iStack_18 = 1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&FStack_40,1,&iStack_14);
    FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&FStack_40;
    if (FStack_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar6 = FStack_40.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar6,&TStack_48,1);
    (*pcVar3)(pFVar5,&FStack_40,0xff);
    FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&FStack_40;
    if (FStack_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar6 = FStack_40.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar6,iStack_18)
    ;
    if (FStack_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)FStack_40.SecondaryData);
    }
    if (TStack_48.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(TStack_48.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)TStack_48.Reference)(TStack_48.Reference,1);
      }
    }
  }
  return;
}


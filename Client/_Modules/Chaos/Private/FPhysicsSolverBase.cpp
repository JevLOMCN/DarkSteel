// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 30

// AddDirtyProxy @ 143750890

void __thiscall
Chaos::FPhysicsSolverBase::AddDirtyProxy(FPhysicsSolverBase *this,IPhysicsProxyBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPlatformRWLock *SRWLock;
  
  if ((param_1->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((param_1->SyncTimestamp).Object)->bDeleted != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxyBaseIn->GetMarkedDeleted() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                       ,0x14b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &(this->MarshallingManager).MarshallingManagerLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FDirtySet::Add(&((this->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014375094a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  FDirtySet::Add(&((this->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1);
  return;
}

// AddDirtyProxyShape @ 14389a6e0

void __thiscall
Chaos::FPhysicsSolverBase::AddDirtyProxyShape
          (FPhysicsSolverBase *this,IPhysicsProxyBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = &(this->MarshallingManager).MarshallingManagerLock;
  }
  if (SRWLock == (FPlatformRWLock *)0x0) {
    FDirtySet::AddShape(&((this->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1,
                        param_2);
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FDirtySet::AddShape(&((this->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1,
                        param_2);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// FPhysicsSolverBase @ 143afa730

/* WARNING: Enum "Type": Some values do not have unique names */

FPhysicsSolverBase * __thiscall
Chaos::FPhysicsSolverBase::FPhysicsSolverBase
          (FPhysicsSolverBase *this,EMultiBufferMode param_1,EThreadingModeTemp param_2,
          UObject *param_3,double param_4)

{
  atomic<int> *paVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  DWORD DVar5;
  FChaosResultsManager *this_00;
  FChaosResultsManager *pFVar6;
  FChaosResultsManager *pFVar7;
  FPhysicsRwLock *pFVar8;
  FPhysicsSolverBase *pFVar9;
  wchar_t *pwVar10;
  
  pFVar7 = (FChaosResultsManager *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPhysicsSolverBase_Chaos__6B_;
  this->_padding_ = 2;
  this->_padding_ = 2;
  this->_padding_ = 2;
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bIsStandaloneSolver = false;
  this->BufferMode = param_1;
  if (GSingleThreadedPhysics != 0) {
    param_2 = SingleThread;
  }
  this->ThreadingMode = param_2;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  FChaosMarshallingManager::FChaosMarshallingManager(&this->MarshallingManager);
  this_00 = ::operator_new(0x40);
  pFVar6 = pFVar7;
  if (this_00 != (FChaosResultsManager *)0x0) {
    pFVar6 = FChaosResultsManager::FChaosResultsManager(this_00,&this->MarshallingManager);
  }
  (this->PullResultsManager).Ptr = pFVar6;
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FChaosResultsManager *)0x0) {
    (pFVar6->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Channels).ArrayNum = 0;
    (pFVar6->Channels).ArrayMax = 0;
    pFVar6->MarshallingManager = (FChaosMarshallingManager *)0x0;
    (pFVar6->InternalQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar7 = pFVar6;
  }
  (this->PendingSpatialOperations_External).Ptr = (FPendingSpatialDataQueue *)pFVar7;
  (this->SimCallbackObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimCallbackObjects).ArrayNum = 0;
  (this->SimCallbackObjects).ArrayMax = 0;
  (this->MidPhaseModifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MidPhaseModifiers).ArrayNum = 0;
  (this->MidPhaseModifiers).ArrayMax = 0;
  (this->CCDModifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDModifiers).ArrayNum = 0;
  (this->CCDModifiers).ArrayMax = 0;
  (this->StrainModifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrainModifiers).ArrayNum = 0;
  (this->StrainModifiers).ArrayMax = 0;
  (this->ContactModifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContactModifiers).ArrayNum = 0;
  (this->ContactModifiers).ArrayMax = 0;
  (this->RegistrationWatchers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegistrationWatchers).ArrayNum = 0;
  (this->RegistrationWatchers).ArrayMax = 0;
  (this->UnregistrationWatchers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnregistrationWatchers).ArrayNum = 0;
  (this->UnregistrationWatchers).ArrayMax = 0;
  (this->PhysicsObjectUnregistrationWatchers).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PhysicsObjectUnregistrationWatchers).ArrayNum = 0;
  (this->PhysicsObjectUnregistrationWatchers).ArrayMax = 0;
  (this->MRewindData).Ptr = (FRewindData *)0x0;
  (this->MRewindCallback).Ptr = (IRewindCallback *)0x0;
  this->bUseCollisionResimCache = false;
  (this->PendingTasks).Reference = (FBaseGraphTask *)0x0;
  this->bSolverHasFrozenGameThreadCallbacks = false;
  this->bGameThreadFrozen = false;
  this->MLastDt = 0.0;
  this->MTime = 0.0;
  this->NumPendingSolverAdvanceTasks = (TAtomic<int>)0x0;
  this->bPaused_External = false;
  this->Owner = param_3;
  (this->SimMaterialLock).Mutex.Mutex.Ptr = (void *)0x0;
  pFVar8 = ::operator_new(0x10);
  if (pFVar8 == (FPhysicsRwLock *)0x0) {
    pFVar8 = (FPhysicsRwLock *)0x0;
  }
  else {
    (pFVar8->RwLock).Mutex.Mutex.Ptr = (void *)0x0;
    DVar5 = TlsAlloc();
    pFVar8->TlsSlot = DVar5;
    if ((DVar5 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                           ,0x2f4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FPhysicsSolverBase *)(*pcVar2)();
      return pFVar9;
    }
  }
  (this->ExternalDataLock_External).Ptr = pFVar8;
  this->AsyncDt = param_4;
  (this->UniqueIdxToGTParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueIdxToGTParticles).ArrayNum = 0;
  (this->UniqueIdxToGTParticles).ArrayMax = 0;
  this->bIsShuttingDown = false;
  this->AccumulatedTime = 0.0;
  this->MMaxDeltaTime = 0.0;
  this->MMinDeltaTime = 1e-08;
  this->MMaxSubSteps = 1;
  this->ExternalSteps = 0;
  this->AsyncBlockMode = AsyncPhysicsBlockMode;
  this->AsyncMultiplier = AsyncInterpolationMultiplier;
  this->bStealAdvanceTasksForTesting = false;
  (this->StolenSolverAdvanceTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StolenSolverAdvanceTasks).ArrayNum = 0;
  (this->StolenSolverAdvanceTasks).ArrayMax = 0;
  (this->CVDContextData).OwnerID = -1;
  (this->CVDContextData).Id = -1;
  (this->CVDContextData).Type = -1;
  (this->CVDContextData).Attributes = 0;
  (this->CVDContextData).CurrentDataChannel.Object = CVDDC_Default.Object;
  FVar3 = CVDDC_Default.SharedReferenceCount;
  (this->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController =
       CVDDC_Default.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  if (5 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  pwVar10 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar10,L"PhysicsRunsOnGT");
  if (bVar4) {
    PhysicsRunsOnGT = 1;
  }
  return this;
}

// ~FPhysicsSolverBase @ 143afd730

void __thiscall Chaos::FPhysicsSolverBase::~FPhysicsSolverBase(FPhysicsSolverBase *this)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  FBaseGraphTask *pFVar5;
  IRewindCallback *pIVar6;
  FRewindData *this_00;
  FPendingSpatialDataQueue *pFVar7;
  FChaosResultsManager *this_01;
  code *pcVar8;
  BOOLEAN BVar9;
  bool bVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FPhysicsSolverBase_Chaos__6B_;
  FChaosMarshallingManager::SetHistoryLength_Internal(&this->MarshallingManager,0);
  pFVar11 = (this->SimCallbackObjects).AllocatorInstance.Data;
  iVar2 = (this->SimCallbackObjects).ArrayNum;
  pFVar4 = pFVar11 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SimCallbackObjects).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar4) break;
    puVar3 = *(undefined8 **)pFVar11;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    pFVar11 = pFVar11 + 8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController);
  DestructItems<Chaos::FAllSolverTasks,int>
            ((FAllSolverTasks *)(this->StolenSolverAdvanceTasks).AllocatorInstance.Data,
             (this->StolenSolverAdvanceTasks).ArrayNum);
  pFVar4 = (this->StolenSolverAdvanceTasks).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->UniqueIdxToGTParticles).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TDefaultDelete<Chaos::FPhysicsRwLock>::operator()
            ((TDefaultDelete<Chaos::FPhysicsRwLock> *)&this->ExternalDataLock_External,
             (this->ExternalDataLock_External).Ptr);
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->SimMaterialLock);
  if (BVar9 == '\0') {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SimMaterialLock);
  }
  pFVar5 = (this->PendingTasks).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pIVar6 = (this->MRewindCallback).Ptr;
  if (pIVar6 != (IRewindCallback *)0x0) {
    (**(code **)pIVar6->_padding_)(pIVar6,1);
  }
  this_00 = (this->MRewindData).Ptr;
  if (this_00 != (FRewindData *)0x0) {
    FRewindData::~FRewindData(this_00);
    ::operator_delete(this_00,0x520);
  }
  pFVar4 = (this->PhysicsObjectUnregistrationWatchers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->UnregistrationWatchers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RegistrationWatchers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ContactModifiers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->StrainModifiers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CCDModifiers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->MidPhaseModifiers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->SimCallbackObjects).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar7 = (this->PendingSpatialOperations_External).Ptr;
  if (pFVar7 != (FPendingSpatialDataQueue *)0x0) {
    pFVar4 = (pFVar7->ParticleToPendingData).Entries.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar7->PendingData).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar7,0x20);
  }
  this_01 = (this->PullResultsManager).Ptr;
  if (this_01 != (FChaosResultsManager *)0x0) {
    FChaosResultsManager::~FChaosResultsManager(this_01);
    ::operator_delete(this_01,0x40);
  }
  FChaosMarshallingManager::~FChaosMarshallingManager(&this->MarshallingManager);
  FPhysicsSolverEvents::~FPhysicsSolverEvents((FPhysicsSolverEvents *)this);
  return;
}

// AdvanceAndDispatch_External @ 143b12480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143b12913) */
/* WARNING: Removing unreachable block (ram,0x000143b12927) */
/* WARNING: Removing unreachable block (ram,0x000143b1295f) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
Chaos::FPhysicsSolverBase::AdvanceAndDispatch_External(FPhysicsSolverBase *this,double param_1)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  int *piVar4;
  atomic<unsigned_int> aVar5;
  double dVar6;
  IRewindCallback *pIVar7;
  FScriptContainerElement *pFVar8;
  FBaseGraphTask *pFVar9;
  FTaskBase *pFVar10;
  code *pcVar11;
  bool bVar12;
  Type TVar13;
  FPushPhysicsData *pFVar14;
  TRefCountPtr<FBaseGraphTask> TVar15;
  longlong lVar16;
  FTaskBase *pFVar17;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar18;
  undefined8 *puVar19;
  FBaseGraphTask *in_RDX;
  int iVar20;
  FBaseGraphTask *pFVar21;
  FBaseGraphTask *pFVar22;
  int iVar23;
  double in_XMM2_Qa;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStackY_178 [32];
  EExtendedTaskPriority local_128;
  ETaskPriority local_127;
  EExtendedTaskPriority local_126;
  ETaskPriority local_125;
  EExtendedTaskPriority local_124;
  ETaskPriority local_123 [3];
  FLLMScope local_120;
  int local_11c;
  FMemScope local_118;
  FBaseGraphTask *local_110;
  FPhysicsSolverProcessPushDataTask local_108;
  FPhysicsSolverFrozenGTPreSimCallbacks local_f8;
  FPhysicsSolverAdvanceTask local_f0;
  FPhysicsSolverBase *local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_a0;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar26 = SUB84(in_XMM2_Qa,0);
  uVar27 = (undefined4)((ulonglong)in_XMM2_Qa >> 0x20);
  local_110 = in_RDX;
  FLLMScope::FLLMScope(&local_120,ChaosScene,false,None,Default,true);
  FMemScope::FMemScope(&local_118,ChaosScene,true);
  local_11c = this->MMaxSubSteps;
  this->bSolverSubstep_External = 1 < local_11c;
  if (this->bPaused_External != false) {
    uVar26 = 0;
    uVar27 = 0;
  }
  dVar25 = (double)CONCAT44(uVar27,uVar26);
  iVar20 = 1;
  if (((ForceDisableAsyncPhysics != 0) || (dVar6 = this->AsyncDt, dVar6 < 0.0)) ||
     (UseAsyncInterpolation == 0)) {
    if (local_11c < 2) goto LAB_143b12599;
    if (in_XMM2_Qa <= 0.0) goto LAB_143b125a7;
    dVar25 = (double)this->MMaxDeltaTime;
    iVar23 = -((int)ROUND(__real_bfe0000000000000 -
                          ((double)CONCAT44(uVar27,uVar26) + (double)CONCAT44(uVar27,uVar26)) /
                          dVar25) >> 1);
    iVar20 = local_11c;
    if (iVar23 <= local_11c) {
      dVar25 = (double)CONCAT44(uVar27,uVar26) / (double)iVar23;
      iVar20 = iVar23;
    }
  }
  else {
    dVar25 = (double)CONCAT44(uVar27,uVar26) + this->AccumulatedTime;
    if (in_XMM2_Qa == 0.0) {
      dVar24 = 0.0;
      dVar6 = dVar25;
    }
    else {
      iVar20 = (int)ROUND((dVar25 + dVar25) / dVar6 - __real_3fe0000000000000) >> 1;
      dVar24 = dVar25 - (double)iVar20 * dVar6;
    }
    this->AccumulatedTime = dVar24;
    dVar25 = dVar6;
LAB_143b12599:
    if (in_XMM2_Qa <= 0.0) goto LAB_143b125a7;
  }
  this->ExternalSteps = this->ExternalSteps + 1;
LAB_143b125a7:
  if ((this->AsyncBlockMode == DoNoBlock) &&
     (iVar23 = MaxPhysicsStepsPerGameTick - (int)this->NumPendingSolverAdvanceTasks, iVar23 < iVar20
     )) {
    if (__CsvProfilerStat487 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("PhysicsFrameDropped",_GCsvCategory_ChaosPhysicsSolver.Index);
      __CsvProfilerStat487 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("PhysicsFrameDropped",_GCsvCategory_ChaosPhysicsSolver.Index,iVar20 - iVar23,
               Accumulate);
    iVar20 = iVar23;
  }
  if (0 < iVar20) {
    iVar23 = 1;
    if (1 < this->ExternalSteps) {
      iVar23 = this->ExternalSteps;
    }
    (**(code **)(this->_padding_ + 0x50))(this,dVar25,iVar20,iVar23);
    this->ExternalSteps = 0;
  }
  if (this->bIsStandaloneSolver == false) {
    pTVar3 = &this->PendingTasks;
    pFVar22 = pTVar3->Reference;
    if (pFVar22 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar22->field_0x30 = *(int *)&pFVar22->field_0x30 + 1;
      UNLOCK();
    }
    pFVar14 = FChaosMarshallingManager::StepInternalTime_External(&this->MarshallingManager);
    iVar20 = local_11c;
    while (pFVar14 != (FPushPhysicsData *)0x0) {
      pIVar7 = (this->MRewindCallback).Ptr;
      if ((pIVar7 != (IRewindCallback *)0x0) && (this->bIsShuttingDown == false)) {
        (**(code **)(pIVar7->_padding_ + 0x18))
                  (pIVar7,pFVar14->InternalStep,&pFVar14->SimCallbackInputs);
      }
      if (this->ThreadingMode == SingleThread) {
        if (((pTVar3->Reference != (FBaseGraphTask *)0x0) && (pTVar3->Reference->field_0xd0 == '\0')
            ) && (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<4598212920768201222>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                                      ,0x206,"!PendingTasks || PendingTasks->IsComplete()"), bVar12)
           ) {
          pcVar11 = (code *)swi(3);
          TVar15.Reference = (FBaseGraphTask *)(*pcVar11)();
          return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
        }
        local_108.Solver = this;
        local_108.PushData = pFVar14;
        local_f8.Solver = this;
        FPhysicsSolverAdvanceTask::FPhysicsSolverAdvanceTask(&local_f0,this,pFVar14);
        local_c0 = this;
        if (this->bStealAdvanceTasksForTesting == false) {
          FPhysicsSolverProcessPushDataTask::ProcessPushData(&local_108);
          FPhysicsSolverFrozenGTPreSimCallbacks::GTPreSimCallbacks(&local_f8);
          FPhysicsSolverAdvanceTask::AdvanceSolver(&local_f0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f0.CVDContext.CurrentDataChannel.SharedReferenceCount.ReferenceController
                    );
        }
        else {
          iVar23 = (this->StolenSolverAdvanceTasks).ArrayNum;
          piVar4 = &(this->StolenSolverAdvanceTasks).ArrayMax;
          if (iVar23 == *piVar4) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&(this->StolenSolverAdvanceTasks).AllocatorInstance,piVar4);
          }
          pFVar8 = (this->StolenSolverAdvanceTasks).AllocatorInstance.Data;
          (this->StolenSolverAdvanceTasks).ArrayNum = iVar23 + 1;
          lVar16 = (longlong)iVar23;
          *(FPhysicsSolverBase **)(pFVar8 + lVar16 * 0x50) = local_108.Solver;
          *(FPushPhysicsData **)(pFVar8 + lVar16 * 0x50 + 8) = local_108.PushData;
          *(FPhysicsSolverBase **)(pFVar8 + lVar16 * 0x50 + 0x10) = local_f8.Solver;
          *(FPhysicsSolverBase **)(pFVar8 + lVar16 * 0x50 + 0x18) = local_f0.Solver;
          *(FPushPhysicsData **)(pFVar8 + lVar16 * 0x50 + 0x20) = local_f0.PushData;
          *(int *)(pFVar8 + lVar16 * 0x50 + 0x28) = local_f0.CVDContext.OwnerID;
          *(int *)(pFVar8 + lVar16 * 0x50 + 0x2c) = local_f0.CVDContext.Id;
          *(int *)(pFVar8 + lVar16 * 0x50 + 0x30) = local_f0.CVDContext.Type;
          *(int *)(pFVar8 + lVar16 * 0x50 + 0x34) = local_f0.CVDContext.Attributes;
          *(FChaosVDOptionalDataChannel **)(pFVar8 + lVar16 * 0x50 + 0x38) =
               local_f0.CVDContext.CurrentDataChannel.Object;
          *(TReferenceControllerBase<1> **)(pFVar8 + lVar16 * 0x50 + 0x40) =
               local_f0.CVDContext.CurrentDataChannel.SharedReferenceCount.ReferenceController;
          if (local_f0.CVDContext.CurrentDataChannel.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f0.CVDContext.CurrentDataChannel.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_f0.CVDContext.CurrentDataChannel.SharedReferenceCount.
                       ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(FPhysicsSolverBase **)(pFVar8 + lVar16 * 0x50 + 0x48) = local_c0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f0.CVDContext.CurrentDataChannel.SharedReferenceCount.ReferenceController
                    );
        }
      }
      else {
        pFVar21 = pFVar22;
        if ((this->AsyncBlockMode == BlockForBestInterpolation) &&
           (pFVar9 = pTVar3->Reference, pFVar22 != pFVar9)) {
          if (pFVar9 != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&pFVar9->field_0x30 = *(int *)&pFVar9->field_0x30 + 1;
            UNLOCK();
          }
          pFVar21 = pFVar9;
          if (pFVar22 != (FBaseGraphTask *)0x0) {
            LOCK();
            puVar1 = &pFVar22->field_0x30;
            iVar23 = *(int *)puVar1;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            UNLOCK();
            if (iVar23 == 1) {
              (*(code *)**(undefined8 **)pFVar22)(pFVar22,1);
            }
          }
        }
        local_a0.AllocatorInstance.SecondaryData =
             (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 4;
        if ((pTVar3->Reference != (FBaseGraphTask *)0x0) && (pTVar3->Reference->field_0xd0 == '\0'))
        {
          if ((&local_a0 <= pTVar3) &&
             ((pTVar3 < &local_a0.AllocatorInstance.SecondaryData &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)))) {
            pcVar11 = (code *)swi(3);
            TVar15.Reference = (FBaseGraphTask *)(*pcVar11)();
            return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
          }
          if (local_a0.ArrayNum == local_a0.ArrayMax) {
            local_a0.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          }
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
          if (local_a0.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = local_a0.AllocatorInstance.SecondaryData;
          }
          lVar16 = (longlong)local_a0.ArrayNum;
          local_a0.ArrayNum = local_a0.ArrayNum + 1;
          ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar18 + lVar16 * 8))->Reference =
               (FBaseGraphTask *)0x0;
          pFVar22 = pTVar3->Reference;
          ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar18 + lVar16 * 8))->Reference = pFVar22;
          if (pFVar22 != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&pFVar22->field_0x30 = *(int *)&pFVar22->field_0x30 + 1;
            UNLOCK();
          }
        }
        pFVar17 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe8,8);
        if (pFVar17 == (FTaskBase *)0x0) {
          pFVar17 = (FTaskBase *)0x0;
        }
        else {
          FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar17,&local_a0);
          pFVar17->_padding_ =
               (longlong)&___7__TGraphTask_VFPhysicsSolverProcessPushDataTask_Chaos____6B_;
        }
        pFVar17[1]._padding_ = (longlong)this;
        pFVar17[1]._padding_ = (longlong)pFVar14;
        TVar13 = FPhysicsSolverProcessPushDataTask::GetDesiredThread();
        UE::Tasks::Private::TranslatePriority(TVar13,&local_127,&local_128);
        UE::Tasks::Private::FTaskBase::Init(pFVar17,L"GraphTask",local_127,local_128,None);
        LOCK();
        pFVar17->RefCount = (atomic<unsigned_int>)((int)pFVar17->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(pFVar17,0xe8);
        if (pTVar3 == (TRefCountPtr<FBaseGraphTask> *)local_b8) {
          LOCK();
          paVar2 = &pFVar17->RefCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<unsigned_int>)0x1) {
            puVar19 = (undefined8 *)pFVar17->_padding_;
LAB_143b12a91:
            (*(code *)*puVar19)(pFVar17,1);
          }
        }
        else {
          pFVar10 = (FTaskBase *)pTVar3->Reference;
          pTVar3->Reference = (FBaseGraphTask *)pFVar17;
          if (pFVar10 != (FTaskBase *)0x0) {
            LOCK();
            paVar2 = &pFVar10->RefCount;
            aVar5 = *paVar2;
            *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar5 == (atomic<unsigned_int>)0x1) {
              puVar19 = (undefined8 *)pFVar10->_padding_;
              pFVar17 = pFVar10;
              goto LAB_143b12a91;
            }
          }
        }
        FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
        if (local_a0.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar18 = local_a0.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar18 <= pTVar3) {
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
          if (local_a0.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = local_a0.AllocatorInstance.SecondaryData;
          }
          if ((pTVar3 < (TRefCountPtr<FBaseGraphTask> *)
                        ((longlong)FVar18 + (longlong)local_a0.ArrayMax * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar11 = (code *)swi(3);
            TVar15.Reference = (FBaseGraphTask *)(*pcVar11)();
            return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
          }
        }
        if (local_a0.ArrayNum == local_a0.ArrayMax) {
          local_a0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
        }
        FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
        if (local_a0.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar18 = local_a0.AllocatorInstance.SecondaryData;
        }
        lVar16 = (longlong)local_a0.ArrayNum;
        local_a0.ArrayNum = local_a0.ArrayNum + 1;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar18 + lVar16 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        pFVar22 = pTVar3->Reference;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar18 + lVar16 * 8))->Reference = pFVar22;
        if (pFVar22 != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&pFVar22->field_0x30 = *(int *)&pFVar22->field_0x30 + 1;
          UNLOCK();
        }
        if (this->bSolverHasFrozenGameThreadCallbacks != false) {
          pFVar17 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
          if (pFVar17 == (FTaskBase *)0x0) {
            pFVar17 = (FTaskBase *)0x0;
          }
          else {
            FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar17,&local_a0);
            pFVar17->_padding_ =
                 (longlong)&___7__TGraphTask_VFPhysicsSolverFrozenGTPreSimCallbacks_Chaos____6B_;
          }
          pFVar17[1]._padding_ = (longlong)this;
          UE::Tasks::Private::TranslatePriority(HighTaskPriority|GameThread,&local_125,&local_126);
          UE::Tasks::Private::FTaskBase::Init(pFVar17,L"GraphTask",local_125,local_126,None);
          LOCK();
          pFVar17->RefCount = (atomic<unsigned_int>)((int)pFVar17->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch(pFVar17,0xe0);
          if (pTVar3 == (TRefCountPtr<FBaseGraphTask> *)local_b0) {
            LOCK();
            paVar2 = &pFVar17->RefCount;
            aVar5 = *paVar2;
            *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar5 == (atomic<unsigned_int>)0x1) {
              puVar19 = (undefined8 *)pFVar17->_padding_;
LAB_143b12c2a:
              (*(code *)*puVar19)(pFVar17,1);
            }
          }
          else {
            pFVar10 = (FTaskBase *)pTVar3->Reference;
            pTVar3->Reference = (FBaseGraphTask *)pFVar17;
            if (pFVar10 != (FTaskBase *)0x0) {
              LOCK();
              paVar2 = &pFVar10->RefCount;
              aVar5 = *paVar2;
              *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar5 == (atomic<unsigned_int>)0x1) {
                puVar19 = (undefined8 *)pFVar10->_padding_;
                pFVar17 = pFVar10;
                goto LAB_143b12c2a;
              }
            }
          }
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
          if (local_a0.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = local_a0.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar18 <= pTVar3) {
            FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
            if (local_a0.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar18 = local_a0.AllocatorInstance.SecondaryData;
            }
            if ((pTVar3 < (TRefCountPtr<FBaseGraphTask> *)
                          ((longlong)FVar18 + (longlong)local_a0.ArrayMax * 8)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar11 = (code *)swi(3);
              TVar15.Reference = (FBaseGraphTask *)(*pcVar11)();
              return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
            }
          }
          if (local_a0.ArrayNum == local_a0.ArrayMax) {
            local_a0.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          }
          FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
          if (local_a0.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar18 = local_a0.AllocatorInstance.SecondaryData;
          }
          lVar16 = (longlong)local_a0.ArrayNum;
          local_a0.ArrayNum = local_a0.ArrayNum + 1;
          ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar18 + lVar16 * 8))->Reference =
               (FBaseGraphTask *)0x0;
          pFVar22 = pTVar3->Reference;
          ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar18 + lVar16 * 8))->Reference = pFVar22;
          if (pFVar22 != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&pFVar22->field_0x30 = *(int *)&pFVar22->field_0x30 + 1;
            UNLOCK();
          }
        }
        pFVar17 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x108,8);
        if (pFVar17 == (FTaskBase *)0x0) {
          pFVar17 = (FTaskBase *)0x0;
        }
        else {
          FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)pFVar17,&local_a0);
          pFVar17->_padding_ = (longlong)&___7__TGraphTask_VFPhysicsSolverAdvanceTask_Chaos____6B_;
        }
        FPhysicsSolverAdvanceTask::FPhysicsSolverAdvanceTask
                  ((FPhysicsSolverAdvanceTask *)(pFVar17 + 1),this,pFVar14);
        TVar13 = FPhysicsSolverAdvanceTask::GetDesiredThread();
        UE::Tasks::Private::TranslatePriority(TVar13,local_123,&local_124);
        UE::Tasks::Private::FTaskBase::Init(pFVar17,L"GraphTask",local_123[0],local_124,None);
        if (pFVar17 != (FTaskBase *)0x0) {
          LOCK();
          pFVar17->RefCount = (atomic<unsigned_int>)((int)pFVar17->RefCount + 1);
          UNLOCK();
        }
        UE::Tasks::Private::FTaskBase::TryLaunch(pFVar17,0x108);
        if (pTVar3 == (TRefCountPtr<FBaseGraphTask> *)local_a8) {
          if (pFVar17 != (FTaskBase *)0x0) {
            LOCK();
            paVar2 = &pFVar17->RefCount;
            aVar5 = *paVar2;
            *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar5 == (atomic<unsigned_int>)0x1) {
              puVar19 = (undefined8 *)pFVar17->_padding_;
              goto LAB_143b12dcc;
            }
          }
        }
        else {
          pFVar10 = (FTaskBase *)pTVar3->Reference;
          pTVar3->Reference = (FBaseGraphTask *)pFVar17;
          if (pFVar10 != (FTaskBase *)0x0) {
            LOCK();
            paVar2 = &pFVar10->RefCount;
            aVar5 = *paVar2;
            *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
            UNLOCK();
            if (aVar5 == (atomic<unsigned_int>)0x1) {
              puVar19 = (undefined8 *)pFVar10->_padding_;
              pFVar17 = pFVar10;
LAB_143b12dcc:
              (*(code *)*puVar19)(pFVar17,1);
            }
          }
        }
        pFVar22 = pFVar21;
        if (((ForceDisableAsyncPhysics != 0) || (this->AsyncDt <= 0.0 && this->AsyncDt != 0.0)) &&
           (pFVar9 = pTVar3->Reference, pFVar21 != pFVar9)) {
          if (pFVar9 != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&pFVar9->field_0x30 = *(int *)&pFVar9->field_0x30 + 1;
            UNLOCK();
          }
          pFVar22 = pFVar9;
          if (pFVar21 != (FBaseGraphTask *)0x0) {
            LOCK();
            puVar1 = &pFVar21->field_0x30;
            iVar23 = *(int *)puVar1;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            UNLOCK();
            if (iVar23 == 1) {
              (*(code *)**(undefined8 **)pFVar21)(pFVar21,1);
            }
          }
        }
        FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_a0;
        if (local_a0.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar18 = local_a0.AllocatorInstance.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar18,local_a0.ArrayNum);
        if (local_a0.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_a0.AllocatorInstance.SecondaryData);
        }
      }
      if (((ForceDisableAsyncPhysics != 0) || (this->AsyncDt <= 0.0 && this->AsyncDt != 0.0)) &&
         (in_RDX = local_110, iVar20 < 2)) break;
      pFVar14 = FChaosMarshallingManager::StepInternalTime_External(&this->MarshallingManager);
      in_RDX = local_110;
    }
    if (this->AsyncBlockMode == DoNoBlock) {
      *(undefined8 *)in_RDX = 0;
      if (pFVar22 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar22->field_0x30;
        iVar20 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (*(code *)**(undefined8 **)pFVar22)(pFVar22,1);
        }
      }
    }
    else {
      *(FBaseGraphTask **)in_RDX = pFVar22;
    }
    FMemScope::~FMemScope(&local_118);
    FLLMScope::~FLLMScope(&local_120);
  }
  else {
    *(undefined8 *)in_RDX = 0;
    FMemScope::~FMemScope(&local_118);
    FLLMScope::~FLLMScope(&local_120);
  }
  return (TRefCountPtr<FBaseGraphTask>)in_RDX;
}

// ApplyCallbacks_Internal @ 143b142d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPhysicsSolverBase::ApplyCallbacks_Internal(FPhysicsSolverBase *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TStatId TVar10;
  uint uVar11;
  FName *pFVar12;
  TStatIdData *pTVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  FScriptContainerElement *pFVar18;
  FNameEntryId FVar19;
  undefined1 uVar20;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FName local_res18;
  undefined1 local_res20 [8];
  undefined4 local_f0 [2];
  FName local_e8;
  FName local_d8;
  uint local_d0;
  uint uStack_cc;
  FName local_c8;
  FName local_c0;
  longlong local_b0;
  undefined8 local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  undefined8 *local_88;
  undefined4 *local_80;
  FName *local_78;
  undefined1 *local_70;
  undefined1 local_68 [40];
  
  local_b0 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(local_b0 + 0x9d4c) <
       `public:_virtual_void___cdecl_Chaos::FPhysicsSolverBase::ApplyCallbacks_Internal(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_Chaos::FPhysicsSolverBase::ApplyCallbacks_Internal(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_Chaos::FPhysicsSolverBase::ApplyCallbacks_Internal(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_ApplySimCallbacks = (TStatIdData *)0x0;
    pFVar12 = ::FName::FName((FName *)&local_res10._s_0,"ApplySimCallbacks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_Chaos::FPhysicsSolverBase::ApplyCallbacks_Internal(void)___ptr64'
                ::__l2::StatPtr_ApplySimCallbacks,*pFVar12,L"ApplySimCallbacks","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_Chaos::FPhysicsSolverBase::ApplyCallbacks_Internal(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar13 = _StatPtr_ApplySimCallbacks;
  if (_StatPtr_ApplySimCallbacks == (TStatIdData *)0x0) {
    pFVar12 = ::FName::FName(&local_res18,"ApplySimCallbacks");
    pTVar13 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_Chaos::FPhysicsSolverBase::ApplyCallbacks_Internal(void)___ptr64'
                          ::__l2::StatPtr_ApplySimCallbacks,*pFVar12,L"ApplySimCallbacks",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar16 = *(FName *)&pTVar13->Name;
  uVar20 = 0;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  local_res10.Bits = local_res10.Bits & 0xffffff00;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar11 = FVar16.Number;
  if ((FVar15.Bits != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar13->StatDescriptionAnsi).Ptr);
      uVar20 = 1;
      local_res10._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar15.Bits;
        uStackX_14 = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(pTVar13->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                   ,0x275);
        uVar20 = 3;
        local_res10._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar15.Bits;
      uStackX_14 = uVar11;
      local_c8 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      local_res10.Bits = CONCAT31(local_res10.Bits._1_3_,uVar20) | 4;
      uVar20 = uVar20 | 4;
      goto LAB_143b14454;
    }
  }
  local_c8 = local_c0;
  FVar16 = local_c0;
LAB_143b14454:
  if (0.0 < this->MLastDt) {
    iVar5 = (this->SimCallbackObjects).ArrayNum;
    pFVar18 = (this->SimCallbackObjects).AllocatorInstance.Data;
    dVar3 = this->MTime;
    pFVar2 = pFVar18 + (longlong)iVar5 * 8;
    while( true ) {
      if ((this->SimCallbackObjects).ArrayNum != iVar5) {
        `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (pFVar18 == pFVar2) break;
      plVar6 = *(longlong **)pFVar18;
      if ((bool)(*(byte *)((longlong)plVar6 + 0x41) & 1) == this->bGameThreadFrozen) {
        FVar19.Value = 0;
        bVar7 = false;
        bVar9 = false;
        local_e8.ComparisonIndex.Value = 0;
        local_e8.Number = 0;
        if ((*(int *)(local_b0 + 0x9d4c) <
             `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          local_res20[0] = 1;
          local_res18.ComparisonIndex.Value._0_1_ = 1;
          local_f0[0] = 2;
          puVar14 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_68);
          local_a8 = *puVar14;
          local_88 = &local_a8;
          local_80 = local_f0;
          local_78 = &local_res18;
          local_70 = local_res20;
          `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_Chaos>'::__l2::<lambda_1>::
          operator()(&local_88);
          _Init_thread_footer(&`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        TVar10.StatIdPtr =
             `public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
             ::__l2::StatId.StatIdPtr;
        if (((SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                     ::__l2::StatId.StatIdPtr)->Name,0) == 0) &&
            (SUB84((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                    ::__l2::StatId.StatIdPtr)->Name,4) == 0)) ||
           (FThreadStats::bPrimaryEnable == false)) {
LAB_143b145c9:
          bVar8 = false;
          FVar16 = local_e8;
        }
        else {
          FVar16 = *(FName *)&(`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                               ::__l2::StatId.StatIdPtr)->Name;
          FVar17 = FVar16.ComparisonIndex.Value;
          uVar11 = FVar16.Number;
          if ((FVar17.Value == 0) && (uVar11 == 0)) goto LAB_143b145c9;
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res18.ComparisonIndex.Value = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_res18,
                       ((`public:_struct_TStatId___cdecl_Chaos::ISimCallbackObject::GetStatId(void)const___ptr64'
                         ::__l2::StatId.StatIdPtr)->StatDescriptionAnsi).Ptr);
            bVar7 = false;
            bVar9 = true;
            if (-1 < CpuChannel->Enabled) {
              local_d8.ComparisonIndex.Value = FVar17.Value;
              local_d8.Number = uVar11;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_d8,((TVar10.StatIdPtr)->StatDescriptionWide).Ptr,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x125);
              bVar7 = true;
              bVar9 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_143b145c9;
          local_e8 = FVar16;
          local_d0 = FVar17.Value;
          uStack_cc = uVar11;
          FThreadStats::AddMessage(FVar16,CycleScopeStart);
          FVar19 = local_e8.ComparisonIndex.Value;
          bVar8 = true;
        }
        dVar4 = this->MLastDt;
        plVar6[6] = (longlong)dVar3;
        plVar6[7] = (longlong)dVar4;
        (**(code **)(*plVar6 + 0x68))(plVar6);
        if (bVar9) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar7) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (((!bVar8) || (FVar16 == (FName)0x0)) ||
           ((FThreadStats::bPrimaryDisableForever != false || (FThreadStats::TlsSlot == 0xffffffff))
           )) goto LAB_143b146ce;
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_143b146ce;
        local_98.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        local_98.NameAndInfo.Index.Value = FVar19.Value;
        QueryPerformanceCounter(&local_a0);
        local_98.StatData.Pad[4] = '\0';
        local_98.StatData.Pad[5] = '\0';
        local_98.StatData.Pad[6] = '\0';
        local_98.StatData.Pad[7] = '\0';
        local_98.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
        local_98.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
        local_98.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
        local_98.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_98);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
          goto LAB_143b146ce;
        }
        FThreadStats::Flush(this_00,false,false);
        pFVar18 = pFVar18 + 8;
      }
      else {
LAB_143b146ce:
        pFVar18 = pFVar18 + 8;
      }
    }
    FVar16 = local_c8;
    uVar20 = local_res10._s_0.B;
  }
  if ((uVar20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar20 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar20 & 4) != 0) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// AreAnyTasksPending @ 143b16d70

bool __thiscall Chaos::FPhysicsSolverBase::AreAnyTasksPending(FPhysicsSolverBase *this)

{
  return false;
}

// ChangeBufferMode @ 143b17e90

void __thiscall
Chaos::FPhysicsSolverBase::ChangeBufferMode(FPhysicsSolverBase *this,EMultiBufferMode param_1)

{
  this->BufferMode = param_1;
  return;
}

// ClearGTParticle_External @ 143b17ef0

void __thiscall
Chaos::FPhysicsSolverBase::ClearGTParticle_External
          (FPhysicsSolverBase *this,TGeometryParticle<double,3> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = (param_1->MNonFrequentData).Property.MUniqueIdx.Idx;
  if (iVar1 < (this->UniqueIdxToGTParticles).ArrayNum) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)((this->UniqueIdxToGTParticles).AllocatorInstance.Data + (longlong)iVar1 * 8) = 0
    ;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4598212920768201116>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                       ,0x19c,"Idx < UniqueIdxToGTParticles.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ConditionalApplyRewind_Internal @ 143b19e50

void __thiscall Chaos::FPhysicsSolverBase::ConditionalApplyRewind_Internal(FPhysicsSolverBase *this)

{
  return;
}

// DestroySolver @ 143b1b3c0

void __cdecl Chaos::FPhysicsSolverBase::DestroySolver(FPhysicsSolverBase *param_1)

{
  int *piVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  double in_XMM1_Qa;
  undefined8 *local_res8;
  
  bVar5 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar5) {
    pFVar3 = (param_1->PendingTasks).Reference;
    if ((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 == '\0')) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4598212920768201022>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                         ,0x13e,"InSolver.IsPendingTasksComplete()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
    WaitOnPendingTasks_External(param_1);
  }
  if (*(FPBDRigidsEvolutionBase **)&param_1[3].bSolverHasFrozenGameThreadCallbacks !=
      (FPBDRigidsEvolutionBase *)0x0) {
    FPBDRigidsEvolutionBase::ResetConstraints
              (*(FPBDRigidsEvolutionBase **)&param_1[3].bSolverHasFrozenGameThreadCallbacks);
  }
  if (param_1->ThreadingMode != SingleThread) {
    WaitOnPendingTasks_External(param_1);
    param_1->ThreadingMode = SingleThread;
  }
  param_1->bIsShuttingDown = true;
  AdvanceAndDispatch_External(param_1,in_XMM1_Qa);
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143b1b494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1->_padding_)(param_1,1);
  return;
}

// DisableAsyncMode @ 143b1b6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPhysicsSolverBase::DisableAsyncMode(FPhysicsSolverBase *this)

{
  this->AsyncDt = -1.0;
  if (5 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    return;
  }
  return;
}

// EnableAsyncMode @ 143b1bdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::FPhysicsSolverBase::EnableAsyncMode(FPhysicsSolverBase *this,double param_1)

{
  this->AsyncDt = param_1;
  if ((byte)LogChaos._0_1_ < 6) {
    return;
  }
  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  return;
}

// EnqueueSimcallbackRewindRegisteration @ 143b1c860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPhysicsSolverBase::EnqueueSimcallbackRewindRegisteration
          (FPhysicsSolverBase *this,ISimCallbackObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSimCallbackCommandObject *pFVar3;
  undefined ***pppuVar4;
  FSimCallbackCommandObject *pFVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined4 local_50;
  FSimCallbackCommandObject *local_48;
  undefined **local_38;
  FPhysicsSolverBase *pFStack_30;
  ISimCallbackObject *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar5 = (FSimCallbackCommandObject *)0x0;
  local_50 = 0;
  if (((!CVars::bEnableAsyncInitBody) && (bVar2 = IsInGameThread(), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                         ,0x1b3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = ::operator_new(0xc0);
  if (pFVar3 != (FSimCallbackCommandObject *)0x0) {
    local_20 = (undefined ***)0x0;
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Chaos::FPhysicsSolverBase::EnqueueSimcallbackRewindRegisteration'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_30 = this;
    local_28 = param_1;
    *(undefined ***)pFVar3 = &___7FSimCallbackCommandObject_Chaos__6B_;
    *(undefined2 *)&pFVar3->field_0x8 = 0;
    *(undefined8 *)&pFVar3->field_0x10 = 0;
    *(undefined8 *)&pFVar3->field_0x18 = 0;
    *(undefined8 *)&pFVar3->field_0x20 = 0;
    *(undefined8 *)&pFVar3->field_0x28 = 0;
    *(undefined2 *)&pFVar3->field_0x40 = 1;
    *(code **)&pFVar3->Func =
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::FPhysicsSolverBase::EnqueueSimcallbackRewindRegisteration'::__l2::<lambda_1>,void>
         ::Call;
    *(undefined8 *)&(pFVar3->Func).field_0x28 = 0;
    *(undefined4 *)&(pFVar3->Func).field_0x10 = 0x50afca88;
    *(undefined4 *)&(pFVar3->Func).field_0x14 = 1;
    *(FPhysicsSolverBase **)&(pFVar3->Func).field_0x18 = this;
    *(ISimCallbackObject **)&(pFVar3->Func).field_0x20 = param_1;
    local_48 = (FSimCallbackCommandObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`Chaos::FPhysicsSolverBase::EnqueueSimcallbackRewindRegisteration'::__l2::<lambda_1>,void>
               ::Call;
    if (*(longlong *)&pFVar3->Func != 0) {
      local_48 = pFVar5;
    }
    *(undefined8 *)&pFVar3->Func2 = 0;
    *(undefined8 *)&(pFVar3->Func2).field_0x28 = 0;
    pFVar3->bFuncHasTimeParameters = false;
    pFVar3->ExecuteOnStep = -1;
    if (*(longlong *)&pFVar3->Func == 0) {
      `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                (local_58);
    }
    pFVar5 = pFVar3;
    if (local_48 != (FSimCallbackCommandObject *)0x0) {
      pppuVar4 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar4 = local_20;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  FChaosMarshallingManager::RegisterSimCommand_External(&this->MarshallingManager,pFVar5);
  return;
}

// FlipEventManagerBuffer @ 143b1e700

void __thiscall Chaos::FPhysicsSolverBase::FlipEventManagerBuffer(FPhysicsSolverBase *this)

{
  return;
}

// GetCVDFrameNumber @ 143b1fe30

int __thiscall Chaos::FPhysicsSolverBase::GetCVDFrameNumber(FPhysicsSolverBase *this)

{
  return -1;
}

// GetDebugName @ 143b20700

FName __thiscall Chaos::FPhysicsSolverBase::GetDebugName(FPhysicsSolverBase *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->DebugName;
  return in_RDX;
}

// IsResimming @ 143b25b40

bool __thiscall Chaos::FPhysicsSolverBase::IsResimming(FPhysicsSolverBase *this)

{
  return false;
}

// KillSafeAsyncTasks @ 143b25ba0

void __thiscall Chaos::FPhysicsSolverBase::KillSafeAsyncTasks(FPhysicsSolverBase *this)

{
  return;
}

// OnDebugNameChanged @ 143b29d30

void __thiscall Chaos::FPhysicsSolverBase::OnDebugNameChanged(FPhysicsSolverBase *this)

{
  return;
}

// PopAndExecuteStolenAdvanceTask_ForTesting @ 143b2b6e0

void __thiscall
Chaos::FPhysicsSolverBase::PopAndExecuteStolenAdvanceTask_ForTesting(FPhysicsSolverBase *this)

{
  int *piVar1;
  FPhysicsSolverProcessPushDataTask *this_00;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<Chaos::FAllSolverTasks,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this->ThreadingMode != SingleThread) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4598212920768201092>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                       ,0x184,"ThreadingMode == EThreadingModeTemp::SingleThread");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->StolenSolverAdvanceTasks).ArrayNum < 1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4598212920768201093>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                       ,0x185,"StolenSolverAdvanceTasks.Num() > 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pTVar5 = &this->StolenSolverAdvanceTasks;
    this_00 = (FPhysicsSolverProcessPushDataTask *)(pTVar5->AllocatorInstance).Data;
    FPhysicsSolverProcessPushDataTask::ProcessPushData(this_00);
    FPhysicsSolverFrozenGTPreSimCallbacks::GTPreSimCallbacks
              ((FPhysicsSolverFrozenGTPreSimCallbacks *)(this_00 + 1));
    FPhysicsSolverAdvanceTask::AdvanceSolver((FPhysicsSolverAdvanceTask *)&this_00[1].PushData);
    if ((this->StolenSolverAdvanceTasks).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    _Dst = (pTVar5->AllocatorInstance).Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(_Dst + 0x40));
    iVar4 = (this->StolenSolverAdvanceTasks).ArrayNum + -1;
    if (iVar4 != 0) {
      memmove(_Dst,_Dst + 0x50,(longlong)iVar4 * 0x50);
    }
    piVar1 = &(this->StolenSolverAdvanceTasks).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,&pTVar5->AllocatorInstance,(this->StolenSolverAdvanceTasks).ArrayNum,
               &(this->StolenSolverAdvanceTasks).ArrayMax);
  }
  return;
}

// SetDebugName @ 143b3f1f0

void __thiscall Chaos::FPhysicsSolverBase::SetDebugName(FPhysicsSolverBase *this,FName *param_1)

{
  this->DebugName = *param_1;
                    /* WARNING: Could not recover jumptable at 0x000143b3f1fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x68))();
  return;
}

// SetRewindCallback @ 143b41110

void __thiscall
Chaos::FPhysicsSolverBase::SetRewindCallback
          (FPhysicsSolverBase *this,
          TUniquePtr<Chaos::IRewindCallback,TDefaultDelete<Chaos::IRewindCallback>_> *param_1)

{
  TUniquePtr<Chaos::IRewindCallback,TDefaultDelete<Chaos::IRewindCallback>_> *pTVar1;
  IRewindCallback *pIVar2;
  FRewindData *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if (param_1->Ptr == (IRewindCallback *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4598212920768201124>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                       ,0x1a4,"RewindCallback");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = &this->MRewindCallback;
  if (pTVar1 != param_1) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = param_1->Ptr;
    param_1->Ptr = (IRewindCallback *)0x0;
    if (pIVar2 != (IRewindCallback *)0x0) {
      (**(code **)pIVar2->_padding_)(pIVar2,1);
    }
  }
  pFVar3 = (this->MRewindData).Ptr;
  if (pFVar3 != (FRewindData *)0x0) {
    pTVar1->Ptr->RewindData = pFVar3;
  }
  return;
}

// SetStealAdvanceTasks_ForTesting @ 143b413c0

void __thiscall
Chaos::FPhysicsSolverBase::SetStealAdvanceTasks_ForTesting(FPhysicsSolverBase *this,bool param_1)

{
  this->bStealAdvanceTasksForTesting = param_1;
  return;
}

// TrackGTParticle_External @ 143b460b0

void __thiscall
Chaos::FPhysicsSolverBase::TrackGTParticle_External
          (FPhysicsSolverBase *this,TGeometryParticle<double,3> *param_1)

{
  TArray<Chaos::TGeometryParticle<double,3>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = (param_1->MNonFrequentData).Property.MUniqueIdx.Idx;
  pTVar1 = &this->UniqueIdxToGTParticles;
  piVar2 = &(this->UniqueIdxToGTParticles).ArrayNum;
  iVar8 = (uVar3 - *piVar2) + 1;
  if (0 < iVar8) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar8,&pTVar1->AllocatorInstance,piVar2,
                       &(this->UniqueIdxToGTParticles).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8,0,(longlong)iVar8 << 3);
  }
  uVar7 = 0;
  if ((int)uVar3 < (this->UniqueIdxToGTParticles).ArrayNum) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(TGeometryParticle<double,3> **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar3 * 8) =
       param_1;
  return;
}

// UpdateParticleInAccelerationStructure_External @ 143b49020

void __thiscall
Chaos::FPhysicsSolverBase::UpdateParticleInAccelerationStructure_External
          (FPhysicsSolverBase *this,TGeometryParticle<double,3> *param_1,
          EPendingSpatialDataOperation param_2)

{
  FSpatialAccelerationIdx FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPendingSpatialData *pFVar5;
  TGeometryParticleHandleImp<double,3,1> *pTStack_40;
  FCollisionFilterData FStack_34;
  FCollisionFilterData FStack_24;
  uint local_14;
  
  if (param_1 == (TGeometryParticle<double,3> *)0x0) {
    pTStack_40 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    iVar4 = -1;
  }
  else if (param_1->Proxy == (IPhysicsProxyBase *)0x0) {
    pTStack_40 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    iVar4 = (param_1->MNonFrequentData).Property.MUniqueIdx.Idx;
  }
  else {
    pTStack_40 = (TGeometryParticleHandleImp<double,3,1> *)(**(code **)param_1->Proxy->_padding_)();
    iVar4 = (param_1->MNonFrequentData).Property.MUniqueIdx.Idx;
  }
  FStack_34.Word2 = 0;
  FStack_34.Word3 = 0;
  FStack_34.Word0 = 0;
  FStack_34.Word1 = 0;
  FStack_24.Word2 = 0;
  FStack_24.Word3 = 0;
  FStack_24.Word0 = 0;
  FStack_24.Word1 = 0;
  local_14 = local_14 & 0xffffff00;
  if (param_1 != (TGeometryParticle<double,3> *)0x0) {
    if (iVar4 == -1) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3133560516564218010>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                         ,0xf66,"CachedUniqueIdx.IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (CVars::bEnableAsyncInitBody == false) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3133560516564218009>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                           ,0xf67,"Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    FAccelerationStructureHandle::
    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>
              (param_1,&FStack_34);
    FAccelerationStructureHandle::
    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticle<double,3>_>(param_1,&FStack_24);
    local_14 = CONCAT31(local_14._1_3_,1);
  }
  pFVar5 = FPendingSpatialDataQueue::FindOrAdd
                     ((this->PendingSpatialOperations_External).Ptr,
                      (FUniqueIdx)(param_1->MNonFrequentData).Property.MUniqueIdx.Idx,Add);
  if (((int)(this->MarshallingManager).ExternalTimestamp_External <= pFVar5->SyncTimestamp) &&
     (pFVar5->Operation == Delete)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4598212920768201065>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                       ,0x169,
                       "SpatialData.SyncTimestamp < MarshallingManager.GetExternalTimestamp_External() || SpatialData.Operation != EPendingSpatialDataOperation::Delete"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5->Operation = param_2;
  FVar1 = (param_1->MNonFrequentData).Property.MSpatialIdx;
  (pFVar5->AccelerationHandle).ExternalGeometryParticle = param_1;
  (pFVar5->AccelerationHandle).GeometryParticleHandle = pTStack_40;
  pFVar5->SpatialIdx = FVar1;
  (pFVar5->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iVar4;
  (pFVar5->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_34.Word0;
  (pFVar5->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_34.Word1;
  (pFVar5->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_34.Word2;
  *(ulonglong *)&(pFVar5->AccelerationHandle).UnionQueryFilterData.Word3 =
       CONCAT44(FStack_24.Word0,FStack_34.Word3);
  (pFVar5->AccelerationHandle).UnionSimFilterData.Word1 = FStack_24.Word1;
  (pFVar5->AccelerationHandle).UnionSimFilterData.Word2 = FStack_24.Word2;
  *(ulonglong *)&(pFVar5->AccelerationHandle).UnionSimFilterData.Word3 =
       CONCAT44(local_14,FStack_24.Word3);
  pFVar5->SyncTimestamp = (int)(this->MarshallingManager).ExternalTimestamp_External;
  return;
}

// WaitOnPendingTasks_External @ 143b4fb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Chaos::FPhysicsSolverBase::WaitOnPendingTasks_External(FPhysicsSolverBase *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  FTaskGraphInterface *pFVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  undefined1 auStackY_88 [32];
  TRefCountPtr<FBaseGraphTask> local_48;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_40;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pFVar3 = (this->PendingTasks).Reference;
  if ((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 == '\0')) {
    pFVar5 = FTaskGraphInterface::Get();
    pcVar4 = *(code **)((longlong)*pFVar5 + 0x60);
    local_48.Reference = (this->PendingTasks).Reference;
    if (local_48.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(local_48.Reference)->field_0x30 = *(int *)&(local_48.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    local_40.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_18 = 1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&local_40,1,&local_14);
    FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_40;
    if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar6 = local_40.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar6,&local_48,1);
    (*pcVar4)(pFVar5,&local_40,0xff);
    FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_40;
    if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar6 = local_40.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar6,local_18);
    if (local_40.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_40.SecondaryData);
    }
    if (local_48.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_48.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_48.Reference)(local_48.Reference,1);
      }
    }
  }
  return;
}

// SetNumDirtyShapes @ 143e4d7e0

void __thiscall
Chaos::FPhysicsSolverBase::SetNumDirtyShapes
          (FPhysicsSolverBase *this,IPhysicsProxyBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = &(this->MarshallingManager).MarshallingManagerLock;
  }
  if (SRWLock == (FPlatformRWLock *)0x0) {
    FDirtySet::SetNumDirtyShapes
              (&((this->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1,param_2);
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FDirtySet::SetNumDirtyShapes
              (&((this->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1,param_2);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// CanDebugNetworkPhysicsPrediction @ 14407f070

bool __cdecl Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FAutoConsoleVariableRef::FAutoConsoleVariableRef
                (&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                  ::__l2::CVarDebugNetworkPhysicsPrediction,L"np2.DebugNetworkPhysicsPrediction",
                 &`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                  ::__l2::DebugNetworkPhysicsPrediction,L"Debugs network physics prediction",0);
      atexit(`Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction'::__l2::
             _dynamic_atexit_destructor_for__CVarDebugNetworkPhysicsPrediction__);
      _Init_thread_footer(&`public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_bool___cdecl_Chaos::FPhysicsSolverBase::CanDebugNetworkPhysicsPrediction(void)'
         ::__l2::DebugNetworkPhysicsPrediction != 0;
}

// RemoveDirtyProxy @ 1440a1880

void __thiscall
Chaos::FPhysicsSolverBase::RemoveDirtyProxy(FPhysicsSolverBase *this,IPhysicsProxyBase *param_1)

{
  FPlatformRWLock *SRWLock;
  
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody) {
    SRWLock = &(this->MarshallingManager).MarshallingManagerLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FDirtySet::Remove(&((this->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001440a18de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  FDirtySet::Remove(&((this->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,param_1);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraSystemSimulationSpawnConcurrentTask @ 1493ce3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraSystemSimulationSpawnConcurrentTask * __thiscall
FNiagaraSystemSimulationSpawnConcurrentTask::FNiagaraSystemSimulationSpawnConcurrentTask
          (FNiagaraSystemSimulationSpawnConcurrentTask *this,
          FNiagaraSystemSimulationTickContext *param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  longlong *plVar1;
  TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *pTVar2;
  ForElementType<FNiagaraSystemInstance_*> FVar3;
  longlong lVar4;
  int iVar5;
  Type TVar6;
  TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *pTVar7;
  undefined8 *puVar8;
  int iVar9;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar10;
  FConstructor local_28;
  TRefCountPtr<FBaseGraphTask> local_20;
  
  FNiagaraSystemSimulationTickContext::FNiagaraSystemSimulationTickContext(&this->Context,param_1);
  this->CompletionTask = (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0;
  iVar9 = 3;
  if (NiagaraSimulationTaskPriority::GPostActorTickPriority < 3) {
    iVar9 = NiagaraSimulationTaskPriority::GPostActorTickPriority;
  }
  iVar5 = 0;
  if (0 < iVar9) {
    iVar5 = iVar9;
  }
  TVar6 = FAutoConsoleTaskPriority::Get
                    (NiagaraSimulationTaskPriority::GTaskPriorities + iVar5,
                     AnyNormalThreadNormalTask);
  this->TaskThread = TVar6;
  local_28.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  pTVar7 = TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask>::FConstructor::
           ConstructAndHold<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_*_&>
                     (&local_28,&(this->Context).CompletionEvents);
  this->CompletionTask = pTVar7;
  if (pTVar7 != (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0) {
    LOCK();
    *(int *)&pTVar7->_padding_ = (int)pTVar7->_padding_ + 1;
    UNLOCK();
  }
  if (param_2 == &local_20) {
    if (pTVar7 == (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0)
    goto LAB_1493ce480;
    LOCK();
    plVar1 = &pTVar7->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) goto LAB_1493ce480;
    puVar8 = (undefined8 *)pTVar7->_padding_;
  }
  else {
    pTVar2 = (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)param_2->Reference;
    param_2->Reference = (FBaseGraphTask *)pTVar7;
    if (pTVar2 == (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0)
    goto LAB_1493ce480;
    LOCK();
    plVar1 = &pTVar2->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) goto LAB_1493ce480;
    puVar8 = (undefined8 *)pTVar2->_padding_;
    pTVar7 = pTVar2;
  }
  (*(code *)*puVar8)(pTVar7,1);
LAB_1493ce480:
  FVar3 = (param_1->TickBatch).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar10 = (param_1->BeforeInstancesTickGraphEvents).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar10 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&param_1->BeforeInstancesTickGraphEvents
    ;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar10,
             (param_1->BeforeInstancesTickGraphEvents).ArrayNum);
  FVar10 = (param_1->BeforeInstancesTickGraphEvents).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  return this;
}

// DoTask @ 1493df360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemSimulationSpawnConcurrentTask::DoTask
          (FNiagaraSystemSimulationSpawnConcurrentTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TAtomic<unsigned___int64> *pTVar3;
  UNiagaraSystem *pUVar4;
  UWorld *pUVar5;
  FBaseGraphTask *pFVar6;
  TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *this_00;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FParticlePerfStats *pFVar10;
  FParticlePerfStats *pFVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  LARGE_INTEGER LVar13;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18 [2];
  
  pUVar4 = (this->Context).System;
  pUVar5 = (this->Context).World;
  if (((pUVar5 == (UWorld *)0x0) || ((int)FParticlePerfStats::WorldStatsReaders < 1)) ||
     (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
    pFVar10 = (FParticlePerfStats *)0x0;
  }
  else {
    pFVar10 = FParticlePerfStats::GetWorldPerfStats(pUVar5);
  }
  if (((pUVar4 == (UNiagaraSystem *)0x0) || ((int)FParticlePerfStats::SystemStatsReaders < 1)) ||
     (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
    pFVar11 = (FParticlePerfStats *)0x0;
  }
  else {
    pFVar11 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar4);
  }
  if ((pFVar10 != (FParticlePerfStats *)0x0) ||
     (LVar13.QuadPart = -1, pFVar11 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_res8);
    LVar13 = local_res8;
  }
  if (`public:_void___cdecl_FNiagaraSystemSimulationSpawnConcurrentTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat364 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    `public:_void___cdecl_FNiagaraSystemSimulationSpawnConcurrentTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat364 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FVar12 = (this->Context).BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData;
  pTVar1 = &(this->Context).BeforeInstancesTickGraphEvents;
  if (FVar12 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar1;
  }
  if (((ulonglong)FVar12 <= param_2) &&
     (param_2 < (TRefCountPtr<FBaseGraphTask> *)
                ((longlong)FVar12 +
                (longlong)(this->Context).BeforeInstancesTickGraphEvents.ArrayMax * 8))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->Context).BeforeInstancesTickGraphEvents.ArrayNum;
  piVar2 = &(this->Context).BeforeInstancesTickGraphEvents.ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Context).BeforeInstancesTickGraphEvents.ArrayNum = iVar9 + 1;
  FVar12 = (this->Context).BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar1;
  }
  *(undefined8 *)((longlong)FVar12 + (longlong)iVar9 * 8) = 0;
  pFVar6 = param_2->Reference;
  *(FBaseGraphTask **)((longlong)FVar12 + (longlong)iVar9 * 8) = pFVar6;
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar6->field_0x30 = *(int *)&pFVar6->field_0x30 + 1;
    UNLOCK();
  }
  FNiagaraSystemSimulation::Spawn_Concurrent((this->Context).Owner,&this->Context);
  FVar12 = (this->Context).BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar1;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar12,
             (this->Context).BeforeInstancesTickGraphEvents.ArrayNum);
  (this->Context).BeforeInstancesTickGraphEvents.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  this_00 = this->CompletionTask;
  if (*(EExtendedTaskPriority *)((TEventCount<unsigned_int> *)&this_00->_padding_ + 1) == TaskEvent)
  {
    LOCK();
    *(atomic<unsigned_int> *)&this_00->_padding_ =
         (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)&this_00->_padding_ + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (LVar13.QuadPart != -1) {
    QueryPerformanceCounter(local_res18);
    if (pFVar10 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar3 = &(pFVar10->GameThreadStats).TickConcurrentCycles;
      *pTVar3 = (TAtomic<unsigned___int64>)
                ((longlong)*pTVar3 + (local_res18[0].QuadPart - (longlong)LVar13));
      UNLOCK();
    }
    if (pFVar11 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar3 = &(pFVar11->GameThreadStats).TickConcurrentCycles;
      *pTVar3 = (TAtomic<unsigned___int64>)
                ((longlong)*pTVar3 + (local_res18[0].QuadPart - (longlong)LVar13));
      UNLOCK();
    }
  }
  return;
}


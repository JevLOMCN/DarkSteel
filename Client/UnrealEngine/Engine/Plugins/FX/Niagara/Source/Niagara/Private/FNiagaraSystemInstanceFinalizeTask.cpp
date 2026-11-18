// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FNiagaraSystemInstanceFinalizeTask @ 1493cdaf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraSystemInstanceFinalizeTask * __thiscall
FNiagaraSystemInstanceFinalizeTask::FNiagaraSystemInstanceFinalizeTask
          (FNiagaraSystemInstanceFinalizeTask *this,FNiagaraSystemSimulation *param_1,
          TArray<FNiagaraSystemInstance_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  TArray<FNiagaraSystemInstance_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  atomic<int> *paVar3;
  int iVar4;
  UNiagaraSystem *pUVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  ENiagaraGPUTickHandlingMode EVar9;
  uint uVar10;
  FParticlePerfStats *pFVar11;
  FParticlePerfStats *pFVar12;
  FNiagaraSystemInstanceFinalizeTask *pFVar13;
  ForElementType<FNiagaraSystemInstance_*> FVar14;
  ForElementType<FNiagaraSystemInstance_*> FVar15;
  ForElementType<FNiagaraSystemInstance_*> FVar16;
  uint uVar17;
  FParticlePerfStats *pFVar18;
  
  this->SystemSimulation = param_1;
  pTVar1 = &this->Batch;
  pFVar18 = (FParticlePerfStats *)0x0;
  (this->Batch).AllocatorInstance.SecondaryData = (ForElementType<FNiagaraSystemInstance_*>)0x0;
  FVar14 = (param_2->AllocatorInstance).SecondaryData;
  iVar4 = param_2->ArrayNum;
  (this->Batch).ArrayNum = iVar4;
  if (FVar14 != (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    param_2 = (TArray<FNiagaraSystemInstance_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)FVar14;
  }
  piVar2 = &(this->Batch).ArrayMax;
  if (iVar4 == 0) {
    *piVar2 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemInstance_*>_>
              (8,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    FVar14 = (this->Batch).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
      FVar14 = (ForElementType<FNiagaraSystemInstance_*>)pTVar1;
    }
    memcpy((void *)FVar14,param_2,(longlong)iVar4 << 3);
  }
  EVar9 = FNiagaraSystemSimulation::GetGPUTickHandlingMode(this->SystemSimulation);
  this->TickHandlingMode = EVar9;
  paVar3 = &this->DebugCounter;
  *paVar3 = (atomic<int>)0x0;
  (this->SystemPerfStatsContext).WorldStats = (FParticlePerfStats *)0x0;
  (this->SystemPerfStatsContext).SystemStats = (FParticlePerfStats *)0x0;
  (this->SystemPerfStatsContext).ComponentStats = (FParticlePerfStats *)0x0;
  LOCK();
  *paVar3 = (atomic<int>)0x0;
  UNLOCK();
  pUVar5 = param_1->System;
  pFVar11 = pFVar18;
  if (((param_1->World != (UWorld *)0x0) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar11 = FParticlePerfStats::GetWorldPerfStats(param_1->World);
  }
  pFVar12 = pFVar18;
  if (((pUVar5 != (UNiagaraSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar12 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar5);
  }
  (this->SystemPerfStatsContext).WorldStats = pFVar11;
  (this->SystemPerfStatsContext).SystemStats = pFVar12;
  (this->SystemPerfStatsContext).ComponentStats = (FParticlePerfStats *)0x0;
  pFVar11 = pFVar18;
  if (0 < (this->Batch).ArrayNum) {
    do {
      uVar17 = (uint)pFVar18;
      uVar10 = 0;
      if ((int)uVar17 < (this->Batch).ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FNiagaraSystemInstanceFinalizeTask *)(*pcVar7)();
        return pFVar13;
      }
      FVar14 = (this->Batch).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FNiagaraSystemInstance_*>)pTVar1;
      if (FVar14 != (ForElementType<FNiagaraSystemInstance_*>)0x0) {
        FVar15 = FVar14;
      }
      LOCK();
      *paVar3 = (atomic<int>)((int)*paVar3 + 1);
      UNLOCK();
      uVar10 = 0;
      if ((int)uVar17 < (this->Batch).ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FNiagaraSystemInstanceFinalizeTask *)(*pcVar7)();
        return pFVar13;
      }
      FVar14 = (this->Batch).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<FNiagaraSystemInstance_*>)pTVar1;
      if (FVar14 != (ForElementType<FNiagaraSystemInstance_*>)0x0) {
        FVar16 = FVar14;
      }
      pFVar18 = (FParticlePerfStats *)(ulonglong)(uVar17 + 1);
      lVar6 = *(longlong *)((longlong)&(pFVar11->GameThreadStats).NumInstances + (longlong)FVar16);
      *(longlong *)(lVar6 + 0x858) = (longlong)FVar15 + (longlong)(int)uVar17 * 8;
      *(atomic<int> **)(lVar6 + 0x860) = paVar3;
      pFVar11 = (FParticlePerfStats *)&(pFVar11->GameThreadStats).TickGameThreadCycles;
    } while ((int)(uVar17 + 1) < (this->Batch).ArrayNum);
  }
  return this;
}

// operator() @ 1493d3c10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  piVar1 = (int *)((longlong)this + 0x1c8);
  iVar2 = *piVar1;
  if (*(undefined8 **)((longlong)this + 0x1c0) != (undefined8 *)0x0) {
    this = *(undefined8 **)((longlong)this + 0x1c0);
  }
  puVar3 = (undefined8 *)((longlong)this + (longlong)iVar2 * 0xe * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this == puVar3) break;
    FNiagaraSystemGpuComputeProxy::QueueTick
              (*(FNiagaraSystemGpuComputeProxy **)this,(FNiagaraGPUSystemTick *)((longlong)this + 8)
              );
    this = (void *)((longlong)this + 0x70);
  }
  return;
}

// DoTask @ 1493de370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstanceFinalizeTask::DoTask
          (FNiagaraSystemInstanceFinalizeTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  ulong64 *puVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FNiagaraSystemInstance *pFVar6;
  code *pcVar7;
  bool bVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  code **ppcVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  longlong lVar13;
  ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> FVar14;
  ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> FVar15;
  TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *pTVar16;
  ForElementType<FNiagaraSystemInstance_*> FVar17;
  ulonglong uVar18;
  LARGE_INTEGER LVar19;
  ForElementType<FNiagaraSystemInstance_*> FVar20;
  undefined1 auStackY_518 [32];
  undefined1 local_4d8;
  undefined1 local_4d7 [7];
  LARGE_INTEGER local_4d0;
  FParticlePerfStats *local_4c8;
  FParticlePerfStats *local_4c0;
  LARGE_INTEGER local_4b8;
  LARGE_INTEGER local_4b0;
  LARGE_INTEGER local_4a8;
  ForElementType<FNiagaraSystemInstance_*> local_4a0;
  LARGE_INTEGER local_498;
  LARGE_INTEGER local_490;
  FNiagaraSystemInstanceFinalizeTask *local_488;
  FNiagaraSystemInstanceFinalizeTask *local_480;
  LARGE_INTEGER local_478;
  FParticlePerfStats *local_470;
  FParticlePerfStats *pFStack_468;
  FParticlePerfStats *local_460;
  code *local_448 [2];
  code *local_438 [3];
  code **local_420;
  code *local_418 [2];
  code *local_408 [3];
  code **local_3f0;
  byte local_3e8;
  ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> local_3d8;
  int local_210;
  int local_20c;
  ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> local_208;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_4c8 = (this->SystemPerfStatsContext).WorldStats;
  pFStack_468 = (this->SystemPerfStatsContext).SystemStats;
  local_4c0 = (this->SystemPerfStatsContext).SystemStats;
  local_460 = (this->SystemPerfStatsContext).ComponentStats;
  local_4b0.QuadPart = -1;
  local_488 = this;
  local_470 = local_4c8;
  if (((local_4c8 != (FParticlePerfStats *)0x0) || (local_4c0 != (FParticlePerfStats *)0x0)) ||
     (local_460 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_4d0);
    local_4b0 = local_4d0;
  }
  if (`public:_void___cdecl_FNiagaraSystemInstanceFinalizeTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat481 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    `public:_void___cdecl_FNiagaraSystemInstanceFinalizeTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat481 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  if ((param_1 != GameThread) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentThread == ENamedThreads::GameThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x1e2,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this->TickHandlingMode == GameThreadBatched) {
    uVar3 = (this->Batch).ArrayNum;
    local_3d8.SecondaryData =
         (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0;
    local_210 = 0;
    local_20c = 4;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (4 < (int)uVar3) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>_>
                (0x70,8,uVar3,&local_3d8,0,&local_20c);
    }
    FVar17 = (this->Batch).AllocatorInstance.SecondaryData;
    FVar20 = (ForElementType<FNiagaraSystemInstance_*>)&this->Batch;
    iVar4 = (this->Batch).ArrayNum;
    if (FVar17 != (ForElementType<FNiagaraSystemInstance_*>)0x0) {
      FVar20 = FVar17;
    }
    FVar17 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar20 + (longlong)iVar4 * 8);
    local_4a0 = FVar17;
    while( true ) {
      if ((this->Batch).ArrayNum != iVar4) {
        local_4d8 = 0;
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_4d8);
      }
      iVar5 = local_210;
      if (FVar20 == FVar17) break;
      pFVar6 = *(FNiagaraSystemInstance **)FVar20;
      if (pFVar6 != (FNiagaraSystemInstance *)0x0) {
        pUVar9 = FWeakObjectPtr::Get(&(pFVar6->AttachComponent).WeakPtr);
        if (pUVar9 == (UObject *)0x0) {
LAB_1493de583:
          lVar13 = 0;
          LVar19.QuadPart = -1;
        }
        else {
          pUVar10 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
          iVar5 = (int)pUVar10->_padding_;
          if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar10->_padding_)) goto LAB_1493de583;
          lVar13 = *(longlong *)&pUVar9[0x21].field_0x20;
          LVar19.QuadPart = -1;
          if (lVar13 != 0) {
            QueryPerformanceCounter(&local_4a8);
            LVar19 = local_4a8;
          }
        }
        FNiagaraSystemInstance::FinalizeTick_GameThread(pFVar6,false);
        if (((pFVar6->ActiveGPUEmitterCount != 0) && (pFVar6->ActualExecutionState != Complete)) &&
           (pFVar6->ActualExecutionState != Disabled)) {
          if (local_210 == local_20c) {
            local_210 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>_>
                                  (0x870,&local_3d8,&local_20c);
          }
          FVar15 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
                   &local_3d8;
          if (local_3d8.SecondaryData !=
              (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
            FVar15 = local_3d8.SecondaryData;
          }
          pTVar16 = (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)
                    ((longlong)local_210 * 0x70 + (longlong)FVar15);
          local_210 = local_210 + 1;
          DefaultConstructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
                    (pTVar16,1);
          *(FNiagaraSystemGpuComputeProxy **)pTVar16 = (pFVar6->SystemGpuComputeProxy).Ptr;
          FNiagaraSystemInstance::InitGPUTick(pFVar6,(FNiagaraGPUSystemTick *)&pTVar16->field_0x8);
          FVar17 = local_4a0;
        }
        if (LVar19.QuadPart != -1) {
          QueryPerformanceCounter(&local_4b8);
          if (lVar13 != 0) {
            *(longlong *)(lVar13 + 0x18) =
                 *(longlong *)(lVar13 + 0x18) + (local_4b8.QuadPart - (longlong)LVar19);
          }
        }
      }
      FVar20 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar20 + 8);
    }
    if (0 < local_210) {
      local_40 = local_210;
      local_208.SecondaryData =
           (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0;
      FVar15 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
               &local_3d8;
      if (local_3d8.SecondaryData !=
          (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
        FVar15 = local_3d8.SecondaryData;
      }
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>_>
                (0x70,8,local_210,0,&local_208,local_210,&local_3c);
      FVar14 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
               &local_208;
      if (local_208.SecondaryData !=
          (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
        FVar14 = local_208.SecondaryData;
      }
      ConstructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
                ((void *)FVar14,
                 (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)FVar15,iVar5);
      local_448[0] = (code *)0x0;
      ppcVar11 = FMemory::Malloc(0x1d8,8);
      *ppcVar11 = (code *)&
                          ___7__TFunction_OwnedObject_V<lambda_1>__BM___DoTask_FNiagaraSystemInstanceFinalizeTask__QEAAXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z__00_00_Function_Private_Core_UE__6B_
      ;
      ppcVar11[0x39] = (code *)0x0;
      local_420 = ppcVar11;
      if (local_208.SecondaryData ==
          (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
        memmove(ppcVar11 + 1,&local_208,0x1c0);
      }
      if (ppcVar11[0x39] != (code *)0x0) {
        FMemory::Free(ppcVar11[0x39]);
      }
      *(ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> *)
       (ppcVar11 + 0x39) = local_208.SecondaryData;
      local_208.SecondaryData =
           (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0;
      *(int *)(ppcVar11 + 0x3a) = local_40;
      *(int *)((longlong)ppcVar11 + 0x1d4) = local_3c;
      if (ppcVar11 + 1 != (code **)0x0) {
        local_448[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      local_40 = 0;
      local_3c = 4;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FNiagaraSystemInstanceFinalizeTask::DoTask_::__l28::TSTR_FNiagaraGiveSystemInstanceTickToRT507>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_448);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_418[0] = local_448[0];
        local_448[0] = (code *)0x0;
        local_3f0 = local_420;
        local_420 = (code **)0x0;
        local_408[0] = local_438[0];
        local_408[1] = local_438[1];
        local_408[2] = local_438[2];
        local_3e8 = 2;
        pFVar12 = (FRenderCommandTag *)
                  TRenderCommandTag<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::TSTR_FNiagaraGiveSystemInstanceTickToRT507>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_418,pFVar12);
        uVar18 = (ulonglong)local_3e8;
        if ((2 < uVar18) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if (local_418[0] != (code *)0x0) {
            ppcVar11 = local_418 + 2;
            if (local_3f0 != (code **)0x0) {
              ppcVar11 = local_3f0;
            }
            (**(code **)(*ppcVar11 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18])
                    ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      *)local_418);
        }
      }
      if (local_448[0] != (code *)0x0) {
        ppcVar11 = local_448 + 2;
        if (local_420 != (code **)0x0) {
          ppcVar11 = local_420;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
      FVar15 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
               &local_208;
      if (local_208.SecondaryData !=
          (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
        FVar15 = local_208.SecondaryData;
      }
      DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
                ((TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)FVar15,local_40);
      if (local_208.SecondaryData !=
          (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
        FMemory::Free((void *)local_208.SecondaryData);
      }
    }
    FVar15 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
             &local_3d8;
    if (local_3d8.SecondaryData !=
        (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
      FVar15 = local_3d8.SecondaryData;
    }
    DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
              ((TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)FVar15,local_210);
    if (local_3d8.SecondaryData !=
        (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
      FMemory::Free((void *)local_3d8.SecondaryData);
    }
  }
  else {
    FVar17 = (this->Batch).AllocatorInstance.SecondaryData;
    FVar20 = (ForElementType<FNiagaraSystemInstance_*>)&this->Batch;
    iVar4 = (this->Batch).ArrayNum;
    if (FVar17 != (ForElementType<FNiagaraSystemInstance_*>)0x0) {
      FVar20 = FVar17;
    }
    local_4b8.QuadPart = (longlong)FVar20 + (longlong)iVar4 * 8;
    while( true ) {
      LVar19 = local_4b8;
      if ((this->Batch).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_4d7);
      }
      if (FVar20 == (ForElementType<FNiagaraSystemInstance_*>)LVar19.QuadPart) break;
      pFVar6 = *(FNiagaraSystemInstance **)FVar20;
      if (pFVar6 == (FNiagaraSystemInstance *)0x0) {
LAB_1493dea55:
        FVar20 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar20 + 8);
      }
      else {
        pUVar9 = FWeakObjectPtr::Get(&(pFVar6->AttachComponent).WeakPtr);
        if (pUVar9 == (UObject *)0x0) {
LAB_1493dea4b:
          FNiagaraSystemInstance::FinalizeTick_GameThread(pFVar6,true);
          goto LAB_1493dea55;
        }
        pUVar10 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
        iVar5 = (int)pUVar10->_padding_;
        if (((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar5) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
             &pUVar10->_padding_)) || (lVar13 = *(longlong *)&pUVar9[0x21].field_0x20, lVar13 == 0))
        goto LAB_1493dea4b;
        QueryPerformanceCounter(&local_498);
        LVar19 = local_498;
        FNiagaraSystemInstance::FinalizeTick_GameThread(pFVar6,true);
        if (LVar19.QuadPart == -1) goto LAB_1493dea55;
        QueryPerformanceCounter(&local_490);
        plVar2 = (longlong *)(lVar13 + 0x18);
        *plVar2 = *plVar2 + (local_490.QuadPart - (longlong)LVar19);
        FVar20 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar20 + 8);
      }
    }
  }
  if (local_488->DebugCounter != (atomic<int>)0x0) {
    local_480 = local_488;
    `FNiagaraSystemInstanceFinalizeTask::DoTask'::__l2::<lambda_2>::operator()(&local_480);
  }
  FCsvProfiler::EndExclusiveStat("Effects");
  LVar19 = local_4b0;
  if (local_4b0.QuadPart != -1) {
    QueryPerformanceCounter(&local_478);
    lVar13 = local_478.QuadPart - (longlong)LVar19;
    if (local_4c8 != (FParticlePerfStats *)0x0) {
      puVar1 = &(local_4c8->GameThreadStats).FinalizeCycles;
      *puVar1 = *puVar1 + lVar13;
    }
    if (local_4c0 != (FParticlePerfStats *)0x0) {
      puVar1 = &(local_4c0->GameThreadStats).FinalizeCycles;
      *puVar1 = *puVar1 + lVar13;
    }
    if (local_460 != (FParticlePerfStats *)0x0) {
      puVar1 = &(local_460->GameThreadStats).FinalizeCycles;
      *puVar1 = *puVar1 + lVar13;
    }
  }
  return;
}

// operator() @ 150542240

bool __thiscall
`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_110362534745210348>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_110362534745210348>,
                       &`public:___cdecl_`public:_void___cdecl_FNiagaraSystemInstanceFinalizeTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}


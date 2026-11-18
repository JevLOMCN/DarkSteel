// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// operator() @ 1493d3980

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
`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::<lambda_1>::operator()
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

// DoTask @ 1493dea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FNiagaraSystemInstanceTickConcurrentTask::DoTask
          (FNiagaraSystemInstanceTickConcurrentTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  TAtomic<unsigned___int64> *pTVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  UNiagaraSystem *pUVar5;
  ForElementType<FNiagaraSystemInstance_*> FVar6;
  FNiagaraSystemInstance *pFVar7;
  code *pcVar8;
  bool bVar9;
  ENiagaraGPUTickHandlingMode EVar10;
  FParticlePerfStats *pFVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  code **ppcVar14;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar15;
  ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> FVar16;
  ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> FVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  LARGE_INTEGER LVar21;
  ForElementType<FNiagaraSystemInstance_*> FVar22;
  undefined1 auStackY_4d8 [32];
  undefined1 local_498;
  undefined1 local_497 [7];
  LARGE_INTEGER local_490;
  LARGE_INTEGER local_488;
  LARGE_INTEGER local_480;
  LARGE_INTEGER local_478;
  LARGE_INTEGER local_470;
  LARGE_INTEGER local_468;
  FParticlePerfStats *local_460;
  FParticlePerfStats *local_458;
  LARGE_INTEGER local_450;
  code *local_448 [2];
  code *local_438 [3];
  code **local_420;
  undefined1 local_418 [40];
  code **local_3f0;
  byte local_3e8;
  undefined1 local_3d8 [448];
  ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> local_218;
  ENiagaraGPUTickHandlingMode local_210;
  ENiagaraGPUTickHandlingMode local_20c;
  ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> local_208;
  ENiagaraGPUTickHandlingMode local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  pUVar5 = this->SystemSimulation->System;
  if (((this->WorldContext == (UWorld *)0x0) || ((int)FParticlePerfStats::WorldStatsReaders < 1)) ||
     (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
    pFVar11 = (FParticlePerfStats *)0x0;
  }
  else {
    pFVar11 = FParticlePerfStats::GetWorldPerfStats(this->WorldContext);
  }
  local_460 = pFVar11;
  if (((pUVar5 == (UNiagaraSystem *)0x0) || ((int)FParticlePerfStats::SystemStatsReaders < 1)) ||
     (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
    local_458 = (FParticlePerfStats *)0x0;
  }
  else {
    local_458 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar5);
  }
  local_468.QuadPart = -1;
  if ((pFVar11 != (FParticlePerfStats *)0x0) || (local_458 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_450);
    local_468 = local_450;
  }
  if (`public:_void___cdecl_FNiagaraSystemInstanceTickConcurrentTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat396 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    `public:_void___cdecl_FNiagaraSystemInstanceTickConcurrentTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat396 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  EVar10 = FNiagaraSystemSimulation::GetGPUTickHandlingMode(this->SystemSimulation);
  if (EVar10 != ConcurrentBatched) {
    FVar6 = (this->Batch).AllocatorInstance.SecondaryData;
    FVar22 = (ForElementType<FNiagaraSystemInstance_*>)&this->Batch;
    iVar3 = (this->Batch).ArrayNum;
    if (FVar6 != (ForElementType<FNiagaraSystemInstance_*>)0x0) {
      FVar22 = FVar6;
    }
    local_488.QuadPart = (longlong)FVar22 + (longlong)iVar3 * 8;
LAB_1493df082:
    do {
      LVar21 = local_488;
      if ((this->Batch).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_497);
      }
      if (FVar22 == (ForElementType<FNiagaraSystemInstance_*>)LVar21.QuadPart) goto LAB_1493defdd;
      pFVar7 = *(FNiagaraSystemInstance **)FVar22;
      pUVar12 = FWeakObjectPtr::Get(&(pFVar7->AttachComponent).WeakPtr);
      if (pUVar12 == (UObject *)0x0) {
LAB_1493df135:
        FNiagaraSystemInstance::Tick_Concurrent(pFVar7,true);
      }
      else {
        pUVar13 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
        iVar4 = (int)pUVar13->_padding_;
        if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar4) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar13->_padding_)) goto LAB_1493df135;
        lVar20 = *(longlong *)&pUVar12[0x21].field_0x20;
        LVar21.QuadPart = -1;
        if (lVar20 != 0) {
          QueryPerformanceCounter(&local_470);
          LVar21 = local_470;
        }
        FNiagaraSystemInstance::Tick_Concurrent(pFVar7,true);
        if ((ForElementType<FNiagaraSystemInstance_*>)LVar21.QuadPart !=
            (ForElementType<FNiagaraSystemInstance_*>)0xffffffffffffffff) {
          QueryPerformanceCounter(&local_478);
          if (lVar20 != 0) {
            LOCK();
            *(longlong *)(lVar20 + 0x10) =
                 *(longlong *)(lVar20 + 0x10) + (local_478.QuadPart - (longlong)LVar21);
            UNLOCK();
            FVar22 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar22 + 8);
            goto LAB_1493df082;
          }
        }
      }
      FVar22 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar22 + 8);
    } while( true );
  }
  uVar2 = (this->Batch).ArrayNum;
  local_218 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0;
  local_210 = None;
  local_20c = EVar10;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (4 < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>_>
              (0x70,8,uVar2,
               (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> *)
               local_3d8,0,(int *)&local_20c);
  }
  FVar6 = (this->Batch).AllocatorInstance.SecondaryData;
  FVar22 = (ForElementType<FNiagaraSystemInstance_*>)&this->Batch;
  iVar3 = (this->Batch).ArrayNum;
  if (FVar6 != (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    FVar22 = FVar6;
  }
  local_470.QuadPart = (longlong)FVar22 + (longlong)iVar3 * 8;
  do {
    LVar21 = local_470;
    lVar20 = 0;
    if ((this->Batch).ArrayNum != iVar3) {
      local_498 = 0;
      `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_498);
    }
    EVar10 = local_210;
    if (FVar22 == (ForElementType<FNiagaraSystemInstance_*>)LVar21.QuadPart) {
      if (0 < (int)local_210) {
        local_208.SecondaryData =
             (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0;
        local_40 = local_210;
        FVar17 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
                 local_3d8;
        if (local_218 !=
            (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
          FVar17 = local_218;
        }
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>_>
                  (0x70,8,local_210,0,&local_208,local_210,&local_3c);
        FVar16 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
                 &local_208;
        if (local_208.SecondaryData !=
            (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
          FVar16 = local_208.SecondaryData;
        }
        ConstructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
                  ((void *)FVar16,
                   (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)FVar17,EVar10);
        local_448[0] = (code *)0x0;
        ppcVar14 = FMemory::Malloc(0x1d8,8);
        *ppcVar14 = (code *)&
                            ___7__TFunction_OwnedObject_V<lambda_1>__BC___DoTask_FNiagaraSystemInstanceTickConcurrentTask__QEAAXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z__00_00_Function_Private_Core_UE__6B_
        ;
        ppcVar14[0x39] = (code *)0x0;
        local_420 = ppcVar14;
        if (local_208.SecondaryData ==
            (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
          memmove(ppcVar14 + 1,&local_208,0x1c0);
        }
        if (ppcVar14[0x39] != (code *)0x0) {
          FMemory::Free(ppcVar14[0x39]);
        }
        *(ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_> *)
         (ppcVar14 + 0x39) = local_208.SecondaryData;
        local_208.SecondaryData =
             (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0;
        *(ENiagaraGPUTickHandlingMode *)(ppcVar14 + 0x3a) = local_40;
        *(int *)((longlong)ppcVar14 + 0x1d4) = local_3c;
        if (ppcVar14 + 1 != (code **)0x0) {
          local_448[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
                         ::Call;
        }
        local_40 = 0;
        local_3c = 4;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FNiagaraSystemInstanceTickConcurrentTask::DoTask_::__l18::TSTR_FNiagaraGiveSystemInstanceTickToRT420>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_448);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_418._0_8_ = local_448[0];
          local_448[0] = (code *)0x0;
          local_3f0 = local_420;
          local_420 = (code **)0x0;
          local_418._16_8_ = local_438[0];
          local_418._24_8_ = local_438[1];
          local_418._32_8_ = local_438[2];
          local_3e8 = 2;
          pFVar15 = (FRenderCommandTag *)
                    TRenderCommandTag<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::TSTR_FNiagaraGiveSystemInstanceTickToRT420>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_418,pFVar15);
          uVar19 = (ulonglong)local_3e8;
          if ((2 < uVar19) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_418._0_8_ != (code *)0x0) {
              ppcVar14 = (code **)(local_418 + 0x10);
              if (local_3f0 != (code **)0x0) {
                ppcVar14 = local_3f0;
              }
              (**(code **)(*ppcVar14 + 0x10))();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar19])(local_418);
          }
        }
        if (local_448[0] != (code *)0x0) {
          ppcVar14 = local_448 + 2;
          if (local_420 != (code **)0x0) {
            ppcVar14 = local_420;
          }
          (**(code **)(*ppcVar14 + 0x10))();
        }
        FVar17 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
                 &local_208;
        if (local_208.SecondaryData !=
            (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
          FVar17 = local_208.SecondaryData;
        }
        DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
                  ((TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)FVar17,local_40)
        ;
        if (local_208.SecondaryData !=
            (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
          FMemory::Free((void *)local_208.SecondaryData);
        }
      }
      FVar17 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
               local_3d8;
      if (local_218 !=
          (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
        FVar17 = local_218;
      }
      DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
                ((TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)FVar17,local_210);
      if (local_218 !=
          (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
        FMemory::Free((void *)local_218);
      }
LAB_1493defdd:
      FCsvProfiler::EndExclusiveStat("Effects");
      LVar21 = local_468;
      if (local_468.QuadPart != -1) {
        QueryPerformanceCounter(&local_490);
        if (local_460 != (FParticlePerfStats *)0x0) {
          LOCK();
          pTVar1 = &(local_460->GameThreadStats).TickConcurrentCycles;
          *pTVar1 = (TAtomic<unsigned___int64>)
                    ((longlong)*pTVar1 + (local_490.QuadPart - (longlong)LVar21));
          UNLOCK();
        }
        if (local_458 != (FParticlePerfStats *)0x0) {
          LOCK();
          pTVar1 = &(local_458->GameThreadStats).TickConcurrentCycles;
          *pTVar1 = (TAtomic<unsigned___int64>)
                    ((longlong)*pTVar1 + (local_490.QuadPart - (longlong)LVar21));
          UNLOCK();
        }
      }
      return;
    }
    pFVar7 = *(FNiagaraSystemInstance **)FVar22;
    pUVar12 = FWeakObjectPtr::Get(&(pFVar7->AttachComponent).WeakPtr);
    if (pUVar12 == (UObject *)0x0) {
LAB_1493dec7f:
      LVar21.QuadPart = -1;
    }
    else {
      pUVar13 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
      iVar4 = (int)pUVar13->_padding_;
      if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar13->_padding_)) goto LAB_1493dec7f;
      lVar20 = *(longlong *)&pUVar12[0x21].field_0x20;
      LVar21.QuadPart = -1;
      if (lVar20 != 0) {
        QueryPerformanceCounter(&local_488);
        LVar21 = local_488;
      }
    }
    FNiagaraSystemInstance::Tick_Concurrent(pFVar7,false);
    if (((pFVar7->ActiveGPUEmitterCount != 0) && (pFVar7->ActualExecutionState != Complete)) &&
       (pFVar7->ActualExecutionState != Disabled)) {
      if (local_210 == local_20c) {
        local_210 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>_>
                              (0x870,(ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>
                                      *)local_3d8,(int *)&local_20c);
      }
      FVar17 = (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)
               local_3d8;
      if (local_218 !=
          (ForElementType<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>_>)0x0) {
        FVar17 = local_218;
      }
      puVar18 = (undefined8 *)((longlong)(int)local_210 * 0x70 + (longlong)FVar17);
      local_210 = local_210 + GameThread;
      DefaultConstructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
                (puVar18,1);
      *puVar18 = (pFVar7->SystemGpuComputeProxy).Ptr;
      FNiagaraSystemInstance::InitGPUTick(pFVar7,(FNiagaraGPUSystemTick *)(puVar18 + 1));
    }
    if ((ForElementType<FNiagaraSystemInstance_*>)LVar21.QuadPart !=
        (ForElementType<FNiagaraSystemInstance_*>)0xffffffffffffffff) {
      QueryPerformanceCounter(&local_480);
      if (lVar20 != 0) {
        LOCK();
        *(longlong *)(lVar20 + 0x10) =
             *(longlong *)(lVar20 + 0x10) + (local_480.QuadPart - (longlong)LVar21);
        UNLOCK();
      }
    }
    FVar22 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar22 + 8);
  } while( true );
}


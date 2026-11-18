// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// ExecuteTask @ 149041510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`UNiagaraComponent::SendRenderDynamicData_Concurrent'::__l14::TSTR_NiagaraSetDynamicData2391>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar12 = *pFVar3;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_1490415f2;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_1490415f2:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar11 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14929b9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
TGraphTask<`FVersionedNiagaraEmitterData::PrecacheComputePSOs'::__l11::FNiagaraEmitterPSOPrecacheReadyTask>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  LARGE_INTEGER LVar3;
  FNiagaraShaderScript *this_00;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TObjectPtr<UNiagaraEmitter>_u_0 this_01;
  EPSOPrecacheResult EVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__public:_class_TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>___cdecl_FVersionedNiagaraEmitterData::PrecacheComputePSOs(UNiagaraEmitter_const_&)_::_11_::FNiagaraEmitterPSOPrecacheReadyTask::GetStatId(void)const_::_2_::FStat_FNiagaraEmitterPSOPrecacheReadyTask>
  FVar9;
  FVersionedNiagaraEmitterData *pFVar10;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *this_02;
  FRHIComputeShader *pFVar11;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  UClass *pUVar12;
  UObject *pUVar13;
  uint uVar14;
  UObject *pUVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  LARGE_INTEGER local_88;
  FString local_78;
  undefined1 local_68 [12];
  uint local_5c;
  TObjectPtr<UNiagaraEmitter>_u_0 local_58 [4];
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  pUVar13 = (UObject *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_FNiagaraEmitterPSOPrecacheReadyTask =
         (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__public:_class_TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>___cdecl_FVersionedNiagaraEmitterData::PrecacheComputePSOs(UNiagaraEmitter_const_&)_::_11_::FNiagaraEmitterPSOPrecacheReadyTask::GetStatId(void)const_::_2_::FStat_FNiagaraEmitterPSOPrecacheReadyTask>
          )0x0;
    pFVar8 = ::FName::FName((FName *)&local_res8.s,"FNiagaraEmitterPSOPrecacheReadyTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_FNiagaraEmitterPSOPrecacheReadyTask,*pFVar8,
               L"FNiagaraEmitterPSOPrecacheReadyTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_FNiagaraEmitterPSOPrecacheReadyTask;
  if (StatPtr_FNiagaraEmitterPSOPrecacheReadyTask ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__public:_class_TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>___cdecl_FVersionedNiagaraEmitterData::PrecacheComputePSOs(UNiagaraEmitter_const_&)_::_11_::FNiagaraEmitterPSOPrecacheReadyTask::GetStatId(void)const_::_2_::FStat_FNiagaraEmitterPSOPrecacheReadyTask>
       )0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FNiagaraEmitterPSOPrecacheReadyTask");
    FVar9 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl__public:_class_TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>___cdecl_FVersionedNiagaraEmitterData::PrecacheComputePSOs(UNiagaraEmitter_const_&)_::_11_::FNiagaraEmitterPSOPrecacheReadyTask::GetStatId(void)const_::_2_::FStat_FNiagaraEmitterPSOPrecacheReadyTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FNiagaraEmitterPSOPrecacheReadyTask,
                         *pFVar8,L"FNiagaraEmitterPSOPrecacheReadyTask","STATGROUP_TaskGraphTasks",
                         "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  LVar3 = *(LARGE_INTEGER *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_88.s.LowPart = 0;
  local_88.s.HighPart = 0;
  if ((LVar3.s.LowPart != 0) || (LVar3.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar3;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8 = LVar3;
      FThreadStats::AddMessage((FName)LVar3.s,CycleScopeStart);
      bVar5 = true;
      local_88 = LVar3;
      goto LAB_14929bb33;
    }
  }
  bVar5 = false;
LAB_14929bb33:
  FVersionedNiagaraEmitterWeakPtr::ResolveWeakPtr
            ((FVersionedNiagaraEmitterWeakPtr *)((longlong)this + 0xd8),
             (FVersionedNiagaraEmitter *)&local_58[0].ObjectPtr);
  pFVar10 = FVersionedNiagaraEmitter::GetEmitterData
                      ((FVersionedNiagaraEmitter *)&local_58[0].ObjectPtr);
  if ((pFVar10 != (FVersionedNiagaraEmitterData *)0x0) &&
     (this_00 = (((pFVar10->GPUComputeScript).field0_0x0.DebugPtr)->ScriptResource).Object,
     this_00 != (FNiagaraShaderScript *)0x0)) {
    pUVar15 = pUVar13;
    if (0 < this_00->NumPermutations) {
      do {
        this_02 = FNiagaraShaderScript::GetShaderGameThread
                            (this_00,(TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *
                                     )local_68,(int)pUVar15);
        pFVar11 = (FRHIComputeShader *)
                  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable>::GetRHIShaderBase
                            (this_02,SF_Compute,true);
        EVar7 = PipelineStateCache::CheckPipelineStateInCache(pFVar11);
        this_01 = local_58[0];
        if (EVar7 != Complete) {
          pFVar10->PSOPrecacheResult = NotSupported;
          if (local_58[0].DebugPtr != (UNiagaraEmitter *)0x0) {
            pUVar12 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
            pUVar13 = UObjectBaseUtility::GetTypedOuter
                                ((UObjectBaseUtility *)this_01.DebugPtr,pUVar12);
          }
          if (2 < (byte)LogNiagara._0_1_) {
            if (pUVar13 == (UObject *)0x0) {
              ::FString::FString((FString *)local_68,L"None");
            }
            else {
              local_res8 = *(LARGE_INTEGER *)&pUVar13->field_0x18;
              ::FName::ToString((FName *)&local_res8.s,(FString *)local_68);
            }
            if (local_58[0].DebugPtr == (UNiagaraEmitter *)0x0) {
              ::FString::FString(&local_78,L"None");
            }
            else {
              local_res8 = (LARGE_INTEGER)(local_58[0].DebugPtr)->_padding_;
              ::FName::ToString((FName *)&local_res8.s,&local_78);
            }
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_Niagara_Compute_151dcab68,
                       (FLogCategoryBase *)&LogNiagara);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if ((uchar  [8])local_68._0_8_ != (uchar  [8])0x0) {
              FMemory::Free((void *)local_68._0_8_);
            }
          }
          goto LAB_14929bbc3;
        }
        uVar14 = (int)pUVar15 + 1;
        pUVar15 = (UObject *)(ulonglong)uVar14;
      } while ((int)uVar14 < this_00->NumPermutations);
    }
    pFVar10->PSOPrecacheResult = Complete;
  }
LAB_14929bbc3:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)local_88.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_68._8_4_ = local_88._0_4_;
      local_5c = local_88.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_68._0_8_ = local_res8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_03,(FStatMessage *)local_68);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1493e0570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
TGraphTask<FNiagaraSystemInstanceFinalizeTask>::ExecuteTask
          (TGraphTask<FNiagaraSystemInstanceFinalizeTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FNiagaraSystemInstanceFinalizeTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FNiagaraSystemInstanceFinalizeTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceFinalizeTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceFinalizeTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FNiagaraSystemInstanceFinalizeTask::GetStatId'::__l2::FStat_FNiagaraSystemInstanceFinalizeTask>
      ::
      FThreadSafeStaticStat<_FNiagaraSystemInstanceFinalizeTask::GetStatId_::__l2::FStat_FNiagaraSystemInstanceFinalizeTask>
                (&`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceFinalizeTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FNiagaraSystemInstanceFinalizeTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceFinalizeTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FNiagaraSystemInstanceFinalizeTask;
  if (_StatPtr_FNiagaraSystemInstanceFinalizeTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FNiagaraSystemInstanceFinalizeTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceFinalizeTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FNiagaraSystemInstanceFinalizeTask,*pFVar8,
                        L"FNiagaraSystemInstanceFinalizeTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    FNiagaraSystemInstanceFinalizeTask::DoTask
              ((FNiagaraSystemInstanceFinalizeTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    FNiagaraSystemInstanceFinalizeTask::DoTask
              ((FNiagaraSystemInstanceFinalizeTask *)&this->TaskStorage,GameThread,
               (TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar11.Value;
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
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x28);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (this != (TGraphTask<FNiagaraSystemInstanceFinalizeTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1493e08a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
TGraphTask<FNiagaraSystemInstanceTickConcurrentTask>::ExecuteTask
          (TGraphTask<FNiagaraSystemInstanceTickConcurrentTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FNiagaraSystemInstanceTickConcurrentTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FNiagaraSystemInstanceTickConcurrentTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceTickConcurrentTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceTickConcurrentTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FNiagaraSystemInstanceTickConcurrentTask::GetStatId'::__l2::FStat_FNiagaraSystemInstanceTickConcurrentTask>
      ::
      FThreadSafeStaticStat<_FNiagaraSystemInstanceTickConcurrentTask::GetStatId_::__l2::FStat_FNiagaraSystemInstanceTickConcurrentTask>
                (&`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceTickConcurrentTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FNiagaraSystemInstanceTickConcurrentTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceTickConcurrentTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FNiagaraSystemInstanceTickConcurrentTask;
  if (_StatPtr_FNiagaraSystemInstanceTickConcurrentTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res10,"FNiagaraSystemInstanceTickConcurrentTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FNiagaraSystemInstanceTickConcurrentTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FNiagaraSystemInstanceTickConcurrentTask,*pFVar8,
                        L"FNiagaraSystemInstanceTickConcurrentTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar12 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
    FNiagaraSystemInstanceTickConcurrentTask::DoTask
              ((FNiagaraSystemInstanceTickConcurrentTask *)&this->TaskStorage,
               *(Type *)(this->TaskStorage).Pad,(TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      FVar11.Value = 0;
    }
    FNiagaraSystemInstanceTickConcurrentTask::DoTask
              ((FNiagaraSystemInstanceTickConcurrentTask *)&this->TaskStorage,
               *(Type *)(this->TaskStorage).Pad,(TRefCountPtr<FBaseGraphTask> *)&local_res8.s);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar11.Value;
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
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x30);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (this != (TGraphTask<FNiagaraSystemInstanceTickConcurrentTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1493e0bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask>::ExecuteTask
          (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  TTypeCompatibleBytes<FNiagaraSystemSimulationAllWorkCompleteTask> *this_00;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  TTypeCompatibleBytes<FNiagaraSystemSimulationAllWorkCompleteTask> *pTVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  TRefCountPtr<FBaseGraphTask> local_res10;
  FName local_res18;
  FStatMessage local_38;
  
  if (this != (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  this_00 = &this->TaskStorage;
  local_res10.Reference = (FBaseGraphTask *)this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId'::__l2::FStat_FNiagaraSystemSimulationAllWorkCompleteTask>
      ::
      FThreadSafeStaticStat<_FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId_::__l2::FStat_FNiagaraSystemSimulationAllWorkCompleteTask>
                (&`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FNiagaraSystemSimulationAllWorkCompleteTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FNiagaraSystemSimulationAllWorkCompleteTask;
  if (_StatPtr_FNiagaraSystemSimulationAllWorkCompleteTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_res18,"FNiagaraSystemSimulationAllWorkCompleteTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FNiagaraSystemSimulationAllWorkCompleteTask,*pFVar8,
                        L"FNiagaraSystemSimulationAllWorkCompleteTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar10 == 0)) {
    FNiagaraSystemSimulationAllWorkCompleteTask::DoTask
              ((FNiagaraSystemSimulationAllWorkCompleteTask *)this_00,GameThread,&local_res10);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar13.ComparisonIndex.Value = 0;
      FVar13.Number = 0;
      FVar12.Value = 0;
    }
    FNiagaraSystemSimulationAllWorkCompleteTask::DoTask
              ((FNiagaraSystemSimulationAllWorkCompleteTask *)this_00,GameThread,&local_res10);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar12.Value;
        QueryPerformanceCounter(&local_res8);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_38);
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
  }
  pTVar11 = *(TTypeCompatibleBytes<FNiagaraSystemSimulationAllWorkCompleteTask> **)
             ((this->TaskStorage).Pad + 0x20);
  if (pTVar11 == (TTypeCompatibleBytes<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0) {
    pTVar11 = this_00;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)pTVar11,*(int *)((this->TaskStorage).Pad + 0x28));
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x20);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if (this != (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1493e0f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
TGraphTask<FNiagaraSystemSimulationSpawnConcurrentTask>::ExecuteTask
          (TGraphTask<FNiagaraSystemSimulationSpawnConcurrentTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  TTypeCompatibleBytes<FNiagaraSystemSimulationSpawnConcurrentTask> *this_00;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  uchar *puVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  TRefCountPtr<FBaseGraphTask> local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if (this != (TGraphTask<FNiagaraSystemSimulationSpawnConcurrentTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  this_00 = &this->TaskStorage;
  local_res10.Reference = (FBaseGraphTask *)this;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId'::__l2::FStat_FNiagaraSystemSimulationSpawnConcurrentTask>
      ::
      FThreadSafeStaticStat<_FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId_::__l2::FStat_FNiagaraSystemSimulationSpawnConcurrentTask>
                (&`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FNiagaraSystemSimulationSpawnConcurrentTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar9 = _StatPtr_FNiagaraSystemSimulationSpawnConcurrentTask;
  if (_StatPtr_FNiagaraSystemSimulationSpawnConcurrentTask == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(local_res18,"FNiagaraSystemSimulationSpawnConcurrentTask");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FNiagaraSystemSimulationSpawnConcurrentTask,*pFVar8,
                        L"FNiagaraSystemSimulationSpawnConcurrentTask","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar9->Name;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar10 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar10 == 0)) {
    FNiagaraSystemSimulationSpawnConcurrentTask::DoTask
              ((FNiagaraSystemSimulationSpawnConcurrentTask *)this_00,*(Type *)this_00->Pad,
               &local_res10);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar4 = true;
        bVar6 = true;
      }
    }
    bVar5 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
    }
    else {
      FVar13.ComparisonIndex.Value = 0;
      FVar13.Number = 0;
      FVar12.Value = 0;
    }
    FNiagaraSystemSimulationSpawnConcurrentTask::DoTask
              ((FNiagaraSystemSimulationSpawnConcurrentTask *)this_00,*(Type *)this_00->Pad,
               &local_res10);
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
        local_38.NameAndInfo.Index.Value = FVar12.Value;
        QueryPerformanceCounter(&local_res8);
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_38);
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
  }
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  puVar11 = *(uchar **)((this->TaskStorage).Pad + 0x60);
  if (puVar11 == (uchar *)0x0) {
    puVar11 = (this->TaskStorage).Pad + 0x40;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)puVar11,*(int *)((this->TaskStorage).Pad + 0x68));
  pvVar3 = *(void **)((this->TaskStorage).Pad + 0x60);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if ((TGraphTask<FNiagaraSystemSimulationSpawnConcurrentTask> *)local_res10.Reference !=
      (TGraphTask<FNiagaraSystemSimulationSpawnConcurrentTask> *)0x0) {
    LOCK();
    plVar2 = (longlong *)&(local_res10.Reference)->field_0x30;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) &&
       ((TGraphTask<FNiagaraSystemSimulationSpawnConcurrentTask> *)local_res10.Reference !=
        (TGraphTask<FNiagaraSystemSimulationSpawnConcurrentTask> *)0x0)) {
      (*(code *)**(undefined8 **)local_res10.Reference)(local_res10.Reference,1);
    }
  }
  return;
}

// ExecuteTask @ 1493e1260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
TGraphTask<FNiagaraSystemSimulationTickConcurrentTask>::ExecuteTask
          (TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *this)

{
  TAtomic<unsigned___int64> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  FName FVar4;
  UWorld *pUVar5;
  UFXSystemAsset *pUVar6;
  FTaskBase *this_00;
  void *pvVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  TStatIdData *pTVar12;
  FParticlePerfStats *pFVar13;
  FParticlePerfStats *pFVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar15;
  uchar *puVar16;
  FNameEntryId FVar17;
  longlong lVar18;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_58;
  FStatMessage local_48;
  
  if (this != (TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FNiagaraSystemSimulationTickConcurrentTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationTickConcurrentTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FNiagaraSystemSimulationTickConcurrentTask::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FThreadSafeStaticStat<`FNiagaraSystemSimulationTickConcurrentTask::GetStatId'::__l2::FStat_FNiagaraSystemSimulationTickConcurrentTask>
    ::
    FThreadSafeStaticStat<_FNiagaraSystemSimulationTickConcurrentTask::GetStatId_::__l2::FStat_FNiagaraSystemSimulationTickConcurrentTask>
              (&`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationTickConcurrentTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FNiagaraSystemSimulationTickConcurrentTask);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationTickConcurrentTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar14 = (FParticlePerfStats *)0x0;
  pTVar12 = _StatPtr_FNiagaraSystemSimulationTickConcurrentTask;
  if (_StatPtr_FNiagaraSystemSimulationTickConcurrentTask == (TStatIdData *)0x0) {
    pFVar11 = ::FName::FName(&local_res10,"FNiagaraSystemSimulationTickConcurrentTask");
    pTVar12 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FNiagaraSystemSimulationTickConcurrentTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FNiagaraSystemSimulationTickConcurrentTask,*pFVar11,
                         L"FNiagaraSystemSimulationTickConcurrentTask","STATGROUP_TaskGraphTasks",
                         "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar4 = *(FName *)&pTVar12->Name;
  bVar8 = false;
  bVar10 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar17 = FVar4.ComparisonIndex.Value;
  uVar15 = FVar4.Number;
  if ((FVar17.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar12->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar17.Value;
        local_res8.s.HighPart = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar17.Value;
      local_res8.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar9 = true;
      local_58 = FVar4;
      goto LAB_1493e13f1;
    }
  }
  bVar9 = false;
LAB_1493e13f1:
  pUVar5 = *(UWorld **)((this->TaskStorage).Pad + 0x18);
  pUVar6 = *(UFXSystemAsset **)((this->TaskStorage).Pad + 0x10);
  pFVar13 = pFVar14;
  if (((pUVar5 != (UWorld *)0x0) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar13 = FParticlePerfStats::GetWorldPerfStats(pUVar5);
  }
  if (((pUVar6 != (UFXSystemAsset *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar14 = FParticlePerfStats::GetSystemPerfStats(pUVar6);
  }
  lVar18 = -1;
  if ((pFVar13 != (FParticlePerfStats *)0x0) || (pFVar14 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_res8);
    lVar18 = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart);
  }
  if (`public:_void___cdecl_FNiagaraSystemSimulationTickConcurrentTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat331 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    `public:_void___cdecl_FNiagaraSystemSimulationTickConcurrentTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat331 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FNiagaraSystemSimulation::Tick_Concurrent
            (*(FNiagaraSystemSimulation **)((this->TaskStorage).Pad + 8),
             (FNiagaraSystemSimulationTickContext *)((this->TaskStorage).Pad + 8));
  this_00 = *(FTaskBase **)((this->TaskStorage).Pad + 0xa8);
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (lVar18 != -1) {
    QueryPerformanceCounter(&local_res8);
    lVar18 = CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) - lVar18;
    if (pFVar13 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(pFVar13->GameThreadStats).TickConcurrentCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar18);
      UNLOCK();
    }
    if (pFVar14 != (FParticlePerfStats *)0x0) {
      LOCK();
      pTVar1 = &(pFVar14->GameThreadStats).TickConcurrentCycles;
      *pTVar1 = (TAtomic<unsigned___int64>)((longlong)*pTVar1 + lVar18);
      UNLOCK();
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (local_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
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
  pvVar7 = *(void **)((this->TaskStorage).Pad + 0x98);
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  puVar16 = *(uchar **)((this->TaskStorage).Pad + 0x60);
  if (puVar16 == (uchar *)0x0) {
    puVar16 = (this->TaskStorage).Pad + 0x40;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)puVar16,*(int *)((this->TaskStorage).Pad + 0x68));
  pvVar7 = *(void **)((this->TaskStorage).Pad + 0x60);
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  LOCK();
  plVar3 = &this->_padding_;
  lVar18 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar18 == 1) {
    (**(code **)this->_padding_)(this,1);
  }
  return;
}

// ExecuteTask @ 1493e16a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar12 = *pFVar3;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_1493e1782;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_1493e1782:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar11 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1493e1990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>_>_>
::ExecuteTask(void *this)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar11;
  FName FVar12;
  FNameEntryId FVar13;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_48;
  FStatMessage local_38;
  
  if (this != (void *)0x0) {
    LOCK();
    *(int *)((longlong)this + 0x30) = *(int *)((longlong)this + 0x30) + 1;
    UNLOCK();
  }
  bVar5 = false;
  bVar7 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  pFVar3 = *(FName **)(*(longlong *)((longlong)this + 0xe0) + 8);
  FVar12 = *pFVar3;
  FVar13 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar13.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar6 = true;
      goto LAB_1493e1a72;
    }
  }
  bVar6 = false;
  FVar12 = local_48;
LAB_1493e1a72:
  if ((GIsThreadedRendering != false) &&
     (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                       ,0x21d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId562,(wchar_t *)**(undefined8 **)((longlong)this + 0xe0),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x232);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId562);
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0xf0));
  pcVar4 = *(code **)((longlong)this + 0xf0);
  plVar11 = (longlong *)((longlong)this + 0x100);
  if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x118);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar4)(uVar10);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  if (*(longlong *)((longlong)this + 0xf0) != 0) {
    plVar11 = (longlong *)((longlong)this + 0x100);
    if (*(longlong **)((longlong)this + 0x118) != (longlong *)0x0) {
      plVar11 = *(longlong **)((longlong)this + 0x118);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (this != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)this + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)this)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 1493e1c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<FNiagaraSystemNullCompletionTask>::ExecuteTask
          (TGraphTask<FNiagaraSystemNullCompletionTask> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  UObject *pUVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FName local_58;
  FStatMessage local_48;
  
  if (this != (TGraphTask<FNiagaraSystemNullCompletionTask> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FNiagaraSystemNullCompletionTask::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FNiagaraSystemNullCompletionTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FNiagaraSystemNullCompletionTask::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FNiagaraSystemNullCompletionTask::GetStatId'::__l2::FStat_FNiagaraSystemNullCompletionTask>
      ::
      FThreadSafeStaticStat<_FNiagaraSystemNullCompletionTask::GetStatId_::__l2::FStat_FNiagaraSystemNullCompletionTask>
                (&`public:_struct_TStatId___cdecl_FNiagaraSystemNullCompletionTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FNiagaraSystemNullCompletionTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FNiagaraSystemNullCompletionTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar10 = _StatPtr_FNiagaraSystemNullCompletionTask;
  if (_StatPtr_FNiagaraSystemNullCompletionTask == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"FNiagaraSystemNullCompletionTask");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_struct_TStatId___cdecl_FNiagaraSystemNullCompletionTask::GetStatId(void)const___ptr64'
                          ::__l2::StatPtr_FNiagaraSystemNullCompletionTask,*pFVar9,
                         L"FNiagaraSystemNullCompletionTask","STATGROUP_TaskGraphTasks",
                         "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar14 = *(FName *)&pTVar10->Name;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1493e1e1d;
    }
  }
  bVar6 = false;
  FVar14 = local_58;
  FVar13.Value = 0;
LAB_1493e1e1d:
  pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->TaskStorage);
  if ((((pUVar11 != (UObject *)0x0) &&
       (plVar3 = *(longlong **)((this->TaskStorage).Pad + 8), plVar3 != (longlong *)0x0)) &&
      (puVar4 = (undefined8 *)*plVar3, puVar4 == *(undefined8 **)((this->TaskStorage).Pad + 0x10)))
     && (puVar4 != (undefined8 *)0x0)) {
    *plVar3 = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
  if (this != (TGraphTask<FNiagaraSystemNullCompletionTask> *)0x0) {
    LOCK();
    plVar3 = &this->_padding_;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}


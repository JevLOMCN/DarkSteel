// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FParallelCommandListSet @ 1454d1470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParallelCommandListSet * __thiscall
FParallelCommandListSet::FParallelCommandListSet
          (FParallelCommandListSet *this,FRDGPass *param_1,FViewInfo *param_2,
          FRHICommandListImmediate *param_3,bool param_4)

{
  int *piVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  FParallelCommandListSet *pFVar5;
  uint uVar6;
  
  this->Pass = param_1;
  this->_padding_ = (longlong)&___7FParallelCommandListSet__6B_;
  piVar1 = &(this->QueuedCommandLists).ArrayMax;
  this->View = param_2;
  this->NumAlloc = 0;
  (this->QueuedCommandLists).AllocatorInstance.Data = (FQueuedCommandList *)0x0;
  (this->QueuedCommandLists).ArrayNum = 0;
  *piVar1 = 0;
  this->bHasRenderPasses = param_4;
  this->ParentCmdList = param_3;
  pTVar3 = CVarRHICmdWidth.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FParallelCommandListSet *)(*pcVar2)();
      return pFVar5;
    }
  }
  this->Width = pTVar3->ShadowedValue[1];
  pTVar3 = CVarRHICmdMinDrawsPerParallelCmdList.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FParallelCommandListSet *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar6 = this->Width * 8;
  this->MinDrawsPerCommandList = pTVar3->ShadowedValue[1];
  if (-1 < this->Width << 3) {
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
                (8,8,uVar6,&(this->QueuedCommandLists).AllocatorInstance,
                 (this->QueuedCommandLists).ArrayNum,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// ~FParallelCommandListSet @ 1454d7210

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FParallelCommandListSet::~FParallelCommandListSet(FParallelCommandListSet *this)

{
  int iVar1;
  FQueuedCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = (this->QueuedCommandLists).ArrayNum;
  this->_padding_ = (longlong)&___7FParallelCommandListSet__6B_;
  if (iVar1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueuedCommandLists.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x345,
                       L"Derived class of FParallelCommandListSet did not call Dispatch in virtual destructor"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->NumAlloc != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumAlloc == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x346,
                       L"Derived class of FParallelCommandListSet did not call Dispatch in virtual destructor"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->QueuedCommandLists).AllocatorInstance.Data;
  if (pFVar2 != (FQueuedCommandList *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
    return;
  }
  return;
}

// AddParallelCommandList @ 1454e0240

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParallelCommandListSet::AddParallelCommandList
          (FParallelCommandListSet *this,FRHICommandList *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->QueuedCommandLists).ArrayNum;
  piVar1 = &(this->QueuedCommandLists).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
                      (0x808,&(this->QueuedCommandLists).AllocatorInstance,piVar1);
  }
  (this->QueuedCommandLists).ArrayNum = iVar2 + 1;
  (this->QueuedCommandLists).AllocatorInstance.Data[iVar2].CmdList = (FRHICommandListBase *)param_1;
  return;
}

// AllocCommandList @ 1454e0c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandList * __thiscall
FParallelCommandListSet::AllocCommandList(FParallelCommandListSet *this)

{
  FRHICommandListBase *this_00;
  
  this->NumAlloc = this->NumAlloc + 1;
  this_00 = ::operator_new(0x1bb0);
  if (this_00 != (FRHICommandListBase *)0x0) {
    FRHICommandListBase::FRHICommandListBase
              (this_00,(FRHIGPUMask)*(uint *)&this->ParentCmdList->field_0x29c,false);
    return (FRHICommandList *)this_00;
  }
  return (FRHICommandList *)0x0;
}

// Dispatch @ 1454eaf40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FParallelCommandListSet::Dispatch(FParallelCommandListSet *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FRHICommandListImmediate *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_protected:_void___cdecl_FParallelCommandListSet::Dispatch(bool)_::_2_::FStat_STAT_FParallelCommandListSet_Dispatch>
  FVar9;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FName local_68;
  FStatMessage local_58;
  FQueuedCommandList *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FParallelCommandListSet_Dispatch ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FParallelCommandListSet::Dispatch(bool)_::_2_::FStat_STAT_FParallelCommandListSet_Dispatch>
           )0x0) {
        pFVar8 = ::FName::FName(&local_78,"STAT_FParallelCommandListSet_Dispatch");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FParallelCommandListSet_Dispatch,
                   *pFVar8,L"STAT_FParallelCommandListSet_Dispatch","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_FParallelCommandListSet_Dispatch;
  if (StatPtr_STAT_FParallelCommandListSet_Dispatch ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FParallelCommandListSet::Dispatch(bool)_::_2_::FStat_STAT_FParallelCommandListSet_Dispatch>
       )0x0) {
    pFVar8 = ::FName::FName(&local_70,"STAT_FParallelCommandListSet_Dispatch");
    FVar9 = (FThreadSafeStaticStat<_protected:_void___cdecl_FParallelCommandListSet::Dispatch(bool)_::_2_::FStat_STAT_FParallelCommandListSet_Dispatch>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FParallelCommandListSet_Dispatch
                         ,*pFVar8,L"STAT_FParallelCommandListSet_Dispatch","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                   ,0x336);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar11.Value;
      local_res20.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_1454eb0bb;
    }
  }
  bVar5 = false;
  FVar12 = local_68;
LAB_1454eb0bb:
  if ((this->QueuedCommandLists).ArrayNum != this->NumAlloc) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueuedCommandLists.Num() == NumAlloc",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x337,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->ParentCmdList->field_0x29b & 2) != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentCmdList.IsOutsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x33c,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->QueuedCommandLists).ArrayNum;
  this->NumAlloc = this->NumAlloc - iVar2;
  local_48 = (this->QueuedCommandLists).AllocatorInstance.Data;
  this_00 = this->ParentCmdList;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar2;
  local_38.DataPtr = local_48;
  iStack_40 = iVar2;
  FRHICommandListImmediate::QueueAsyncCommandListSubmit(this_00,&local_38,Disabled,0);
  (this->QueuedCommandLists).ArrayNum = 0;
  if ((this->QueuedCommandLists).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
              (8,8,0,&(this->QueuedCommandLists).AllocatorInstance,0,
               &(this->QueuedCommandLists).ArrayMax);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_58);
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

// NewParallelCommandList @ 1454fd310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandList * __thiscall
FParallelCommandListSet::NewParallelCommandList(FParallelCommandListSet *this)

{
  FRHICommandListBase *this_00;
  
  this->NumAlloc = this->NumAlloc + 1;
  this_00 = ::operator_new(0x1bb0);
  if (this_00 == (FRHICommandListBase *)0x0) {
    this_00 = (FRHICommandListBase *)0x0;
  }
  else {
    FRHICommandListBase::FRHICommandListBase
              (this_00,(FRHIGPUMask)*(uint *)&this->ParentCmdList->field_0x29c,false);
  }
  FRHICommandListBase::SwitchPipeline(this_00,Graphics);
  (**(code **)(this->_padding_ + 8))(this,this_00);
  return (FRHICommandList *)this_00;
}

// SetStateOnCommandList @ 145504e70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParallelCommandListSet::SetStateOnCommandList
          (FParallelCommandListSet *this,FRHICommandList *param_1)

{
  return;
}


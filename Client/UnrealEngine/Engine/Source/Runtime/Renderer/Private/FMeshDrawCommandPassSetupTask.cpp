// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AnyThreadTask @ 144ef7e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall FMeshDrawCommandPassSetupTask::AnyThreadTask(FMeshDrawCommandPassSetupTask *this)

{
  int *piVar1;
  Type TVar2;
  FMeshDrawCommandPassSetupTaskContext *pFVar3;
  EMeshDrawCommandCullingPayloadFlags *pEVar4;
  FMeshDrawCommandPassSetupTaskContext *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  EOITPassType EVar11;
  uint uVar12;
  FNameEntryId FVar13;
  size_t sVar14;
  FName FVar15;
  FNameEntryId FVar16;
  bool bVar17;
  LARGE_INTEGER local_res8;
  FName local_res10;
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_68;
  FTaskTagScope local_58;
  FStatMessage local_48;
  
  FTaskTagScope::FTaskTagScope(&local_58,EParallelRenderingThread);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"MeshDrawCommandPassSetupTask");
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FMeshDrawCommandPassSetupTask::AnyThreadTask(void)___ptr64'::
                __l2::__CpuProfilerEventSpecId1034,"MeshDrawCommandPassSetupTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
               ,0x40a);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FMeshDrawCommandPassSetupTask::AnyThreadTask(void)___ptr64'::
               __l2::__CpuProfilerEventSpecId1034);
  }
  pFVar3 = this->Context;
  if ((pFVar3->ShadingPath == Mobile) || (pFVar3->ShaderPlatform == SP_VULKAN_SM5_ANDROID)) {
    bVar7 = true;
    if ((pFVar3->ShadingPath != Mobile) || (pFVar3->PassType != BasePass)) goto LAB_144ef7ea1;
    bVar8 = true;
LAB_144ef7eb4:
    if (pFVar3->Scene->EarlyZPassMode == DDM_AllOpaque) goto LAB_144ef7ed7;
LAB_144ef7ec1:
    bVar7 = true;
  }
  else {
    bVar7 = false;
LAB_144ef7ea1:
    bVar8 = false;
    if (bVar7) {
      if (pFVar3->PassType == DepthPass) goto LAB_144ef7ec1;
      if (pFVar3->PassType == BasePass) goto LAB_144ef7eb4;
    }
LAB_144ef7ed7:
    bVar7 = false;
  }
  pFVar3 = this->Context;
  if (bVar8) {
    MergeMobileBasePassMeshDrawCommands
              (&pFVar3->View->MobileCSMVisibilityInfo,pFVar3->PrimitiveBounds->NumElements,
               &pFVar3->MeshDrawCommands,&pFVar3->MobileBasePassCSMMeshDrawCommands);
    pFVar3 = this->Context;
    local_68.AllocatorInstance.Data = (EMeshDrawCommandCullingPayloadFlags *)0x0;
    local_68.ArrayNum = (pFVar3->DynamicMeshCommandBuildFlags).ArrayNum;
    sVar14 = (size_t)local_68.ArrayNum;
    local_res8.s.LowPart = pFVar3->NumDynamicMeshCommandBuildRequestElements;
    pEVar4 = (pFVar3->DynamicMeshCommandBuildFlags).AllocatorInstance.Data;
    if (local_68.ArrayNum == 0) {
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
                (1,1,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                 &local_68.ArrayMax);
      memcpy(local_68.AllocatorInstance.Data,pEVar4,sVar14);
    }
    pFVar5 = this->Context;
    GenerateMobileBasePassDynamicMeshDrawCommands
              (pFVar5->View,pFVar5->ShadingPath,pFVar5->PassType,pFVar5->MeshPassProcessor,
               pFVar5->MobileBasePassCSMMeshPassProcessor,pFVar5->DynamicMeshElements,
               pFVar5->DynamicMeshElementsPassRelevance,pFVar5->NumDynamicMeshElements,
               &pFVar5->DynamicMeshCommandBuildRequests,&local_68,local_res8.s.LowPart,
               &pFVar3->MeshDrawCommands,&pFVar3->MeshDrawCommandStorage,
               &pFVar3->MinimalPipelineStatePassSet,&pFVar3->NeedsShaderInitialisation);
  }
  else {
    local_68.ArrayNum = (pFVar3->DynamicMeshCommandBuildFlags).ArrayNum;
    sVar14 = (size_t)local_68.ArrayNum;
    local_res8.s.LowPart = pFVar3->NumDynamicMeshCommandBuildRequestElements;
    pEVar4 = (pFVar3->DynamicMeshCommandBuildFlags).AllocatorInstance.Data;
    local_68.AllocatorInstance.Data = (EMeshDrawCommandCullingPayloadFlags *)0x0;
    if (local_68.ArrayNum == 0) {
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
                (1,1,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                 &local_68.ArrayMax);
      memcpy(local_68.AllocatorInstance.Data,pEVar4,sVar14);
    }
    pFVar5 = this->Context;
    GenerateDynamicMeshDrawCommands
              (pFVar5->View,pFVar5->ShadingPath,pFVar5->PassType,pFVar5->MeshPassProcessor,
               pFVar5->DynamicMeshElements,pFVar5->DynamicMeshElementsPassRelevance,
               pFVar5->NumDynamicMeshElements,&pFVar5->DynamicMeshCommandBuildRequests,&local_68,
               local_res8.s.LowPart,&pFVar3->MeshDrawCommands,&pFVar3->MeshDrawCommandStorage,
               &pFVar3->MinimalPipelineStatePassSet,&pFVar3->NeedsShaderInitialisation);
  }
  FVar16.Value = 0;
  pFVar3 = this->Context;
  if ((pFVar3->MeshDrawCommands).ArrayNum < 1) goto LAB_144ef847b;
  if (pFVar3->PassType != Num) {
    ApplyViewOverridesToMeshDrawCommands
              (pFVar3->ShadingPath,pFVar3->PassType,pFVar3->bReverseCulling,
               pFVar3->bRenderSceneTwoSided,pFVar3->BasePassDepthStencilAccess,
               pFVar3->DefaultBasePassDepthStencilAccess,&pFVar3->MeshDrawCommands,
               &pFVar3->MeshDrawCommandStorage,&pFVar3->MinimalPipelineStatePassSet,
               &pFVar3->NeedsShaderInitialisation,&pFVar3->TempVisibleMeshDrawCommands);
  }
  pFVar3 = this->Context;
  if (bVar7) {
    UpdateMobilePassMeshSortKeys
              (&pFVar3->ViewOrigin,pFVar3->PrimitiveBounds,&pFVar3->MeshDrawCommands);
  }
  else if (pFVar3->TranslucencyPass != TPT_MAX) {
    bVar7 = OIT::IsSortedPixelsEnabled(pFVar3->View);
    TVar2 = this->Context->TranslucencyPass;
    if ((TVar2 == TPT_AllTranslucency) ||
       (EVar11 = OITPass_SeperateTranslucency, TVar2 < TPT_TranslucencyAfterDOF)) {
      EVar11 = OITPass_RegularTranslucency;
    }
    bVar8 = OIT::IsSortedPixelsEnabledForPass(EVar11);
    pFVar3 = this->Context;
    UpdateTranslucentMeshSortKeys
              (pFVar3->TranslucentSortPolicy,&pFVar3->TranslucentSortAxis,&pFVar3->ViewOrigin,
               &pFVar3->ViewMatrix,pFVar3->PrimitiveBounds,pFVar3->TranslucencyPass,bVar7 && bVar8,
               &pFVar3->MeshDrawCommands);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FMeshDrawCommandPassSetupTask::AnyThreadTask(void)___ptr64'::__l26::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FMeshDrawCommandPassSetupTask::AnyThreadTask(void)___ptr64'
                           ::__l26::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FMeshDrawCommandPassSetupTask::AnyThreadTask(void)___ptr64'::__l26::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_SortVisibleMeshDrawCommands = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_SortVisibleMeshDrawCommands");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FMeshDrawCommandPassSetupTask::AnyThreadTask(void)___ptr64'::
                __l26::StatPtr_STAT_SortVisibleMeshDrawCommands,*pFVar9,
               L"STAT_SortVisibleMeshDrawCommands","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FMeshDrawCommandPassSetupTask::AnyThreadTask(void)___ptr64'
                         ::__l26::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_STAT_SortVisibleMeshDrawCommands;
  if (_StatPtr_STAT_SortVisibleMeshDrawCommands == (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_res10,"STAT_SortVisibleMeshDrawCommands");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FMeshDrawCommandPassSetupTask::AnyThreadTask(void)___ptr64'
                          ::__l26::StatPtr_STAT_SortVisibleMeshDrawCommands,*pFVar9,
                         L"STAT_SortVisibleMeshDrawCommands","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar10->Name;
  bVar7 = false;
  bVar8 = false;
  local_68.AllocatorInstance.Data = (EMeshDrawCommandCullingPayloadFlags *)0x0;
  FVar13 = FVar15.ComparisonIndex.Value;
  uVar12 = FVar15.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_144ef833d:
    bVar6 = false;
    FVar15 = (FName)local_68.AllocatorInstance;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                   ,0x47c);
        bVar7 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144ef833d;
    local_res8.s.LowPart = FVar13.Value;
    local_res8.s.HighPart = uVar12;
    local_68.AllocatorInstance.Data = (EMeshDrawCommandCullingPayloadFlags *)FVar15;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    FVar16.Value = (uint)local_68.AllocatorInstance.Data;
    bVar6 = true;
  }
  AlgoImpl::
  IntroSortInternal<FVisibleMeshDrawCommand,int,FIdentityFunctor,TDereferenceWrapper<FVisibleMeshDrawCommand,FCompareFMeshDrawCommands>_>
            ((this->Context->MeshDrawCommands).AllocatorInstance.Data,
             (this->Context->MeshDrawCommands).ArrayNum,(FIdentityFunctor)local_res8.s.LowPart._0_1_
             ,(FCompareFMeshDrawCommands *)&local_res8);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
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
  pFVar3 = this->Context;
  if (pFVar3->bUseGPUScene != false) {
    FInstanceCullingContext::SetupDrawCommands
              (&pFVar3->InstanceCullingContext,&pFVar3->MeshDrawCommands,true,pFVar3->Scene,
               &pFVar3->MaxInstances,&pFVar3->VisibleMeshDrawCommandsNum,
               &pFVar3->NewPassVisibleMeshDrawCommandsNum);
    CollectMeshDrawCommandPassStats
              (&this->Context->MeshDrawCommands,&this->Context->InstanceCullingContext);
  }
LAB_144ef847b:
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&local_58);
  return;
}

// GetDesiredThread @ 144f11c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

Type __thiscall FMeshDrawCommandPassSetupTask::GetDesiredThread(FMeshDrawCommandPassSetupTask *this)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  
  TVar6 = CPrio_FMeshDrawCommandPassSetupTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CPrio_FMeshDrawCommandPassSetupTask.TaskPriority;
  TVar5 = CPrio_FMeshDrawCommandPassSetupTask.ThreadPriority;
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_FMeshDrawCommandPassSetupTask.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CPrio_FMeshDrawCommandPassSetupTask.ThreadPriority == BackgroundThreadPriority)) &&
     (iVar2 == 0)) {
    if (((CPrio_FMeshDrawCommandPassSetupTask.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
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
    if ((((CPrio_FMeshDrawCommandPassSetupTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_FMeshDrawCommandPassSetupTask.ThreadPriority & ThreadPriorityMask) ==
          ThreadPriorityMask) ||
        ((CPrio_FMeshDrawCommandPassSetupTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
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


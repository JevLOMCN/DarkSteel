// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FDynamicShadowsTaskData @ 145609530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FDynamicShadowsTaskData * __thiscall
FDynamicShadowsTaskData::FDynamicShadowsTaskData
          (FDynamicShadowsTaskData *this,FRHICommandListImmediate *param_1,FSceneRenderer *param_2,
          FInstanceCullingManager *param_3,bool param_4)

{
  TArray<FRHICommandListImmediate::FQueuedCommandList,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
  *pTVar1;
  TArray<FShadowMeshCollector_*,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  int *piVar3;
  atomic<bool> aVar4;
  Type TVar5;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar6;
  FSceneRenderer *pFVar7;
  FTaskEvent this_00;
  code *pcVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  atomic<unsigned_int> aVar11;
  int iVar12;
  int iVar13;
  FDynamicShadowsTaskData *pFVar14;
  FViewInfo *pFVar15;
  FRHICommandListBase *this_01;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar16;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar17;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar18;
  atomic<unsigned_int> aVar19;
  TArray<FShadowMeshCollector_*,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar20;
  FViewInfo *pFVar21;
  FRHICommandListBase *this_02;
  FRHICommandListBase *pFVar22;
  
  this->SceneRenderer = param_2;
  this->Scene = *(FScene **)&param_2->field_0x8;
  (this->Views).DataPtr = *(FViewInfo **)&param_2->field_0x10;
  iVar13 = *(int *)&param_2->field_0x18;
  if ((iVar13 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FDynamicShadowsTaskData *)(*pcVar8)();
    return pFVar14;
  }
  (this->Views).ArrayNum = iVar13;
  pFVar21 = (this->Views).DataPtr;
  this->InstanceCullingManager = param_3;
  this->Allocator = &this->SceneRenderer->Allocator;
  TVar5 = *(Type *)&this->Scene->field_0x8;
  this->FeatureLevel = TVar5;
  this->ShaderPlatform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar5];
  pFVar15 = pFVar21 + (int)*(undefined8 *)&(this->Views).ArrayNum;
  for (; pFVar21 != pFVar15; pFVar21 = pFVar21 + 1) {
    if (*(char *)((longlong)&pFVar21->_padding_ + 2) != '\0') {
      bVar10 = true;
      goto LAB_145609607;
    }
  }
  bVar10 = false;
LAB_145609607:
  this->bStaticSceneOnly = bVar10;
  this->bRunningEarly = param_4;
  bVar10 = FApp::ShouldUseThreadingForPerformance();
  if ((bVar10) || (bVar10 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar10)) {
    pTVar9 = CVarParallelGatherShadowPrimitives.Ref;
    bVar10 = IsInParallelRenderingThread();
    if ((!bVar10) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
      pcVar8 = (code *)swi(3);
      pFVar14 = (FDynamicShadowsTaskData *)(*pcVar8)();
      return pFVar14;
    }
    if (pTVar9->ShadowedValue[1] < 1) goto LAB_145609672;
    bVar10 = true;
  }
  else {
LAB_145609672:
    bVar10 = false;
  }
  pFVar22 = (FRHICommandListBase *)0x0;
  this->bMultithreaded = bVar10;
  iVar13 = 0;
  if ((((this->bRunningEarly == false) || (bVar10 == false)) ||
      (GRHIGlobals.SupportsAsyncGetRenderQueryResult == false)) || (GParallelInitDynamicShadows < 1)
     ) {
    this->bMultithreadedCreateAndFilterShadows = false;
  }
  else {
    this->bMultithreadedCreateAndFilterShadows = true;
    bVar10 = IsParallelGatherDynamicMeshElementsEnabled();
    if (bVar10) {
      aVar19 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
      if (GNumShadowDynamicMeshElementTasks <
          (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers) {
        aVar19 = (atomic<unsigned_int>)GNumShadowDynamicMeshElementTasks;
      }
      aVar11 = (atomic<unsigned_int>)0x0;
      if (0 < (int)aVar19) {
        aVar11 = aVar19;
      }
      if (aVar11 != (atomic<unsigned_int>)0x0) {
        bVar10 = true;
        goto LAB_1456096cf;
      }
    }
  }
  bVar10 = false;
LAB_1456096cf:
  this->bMultithreadedGDME = bVar10;
  this->bMobileAllowStaticCSM = false;
  (this->PreShadows).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->PreShadows).ArrayNum = 0;
  (this->PreShadows).ArrayMax = 0;
  (this->ViewDependentWholeSceneShadows).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ViewDependentWholeSceneShadows).ArrayNum = 0;
  (this->ViewDependentWholeSceneShadows).ArrayMax = 0;
  (this->DrawDebugShadowFrustumOps).AllocatorInstance.Data = (FDrawDebugShadowFrustumOp *)0x0;
  (this->DrawDebugShadowFrustumOps).ArrayNum = 0;
  (this->DrawDebugShadowFrustumOps).ArrayMax = 0;
  (this->Packets).AllocatorInstance.Data = (FGatherShadowPrimitivesPacket **)0x0;
  (this->Packets).ArrayNum = 0;
  (this->Packets).ArrayMax = 0;
  (this->GatherStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GatherStats).ArrayNum = 0;
  (this->GatherStats).ArrayMax = 0;
  (this->ShadowArrays).Shadows.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ShadowArrays).Shadows.ArrayNum = 0;
  (this->ShadowArrays).Shadows.ArrayMax = 0;
  (this->ShadowArrays).CachedSpotlightShadows.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ShadowArrays).CachedSpotlightShadows.ArrayNum = 0;
  (this->ShadowArrays).CachedSpotlightShadows.ArrayMax = 0;
  (this->ShadowArrays).TranslucentShadows.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ShadowArrays).TranslucentShadows.ArrayNum = 0;
  (this->ShadowArrays).TranslucentShadows.ArrayMax = 0;
  (this->ShadowArrays).CachedPreShadows.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ShadowArrays).CachedPreShadows.ArrayNum = 0;
  (this->ShadowArrays).CachedPreShadows.ArrayMax = 0;
  (this->ShadowArrays).WholeScenePointShadows.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ShadowArrays).WholeScenePointShadows.ArrayNum = 0;
  (this->ShadowArrays).WholeScenePointShadows.ArrayMax = 0;
  (this->ShadowArrays).WholeSceneDirectionalShadows.AllocatorInstance.Data =
       (FProjectedShadowInfo **)0x0;
  (this->ShadowArrays).WholeSceneDirectionalShadows.ArrayNum = 0;
  (this->ShadowArrays).WholeSceneDirectionalShadows.ArrayMax = 0;
  (this->ShadowArrays).CachedWholeSceneDirectionalShadows.AllocatorInstance.Data =
       (FProjectedShadowInfo **)0x0;
  (this->ShadowArrays).CachedWholeSceneDirectionalShadows.ArrayNum = 0;
  (this->ShadowArrays).CachedWholeSceneDirectionalShadows.ArrayMax = 0;
  (this->ShadowArrays).ProjectedDistanceFieldShadows.AllocatorInstance.SecondaryData.Data =
       (FProjectedShadowInfo **)0x0;
  this->bHasRayTracedDistanceFieldShadows = false;
  this->bFinishedMeshPassSetup = false;
  (this->ShadowArrays).ProjectedDistanceFieldShadows.ArrayNum = 0;
  (this->ShadowArrays).ProjectedDistanceFieldShadows.ArrayMax = 2;
  (this->ShadowArrays).ShadowsToSetupViews.AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ShadowArrays).ShadowsToSetupViews.ArrayNum = 0;
  (this->ShadowArrays).ShadowsToSetupViews.ArrayMax = 0;
  (this->ShadowArrays).OnePassShadowUnsupportedLights.AllocatorInstance.Data = (uint *)0x0;
  (this->ShadowArrays).OnePassShadowUnsupportedLights.NumBits = 0;
  (this->ShadowArrays).OnePassShadowUnsupportedLights.MaxBits = 0;
  UE::Tasks::FTaskEvent::FTaskEvent
            (&this->BeginGatherAndSortLightsTask,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp(1397)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&this->FilterDynamicShadowsTask,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp(1398)"
            );
  (this->MeshCollectors).AllocatorInstance.SecondaryData.Data = (FShadowMeshCollector **)0x0;
  pTVar1 = &this->CommandLists;
  (this->MeshCollectors).ArrayNum = 0;
  (this->MeshCollectors).ArrayMax = 1;
  (pTVar1->AllocatorInstance).Data = (FQueuedCommandList *)0x0;
  (this->CommandLists).ArrayNum = 0;
  (this->CommandLists).ArrayMax = 0;
  (this->ShadowsToGather).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ShadowsToGather).ArrayNum = 0;
  (this->ShadowsToGather).ArrayMax = 0;
  (this->ShadowsToGatherInSerialPass).AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  (this->ShadowsToGatherInSerialPass).NumBits = 0;
  (this->ShadowsToGatherInSerialPass).MaxBits = 0x80;
  UE::Tasks::FTaskEvent::FTaskEvent
            (&this->BeginGatherDynamicMeshElementsTask,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp(1405)"
            );
  UE::Tasks::FTaskEvent::FTaskEvent
            (&this->SetupMeshPassTask,
             L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp(1406)"
            );
  this->ShadowsToGatherNextIndex = (atomic<int>)0x0;
  this->RHICmdListForAllocateTargets = (FRHICommandList *)0x0;
  (this->TaskEvent).Reference = (FBaseGraphTask *)0x0;
  if (this->bMultithreadedCreateAndFilterShadows == false) {
    this->RHICmdListForAllocateTargets = (FRHICommandList *)param_1;
  }
  else {
    this_01 = ::operator_new(0x1bb0);
    this_02 = pFVar22;
    if (this_01 != (FRHICommandListBase *)0x0) {
      FRHICommandListBase::FRHICommandListBase
                (this_01,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false
                );
      this_02 = this_01;
    }
    this->RHICmdListForAllocateTargets = (FRHICommandList *)this_02;
    FRHICommandListBase::SwitchPipeline(this_02,Graphics);
    iVar12 = (this->CommandLists).ArrayNum;
    if (iVar12 == (this->CommandLists).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
                         (0x808,&pTVar1->AllocatorInstance,&(this->CommandLists).ArrayMax);
    }
    (this->CommandLists).ArrayNum = iVar12 + 1;
    (pTVar1->AllocatorInstance).Data[iVar12].CmdList =
         (FRHICommandListBase *)this->RHICmdListForAllocateTargets;
  }
  pTVar2 = &this->MeshCollectors;
  if (this->bMultithreadedGDME == false) {
    paVar6 = &this->Allocator->Next;
    pFVar7 = this->SceneRenderer;
    aVar16 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x1e0,8);
    *(undefined8 *)((longlong)aVar16 + 8) = 0;
    *(undefined ***)aVar16 =
         &
         ___7__TObject_VFShadowMeshCollector_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
    ;
    TVar17.Next = *paVar6;
    do {
      *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        *)((longlong)aVar16 + 8) = TVar17.Next;
      LOCK();
      aVar18 = *paVar6;
      bVar10 = TVar17.Next == aVar18;
      if (bVar10) {
        *paVar6 = aVar16;
        aVar18 = TVar17.Next;
      }
      UNLOCK();
      TVar17.Next = aVar18;
    } while (!bVar10);
    FShadowMeshCollector::FShadowMeshCollector
              ((FShadowMeshCollector *)((longlong)aVar16 + 0x10),(FRHICommandList *)param_1,pFVar7);
    iVar13 = (this->MeshCollectors).ArrayNum;
    piVar3 = &(this->MeshCollectors).ArrayMax;
    if (iVar13 == *piVar3) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FShadowMeshCollector_*>_>
                         (0x808,&pTVar2->AllocatorInstance,piVar3);
    }
    (this->MeshCollectors).ArrayNum = iVar13 + 1;
    pTVar20 = (TArray<FShadowMeshCollector_*,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(this->MeshCollectors).AllocatorInstance.SecondaryData.Data;
    if (pTVar20 ==
        (TArray<FShadowMeshCollector_*,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar20 = pTVar2;
    }
    *(FShadowMeshCollector **)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar13 * 8) =
         (FShadowMeshCollector *)((longlong)aVar16 + 0x10);
    if ((this->BeginGatherDynamicMeshElementsTask != (FTaskEvent)0x0) &&
       (*(char *)((longlong)this->BeginGatherDynamicMeshElementsTask + 0xd0) == '\0')) {
      this_00 = this->BeginGatherDynamicMeshElementsTask;
      LOCK();
      aVar4 = *(atomic<bool> *)((longlong)this_00 + 0x45);
      *(atomic<bool> *)((longlong)this_00 + 0x45) = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar4 == (atomic<bool>)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
             (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0xd8);
      }
    }
  }
  else {
    bVar10 = IsParallelGatherDynamicMeshElementsEnabled();
    if (bVar10) {
      aVar19 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
      if (GNumShadowDynamicMeshElementTasks <
          (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers) {
        aVar19 = (atomic<unsigned_int>)GNumShadowDynamicMeshElementTasks;
      }
      if (0 < (int)aVar19) {
        pFVar22 = (FRHICommandListBase *)(ulonglong)(uint)aVar19;
      }
      iVar13 = (int)pFVar22;
      if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulong64)pFVar22);
      }
    }
    piVar3 = &(this->MeshCollectors).ArrayMax;
    if (*piVar3 < iVar13) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FShadowMeshCollector_*>_>
                (8,8,iVar13,&pTVar2->AllocatorInstance,(this->MeshCollectors).ArrayNum,piVar3);
    }
  }
  if (((this->FeatureLevel == ES3_1) && (FReadOnlyCVARCache::bAllowStaticLighting != false)) &&
     (FReadOnlyCVARCache::bMobileEnableStaticAndCSMShadowReceivers != false)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  this->bMobileAllowStaticCSM = bVar10;
  return this;
}

// ~FDynamicShadowsTaskData @ 14560afe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FDynamicShadowsTaskData::~FDynamicShadowsTaskData(FDynamicShadowsTaskData *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FBaseGraphTask *pFVar4;
  FTaskEvent FVar5;
  uint *puVar6;
  FProjectedShadowInfo **ppFVar7;
  FQueuedCommandList *pFVar8;
  FShadowMeshCollector **ppFVar9;
  FScriptContainerElement *pFVar10;
  FGatherShadowPrimitivesPacket **ppFVar11;
  FDrawDebugShadowFrustumOp *pFVar12;
  code *pcVar13;
  bool bVar14;
  
  if (this->bFinishedMeshPassSetup == false) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bFinishedMeshPassSetup",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                        ,0x5be,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  if ((this->CommandLists).ArrayNum != 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("CommandLists.IsEmpty()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                        ,0x5bf,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  if ((this->MeshCollectors).ArrayNum != 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("MeshCollectors.IsEmpty()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                        ,0x5c0,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar4 = (this->TaskEvent).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  FVar5 = this->SetupMeshPassTask;
  if (FVar5 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar5 + 0x30);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)FVar5)(FVar5,1);
    }
  }
  FVar5 = this->BeginGatherDynamicMeshElementsTask;
  if (FVar5 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar5 + 0x30);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)FVar5)(FVar5,1);
    }
  }
  puVar6 = (this->ShadowsToGatherInSerialPass).AllocatorInstance.SecondaryData.Data;
  if (puVar6 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar6);
  }
  ppFVar7 = (this->ShadowsToGather).AllocatorInstance.Data;
  if (ppFVar7 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar7);
  }
  pFVar8 = (this->CommandLists).AllocatorInstance.Data;
  if (pFVar8 != (FQueuedCommandList *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar8);
  }
  ppFVar9 = (this->MeshCollectors).AllocatorInstance.SecondaryData.Data;
  if (ppFVar9 != (FShadowMeshCollector **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar9);
  }
  FVar5 = this->FilterDynamicShadowsTask;
  if (FVar5 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar5 + 0x30);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)FVar5)(FVar5,1);
    }
  }
  FVar5 = this->BeginGatherAndSortLightsTask;
  if (FVar5 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar5 + 0x30);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)FVar5)(FVar5,1);
    }
  }
  FFilteredShadowArrays::~FFilteredShadowArrays(&this->ShadowArrays);
  pFVar10 = (this->GatherStats).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  ppFVar11 = (this->Packets).AllocatorInstance.Data;
  if (ppFVar11 != (FGatherShadowPrimitivesPacket **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar11);
  }
  pFVar12 = (this->DrawDebugShadowFrustumOps).AllocatorInstance.Data;
  if (pFVar12 != (FDrawDebugShadowFrustumOp *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar12);
  }
  ppFVar7 = (this->ViewDependentWholeSceneShadows).AllocatorInstance.Data;
  if (ppFVar7 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar7);
  }
  ppFVar7 = (this->PreShadows).AllocatorInstance.Data;
  if (ppFVar7 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar7);
  }
  return;
}

// PresizeViewDependentWholeSceneShadows @ 14563d700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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
FDynamicShadowsTaskData::PresizeViewDependentWholeSceneShadows(FDynamicShadowsTaskData *this)

{
  FProjectedShadowInfo *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(this->ViewDependentWholeSceneShadows).ArrayNum;
  uVar4 = 0;
  if (0 < lVar6) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->ViewDependentWholeSceneShadows).ArrayNum) {
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
      this_00 = (this->ViewDependentWholeSceneShadows).AllocatorInstance.Data[lVar5];
      uVar3 = 0;
      if ((int)uVar4 < (this->GatherStats).ArrayNum) {
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
      FProjectedShadowInfo::PresizeSubjectPrimitiveArrays
                (this_00,(FAddSubjectPrimitiveStats *)
                         ((this->GatherStats).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18))
      ;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar6);
  }
  return;
}


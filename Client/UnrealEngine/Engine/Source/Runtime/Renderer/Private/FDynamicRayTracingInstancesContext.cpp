// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// FDynamicRayTracingInstancesContext @ 1452fdf60

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FDynamicRayTracingInstancesContext * __thiscall
RayTracing::FDynamicRayTracingInstancesContext::FDynamicRayTracingInstancesContext
          (FDynamicRayTracingInstancesContext *this,FScene *param_1,
          TArrayView<FViewInfo_*,int> *param_2,
          TArrayView<RayTracing::FSceneOptions_const_*_const,int> *param_3,
          TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *param_4)

{
  FSceneView *pFVar1;
  code *pcVar2;
  FViewInfo **ppFVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FRHICommandListBase *this_00;
  FDynamicRayTracingInstancesContext *pFVar9;
  uint uVar10;
  FRHICommandListBase *pFVar11;
  FRHICommandListBase *pFVar12;
  
  ppFVar3 = param_2->DataPtr;
  iVar4 = param_2->ArrayNum;
  uVar5 = *(undefined4 *)&param_2->field_0xc;
  this->Scene = param_1;
  (this->Views).DataPtr = ppFVar3;
  (this->Views).ArrayNum = iVar4;
  *(undefined4 *)&(this->Views).field_0xc = uVar5;
  this->BulkAllocator = param_4;
  iVar4 = param_3->ArrayNum;
  uVar5 = *(undefined4 *)&param_3->field_0xc;
  (this->ViewSceneOptions).DataPtr = param_3->DataPtr;
  (this->ViewSceneOptions).ArrayNum = iVar4;
  *(undefined4 *)&(this->ViewSceneOptions).field_0xc = uVar5;
  bVar6 = IsRayTracingUsingReferenceBasedResidency();
  this->bTrackReferencedGeometryGroups = bVar6;
  this_00 = ::operator_new(0x1bb0);
  pFVar12 = (FRHICommandListBase *)0x0;
  pFVar11 = pFVar12;
  if (this_00 != (FRHICommandListBase *)0x0) {
    FRHICommandListBase::FRHICommandListBase
              (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false);
    pFVar11 = this_00;
  }
  bVar6 = this->bTrackReferencedGeometryGroups;
  this->RHICmdList = (FRHICommandList *)pFVar11;
  (this->DynamicVertexBuffer).RHICmdList = pFVar11;
  (this->DynamicVertexBuffer).VertexBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicVertexBuffer).VertexBuffers.ArrayNum = 0;
  (this->DynamicVertexBuffer).VertexBuffers.ArrayMax = 0;
  (this->DynamicIndexBuffer).RHICmdList = (FRHICommandListBase *)this->RHICmdList;
  (this->DynamicIndexBuffer).IndexBuffers16.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicIndexBuffer).IndexBuffers16.ArrayNum = 0;
  (this->DynamicIndexBuffer).IndexBuffers16.ArrayMax = 0;
  (this->DynamicIndexBuffer).IndexBuffers32.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicIndexBuffer).IndexBuffers32.ArrayNum = 0;
  (this->DynamicIndexBuffer).IndexBuffers32.ArrayMax = 0;
  FRayTracingInstanceCollector::FRayTracingInstanceCollector
            (&this->RayTracingInstanceCollector,*(Type *)&param_1->field_0x8,param_4,bVar6);
  (this->DynamicRayTracingPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicRayTracingPrimitives).ArrayNum = 0;
  (this->DynamicRayTracingPrimitives).ArrayMax = 0;
  (this->RenderThreadDynamicPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderThreadDynamicPrimitives).ArrayNum = 0;
  (this->RenderThreadDynamicPrimitives).ArrayMax = 0;
  FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)this->RHICmdList,Graphics);
  FMeshElementCollector::Start
            ((FMeshElementCollector *)&this->RayTracingInstanceCollector,this->RHICmdList,
             &this->DynamicVertexBuffer,&this->DynamicIndexBuffer,
             (FGlobalDynamicReadBuffer *)&FSceneRenderer::DynamicReadBufferForRayTracing);
  this->bAnyViewRequiresTranslucentGeometry = false;
  pFVar11 = pFVar12;
  if (0 < (this->Views).ArrayNum) {
    do {
      uVar10 = (uint)pFVar12;
      uVar8 = 0;
      if ((int)uVar10 < (this->Views).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FDynamicRayTracingInstancesContext *)(*pcVar2)();
        return pFVar9;
      }
      pFVar1 = *(FSceneView **)
                ((longlong)&(pFVar11->MemManager).Top + (longlong)(this->Views).DataPtr);
      FRayTracingInstanceCollector::AddViewMeshArrays
                (&this->RayTracingInstanceCollector,pFVar1,
                 (FGPUScenePrimitiveCollector *)&pFVar1[1].PreviousViewTransform.bIsSet);
      bVar6 = this->bAnyViewRequiresTranslucentGeometry;
      uVar8 = 0;
      if ((int)uVar10 < (this->ViewSceneOptions).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FDynamicRayTracingInstancesContext *)(*pcVar2)();
        return pFVar9;
      }
      pFVar12 = (FRHICommandListBase *)(ulonglong)(uVar10 + 1);
      this->bAnyViewRequiresTranslucentGeometry =
           (bool)(bVar6 | **(byte **)((longlong)&(pFVar11->MemManager).Top +
                                     (longlong)(this->ViewSceneOptions).DataPtr));
      pFVar11 = (FRHICommandListBase *)&(pFVar11->MemManager).End;
    } while ((int)(uVar10 + 1) < (this->Views).ArrayNum);
  }
  return this;
}

// AddInstancesToScene @ 14530bb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
RayTracing::FDynamicRayTracingInstancesContext::AddInstancesToScene
          (FDynamicRayTracingInstancesContext *this,FRayTracingScene *param_1,
          FRayTracingShaderBindingTable *param_2,long64 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar3;
  float fVar4;
  undefined1 uVar5;
  FScriptContainerElement FVar6;
  ERayTracingType EVar7;
  FPrimitiveComponentId FVar8;
  FScene *pFVar9;
  FScene *pFVar10;
  FUploadData *pFVar11;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar12;
  FRHIRayTracingGeometry *pFVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  FName FVar18;
  TConsoleVariableData<float> *pTVar19;
  FName FVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  bool bVar23;
  bool bVar24;
  FRayTracingMaskAndFlags FVar25;
  int iVar26;
  uint uVar27;
  ulong64 uVar28;
  FMaterialRelevance_u_0 FVar29;
  void *_Dst;
  FRayTracingSBTAllocation *pFVar30;
  FViewInfo *pFVar31;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar32;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar33;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar34;
  undefined8 *puVar35;
  byte bVar36;
  byte bVar37;
  ulonglong uVar38;
  longlong lVar39;
  float fVar40;
  FScriptContainerElement *pFVar41;
  FSharedReferencer<1> this_00;
  FDynamicRayTracingInstancesContext *pFVar42;
  FMeshBatch *pFVar43;
  byte bVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  FRayTracingScene *this_01;
  undefined8 *_Dst_00;
  FMeshBatch *pFVar48;
  FViewHandle FVar49;
  wchar_t *pwVar50;
  FPrimitiveSceneProxy *pFVar51;
  undefined8 uVar52;
  longlong lVar53;
  FPrimitiveSceneProxy *pFVar54;
  FMaterialRelevance_u_0 FVar55;
  undefined8 uVar56;
  FRayTracingSBTAllocation *pFVar57;
  FRayTracingMeshBatchTaskPage *pFVar58;
  FMaterialRelevance_u_0 FVar59;
  bool bVar60;
  undefined4 uVar61;
  double dVar62;
  double dVar63;
  undefined4 uVar66;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar67;
  float fVar68;
  float fVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  long64 local_res20;
  undefined1 auStackY_478 [32];
  FPrimitiveSceneProxy *pFVar78;
  undefined4 uVar79;
  longlong in_stack_fffffffffffffbb8;
  byte local_428;
  undefined1 local_425;
  byte local_424;
  undefined1 local_420 [32];
  FDynamicRayTracingInstancesContext *local_400;
  FSharedReferencer<1> local_3f8;
  FLinearColor_u_0 local_3f0;
  FLinearColor_u_0 local_3e0;
  ForAnyElementType local_3d0;
  FScriptContainerElement *local_3c8;
  FScriptContainerElement *local_3c0;
  float fStack_3b8;
  undefined4 uStack_3b4;
  FRHIRayTracingGeometry *local_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  FName local_398;
  FNameEntryId FStack_390;
  uint uStack_38c;
  float local_388;
  undefined4 uStack_384;
  FMaterialRelevance_u_0 FStack_380;
  undefined8 uStack_378;
  float fStack_370;
  float fStack_36c;
  FMaterialRelevance_u_0 local_368;
  ForAnyElementType FStack_360;
  byte local_358;
  undefined1 uStack_357;
  byte bStack_356;
  undefined5 uStack_355;
  FRayTracingShaderBindingTable *local_348;
  ForAnyElementType local_340;
  FScriptContainerElement *local_338;
  ulonglong local_330;
  ForAnyElementType local_328;
  FScriptContainerElement *local_320;
  longlong local_318;
  FMeshBatch *local_310;
  double dStack_308;
  FMaterialRelevance_u_0 local_300;
  undefined8 *local_2f8;
  long64 *local_2f0;
  FMaterialRelevance_u_0 local_2e8;
  float fStack_2e0;
  undefined4 uStack_2dc;
  FMaterialRelevance_u_0 local_2d8;
  float fStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  float fStack_2c0;
  uint uStack_2bc;
  uint local_2b8;
  uint uStack_2b4;
  float fStack_2b0;
  uint uStack_2ac;
  undefined8 *local_2a8;
  FRayTracingInstanceAndViewIndex *local_2a0;
  undefined1 *local_298;
  FRayTracingMeshCommandContext local_290 [3];
  TVector<double>_u_0 local_278;
  undefined1 local_260 [24];
  int iStack_248;
  undefined4 uStack_244;
  TVector<double>_u_0 local_240;
  double dStack_228;
  TVector<double>_u_0 local_220;
  FPrimitiveComponentId FStack_208;
  undefined4 uStack_204;
  undefined4 local_1f8 [2];
  FNameEntryId FStack_1f0;
  uint uStack_1ec;
  FName local_1e8;
  FName FStack_1e0;
  FNameEntryId local_1d8;
  int iStack_1d0;
  int iStack_1cc;
  undefined8 local_1c8;
  float fStack_1c0;
  float fStack_1bc;
  FMaterialRelevance_u_0 local_1b8;
  FScriptContainerElement *pFStack_1b0;
  undefined8 local_1a8;
  FRayTracingMeshProcessor local_198;
  undefined4 local_178 [2];
  uint uStack_170;
  uint uStack_16c;
  FName local_168;
  undefined8 uStack_160;
  float local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  FMaterialRelevance_u_0 local_138;
  FScriptContainerElement *pFStack_130;
  undefined8 local_128;
  undefined1 local_118 [60];
  int local_dc;
  FRHIRayTracingGeometry *local_d8;
  
  local_d8 = (FRHIRayTracingGeometry *)(__security_cookie.value ^ (ulonglong)auStackY_478);
  bVar60 = -1 < CpuChannel->Enabled;
  local_res20 = param_3;
  local_420._24_8_ = param_1;
  local_400 = this;
  local_348 = param_2;
  if (bVar60) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId824,"RayTracing_AddDynamicInstancesToScene",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
               ,0x338);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId824);
  }
  if (GRayTracingParallelMeshBatchSetup != 0) {
    bVar23 = FApp::ShouldUseThreadingForPerformance();
    bVar24 = true;
    if (bVar23) goto LAB_14530bc43;
  }
  bVar24 = false;
LAB_14530bc43:
  pTVar19 = CVarRayTracingDynamicGeometryLastRenderTimeUpdateDistance.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pwVar50 = (wchar_t *)local_118;
  fVar4 = pTVar19->ShadowedValue[1];
  iVar46 = (this->Views).ArrayNum;
  local_3f0._s_0.G = (float)GRayTracingParallelMeshBatchSize;
  local_118._48_8_ = (FRayTracingSBTAllocation *)0x0;
  pFVar78 = (FPrimitiveSceneProxy *)(local_118 + 0x38);
  local_118._56_4_ = 0;
  local_dc = 2;
  iVar26 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<RayTracing::FRayTracingMeshBatchTaskData>_>
                     (0x18,8,iVar46,
                      (ForElementType<RayTracing::FRayTracingMeshBatchTaskData> *)pwVar50,
                      (int *)pFVar78,&local_dc);
  pFVar30 = (FRayTracingSBTAllocation *)local_118;
  if ((FRayTracingSBTAllocation *)local_118._48_8_ != (FRayTracingSBTAllocation *)0x0) {
    pFVar30 = (FRayTracingSBTAllocation *)local_118._48_8_;
  }
  DefaultConstructItems<RayTracing::FRayTracingMeshBatchTaskData,int>
            (&pFVar30->BaseRecordIndex + (longlong)iVar26 * 6,iVar46);
  local_3f0._s_0.B = (float)(this->DynamicRayTracingPrimitives).ArrayNum;
  uVar38 = (ulonglong)(int)local_3f0._s_0.B;
  pFVar41 = (this->DynamicRayTracingPrimitives).AllocatorInstance.Data;
  uVar76 = (undefined4)__real_7ff0000000000000;
  uVar77 = (undefined4)((ulonglong)__real_7ff0000000000000 >> 0x20);
  local_320 = pFVar41 + uVar38 * 0x24;
  do {
    pFVar22 = local_320;
    local_3c8 = pFVar41;
    if ((this->DynamicRayTracingPrimitives).ArrayNum != (int)uVar38) {
      local_425 = 0;
      `TCheckedPointerIterator<RayTracing::FDynamicRayTracingPrimitive,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_425);
    }
    if (pFVar41 == pFVar22) {
      uVar47 = 0;
      if (0 < (this->Views).ArrayNum) {
        lVar53 = 0;
        lVar39 = 0;
        do {
          uVar45 = 0;
          if ((int)uVar47 < (this->Views).ArrayNum) {
            uVar45 = ~uVar47 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar31 = *(FViewInfo **)(lVar53 + (longlong)(this->Views).DataPtr);
          uVar45 = 0;
          if ((int)uVar47 < (int)local_118._56_4_) {
            uVar45 = ~uVar47 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          this = local_400;
          pFVar30 = (FRayTracingSBTAllocation *)local_118;
          if ((FRayTracingSBTAllocation *)local_118._48_8_ != (FRayTracingSBTAllocation *)0x0) {
            pFVar30 = (FRayTracingSBTAllocation *)local_118._48_8_;
          }
          pFVar58 = *(FRayTracingMeshBatchTaskPage **)((longlong)&pFVar30->BaseRecordIndex + lVar39)
          ;
          if (pFVar58 != (FRayTracingMeshBatchTaskPage *)0x0) {
            DispatchRayTracingMeshBatchTask
                      (local_400->BulkAllocator,local_400->Scene,pFVar31,pFVar58,
                       *(uint *)((longlong)&pFVar30->Geometry + lVar39));
          }
          uVar47 = uVar47 + 1;
          *(undefined8 *)((longlong)&pFVar30->BaseRecordIndex + lVar39) = 0;
          lVar53 = lVar53 + 8;
          *(undefined8 *)((longlong)&pFVar30->NumRecords + lVar39) = 0;
          *(undefined4 *)((longlong)&pFVar30->Geometry + lVar39) = 0;
          lVar39 = lVar39 + 0x18;
        } while ((int)uVar47 < (this->Views).ArrayNum);
      }
      DestructItems<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex,int>
                ((this->RayTracingInstanceCollector).RayTracingInstances.AllocatorInstance.Data,
                 (this->RayTracingInstanceCollector).RayTracingInstances.ArrayNum);
      piVar1 = &(this->RayTracingInstanceCollector).RayTracingInstances.ArrayMax;
      (this->RayTracingInstanceCollector).RayTracingInstances.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex>_>
                  (0x78,8,0,&(this->RayTracingInstanceCollector).RayTracingInstances.
                             AllocatorInstance,0,piVar1);
      }
      if ((FRayTracingSBTAllocation *)local_118._48_8_ != (FRayTracingSBTAllocation *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((void *)local_118._48_8_);
      }
      if (bVar60) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    fVar40 = *(float *)pFVar41;
    pFVar51 = (FPrimitiveSceneProxy *)(longlong)(int)fVar40;
    pFVar9 = this->Scene;
    uVar45 = ~(uint)fVar40 >> 0x1f;
    uVar47 = 0;
    if ((int)fVar40 < (pFVar9->PrimitiveSceneProxies).ArrayNum) {
      uVar47 = uVar45;
    }
    local_3f0._0_4_ = fVar40;
    if (uVar47 == 0) {
      pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
      pFVar78 = pFVar51;
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    pFVar10 = this->Scene;
    pFVar58 = *(FRayTracingMeshBatchTaskPage **)
               ((pFVar9->PrimitiveSceneProxies).AllocatorInstance.Data + (longlong)pFVar51 * 8);
    uVar47 = 0;
    if ((int)fVar40 < (pFVar10->Primitives).ArrayNum) {
      uVar47 = uVar45;
    }
    local_420._8_8_ = pFVar58;
    local_340.Data = (FScriptContainerElement *)pFVar51;
    if (uVar47 == 0) {
      pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
      pFVar78 = pFVar51;
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    pFVar9 = this->Scene;
    this_00.ReferenceController =
         *(TReferenceControllerBase<1> **)
          ((pFVar10->Primitives).AllocatorInstance.Data + (longlong)pFVar51 * 8);
    uVar47 = 0;
    if ((int)fVar40 < (pFVar9->PrimitiveRayTracingDatas).ArrayNum) {
      uVar47 = uVar45;
    }
    local_3f8.ReferenceController = this_00.ReferenceController;
    if (uVar47 == 0) {
      pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      pFVar78 = pFVar51;
      if (bVar23) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    pFVar41 = local_3c8;
    local_338 = (pFVar9->PrimitiveRayTracingDatas).AllocatorInstance.Data;
    if ((local_3c8[4] == (FScriptContainerElement)0x2) ||
       (local_3c8[0xc] == (FScriptContainerElement)0x2)) {
      pwVar50 = L"";
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                          ,0x1ad,L"");
      if (bVar23) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (pFVar41[0xc] == (FScriptContainerElement)0x2) {
        pwVar50 = L"";
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L"");
        if (bVar23) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
    }
    uVar47 = *(uint *)(pFVar41 + 0x10);
    if (pFVar41[4] == (FScriptContainerElement)0x2) {
      pwVar50 = L"";
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L"");
      if (bVar23) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    iVar46 = uVar47 - *(uint *)(pFVar41 + 8);
    if (pFVar41[4] == (FScriptContainerElement)0x2) {
      pwVar50 = L"";
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L"");
      if (bVar23) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    uVar52 = (this->RayTracingInstanceCollector).RayTracingInstances.AllocatorInstance.Data +
             (int)*(uint *)(pFVar41 + 8);
    local_3e0._8_8_ = uVar52;
    if (iVar46 < 0) {
      pwVar50 = L"";
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar23) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    else if (0 < iVar46) {
      local_328.Data = (FScriptContainerElement *)(uVar52 + (longlong)iVar46 * 0x78);
      if ((FScriptContainerElement *)uVar52 != local_328.Data) {
        local_318 = (longlong)(int)local_3f0._s_0.R;
        local_3d0.Data =
             (FScriptContainerElement *)
             &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials;
        do {
          uVar47 = ((FRayTracingInstanceAndViewIndex *)uVar52)->ViewIndex;
          uVar45 = 0;
          if ((int)uVar47 < (this->Views).ArrayNum) {
            uVar45 = ~uVar47 >> 0x1f;
          }
          local_3e0._8_8_ = uVar52;
          if (uVar45 == 0) {
            pwVar50 = L"Array index out of bounds: %lld from an array of size %lld";
            pFVar78 = (FPrimitiveSceneProxy *)(longlong)(int)uVar47;
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar23) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          uVar56 = (this->Views).DataPtr[(int)uVar47];
          local_3e0._0_8_ = uVar56;
          if (((((FViewInfo *)uVar56)->RayTracingDynamicPrimitiveCollector).bCommitted == false) &&
             ((((FViewInfo *)uVar56)->RayTracingDynamicPrimitiveCollector).UploadData !=
              (FUploadData *)0x0)) {
            pwVar50 = L"";
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("bCommitted || UploadData == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                                ,0x6e,L"");
            if (bVar23) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          if ((((FViewInfo *)uVar56)->RayTracingDynamicPrimitiveCollector).PrimitiveIdRange.
              LowerBound.Type.Value == '\x02') {
            pwVar50 = L"";
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L"");
            if (bVar23) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          if (((((FViewInfo *)uVar56)->RayTracingDynamicPrimitiveCollector).bCommitted == false) &&
             ((((FViewInfo *)uVar56)->RayTracingDynamicPrimitiveCollector).UploadData !=
              (FUploadData *)0x0)) {
            pwVar50 = L"";
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("bCommitted || UploadData == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                                ,0x74,L"");
            if (bVar23) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          pFVar11 = (((FViewInfo *)uVar56)->RayTracingDynamicPrimitiveCollector).UploadData;
          if (pFVar11 == (FUploadData *)0x0) {
            uVar47 = 0;
          }
          else {
            uVar47 = pFVar11->InstanceSceneDataOffset;
          }
          local_420._0_8_ = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Geometry;
          local_420._16_4_ =
               (((FRayTracingGeometry *)local_420._0_8_)->Initializer).Segments.ArrayNum;
          if ((((FRayTracingGeometry *)local_420._0_8_)->DynamicGeometrySharedBufferGenerationID ==
               -1) || (((FRayTracingGeometry *)local_420._0_8_)->
                       DynamicGeometrySharedBufferGenerationID == local_res20)) {
LAB_14530c11a:
            FRayTracingGeometryManager::AddReferencedGeometry
                      ((FRayTracingGeometryManager *)GRayTracingGeometryManager,
                       (FRayTracingGeometry *)local_420._0_8_);
            bVar23 = FRayTracingGeometry::IsEvicted((FRayTracingGeometry *)local_420._0_8_);
            if (!bVar23) {
              bVar23 = FRayTracingGeometry::HasPendingBuildRequest
                                 ((FRayTracingGeometry *)local_420._0_8_);
              if (bVar23) {
                pFVar41 = (param_1->GeometriesToBuild).AllocatorInstance.Data;
                if ((pFVar41 <= (FScriptContainerElement *)local_420) &&
                   (lVar39 = (longlong)(param_1->GeometriesToBuild).ArrayMax,
                   (FScriptContainerElement *)local_420 < pFVar41 + lVar39 * 8)) {
                  pwVar50 = 
                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                  ;
                  pFVar78 = (FPrimitiveSceneProxy *)local_420;
                  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  in_stack_fffffffffffffbb8 = lVar39;
                  if (bVar23) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                iVar46 = (param_1->GeometriesToBuild).ArrayNum;
                piVar1 = &(param_1->GeometriesToBuild).ArrayMax;
                if (iVar46 == *piVar1) {
                  iVar46 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)param_1,piVar1);
                }
                (param_1->GeometriesToBuild).ArrayNum = iVar46 + 1;
                *(undefined8 *)
                 ((param_1->GeometriesToBuild).AllocatorInstance.Data + (longlong)iVar46 * 8) =
                     local_420._0_8_;
              }
              if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum == 0) {
                local_260._16_8_ =
                     (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.DataPtr;
                _iStack_248 = *(undefined8 *)
                               &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                MaterialsView.ArrayNum;
                iVar46 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.
                         ArrayNum;
              }
              else {
                if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.ArrayNum
                    != 0) {
                  pwVar50 = L"";
                  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MaterialsView.Num() == 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                                      ,0x27,L"");
                  if (bVar23) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                iVar46 = *(int *)(local_3d0.Data + 8);
                if (iVar46 < 0) {
                  pwVar50 = L"";
                  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L"");
                  if (bVar23) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                iStack_248 = iVar46;
              }
              if ((int)local_420._16_4_ < iVar46) {
                local_2a8 = (undefined8 *)local_420;
                local_298 = local_420 + 0x10;
                local_2a0 = (FRayTracingInstanceAndViewIndex *)uVar52;
                bVar23 = `RayTracing::FDynamicRayTracingInstancesContext::AddInstancesToScene'::
                         __l23::<lambda_3>::operator()(&local_2a8);
                if (!bVar23) goto LAB_14530d1f3;
              }
              if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum == 0) {
                local_240._s_0.X =
                     (double)(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.
                             DataPtr;
                local_240._s_0.Y =
                     (double)*(undefined8 *)
                              &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView
                               .ArrayNum;
                iVar46 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.
                         ArrayNum;
              }
              else {
                if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.ArrayNum
                    != 0) {
                  pwVar50 = L"";
                  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MaterialsView.Num() == 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                                      ,0x27,L"");
                  if (bVar23) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                iVar46 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum;
                if (iVar46 < 0) {
                  pwVar50 = L"";
                  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L"");
                  if (bVar23) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                local_240._8_4_ = iVar46;
              }
              if (iVar46 != 0) {
                if (((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                     bInstanceMaskAndFlagsDirty != false) ||
                   ((this_00.ReferenceController)->bDynamicRayTracingInstanceCachedDataDirty)) {
                  FVar25 = BuildRayTracingInstanceMaskAndFlags
                                     ((FRayTracingInstance *)uVar52,
                                      (FPrimitiveSceneProxy *)local_420._8_8_);
                  (((FPrimitiveSceneInfo *)this_00.ReferenceController)->
                  DynamicRayTracingInstanceCachedData).Mask = FVar25.Mask;
                  uVar5 = (((FPrimitiveSceneInfo *)this_00.ReferenceController)->
                          DynamicRayTracingInstanceCachedData).field_0x1;
                  bVar44 = FVar25._1_1_;
                  bVar36 = ((((FPrimitiveSceneInfo *)this_00.ReferenceController)->
                            DynamicRayTracingInstanceCachedData).bForceOpaque ^ FVar25.bForceOpaque)
                           & 1 ^ uVar5;
                  bVar36 = (bVar36 ^ bVar44) & 2 ^ bVar36;
                  bVar36 = (bVar36 ^ bVar44) & 4 ^ bVar36;
                  bVar36 = (bVar36 ^ bVar44) & 8 ^ bVar36;
                  bVar36 = (bVar36 ^ bVar44) & 0x10 ^ bVar36;
                  (this_00.ReferenceController)->bDynamicRayTracingInstanceCachedDataDirty = false;
                  (((FPrimitiveSceneInfo *)this_00.ReferenceController)->
                  DynamicRayTracingInstanceCachedData).field_0x1 = (bVar36 ^ bVar44) & 0x20 ^ bVar36
                  ;
                }
                uVar45 = ((FRayTracingInstanceAndViewIndex *)uVar52)->ViewIndex;
                uVar27 = 0;
                if ((int)uVar45 < (this->ViewSceneOptions).ArrayNum) {
                  uVar27 = ~uVar45 >> 0x1f;
                }
                if (uVar27 == 0) {
                  pwVar50 = L"Array index out of bounds: %lld from an array of size %lld";
                  pFVar78 = (FPrimitiveSceneProxy *)(longlong)(int)uVar45;
                  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar23) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                if (((this->ViewSceneOptions).DataPtr[(int)uVar45]->bTranslucentGeometry != false)
                   || ((((FPrimitiveSceneInfo *)this_00.ReferenceController)->
                       DynamicRayTracingInstanceCachedData).bAllSegmentsTranslucent == '\0')) {
                  bVar36 = ~(((FPrimitiveSceneInfo *)this_00.ReferenceController)->
                            DynamicRayTracingInstanceCachedData).bAllSegmentsDecal & 1;
                  local_424 = bVar36;
                  if (((((FPrimitiveSceneInfo *)this_00.ReferenceController)->
                       DynamicRayTracingInstanceCachedData).bAnySegmentsDecal == '\0') ||
                     (GRayTracingExcludeDecals != 0)) {
                    local_428 = 0;
                    if ((GRayTracingExcludeDecals != 0) &&
                       (param_1 = (FRayTracingScene *)local_420._24_8_,
                       (((FPrimitiveSceneInfo *)this_00.ReferenceController)->
                       DynamicRayTracingInstanceCachedData).bAllSegmentsDecal != '\0'))
                    goto LAB_14530d1f3;
                  }
                  else {
                    local_428 = 1;
                  }
                  fVar40 = (float)((FPrimitiveSceneInfo *)this_00.ReferenceController)->
                                  InstanceSceneDataOffset;
                  if ((0 < (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.
                           ArrayNum) &&
                     (0 < *(int *)((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials
                                   .AllocatorInstance.Data + 0xa0))) {
                    if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum <
                        1) {
                      pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
                      pFVar78 = (FPrimitiveSceneProxy *)0x0;
                      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar23) {
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                    }
                    pFVar41 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.
                              AllocatorInstance.Data;
                    if (*(int *)(pFVar41 + 0xa0) < 1) {
                      pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
                      pFVar78 = (FPrimitiveSceneProxy *)0x0;
                      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar23) {
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                    }
                    if (*(FScriptContainerElement **)(pFVar41 + 0x98) !=
                        (FScriptContainerElement *)0x0) {
                      pFVar41 = *(FScriptContainerElement **)(pFVar41 + 0x98);
                    }
                    if (*(longlong *)(pFVar41 + 0x88) != 0) {
                      if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum
                          < 1) {
                        pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
                        pFVar78 = (FPrimitiveSceneProxy *)0x0;
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      pFVar41 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.
                                AllocatorInstance.Data;
                      if (*(int *)(pFVar41 + 0xa0) < 1) {
                        pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
                        pFVar78 = (FPrimitiveSceneProxy *)0x0;
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      if (*(FScriptContainerElement **)(pFVar41 + 0x98) !=
                          (FScriptContainerElement *)0x0) {
                        pFVar41 = *(FScriptContainerElement **)(pFVar41 + 0x98);
                      }
                      if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).NumTransforms !=
                          *(uint *)(pFVar41 + 0x60)) {
                        pwVar50 = L"";
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Instance.NumTransforms == Instance.Materials[0].Elements[0].NumInstances"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
                                            ,0x3b8,L"");
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum
                          < 1) {
                        pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
                        pFVar78 = (FPrimitiveSceneProxy *)0x0;
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      if (*(int *)((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials
                                   .AllocatorInstance.Data + 0xa0) < 1) {
                        pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
                        pFVar78 = (FPrimitiveSceneProxy *)0x0;
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum
                          < 1) {
                        pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
                        pFVar78 = (FPrimitiveSceneProxy *)0x0;
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      pFVar41 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.
                                AllocatorInstance.Data;
                      if (*(int *)(pFVar41 + 0xa0) < 1) {
                        pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
                        pFVar78 = (FPrimitiveSceneProxy *)0x0;
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      if (*(FScriptContainerElement **)(pFVar41 + 0x98) !=
                          (FScriptContainerElement *)0x0) {
                        pFVar41 = *(FScriptContainerElement **)(pFVar41 + 0x98);
                      }
                      fVar40 = (float)(*(int *)(pFVar41 + 0x94) + uVar47);
                    }
                  }
                  pFVar51 = (FPrimitiveSceneProxy *)0x0;
                  bVar44 = local_358 & 0xf8;
                  uStack_3a0 = 0xffffffff;
                  local_398.ComparisonIndex.Value = 0;
                  local_398.Number = 0;
                  local_3a8 = ((TRefCountPtr<FRHIRayTracingGeometry> *)(local_420._0_8_ + 0xe8))->
                              Reference;
                  FStack_390.Value = 0;
                  local_388 = -NAN;
                  FStack_380.Raw = 0;
                  uStack_378 = uStack_378 & 0xffffffff00000000;
                  local_368.Raw = 0;
                  FStack_360.Data = FStack_360.Data & 0xffffffff00000000;
                  if (local_3a8 == (FRHIRayTracingGeometry *)0x0) {
                    pwVar50 = L"Ray tracing instance must have a valid geometry.";
                    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("RayTracingInstance.GeometryRHI",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
                                        ,0x3bf,L"Ray tracing instance must have a valid geometry.");
                    if (bVar23) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                  }
                  local_358 = ((byte)local_338[(longlong)local_340.Data * 8] & 0x40 | 0x20) >> 4 |
                              (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                              bApplyLocalBoundsTransform & 1U | bVar44;
                  uStack_357 = *(undefined1 *)
                                ((longlong)&local_3f8.ReferenceController[0x1a]._padding_ + 5);
                  bVar44 = *(byte *)((longlong)&local_3f8.ReferenceController[0x1a]._padding_ + 6);
                  bVar37 = (bVar44 & 1) << 3;
                  bStack_356 = bVar37;
                  if ((bVar44 & 2) != 0) {
                    bStack_356 = bVar37 | 2;
                  }
                  if ((bVar44 & 4) != 0) {
                    bStack_356 = bVar37 | 2;
                    if ((bVar44 & 2) == 0) {
                      bStack_356 = bVar37;
                    }
                    bStack_356 = bStack_356 | 4;
                  }
                  fStack_36c = fVar40;
                  if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                      PrimitiveInstanceIndices.ArrayNum == 0) {
                    local_240._s_0.Z =
                         (double)(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                 PrimitiveInstanceIndicesView.DataPtr;
                    dStack_228 = *(double *)
                                  &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                   PrimitiveInstanceIndicesView.ArrayNum;
                    iVar46 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                             PrimitiveInstanceIndicesView.ArrayNum;
                  }
                  else {
                    if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                        PrimitiveInstanceIndicesView.ArrayNum != 0) {
                      pwVar50 = L"";
                      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("PrimitiveInstanceIndicesView.Num() == 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                                          ,0x55,L"");
                      if (bVar23) {
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                    }
                    iVar46 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                             PrimitiveInstanceIndices.ArrayNum;
                    if (iVar46 < 0) {
                      pwVar50 = L"";
                      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L"");
                      if (bVar23) {
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                    }
                    dStack_228 = (double)CONCAT44(dStack_228._4_4_,iVar46);
                  }
                  if (iVar46 == 0) {
                    if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).InstanceTransforms.
                        ArrayNum == 0) {
                      local_220._s_0.X =
                           (double)(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                   InstanceTransformsView.DataPtr;
                      local_220._s_0.Y =
                           (double)*(undefined8 *)
                                    &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                     InstanceTransformsView.ArrayNum;
                      iVar46 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                               InstanceTransformsView.ArrayNum;
                    }
                    else {
                      if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                          InstanceTransformsView.ArrayNum != 0) {
                        pwVar50 = L"";
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InstanceTransformsView.Num() == 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                                            ,0x6e,L"");
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      iVar46 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                               InstanceTransforms.ArrayNum;
                      if (iVar46 < 0) {
                        pwVar50 = L"";
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L"");
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      local_220._8_4_ = iVar46;
                    }
                    if (iVar46 == 0) {
                      fStack_370 = (float)(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                          NumTransforms;
                      local_388 = fVar40;
                    }
                    else {
                      fStack_2b0 = 0.0;
                      if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).InstanceTransforms
                          .ArrayNum == 0) {
                        local_2b8 = *(uint *)&(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance
                                              ).InstanceTransformsView.DataPtr;
                        uStack_2b4 = *(uint *)((longlong)
                                               &(((FRayTracingInstanceAndViewIndex *)uVar52)->
                                                Instance).InstanceTransformsView.DataPtr + 4);
                        fVar40 = (float)(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                        InstanceTransformsView.ArrayNum;
                        uStack_38c = *(uint *)&(((FRayTracingInstanceAndViewIndex *)uVar52)->
                                               Instance).InstanceTransformsView.field_0xc;
                      }
                      else {
                        if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                            InstanceTransformsView.ArrayNum != 0) {
                          pwVar50 = 
                          L"InstanceTransformsView is expected to be empty if using InstanceTransforms"
                          ;
                          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Instance.InstanceTransformsView.Num() == 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
                                              ,999,
                                              L"InstanceTransformsView is expected to be empty if using InstanceTransforms"
                                             );
                          if (bVar23) {
                            pcVar14 = (code *)swi(3);
                            (*pcVar14)();
                            return;
                          }
                        }
                        fVar40 = (float)(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                        InstanceTransforms.ArrayNum;
                        auVar65._8_8_ = 0;
                        auVar65._0_8_ = (longlong)(int)fVar40;
                        uVar28 = SUB168(ZEXT816(0x80) * auVar65,0);
                        if (SUB168(ZEXT816(0x80) * auVar65,8) != 0) {
                          uVar28 = 0xffffffffffffffff;
                        }
                        _Dst = FMemStackBase::Alloc
                                         ((FMemStackBase *)(local_420._24_8_ + 0x30),uVar28,0x10);
                        if ((int)fVar40 < 0) {
                          pwVar50 = L"";
                          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("ArrayNum >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xfe,L"");
                          if (bVar23) {
                            pcVar14 = (code *)swi(3);
                            (*pcVar14)();
                            return;
                          }
                        }
                        memcpy(_Dst,(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                    InstanceTransforms.AllocatorInstance.Data,
                               (longlong)
                               (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                               InstanceTransforms.ArrayNum << 7);
                        local_2c8._0_4_ = (uint)_Dst;
                        local_2c8._4_4_ = (uint)((ulonglong)_Dst >> 0x20);
                        local_2b8 = (uint)local_2c8;
                        uStack_2b4 = local_2c8._4_4_;
                        uStack_38c = uStack_2bc;
                        local_2c8 = _Dst;
                        fStack_2c0 = fVar40;
                      }
                      local_398.Number = uStack_2b4;
                      local_398.ComparisonIndex.Value = local_2b8;
                      FStack_390.Value = (uint)fVar40;
                      fStack_370 = fVar40;
                      fStack_2b0 = fVar40;
                      uStack_2ac = uStack_38c;
                    }
                  }
                  else {
                    if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                        PrimitiveInstanceIndices.ArrayNum == 0) {
                      pFVar41 = (FScriptContainerElement *)
                                (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                PrimitiveInstanceIndicesView.DataPtr;
                      _fStack_3b8 = *(undefined8 *)
                                     &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                      PrimitiveInstanceIndicesView.ArrayNum;
                      fVar40 = (float)(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                      PrimitiveInstanceIndicesView.ArrayNum;
                      local_3c0 = pFVar41;
                    }
                    else {
                      if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                          PrimitiveInstanceIndicesView.ArrayNum != 0) {
                        pwVar50 = L"";
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("PrimitiveInstanceIndicesView.Num() == 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                                            ,0x55,L"");
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      pFVar41 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                PrimitiveInstanceIndices.AllocatorInstance.Data;
                      fVar40 = (float)(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                      PrimitiveInstanceIndices.ArrayNum;
                      local_3c0 = pFVar41;
                      if ((int)fVar40 < 0) {
                        pwVar50 = L"";
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L"");
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      fStack_3b8 = fVar40;
                    }
                    local_330 = (ulonglong)(int)fVar40;
                    auVar15._8_8_ = 0;
                    auVar15._0_8_ = local_330;
                    uVar28 = SUB168(ZEXT816(4) * auVar15,0);
                    if (SUB168(ZEXT816(4) * auVar15,8) != 0) {
                      uVar28 = 0xffffffffffffffff;
                    }
                    FVar29 = (FMaterialRelevance_u_0)
                             FMemStackBase::Alloc
                                       ((FMemStackBase *)(local_420._24_8_ + 0x30),uVar28,0x10);
                    local_300 = FVar29;
                    if ((int)fVar40 < 0) {
                      pwVar50 = L"";
                      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ArrayNum >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xfe,L"");
                      if (bVar23) {
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                    }
                    FVar55 = FVar29;
                    if (0 < (int)fVar40) {
                      pFVar54 = pFVar51;
                      FVar59 = FVar29;
                      do {
                        uVar45 = (uint)pFVar51;
                        uVar47 = 0;
                        if ((int)uVar45 < (int)fVar40) {
                          uVar47 = ~uVar45 >> 0x1f;
                        }
                        if (uVar47 == 0) {
                          pwVar50 = L"Array index out of bounds: %lld from an array of size %lld";
                          pFVar78 = pFVar54;
                          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             );
                          if (bVar23) {
                            pcVar14 = (code *)swi(3);
                            (*pcVar14)();
                            return;
                          }
                        }
                        iVar46 = *(int *)(pFVar41 + (FVar59.Raw - (longlong)FVar29));
                        iVar26 = *(int *)((longlong)&local_3f8.ReferenceController[0x22]._padding_ +
                                         4);
                        if (uVar47 == 0) {
                          pwVar50 = L"Array index out of bounds: %lld from an array of size %lld";
                          pFVar78 = pFVar54;
                          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             );
                          if (bVar23) {
                            pcVar14 = (code *)swi(3);
                            (*pcVar14)();
                            return;
                          }
                        }
                        *(int *)FVar59 = iVar46 + iVar26;
                        pFVar51 = (FPrimitiveSceneProxy *)(ulonglong)(uVar45 + 1);
                        FVar59.Raw = FVar59.Raw + 4;
                        pFVar54 = (FPrimitiveSceneProxy *)((longlong)&pFVar54->_padding_ + 1);
                        FVar55 = local_300;
                        bVar36 = local_424;
                      } while ((int)(uVar45 + 1) < (int)fVar40);
                    }
                    uStack_378 = CONCAT44(uStack_2dc,fVar40);
                    FStack_360.Data = (FScriptContainerElement *)CONCAT44(uStack_2cc,fVar40);
                    uVar52 = local_3e0._8_8_;
                    uVar56 = local_3e0._0_8_;
                    FStack_380 = FVar55;
                    fStack_370 = fVar40;
                    local_368 = FVar55;
                    local_2e8 = FVar55;
                    fStack_2e0 = fVar40;
                    local_2d8 = FVar55;
                    fStack_2d0 = fVar40;
                  }
                  iVar46 = (int)((ulonglong)pFVar78 >> 0x20);
                  if (bVar36 == 0) {
                    pFVar30 = FRayTracingShaderBindingTable::AllocateDynamicRange
                                        (local_348,(uint)local_428 * 2,local_420._16_4_);
                    fVar68 = (float)CONCAT53(uStack_355,
                                             CONCAT12(bStack_356,CONCAT11(uStack_357,local_358)));
                    fVar69 = SUB54(uStack_355,1);
                    pFVar42 = local_400;
                    this_01 = (FRayTracingScene *)local_420._24_8_;
                    uVar61 = local_3a8._0_4_;
                    uVar66 = local_3a8._4_4_;
                    uVar47 = uStack_3a0;
                    uVar45 = uStack_39c;
                    fVar40 = local_388;
                    uVar70 = FStack_380.Raw._0_4_;
                    uVar71 = FStack_380.Raw._4_4_;
                    uVar72 = (undefined4)uStack_378;
                    fVar73 = uStack_378._4_4_;
                    fVar74 = fStack_370;
                    fVar75 = fStack_36c;
                  }
                  else {
                    pFVar30 = FRayTracingShaderBindingTable::AllocateDynamicRange
                                        (local_348,(uint)local_428 * 2 + Base,local_420._16_4_);
                    uStack_3a0 = FRayTracingSBTAllocation::GetRecordIndex(pFVar30,Base,0);
                    pFVar42 = local_400;
                    pFVar9 = local_400->Scene;
                    uVar47 = 0;
                    if ((int)local_3f0._s_0.R < (pFVar9->PrimitiveRayTracingFlags).ArrayNum) {
                      uVar47 = ~(uint)local_3f0._s_0.R >> 0x1f;
                    }
                    if ((uVar47 == 0) &&
                       (iVar46 = (int)local_3f0._s_0.R >> 0x1f,
                       bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar23)) {
                      pcVar14 = (code *)swi(3);
                      (*pcVar14)();
                      return;
                    }
                    FVar6 = (pFVar9->PrimitiveRayTracingFlags).AllocatorInstance.Data[local_318];
                    iVar26 = (int)((FViewInfo *)uVar56)->_padding_;
                    pFVar31 = (FViewInfo *)uVar56;
                    if ((iVar26 != 0) && (iVar26 == 2)) {
                      pFVar31 = FViewInfo::GetPrimaryView((FViewInfo *)uVar56);
                    }
                    fVar75 = fStack_36c;
                    fVar74 = fStack_370;
                    fVar40 = local_388;
                    uVar45 = uStack_39c;
                    uVar47 = uStack_3a0;
                    pFVar13 = local_3a8;
                    this_01 = (FRayTracingScene *)local_420._24_8_;
                    uStack_160 = CONCAT44(uStack_38c,FStack_390.Value);
                    pwVar50 = (wchar_t *)0x0;
                    uVar61 = local_3a8._0_4_;
                    uVar66 = local_3a8._4_4_;
                    uVar70 = FStack_380.Raw._0_4_;
                    uVar71 = FStack_380.Raw._4_4_;
                    uVar72 = (undefined4)uStack_378;
                    fVar73 = uStack_378._4_4_;
                    local_128 = CONCAT53(uStack_355,
                                         CONCAT12(bStack_356,CONCAT11(uStack_357,local_358)));
                    fVar68 = (float)local_128;
                    fVar69 = SUB54(uStack_355,1);
                    local_168 = local_398;
                    in_stack_fffffffffffffbb8 =
                         CONCAT71((int7)((ulonglong)in_stack_fffffffffffffbb8 >> 8),1);
                    local_138 = local_368;
                    pFStack_130 = FStack_360.Data;
                    local_178[0] = local_3a8._0_4_;
                    local_178[1]._0_2_ = local_3a8._4_2_;
                    local_178[1]._2_1_ = local_3a8._6_1_;
                    local_178[1]._3_1_ = local_3a8._7_1_;
                    uStack_170 = uStack_3a0;
                    uStack_16c = uStack_39c;
                    local_158 = local_388;
                    uStack_154 = uStack_384;
                    uStack_150 = FStack_380.Raw._0_4_;
                    uStack_14c = FStack_380.Raw._4_4_;
                    local_148._0_4_ = (undefined4)uStack_378;
                    local_148._4_4_ = uStack_378._4_4_;
                    fStack_140 = fStack_370;
                    fStack_13c = fStack_36c;
                    pFVar78 = (FPrimitiveSceneProxy *)
                              CONCAT44(iVar46,(pFVar31->RayTracingSceneViewHandle).Index);
                    FVar49.Index._1_3_ = 0;
                    FVar49.Index._0_1_ = (byte)FVar6 >> 5 & 2;
                    local_3a8 = pFVar13;
                    FRayTracingScene::AddTransientInstance
                              ((FRayTracingScene *)local_420._24_8_,
                               (FRayTracingGeometryInstance *)local_260,
                               (ERayTracingSceneLayer)local_178,FVar49,pFVar78,
                               SUB81(local_420._8_8_,0),(int)in_stack_fffffffffffffbb8);
                  }
                  FVar21.Data = FStack_360.Data;
                  FVar29 = local_368;
                  FVar20 = local_398;
                  uVar79 = (undefined4)((ulonglong)pFVar78 >> 0x20);
                  if (local_428 != 0) {
                    local_1f8[1] = uVar66;
                    local_1f8[0] = uVar61;
                    FVar18.Number = uStack_38c;
                    FVar18.ComparisonIndex.Value = FStack_390.Value;
                    FStack_1f0.Value = uVar47;
                    uStack_1ec = uVar45;
                    FStack_1f0.Value = FRayTracingSBTAllocation::GetRecordIndex(pFVar30,Decals,0);
                    iVar46 = (int)((FViewInfo *)uVar56)->_padding_;
                    pFVar31 = (FViewInfo *)uVar56;
                    if ((iVar46 != 0) && (iVar46 == 2)) {
                      pFVar31 = FViewInfo::GetPrimaryView((FViewInfo *)uVar56);
                    }
                    pwVar50 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar50 >> 8),1);
                    in_stack_fffffffffffffbb8 =
                         CONCAT71((int7)((ulonglong)in_stack_fffffffffffffbb8 >> 8),1);
                    local_1e8 = FVar20;
                    local_1b8 = FVar29;
                    pFStack_1b0 = FVar21.Data;
                    local_1a8._4_4_ = fVar69;
                    local_1a8._0_4_ = fVar68;
                    pFVar78 = (FPrimitiveSceneProxy *)
                              CONCAT44(uVar79,(pFVar31->RayTracingSceneViewHandle).Index);
                    FStack_1e0 = FVar18;
                    local_1d8.Value = (uint)fVar40;
                    iStack_1d0 = uVar70;
                    iStack_1cc = uVar71;
                    local_1c8._0_4_ = uVar72;
                    local_1c8._4_4_ = fVar73;
                    fStack_1c0 = fVar74;
                    fStack_1bc = fVar75;
                    FRayTracingScene::AddTransientInstance
                              (this_01,(FRayTracingGeometryInstance *)(local_260 + 8),
                               (ERayTracingSceneLayer)local_1f8,(FViewHandle)(uint)pwVar50,pFVar78,
                               SUB81(local_420._8_8_,0),(int)in_stack_fffffffffffffbb8);
                  }
                  param_1 = (FRayTracingScene *)local_420._24_8_;
                  if ((bVar36 != 0) || (local_428 != 0)) {
                    *(bool *)(local_420._24_8_ + 0x10) =
                         (bool)(*(bool *)(local_420._24_8_ + 0x10) |
                               (byte)local_338[(longlong)local_340.Data * 8] >> 6 & 1);
                  }
                  if (bVar24) {
                    uVar47 = ((FRayTracingInstanceAndViewIndex *)uVar52)->ViewIndex;
                    pFVar51 = (FPrimitiveSceneProxy *)(longlong)(int)uVar47;
                    uVar45 = 0;
                    if ((int)uVar47 < (int)local_118._56_4_) {
                      uVar45 = ~uVar47 >> 0x1f;
                    }
                    if (uVar45 == 0) {
                      pwVar50 = L"Array index out of bounds: %lld into an array of size %lld";
                      pFVar78 = pFVar51;
                      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar23) {
                        pcVar14 = (code *)swi(3);
                        (*pcVar14)();
                        return;
                      }
                    }
                    pFVar57 = (FRayTracingSBTAllocation *)local_118;
                    if ((FRayTracingSBTAllocation *)local_118._48_8_ !=
                        (FRayTracingSBTAllocation *)0x0) {
                      pFVar57 = (FRayTracingSBTAllocation *)local_118._48_8_;
                    }
                    fVar40 = *(float *)(&pFVar57->Geometry + (longlong)pFVar51 * 3);
                    if ((uint)local_3f0._s_0.G <= (uint)fVar40) {
                      pwVar50 = *(wchar_t **)(&pFVar57->BaseRecordIndex + (longlong)pFVar51 * 6);
                      if ((FRayTracingMeshBatchTaskPage *)pwVar50 !=
                          (FRayTracingMeshBatchTaskPage *)0x0) {
                        pFVar78 = (FPrimitiveSceneProxy *)
                                  CONCAT44((int)((ulonglong)pFVar78 >> 0x20),fVar40);
                        DispatchRayTracingMeshBatchTask
                                  (pFVar42->BulkAllocator,pFVar42->Scene,
                                   (FViewInfo *)local_3e0._0_8_,
                                   (FRayTracingMeshBatchTaskPage *)pwVar50,(uint)fVar40);
                      }
                      *(undefined8 *)(&pFVar57->BaseRecordIndex + (longlong)pFVar51 * 6) = 0;
                      *(undefined8 *)(&pFVar57->NumRecords + (longlong)pFVar51 * 6) = 0;
                      *(undefined4 *)(&pFVar57->Geometry + (longlong)pFVar51 * 3) = 0;
                    }
                    _Dst_00 = *(undefined8 **)(&pFVar57->NumRecords + (longlong)pFVar51 * 6);
                    if ((_Dst_00 == (undefined8 *)0x0) || (*(int *)(_Dst_00 + 0x380) == 0x80)) {
                      paVar12 = &pFVar42->BulkAllocator->Next;
                      aVar32 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                                )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc
                                           (0x1c20,8);
                      *(undefined8 *)((longlong)aVar32 + 8) = 0;
                      *(undefined ***)aVar32 =
                           &TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>
                            ::TObject<RayTracing::FRayTracingMeshBatchTaskPage>::_vftable_;
                      _Dst_00 = (undefined8 *)((longlong)aVar32 + 0x10);
                      TVar33.Next = *paVar12;
                      do {
                        *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                          *)((longlong)aVar32 + 8) = TVar33.Next;
                        LOCK();
                        aVar34 = *paVar12;
                        bVar23 = TVar33.Next == aVar34;
                        if (bVar23) {
                          *paVar12 = aVar32;
                          aVar34 = TVar33.Next;
                        }
                        UNLOCK();
                        TVar33.Next = aVar34;
                      } while (!bVar23);
                      memset(_Dst_00,0,0x1c10);
                      lVar39 = 0x80;
                      puVar35 = (undefined8 *)((longlong)aVar32 + 0x20);
                      do {
                        puVar35[-2] = 0;
                        puVar35[-1] = 0;
                        *puVar35 = 0;
                        puVar35[1] = 0;
                        puVar35[2] = 0;
                        *(undefined4 *)(puVar35 + 3) = 0;
                        puVar35[4] = 0;
                        puVar35 = puVar35 + 7;
                        lVar39 = lVar39 + -1;
                      } while (lVar39 != 0);
                      *(undefined4 *)((longlong)aVar32 + 0x1c10) = 0;
                      *(undefined8 *)((longlong)aVar32 + 0x1c18) = 0;
                      if (*(longlong *)(&pFVar57->BaseRecordIndex + (longlong)pFVar51 * 6) == 0) {
                        *(undefined8 **)(&pFVar57->BaseRecordIndex + (longlong)pFVar51 * 6) =
                             _Dst_00;
                      }
                      if (*(longlong *)(&pFVar57->NumRecords + (longlong)pFVar51 * 6) != 0) {
                        *(undefined8 **)
                         (*(longlong *)(&pFVar57->NumRecords + (longlong)pFVar51 * 6) + 0x1c08) =
                             _Dst_00;
                      }
                      *(undefined8 **)(&pFVar57->NumRecords + (longlong)pFVar51 * 6) = _Dst_00;
                    }
                    puVar35 = _Dst_00 + (ulonglong)*(uint *)(_Dst_00 + 0x380) * 7;
                    *(uint *)(_Dst_00 + 0x380) = *(uint *)(_Dst_00 + 0x380) + 1;
                    if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum
                        == 0) {
                      local_220._s_0.Z =
                           (double)(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                   MaterialsView.DataPtr;
                      FStack_208.PrimIDValue =
                           (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.
                           ArrayNum;
                      uStack_204 = *(undefined4 *)
                                    &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                     MaterialsView.field_0xc;
                      FVar8.PrimIDValue =
                           (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.
                           ArrayNum;
                    }
                    else {
                      if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.
                          ArrayNum != 0) {
                        pwVar50 = L"";
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("MaterialsView.Num() == 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                                            ,0x27,L"");
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      FVar8.PrimIDValue =
                           (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.
                           ArrayNum;
                      if ((int)FVar8.PrimIDValue < 0) {
                        pwVar50 = L"";
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L"");
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      FStack_208.PrimIDValue = FVar8.PrimIDValue;
                    }
                    *(uint *)(&pFVar57->Geometry + (longlong)pFVar51 * 3) =
                         *(int *)(&pFVar57->Geometry + (longlong)pFVar51 * 3) + FVar8.PrimIDValue;
                    if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum
                        == 0) {
                      uVar56 = *(undefined8 *)
                                &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                 MaterialsView.ArrayNum;
                      puVar35[4] = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                   MaterialsView.DataPtr;
                      puVar35[5] = uVar56;
                    }
                    else {
                      uVar56 = *(undefined8 *)
                                &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.
                                 ArrayNum;
                      pFVar41 = (FScriptContainerElement *)puVar35[2];
                      uVar17 = puVar35[3];
                      puVar35[2] = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials
                                   .AllocatorInstance.Data;
                      puVar35[3] = uVar56;
                      (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.
                      AllocatorInstance.Data = pFVar41;
                      (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum =
                           (int)uVar17;
                      (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayMax =
                           (int)((ulonglong)uVar17 >> 0x20);
                    }
                    *puVar35 = local_420._8_8_;
                    pFVar13 = ((TRefCountPtr<FRHIRayTracingGeometry> *)(local_420._0_8_ + 0xe8))->
                              Reference;
                    puVar35[6] = pFVar30;
                    puVar35[1] = pFVar13;
                    this_00.ReferenceController = local_3f8.ReferenceController;
                    this = local_400;
                    param_1 = (FRayTracingScene *)local_420._24_8_;
                  }
                  else {
                    if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.ArrayNum
                        == 0) {
                      pFVar48 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                MaterialsView.DataPtr;
                      dStack_308 = *(double *)
                                    &(((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).
                                     MaterialsView.ArrayNum;
                      iVar46 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView
                               .ArrayNum;
                      local_310 = pFVar48;
                    }
                    else {
                      if ((((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).MaterialsView.
                          ArrayNum != 0) {
                        pwVar50 = L"";
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("MaterialsView.Num() == 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                                            ,0x27,L"");
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      pFVar48 = (FMeshBatch *)
                                (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.
                                AllocatorInstance.Data;
                      iVar46 = (((FRayTracingInstanceAndViewIndex *)uVar52)->Instance).Materials.
                               ArrayNum;
                      local_310 = pFVar48;
                      if (iVar46 < 0) {
                        pwVar50 = L"";
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L"");
                        if (bVar23) {
                          pcVar14 = (code *)swi(3);
                          (*pcVar14)();
                          return;
                        }
                      }
                      dStack_308 = (double)CONCAT44(dStack_308._4_4_,iVar46);
                    }
                    uVar17 = local_3e0._0_8_;
                    pFVar42 = local_400;
                    pFVar43 = pFVar48 + iVar46;
                    this_00.ReferenceController = local_3f8.ReferenceController;
                    this = local_400;
                    if (pFVar48 != pFVar43) {
                      pTVar3 = (TArray<FRayTracingShaderBindingData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                *)(local_3e0._0_8_ + 0x21c0);
                      do {
                        local_278._s_0.X =
                             (double)((TRefCountPtr<FRHIRayTracingGeometry> *)
                                     (local_420._0_8_ + 0xe8))->Reference;
                        local_290[0] = (FRayTracingMeshCommandContext)
                                       &___7FDynamicRayTracingMeshCommandContext__6B_;
                        local_278._8_4_ = pFVar48->SegmentIndex;
                        EVar7 = pFVar42->Scene->CachedRayTracingMeshCommandsType;
                        pFVar78 = (FPrimitiveSceneProxy *)
                                  CONCAT71((int7)((ulonglong)pFVar78 >> 8),EVar7);
                        local_290[1] = (FRayTracingMeshCommandContext)
                                       &((FViewInfo *)uVar56)->DynamicRayTracingMeshCommandStorage;
                        local_290[2] = (FRayTracingMeshCommandContext)pTVar3;
                        local_278._s_0.Z = (double)pFVar30;
                        FRayTracingMeshProcessor::FRayTracingMeshProcessor
                                  (&local_198,local_290,pFVar42->Scene,(FSceneView *)uVar17,EVar7);
                        pwVar50 = (wchar_t *)local_420._8_8_;
                        FRayTracingMeshProcessor::AddMeshBatch
                                  (&local_198,pFVar48,1,(FPrimitiveSceneProxy *)local_420._8_8_);
                        FRayTracingMeshProcessor::~FRayTracingMeshProcessor(&local_198);
                        pFVar48 = pFVar48 + 1;
                        local_290[0] = (FRayTracingMeshCommandContext)
                                       &___7FRayTracingMeshCommandContext__6B_;
                        this_00.ReferenceController = local_3f8.ReferenceController;
                        uVar52 = local_3e0._8_8_;
                        this = local_400;
                        param_1 = (FRayTracingScene *)local_420._24_8_;
                      } while (pFVar48 != pFVar43);
                    }
                  }
                }
              }
            }
          }
          else {
            local_2f8 = (undefined8 *)local_420;
            local_2f0 = &local_res20;
            bVar23 = `RayTracing::FDynamicRayTracingInstancesContext::AddInstancesToScene'::__l14::
                     <lambda_2>::operator()(&local_2f8);
            if (bVar23) goto LAB_14530c11a;
          }
LAB_14530d1f3:
          local_3d0.Data = local_3d0.Data + 0x78;
          uVar52 = uVar52 + 0x78;
          pFVar58 = (FRayTracingMeshBatchTaskPage *)local_420._8_8_;
          local_3e0._8_8_ = uVar52;
        } while ((FScriptContainerElement *)uVar52 != local_328.Data);
      }
      if (0.0 < fVar4) {
        uVar47 = 0;
        fVar40 = 0.0;
        uVar61 = uVar76;
        uVar66 = uVar77;
        if (0 < (this->Views).ArrayNum) {
          lVar39 = 0;
          do {
            uVar45 = 0;
            if ((int)uVar47 < (this->Views).ArrayNum) {
              uVar45 = ~uVar47 >> 0x1f;
            }
            if (uVar45 == 0) {
              pwVar50 = L"Array index out of bounds: %lld from an array of size %lld";
              pFVar78 = (FPrimitiveSceneProxy *)(longlong)(int)uVar47;
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar23) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
            }
            uVar47 = uVar47 + 1;
            lVar53 = *(longlong *)(lVar39 + (longlong)(this->Views).DataPtr);
            lVar39 = lVar39 + 8;
            dVar67 = *(double *)(lVar53 + 0xbc8) - (double)pFVar58->WorkItems[9].RayTracingGeometry;
            dVar63 = *(double *)(*(longlong *)(lVar53 + 8) + 0x90);
            if (dVar63 <= (double)fVar40) {
              dVar63 = (double)fVar40;
            }
            dVar62 = *(double *)(lVar53 + 0xbd8) -
                     *(double *)&pFVar58->WorkItems[9].MeshBatchesOwned.ArrayNum;
            fVar40 = (float)dVar63;
            dVar63 = *(double *)(lVar53 + 0xbd0) -
                     (double)pFVar58->WorkItems[9].MeshBatchesOwned.AllocatorInstance.Data;
            auVar64._0_8_ = dVar62 * dVar62;
            auVar64._8_8_ = 0;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = dVar63 * dVar63 + dVar67 * dVar67 + auVar64._0_8_;
            auVar65 = sqrtpd(auVar64,auVar16);
            dVar63 = auVar65._0_8_;
            if ((double)CONCAT44(uVar66,uVar61) <= dVar63) {
              dVar63 = (double)CONCAT44(uVar66,uVar61);
            }
            uVar61 = SUB84(dVar63,0);
            uVar66 = (undefined4)((ulonglong)dVar63 >> 0x20);
          } while ((int)uVar47 < (this->Views).ArrayNum);
        }
        if ((double)CONCAT44(uVar66,uVar61) < (double)fVar4) {
          ((FPrimitiveSceneInfo *)this_00.ReferenceController)->LastRenderTime = fVar40;
          FPrimitiveSceneInfo::UpdateComponentLastRenderTime
                    ((FPrimitiveSceneInfo *)this_00.ReferenceController,fVar40,true);
        }
      }
    }
    uVar38 = (ulonglong)(uint)local_3f0._s_0.B;
    pFVar41 = local_3c8 + 0x24;
  } while( true );
}

// CollectRDGResources @ 145313570

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
RayTracing::FDynamicRayTracingInstancesContext::CollectRDGResources
          (FDynamicRayTracingInstancesContext *this,FRDGBuilder *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  FViewInfo **ppFVar5;
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *pTVar6;
  code *pcVar7;
  longlong lVar8;
  uchar *puVar9;
  FViewInfo *pFVar10;
  bool bVar11;
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *pTVar12;
  longlong lVar13;
  TRefCountPtr<FRDGPooledBuffer> TVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uchar *puVar18;
  uint uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 local_res18 [8];
  uint local_res20;
  TRefCountPtr<FRDGPooledBuffer> local_108;
  longlong local_100;
  longlong local_f8;
  int local_f0;
  int local_ec;
  FRDGBuffer *local_e8;
  uchar *local_e0;
  FViewInfo *local_d8;
  FRDGBuffer *local_d0;
  uchar *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  uchar *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_res20 = 0;
  if (0 < (this->RayTracingInstanceCollector).RDGPooledBuffers.ArrayNum) {
    local_100 = 0;
    local_f8 = 0;
    do {
      lVar8 = local_f8;
      lVar13 = local_100;
      uVar19 = local_res20;
      uVar15 = ~local_res20 >> 0x1f;
      uVar17 = 0;
      if ((int)local_res20 < (this->Views).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      ppFVar5 = (this->Views).DataPtr;
      uVar17 = 0;
      if ((int)uVar19 < (this->RayTracingInstanceCollector).Views.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(FViewInfo **)
            ((this->RayTracingInstanceCollector).Views.AllocatorInstance.Data + lVar13 * 8) !=
           ppFVar5[lVar13]) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("RayTracingInstanceCollector.Views[ViewIndex] == Views[ViewIndex]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
                              ,0x328,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar17 = 0;
      if ((int)uVar19 < (this->RayTracingInstanceCollector).RDGPooledBuffers.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar6 = (this->RayTracingInstanceCollector).RDGPooledBuffers.AllocatorInstance.SecondaryData.
               Data;
      pTVar12 = (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                 *)&(this->RayTracingInstanceCollector).RDGPooledBuffers;
      if (pTVar6 != (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                     *)0x0) {
        pTVar12 = pTVar6;
      }
      puVar18 = (pTVar12->Hash).InlineData + lVar8 + -0x38;
      uVar17 = 0;
      if ((int)uVar19 < (this->Views).ArrayNum) {
        uVar17 = uVar15;
      }
      local_e0 = puVar18;
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar18 + 0x10);
      iVar4 = (int)*(longlong *)(puVar18 + 0x28);
      uStack_bc = 1;
      local_d8 = (this->Views).DataPtr[lVar13];
      iStack_c0 = 0;
      local_a8 = 0;
      iStack_ac = 0;
      if (iVar4 != 0) {
        pTVar20 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar18 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar18 + 0x20);
        }
        uVar19 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
        local_a8 = 0;
        while (uVar19 == 0) {
          lVar13 = (longlong)iStack_c0;
          local_a8 = local_a8 + 0x20;
          iStack_c0 = iStack_c0 + 1;
          iStack_ac = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_1453137cf;
          uVar19 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uStack_bc = ~(uVar19 - 1) & uVar19;
        uVar3 = (ulonglong)uStack_bc * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_f0 = (int)lVar13;
        iStack_ac = local_f0 + -1 + local_a8;
        if (iVar4 < iStack_ac) {
          iStack_ac = iVar4;
        }
      }
LAB_1453137cf:
      uVar19 = *(uint *)(puVar18 + 0x28);
      uStack_a4 = local_4c;
      iStack_a0 = *(int *)(puVar18 + 8) - *(int *)(puVar18 + 0x34);
      uVar17 = uVar19 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
      uStack_b0 = 0xffffffff;
      TStack_90.CurrentBitIndex = iStack_ac;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar19 >> 5;
      TStack_90._28_4_ = local_4c;
      TStack_90.BaseBitIndex = local_a8;
      uStack_70 = CONCAT44(uStack_9c,iStack_a0);
      local_c8 = puVar18;
      local_b8 = pTVar1;
      local_98 = puVar18;
      TStack_90.Array = pTVar1;
      if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar10 = local_d8;
      puVar9 = local_e0;
      uVar15 = *(uint *)(puVar18 + 0x28);
      if (uVar19 != uVar15) {
        pTVar20 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar18 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar18 + 0x20);
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) &
                 *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
        while (uVar19 == 0) {
          lVar13 = (longlong)iVar16;
          uVar17 = uVar17 + 0x20;
          iVar16 = iVar16 + 1;
          uVar19 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_1453138d0;
          uVar19 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar3 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_ec = (int)lVar13;
        uVar19 = local_ec + -1 + uVar17;
        if ((int)uVar15 < (int)uVar19) {
          uVar19 = uVar15;
        }
      }
LAB_1453138d0:
      while( true ) {
        puVar18 = local_98;
        if (*(int *)(local_98 + 8) - *(int *)(local_98 + 0x34) != (int)uStack_70) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<FRDGPooledBuffer_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_90.CurrentBitIndex == uVar19) && (TStack_90.Array == pTVar1)) &&
           (puVar18 == puVar9)) break;
        local_108.Reference =
             *(FRDGPooledBuffer **)
              (*(longlong *)puVar18 + (longlong)TStack_90.CurrentBitIndex * 0x10);
        if (local_108.Reference != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&(local_108.Reference)->_padding_ = (int)(local_108.Reference)->_padding_ + 1;
          UNLOCK();
        }
        local_d0 = FRDGBuilder::RegisterExternalBuffer(param_1,&local_108,None);
        if (local_108.Reference != (FRDGPooledBuffer *)0x0) {
          plVar2 = &(local_108.Reference)->_padding_;
          LOCK();
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            TVar14.Reference = local_108.Reference;
            if (plVar2 == (longlong *)0x0) {
              TVar14.Reference = (FRDGPooledBuffer *)0x0;
            }
            if (TVar14.Reference != (FRDGPooledBuffer *)0x0) {
              (**(code **)(TVar14.Reference)->_padding_)(TVar14.Reference,1);
            }
          }
        }
        TSet<FRDGBuffer_*,DefaultKeyFuncs<FRDGBuffer_*,0>,FDefaultSetAllocator>::
        Emplace<FRDGBuffer_*_const_&>
                  (&pFVar10->DynamicRayTracingRDGBuffers,&local_e8,(bool *)&local_d0);
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
      local_res20 = local_res20 + 1;
      local_100 = local_100 + 1;
      local_f8 = local_f8 + 0x50;
    } while ((int)local_res20 < (this->RayTracingInstanceCollector).RDGPooledBuffers.ArrayNum);
  }
  return;
}

// Finish @ 145320d20

/* WARNING: Type propagation algorithm not settling */
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
RayTracing::FDynamicRayTracingInstancesContext::Finish
          (FDynamicRayTracingInstancesContext *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FRayTracingDynamicGeometryUpdateManager *this_02;
  FScene *pFVar5;
  FScene *pFVar6;
  FPrimitiveSceneProxy *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  FRayTracingDynamicGeometryUpdateParams *pFVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_6c;
  FQueuedCommandList local_68 [2];
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_58;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId747,"RayTracing_GatherDynamicRayTracingInstances_Finish",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
               ,0x2eb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId747);
  }
  local_res20 = (this->DynamicRayTracingPrimitives).ArrayNum;
  uVar12 = (ulonglong)(int)local_res20;
  pFVar16 = (this->DynamicRayTracingPrimitives).AllocatorInstance.Data;
  this_02 = this->Scene->RayTracingDynamicGeometryUpdateManager;
  pFVar2 = pFVar16 + uVar12 * 0x24;
  while( true ) {
    if ((this->DynamicRayTracingPrimitives).ArrayNum != (int)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<RayTracing::FDynamicRayTracingPrimitive,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar16 == pFVar2) {
      DestructItems<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest,int>
                ((this->RayTracingInstanceCollector).RayTracingGeometriesToUpdate.AllocatorInstance.
                 Data,(this->RayTracingInstanceCollector).RayTracingGeometriesToUpdate.ArrayNum);
      piVar1 = &(this->RayTracingInstanceCollector).RayTracingGeometriesToUpdate.ArrayMax;
      iVar4 = *piVar1;
      (this->RayTracingInstanceCollector).RayTracingGeometriesToUpdate.ArrayNum = 0;
      if (iVar4 != 0) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest>_>
                  (0xa0,0x10,0,
                   &(this->RayTracingInstanceCollector).RayTracingGeometriesToUpdate.
                    AllocatorInstance,0,piVar1);
      }
      this_00 = &(this->RayTracingInstanceCollector).ReferencedGeometryGroups;
      if (this->bTrackReferencedGeometryGroups == false) {
        if ((*(int *)&(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.
                      field_0x8 !=
             *(int *)&(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.
                      field_0x34) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("RayTracingInstanceCollector.ReferencedGeometryGroups.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
                               ,0x315,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)&(this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.
                      Elements.field_0x8 !=
             *(int *)&(this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.
                      Elements.field_0x34) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("RayTracingInstanceCollector.ReferencedGeometryGroupsForDynamicUpdate.IsEmpty()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
                               ,0x316,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        FRayTracingGeometryManager::AddReferencedGeometryGroups
                  ((FRayTracingGeometryManager *)GRayTracingGeometryManager,this_00);
        this_01 = &(this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate;
        FRayTracingGeometryManager::AddReferencedGeometryGroupsForDynamicUpdate
                  ((FRayTracingGeometryManager *)GRayTracingGeometryManager,this_01);
        bVar9 = 1 < (this->RayTracingInstanceCollector).ReferencedGeometryGroups.HashSize;
        if (!bVar9) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
        }
        iVar4 = *(int *)&(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.
                         field_0xc;
        *(undefined4 *)
         &(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.field_0x8 = 0;
        if (iVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this_00,0,
                     (int *)&(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.
                             field_0xc);
        }
        *(undefined4 *)
         &(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.field_0x30 =
             0xffffffff;
        *(undefined4 *)
         &(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.field_0x34 = 0;
        iVar4 = *(int *)&(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.
                         field_0x2c;
        *(undefined4 *)
         &(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.field_0x28 = 0;
        if ((iVar4 < 0) || (0x80 < iVar4)) {
          *(undefined4 *)
           &(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->RayTracingInstanceCollector).ReferencedGeometryGroups.Elements.
                      field_0x10,0);
        }
        if (bVar9) {
          (this->RayTracingInstanceCollector).ReferencedGeometryGroups.HashSize = 1;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
        }
        bVar9 = 1 < (this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.
                    HashSize;
        if (!bVar9) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_01);
        }
        iVar4 = *(int *)&(this->RayTracingInstanceCollector).
                         ReferencedGeometryGroupsForDynamicUpdate.Elements.field_0xc;
        *(undefined4 *)
         &(this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.Elements.
          field_0x8 = 0;
        if (iVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)this_01,0,
                     (int *)&(this->RayTracingInstanceCollector).
                             ReferencedGeometryGroupsForDynamicUpdate.Elements.field_0xc);
        }
        *(undefined4 *)
         &(this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.Elements.
          field_0x30 = 0xffffffff;
        *(undefined4 *)
         &(this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.Elements.
          field_0x34 = 0;
        iVar4 = *(int *)&(this->RayTracingInstanceCollector).
                         ReferencedGeometryGroupsForDynamicUpdate.Elements.field_0x2c;
        *(undefined4 *)
         &(this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.Elements.
          field_0x28 = 0;
        if ((iVar4 < 0) || (0x80 < iVar4)) {
          *(undefined4 *)
           &(this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.Elements.
            field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.
                      Elements.field_0x10,0);
        }
        if (bVar9) {
          (this->RayTracingInstanceCollector).ReferencedGeometryGroupsForDynamicUpdate.HashSize = 1;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_01);
        }
      }
      FMeshElementCollector::Finish((FMeshElementCollector *)&this->RayTracingInstanceCollector);
      FGlobalDynamicVertexBuffer::Commit(&this->DynamicVertexBuffer);
      FGlobalDynamicIndexBuffer::Commit(&this->DynamicIndexBuffer);
      FRHICommandListBase::FinishRecording((FRHICommandListBase *)this->RHICmdList);
      FGlobalDynamicReadBuffer::Commit
                ((FGlobalDynamicReadBuffer *)&FSceneRenderer::DynamicReadBufferForRayTracing,param_1
                );
      local_68[0].CmdList = (FRHICommandListBase *)this->RHICmdList;
      local_58.DataPtr = local_68;
      local_58._12_4_ = uStack_6c;
      local_58.ArrayNum = 1;
      FRHICommandListImmediate::QueueAsyncCommandListSubmit(param_1,&local_58,Disabled,0);
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar3 = *(uint *)pFVar16;
    pFVar5 = this->Scene;
    uVar13 = 0;
    if ((int)uVar3 < (pFVar5->PrimitiveSceneProxies).ArrayNum) {
      uVar13 = ~uVar3 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = this->Scene;
    pFVar7 = *(FPrimitiveSceneProxy **)
              ((pFVar5->PrimitiveSceneProxies).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    uVar3 = *(uint *)pFVar16;
    uVar13 = 0;
    if ((int)uVar3 < (pFVar6->Primitives).ArrayNum) {
      uVar13 = ~uVar3 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    uVar3 = *(uint *)(*(longlong *)
                       ((pFVar6->Primitives).AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
                     0x18c);
    if ((pFVar16[0x14] == (FScriptContainerElement)0x2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar12 = (ulonglong)(int)*(uint *)(pFVar16 + 0x18);
    lVar14 = uVar12 * 0xa0;
    while( true ) {
      if ((pFVar16[0x1c] == (FScriptContainerElement)0x2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = (uint)uVar12;
      if ((int)*(uint *)(pFVar16 + 0x20) <= (int)uVar13) break;
      uVar10 = 0;
      if ((int)uVar13 < (this->RayTracingInstanceCollector).RayTracingGeometriesToUpdate.ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar15 = (FRayTracingDynamicGeometryUpdateParams *)
                ((longlong)
                 &(((FRayTracingDynamicGeometryUpdateParams *)
                   (&(((this->RayTracingInstanceCollector).RayTracingGeometriesToUpdate.
                       AllocatorInstance.Data)->Params).WorldToInstance + -1))->MeshBatches).
                  AllocatorInstance.Data + lVar14);
      uVar10 = *(uint *)&pFVar15[1].MeshBatches.AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar10 < (this->Views).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryToUpdate
                (this_02,(FRHICommandListBase *)this->RHICmdList,this->Scene,
                 (FSceneView *)(this->Views).DataPtr[(int)uVar10],pFVar7,pFVar15,uVar3);
      uVar12 = (ulonglong)(uVar13 + 1);
      lVar14 = lVar14 + 0xa0;
    }
    uVar12 = (ulonglong)local_res20;
    pFVar16 = pFVar16 + 0x24;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// GatherDynamicRayTracingInstances @ 145322000

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
RayTracing::FDynamicRayTracingInstancesContext::GatherDynamicRayTracingInstances
          (FDynamicRayTracingInstancesContext *this,
          TArrayView<RayTracing::FDynamicPrimitiveIndex_const_,int> *param_1)

{
  int *piVar1;
  TArray<RayTracing::FDynamicPrimitiveIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  FDynamicPrimitiveIndex *pFVar3;
  int iVar4;
  FDynamicPrimitiveIndex FVar5;
  FScene *pFVar6;
  FDynamicPrimitiveIndex *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FDynamicPrimitiveIndex *_Src;
  uint uVar11;
  bool bVar12;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId704,"RayTracing_GatherDynamicRayTracingInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
               ,0x2c0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId704);
  }
  iVar10 = param_1->ArrayNum;
  iVar4 = (this->DynamicRayTracingPrimitives).ArrayNum;
  uVar11 = iVar4 + iVar10;
  if (-1 < (int)uVar11) {
    if ((this->DynamicRayTracingPrimitives).ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x24,4,uVar11,&(this->DynamicRayTracingPrimitives).AllocatorInstance,iVar4,
                 &(this->DynamicRayTracingPrimitives).ArrayMax);
    }
    _Src = param_1->DataPtr;
    bVar9 = IsParallelGatherDynamicRayTracingInstancesEnabled();
    if (bVar9) {
      pFVar3 = _Src + iVar10;
      for (; _Src != pFVar3; _Src = _Src + 1) {
        pFVar6 = this->Scene;
        FVar5 = *_Src;
        if (((pFVar6->PrimitiveSceneProxies).ArrayNum <= (int)((uint)FVar5 & 0xffffff)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(byte *)(*(longlong *)
                        ((pFVar6->PrimitiveSceneProxies).AllocatorInstance.Data +
                        (ulonglong)((uint)FVar5 & 0xffffff) * 8) + 0x7c) & 2) == 0) {
          pTVar2 = &this->RenderThreadDynamicPrimitives;
          pFVar7 = (FDynamicPrimitiveIndex *)(pTVar2->AllocatorInstance).Data;
          if (((pFVar7 <= _Src) && (_Src < pFVar7 + (this->RenderThreadDynamicPrimitives).ArrayMax))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = (this->RenderThreadDynamicPrimitives).ArrayNum;
          piVar1 = &(this->RenderThreadDynamicPrimitives).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->RenderThreadDynamicPrimitives).ArrayNum = iVar10 + 1;
          *(FDynamicPrimitiveIndex *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) =
               *_Src;
        }
        else {
          GatherDynamicRayTracingInstances_Internal(this,_Src);
        }
      }
    }
    else {
      iVar4 = (this->RenderThreadDynamicPrimitives).ArrayMax;
      piVar1 = &(this->RenderThreadDynamicPrimitives).ArrayMax;
      (this->RenderThreadDynamicPrimitives).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar10,iVar4,&(this->RenderThreadDynamicPrimitives).AllocatorInstance,iVar10,
                   piVar1);
        if (iVar10 != 0) {
          memcpy((this->RenderThreadDynamicPrimitives).AllocatorInstance.Data,_Src,
                 (longlong)iVar10 << 2);
        }
      }
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
}

// GatherDynamicRayTracingInstances_Internal @ 145322260

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
RayTracing::FDynamicRayTracingInstancesContext::GatherDynamicRayTracingInstances_Internal
          (FDynamicRayTracingInstancesContext *this,FDynamicPrimitiveIndex *param_1)

{
  int *piVar1;
  FDynamicPrimitiveIndex FVar2;
  FScene *pFVar3;
  FPrimitiveSceneProxy *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  TArray<RayTracing::FDynamicRayTracingPrimitive,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined4 local_68;
  uint uStack_60;
  undefined4 local_58;
  uint uStack_50;
  uint local_48;
  undefined4 uStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  
  pFVar3 = this->Scene;
  FVar2 = *param_1;
  if ((pFVar3->PrimitiveSceneProxies).ArrayNum <= (int)((uint)FVar2 & 0xffffff)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = *(FPrimitiveSceneProxy **)
            ((pFVar3->PrimitiveSceneProxies).AllocatorInstance.Data +
            (ulonglong)((uint)FVar2 & 0xffffff) * 8);
  if ((this->Scene->Primitives).ArrayNum <= (int)((uint)*param_1 & 0xffffff)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FMeshElementCollector::SetPrimitive
            ((FMeshElementCollector *)&this->RayTracingInstanceCollector,pFVar4,
             &FHitProxyId::InvisibleHitProxyId);
  FRayTracingInstanceCollector::SetVisibilityMap
            (&this->RayTracingInstanceCollector,(uint)param_1->ViewMask);
  iStack_40 = (this->RayTracingInstanceCollector).RayTracingInstances.ArrayNum;
  iStack_30 = (this->RayTracingInstanceCollector).RayTracingGeometriesToUpdate.ArrayNum;
  if ((this->bAnyViewRequiresTranslucentGeometry != false) || (pFVar4->bOpaqueOrMasked != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4,&this->RayTracingInstanceCollector);
  }
  local_48 = (uint)*param_1 & 0xffffff;
  local_68 = CONCAT31(local_68._1_3_,1);
  iStack_38 = (this->RayTracingInstanceCollector).RayTracingInstances.ArrayNum;
  iStack_28 = (this->RayTracingInstanceCollector).RayTracingGeometriesToUpdate.ArrayNum;
  pTVar10 = &this->DynamicRayTracingPrimitives;
  uStack_60 = uStack_60 & 0xffffff00;
  pFVar5 = (pTVar10->AllocatorInstance).Data;
  local_58 = CONCAT31(local_58._1_3_,1);
  uStack_50 = uStack_50 & 0xffffff00;
  uStack_44 = local_68;
  uStack_3c = uStack_60;
  uStack_34 = local_58;
  uStack_2c = uStack_50;
  if ((pFVar5 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar5 + (longlong)(this->DynamicRayTracingPrimitives).ArrayMax * 0x24)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->DynamicRayTracingPrimitives).ArrayNum;
  piVar1 = &(this->DynamicRayTracingPrimitives).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x424,&pTVar10->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar8;
  (this->DynamicRayTracingPrimitives).ArrayNum = iVar8 + 1;
  pFVar5 = (pTVar10->AllocatorInstance).Data;
  *(ulonglong *)(pFVar5 + lVar9 * 0x24) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar5 + lVar9 * 0x24 + 8) = CONCAT44(uStack_3c,iStack_40);
  *(ulonglong *)(pFVar5 + lVar9 * 0x24 + 0x10) = CONCAT44(uStack_34,iStack_38);
  *(ulonglong *)(pFVar5 + lVar9 * 0x24 + 0x18) = CONCAT44(uStack_2c,iStack_30);
  *(int *)(pFVar5 + lVar9 * 0x24 + 0x20) = iStack_28;
  return;
}

// GatherDynamicRayTracingInstances_RenderThread @ 1453224b0

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
RayTracing::FDynamicRayTracingInstancesContext::GatherDynamicRayTracingInstances_RenderThread
          (FDynamicRayTracingInstancesContext *this)

{
  int *piVar1;
  FDynamicPrimitiveIndex *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FDynamicPrimitiveIndex *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId733,
               "RayTracing_GatherDynamicRayTracingInstances_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
               ,0x2dd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId733);
  }
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracing.cpp"
                         ,0x2df,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar6 = (FDynamicPrimitiveIndex *)(this->RenderThreadDynamicPrimitives).AllocatorInstance.Data;
  iVar3 = (this->RenderThreadDynamicPrimitives).ArrayNum;
  pFVar2 = pFVar6 + iVar3;
  while( true ) {
    if ((this->RenderThreadDynamicPrimitives).ArrayNum != iVar3) {
      `TCheckedPointerIterator<RayTracing::FDynamicPrimitiveIndex,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    GatherDynamicRayTracingInstances_Internal(this,pFVar6);
    pFVar6 = pFVar6 + 1;
  }
  piVar1 = &(this->RenderThreadDynamicPrimitives).ArrayMax;
  (this->RenderThreadDynamicPrimitives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->RenderThreadDynamicPrimitives).AllocatorInstance,0,piVar1);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1504cd410

bool __thiscall
`RayTracing::FDynamicRayTracingInstancesContext::AddInstancesToScene'::__l14::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4837818589182428012>);
  if (bVar2) {
    FDebugName::ToString((FDebugName *)(**(longlong **)this + 200),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4837818589182428012>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504cd4a0;
    }
  }
  bVar2 = false;
LAB_1504cd4a0:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504cd4d0

bool __thiscall
`RayTracing::FDynamicRayTracingInstancesContext::AddInstancesToScene'::__l23::<lambda_3>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_28;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4837818589182428035>);
  if (bVar3) {
    lVar1 = *(longlong *)((longlong)this + 8);
    if (*(int *)(lVar1 + 0x10) != 0) {
      if ((*(int *)(lVar1 + 0x20) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("MaterialsView.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\RayTracingInstance.h"
                             ,0x27,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((*(int *)(lVar1 + 0x10) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FDebugName::ToString((FDebugName *)(**(longlong **)this + 200),&local_28);
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4837818589182428035>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504cd5e4;
    }
  }
  bVar3 = false;
LAB_1504cd5e4:
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}


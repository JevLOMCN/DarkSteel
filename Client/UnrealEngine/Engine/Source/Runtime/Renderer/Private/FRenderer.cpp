// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 42

// ~FRenderer @ 1447f69c0

void __thiscall Froxel::FRenderer::~FRenderer(FRenderer *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Views).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 1447f9ad0

FRenderer * __thiscall Froxel::FRenderer::operator=(FRenderer *this,FRenderer *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->Views).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Views).AllocatorInstance.Data = (param_1->Views).AllocatorInstance.Data;
    (param_1->Views).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Views).ArrayNum = (param_1->Views).ArrayNum;
    (this->Views).ArrayMax = (param_1->Views).ArrayMax;
    (param_1->Views).ArrayNum = 0;
    (param_1->Views).ArrayMax = 0;
  }
  return this;
}

// FRenderer @ 14485d130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

FRenderer * __thiscall
Froxel::FRenderer::FRenderer
          (FRenderer *this,bool param_1,FRDGBuilder *param_2,
          TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *pTVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FRDGBuilder *pFVar4;
  FViewInfo *pFVar5;
  int iVar6;
  FRDGBuffer *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  FViewInfo *pFVar10;
  undefined1 local_res10 [8];
  FRDGBuilder *local_res18;
  FRDGBufferDesc local_188;
  undefined4 local_170;
  uint uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  TIntVector3<int>_u_0 local_158;
  FMemStackBase *local_148;
  FRDGBuffer *local_140;
  FViewInfo *local_138;
  TVector4<float>_u_0 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FRenderer *local_c8;
  FRDGBuffer *pFStack_c0;
  FRDGBuffer *local_b8;
  undefined8 uStack_b0;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  (this->Views).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Views).ArrayNum = 0;
  (this->Views).ArrayMax = 0;
  if (param_1) {
    uVar2 = param_3->ArrayNum;
    uVar9 = (ulonglong)(int)uVar2;
    pFVar10 = (FViewInfo *)(param_3->AllocatorInstance).Data;
    local_138 = pFVar10 + uVar9;
    local_res18 = param_2;
    while( true ) {
      pFVar5 = local_138;
      if (param_3->ArrayNum != (int)uVar9) {
        `TCheckedPointerIterator<FViewInfo_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar10 == pFVar5) break;
      MakeSharedParameters((FSharedParameters *)&local_128._s_0,pFVar10);
      uStack_16c = (*(int *)((longlong)&(pFVar10->ViewRect).field0_0x0 + 0xc) -
                   *(int *)((longlong)&(pFVar10->ViewRect).field0_0x0 + 4)) *
                   (*(int *)((longlong)&(pFVar10->ViewRect).field0_0x0 + 8) -
                   *(int *)&(pFVar10->ViewRect).field0_0x0);
      uStack_164 = local_188._12_4_;
      local_170 = 8;
      uStack_168 = 0x10109;
      local_188.BytesPerElement = 8;
      local_188.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_160 = 0;
      local_188.Metadata = (FShaderParametersMetadata *)0x0;
      local_188.NumElements = uStack_16c;
      FRDGUserValidation::ValidateCreateBuffer
                (&param_2->UserValidation,&local_188,L"r.Froxels",None);
      pTVar1 = &param_2->Buffers;
      if (local_188.BytesPerElement == 0) {
        local_188.BytesPerElement = 1;
      }
      if (local_188.NumElements == 0) {
        local_188.NumElements = 1;
      }
      local_148 = (FMemStackBase *)&param_2->_padding_;
      pFVar7 = FMemStackBase::Alloc(local_148,0x130,8);
      pFVar7 = FRDGBuffer::FRDGBuffer(pFVar7,L"r.Froxels",&local_188,None);
      iVar6 = (param_2->Buffers).Array.ArrayNum;
      local_140 = pFVar7;
      if (iVar6 == (param_2->Buffers).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                          (0x808,(ForElementType<FRDGBuffer_*> *)pTVar1,
                           &(param_2->Buffers).Array.ArrayMax);
      }
      (param_2->Buffers).Array.ArrayNum = iVar6 + 1;
      (pTVar1->Array).AllocatorInstance.Data[iVar6] = pFVar7;
      (pFVar7->Handle).Index = (param_2->Buffers).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateBuffer(&local_res18->UserValidation,pFVar7);
      FRDGTrace::AddResource(&local_res18->Trace,(FRDGViewableResource *)pFVar7);
      uStack_164 = local_188._12_4_;
      local_170 = 4;
      uStack_16c = 4;
      uStack_168 = 0x4189;
      local_188.BytesPerElement = 4;
      local_188.NumElements = 4;
      local_188.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
      local_160 = 0;
      local_188.Metadata = (FShaderParametersMetadata *)0x0;
      FRDGUserValidation::ValidateCreateBuffer
                (&local_res18->UserValidation,&local_188,L"r.FroxelArgs",None);
      if (local_188.BytesPerElement == 0) {
        local_188.BytesPerElement = 1;
      }
      if (local_188.NumElements == 0) {
        local_188.NumElements = 1;
      }
      pFVar7 = FMemStackBase::Alloc(local_148,0x130,8);
      pFVar7 = FRDGBuffer::FRDGBuffer(pFVar7,L"r.FroxelArgs",&local_188,None);
      iVar6 = (param_2->Buffers).Array.ArrayNum;
      if (iVar6 == (param_2->Buffers).Array.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                          (0x808,(ForElementType<FRDGBuffer_*> *)pTVar1,
                           &(param_2->Buffers).Array.ArrayMax);
      }
      pFVar4 = local_res18;
      (param_2->Buffers).Array.ArrayNum = iVar6 + 1;
      (pTVar1->Array).AllocatorInstance.Data[iVar6] = pFVar7;
      (pFVar7->Handle).Index = (param_2->Buffers).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateBuffer(&local_res18->UserValidation,pFVar7);
      FRDGTrace::AddResource(&pFVar4->Trace,(FRDGViewableResource *)pFVar7);
      local_158._s_0.Y = 1;
      local_158._s_0.Z = 1;
      local_158._s_0.X = 0;
      AddClearIndirectDispatchArgsPass
                (pFVar4,(Type)pFVar10->_padding_,pFVar7,(TIntVector3<int> *)&local_158._s_0,1,4);
      pFStack_c0 = local_140;
      iVar6 = (this->Views).ArrayNum;
      local_48 = 0;
      local_c8 = this;
      local_b8 = pFVar7;
      if (iVar6 == (this->Views).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1090,(ForAnyElementType *)this,&(this->Views).ArrayMax);
      }
      (this->Views).ArrayNum = iVar6 + 1;
      lVar8 = (longlong)iVar6;
      pFVar3 = (this->Views).AllocatorInstance.Data;
      pFVar10 = pFVar10 + 1;
      *(FRenderer **)(pFVar3 + lVar8 * 0x90) = local_c8;
      *(FRDGBuffer **)(pFVar3 + lVar8 * 0x90 + 8) = pFStack_c0;
      *(FRDGBuffer **)(pFVar3 + lVar8 * 0x90 + 0x10) = local_b8;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x10 + 8) = uStack_b0;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x20) = local_128._0_8_;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x20 + 8) = local_128._8_8_;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x30) = local_118;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x30 + 8) = uStack_110;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x40) = local_108;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x40 + 8) = uStack_100;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x50) = local_f8;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x50 + 8) = uStack_f0;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x60) = local_e8;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x60 + 8) = uStack_e0;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x70) = local_d8;
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x70 + 8) = uStack_d0;
      *(ulonglong *)(pFVar3 + lVar8 * 0x90 + 0x80) = CONCAT44(uStack_44,local_48);
      *(undefined8 *)(pFVar3 + lVar8 * 0x90 + 0x80 + 8) = uStack_40;
      uVar9 = (ulonglong)uVar2;
      param_2 = pFVar4;
    }
  }
  return this;
}

// UpdateSceneUniformBuffer @ 144ab7420

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
RenderCurve::FRenderCurveSceneExtension::FRenderer::UpdateSceneUniformBuffer
          (FRenderer *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  FShaderParametersMetadata *pFVar1;
  FRenderCurveSceneParameters local_28;
  
  local_28.RenderCurveInstanceData = (FRDGBufferSRV *)0x0;
  local_28.ClusterData = (FRDGBufferSRV *)0x0;
  FinishBufferUpload(this->SceneData,param_1,&local_28);
  pFVar1 = FRenderCurveSceneParameters::FTypeInfo::GetStructMetadata();
  FSceneUniformBuffer::Set(param_2,SceneUB::RenderCurve._32_4_,&local_28,pFVar1->Size);
  return;
}

// FRenderer @ 144f6ba90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRenderer * __thiscall
Nanite::FRenderer::FRenderer
          (FRenderer *this,FRDGBuilder *param_1,FScene *param_2,FViewInfo *param_3,
          TRDGUniformBuffer<FSceneUniformParameters> **param_4,FSharedContext *param_5,
          FRasterContext *param_6,FConfiguration *param_7,TIntRect<int> *param_8,
          FRDGTexture *param_9,FVirtualShadowMapArray *param_10)

{
  ulonglong uVar1;
  float fVar2;
  char cVar3;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar4;
  FRDGBuilder *pFVar5;
  FVirtualShadowMapArray *pFVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<float> *pTVar9;
  FRasterContext *pFVar10;
  bool bVar11;
  EShaderPlatform EVar12;
  uint uVar13;
  FRDGScope *this_00;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_NaniteCullingContexts> FVar15;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FRenderer *pFVar16;
  longlong lVar17;
  FRDGBuffer *pFVar18;
  uint uVar19;
  undefined4 uStack_1dc;
  FStatMessage local_1d0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1c0;
  char local_1b0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_> local_1a8;
  FRDGBufferDesc local_198;
  FRDGBufferDesc local_180;
  FRDGBufferDesc local_168;
  FRDGBufferDesc local_150;
  FRDGBufferDesc local_138;
  FRDGBufferDesc local_120;
  FRDGBufferDesc local_108;
  FRDGBufferDesc local_f0;
  FRDGBufferDesc local_d8;
  FRDGBufferDesc local_c0;
  FRDGBufferDesc local_a8;
  FRDGBufferDesc local_90;
  FRDGBufferDesc local_78;
  uint uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  pFVar10 = param_6;
  this->GraphBuilder = param_1;
  this->Scene = param_2;
  this->SceneView = param_3;
  *(undefined ***)this = &___7FRenderer_Nanite__6B_;
  pTVar4 = *param_4;
  this->SharedContext = param_5;
  this->VirtualShadowMapArray = param_10;
  this->SceneUniformBuffer = pTVar4;
  this->RasterContext = param_6;
  this->Configuration = *param_7;
  this->DrawPassIndex = 0;
  this->RenderFlags = 0;
  this->DebugFlags = 0;
  this->bMultiView = false;
  this->PrevHZB = param_9;
  (this->HZBBuildViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_8->field0_0x0)._s_0.Min.field0_0x0;
  (this->HZBBuildViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_8->field0_0x0)._s_0.Max.field0_0x0;
  this->MainRasterizeArgsSWHW = (FRDGBuffer *)0x0;
  this->PostRasterizeArgsSWHW = (FRDGBuffer *)0x0;
  this->SafeMainRasterizeArgsSWHW = (FRDGBuffer *)0x0;
  this->SafePostRasterizeArgsSWHW = (FRDGBuffer *)0x0;
  this->ClusterCountSWHW = (FRDGBuffer *)0x0;
  this->ClusterClassifyArgs = (FRDGBuffer *)0x0;
  this->QueueState = (FRDGBuffer *)0x0;
  this->VisibleClustersSWHW = (FRDGBuffer *)0x0;
  this->OccludedInstances = (FRDGBuffer *)0x0;
  this->OccludedInstancesArgs = (FRDGBuffer *)0x0;
  this->TotalPrevDrawClustersBuffer = (FRDGBuffer *)0x0;
  this->StreamingRequests = (FRDGBuffer *)0x0;
  this->AssemblyTransformsBuffer = (FRDGBuffer *)0x0;
  this->AssemblyMetaBuffer = (FRDGBuffer *)0x0;
  (this->CullingParameters).HZBTextureArray = (FRDGTexture *)0x0;
  (this->CullingParameters).HZBTexture = (FRDGTexture *)0x0;
  (this->CullingParameters).HZBSampler = (FRHISamplerState *)0x0;
  (this->CullingParameters).InViews = (FRDGBufferSRV *)0x0;
  *(undefined8 *)&(this->VirtualTargetParameters).VirtualShadowMap = 0;
  (this->VirtualTargetParameters).VirtualShadowMap.field_0x8 = 1;
  (this->VirtualTargetParameters).HZBPageTable = (FRDGTexture *)0x0;
  (this->VirtualTargetParameters).HZBPageRectBounds = (FRDGBufferSRV *)0x0;
  (this->VirtualTargetParameters).HZBPageFlags = (FRDGTexture *)0x0;
  (this->VirtualTargetParameters).OutDirtyPageFlags = (FRDGBufferUAV *)0x0;
  (this->InstanceHierarchyDriver).bIsEnabled = false;
  (this->InstanceHierarchyDriver).bAllowStaticGeometryPath = true;
  (this->InstanceHierarchyDriver).GroupWorkArgsMaxCount = 0;
  (this->InstanceHierarchyDriver).ShaderParameters.InstanceHierarchyCellBlockData =
       (FRDGBufferSRV *)0x0;
  (this->InstanceHierarchyDriver).ShaderParameters.InstanceHierarchyCellHeaders =
       (FRDGBufferSRV *)0x0;
  (this->InstanceHierarchyDriver).ShaderParameters.InstanceHierarchyItemChunks =
       (FRDGBufferSRV *)0x0;
  (this->InstanceHierarchyDriver).ShaderParameters.InstanceIds = (FRDGBufferSRV *)0x0;
  (this->InstanceHierarchyDriver).ShaderParameters.ExplicitChunkBounds = (FRDGBufferSRV *)0x0;
  (this->InstanceHierarchyDriver).ShaderParameters.ExplicitChunkCellIds = (FRDGBufferSRV *)0x0;
  (this->InstanceHierarchyDriver).ShaderParameters.UsedChunkIdMask = (FRDGBufferSRV *)0x0;
  (this->InstanceHierarchyDriver).ViewDrawRangesRDG = (FRDGBuffer *)0x0;
  (this->InstanceHierarchyDriver).InstanceWorkGroupsRDG = (FRDGBuffer *)0x0;
  (this->InstanceHierarchyDriver).OccludedChunkArgsRDG = (FRDGBuffer *)0x0;
  (this->InstanceHierarchyDriver).OccludedChunkDrawsRDG = (FRDGBuffer *)0x0;
  (this->InstanceHierarchyDriver).ChunkDrawViewGroupIdsRDG = (FRDGBuffer *)0x0;
  this->ViewsBuffer = (FRDGBuffer *)0x0;
  this->InstanceDrawsBuffer = (FRDGBuffer *)0x0;
  this->PrimitiveFilterBuffer = (FRDGBuffer *)0x0;
  this->HiddenPrimitivesBuffer = (FRDGBuffer *)0x0;
  this->ShowOnlyPrimitivesBuffer = (FRDGBuffer *)0x0;
  this->RasterBinMetaBuffer = (FRDGBuffer *)0x0;
  this->CandidateNodesBuffer = (FRDGBuffer *)0x0;
  this->CandidateClustersBuffer = (FRDGBuffer *)0x0;
  this->ClusterBatchesBuffer = (FRDGBuffer *)0x0;
  this->ClusterIndirectArgsBuffer = (FRDGBuffer *)0x0;
  this->ClusterStatsBuffer = (FRDGBuffer *)0x0;
  this->StatsBuffer = (FRDGBuffer *)0x0;
  this->StatsBufferSkipBarrierUAV = (FRDGBufferUAV *)0x0;
  (this->InstanceHierarchyDriver).DeferredSetupContext = (FDeferredSetupContext *)0x0;
  this->ExplicitChunkDrawInfo = (FExplicitChunkDrawInfo *)0x0;
  FLLMScope::FLLMScope
            ((FLLMScope *)&param_4,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  param_6 = (FRasterContext *)LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope((FMemScope *)&param_7,(FName *)&param_6,true);
  local_1b0 = '\0';
  cVar3 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((this->GraphBuilder->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_50 = 0;
        uStack_4c = 0;
        ::Desc._12_8_ = ZEXT48(uStack_54);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_Nanite__InitCon;
        ::Desc._padding_ = (longlong)u_Nanite__InitCon;
        ::Desc._padding_._0_4_ = 0xeeb;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```Nanite::FRenderer::FRenderer'::__l8::Desc::operator()<>'::__l3::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pFVar5 = this->GraphBuilder;
    local_1a8._Myfirst._Val = &::Desc;
    local_1c0.State = (FRDGScopeState *)pFVar5;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar5->_padding_,(FRDGScope **)pFVar5);
    ((FState *)&pFVar5->_padding_)->Current = this_00;
    local_1c0.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)pFVar5,&local_1a8);
    if (*(bool *)((longlong)&pFVar5->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar5->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar5->_padding_);
    }
    local_1b0 = '\x01';
  }
  pFVar6 = (FVirtualShadowMapArray *)param_5;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar15 = StatPtr_STAT_NaniteCullingContexts;
    if (StatPtr_STAT_NaniteCullingContexts ==
        (FThreadSafeStaticStat<FStat_STAT_NaniteCullingContexts>)0x0) {
      pFVar14 = ::FName::FName((FName *)&param_9,"STAT_NaniteCullingContexts");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_NaniteCullingContexts>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NaniteCullingContexts,*pFVar14,
                          L"CullingContexts","STATGROUP_Nanite","STATCAT_Advanced",L"Nanite",true,
                          true,ST_int64,false,false,MCR_Invalid);
    }
    pFVar6 = *(FVirtualShadowMapArray **)FVar15;
    uVar19 = (uint)((ulonglong)pFVar6 >> 0x20);
    if (((pFVar6 != (FVirtualShadowMapArray *)0x0) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      param_5._0_4_ = (uint)pFVar6;
      param_5._4_4_ = uVar19;
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_1d0.NameAndInfo.Number = uVar19 & 0xffffafff | 0xa000;
      local_1d0.StatData.Pad[0] = '\x01';
      local_1d0.StatData.Pad[1] = '\0';
      local_1d0.StatData.Pad[2] = '\0';
      local_1d0.StatData.Pad[3] = '\0';
      local_1d0.StatData.Pad[4] = '\0';
      local_1d0.StatData.Pad[5] = '\0';
      local_1d0.StatData.Pad[6] = '\0';
      local_1d0.StatData.Pad[7] = '\0';
      param_10 = pFVar6;
      local_1d0.NameAndInfo.Index.Value = (uint)pFVar6;
      FThreadStats::AddStatMessage(this_01,&local_1d0);
      FStatsTrace::Add((FName *)&param_10,1);
      pFVar6 = (FVirtualShadowMapArray *)CONCAT44(param_5._4_4_,(uint)param_5);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
        pFVar6 = (FVirtualShadowMapArray *)CONCAT44(param_5._4_4_,(uint)param_5);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
        pFVar6 = (FVirtualShadowMapArray *)CONCAT44(param_5._4_4_,(uint)param_5);
      }
    }
  }
  param_5 = (FSharedContext *)pFVar6;
  EVar12 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
  if ((this->PrevHZB == (FRDGTexture *)0x0) || (GNaniteCullingTwoPass == 0)) {
    (this->Configuration).bTwoPassOcclusion = 0;
  }
  if (this->RasterContext->RasterScheduling == HardwareOnly) {
    (this->Configuration).bForceHWRaster = 1;
  }
  pTVar8 = CVarNaniteProgrammableRaster.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar8->ShadowedValue[1] == 0) {
    (&this->Configuration)->bDisableProgrammable = 1;
  }
  uVar19 = *(uint *)&this->Configuration;
  uVar19 = (((uVar19 >> 10 & 0x20 | uVar19 & 0x4000) >> 1 | uVar19 & 0x1000) >> 1 | uVar19 & 0x10)
           >> 3 | ((((uVar19 & 4) << 10 | uVar19 & 0x800) << 2 | uVar19 & 2) << 2 | uVar19 & 0x400)
                  * 2 | uVar19 >> 2 & 0xe0 | this->RenderFlags;
  this->RenderFlags = uVar19;
  this->RenderFlags = -(uint)(GNaniteShowStats != 0) & 0x8000 | uVar19;
  bVar11 = UseMeshShader(EVar12,this->SharedContext->Pipeline);
  pTVar8 = CVarNanitePrimShaderRasterization.Ref;
  if (bVar11) {
    this->RenderFlags = this->RenderFlags | 8;
  }
  else {
    bVar11 = IsInParallelGameThread();
    if (bVar11) {
LAB_144f6c03a:
      lVar17 = 0;
    }
    else {
      bVar11 = IsInGameThread();
      lVar17 = 4;
      if (bVar11) goto LAB_144f6c03a;
    }
    if ((*(int *)((longlong)pTVar8->ShadowedValue + lVar17) != 0) &&
       (GRHIGlobals.SupportsPrimitiveShaders != false)) {
      this->RenderFlags = this->RenderFlags | 4;
    }
  }
  pTVar8 = CVarNaniteVSMInvalidateOnLODDelta.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar8->ShadowedValue[1] != 0) {
    this->RenderFlags = this->RenderFlags | 0x4000;
  }
  pTVar8 = CVarNaniteCullingFrustum.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar8->ShadowedValue[1] == 0) {
    this->DebugFlags = this->DebugFlags | 2;
  }
  pTVar8 = CVarNaniteCullingHZB.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar8->ShadowedValue[1] == 0) {
    this->DebugFlags = this->DebugFlags | 1;
  }
  pTVar8 = CVarNaniteCullingGlobalClipPlane.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar8->ShadowedValue[1] == 0) {
    this->DebugFlags = this->DebugFlags | 8;
  }
  pTVar8 = CVarNaniteCullingDrawDistance.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar8->ShadowedValue[1] == 0) {
    this->DebugFlags = this->DebugFlags | 4;
  }
  pTVar8 = CVarNaniteCullingMinLOD.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar8->ShadowedValue[1] == 0) {
    this->DebugFlags = this->DebugFlags | 0x10;
  }
  pTVar8 = CVarNaniteCullingWPODisableDistance.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar8->ShadowedValue[1] == 0) {
    this->DebugFlags = this->DebugFlags | 0x20;
  }
  pTVar8 = CVarNaniteCullingShowAssemblyParts.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  if (pTVar8->ShadowedValue[1] == 0) {
    this->DebugFlags = this->DebugFlags | 0x200;
  }
  if ((this->Configuration).bDrawOnlyRootGeometry != 0) {
    this->DebugFlags = this->DebugFlags | 0x100;
  }
  if (pFVar10->bEnableAssemblyMeta != false) {
    this->DebugFlags = this->DebugFlags | 0x400;
  }
  pTVar9 = CVarNaniteOccludedInstancesBufferSizeMultiplier.Ref;
  bVar11 = IsInParallelRenderingThread();
  if (!bVar11) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  fVar2 = pTVar9->ShadowedValue[1];
  uVar19 = FGPUScene::GetInstanceIdUpperBoundGPU(&this->Scene->GPUScene);
  if (uVar19 < 0x20000) {
    uVar19 = 0x20000;
  }
  uVar13 = 1;
  if (uVar19 != 0) {
    uVar13 = uVar19;
  }
  uVar1 = (ulonglong)(uVar13 - 1) * 2 + 1;
  lVar17 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  param_5._0_4_ = (uint)lVar17;
  uVar19 = FGlobalResources::GetMaxVisibleClusterSize();
  (this->PageConstants).field0_0x0._s_0.X = 0;
  (this->PageConstants).field0_0x0._s_0.Y = GStreamingManager._956_4_;
  local_198.BytesPerElement = 0x30;
  local_198.NumElements = 1;
  local_198._12_4_ = uStack_1dc;
  local_198.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_198.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar18 = FRDGBuilder::CreateBuffer(this->GraphBuilder,&local_198,L"Nanite.QueueState",None);
  pFVar5 = this->GraphBuilder;
  this->QueueState = pFVar18;
  uVar13 = FGlobalResources::GetMaxVisibleClusters();
  if ((uVar13 * uVar19 & 3) != 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumBytes % 4 == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                        ,0x3af,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar16 = (FRenderer *)(*pcVar7)();
      return pFVar16;
    }
  }
  local_180.NumElements = uVar13 * uVar19 >> 2;
  local_180.BytesPerElement = 4;
  local_180._12_4_ = uStack_1dc;
  local_180.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_180.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar18 = FRDGBuilder::CreateBuffer(pFVar5,&local_180,L"Nanite.VisibleClustersSWHW",None);
  local_168.BytesPerElement = 4;
  local_168.NumElements = 8;
  local_168._12_4_ = uStack_1dc;
  local_168.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  this->VisibleClustersSWHW = pFVar18;
  local_168.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar18 = FRDGBuilder::CreateBuffer
                      (this->GraphBuilder,&local_168,L"Nanite.MainRasterizeArgsSWHW",None);
  local_150.BytesPerElement = 4;
  local_150.NumElements = 8;
  local_150._12_4_ = uStack_1dc;
  local_150.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  this->MainRasterizeArgsSWHW = pFVar18;
  local_150.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar18 = FRDGBuilder::CreateBuffer
                      (this->GraphBuilder,&local_150,L"Nanite.SafeMainRasterizeArgsSWHW",None);
  this->SafeMainRasterizeArgsSWHW = pFVar18;
  bVar11 = NaniteAssembliesSupported();
  pFVar5 = this->GraphBuilder;
  if (bVar11) {
    uVar19 = FGlobalResources::GetMaxVisibleAssemblyParts();
    local_138.Metadata = (FShaderParametersMetadata *)0x0;
    local_138.NumElements = uVar19 * 0x30 >> 2;
    local_138.BytesPerElement = 4;
    local_138._12_4_ = uStack_1dc;
    local_138.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    pFVar18 = FRDGBuilder::CreateBuffer(pFVar5,&local_138,L"Nanite.AssemblyTransforms",None);
    this->AssemblyTransformsBuffer = pFVar18;
    if (pFVar10->bEnableAssemblyMeta == false) goto LAB_144f6c584;
    pFVar5 = this->GraphBuilder;
    uVar19 = FGlobalResources::GetMaxVisibleAssemblyParts();
    local_120.Metadata = (FShaderParametersMetadata *)0x0;
    local_120._0_8_ = CONCAT44(uVar19,4) & 0x3fffffffffffffff;
    local_120._12_4_ = uStack_1dc;
    local_120.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    pFVar18 = FRDGBuilder::CreateBuffer(pFVar5,&local_120,L"Nanite.AssemblyMetaData",None);
  }
  else {
    pFVar18 = FSystemTextures::GetDefaultByteAddressBuffer
                        ((FSystemTextures *)&GSystemTextures,pFVar5,0x30);
    this->AssemblyTransformsBuffer = pFVar18;
    pFVar18 = FSystemTextures::GetDefaultByteAddressBuffer
                        ((FSystemTextures *)&GSystemTextures,this->GraphBuilder,4);
  }
  this->AssemblyMetaBuffer = pFVar18;
LAB_144f6c584:
  if ((this->Configuration).bTwoPassOcclusion != 0) {
    local_108.NumElements = (uint)(longlong)((float)(uint)(1 << ((byte)lVar17 & 0x1f)) * fVar2);
    local_108.BytesPerElement = 8;
    local_108._12_4_ = uStack_1dc;
    local_108.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_108.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar18 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_108,L"Nanite.OccludedInstances",None);
    local_f0.BytesPerElement = 4;
    local_f0.NumElements = 4;
    local_f0._12_4_ = uStack_1dc;
    local_f0.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    this->OccludedInstances = pFVar18;
    local_f0.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar18 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_f0,L"Nanite.OccludedInstancesArgs",None);
    local_d8.BytesPerElement = 4;
    local_d8.NumElements = 8;
    local_d8._12_4_ = uStack_1dc;
    local_d8.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    this->OccludedInstancesArgs = pFVar18;
    local_d8.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar18 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_d8,L"Nanite.PostRasterizeArgsSWHW",None);
    local_c0.BytesPerElement = 4;
    local_c0.NumElements = 8;
    local_c0._12_4_ = uStack_1dc;
    local_c0.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    this->PostRasterizeArgsSWHW = pFVar18;
    local_c0.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar18 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_c0,L"Nanite.SafePostRasterizeArgsSWHW",None);
    this->SafePostRasterizeArgsSWHW = pFVar18;
  }
  local_a8.BytesPerElement = 8;
  local_a8.NumElements = 1;
  local_a8._12_4_ = uStack_1dc;
  local_a8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_a8.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar18 = FRDGBuilder::CreateBuffer(this->GraphBuilder,&local_a8,L"Nanite.SWHWClusterCount",None);
  local_90.BytesPerElement = 0xc;
  local_90.NumElements = 1;
  local_90._12_4_ = uStack_1dc;
  local_90.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  this->ClusterCountSWHW = pFVar18;
  local_90.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar18 = FRDGBuilder::CreateBuffer
                      (this->GraphBuilder,&local_90,L"Nanite.ClusterClassifyArgs",None);
  this->ClusterClassifyArgs = pFVar18;
  pFVar18 = FStreamingManager::GetStreamingRequestsBuffer
                      ((FStreamingManager *)&GStreamingManager,this->GraphBuilder);
  this->StreamingRequests = pFVar18;
  if ((this->Configuration).bSupportsMultiplePasses != 0) {
    local_78.BytesPerElement = 8;
    local_78.NumElements = 1;
    local_78._12_4_ = uStack_1dc;
    local_78.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_78.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar18 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_78,L"Nanite.TotalPrevDrawClustersBuffer",None);
    this->TotalPrevDrawClustersBuffer = pFVar18;
  }
  if (local_1b0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1c0);
  }
  FMemScope::~FMemScope((FMemScope *)&param_7);
  FLLMScope::~FLLMScope((FLLMScope *)&param_4);
  return this;
}

// operator() @ 144f71b70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::PrepareRasterizerPasses'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  EShaderPlatform EVar6;
  FNaniteRasterPipelines *this_00;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FMaterialRenderProxy *pFVar9;
  code *pcVar10;
  FDisplacementScaling FVar11;
  undefined8 uVar12;
  FShaderMapBase *pFVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  TConsoleVariableData<int> *pTVar19;
  undefined4 uVar20;
  bool bVar21;
  bool bVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  FIteratorState FVar29;
  FNaniteRasterMaterialCache *pFVar30;
  FMaterial *pFVar31;
  FMaterialShaderMap *pFVar32;
  TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> *pTVar33;
  TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> *pTVar34;
  TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable> *pTVar35;
  FMaterialShaderType *pFVar36;
  undefined4 extraout_var;
  char *pcVar37;
  uint uVar38;
  uint uVar39;
  EShaderFrequency EVar40;
  uint uVar41;
  FData *this_01;
  uint uVar42;
  FRasterizerPass *pFVar43;
  ForElementType<int> *pFVar44;
  bool bVar45;
  undefined1 local_res18 [8];
  byte local_res20;
  FNaniteRasterMaterialCacheKey_u_0 local_2a4;
  TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
  local_2a0;
  TShaderPermutationDomain<FHWRasterizeMS::FDepthOnlyDim,FHWRasterizeMS::FVirtualTextureTargetDim,FHWRasterizeMS::FMaterialCacheDim,FHWRasterizeMS::FVertexProgrammableDim,FHWRasterizeMS::FPixelProgrammableDim,FHWRasterizeMS::FSplineDeformDim,FHWRasterizeMS::FSkinningDim,FHWRasterizeMS::FAllowSvBarycentricsDim,FHWRasterizeMS::FFixedDisplacementFallbackDim>
  local_290;
  TShaderPermutationDomain<FHWRasterizeVS::FDepthOnlyDim,FHWRasterizeVS::FPrimShaderDim,FHWRasterizeVS::FVirtualTextureTargetDim,FHWRasterizeVS::FMaterialCacheDim,FHWRasterizeVS::FVertexProgrammableDim,FHWRasterizeVS::FPixelProgrammableDim,FHWRasterizeVS::FSplineDeformDim,FHWRasterizeVS::FSkinningDim,FHWRasterizeVS::FFixedDisplacementFallbackDim>
  local_280;
  TShaderPermutationDomain<FHWRasterizePS::FDepthOnlyDim,FHWRasterizePS::FMeshShaderDim,FHWRasterizePS::FPrimShaderDim,FHWRasterizePS::FVisualizeDim,FHWRasterizePS::FVirtualTextureTargetDim,FHWRasterizePS::FMaterialCacheDim,FHWRasterizePS::FVertexProgrammableDim,FHWRasterizePS::FPixelProgrammableDim,FHWRasterizePS::FAllowSvBarycentricsDim>
  local_270;
  TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
  local_260;
  uint local_250;
  int local_24c;
  uint local_248;
  uint local_244;
  longlong local_240;
  FMaterialShaderMap *local_238;
  FMicropolyRasterizeCS *local_230;
  FMaterialShaderMap *pFStack_228;
  FMicropolyRasterizeCS *local_220;
  FMaterialShaderMap *pFStack_218;
  undefined1 local_210 [8];
  FMaterial *local_208;
  FNaniteVisibilityResults *local_200;
  FData *local_1f8;
  char *local_1e8;
  longlong local_1e0;
  TShaderPermutationDomain<FHWRasterizeMS::FDepthOnlyDim,FHWRasterizeMS::FVirtualTextureTargetDim,FHWRasterizeMS::FMaterialCacheDim,FHWRasterizeMS::FVertexProgrammableDim,FHWRasterizeMS::FPixelProgrammableDim,FHWRasterizeMS::FSplineDeformDim,FHWRasterizeMS::FSkinningDim,FHWRasterizeMS::FAllowSvBarycentricsDim,FHWRasterizeMS::FFixedDisplacementFallbackDim>
  *local_1d8;
  undefined1 *local_1d0;
  FMaterialShaderMap **local_1c8;
  TShaderPermutationDomain<FHWRasterizeVS::FDepthOnlyDim,FHWRasterizeVS::FPrimShaderDim,FHWRasterizeVS::FVirtualTextureTargetDim,FHWRasterizeVS::FMaterialCacheDim,FHWRasterizeVS::FVertexProgrammableDim,FHWRasterizeVS::FPixelProgrammableDim,FHWRasterizeVS::FSplineDeformDim,FHWRasterizeVS::FSkinningDim,FHWRasterizeVS::FFixedDisplacementFallbackDim>
  *local_1c0;
  TShaderPermutationDomain<FHWRasterizePS::FDepthOnlyDim,FHWRasterizePS::FMeshShaderDim,FHWRasterizePS::FPrimShaderDim,FHWRasterizePS::FVisualizeDim,FHWRasterizePS::FVirtualTextureTargetDim,FHWRasterizePS::FMaterialCacheDim,FHWRasterizePS::FVertexProgrammableDim,FHWRasterizePS::FPixelProgrammableDim,FHWRasterizePS::FAllowSvBarycentricsDim>
  *local_1b8;
  TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
  *local_1b0;
  FMaterial **local_1a8;
  undefined8 local_198;
  longlong local_190;
  longlong local_188;
  char *local_180;
  undefined1 *local_178;
  TShaderPermutationDomain<FHWRasterizeVS::FDepthOnlyDim,FHWRasterizeVS::FPrimShaderDim,FHWRasterizeVS::FVirtualTextureTargetDim,FHWRasterizeVS::FMaterialCacheDim,FHWRasterizeVS::FVertexProgrammableDim,FHWRasterizeVS::FPixelProgrammableDim,FHWRasterizeVS::FSplineDeformDim,FHWRasterizeVS::FSkinningDim,FHWRasterizeVS::FFixedDisplacementFallbackDim>
  *local_170;
  TShaderPermutationDomain<FHWRasterizeMS::FDepthOnlyDim,FHWRasterizeMS::FVirtualTextureTargetDim,FHWRasterizeMS::FMaterialCacheDim,FHWRasterizeMS::FVertexProgrammableDim,FHWRasterizeMS::FPixelProgrammableDim,FHWRasterizeMS::FSplineDeformDim,FHWRasterizeMS::FSkinningDim,FHWRasterizeMS::FAllowSvBarycentricsDim,FHWRasterizeMS::FFixedDisplacementFallbackDim>
  *local_168;
  TShaderPermutationDomain<FHWRasterizePS::FDepthOnlyDim,FHWRasterizePS::FMeshShaderDim,FHWRasterizePS::FPrimShaderDim,FHWRasterizePS::FVisualizeDim,FHWRasterizePS::FVirtualTextureTargetDim,FHWRasterizePS::FMaterialCacheDim,FHWRasterizePS::FVertexProgrammableDim,FHWRasterizePS::FPixelProgrammableDim,FHWRasterizePS::FAllowSvBarycentricsDim>
  *local_160;
  TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
  *local_158;
  TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
  *local_150;
  char **local_148;
  undefined1 *local_140;
  int *local_138;
  FNaniteRasterMaterialCache local_128;
  TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> local_78;
  TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> local_68;
  TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable> local_58;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"PrepareRasterizerPasses_Async");
  bVar45 = -1 < CpuChannel->Enabled;
  if (bVar45) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5023,"PrepareRasterizerPasses_Async",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
               ,0x139f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5023);
  }
  local_208 = (FMaterial *)(**(code **)(**(longlong **)(*(longlong *)this + 0x70) + 0x30))();
  local_238 = (FMaterialShaderMap *)0x0;
  if (local_208 != (FMaterial *)0x0) {
    local_238 = FMaterial::GetRenderingThreadShaderMap(local_208);
  }
  pTVar19 = CVarNaniteDepthBucketPixelProgrammable.Ref;
  local_280.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_280.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_280.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_280.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_280.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_290.Tail.Tail.Tail.DimensionValue = false;
  local_290.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_290.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_290.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_290.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_290.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_270.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_270.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_270.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_2a0.Tail.DimensionValue = false;
  local_2a0.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_260.Tail.DimensionValue = false;
  local_260.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_260.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  bVar21 = IsInParallelRenderingThread();
  if ((!bVar21) &&
     (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_res18[0] = pTVar19->ShadowedValue[1] != 0;
  local_1e8 = (char *)((longlong)this + 0x2b);
  local_1d0 = (undefined1 *)((longlong)this + 0x2d);
  local_2a0.Tail.Tail.Tail.Tail.DimensionValue = (bool)*local_1d0;
  local_2a0.Tail.Tail.Tail.DimensionValue = *(bool *)((longlong)this + 0x2c);
  local_2a0.DimensionValue = *(char *)((longlong)this + 0x29) == '\x01';
  if ((*(char *)((longlong)this + 0x2a) == '\0') ||
     ((*(char *)((longlong)this + 0x29) == '\x01' &&
      (local_2a0.Tail.Tail.Tail.DimensionValue == false)))) {
    local_2a0.Tail.Tail.DimensionValue = false;
  }
  else {
    local_2a0.Tail.Tail.DimensionValue = true;
  }
  local_280.Tail.DimensionValue = *local_1e8 == '\x01';
  local_1e0 = (longlong)this + 0x24;
  local_1d8 = &local_290;
  local_270.Tail.DimensionValue = (byte)(*local_1e8 - 2U) < 3;
  local_1c8 = &local_238;
  this_00 = *(FNaniteRasterPipelines **)((longlong)this + 8);
  local_1c0 = &local_280;
  local_1b8 = &local_270;
  local_1b0 = &local_2a0;
  this_01 = (FData *)&this_00->PipelineMap;
  local_1a8 = &local_208;
  local_198 = *(undefined8 *)this;
  local_170 = &local_280;
  local_168 = &local_290;
  local_160 = &local_270;
  local_158 = &local_2a0;
  local_150 = &local_260;
  local_148 = &local_1e8;
  local_140 = local_res18;
  local_138 = &local_24c;
  local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = true;
  local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = true;
  local_24c = 1;
  local_290.DimensionValue = local_2a0.DimensionValue;
  local_290.Tail.DimensionValue = local_2a0.Tail.Tail.Tail.DimensionValue;
  local_290.Tail.Tail.DimensionValue = local_2a0.Tail.Tail.Tail.Tail.DimensionValue;
  local_280.DimensionValue = local_2a0.DimensionValue;
  local_280.Tail.Tail.DimensionValue = local_2a0.Tail.Tail.Tail.DimensionValue;
  local_280.Tail.Tail.Tail.DimensionValue = local_2a0.Tail.Tail.Tail.Tail.DimensionValue;
  local_270.DimensionValue = local_2a0.DimensionValue;
  local_270.Tail.Tail.DimensionValue = local_280.Tail.DimensionValue;
  local_270.Tail.Tail.Tail.DimensionValue = local_2a0.Tail.Tail.DimensionValue;
  local_270.Tail.Tail.Tail.Tail.DimensionValue = local_2a0.Tail.Tail.Tail.DimensionValue;
  local_270.Tail.Tail.Tail.Tail.Tail.DimensionValue = local_2a0.Tail.Tail.Tail.Tail.DimensionValue;
  local_260.DimensionValue = local_2a0.DimensionValue;
  local_260.Tail.Tail.DimensionValue = local_2a0.Tail.Tail.DimensionValue;
  local_260.Tail.Tail.Tail.DimensionValue = local_2a0.Tail.Tail.Tail.DimensionValue;
  local_260.Tail.Tail.Tail.Tail.DimensionValue = local_2a0.Tail.Tail.Tail.Tail.DimensionValue;
  local_1f8 = this_01;
  local_190 = (longlong)this + 0x20;
  local_188 = local_1e0;
  local_180 = local_1e8;
  local_178 = local_1d0;
  uVar24 = FNaniteRasterPipelines::GetRegularBinCount(this_00);
  local_200 = Nanite::GetVisibilityResults(*(FNaniteVisibilityQuery **)((longlong)this + 0x10));
  pFVar44 = *(ForElementType<int> **)this;
  bVar3 = *(byte *)((longlong)this + 0x1c);
  uVar25 = FNaniteRasterPipelines::GetBinCount(*(FNaniteRasterPipelines **)((longlong)this + 8));
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  if (*(int *)((longlong)&pFVar44[7].Data + 4) < (int)uVar25) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FRasterizerPass>_>
              (0xc0,8,uVar25,(ForElementType<Nanite::FRasterizerPass> *)(pFVar44 + 6),
               *(int *)&pFVar44[7].Data,(int *)((longlong)&pFVar44[7].Data + 4));
  }
  piVar1 = (int *)((longlong)&pFVar44[1].Data + 4);
  if (*piVar1 < (int)uVar25) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
              (4,4,uVar25,pFVar44,*(int *)&pFVar44[1].Data,piVar1);
  }
  if (*(int *)((longlong)&pFVar44[3].Data + 4) < (int)uVar25) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
              (4,4,uVar25,pFVar44 + 2,*(int *)&pFVar44[3].Data,
               (int *)((longlong)&pFVar44[3].Data + 4));
  }
  if (*(int *)((longlong)&pFVar44[5].Data + 4) < (int)uVar25) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
              (4,4,uVar25,pFVar44 + 4,*(int *)&pFVar44[5].Data,
               (int *)((longlong)&pFVar44[5].Data + 4));
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::FData::Next(this_01,(FIteratorState)(uint)&local_248);
  uVar25 = *(uint *)&(this_00->PipelineMap).field_0x8;
  uVar39 = local_248;
  do {
    pTVar19 = CVarNaniteRasterSort.Ref;
    if (uVar39 == uVar25) {
      bVar21 = IsInParallelRenderingThread();
      if ((!bVar21) &&
         (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (pTVar19->ShadowedValue[1] != 0) {
        local_240 = *(longlong *)this;
        ``Nanite::FRenderer::PrepareRasterizerPasses'::__l2::<lambda_1>::operator()'::__l190::
        <lambda_4>::operator()(&local_240,(FDispatchList *)(local_240 + 0x20));
        ``Nanite::FRenderer::PrepareRasterizerPasses'::__l2::<lambda_1>::operator()'::__l190::
        <lambda_4>::operator()(&local_240,(FDispatchList *)(*(longlong *)this + 0x10));
        ``Nanite::FRenderer::PrepareRasterizerPasses'::__l2::<lambda_1>::operator()'::__l190::
        <lambda_4>::operator()(&local_240,*(FDispatchList **)this);
      }
      *(int *)(*(longlong *)this + 0x88) = local_24c + -1;
      if (bVar45) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      return;
    }
    uVar42 = 0;
    if ((int)uVar39 < (this_01->KeyVals).ArrayNum) {
      uVar42 = ~uVar39 >> 0x1f;
    }
    if ((uVar42 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar7 = (this_01->KeyVals).AllocatorInstance.Data;
    uVar42 = *(uint *)((longlong)this + 0x1c) & 0x20;
    local_res20 = uVar42 != 0;
    if (local_238 != (FMaterialShaderMap *)0x0) {
      uVar5 = *(ushort *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x94);
      local_244 = (uint)uVar5;
      local_250 = Nanite::FGlobalResources::GetFixedFunctionBinMask();
      if ((((local_250 <= uVar5 && uVar5 != local_250) ||
           ((((uVar23 = *(ushort *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x94),
              ((byte)uVar23 & 6) != 6 && ((uVar23 >> 4 & 1) == 0 || (uVar23 & 3) == 0)) &&
             (((uVar23 & 2) == 0 || (bVar21 = NaniteSplineMeshesSupported(), bVar21)))) &&
            ((((byte)pFVar7[(longlong)(int)uVar39 * 0x98 + 0x94] & 4) == 0 ||
             (bVar21 = NaniteSkinnedMeshesSupported(), bVar21)))))) &&
          ((uVar42 == 0 || (((byte)pFVar7[(longlong)(int)uVar39 * 0x98 + 0x89] & 8) != 0)))) &&
         ((uVar5 <= local_250 ||
          (((*(char *)((longlong)this + 0x27) == '\0' ||
            (bVar21 = FNaniteRasterPipelines::ShouldBinRenderInCustomPass
                                (*(FNaniteRasterPipelines **)((longlong)this + 8),
                                 *(ushort *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x94)), bVar21)
            ) && ((*(char *)((longlong)this + 0x28) != '\0' ||
                  ((local_200 == (FNaniteVisibilityResults *)0x0 ||
                   (bVar21 = FNaniteVisibilityResults::IsRasterBinVisible
                                       (local_200,
                                        *(ushort *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x94)),
                   bVar21)))))))))) {
        lVar8 = *(longlong *)this;
        iVar26 = *(int *)(lVar8 + 0x38);
        if (iVar26 == *(int *)(lVar8 + 0x3c)) {
          iVar26 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FRasterizerPass>_>
                             (0x8c0,(ForElementType<Nanite::FRasterizerPass> *)(lVar8 + 0x30),
                              (int *)(lVar8 + 0x3c));
        }
        *(int *)(lVar8 + 0x38) = iVar26 + 1;
        pFVar43 = (FRasterizerPass *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar26 * 0xc0);
        DefaultConstructItems<Nanite::FRasterizerPass,int>(pFVar43,1);
        uVar5 = *(ushort *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x94);
        uVar23 = ((short)uVar24 - uVar5) - 2;
        if (uVar5 < uVar24) {
          uVar23 = uVar5;
        }
        pFVar43->RasterBin = (uint)uVar23;
        FVar11 = *(FDisplacementScaling *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x78);
        (pFVar43->RasterPipeline).RasterMaterial =
             *(FMaterialRenderProxy **)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x70);
        (pFVar43->RasterPipeline).DisplacementScaling = FVar11;
        uVar12 = *(undefined8 *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x88);
        (pFVar43->RasterPipeline).DisplacementFadeRange =
             *(FDisplacementFadeRange *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x80);
        *(undefined8 *)&(pFVar43->RasterPipeline).field_0x18 = uVar12;
        pFVar43->VertexMaterialProxy = *(FMaterialRenderProxy **)(*(longlong *)this + 0x70);
        pFVar43->PixelMaterialProxy = *(FMaterialRenderProxy **)(*(longlong *)this + 0x70);
        pFVar43->ComputeMaterialProxy = *(FMaterialRenderProxy **)(*(longlong *)this + 0x70);
        EVar6 = *(EShaderPlatform *)((longlong)this + 0x24);
        iVar26 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarNaniteBundleRaster.Ref);
        if (((iVar26 == 0) ||
            (iVar26 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarNaniteBundleEmulation),
            iVar26 != 0)) || (bVar21 = CanUseShaderBundleWorkGraph(EVar6), !bVar21)) {
          pFVar43->bUseWorkGraphSW = false;
LAB_144f72193:
          bVar21 = false;
        }
        else {
          bVar21 = Nanite::UseRasterShaderBundleSW(*(EShaderPlatform *)((longlong)this + 0x24));
          pFVar43->bUseWorkGraphSW = bVar21;
          bVar21 = Nanite::UseRasterShaderBundleHW(*(EShaderPlatform *)((longlong)this + 0x24));
          if (!bVar21) goto LAB_144f72193;
          bVar21 = true;
        }
        pFVar43->bUseWorkGraphHW = bVar21;
        local_2a4.Packed = 0;
        if (*(char *)((longlong)this + 0x26) != '\0') {
          uVar42 = (uint)(byte)pFVar7[(longlong)(int)uVar39 * 0x98 + 0x88];
          cVar4 = *(char *)((longlong)this + 0x2b);
          if ((cVar4 == '\x04') || ((byte)(cVar4 - 2U) < 2)) {
            uVar41 = 1;
          }
          else {
            uVar41 = 0;
          }
          uVar38 = 0;
          if (*(char *)((longlong)this + 0x29) == '\x01') {
            uVar38 = 2;
          }
          uVar27 = 0;
          if (cVar4 == '\x01') {
            uVar27 = 2;
          }
          local_2a4.Packed =
               (pFVar43->bUseWorkGraphHW & 1) << 0x12 ^
               (pFVar43->bUseWorkGraphSW & 1) << 0x11 ^
               ((((((byte)pFVar7[(longlong)(int)uVar39 * 0x98 + 0x89] & 4) << 4 | uVar42 & 0x30) * 2
                 | (byte)(pFVar43->RasterPipeline).field_0x19 & 8) << 2 | uVar42 & 0x40) << 7 |
               (pFVar43->RasterPipeline).bIsTwoSided << 0xb |
               (((uVar38 | *(byte *)((longlong)this + 0x2c) & 1) * 2 |
                *(byte *)((longlong)this + 0x2a) & 1) << 3 | uVar27 | uVar42 & 4 | uVar41) << 5 |
               ((uVar42 & 2) * 2 | (byte)pFVar7[(longlong)(int)uVar39 * 0x98 + 0x88] & 8) * 2 |
               *(uint *)((longlong)this + 0x20) & 7);
        }
        local_128.MaterialBitFlags.bIsSet = false;
        local_128.VertexMaterial = (FMaterial *)0x0;
        local_128.PixelMaterial = (FMaterial *)0x0;
        local_128.ComputeMaterial = (FMaterial *)0x0;
        local_128.VertexMaterialProxy = (FMaterialRenderProxy *)0x0;
        local_128.PixelMaterialProxy = (FMaterialRenderProxy *)0x0;
        local_128.ComputeMaterialProxy = (FMaterialRenderProxy *)0x0;
        local_128.RasterPixelShader.ShaderContent = (FHWRasterizePS *)0x0;
        local_128.RasterPixelShader.ShaderMap = (FShaderMapBase *)0x0;
        local_128.RasterVertexShader.ShaderContent = (FHWRasterizeVS *)0x0;
        local_128.RasterVertexShader.ShaderMap = (FShaderMapBase *)0x0;
        local_128.RasterMeshShader.ShaderContent = (FHWRasterizeMS *)0x0;
        local_128.RasterMeshShader.ShaderMap = (FShaderMapBase *)0x0;
        local_128.ClusterComputeShader.ShaderContent = (FMicropolyRasterizeCS *)0x0;
        local_128.ClusterComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        local_128.PatchComputeShader.ShaderContent = (FMicropolyRasterizeCS *)0x0;
        local_128.PatchComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        local_128.DisplacementScaling.bIsSet = false;
        local_128.DisplacementFadeRange.bIsSet = false;
        local_128.bFinalized = false;
        if (*(char *)((longlong)this + 0x26) == '\0') {
          pFVar30 = &local_128;
        }
        else {
          pFVar30 = TMapBase<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,0>_>
                    ::FindOrAddImpl<FNaniteRasterMaterialCacheKey_const_&>
                              ((TMapBase<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNaniteRasterMaterialCacheKey,FNaniteRasterMaterialCache,0>_>
                                *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x20),local_2a4.Packed,
                               (FNaniteRasterMaterialCacheKey *)&local_2a4._s_0);
        }
        ``Nanite::FRenderer::PrepareRasterizerPasses'::__l2::<lambda_1>::operator()'::__l2::
        <lambda_2>::operator()
                  (&local_198,(FNaniteRasterEntry *)(pFVar7 + (longlong)(int)uVar39 * 0x98 + 0x20),
                   pFVar43,pFVar30);
        pFVar43->IndirectOffset = pFVar43->RasterBin << 5;
        pFVar9 = *(FMaterialRenderProxy **)(*(longlong *)this + 0x78);
        if (((pFVar43->VertexMaterialProxy == pFVar9) && (pFVar43->PixelMaterialProxy == pFVar9)) &&
           (pFVar43->ComputeMaterialProxy == pFVar9)) {
LAB_144f7238e:
          pFVar43->bHidden = true;
        }
        else if (local_250 < local_244) {
          if ((bVar3 & 1) != 0) goto LAB_144f7238e;
        }
        else if (((byte)(pFVar43->RasterBin >> 3) & 1) != local_res20) goto LAB_144f7238e;
        if (pFVar43->bHidden == false) {
          if ((*(char *)((longlong)this + 0x2b) == '\x04') ||
             ((byte)(*(char *)((longlong)this + 0x2b) - 2U) < 2)) {
            bVar21 = ShouldUseSvBarycentricPermutation
                               (*(EShaderPlatform *)((longlong)this + 0x24),
                                pFVar43->bPixelProgrammable,true);
            if ((pFVar43->RasterMeshShader).ShaderContent == (FHWRasterizeMS *)0x0) {
              pFVar31 = FMaterialRenderProxy::GetMaterialWithFallback
                                  (pFVar43->VertexMaterialProxy,*(Type *)((longlong)this + 0x20),
                                   &pFVar43->VertexMaterialProxy);
              pFVar32 = FMaterial::GetRenderingThreadShaderMap(pFVar31);
              if ((pFVar32 == (FMaterialShaderMap *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("VertexShaderMap",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                      ,0x1541,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar16 = pFVar43->bVertexProgrammable;
              uVar17 = pFVar43->bPixelProgrammable;
              local_290.Tail.Tail.Tail.Tail.DimensionValue = (bool)uVar17;
              local_290.Tail.Tail.Tail.DimensionValue = (bool)uVar16;
              local_290.Tail.Tail.Tail.Tail.Tail.DimensionValue = pFVar43->bSplineMesh;
              local_290.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = pFVar43->bSkinnedMesh;
              local_290.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar21;
              EVar40 = SF_Mesh;
              if (pFVar43->bUseWorkGraphHW != false) {
                EVar40 = SF_WorkGraphComputeNode;
              }
              pTVar34 = GetHWRasterizeMeshShader(&local_68,pFVar32,&local_290,EVar40);
              pFVar13 = pTVar34->ShaderMap;
              (pFVar43->RasterMeshShader).ShaderContent = pTVar34->ShaderContent;
              (pFVar43->RasterMeshShader).ShaderMap = pFVar13;
              if ((pFVar43->RasterMeshShader).ShaderContent == (FHWRasterizeMS *)0x0) {
                iVar26 = 0x154b;
                pcVar37 = "!RasterizerPass.RasterMeshShader.IsNull()";
                goto LAB_144f7257b;
              }
            }
          }
          else {
            bVar21 = ShouldUseSvBarycentricPermutation
                               (*(EShaderPlatform *)((longlong)this + 0x24),
                                pFVar43->bPixelProgrammable,false);
            if ((pFVar43->RasterVertexShader).ShaderContent == (FHWRasterizeVS *)0x0) {
              pFVar31 = FMaterialRenderProxy::GetMaterialWithFallback
                                  (pFVar43->VertexMaterialProxy,*(Type *)((longlong)this + 0x20),
                                   &pFVar43->VertexMaterialProxy);
              pFVar32 = FMaterial::GetRenderingThreadShaderMap(pFVar31);
              if ((pFVar32 == (FMaterialShaderMap *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("VertexShaderMap",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                      ,0x1553,L""), bVar22)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar14 = pFVar43->bVertexProgrammable;
              uVar15 = pFVar43->bPixelProgrammable;
              local_280.Tail.Tail.Tail.Tail.Tail.DimensionValue = (bool)uVar15;
              local_280.Tail.Tail.Tail.Tail.DimensionValue = (bool)uVar14;
              local_280.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = pFVar43->bSplineMesh;
              local_280.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = pFVar43->bSkinnedMesh;
              pTVar33 = FMaterialShaderMap::GetShader<FHWRasterizeVS>(pFVar32,&local_78,&local_280);
              pFVar13 = pTVar33->ShaderMap;
              (pFVar43->RasterVertexShader).ShaderContent = pTVar33->ShaderContent;
              (pFVar43->RasterVertexShader).ShaderMap = pFVar13;
              if ((pFVar43->RasterVertexShader).ShaderContent == (FHWRasterizeVS *)0x0) {
                iVar26 = 0x155a;
                pcVar37 = "!RasterizerPass.RasterVertexShader.IsNull()";
LAB_144f7257b:
                bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   (pcVar37,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,iVar26,L"");
                if (bVar22) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
              }
            }
          }
          if ((pFVar43->RasterPixelShader).ShaderContent == (FHWRasterizePS *)0x0) {
            pFVar31 = FMaterialRenderProxy::GetMaterialWithFallback
                                (pFVar43->PixelMaterialProxy,*(Type *)((longlong)this + 0x20),
                                 &pFVar43->PixelMaterialProxy);
            pFVar32 = FMaterial::GetRenderingThreadShaderMap(pFVar31);
            if ((pFVar32 == (FMaterialShaderMap *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PixelShaderMap",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,0x1561,L""), bVar22)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_270.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = pFVar43->bVertexProgrammable;
            local_270.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue =
                 pFVar43->bPixelProgrammable;
            local_270.Tail.Tail.Tail.Tail.Tail.DimensionValue = *(bool *)((longlong)this + 0x2d);
            local_270.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar21;
            pTVar35 = FMaterialShaderMap::GetShader<FHWRasterizePS>(pFVar32,&local_58,&local_270);
            pFVar13 = pTVar35->ShaderMap;
            (pFVar43->RasterPixelShader).ShaderContent = pTVar35->ShaderContent;
            (pFVar43->RasterPixelShader).ShaderMap = pFVar13;
            if (((pFVar43->RasterPixelShader).ShaderContent == (FHWRasterizePS *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!RasterizerPass.RasterPixelShader.IsNull()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,0x1569,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if ((pFVar43->ClusterComputeShader).ShaderContent == (FMicropolyRasterizeCS *)0x0) {
            pFVar31 = FMaterialRenderProxy::GetMaterialWithFallback
                                (pFVar43->ComputeMaterialProxy,*(Type *)((longlong)this + 0x20),
                                 &pFVar43->ComputeMaterialProxy);
            pFVar32 = FMaterial::GetRenderingThreadShaderMap(pFVar31);
            if ((pFVar32 == (FMaterialShaderMap *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ComputeShaderMap",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,0x156f,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
            local_2a0.Tail.DimensionValue = (pFVar43->RasterPipeline).bIsTwoSided;
            local_2a0.Tail.Tail.Tail.Tail.Tail.DimensionValue = pFVar43->bVertexProgrammable;
            local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = pFVar43->bPixelProgrammable;
            uVar18._0_1_ = pFVar43->bSplineMesh;
            uVar18._1_1_ = pFVar43->bSkinnedMesh;
            local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail._0_4_ =
                 CONCAT31(CONCAT12(local_2a0.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.
                                   Tail.DimensionValue,uVar18),
                          (byte)(pFVar43->RasterPipeline).field_0x18 >> 6) & 0xffffff01;
            iVar26 = TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
                     ::ToDimensionValueId(&local_2a0);
            if (pFVar43->bUseWorkGraphSW == false) {
              pFVar36 = FMicropolyRasterizeCS::GetStaticType();
            }
            else {
              pFVar36 = FMicropolyRasterizeWG::GetStaticType();
            }
            local_230 = (FMicropolyRasterizeCS *)
                        FShaderMapContent::GetShader
                                  ((FShaderMapContent *)pFVar32->_padding_,
                                   (FHashedName *)&pFVar36->field_0x28,iVar26);
            if (local_230 == (FMicropolyRasterizeCS *)0x0) {
              pFVar32 = (FMaterialShaderMap *)0x0;
            }
            (pFVar43->ClusterComputeShader).ShaderContent = local_230;
            (pFVar43->ClusterComputeShader).ShaderMap = (FShaderMapBase *)pFVar32;
            pFStack_228 = pFVar32;
            if (((pFVar43->ClusterComputeShader).ShaderContent == (FMicropolyRasterizeCS *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!RasterizerPass.ClusterComputeShader.IsNull()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,0x157b,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if ((pFVar43->bDisplacement != false) &&
             ((pFVar43->PatchComputeShader).ShaderContent == (FMicropolyRasterizeCS *)0x0)) {
            pFVar31 = FMaterialRenderProxy::GetMaterialWithFallback
                                (pFVar43->ComputeMaterialProxy,*(Type *)((longlong)this + 0x20),
                                 &pFVar43->ComputeMaterialProxy);
            pFVar32 = FMaterial::GetRenderingThreadShaderMap(pFVar31);
            if ((pFVar32 == (FMaterialShaderMap *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ComputeShaderMap",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,0x1581,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar20 = local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail._0_4_;
            local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = true;
            local_260.Tail.DimensionValue = (pFVar43->RasterPipeline).bIsTwoSided;
            local_260.Tail.Tail.Tail.Tail.Tail.DimensionValue = pFVar43->bVertexProgrammable;
            local_260.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = pFVar43->bPixelProgrammable;
            local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue =
                 pFVar43->bSplineMesh;
            local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue =
                 SUB41(uVar20,3);
            local_260.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue =
                 pFVar43->bSkinnedMesh;
            iVar26 = TShaderPermutationDomain<FMicropolyRasterizeCS::FDepthOnlyDim,FMicropolyRasterizeCS::FTwoSidedDim,FMicropolyRasterizeCS::FVisualizeDim,FMicropolyRasterizeCS::FVirtualTextureTargetDim,FMicropolyRasterizeCS::FMaterialCacheDim,FMicropolyRasterizeCS::FVertexProgrammableDim,FMicropolyRasterizeCS::FPixelProgrammableDim,FMicropolyRasterizeCS::FTessellationDim,FMicropolyRasterizeCS::FPatchesDim,FMicropolyRasterizeCS::FVoxelsDim,FMicropolyRasterizeCS::FSplineDeformDim,FMicropolyRasterizeCS::FSkinningDim,FMicropolyRasterizeCS::FFixedDisplacementFallbackDim>
                     ::ToDimensionValueId(&local_260);
            if (pFVar43->bUseWorkGraphSW == false) {
              pFVar36 = FMicropolyRasterizeCS::GetStaticType();
            }
            else {
              pFVar36 = FMicropolyRasterizeWG::GetStaticType();
            }
            local_220 = (FMicropolyRasterizeCS *)
                        FShaderMapContent::GetShader
                                  ((FShaderMapContent *)pFVar32->_padding_,
                                   (FHashedName *)&pFVar36->field_0x28,iVar26);
            if (local_220 == (FMicropolyRasterizeCS *)0x0) {
              pFVar32 = (FMaterialShaderMap *)0x0;
            }
            (pFVar43->PatchComputeShader).ShaderContent = local_220;
            (pFVar43->PatchComputeShader).ShaderMap = (FShaderMapBase *)pFVar32;
            pFStack_218 = pFVar32;
            if (((pFVar43->PatchComputeShader).ShaderContent == (FMicropolyRasterizeCS *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!RasterizerPass.PatchComputeShader.IsNull()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,0x158c,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          puVar2 = (undefined4 *)((longlong)this + 0x20);
          if (pFVar43->VertexMaterial == (FMaterial *)0x0) {
            pFVar31 = (FMaterial *)
                      (**(code **)(pFVar43->VertexMaterialProxy->_padding_ + 0x30))
                                (pFVar43->VertexMaterialProxy,*puVar2);
            pFVar43->VertexMaterial = pFVar31;
            if ((pFVar31 == (FMaterial *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RasterizerPass.VertexMaterial",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,0x1593,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (pFVar43->PixelMaterial == (FMaterial *)0x0) {
            pFVar31 = (FMaterial *)
                      (**(code **)(pFVar43->PixelMaterialProxy->_padding_ + 0x30))
                                (pFVar43->PixelMaterialProxy,*puVar2);
            pFVar43->PixelMaterial = pFVar31;
            if ((pFVar31 == (FMaterial *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RasterizerPass.PixelMaterial",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,0x1599,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (pFVar43->ComputeMaterial == (FMaterial *)0x0) {
            pFVar31 = (FMaterial *)
                      (**(code **)(pFVar43->ComputeMaterialProxy->_padding_ + 0x30))
                                (pFVar43->ComputeMaterialProxy,*puVar2);
            pFVar43->ComputeMaterial = pFVar31;
            if ((pFVar31 == (FMaterial *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RasterizerPass.ComputeMaterial",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                    ,0x159f,L""), bVar21)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (((*(char *)((longlong)this + 0x26) != '\0') &&
              (pFVar30 = pFVar43->RasterMaterialCache, pFVar30 != (FNaniteRasterMaterialCache *)0x0)
              ) && (pFVar30->bFinalized == false)) {
            pFVar30->VertexMaterialProxy = pFVar43->VertexMaterialProxy;
            pFVar43->RasterMaterialCache->PixelMaterialProxy = pFVar43->PixelMaterialProxy;
            pFVar43->RasterMaterialCache->ComputeMaterialProxy = pFVar43->ComputeMaterialProxy;
            pFVar30 = pFVar43->RasterMaterialCache;
            pFVar13 = (pFVar43->RasterVertexShader).ShaderMap;
            (pFVar30->RasterVertexShader).ShaderContent =
                 (pFVar43->RasterVertexShader).ShaderContent;
            (pFVar30->RasterVertexShader).ShaderMap = pFVar13;
            pFVar30 = pFVar43->RasterMaterialCache;
            pFVar13 = (pFVar43->RasterPixelShader).ShaderMap;
            (pFVar30->RasterPixelShader).ShaderContent = (pFVar43->RasterPixelShader).ShaderContent;
            (pFVar30->RasterPixelShader).ShaderMap = pFVar13;
            pFVar30 = pFVar43->RasterMaterialCache;
            pFVar13 = (pFVar43->RasterMeshShader).ShaderMap;
            (pFVar30->RasterMeshShader).ShaderContent = (pFVar43->RasterMeshShader).ShaderContent;
            (pFVar30->RasterMeshShader).ShaderMap = pFVar13;
            pFVar30 = pFVar43->RasterMaterialCache;
            pFVar13 = (pFVar43->ClusterComputeShader).ShaderMap;
            (pFVar30->ClusterComputeShader).ShaderContent =
                 (pFVar43->ClusterComputeShader).ShaderContent;
            (pFVar30->ClusterComputeShader).ShaderMap = pFVar13;
            pFVar30 = pFVar43->RasterMaterialCache;
            pFVar13 = (pFVar43->PatchComputeShader).ShaderMap;
            (pFVar30->PatchComputeShader).ShaderContent =
                 (pFVar43->PatchComputeShader).ShaderContent;
            (pFVar30->PatchComputeShader).ShaderMap = pFVar13;
            pFVar43->RasterMaterialCache->VertexMaterial = pFVar43->VertexMaterial;
            pFVar43->RasterMaterialCache->PixelMaterial = pFVar43->PixelMaterial;
            pFVar43->RasterMaterialCache->ComputeMaterial = pFVar43->ComputeMaterial;
            pFVar43->RasterMaterialCache->bFinalized = true;
          }
          lVar8 = *(longlong *)this;
          iVar26 = *(int *)(lVar8 + 0x38) + -1;
          if (pFVar43->bDisplacement == false) {
            iVar28 = *(int *)(lVar8 + 0x18);
            if (iVar28 == *(int *)(lVar8 + 0x1c)) {
              iVar28 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                                 (0x404,(ForElementType<int> *)(lVar8 + 0x10),(int *)(lVar8 + 0x1c))
              ;
            }
            *(int *)(lVar8 + 0x18) = iVar28 + 1;
            ((ForElementType<int> *)(lVar8 + 0x10))->Data[iVar28] = iVar26;
            pFVar44 = *(ForElementType<int> **)this;
          }
          else {
            pFVar44 = (ForElementType<int> *)(lVar8 + 0x20);
          }
          iVar28 = *(int *)&pFVar44[1].Data;
          piVar1 = (int *)((longlong)&pFVar44[1].Data + 4);
          if (iVar28 == *piVar1) {
            iVar28 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                               (0x404,pFVar44,piVar1);
          }
          *(int *)&pFVar44[1].Data = iVar28 + 1;
          pFVar44->Data[iVar28] = iVar26;
        }
      }
    }
    this_01 = local_1f8;
    FVar29 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FNaniteRasterPipeline,FNaniteRasterEntry,FNaniteRasterEntryKeyFuncs,TSizedDefaultAllocator<32>_>
             ::FData::Next(local_1f8,(uint)local_210);
    uVar39 = *(uint *)CONCAT44(extraout_var,FVar29.Index);
  } while( true );
}

// operator() @ 144f730b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_PatchSplit'::__l6::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  FRDGResource *this_00;
  FRHIResource *pFVar1;
  IRHIComputeContext *pIVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (0 < *(int *)(*(longlong *)((longlong)this + 8) + 0x28)) {
    this_00 = *(FRDGResource **)((longlong)this + 0x10);
    local_18 = 0;
    uStack_10 = 0;
    FRDGResource::ValidateRHIAccess(this_00);
    pFVar1 = this_00->ResourceRHI;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
      puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
      *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
      **(undefined8 **)&param_2->field_0x30 = puVar3;
      *(undefined8 **)&param_2->field_0x30 = puVar3 + 1;
      puVar3[1] = 0;
      *puVar3 = &___7FRHICommandClearUAVUint__6B_;
      puVar3[2] = pFVar1;
      puVar3[3] = local_18;
      puVar3[4] = uStack_10;
    }
    else {
      pIVar2 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_2);
      (**(code **)(pIVar2->_padding_ + 0x60))(pIVar2,pFVar1,&local_18);
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)((longlong)this + 0x10));
  }
  return;
}

// operator() @ 144f73ba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Binning'::__l11::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FRasterBinInit_CS,FShaderMapPointerTable> *this_00;
  undefined8 uVar1;
  uint uVar2;
  void *pvVar3;
  FRasterBinInit_CS *pFVar4;
  code *pcVar5;
  bool bVar6;
  TIntVector3<int> *pTVar7;
  FShaderParametersMetadata *pFVar8;
  FRHIComputeShader *pFVar9;
  FRHIBatchedShaderUnbinds *pFVar10;
  TIntVector3<int>_u_0 local_58;
  undefined8 local_48;
  TIntVector3<int> local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  pTVar7 = FComputeShaderUtils::GetGroupCountWrapped(&local_38,*(int *)((longlong)this + 0x28),0x40)
  ;
  pvVar3 = *(void **)this;
  this_00 = (TShaderRefBase<FRasterBinInit_CS,FShaderMapPointerTable> *)((longlong)this + 0x18);
  uVar1 = *(undefined8 *)&pTVar7->field0_0x0;
  uVar2 = (pTVar7->field0_0x0)._s_0.Z;
  local_48 = uVar1;
  pFVar8 = FRasterBinInit_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_58._0_8_ = uVar1;
  local_58._s_0.Z = uVar2;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_58._s_0);
  pFVar9 = TShaderRefBase<FRasterBinInit_CS,FShaderMapPointerTable>::GetComputeShader(this_00);
  SetComputePipelineState(param_2,pFVar9);
  local_28.ShaderContent = (FShader *)this_00->ShaderContent;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x20);
  ValidateShaderParameters(&local_28,pFVar8,pvVar3);
  ::SetShaderParameters
            (param_2,pFVar9,(FShaderParameterBindings *)this_00->ShaderContent,pFVar8,pvVar3);
  FRHIComputeCommandList::DispatchComputeShader(param_2,(uint)local_48,local_48._4_4_,uVar2);
  pFVar9 = TShaderRefBase<FRasterBinInit_CS,FShaderMapPointerTable>::GetComputeShader(this_00);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
    pFVar4 = this_00->ShaderContent;
    if (*(short *)&pFVar4->field_0x54 != -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                         ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    UnsetShaderUAVs(pFVar10,(FShaderParameterBindings *)pFVar4);
    FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar9,pFVar10);
  }
  return;
}

// operator() @ 144f74f20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRasterizePassParameters * __thiscall
`Nanite::FRenderer::AddPass_Rasterize'::__l2::<lambda_2>::operator()
          (void *this,FBinningData *param_1,bool param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FRDGBuffer *pFVar4;
  FRDGTextureUAV *pFVar5;
  undefined8 uVar6;
  EUniformBufferBindingFlags EVar7;
  undefined1 uVar8;
  FRasterizePassParameters *pFVar9;
  FShaderParametersMetadata *pFVar10;
  FRDGBufferSRV *pFVar11;
  FRDGBufferUAV *pFVar12;
  FRDGBufferSRVDesc local_38;
  
  pFVar9 = FRDGAllocator::Alloc<FRasterizePassParameters>
                     ((FRDGAllocator *)(*(longlong *)(*(longlong *)this + 8) + 0x18));
  lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x80);
  pFVar10 = FNaniteRasterUniformParameters::GetStructMetadata();
  EVar7 = Static;
  if (pFVar10->BindingFlags != StaticAndShader) {
    EVar7 = pFVar10->BindingFlags;
  }
  local_38._padding_._0_4_ = CONCAT31(local_38._padding_._1_3_,EVar7);
  *(longlong *)&pFVar9->NaniteRaster = lVar1;
  *(ulonglong *)&(pFVar9->NaniteRaster).field_0x8 =
       CONCAT44(local_38._padding_._4_4_,(undefined4)local_38._padding_);
  local_38._padding_ = lVar1;
  pFVar11 = Nanite::FStreamingManager::GetClusterPageDataSRV
                      ((FStreamingManager *)&Nanite::GStreamingManager,
                       *(FRDGBuilder **)(*(longlong *)this + 8));
  pFVar9->ClusterPageData = pFVar11;
  pFVar11 = Nanite::FStreamingManager::GetHierarchySRV
                      ((FStreamingManager *)&Nanite::GStreamingManager,
                       *(FRDGBuilder **)(*(longlong *)this + 8));
  pFVar9->HierarchyBuffer = pFVar11;
  uVar2 = *(undefined8 *)(*(longlong *)this + 0x20);
  pFVar10 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EVar7 = Static;
  if (pFVar10->BindingFlags != StaticAndShader) {
    EVar7 = pFVar10->BindingFlags;
  }
  local_38._padding_._0_4_ = CONCAT31(local_38._padding_._1_3_,EVar7);
  *(undefined8 *)&pFVar9->Scene = uVar2;
  *(ulonglong *)&(pFVar9->Scene).field_0x8 =
       CONCAT44(local_38._padding_._4_4_,(undefined4)local_38._padding_);
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  pFVar5 = (FRDGTextureUAV *)puVar3[1];
  (pFVar9->RasterParameters).OutDepthBuffer = (FRDGTextureUAV *)*puVar3;
  (pFVar9->RasterParameters).OutDepthBufferArray = pFVar5;
  pFVar5 = (FRDGTextureUAV *)puVar3[3];
  (pFVar9->RasterParameters).OutVisBuffer64 = (FRDGTextureUAV *)puVar3[2];
  (pFVar9->RasterParameters).OutDbgBuffer64 = pFVar5;
  uVar6 = puVar3[5];
  (pFVar9->RasterParameters).OutDbgBuffer32 = (FRDGTextureUAV *)puVar3[4];
  *(undefined8 *)&(pFVar9->RasterParameters).field_0x28 = uVar6;
  local_38.Buffer = *(FRDGBuffer **)(*(longlong *)this + 0xc0);
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  uVar8 = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar8 = 0x1c;
  }
  local_38._padding_ = CONCAT71((int7)((ulonglong)uVar2 >> 8),uVar8) & 0xffffffff;
  pFVar11 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_38);
  pFVar9->VisibleClustersSWHW = pFVar11;
  pFVar4 = param_1->IndirectArgs;
  *(FRDGBuffer **)&pFVar9->IndirectArgs = pFVar4;
  *(ulonglong *)&(pFVar9->IndirectArgs).field_0x8 = CONCAT44(local_38._padding_._4_4_,4);
  local_38.Buffer = *(FRDGBuffer **)(*(longlong *)this + 0xe8);
  local_38._padding_._0_1_ = 0;
  local_38._padding_._1_7_ = (uint7)((ulonglong)pFVar4 >> 8) & 0xffffff;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_38._padding_._0_1_ = 0x1c;
  }
  pFVar11 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_38);
  pFVar9->InViews = pFVar11;
  local_38._padding_ = CONCAT71(local_38._padding_._1_7_,0x1c);
  local_38._padding_ = local_38._padding_ & 0xffffffff;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38.Buffer = (FRDGBuffer *)**(undefined8 **)((longlong)this + 0x18);
  local_38._padding_ = 0;
  pFVar11 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_38);
  pFVar9->InClusterOffsetSWHW = pFVar11;
  local_38.Buffer = *(FRDGBuffer **)(*(longlong *)this + 0xd8);
  uVar8 = 0;
  local_38._padding_._1_7_ = (uint7)((ulonglong)local_38._padding_ >> 8) & 0xffffff;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar8 = 0x1c;
  }
  local_38._padding_._0_1_ = uVar8;
  pFVar11 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_38);
  pFVar9->InTotalPrevDrawClusters = pFVar11;
  local_38.Buffer = param_1->DataBuffer;
  uVar8 = 0;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar8 = 0x1c;
  }
  local_38._padding_ = (longlong)CONCAT31((int3)local_38._padding_._1_7_,uVar8);
  pFVar11 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_38);
  pFVar9->RasterBinData = pFVar11;
  local_38.Buffer = param_1->MetaBuffer;
  uVar8 = 0;
  local_38._padding_._1_7_ = (uint7)((ulonglong)local_38._padding_ >> 8) & 0xffffff;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar8 = 0x1c;
  }
  local_38._padding_._0_1_ = uVar8;
  pFVar11 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_38);
  pFVar9->RasterBinMeta = pFVar11;
  local_38.Buffer = *(FRDGBuffer **)(*(longlong *)this + 0x130);
  uVar8 = 0;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_ = 0;
  if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar8 = 0x1c;
  }
  local_38._padding_ = (longlong)CONCAT31((int3)local_38._padding_._1_7_,uVar8);
  pFVar11 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_38);
  pFVar9->AssemblyTransforms = pFVar11;
  pFVar9->TessellationTable_Offsets = (FRHIShaderResourceView *)Nanite::GTessellationTable._40_8_;
  pFVar9->TessellationTable_VertsAndIndexes =
       (FRHIShaderResourceView *)Nanite::GTessellationTable._64_8_;
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)(lVar1 + 0x1b8);
  *(undefined8 *)&(pFVar9->VirtualShadowMap).VirtualShadowMap = *(undefined8 *)(lVar1 + 0x1b0);
  *(undefined8 *)&(pFVar9->VirtualShadowMap).VirtualShadowMap.field_0x8 = uVar2;
  pFVar11 = *(FRDGBufferSRV **)(lVar1 + 0x1c8);
  (pFVar9->VirtualShadowMap).HZBPageTable = *(FRDGTexture **)(lVar1 + 0x1c0);
  (pFVar9->VirtualShadowMap).HZBPageRectBounds = pFVar11;
  pFVar12 = *(FRDGBufferUAV **)(lVar1 + 0x1d8);
  (pFVar9->VirtualShadowMap).HZBPageFlags = *(FRDGTexture **)(lVar1 + 0x1d0);
  (pFVar9->VirtualShadowMap).OutDirtyPageFlags = pFVar12;
  pFVar9->OutStatsBuffer = *(FRDGBufferUAV **)(*(longlong *)this + 0x158);
  if (param_2) {
    local_38.Buffer = (FRDGBuffer *)**(longlong **)((longlong)this + 0x20);
    uVar8 = 0;
    local_38._padding_._1_7_ = (uint7)((ulonglong)local_38._padding_ >> 8) & 0xffffff;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar8 = 0x1c;
    }
    local_38._padding_._0_1_ = uVar8;
    pFVar11 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_38);
    pFVar9->VisiblePatches = pFVar11;
    local_38.Buffer = (FRDGBuffer *)**(longlong **)((longlong)this + 0x28);
    uVar8 = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar8 = 0x1c;
    }
    local_38._padding_ = (longlong)CONCAT31((int3)local_38._padding_._1_7_,uVar8);
    pFVar11 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_38);
    pFVar9->VisiblePatchesArgs = pFVar11;
  }
  pFVar12 = (FRDGBufferUAV *)(*(undefined8 **)((longlong)this + 0x30))[1];
  (pFVar9->SplitWorkQueue).DataBuffer = (FRDGBufferUAV *)**(undefined8 **)((longlong)this + 0x30);
  (pFVar9->SplitWorkQueue).StateBuffer = pFVar12;
  pFVar12 = (pFVar9->SplitWorkQueue).DataBuffer;
  if (pFVar12 != (FRDGBufferUAV *)0x0) {
    pFVar12 = FRDGBuilder::CreateUAV
                        (*(FRDGBuilder **)(**(longlong **)((longlong)this + 0x38) + 8),
                         &pFVar12->Desc,SkipBarrier);
    (pFVar9->SplitWorkQueue).DataBuffer = pFVar12;
  }
  pFVar12 = (pFVar9->SplitWorkQueue).StateBuffer;
  if (pFVar12 != (FRDGBufferUAV *)0x0) {
    pFVar12 = FRDGBuilder::CreateUAV
                        (*(FRDGBuilder **)(**(longlong **)((longlong)this + 0x38) + 8),
                         &pFVar12->Desc,SkipBarrier);
    (pFVar9->SplitWorkQueue).StateBuffer = pFVar12;
  }
  return pFVar9;
}

// operator() @ 144f760d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Binning'::__l25::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  longlong lVar1;
  FRDGResource *this_00;
  code *pcVar2;
  bool bVar3;
  
  if ((*(longlong *)((longlong)this + 0x10) == 0) ||
     (0 < *(int *)(*(longlong *)((longlong)this + 8) + 0x28))) {
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x80) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x183,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = *(FRDGResource **)(lVar1 + 0x80);
    if (((ulonglong)this_00[4].Name & 0x80) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x53c,L"Buffer %s was not flagged for indirect draw usage.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FRDGResource::ValidateRHIAccess(this_00);
    FComputeShaderUtils::DispatchIndirect<FRasterBinBuild_CS>
              (param_2,(TShaderRefBase<FRasterBinBuild_CS,FShaderMapPointerTable> *)
                       ((longlong)this + 0x18),*(FParameters **)this,
               (FRHIBuffer *)this_00->ResourceRHI,0);
  }
  return;
}

// operator() @ 144f76d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_InstanceHierarchyAndClusterCull'::__l12::<lambda_2>::operator()
          (void *this,FInstanceWorkGroupParameters *param_1,TOptional<unsigned_int> param_2,
          bool param_3)

{
  undefined8 uVar1;
  int iVar2;
  FRDGBuffer *pFVar3;
  longlong lVar4;
  longlong lVar5;
  FRDGBuilder *pFVar6;
  code *pcVar7;
  FRDGEventName *pFVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  EUniformBufferBindingFlags EVar11;
  FShaderParametersMetadata *pFVar12;
  FParameters *pFVar13;
  FRDGEventName *pFVar14;
  TIntVector3<int> *pTVar15;
  FRDGEventName *pFVar16;
  longlong *plVar17;
  undefined1 uVar18;
  int iVar19;
  undefined1 auStackY_418 [32];
  TShaderPermutationDomain<FInstanceCull_CS::FCullingPassDim,FInstanceCull_CS::FMultiViewDim,FInstanceCull_CS::FPrimitiveFilterDim,FInstanceCull_CS::FDebugFlagsDim,FInstanceCull_CS::FDepthOnlyDim,FInstanceCull_CS::FVirtualTextureTargetDim,FInstanceCull_CS::FMaterialCacheDim,FInstanceCull_CS::FStaticGeoDim,FInstanceCull_CS::FUseGroupWorkBufferDim>
  local_3d8;
  FRDGBufferSRVDesc local_3c8;
  undefined4 local_3a8;
  TIntVector3<int>_u_0 local_398;
  FRDGBufferSRVDesc local_388;
  FRDGBufferSRVDesc local_368;
  FRDGBufferSRVDesc local_348;
  TShaderRefBase<FInstanceCull_CS,FShaderMapPointerTable> local_328;
  FRDGEventName local_318;
  FRDGEventName local_300;
  undefined1 local_2e8 [128];
  FRDGTextureUAV *local_268;
  FRDGTextureUAV *pFStack_260;
  FRDGTextureUAV *local_258;
  FRDGTextureUAV *pFStack_250;
  FRDGTextureUAV *local_248;
  undefined8 uStack_240;
  FRDGBufferSRV *local_238;
  FRDGBufferSRV *pFStack_230;
  FRDGBufferSRV *local_228;
  FRDGBufferSRV *pFStack_220;
  FRDGBufferSRV *local_218;
  FRDGBufferSRV *local_210;
  FRDGBufferUAV *local_208;
  FRDGBufferUAV *local_200;
  FRDGBufferUAV *local_1f8;
  FRDGBufferUAV *local_1f0;
  FRDGBufferUAV *local_1e8;
  FRDGBufferSRV *pFStack_1e0;
  FRDGBufferSRV *local_1d8;
  TRDGUniformBufferBinding<FVirtualShadowMapUniformParameters> local_1c8;
  FRDGTexture *local_1b8;
  FRDGBufferSRV *pFStack_1b0;
  FRDGTexture *local_1a8;
  FRDGBufferUAV *pFStack_1a0;
  TRDGBufferAccess<4> local_198;
  TShaderRefBase<FInstanceCull_CS,FShaderMapPointerTable> local_188;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_178;
  initializer_list<FRDGResource_*> local_168;
  TShaderRefBase<FInstanceCull_CS,FShaderMapPointerTable> local_158;
  <lambda_1> local_148;
  TIntVector3<int> local_f8;
  FRDGEventName local_e8;
  FRDGEventName local_d0;
  FRDGEventName local_b8;
  FRDGEventName local_a0;
  undefined1 local_88 [40];
  longlong *local_60;
  ulonglong local_58;
  
  pFVar14 = &local_318;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_3a8 = 0;
  local_2e8._80_8_ = (FRDGTexture *)0x0;
  local_2e8._88_8_ = (FRDGTexture *)0x0;
  local_2e8._0_4_ = *(uint *)(*(longlong *)this + 0x54);
  local_2e8._96_8_ = (FRHISamplerState *)0x0;
  local_2e8._104_8_ = (FRDGBufferSRV *)0x0;
  local_268 = (FRDGTextureUAV *)0x0;
  pFStack_260 = (FRDGTextureUAV *)0x0;
  local_258 = (FRDGTextureUAV *)0x0;
  pFStack_250 = (FRDGTextureUAV *)0x0;
  local_248 = (FRDGTextureUAV *)0x0;
  local_238 = (FRDGBufferSRV *)0x0;
  pFStack_230 = (FRDGBufferSRV *)0x0;
  local_228 = (FRDGBufferSRV *)0x0;
  pFStack_220 = (FRDGBufferSRV *)0x0;
  local_210 = (FRDGBufferSRV *)0x0;
  local_200 = (FRDGBufferUAV *)0x0;
  local_1f0 = (FRDGBufferUAV *)0x0;
  local_1e8 = (FRDGBufferUAV *)0x0;
  pFStack_1e0 = (FRDGBufferSRV *)0x0;
  local_1d8 = (FRDGBufferSRV *)0x0;
  local_1c8._0_8_ = 0;
  local_1c8._8_1_ = 1;
  local_1b8 = (FRDGTexture *)0x0;
  pFStack_1b0 = (FRDGBufferSRV *)0x0;
  local_1a8 = (FRDGTexture *)0x0;
  pFStack_1a0 = (FRDGBufferUAV *)0x0;
  local_198._0_8_ = 0;
  local_198._8_4_ = 4;
  local_2e8._4_4_ = Nanite::FGlobalResources::GetMaxNodes();
  pTVar9 = CVarNaniteImposterMaxPixels.Ref;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2e8._8_4_ = pTVar9->ShadowedValue[1];
  pFVar3 = *(FRDGBuffer **)(*(longlong *)this + 0x20);
  local_2e8._16_4_ = (uint)param_3;
  pFVar12 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  lVar4 = *(longlong *)this;
  EVar11 = Static;
  if (pFVar12->BindingFlags != StaticAndShader) {
    EVar11 = pFVar12->BindingFlags;
  }
  local_3c8._padding_._0_4_ = CONCAT31(local_3c8._padding_._1_3_,EVar11);
  lVar5 = *(longlong *)(lVar4 + 0x30);
  local_2e8._124_4_ = local_3c8._padding_._4_4_;
  local_2e8._120_4_ = (undefined4)local_3c8._padding_;
  local_268 = *(FRDGTextureUAV **)(lVar5 + 0x20);
  pFStack_260 = *(FRDGTextureUAV **)(lVar5 + 0x28);
  local_258 = *(FRDGTextureUAV **)(lVar5 + 0x30);
  pFStack_250 = *(FRDGTextureUAV **)(lVar5 + 0x38);
  local_248 = *(FRDGTextureUAV **)(lVar5 + 0x40);
  uStack_240 = *(undefined8 *)(lVar5 + 0x48);
  local_2e8._32_8_ = *(undefined8 *)(lVar4 + 0x160);
  local_2e8._40_8_ = *(undefined8 *)(lVar4 + 0x168);
  local_2e8._48_8_ = *(undefined8 *)(lVar4 + 0x170);
  local_2e8._56_8_ = *(undefined8 *)(lVar4 + 0x178);
  local_2e8._64_8_ = *(undefined8 *)(lVar4 + 0x180);
  local_2e8._72_8_ = *(TVector2<float>_u_0 *)(lVar4 + 0x188);
  local_2e8._80_8_ = *(undefined8 *)(lVar4 + 400);
  local_2e8._88_8_ = *(undefined8 *)(lVar4 + 0x198);
  local_2e8._96_8_ = *(undefined8 *)(lVar4 + 0x1a0);
  local_2e8._104_8_ = *(undefined8 *)(lVar4 + 0x1a8);
  local_3c8._padding_ = (longlong)pFVar3;
  local_2e8._112_8_ = pFVar3;
  local_218 = Nanite::FStreamingManager::GetImposterDataSRV
                        ((FStreamingManager *)&Nanite::GStreamingManager,
                         *(FRDGBuilder **)(lVar4 + 8));
  lVar4 = *(longlong *)this;
  local_1c8._0_8_ = *(undefined8 *)(lVar4 + 0x1b0);
  local_1c8._8_8_ = *(undefined8 *)(lVar4 + 0x1b8);
  local_1b8 = *(FRDGTexture **)(lVar4 + 0x1c0);
  pFStack_1b0 = *(FRDGBufferSRV **)(lVar4 + 0x1c8);
  local_1f8 = (FRDGBufferUAV *)**(undefined8 **)((longlong)this + 8);
  local_1a8 = *(FRDGTexture **)(lVar4 + 0x1d0);
  pFStack_1a0 = *(FRDGBufferUAV **)(lVar4 + 0x1d8);
  if (*(longlong *)(lVar4 + 0x150) != 0) {
    local_1e8 = *(FRDGBufferUAV **)(lVar4 + 0x158);
  }
  local_208 = (FRDGBufferUAV *)**(undefined8 **)((longlong)this + 0x10);
  if (**(int **)((longlong)this + 0x18) == 0) {
    pFVar3 = *(FRDGBuffer **)(lVar4 + 0xf0);
    if (pFVar3 != (FRDGBuffer *)0x0) {
      local_388._padding_._4_4_ = 0;
      local_388._padding_._0_4_ = 0xffffffff;
      local_388._padding_ = 0;
      local_388._padding_._0_1_ = 0;
      if (((pFVar3->Desc).Usage & DrawIndirect) != None) {
        local_388._padding_._0_1_ = 0x1c;
      }
      local_388.Buffer = pFVar3;
      local_210 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(lVar4 + 8),&local_388);
    }
  }
  else if (**(int **)((longlong)this + 0x18) == 1) {
    local_200 = (FRDGBufferUAV *)**(undefined8 **)((longlong)this + 0x20);
    local_1f0 = (FRDGBufferUAV *)**(undefined8 **)((longlong)this + 0x28);
  }
  else if (param_1->InInstanceWorkArgs == (FRDGBufferSRV *)0x0) {
    local_368.Buffer = *(FRDGBuffer **)(lVar4 + 200);
    local_368._padding_._0_1_ = 0;
    local_368._padding_._4_4_ = 0;
    local_368._padding_._0_4_ = 0xffffffff;
    local_368._padding_ = 0;
    if ((((local_368.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_368._padding_._0_1_ = 0x1c;
    }
    local_210 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(lVar4 + 8),&local_368);
    local_348.Buffer = *(FRDGBuffer **)(*(longlong *)this + 0xd0);
    local_348._padding_._0_1_ = 0;
    local_348._padding_._4_4_ = 0;
    local_348._padding_._0_4_ = 0xffffffff;
    local_348._padding_ = 0;
    if ((((local_348.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_348._padding_._0_1_ = 0x1c;
    }
    pFStack_1e0 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_348);
  }
  local_238 = param_1->InInstanceWorkArgs;
  pFStack_230 = param_1->InInstanceWorkGroups;
  local_228 = param_1->InViewDrawRanges;
  pFStack_220 = param_1->InstanceIds;
  pFVar3 = *(FRDGBuffer **)(*(longlong *)this + 0xf8);
  if (pFVar3 != (FRDGBuffer *)0x0) {
    uVar18 = 0;
    local_3c8._padding_._0_4_ = 0xffffffff;
    local_3c8._padding_ = 0;
    if (((pFVar3->Desc).Usage & DrawIndirect) != None) {
      uVar18 = 0x1c;
    }
    local_3c8._padding_ = CONCAT71((int7)((ulonglong)local_3c8._padding_ >> 8),uVar18) & 0xffffffff;
    local_3c8.Buffer = pFVar3;
    local_1d8 = FRDGBuilder::CreateSRV(*(FRDGBuilder **)(*(longlong *)this + 8),&local_3c8);
  }
  if ((*(longlong *)(*(longlong *)this + 0xe8) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ViewsBuffer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x115c,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar4 = *(longlong *)this;
  lVar5 = *(longlong *)(lVar4 + 0xf0);
  if (lVar5 == 0) {
    iVar19 = **(int **)((longlong)this + 0x18);
  }
  else {
    iVar19 = 3;
  }
  local_3d8.Tail.Tail.DimensionValue = *(longlong *)(lVar4 + 0xf8) != 0;
  local_3d8.Tail.DimensionValue = *(bool *)(lVar4 + 0x58);
  local_3d8.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  if ((*(int *)(lVar4 + 0x50) == 0) && ((*(uint *)(lVar4 + 0x4c) & 0x8000) == 0)) {
    local_3d8.Tail.Tail.Tail.DimensionValue = false;
  }
  else {
    local_3d8.Tail.Tail.Tail.DimensionValue = true;
  }
  local_3d8.Tail.Tail.Tail.Tail.DimensionValue =
       *(char *)(*(longlong *)(lVar4 + 0x30) + 0x10) == '\x01';
  local_3d8.DimensionValue = iVar19;
  if (((*(longlong *)(lVar4 + 0x38) != 0) && (lVar5 != 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!(IsUsingVirtualShadowMap() && bUseExplicitListCullingPass)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x1166,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((param_1->InInstanceWorkArgs != (FRDGBufferSRV *)0x0) && (lVar5 != 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!(IsValid(InstanceWorkGroupParameters) && bUseExplicitListCullingPass)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x1167,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar4 = *(longlong *)this;
  if ((*(longlong *)(lVar4 + 0x38) == 0) || (lVar5 != 0)) {
    local_3d8.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  }
  else {
    local_3d8.Tail.Tail.Tail.Tail.Tail.DimensionValue = true;
  }
  local_3d8.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = (bool)(*(byte *)(lVar4 + 0x4e) & 1);
  if ((param_1->InInstanceWorkArgs == (FRDGBufferSRV *)0x0) || (lVar5 != 0)) {
    local_3d8.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
    FGlobalShaderMap::GetShader<FInstanceCull_CS>
              ((FGlobalShaderMap *)**(undefined8 **)(lVar4 + 0x28),&local_328,&local_3d8);
    pFVar13 = FRDGBuilder::AllocParameters<FInstanceCull_CS::FParameters>
                        (*(FRDGBuilder **)(*(longlong *)this + 8),(FParameters *)local_2e8);
    if (iVar19 == 2) {
      local_3c8._padding_ = *(longlong *)(*(longlong *)this + 0xd0);
      local_3c8._padding_._0_4_ = 4;
      local_88._0_8_ = 0;
      local_60 = (longlong *)0x0;
      *(longlong *)&pFVar13->IndirectArgs = local_3c8._padding_;
      *(ulonglong *)&(pFVar13->IndirectArgs).field_0x8 = CONCAT44(local_3c8._padding_._4_4_,4);
      pFVar3 = *(FRDGBuffer **)&pFVar13->IndirectArgs;
      pFVar14 = FRDGEventName::FRDGEventName(&local_d0,1,L"InstanceCull");
      FComputeShaderUtils::AddPass<FInstanceCull_CS>
                (*(FRDGBuilder **)(*(longlong *)this + 8),pFVar14,Compute,&local_328,pFVar13,pFVar3,
                 0,(TFunction<void___cdecl(void)> *)local_88);
      if (local_d0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_d0.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_88._0_8_ == 0) {
        return;
      }
      plVar17 = (longlong *)(local_88 + 0x10);
      if (local_60 != (longlong *)0x0) {
        plVar17 = local_60;
      }
      (**(code **)(*plVar17 + 0x10))();
      return;
    }
    pTVar15 = FComputeShaderUtils::GetGroupCountWrapped
                        (&local_f8,*(int *)(*(longlong *)this + 0x54),0x40);
    uVar1 = *(undefined8 *)&pTVar15->field0_0x0;
    iVar2 = (pTVar15->field0_0x0)._s_0.Z;
    bVar10 = iVar19 != 3;
    if (bVar10) {
      pFVar16 = FRDGEventName::FRDGEventName(&local_b8,1,L"InstanceCull");
      pFVar8 = &local_318;
      local_318.EventFormat = pFVar16->EventFormat;
    }
    else {
      pFVar16 = FRDGEventName::FRDGEventName(&local_a0,1,L"InstanceCull - Explicit List");
      pFVar14 = &local_300;
      local_300.EventFormat = pFVar16->EventFormat;
      pFVar8 = &local_300;
    }
    ::FString::FString(&pFVar8->FormattedEventName,&pFVar16->FormattedEventName);
    pFVar6 = *(FRDGBuilder **)(*(longlong *)this + 8);
    pFVar12 = FInstanceCull_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_398._0_8_ = uVar1;
    local_398._s_0.Z = iVar2;
    FComputeShaderUtils::AddPass<FInstanceCull_CS>
              (pFVar6,pFVar14,Compute,&local_328,pFVar12,pFVar13,(TIntVector3<int> *)&local_398._s_0
              );
    if ((bVar10) &&
       (local_318.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
    {
      FMemory::Free(local_318.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if ((bVar10) &&
       (local_b8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
    {
      FMemory::Free(local_b8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if ((!bVar10) &&
       (local_300.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
    {
      FMemory::Free(local_300.FormattedEventName.Data.AllocatorInstance.Data);
    }
    local_e8.FormattedEventName.Data.AllocatorInstance.Data =
         local_a0.FormattedEventName.Data.AllocatorInstance.Data;
    if (bVar10) {
      return;
    }
  }
  else {
    local_3d8.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = true;
    pFVar13 = FRDGBuilder::AllocParameters<FInstanceCull_CS::FParameters>
                        (*(FRDGBuilder **)(lVar4 + 8),(FParameters *)local_2e8);
    local_3c8._padding_._0_4_ = 4;
    local_3c8._padding_ = (longlong)(param_1->InInstanceWorkArgs->Desc).Buffer;
    *(longlong *)&pFVar13->IndirectArgs = local_3c8._padding_;
    *(ulonglong *)&(pFVar13->IndirectArgs).field_0x8 = CONCAT44(local_3c8._padding_._4_4_,4);
    FGlobalShaderMap::GetShader<FInstanceCull_CS>
              ((FGlobalShaderMap *)**(undefined8 **)(*(longlong *)this + 0x28),&local_188,&local_3d8
              );
    local_3d8.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = true;
    FGlobalShaderMap::GetShader<FInstanceCull_CS>
              ((FGlobalShaderMap *)**(undefined8 **)(*(longlong *)this + 0x28),&local_158,&local_3d8
              );
    pFVar12 = FInstanceCull_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_178.ShaderContent = (FShader *)local_188.ShaderContent;
    local_178.ShaderMap = local_188.ShaderMap;
    ValidateShaderParameters(&local_178,pFVar12,pFVar13);
    local_168._First = (FRDGResource **)0x0;
    local_168._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl
              ((FShaderParameterBindings *)local_188.ShaderContent,pFVar12,pFVar13,&local_168);
    lVar4 = *(longlong *)this;
    local_148.DeferredSetupContext = *(FDeferredSetupContext **)(lVar4 + 0x278);
    pFVar6 = *(FRDGBuilder **)(lVar4 + 8);
    local_148.bAllowStaticGeometryPath = *(bool *)(lVar4 + 0x1e1);
    local_148.MaxInstanceWorkGroupsOverride.bIsSet = *(bool *)((longlong)param_2 + 4);
    if (local_148.MaxInstanceWorkGroupsOverride.bIsSet != false) {
      local_148.MaxInstanceWorkGroupsOverride.TypedValue = *(uint *)param_2;
    }
    local_148.PermutationVector.Tail.DimensionValue = local_3d8.Tail.DimensionValue;
    local_148.PermutationVector.DimensionValue = local_3d8.DimensionValue;
    local_148.PermutationVector.Tail.Tail.DimensionValue = local_3d8.Tail.Tail.DimensionValue;
    local_148.PermutationVector.Tail.Tail.Tail.DimensionValue =
         local_3d8.Tail.Tail.Tail.DimensionValue;
    local_148.PermutationVector.Tail.Tail.Tail.Tail.DimensionValue =
         local_3d8.Tail.Tail.Tail.Tail.DimensionValue;
    local_148.PermutationVector.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue =
         local_3d8.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
    local_148.PermutationVector.Tail.Tail.Tail.Tail.Tail.DimensionValue =
         local_3d8.Tail.Tail.Tail.Tail.Tail.DimensionValue;
    local_148.PermutationVector.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue =
         local_3d8.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
    local_148.PermutationVector.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue =
         local_3d8.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue;
    local_148.PermutationVector.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail =
         local_3d8.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail.Tail;
    local_148.PermutationVector._13_3_ = local_3d8._13_3_;
    local_148.GeneralComputeShader.ShaderContent = local_188.ShaderContent;
    local_148.GeneralComputeShader.ShaderMap = local_188.ShaderMap;
    local_148.StaticComputeShader.ShaderContent = local_158.ShaderContent;
    local_148.StaticComputeShader.ShaderMap = local_158.ShaderMap;
    local_148.PassParameters = pFVar13;
    pFVar14 = FRDGEventName::FRDGEventName(&local_e8,1,L"InstanceCull - GroupWork");
    pFVar12 = FInstanceCull_CS::FParameters::FTypeInfo::GetStructMetadata();
    FRDGBuilder::
    AddPassInternal<FInstanceCull_CS::FParameters,__Nanite::FRenderer::AddPass_InstanceHierarchyAndClusterCull_::__l12::<lambda_2>::operator()_::__l46::<lambda_1>_>
              (pFVar6,pFVar14,pFVar12,pFVar13,Compute,&local_148);
  }
  if (local_e8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 144f77710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_PatchSplit'::__l19::<lambda_3>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FPatchSplitCS,FShaderMapPointerTable> *this_00;
  longlong lVar1;
  FRDGResource *this_01;
  FRHIBuffer *pFVar2;
  void *pvVar3;
  FPatchSplitCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  FRHIComputeShader *pFVar8;
  FRHIBatchedShaderUnbinds *pFVar9;
  uint uVar10;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  if (0 < *(int *)(*(longlong *)((longlong)this + 8) + 0x28)) {
    lVar1 = *(longlong *)this;
    uVar10 = *(int *)((longlong)this + 0x20) << 5;
    if ((*(longlong *)(lVar1 + 0x140) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x183,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_01 = *(FRDGResource **)(lVar1 + 0x140);
    if ((((ulonglong)this_01[4].Name & 0x80) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                           ,0x53c,L"Buffer %s was not flagged for indirect draw usage."), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRDGResource::ValidateRHIAccess(this_01);
    pFVar2 = (FRHIBuffer *)this_01->ResourceRHI;
    this_00 = (TShaderRefBase<FPatchSplitCS,FShaderMapPointerTable> *)((longlong)this + 0x10);
    pvVar3 = *(void **)this;
    FComputeShaderUtils::ValidateIndirectArgsBuffer((pFVar2->Desc).Size,uVar10);
    pFVar7 = FPatchSplitCS::FParameters::FTypeInfo::GetStructMetadata();
    pFVar8 = TShaderRefBase<FPatchSplitCS,FShaderMapPointerTable>::GetComputeShader(this_00);
    SetComputePipelineState(param_2,pFVar8);
    local_28.ShaderContent = (FShader *)this_00->ShaderContent;
    local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
    ValidateShaderParameters(&local_28,pFVar7,pvVar3);
    ::SetShaderParameters
              (param_2,pFVar8,(FShaderParameterBindings *)this_00->ShaderContent,pFVar7,pvVar3);
    FRHIComputeCommandList::DispatchIndirectComputeShader(param_2,pFVar2,uVar10);
    pFVar8 = TShaderRefBase<FPatchSplitCS,FShaderMapPointerTable>::GetComputeShader(this_00);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar9 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
      pFVar4 = this_00->ShaderContent;
      if ((*(short *)&pFVar4->field_0x54 != -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UnsetShaderUAVs(pFVar9,(FShaderParameterBindings *)pFVar4);
      FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar8,pFVar9);
    }
  }
  return;
}

// operator() @ 144f778e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Rasterize'::__l23::<lambda_3>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  FDispatchContext *this_00;
  FViewInfo *pFVar1;
  undefined8 uVar2;
  FRDGTextureUAV *pFVar3;
  FRDGTextureUAV *pFVar4;
  FRDGTextureUAV *pFVar5;
  FRDGTextureUAV *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferSRV *pFVar11;
  FRDGBufferSRV *pFVar12;
  FRDGBufferSRV *pFVar13;
  FRHIShaderResourceView *pFVar14;
  FRasterizePassParameters *pFVar15;
  undefined8 *puVar16;
  FRasterizePassParameters *pFVar17;
  undefined8 *puVar18;
  longlong lVar19;
  FRasterizePassParameters local_138;
  
  this_00 = *(FDispatchContext **)((longlong)this + 8);
  if (0 < (this_00->Dispatches_SW_Tessellated).Indirections.ArrayNum) {
    lVar19 = 2;
    pFVar15 = &local_138;
    puVar16 = *(undefined8 **)this;
    do {
      puVar18 = puVar16;
      pFVar17 = pFVar15;
      uVar2 = puVar18[1];
      pFVar3 = (FRDGTextureUAV *)puVar18[2];
      pFVar4 = (FRDGTextureUAV *)puVar18[3];
      *(undefined8 *)&pFVar17->Scene = *puVar18;
      *(undefined8 *)&(pFVar17->Scene).field_0x8 = uVar2;
      pFVar5 = (FRDGTextureUAV *)puVar18[4];
      pFVar6 = (FRDGTextureUAV *)puVar18[5];
      (pFVar17->RasterParameters).OutDepthBuffer = pFVar3;
      (pFVar17->RasterParameters).OutDepthBufferArray = pFVar4;
      pFVar3 = (FRDGTextureUAV *)puVar18[6];
      uVar2 = puVar18[7];
      (pFVar17->RasterParameters).OutVisBuffer64 = pFVar5;
      (pFVar17->RasterParameters).OutDbgBuffer64 = pFVar6;
      uVar7 = puVar18[8];
      uVar8 = puVar18[9];
      (pFVar17->RasterParameters).OutDbgBuffer32 = pFVar3;
      *(undefined8 *)&(pFVar17->RasterParameters).field_0x28 = uVar2;
      uVar2 = puVar18[10];
      uVar9 = puVar18[0xb];
      *(undefined8 *)&pFVar17->NaniteRaster = uVar7;
      *(undefined8 *)&(pFVar17->NaniteRaster).field_0x8 = uVar8;
      pFVar10 = (FRDGBufferSRV *)puVar18[0xc];
      pFVar11 = (FRDGBufferSRV *)puVar18[0xd];
      *(undefined8 *)&(pFVar17->PassData).field0_0x0 = uVar2;
      *(undefined8 *)((longlong)&(pFVar17->PassData).field0_0x0 + 8) = uVar9;
      pFVar12 = (FRDGBufferSRV *)puVar18[0xe];
      pFVar13 = (FRDGBufferSRV *)puVar18[0xf];
      pFVar17->ClusterPageData = pFVar10;
      pFVar17->HierarchyBuffer = pFVar11;
      pFVar17->InViews = pFVar12;
      pFVar17->VisibleClustersSWHW = pFVar13;
      lVar19 = lVar19 + -1;
      pFVar15 = (FRasterizePassParameters *)&pFVar17->InTotalPrevDrawClusters;
      puVar16 = puVar18 + 0x10;
    } while (lVar19 != 0);
    pFVar10 = (FRDGBufferSRV *)puVar18[0x11];
    pFVar11 = (FRDGBufferSRV *)puVar18[0x12];
    pFVar12 = (FRDGBufferSRV *)puVar18[0x13];
    pFVar1 = *(FViewInfo **)((longlong)this + 0x10);
    pFVar17->InTotalPrevDrawClusters = (FRDGBufferSRV *)puVar18[0x10];
    pFVar17->RasterBinData = pFVar10;
    pFVar10 = (FRDGBufferSRV *)puVar18[0x14];
    pFVar14 = (FRHIShaderResourceView *)puVar18[0x15];
    pFVar17->RasterBinMeta = pFVar11;
    pFVar17->AssemblyTransforms = pFVar12;
    pFVar17->InClusterOffsetSWHW = pFVar10;
    pFVar17->TessellationTable_Offsets = pFVar14;
    Nanite::FRenderer::FDispatchContext::DispatchSW
              (this_00,param_2,&this_00->Dispatches_SW_Tessellated,pFVar1,
               *(int *)((longlong)this + 0x1c),&local_138,false);
  }
  return;
}

// operator() @ 144f77a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Binning'::__l26::<lambda_3>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FRasterBinReserve_CS,FShaderMapPointerTable> *this_00;
  undefined8 uVar1;
  uint uVar2;
  void *pvVar3;
  FRasterBinReserve_CS *pFVar4;
  code *pcVar5;
  bool bVar6;
  TIntVector3<int> *pTVar7;
  FShaderParametersMetadata *pFVar8;
  FRHIComputeShader *pFVar9;
  FRHIBatchedShaderUnbinds *pFVar10;
  TIntVector3<int>_u_0 local_58;
  undefined8 local_48;
  TIntVector3<int> local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  if ((*(longlong *)((longlong)this + 0x10) == 0) ||
     (0 < *(int *)(*(longlong *)((longlong)this + 8) + 0x28))) {
    pTVar7 = FComputeShaderUtils::GetGroupCountWrapped
                       (&local_38,*(int *)((longlong)this + 0x28),0x40);
    pvVar3 = *(void **)this;
    this_00 = (TShaderRefBase<FRasterBinReserve_CS,FShaderMapPointerTable> *)((longlong)this + 0x18)
    ;
    uVar1 = *(undefined8 *)&pTVar7->field0_0x0;
    uVar2 = (pTVar7->field0_0x0)._s_0.Z;
    local_48 = uVar1;
    pFVar8 = FRasterBinReserve_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_58._0_8_ = uVar1;
    local_58._s_0.Z = uVar2;
    FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_58._s_0);
    pFVar9 = TShaderRefBase<FRasterBinReserve_CS,FShaderMapPointerTable>::GetComputeShader(this_00);
    SetComputePipelineState(param_2,pFVar9);
    local_28.ShaderContent = (FShader *)this_00->ShaderContent;
    local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x20);
    ValidateShaderParameters(&local_28,pFVar8,pvVar3);
    ::SetShaderParameters
              (param_2,pFVar9,(FShaderParameterBindings *)this_00->ShaderContent,pFVar8,pvVar3);
    FRHIComputeCommandList::DispatchComputeShader(param_2,(uint)local_48,local_48._4_4_,uVar2);
    pFVar9 = TShaderRefBase<FRasterBinReserve_CS,FShaderMapPointerTable>::GetComputeShader(this_00);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
      pFVar4 = this_00->ShaderContent;
      if ((*(short *)&pFVar4->field_0x54 != -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UnsetShaderUAVs(pFVar10,(FShaderParameterBindings *)pFVar4);
      FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar9,pFVar10);
    }
  }
  return;
}

// operator() @ 144f77c10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Rasterize'::__l2::<lambda_4>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FDispatchContext *this_00;
  FViewInfo *pFVar1;
  undefined8 uVar2;
  FRDGTextureUAV *pFVar3;
  FRDGTextureUAV *pFVar4;
  FRDGTextureUAV *pFVar5;
  FRDGTextureUAV *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferSRV *pFVar11;
  FRDGBufferSRV *pFVar12;
  FRDGBufferSRV *pFVar13;
  FRHIShaderResourceView *pFVar14;
  FRasterizePassParameters *pFVar15;
  undefined8 *puVar16;
  FRasterizePassParameters *pFVar17;
  undefined8 *puVar18;
  longlong lVar19;
  FRasterizePassParameters local_138;
  
  lVar19 = 2;
  pFVar15 = &local_138;
  puVar16 = *(undefined8 **)this;
  do {
    puVar18 = puVar16;
    pFVar17 = pFVar15;
    uVar2 = puVar18[1];
    pFVar3 = (FRDGTextureUAV *)puVar18[2];
    pFVar4 = (FRDGTextureUAV *)puVar18[3];
    *(undefined8 *)&pFVar17->Scene = *puVar18;
    *(undefined8 *)&(pFVar17->Scene).field_0x8 = uVar2;
    pFVar5 = (FRDGTextureUAV *)puVar18[4];
    pFVar6 = (FRDGTextureUAV *)puVar18[5];
    (pFVar17->RasterParameters).OutDepthBuffer = pFVar3;
    (pFVar17->RasterParameters).OutDepthBufferArray = pFVar4;
    pFVar3 = (FRDGTextureUAV *)puVar18[6];
    uVar2 = puVar18[7];
    (pFVar17->RasterParameters).OutVisBuffer64 = pFVar5;
    (pFVar17->RasterParameters).OutDbgBuffer64 = pFVar6;
    uVar7 = puVar18[8];
    uVar8 = puVar18[9];
    (pFVar17->RasterParameters).OutDbgBuffer32 = pFVar3;
    *(undefined8 *)&(pFVar17->RasterParameters).field_0x28 = uVar2;
    uVar2 = puVar18[10];
    uVar9 = puVar18[0xb];
    *(undefined8 *)&pFVar17->NaniteRaster = uVar7;
    *(undefined8 *)&(pFVar17->NaniteRaster).field_0x8 = uVar8;
    pFVar10 = (FRDGBufferSRV *)puVar18[0xc];
    pFVar11 = (FRDGBufferSRV *)puVar18[0xd];
    *(undefined8 *)&(pFVar17->PassData).field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(pFVar17->PassData).field0_0x0 + 8) = uVar9;
    pFVar12 = (FRDGBufferSRV *)puVar18[0xe];
    pFVar13 = (FRDGBufferSRV *)puVar18[0xf];
    pFVar17->ClusterPageData = pFVar10;
    pFVar17->HierarchyBuffer = pFVar11;
    pFVar17->InViews = pFVar12;
    pFVar17->VisibleClustersSWHW = pFVar13;
    lVar19 = lVar19 + -1;
    pFVar15 = (FRasterizePassParameters *)&pFVar17->InTotalPrevDrawClusters;
    puVar16 = puVar18 + 0x10;
  } while (lVar19 != 0);
  pFVar10 = (FRDGBufferSRV *)puVar18[0x11];
  this_00 = *(FDispatchContext **)((longlong)this + 8);
  pFVar11 = (FRDGBufferSRV *)puVar18[0x12];
  pFVar12 = (FRDGBufferSRV *)puVar18[0x13];
  pFVar1 = *(FViewInfo **)((longlong)this + 0x20);
  pFVar17->InTotalPrevDrawClusters = (FRDGBufferSRV *)puVar18[0x10];
  pFVar17->RasterBinData = pFVar10;
  pFVar10 = (FRDGBufferSRV *)puVar18[0x14];
  pFVar14 = (FRHIShaderResourceView *)puVar18[0x15];
  pFVar17->RasterBinMeta = pFVar11;
  pFVar17->AssemblyTransforms = pFVar12;
  pFVar17->InClusterOffsetSWHW = pFVar10;
  pFVar17->TessellationTable_Offsets = pFVar14;
  Nanite::FRenderer::FDispatchContext::DispatchHW
            (this_00,param_2,&this_00->Dispatches_HW_Triangles,pFVar1,
             (TIntRect<int> *)((longlong)this + 0x10),
             *(ERasterHardwarePath *)((longlong)this + 0x29),*(int *)((longlong)this + 0x2c),
             &local_138);
  return;
}

// operator() @ 144f77ce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_PatchSplit'::__l20::<lambda_4>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FInitVisiblePatchesArgsCS,FShaderMapPointerTable> *this_00;
  void *pvVar1;
  FInitVisiblePatchesArgsCS *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  FRHIComputeShader *pFVar6;
  FRHIBatchedShaderUnbinds *pFVar7;
  TIntVector3<int>_u_0 local_28;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_18;
  
  if (0 < *(int *)(*(longlong *)((longlong)this + 8) + 0x28)) {
    pvVar1 = *(void **)this;
    this_00 = (TShaderRefBase<FInitVisiblePatchesArgsCS,FShaderMapPointerTable> *)
              ((longlong)this + 0x10);
    pFVar5 = FInitVisiblePatchesArgsCS::FParameters::FTypeInfo::GetStructMetadata();
    local_28._s_0.X = 1;
    local_28._s_0.Y = 1;
    local_28._s_0.Z = 1;
    FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_28._s_0);
    pFVar6 = TShaderRefBase<FInitVisiblePatchesArgsCS,FShaderMapPointerTable>::GetComputeShader
                       (this_00);
    SetComputePipelineState(param_2,pFVar6);
    local_18.ShaderContent = (FShader *)this_00->ShaderContent;
    local_18.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
    ValidateShaderParameters(&local_18,pFVar5,pvVar1);
    ::SetShaderParameters
              (param_2,pFVar6,(FShaderParameterBindings *)this_00->ShaderContent,pFVar5,pvVar1);
    FRHIComputeCommandList::DispatchComputeShader(param_2,1,1,1);
    pFVar6 = TShaderRefBase<FInitVisiblePatchesArgsCS,FShaderMapPointerTable>::GetComputeShader
                       (this_00);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar7 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
      pFVar2 = this_00->ShaderContent;
      if ((*(short *)&pFVar2->field_0x54 != -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnsetShaderUAVs(pFVar7,(FShaderParameterBindings *)pFVar2);
      FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar6,pFVar7);
    }
  }
  return;
}

// operator() @ 144f77f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Binning'::__l29::<lambda_4>::operator()
          (void *this,FRHIComputeCommandList *param_1)

{
  TShaderRefBase<FRasterBinDepthBlock_CS,FShaderMapPointerTable> *this_00;
  uint uVar1;
  void *pvVar2;
  FRasterBinDepthBlock_CS *pFVar3;
  code *pcVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  FRHIComputeShader *pFVar7;
  FRHIBatchedShaderUnbinds *pFVar8;
  TIntVector3<int>_u_0 local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  if ((*(longlong *)((longlong)this + 0x10) == 0) ||
     (0 < *(int *)(*(longlong *)((longlong)this + 8) + 0x28))) {
    uVar1 = *(uint *)(*(longlong *)((longlong)this + 8) + 0x88);
    pvVar2 = *(void **)this;
    this_00 = (TShaderRefBase<FRasterBinDepthBlock_CS,FShaderMapPointerTable> *)
              ((longlong)this + 0x18);
    pFVar6 = FRasterBinDepthBlock_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_38._s_0.Y = 1;
    local_38._s_0.Z = 1;
    local_38._s_0.X = uVar1;
    FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_38._s_0);
    pFVar7 = TShaderRefBase<FRasterBinDepthBlock_CS,FShaderMapPointerTable>::GetComputeShader
                       (this_00);
    SetComputePipelineState(param_1,pFVar7);
    local_28.ShaderContent = (FShader *)this_00->ShaderContent;
    local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x20);
    ValidateShaderParameters(&local_28,pFVar6,pvVar2);
    ::SetShaderParameters
              (param_1,pFVar7,(FShaderParameterBindings *)this_00->ShaderContent,pFVar6,pvVar2);
    FRHIComputeCommandList::DispatchComputeShader(param_1,uVar1,1,1);
    pFVar7 = TShaderRefBase<FRasterBinDepthBlock_CS,FShaderMapPointerTable>::GetComputeShader
                       (this_00);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar8 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
      pFVar3 = this_00->ShaderContent;
      if ((*(short *)&pFVar3->field_0x54 != -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnsetShaderUAVs(pFVar8,(FShaderParameterBindings *)pFVar3);
      FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar7,pFVar8);
    }
  }
  return;
}

// operator() @ 144f784a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Rasterize'::__l26::<lambda_5>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  FDispatchContext *this_00;
  FViewInfo *pFVar1;
  undefined8 uVar2;
  FRDGTextureUAV *pFVar3;
  FRDGTextureUAV *pFVar4;
  FRDGTextureUAV *pFVar5;
  FRDGTextureUAV *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferSRV *pFVar11;
  FRDGBufferSRV *pFVar12;
  FRDGBufferSRV *pFVar13;
  FRHIShaderResourceView *pFVar14;
  FRasterizePassParameters *pFVar15;
  undefined8 *puVar16;
  FRasterizePassParameters *pFVar17;
  undefined8 *puVar18;
  longlong lVar19;
  FRasterizePassParameters local_138;
  
  lVar19 = 2;
  pFVar15 = &local_138;
  puVar16 = *(undefined8 **)this;
  do {
    puVar18 = puVar16;
    pFVar17 = pFVar15;
    uVar2 = puVar18[1];
    pFVar3 = (FRDGTextureUAV *)puVar18[2];
    pFVar4 = (FRDGTextureUAV *)puVar18[3];
    *(undefined8 *)&pFVar17->Scene = *puVar18;
    *(undefined8 *)&(pFVar17->Scene).field_0x8 = uVar2;
    pFVar5 = (FRDGTextureUAV *)puVar18[4];
    pFVar6 = (FRDGTextureUAV *)puVar18[5];
    (pFVar17->RasterParameters).OutDepthBuffer = pFVar3;
    (pFVar17->RasterParameters).OutDepthBufferArray = pFVar4;
    pFVar3 = (FRDGTextureUAV *)puVar18[6];
    uVar2 = puVar18[7];
    (pFVar17->RasterParameters).OutVisBuffer64 = pFVar5;
    (pFVar17->RasterParameters).OutDbgBuffer64 = pFVar6;
    uVar7 = puVar18[8];
    uVar8 = puVar18[9];
    (pFVar17->RasterParameters).OutDbgBuffer32 = pFVar3;
    *(undefined8 *)&(pFVar17->RasterParameters).field_0x28 = uVar2;
    uVar2 = puVar18[10];
    uVar9 = puVar18[0xb];
    *(undefined8 *)&pFVar17->NaniteRaster = uVar7;
    *(undefined8 *)&(pFVar17->NaniteRaster).field_0x8 = uVar8;
    pFVar10 = (FRDGBufferSRV *)puVar18[0xc];
    pFVar11 = (FRDGBufferSRV *)puVar18[0xd];
    *(undefined8 *)&(pFVar17->PassData).field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(pFVar17->PassData).field0_0x0 + 8) = uVar9;
    pFVar12 = (FRDGBufferSRV *)puVar18[0xe];
    pFVar13 = (FRDGBufferSRV *)puVar18[0xf];
    pFVar17->ClusterPageData = pFVar10;
    pFVar17->HierarchyBuffer = pFVar11;
    pFVar17->InViews = pFVar12;
    pFVar17->VisibleClustersSWHW = pFVar13;
    lVar19 = lVar19 + -1;
    pFVar15 = (FRasterizePassParameters *)&pFVar17->InTotalPrevDrawClusters;
    puVar16 = puVar18 + 0x10;
  } while (lVar19 != 0);
  pFVar10 = (FRDGBufferSRV *)puVar18[0x11];
  this_00 = *(FDispatchContext **)((longlong)this + 8);
  pFVar11 = (FRDGBufferSRV *)puVar18[0x12];
  pFVar12 = (FRDGBufferSRV *)puVar18[0x13];
  pFVar1 = *(FViewInfo **)((longlong)this + 0x10);
  pFVar17->InTotalPrevDrawClusters = (FRDGBufferSRV *)puVar18[0x10];
  pFVar17->RasterBinData = pFVar10;
  pFVar10 = (FRDGBufferSRV *)puVar18[0x14];
  pFVar14 = (FRHIShaderResourceView *)puVar18[0x15];
  pFVar17->RasterBinMeta = pFVar11;
  pFVar17->AssemblyTransforms = pFVar12;
  pFVar17->InClusterOffsetSWHW = pFVar10;
  pFVar17->TessellationTable_Offsets = pFVar14;
  Nanite::FRenderer::FDispatchContext::DispatchSW
            (this_00,param_2,&this_00->Dispatches_SW_Triangles,pFVar1,
             *(int *)((longlong)this + 0x1c),&local_138,false);
  return;
}

// operator() @ 144f78570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Binning'::__l30::<lambda_5>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  longlong lVar1;
  FRDGResource *this_00;
  code *pcVar2;
  bool bVar3;
  
  if ((*(longlong *)((longlong)this + 0x10) == 0) ||
     (0 < *(int *)(*(longlong *)((longlong)this + 8) + 0x28))) {
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x80) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x183,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = *(FRDGResource **)(lVar1 + 0x80);
    if (((ulonglong)this_00[4].Name & 0x80) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x53c,L"Buffer %s was not flagged for indirect draw usage.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FRDGResource::ValidateRHIAccess(this_00);
    FComputeShaderUtils::DispatchIndirect<FRasterBinBuild_CS>
              (param_2,(TShaderRefBase<FRasterBinBuild_CS,FShaderMapPointerTable> *)
                       ((longlong)this + 0x18),*(FParameters **)this,
               (FRHIBuffer *)this_00->ResourceRHI,0);
  }
  return;
}

// operator() @ 144f78670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Rasterize'::__l29::<lambda_6>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  FDispatchContext *this_00;
  FViewInfo *pFVar1;
  undefined8 uVar2;
  FRDGTextureUAV *pFVar3;
  FRDGTextureUAV *pFVar4;
  FRDGTextureUAV *pFVar5;
  FRDGTextureUAV *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FRDGBufferSRV *pFVar10;
  FRDGBufferSRV *pFVar11;
  FRDGBufferSRV *pFVar12;
  FRDGBufferSRV *pFVar13;
  FRHIShaderResourceView *pFVar14;
  FRasterizePassParameters *pFVar15;
  undefined8 *puVar16;
  FRasterizePassParameters *pFVar17;
  undefined8 *puVar18;
  longlong lVar19;
  FRasterizePassParameters local_138;
  
  lVar19 = 2;
  pFVar15 = &local_138;
  puVar16 = *(undefined8 **)this;
  do {
    puVar18 = puVar16;
    pFVar17 = pFVar15;
    uVar2 = puVar18[1];
    pFVar3 = (FRDGTextureUAV *)puVar18[2];
    pFVar4 = (FRDGTextureUAV *)puVar18[3];
    *(undefined8 *)&pFVar17->Scene = *puVar18;
    *(undefined8 *)&(pFVar17->Scene).field_0x8 = uVar2;
    pFVar5 = (FRDGTextureUAV *)puVar18[4];
    pFVar6 = (FRDGTextureUAV *)puVar18[5];
    (pFVar17->RasterParameters).OutDepthBuffer = pFVar3;
    (pFVar17->RasterParameters).OutDepthBufferArray = pFVar4;
    pFVar3 = (FRDGTextureUAV *)puVar18[6];
    uVar2 = puVar18[7];
    (pFVar17->RasterParameters).OutVisBuffer64 = pFVar5;
    (pFVar17->RasterParameters).OutDbgBuffer64 = pFVar6;
    uVar7 = puVar18[8];
    uVar8 = puVar18[9];
    (pFVar17->RasterParameters).OutDbgBuffer32 = pFVar3;
    *(undefined8 *)&(pFVar17->RasterParameters).field_0x28 = uVar2;
    uVar2 = puVar18[10];
    uVar9 = puVar18[0xb];
    *(undefined8 *)&pFVar17->NaniteRaster = uVar7;
    *(undefined8 *)&(pFVar17->NaniteRaster).field_0x8 = uVar8;
    pFVar10 = (FRDGBufferSRV *)puVar18[0xc];
    pFVar11 = (FRDGBufferSRV *)puVar18[0xd];
    *(undefined8 *)&(pFVar17->PassData).field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&(pFVar17->PassData).field0_0x0 + 8) = uVar9;
    pFVar12 = (FRDGBufferSRV *)puVar18[0xe];
    pFVar13 = (FRDGBufferSRV *)puVar18[0xf];
    pFVar17->ClusterPageData = pFVar10;
    pFVar17->HierarchyBuffer = pFVar11;
    pFVar17->InViews = pFVar12;
    pFVar17->VisibleClustersSWHW = pFVar13;
    lVar19 = lVar19 + -1;
    pFVar15 = (FRasterizePassParameters *)&pFVar17->InTotalPrevDrawClusters;
    puVar16 = puVar18 + 0x10;
  } while (lVar19 != 0);
  pFVar10 = (FRDGBufferSRV *)puVar18[0x11];
  this_00 = *(FDispatchContext **)((longlong)this + 8);
  pFVar11 = (FRDGBufferSRV *)puVar18[0x12];
  pFVar12 = (FRDGBufferSRV *)puVar18[0x13];
  pFVar1 = *(FViewInfo **)((longlong)this + 0x10);
  pFVar17->InTotalPrevDrawClusters = (FRDGBufferSRV *)puVar18[0x10];
  pFVar17->RasterBinData = pFVar10;
  pFVar10 = (FRDGBufferSRV *)puVar18[0x14];
  pFVar14 = (FRHIShaderResourceView *)puVar18[0x15];
  pFVar17->RasterBinMeta = pFVar11;
  pFVar17->AssemblyTransforms = pFVar12;
  pFVar17->InClusterOffsetSWHW = pFVar10;
  pFVar17->TessellationTable_Offsets = pFVar14;
  Nanite::FRenderer::FDispatchContext::DispatchSW
            (this_00,param_2,&this_00->Dispatches_SW_Tessellated,pFVar1,
             *(int *)((longlong)this + 0x1c),&local_138,true);
  return;
}

// operator() @ 144f78740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::AddPass_Binning'::__l33::<lambda_6>::operator()
          (void *this,FRDGAsyncTask param_1,FRHIComputeCommandList *param_2)

{
  TShaderRefBase<FRasterBinFinalize_CS,FShaderMapPointerTable> *this_00;
  undefined8 uVar1;
  uint uVar2;
  void *pvVar3;
  FRasterBinFinalize_CS *pFVar4;
  code *pcVar5;
  bool bVar6;
  TIntVector3<int> *pTVar7;
  FShaderParametersMetadata *pFVar8;
  FRHIComputeShader *pFVar9;
  FRHIBatchedShaderUnbinds *pFVar10;
  TIntVector3<int>_u_0 local_58;
  undefined8 local_48;
  TIntVector3<int> local_38;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  if ((*(longlong *)((longlong)this + 0x10) == 0) ||
     (0 < *(int *)(*(longlong *)((longlong)this + 8) + 0x28))) {
    pTVar7 = FComputeShaderUtils::GetGroupCountWrapped
                       (&local_38,*(int *)((longlong)this + 0x28),0x40);
    pvVar3 = *(void **)this;
    this_00 = (TShaderRefBase<FRasterBinFinalize_CS,FShaderMapPointerTable> *)
              ((longlong)this + 0x18);
    uVar1 = *(undefined8 *)&pTVar7->field0_0x0;
    uVar2 = (pTVar7->field0_0x0)._s_0.Z;
    local_48 = uVar1;
    pFVar8 = FRasterBinFinalize_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_58._0_8_ = uVar1;
    local_58._s_0.Z = uVar2;
    FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_58._s_0);
    pFVar9 = TShaderRefBase<FRasterBinFinalize_CS,FShaderMapPointerTable>::GetComputeShader(this_00)
    ;
    SetComputePipelineState(param_2,pFVar9);
    local_28.ShaderContent = (FShader *)this_00->ShaderContent;
    local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x20);
    ValidateShaderParameters(&local_28,pFVar8,pvVar3);
    ::SetShaderParameters
              (param_2,pFVar9,(FShaderParameterBindings *)this_00->ShaderContent,pFVar8,pvVar3);
    FRHIComputeCommandList::DispatchComputeShader(param_2,(uint)local_48,local_48._4_4_,uVar2);
    pFVar9 = TShaderRefBase<FRasterBinFinalize_CS,FShaderMapPointerTable>::GetComputeShader(this_00)
    ;
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar10 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_2);
      pFVar4 = this_00->ShaderContent;
      if ((*(short *)&pFVar4->field_0x54 != -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UnsetShaderUAVs(pFVar10,(FShaderParameterBindings *)pFVar4);
      FRHIComputeCommandList::SetBatchedShaderUnbinds(param_2,pFVar9,pFVar10);
    }
  }
  return;
}

// AddPass_Binning @ 144f7d740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FBinningData * __thiscall
Nanite::FRenderer::AddPass_Binning
          (FRenderer *this,FBinningData *__return_storage_ptr__,FDispatchContext *param_1,
          ERasterHardwarePath param_2,FRDGBuffer *param_3,FRDGBuffer *param_4,FRDGBuffer *param_5,
          FGlobalWorkQueueParameters *param_6,bool param_7,ERDGPassFlags param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FRDGBuilder *pFVar4;
  FGlobalShaderMap *pFVar5;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar6;
  code *pcVar7;
  uint uVar8;
  TConsoleVariableData<float> *pTVar9;
  TShaderPermutationDomain<FRasterBinBuild_CS::FBuildPassDim,FRasterBinBuild_CS::FDepthBucketingDim,FRasterBinBuild_CS::FMultiViewDim>
  TVar10;
  bool bVar11;
  EUniformBufferBindingFlags EVar12;
  byte bVar13;
  ERDGPassFlags EVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  FRDGBuffer *pFVar18;
  undefined8 *puVar19;
  FBinningData *pFVar20;
  FRDGBufferUAV *pFVar21;
  FGlobalShaderType *pFVar22;
  FShaderType *pFVar23;
  FName FVar24;
  FShaderParametersMetadata *pFVar25;
  FRDGEventName *pFVar26;
  wchar_t *pwVar27;
  FRDGPass *pFVar28;
  FRDGBuffer *pFVar29;
  FParameters *pFVar30;
  undefined8 *puVar31;
  uint uVar32;
  bool bVar33;
  uchar *puVar34;
  float fVar35;
  undefined1 local_res10 [8];
  FDispatchContext *local_res18;
  ERasterHardwarePath local_res20;
  undefined1 local_776;
  undefined1 local_775;
  undefined1 local_774;
  undefined1 local_773 [11];
  FShader *local_768;
  undefined8 local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 local_748;
  TShaderPermutationDomain<FRasterBinBuild_CS::FIsPostPass,FRasterBinBuild_CS::FPatches,FRasterBinBuild_CS::FVirtualTextureTargetDim,FRasterBinBuild_CS::FMaterialCacheDim,FRasterBinBuild_CS::FBuildPassDim,FRasterBinBuild_CS::FDepthBucketingDim,FRasterBinBuild_CS::FMultiViewDim>
  local_738;
  FRDGBuffer *local_720;
  undefined8 *local_718;
  undefined8 *local_710;
  undefined8 *local_708;
  undefined8 *local_700;
  FRDGEventName *local_6f8;
  FRDGBufferUAVDesc local_6f0;
  FRDGBufferUAVDesc local_6e0;
  FRDGBufferUAVDesc local_6d0;
  FRDGBufferUAVDesc local_6c0;
  FRDGBufferUAVDesc local_6b0;
  FRDGBufferUAVDesc local_6a0;
  FRDGBufferUAVDesc local_690;
  FRDGBufferUAVDesc local_680;
  FRDGBufferUAVDesc local_670;
  FRDGBufferUAVDesc local_660;
  FRDGBufferUAVDesc local_650;
  FRDGBufferUAVDesc local_640;
  FRDGBufferUAVDesc local_630;
  FRDGBufferUAVDesc local_620;
  TShaderPermutationDomain<FRasterBinBuild_CS::FIsPostPass,FRasterBinBuild_CS::FPatches,FRasterBinBuild_CS::FVirtualTextureTargetDim,FRasterBinBuild_CS::FMaterialCacheDim,FRasterBinBuild_CS::FBuildPassDim,FRasterBinBuild_CS::FDepthBucketingDim,FRasterBinBuild_CS::FMultiViewDim>
  local_610;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_5f8;
  FRDGBufferSRVDesc local_5e8;
  FRDGBufferSRVDesc local_5c8;
  FRDGBufferSRVDesc local_5a8;
  FRDGBufferSRVDesc local_588;
  FRDGBufferSRVDesc local_568;
  FRDGBufferSRVDesc local_548;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_528;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_518;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_508;
  uchar *local_4f8;
  FDispatchContext *pFStack_4f0;
  undefined8 local_4e8;
  FShader *pFStack_4e0;
  FShaderMapBase *local_4d8;
  uint uStack_4d0;
  undefined4 uStack_4cc;
  FRDGBufferSRVDesc local_4c8;
  uchar *local_4a8;
  FDispatchContext *pFStack_4a0;
  FRDGBuffer *local_498;
  FShader *pFStack_490;
  FShaderMapBase *local_488;
  uint uStack_480;
  undefined4 uStack_47c;
  uchar *local_478;
  FDispatchContext *pFStack_470;
  FRDGBuffer *local_468;
  FShader *pFStack_460;
  FShaderMapBase *local_458;
  uint uStack_450;
  undefined4 uStack_44c;
  FParameters *local_448;
  FDispatchContext *pFStack_440;
  FRDGBuffer *local_438;
  FShader *pFStack_430;
  FShaderMapBase *pFStack_428;
  FParameters *local_420;
  FDispatchContext *pFStack_418;
  FRDGBuffer *local_410;
  FShader *pFStack_408;
  FShaderMapBase *pFStack_400;
  FRDGParameterStruct local_3f8;
  FRDGParameterStruct local_3e0;
  FRDGParameterStruct local_3c8;
  FRDGParameterStruct local_3b0;
  FRDGParameterStruct local_398;
  FRDGParameterStruct local_380;
  TRDGUniformBuffer<FSceneUniformParameters> *local_368 [2];
  FRDGBufferUAV *local_358;
  FRDGBufferUAV *local_350;
  FRDGBufferUAV *local_348;
  FRDGBufferUAV *pFStack_340;
  FRDGBufferSRV *local_338;
  FRDGBufferSRV *local_330;
  FRDGBufferSRV *local_328;
  FRDGBufferSRV *local_320;
  FRDGBufferSRV *local_318;
  FRDGBufferSRV *local_310;
  FRDGBufferSRV *local_308;
  FRDGBufferSRV *pFStack_300;
  FRDGBufferUAV *local_2f8;
  FRDGBufferUAV *pFStack_2f0;
  FRDGBuffer *local_2e8;
  undefined8 uStack_2e0;
  TIntVector4<int>_u_0 local_2d8;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  initializer_list<FRDGResource_*> local_298;
  FString local_288;
  initializer_list<FRDGResource_*> local_278;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_268;
  TShaderRefBase<FRasterBinBuild_CS,FShaderMapPointerTable> local_258;
  initializer_list<FRDGResource_*> local_248;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_238;
  FString local_228;
  undefined1 local_218 [8];
  FRDGBufferDesc local_210;
  FRDGBufferDesc local_1f8;
  undefined1 local_1e0 [8];
  FRDGBufferDesc local_1d8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [16];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a8;
  initializer_list<FRDGResource_*> local_198;
  FString local_188;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_178;
  initializer_list<FRDGResource_*> local_168;
  TShaderRefBase<FRasterBinBuild_CS,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  initializer_list<FRDGResource_*> local_138;
  FString local_128;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_118;
  FRDGBufferDesc local_108;
  FRDGEventName local_f0;
  FRDGEventName local_d8;
  FRDGEventName local_c0;
  FRDGEventName local_a8;
  FRDGEventName local_90;
  FRDGEventName local_78 [2];
  
  puVar31 = (undefined8 *)0x0;
  local_res18 = param_1;
  local_res20 = param_2;
  FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
  uVar16 = (param_1->MetaBufferData).ArrayNum;
  __return_storage_ptr__->DataBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->MetaBuffer = (FRDGBuffer *)0x0;
  uVar8 = (&this->Configuration)->bIsLumenCapture;
  if ((&this->Configuration)->bIsMaterialCache != 0) {
    uVar8 = 2;
  }
  __return_storage_ptr__->IndirectArgs = (FRDGBuffer *)0x0;
  __return_storage_ptr__->BinCount = uVar16;
  if (uVar16 == 0) {
    return __return_storage_ptr__;
  }
  if (((this->RenderFlags & 0x8000) == 0) || (this->StatsBuffer == (FRDGBuffer *)0x0)) {
    __return_storage_ptr__->MetaBuffer = param_1->MetaBuffer;
  }
  else {
    pFVar18 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&param_1->MetaBuffer->Desc,
                         (wchar_t *)param_1->MetaBuffer->_padding_,None);
    pFVar29 = param_1->MetaBuffer;
    pFVar4 = this->GraphBuilder;
    __return_storage_ptr__->MetaBuffer = pFVar18;
    AddCopyBufferPass(pFVar4,pFVar18,pFVar29);
  }
  pFVar4 = this->GraphBuilder;
  puVar19 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x20,0x10);
  if (puVar19 == (undefined8 *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar20 = (FBinningData *)(*pcVar7)();
      return pFVar20;
    }
  }
  else {
    puVar19[2] = 0;
    *puVar19 = &___7__TObject_VFParameters_FRasterBinInit_CS___FRDGAllocator__6B_;
    puVar31 = puVar19;
  }
  local_718 = puVar31;
  if ((((undefined8 **)pFVar4->_padding_ <= &local_718) &&
      (&local_718 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4)))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar20 = (FBinningData *)(*pcVar7)();
    return pFVar20;
  }
  iVar15 = (int)pFVar4->_padding_;
  piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
  }
  puVar34 = (uchar *)(puVar31 + 2);
  *(int *)&pFVar4->_padding_ = iVar15 + 1;
  *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar15 * 8) = local_718;
  local_6c0.Buffer = __return_storage_ptr__->MetaBuffer;
  local_6c0._padding_._2_1_ = 0;
  bVar13 = 0;
  if ((((local_6c0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_6c0._padding_._0_2_ = (ushort)bVar13;
  pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_6c0,None);
  *(FRDGBufferUAV **)puVar34 = pFVar21;
  *(uint *)(puVar31 + 3) = __return_storage_ptr__->BinCount;
  pFVar5 = this->SharedContext->ShaderMap;
  pFVar22 = FRasterBinInit_CS::GetStaticType();
  if (*(int *)&pFVar22->field_0x50 != 1) {
    local_res10[0] = 0;
    `FGlobalShaderMap::GetShader<FRasterBinInit_CS>'::__l2::<lambda_1>::operator()(local_res10);
  }
  pFVar23 = (FShaderType *)FRasterBinInit_CS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar5,&local_528,pFVar23,0);
  if (local_528.ShaderContent == (FShader *)0x0) {
    FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1b8);
    ::FName::ToString((FName *)FVar24,&local_228);
    FRasterBinInit_CS::GetStaticType();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar20 = (FBinningData *)(*pcVar7)();
      return pFVar20;
    }
  }
  FRasterBinInit_CS::GetStaticType();
  pFVar25 = FRasterBinInit_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_238.ShaderContent = local_528.ShaderContent;
  local_238.ShaderMap = local_528.ShaderMap;
  ValidateShaderParameters(&local_238,pFVar25,puVar34);
  local_248._First = (FRDGResource **)0x0;
  local_248._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl(&(local_528.ShaderContent)->Bindings,pFVar25,puVar34,&local_248);
  pFVar4 = this->GraphBuilder;
  pFStack_4a0 = local_res18;
  pFStack_490 = local_528.ShaderContent;
  local_498 = param_4;
  uStack_480 = __return_storage_ptr__->BinCount;
  local_488 = local_528.ShaderMap;
  local_4a8 = puVar34;
  pFVar26 = FRDGEventName::FRDGEventName(&local_f0,1,L"RasterBinInit");
  local_6f8 = pFVar26;
  local_768 = (FShader *)FRasterBinInit_CS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&pFVar4->UserValidation,puVar34,(FShaderParametersMetadata *)local_768,pFVar26,param_8)
  ;
  FRDGBuilder::FlushAccessModeQueue(pFVar4);
  pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
  EVar14 = FRDGBuilder::OverridePassFlags(pFVar4,pwVar27,param_8);
  pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x1b8,8);
  local_3b0.Contents = puVar34;
  if ((((TRefCountPtr<FRHIUniformBufferLayout_const_> *)((longlong)local_768 + 0x48))->Reference ==
       (FRHIUniformBufferLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar20 = (FBinningData *)(*pcVar7)();
    return pFVar20;
  }
  local_3b0.Layout.Reference =
       ((TRefCountPtr<FRHIUniformBufferLayout_const_> *)((longlong)local_768 + 0x48))->Reference;
  if (local_3b0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_3b0.Layout.Reference);
  }
  local_3b0.Metadata = (FShaderParametersMetadata *)local_768;
  FRDGPass::FRDGPass(pFVar28,local_6f8,&local_3b0,EVar14,Async);
  pFVar28->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRasterBinInit_CS::FParameters,`Nanite::FRenderer::AddPass_Binning'::`11'::<lambda_1>_>
        ::_vftable_;
  pFVar28[1]._padding_ = (longlong)local_4a8;
  pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_4a0;
  pFVar28[1].ParameterStruct.Contents = puVar34;
  *(FRDGBuffer **)&pFVar28[1].FullPathIfDebug.Data.ArrayNum = local_498;
  pFVar28[1].Name.EventFormat = (wchar_t *)pFStack_490;
  pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)local_488;
  pFVar28[1].Name.FormattedEventName.Data.ArrayNum = uStack_480;
  pFVar28[1].Name.FormattedEventName.Data.ArrayMax = uStack_47c;
  FRDGBuilder::ClobberPassOutputs(pFVar4,pFVar28);
  iVar15 = (pFVar4->Passes).Array.ArrayNum;
  piVar1 = &(pFVar4->Passes).Array.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&pFVar4->Passes,piVar1);
  }
  (pFVar4->Passes).Array.ArrayNum = iVar15 + 1;
  (pFVar4->Passes).Array.AllocatorInstance.Data[iVar15] = pFVar28;
  (pFVar28->Handle).Index = (pFVar4->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(pFVar4,pFVar28);
  if (local_f0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  local_758._4_4_ = __return_storage_ptr__->BinCount << 3;
  bVar33 = false;
  uStack_750 = 0x4189;
  local_758._0_4_ = 4;
  local_210._12_4_ = uStack_74c;
  local_210.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  local_748 = 0;
  local_210.BytesPerElement = 4;
  local_210.NumElements = local_758._4_4_;
  local_210.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar29 = FRDGBuilder::CreateBuffer
                      (this->GraphBuilder,&local_210,L"Nanite.RasterBinIndirectArgs",None);
  __return_storage_ptr__->IndirectArgs = pFVar29;
  uVar16 = FGlobalResources::GetMaxVisibleClusters();
  pTVar9 = CVarNaniteRasterIndirectionMultiplier.Ref;
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar20 = (FBinningData *)(*pcVar7)();
    return pFVar20;
  }
  fVar35 = pTVar9->ShadowedValue[1];
  if (pTVar9->ShadowedValue[1] <= __real_3f800000) {
    fVar35 = __real_3f800000;
  }
  local_6f8 = (FRDGEventName *)(longlong)(fVar35 * (float)uVar16);
  uVar32 = (uint)local_6f8;
  if ((uVar32 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxClusterIndirections > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x124a,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar20 = (FBinningData *)(*pcVar7)();
    return pFVar20;
  }
  local_738.Tail.Tail.DimensionValue = true;
  local_738.Tail.Tail._1_3_ = 0x101;
  local_738.DimensionValue = true;
  local_738._1_3_ = 0;
  local_1f8.NumElements = uVar32;
  local_1f8.BytesPerElement = 8;
  local_1f8._12_1_ = local_738.Tail.Tail.Tail.DimensionValue;
  local_1f8._13_3_ = local_738.Tail.Tail.Tail._1_3_;
  local_1f8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_738.Tail.Tail.Tail.Tail.DimensionValue = 0;
  local_738.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_738.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  local_738.Tail.Tail.Tail.Tail.Tail.Tail.Tail = (TShaderPermutationDomain<>)0x0;
  local_738.Tail.Tail.Tail.Tail._7_1_ = 0;
  local_1f8.Metadata = (FShaderParametersMetadata *)0x0;
  local_738.Tail._0_4_ = uVar32;
  pFVar29 = FRDGBuilder::CreateBuffer(this->GraphBuilder,&local_1f8,L"Nanite.RasterBinData",None);
  __return_storage_ptr__->DataBuffer = pFVar29;
  bVar11 = FGlobalResources::UseExtendedClusterSize();
  if (((bVar11) &&
      (iVar15 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarNaniteDepthBucketing.Ref),
      iVar15 != 0)) &&
     ((bVar11 = NaniteVoxelsSupported(), bVar11 ||
      (iVar15 = TAutoConsoleVariable<int>::GetValueOnRenderThread
                          (&CVarNaniteDepthBucketPixelProgrammable), iVar15 != 0)))) {
    bVar33 = true;
  }
  pTVar6 = this->SceneUniformBuffer;
  local_348 = (FRDGBufferUAV *)0x0;
  pFStack_340 = (FRDGBufferUAV *)0x0;
  local_308 = (FRDGBufferSRV *)0x0;
  pFStack_300 = (FRDGBufferSRV *)0x0;
  local_2f8 = (FRDGBufferUAV *)0x0;
  pFStack_2f0 = (FRDGBufferUAV *)0x0;
  local_350 = (FRDGBufferUAV *)0x0;
  pFVar25 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  local_5c8._padding_._0_4_ = 0xffffffff;
  EVar12 = Static;
  if (pFVar25->BindingFlags != StaticAndShader) {
    EVar12 = pFVar25->BindingFlags;
  }
  local_5c8._padding_._0_1_ = 0;
  uStack_750 = CONCAT31(uStack_750._1_3_,EVar12);
  local_5c8.Buffer = this->VisibleClustersSWHW;
  local_368[1]._4_4_ = uStack_74c;
  local_368[1]._0_4_ = uStack_750;
  local_5c8._padding_._4_4_ = 0;
  local_5c8._padding_ = 0;
  if ((((local_5c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_5c8._padding_._0_1_ = 0x1c;
  }
  local_758 = (FRDGBuffer *)pTVar6;
  local_368[0] = pTVar6;
  local_318 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_5c8);
  local_310 = FStreamingManager::GetClusterPageDataSRV
                        ((FStreamingManager *)&GStreamingManager,this->GraphBuilder);
  local_5e8.Buffer = this->ClusterCountSWHW;
  local_5e8._padding_._4_4_ = 0;
  local_5e8._padding_._0_4_ = 0xffffffff;
  local_5e8._padding_ = 0;
  local_5e8._padding_._0_1_ = 0;
  if ((((local_5e8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_5e8._padding_._0_1_ = 0x1c;
  }
  local_328 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_5e8);
  local_4c8.Buffer = param_3;
  local_4c8._padding_._0_1_ = 0x1c;
  local_4c8._padding_._4_4_ = 0;
  local_4c8._padding_._0_4_ = 0xffffffff;
  local_4c8._padding_ = 0;
  local_320 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_4c8);
  local_758 = param_5;
  if (param_5 == (FRDGBuffer *)0x0) {
    local_758 = this->ClusterClassifyArgs;
  }
  local_5a8._padding_._0_4_ = 0xffffffff;
  local_5a8._padding_._4_4_ = 0;
  local_5a8._padding_ = 0;
  local_5a8.Buffer = this->TotalPrevDrawClustersBuffer;
  uStack_750 = 4;
  uStack_2e0._4_4_ = uStack_74c;
  uStack_2e0._0_4_ = 4;
  local_5a8._padding_._0_1_ = 0;
  if ((((local_5a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_5a8._padding_._0_1_ = 0x1c;
  }
  local_2e8 = local_758;
  local_330 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_5a8);
  local_6b0.Buffer = __return_storage_ptr__->MetaBuffer;
  local_6b0._padding_._2_1_ = 0;
  bVar13 = 0;
  if ((((local_6b0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_6b0._padding_._0_2_ = (ushort)bVar13;
  local_358 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_6b0,None);
  local_568._padding_._4_4_ = 0;
  local_568._padding_ = 0;
  local_568.Buffer = this->ViewsBuffer;
  local_568._padding_._0_4_ = 0xffffffff;
  local_568._padding_._0_1_ = 0;
  if ((((local_568.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_568._padding_._0_1_ = 0x1c;
  }
  local_338 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_568);
  local_720 = (FRDGBuffer *)0x0;
  if (bVar33 != false) {
    local_738.Tail.Tail.Tail.Tail.DimensionValue = 0;
    local_738.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
    local_738.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
    local_738.Tail.Tail.Tail.Tail.Tail.Tail.Tail = (TShaderPermutationDomain<>)0x0;
    local_738.Tail.Tail.Tail.Tail._7_1_ = 0;
    local_738.Tail._0_4_ = __return_storage_ptr__->BinCount << 9;
    local_738.Tail.Tail.DimensionValue = true;
    local_738.Tail.Tail._1_3_ = 0x101;
    local_738.DimensionValue = true;
    local_738._1_3_ = 0;
    local_108.NumElements = local_738.Tail._0_4_;
    local_108.BytesPerElement = 4;
    local_108._12_1_ = local_738.Tail.Tail.Tail.DimensionValue;
    local_108._13_3_ = local_738.Tail.Tail.Tail._1_3_;
    local_108.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_108.Metadata = (FShaderParametersMetadata *)0x0;
    local_690.Buffer =
         FRDGBuilder::CreateBuffer(this->GraphBuilder,&local_108,L"Nanite.DepthBuckets",None);
    local_6a0._padding_._2_1_ = 0;
    bVar13 = 0;
    if ((((local_690.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar13 = 0x1c;
    }
    local_6a0._padding_._0_2_ = (ushort)bVar13;
    local_720 = local_690.Buffer;
    local_6a0.Buffer = local_690.Buffer;
    pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_6a0,None);
    AddClearUAVPass(this->GraphBuilder,pFVar21,0,Compute);
    local_690._padding_._2_1_ = 0;
    bVar13 = 0;
    if ((((local_690.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar13 = 0x1c;
    }
    local_690._padding_._0_2_ = (ushort)bVar13;
    pFStack_340 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_690,None);
  }
  if (param_4 != (FRDGBuffer *)0x0) {
    local_548._padding_._4_4_ = 0;
    local_548._padding_ = 0;
    local_548._padding_._0_4_ = 0xffffffff;
    local_548.Buffer = param_4;
    local_548._padding_._0_1_ = 0;
    if (((param_4->Desc).Usage & DrawIndirect) != None) {
      local_548._padding_._0_1_ = 0x1c;
    }
    local_308 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_548);
    local_588._padding_._4_4_ = 0;
    local_588._padding_ = 0;
    local_588._padding_._0_4_ = 0xffffffff;
    local_588.Buffer = param_5;
    local_588._padding_._0_1_ = 0;
    if (((param_5->Desc).Usage & DrawIndirect) != None) {
      local_588._padding_._0_1_ = 0x1c;
    }
    pFStack_300 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_588);
    local_2f8 = param_6->DataBuffer;
    pFStack_2f0 = param_6->StateBuffer;
    local_2ac = FGlobalResources::GetMaxVisiblePatches();
  }
  local_2c8 = this->RenderFlags;
  local_2d8._0_8_ = *(undefined8 *)&(this->PageConstants).field0_0x0;
  local_2d8._8_8_ = *(undefined8 *)((longlong)&(this->PageConstants).field0_0x0 + 8);
  local_2c4 = uVar16;
  local_2c0 = FNaniteRasterPipelines::GetRegularBinCount(this->Scene->NaniteRasterPipelines + uVar8)
  ;
  local_2bc = (uint)(local_res20 != VertexShader);
  local_2b8 = GetMaxPatchesPerGroup();
  local_2b0 = GRHIGlobals.MinimumWaveSize;
  local_2a8 = (uint)local_6f8;
  local_2b4 = uVar8;
  pFVar30 = FRDGBuilder::AllocParameters<FRasterBinBuild_CS::FParameters>
                      (this->GraphBuilder,(FParameters *)local_368);
  TVar10 = local_738.Tail.Tail.Tail.Tail;
  local_738.Tail.Tail.Tail._0_4_ = local_738.Tail.Tail.Tail._0_4_ & 0xffffff00;
  local_774 = param_4 != (FRDGBuffer *)0x0;
  local_738.DimensionValue = !param_7;
  local_738.Tail.DimensionValue = (bool)local_774;
  local_738.Tail.Tail.DimensionValue = this->VirtualShadowMapArray != (FVirtualShadowMapArray *)0x0;
  local_738.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar33;
  local_738.Tail.Tail.Tail.Tail.DimensionValue = 1;
  local_738.Tail.Tail.Tail.Tail._6_2_ = TVar10._6_2_;
  local_738.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = this->bMultiView;
  FGlobalShaderMap::GetShader<FRasterBinBuild_CS>
            (this->SharedContext->ShaderMap,&local_258,&local_738);
  pFVar25 = FRasterBinBuild_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_268.ShaderContent = (FShader *)local_258.ShaderContent;
  local_268.ShaderMap = local_258.ShaderMap;
  ValidateShaderParameters(&local_268,pFVar25,pFVar30);
  local_278._First = (FRDGResource **)0x0;
  local_278._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)local_258.ShaderContent,pFVar25,pFVar30,&local_278);
  pFVar4 = this->GraphBuilder;
  pFStack_440 = local_res18;
  local_438 = param_4;
  pFStack_430 = (FShader *)local_258.ShaderContent;
  pFStack_428 = local_258.ShaderMap;
  local_448 = pFVar30;
  pFVar26 = FRDGEventName::FRDGEventName(&local_d8,1,L"RasterBinCount");
  local_768 = (FShader *)pFVar26;
  pFVar25 = FRasterBinBuild_CS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&pFVar4->UserValidation,pFVar30,pFVar25,pFVar26,param_8);
  FRDGBuilder::FlushAccessModeQueue(pFVar4);
  pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
  EVar14 = FRDGBuilder::OverridePassFlags(pFVar4,pwVar27,param_8);
  pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x1b0,8);
  local_380.Contents = (uchar *)pFVar30;
  if (((pFVar25->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar20 = (FBinningData *)(*pcVar7)();
    return pFVar20;
  }
  local_380.Layout.Reference = (pFVar25->Layout).Reference;
  if (local_380.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_380.Layout.Reference);
  }
  local_380.Metadata = pFVar25;
  FRDGPass::FRDGPass(pFVar28,(FRDGEventName *)local_768,&local_380,EVar14,Async);
  pFVar28->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRasterBinBuild_CS::FParameters,`Nanite::FRenderer::AddPass_Binning'::`25'::<lambda_2>_>
        ::_vftable_;
  pFVar28[1]._padding_ = (longlong)local_448;
  pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_440;
  *(FParameters **)&pFVar28[1].Name.FormattedEventName.Data.ArrayNum = pFVar30;
  *(FRDGBuffer **)&pFVar28[1].FullPathIfDebug.Data.ArrayNum = local_438;
  pFVar28[1].Name.EventFormat = (wchar_t *)pFStack_430;
  pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)pFStack_428;
  FRDGBuilder::ClobberPassOutputs(pFVar4,pFVar28);
  iVar15 = (pFVar4->Passes).Array.ArrayNum;
  piVar1 = &(pFVar4->Passes).Array.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&pFVar4->Passes,piVar1);
  }
  (pFVar4->Passes).Array.ArrayNum = iVar15 + 1;
  (pFVar4->Passes).Array.AllocatorInstance.Data[iVar15] = pFVar28;
  (pFVar28->Handle).Index = (pFVar4->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(pFVar4,pFVar28);
  if (local_d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  puVar31 = (undefined8 *)0x0;
  uStack_750 = 0x10109;
  local_758 = (FRDGBuffer *)0x100000004;
  local_1d8._12_4_ = uStack_74c;
  local_1d8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_748 = 0;
  local_1d8.BytesPerElement = 4;
  local_1d8.NumElements = 1;
  local_1d8.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar29 = FRDGBuilder::CreateBuffer
                      (this->GraphBuilder,&local_1d8,L"Nanite.RangeAllocatorBuffer",None);
  local_680._padding_._2_1_ = 0;
  bVar13 = 0;
  if (((pFVar29->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_680._padding_._0_2_ = (ushort)bVar13;
  local_680.Buffer = pFVar29;
  pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_680,None);
  AddClearUAVPass(this->GraphBuilder,pFVar21,0,Compute);
  pFVar4 = this->GraphBuilder;
  puVar19 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x30,0x10);
  if (puVar19 == (undefined8 *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar20 = (FBinningData *)(*pcVar7)();
      return pFVar20;
    }
  }
  else {
    puVar19[2] = 0;
    *puVar19 = &___7__TObject_VFParameters_FRasterBinReserve_CS___FRDGAllocator__6B_;
    puVar19[3] = 0;
    puVar19[4] = 0;
    puVar31 = puVar19;
  }
  local_710 = puVar31;
  if ((((undefined8 **)pFVar4->_padding_ <= &local_710) &&
      (&local_710 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4)))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar20 = (FBinningData *)(*pcVar7)();
    return pFVar20;
  }
  iVar15 = (int)pFVar4->_padding_;
  piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
  }
  puVar34 = (uchar *)(puVar31 + 2);
  *(int *)&pFVar4->_padding_ = iVar15 + 1;
  *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar15 * 8) = local_710;
  local_670.Buffer = __return_storage_ptr__->IndirectArgs;
  local_670._padding_._2_1_ = 0;
  bVar13 = 0;
  if ((((local_670.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_670._padding_._0_2_ = (ushort)bVar13;
  pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_670,None);
  puVar31[3] = pFVar21;
  local_660.Buffer = __return_storage_ptr__->MetaBuffer;
  bVar13 = 0;
  local_660._padding_._2_1_ = 0;
  if ((((local_660.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_660._padding_._0_2_ = (ushort)bVar13;
  pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_660,None);
  puVar31[4] = pFVar21;
  bVar13 = 0;
  local_650._padding_._2_1_ = 0;
  if (((pFVar29->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_650._padding_._0_2_ = (ushort)bVar13;
  local_650.Buffer = pFVar29;
  pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_650,None);
  *(FRDGBufferUAV **)puVar34 = pFVar21;
  *(uint *)(puVar31 + 5) = __return_storage_ptr__->BinCount;
  *(uint *)((longlong)puVar31 + 0x2c) = this->RenderFlags;
  pFVar5 = this->SharedContext->ShaderMap;
  pFVar22 = FRasterBinReserve_CS::GetStaticType();
  if (*(int *)&pFVar22->field_0x50 != 1) {
    local_776 = 0;
    `FGlobalShaderMap::GetShader<FRasterBinReserve_CS>'::__l2::<lambda_1>::operator()(&local_776);
  }
  pFVar23 = (FShaderType *)FRasterBinReserve_CS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar5,&local_518,pFVar23,0);
  if (local_518.ShaderContent == (FShader *)0x0) {
    FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1c0);
    ::FName::ToString((FName *)FVar24,&local_288);
    FRasterBinReserve_CS::GetStaticType();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar20 = (FBinningData *)(*pcVar7)();
      return pFVar20;
    }
  }
  FRasterBinReserve_CS::GetStaticType();
  pFVar25 = FRasterBinReserve_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_1a8.ShaderContent = local_518.ShaderContent;
  local_1a8.ShaderMap = local_518.ShaderMap;
  ValidateShaderParameters(&local_1a8,pFVar25,puVar34);
  local_198._First = (FRDGResource **)0x0;
  local_198._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl(&(local_518.ShaderContent)->Bindings,pFVar25,puVar34,&local_198);
  pFVar4 = this->GraphBuilder;
  pFStack_470 = local_res18;
  pFStack_460 = local_518.ShaderContent;
  local_468 = param_4;
  uStack_450 = __return_storage_ptr__->BinCount;
  local_458 = local_518.ShaderMap;
  local_478 = puVar34;
  pFVar26 = FRDGEventName::FRDGEventName(&local_c0,1,L"RasterBinReserve");
  local_768 = (FShader *)FRasterBinReserve_CS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&pFVar4->UserValidation,puVar34,(FShaderParametersMetadata *)local_768,pFVar26,param_8)
  ;
  FRDGBuilder::FlushAccessModeQueue(pFVar4);
  pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
  EVar14 = FRDGBuilder::OverridePassFlags(pFVar4,pwVar27,param_8);
  pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x1b8,8);
  local_3c8.Contents = puVar34;
  local_3c8.Layout.Reference =
       FShaderParametersMetadata::GetLayoutPtr((FShaderParametersMetadata *)local_768);
  if (local_3c8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_3c8.Layout.Reference);
  }
  local_3c8.Metadata = (FShaderParametersMetadata *)local_768;
  FRDGPass::FRDGPass(pFVar28,pFVar26,&local_3c8,EVar14,Async);
  pFVar28->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRasterBinReserve_CS::FParameters,`Nanite::FRenderer::AddPass_Binning'::`26'::<lambda_3>_>
        ::_vftable_;
  pFVar28[1]._padding_ = (longlong)local_478;
  pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_470;
  pFVar28[1].ParameterStruct.Contents = puVar34;
  *(FRDGBuffer **)&pFVar28[1].FullPathIfDebug.Data.ArrayNum = local_468;
  pFVar28[1].Name.EventFormat = (wchar_t *)pFStack_460;
  pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)local_458;
  pFVar28[1].Name.FormattedEventName.Data.ArrayNum = uStack_450;
  pFVar28[1].Name.FormattedEventName.Data.ArrayMax = uStack_44c;
  FRDGBuilder::ClobberPassOutputs(pFVar4,pFVar28);
  TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Insert(&pFVar4->Passes,pFVar28);
  FRDGBuilder::SetupParameterPass(pFVar4,pFVar28);
  if (local_c0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar33 != false) {
    pFVar4 = this->GraphBuilder;
    puVar31 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x20,0x10);
    if (puVar31 == (undefined8 *)0x0) {
      puVar31 = (undefined8 *)0x0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FBinningData *)(*pcVar7)();
        return pFVar20;
      }
    }
    else {
      puVar31[2] = 0;
      *puVar31 = &___7__TObject_VFParameters_FRasterBinDepthBlock_CS___FRDGAllocator__6B_;
    }
    local_708 = puVar31;
    if ((((undefined8 **)pFVar4->_padding_ <= &local_708) &&
        (&local_708 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4))
        ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar20 = (FBinningData *)(*pcVar7)();
      return pFVar20;
    }
    iVar15 = (int)pFVar4->_padding_;
    piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
    }
    puVar34 = (uchar *)(puVar31 + 2);
    *(int *)&pFVar4->_padding_ = iVar15 + 1;
    *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar15 * 8) = local_708;
    local_640._padding_._2_1_ = 0;
    local_640.Buffer = local_720;
    bVar13 = 0;
    if (((local_720->Desc).Usage & DrawIndirect) != None) {
      bVar13 = 0x1c;
    }
    local_640._padding_._0_2_ = (ushort)bVar13;
    pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_640,None);
    *(FRDGBufferUAV **)puVar34 = pFVar21;
    pFVar5 = this->SharedContext->ShaderMap;
    pFVar22 = FRasterBinDepthBlock_CS::GetStaticType();
    if (*(int *)&pFVar22->field_0x50 != 1) {
      local_775 = 0;
      `FGlobalShaderMap::GetShader<FRasterBinDepthBlock_CS>'::__l2::<lambda_1>::operator()
                (&local_775);
    }
    pFVar23 = (FShaderType *)FRasterBinDepthBlock_CS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar5,&local_5f8,pFVar23,0);
    if (local_5f8.ShaderContent == (FShader *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1e0);
      ::FName::ToString((FName *)FVar24,&local_188);
      FRasterBinDepthBlock_CS::GetStaticType();
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FBinningData *)(*pcVar7)();
        return pFVar20;
      }
    }
    FRasterBinDepthBlock_CS::GetStaticType();
    local_758 = (FRDGBuffer *)local_5f8.ShaderMap;
    pFVar25 = FRasterBinDepthBlock_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_178.ShaderContent = local_5f8.ShaderContent;
    local_178.ShaderMap = local_5f8.ShaderMap;
    ValidateShaderParameters(&local_178,pFVar25,puVar34);
    local_768 = local_5f8.ShaderContent;
    local_168._First = (FRDGResource **)0x0;
    local_168._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_5f8.ShaderContent)->Bindings,pFVar25,puVar34,&local_168);
    pFVar4 = this->GraphBuilder;
    pFVar26 = FRDGEventName::FRDGEventName(&local_a8,1,L"RasterBinDepthBlock");
    local_720 = (FRDGBuffer *)FRasterBinDepthBlock_CS::FParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass
              (&pFVar4->UserValidation,puVar34,(FShaderParametersMetadata *)local_720,pFVar26,
               param_8);
    FRDGBuilder::FlushAccessModeQueue(pFVar4);
    pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
    EVar14 = FRDGBuilder::OverridePassFlags(pFVar4,pwVar27,param_8);
    pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x1b0,8);
    local_3e0.Contents = puVar34;
    local_3e0.Layout.Reference =
         FShaderParametersMetadata::GetLayoutPtr((FShaderParametersMetadata *)local_720);
    if (local_3e0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_3e0.Layout.Reference);
    }
    local_3e0.Metadata = (FShaderParametersMetadata *)local_720;
    FRDGPass::FRDGPass(pFVar28,pFVar26,&local_3e0,EVar14,Await);
    pFVar28->_padding_ =
         (longlong)
         &TRDGLambdaPass<FRasterBinDepthBlock_CS::FParameters,`Nanite::FRenderer::AddPass_Binning'::`29'::<lambda_4>_>
          ::_vftable_;
    pFVar28[1]._padding_ = (longlong)puVar34;
    pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res18;
    *(FRDGBuffer **)&pFVar28[1].FullPathIfDebug.Data.ArrayNum = param_4;
    pFVar28[1].Name.EventFormat = (wchar_t *)local_768;
    pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)local_758;
    *(uchar **)&pFVar28[1].Name.FormattedEventName.Data.ArrayNum = puVar34;
    FRDGBuilder::ClobberPassOutputs(pFVar4,pFVar28);
    TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Insert(&pFVar4->Passes,pFVar28);
    FRDGBuilder::SetupParameterPass(pFVar4,pFVar28);
    if (local_a8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  pFVar30 = FRDGBuilder::AllocParameters<FRasterBinBuild_CS::FParameters>
                      (this->GraphBuilder,(FParameters *)local_368);
  local_630.Buffer = __return_storage_ptr__->DataBuffer;
  local_630._padding_._2_1_ = 0;
  bVar13 = 0;
  if ((((local_630.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_630._padding_._0_2_ = (ushort)bVar13;
  pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_630,None);
  pFVar30->OutRasterBinData = pFVar21;
  local_620.Buffer = __return_storage_ptr__->IndirectArgs;
  bVar13 = 0;
  local_620._padding_._2_1_ = 0;
  if ((((local_620.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_620._padding_._0_2_ = (ushort)bVar13;
  pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_620,None);
  pFVar30->OutRasterBinArgsSWHW = pFVar21;
  local_6f0.Buffer = __return_storage_ptr__->MetaBuffer;
  bVar13 = 0;
  local_6f0._padding_._2_1_ = 0;
  if ((((local_6f0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar13 = 0x1c;
  }
  local_6f0._padding_._0_2_ = (ushort)bVar13;
  pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_6f0,None);
  pFVar30->OutRasterBinMeta = pFVar21;
  local_610.Tail.Tail.DimensionValue = this->VirtualShadowMapArray != (FVirtualShadowMapArray *)0x0;
  local_610.Tail.DimensionValue = (bool)local_774;
  local_610.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = this->bMultiView;
  local_610.Tail.Tail.Tail.DimensionValue = false;
  local_610.Tail.Tail.Tail.Tail.DimensionValue = 3;
  local_610.DimensionValue = !param_7;
  local_610.Tail.Tail.Tail.Tail.Tail.DimensionValue = bVar33;
  FGlobalShaderMap::GetShader<FRasterBinBuild_CS>
            (this->SharedContext->ShaderMap,&local_158,&local_610);
  pFVar25 = FRasterBinBuild_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_148.ShaderContent = (FShader *)local_158.ShaderContent;
  local_148.ShaderMap = local_158.ShaderMap;
  ValidateShaderParameters(&local_148,pFVar25,pFVar30);
  local_138._First = (FRDGResource **)0x0;
  local_138._Last = (FRDGResource **)0x0;
  ClearUnusedGraphResourcesImpl
            ((FShaderParameterBindings *)local_158.ShaderContent,pFVar25,pFVar30,&local_138);
  pFVar4 = this->GraphBuilder;
  pFStack_418 = local_res18;
  local_410 = param_4;
  pFStack_408 = (FShader *)local_158.ShaderContent;
  pFStack_400 = local_158.ShaderMap;
  local_420 = pFVar30;
  pFVar26 = FRDGEventName::FRDGEventName(&local_90,1,L"RasterBinScatter");
  local_758 = (FRDGBuffer *)pFVar26;
  pFVar25 = FRasterBinBuild_CS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&pFVar4->UserValidation,pFVar30,pFVar25,pFVar26,param_8);
  FRDGBuilder::FlushAccessModeQueue(pFVar4);
  pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
  EVar14 = FRDGBuilder::OverridePassFlags(pFVar4,pwVar27,param_8);
  pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x1b0,8);
  local_3f8.Contents = (uchar *)pFVar30;
  if (((pFVar25->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar20 = (FBinningData *)(*pcVar7)();
    return pFVar20;
  }
  local_3f8.Layout.Reference = (pFVar25->Layout).Reference;
  if (local_3f8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_3f8.Layout.Reference);
  }
  local_3f8.Metadata = pFVar25;
  FRDGPass::FRDGPass(pFVar28,(FRDGEventName *)local_758,&local_3f8,EVar14,Async);
  pFVar28->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRasterBinBuild_CS::FParameters,`Nanite::FRenderer::AddPass_Binning'::`30'::<lambda_5>_>
        ::_vftable_;
  pFVar28[1]._padding_ = (longlong)local_420;
  pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_418;
  *(FParameters **)&pFVar28[1].Name.FormattedEventName.Data.ArrayNum = pFVar30;
  *(FRDGBuffer **)&pFVar28[1].FullPathIfDebug.Data.ArrayNum = local_410;
  pFVar28[1].Name.EventFormat = (wchar_t *)pFStack_408;
  pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)pFStack_400;
  FRDGBuilder::ClobberPassOutputs(pFVar4,pFVar28);
  iVar15 = (pFVar4->Passes).Array.ArrayNum;
  piVar1 = &(pFVar4->Passes).Array.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&pFVar4->Passes,piVar1);
  }
  (pFVar4->Passes).Array.ArrayNum = iVar15 + 1;
  (pFVar4->Passes).Array.AllocatorInstance.Data[iVar15] = pFVar28;
  (pFVar28->Handle).Index = (pFVar4->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(pFVar4,pFVar28);
  if (local_90.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (param_4 == (FRDGBuffer *)0x0) {
    iVar15 = 0;
    if (local_res20 != MeshShaderWrapped) {
      iVar15 = (local_res20 != MeshShaderNV) + 1;
    }
    pFVar4 = this->GraphBuilder;
    puVar31 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x30,0x10);
    if (puVar31 == (undefined8 *)0x0) {
      puVar31 = (undefined8 *)0x0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FBinningData *)(*pcVar7)();
        return pFVar20;
      }
    }
    else {
      puVar31[2] = 0;
      *puVar31 = &___7__TObject_VFParameters_FRasterBinFinalize_CS___FRDGAllocator__6B_;
      puVar31[3] = 0;
    }
    local_700 = puVar31;
    if ((((undefined8 **)pFVar4->_padding_ <= &local_700) &&
        (&local_700 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4))
        ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
      pcVar7 = (code *)swi(3);
      pFVar20 = (FBinningData *)(*pcVar7)();
      return pFVar20;
    }
    iVar17 = (int)pFVar4->_padding_;
    piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
    }
    puVar34 = (uchar *)(puVar31 + 2);
    *(int *)&pFVar4->_padding_ = iVar17 + 1;
    *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar17 * 8) = local_700;
    local_6e0.Buffer = __return_storage_ptr__->IndirectArgs;
    local_6e0._padding_._2_1_ = 0;
    bVar13 = 0;
    if ((((local_6e0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar13 = 0x1c;
    }
    local_6e0._padding_._0_2_ = (ushort)bVar13;
    pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_6e0,None);
    *(FRDGBufferUAV **)puVar34 = pFVar21;
    local_6d0.Buffer = __return_storage_ptr__->MetaBuffer;
    bVar13 = 0;
    local_6d0._padding_._2_1_ = 0;
    if ((((local_6d0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar13 = 0x1c;
    }
    local_6d0._padding_._0_2_ = (ushort)bVar13;
    pFVar21 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_6d0,None);
    puVar31[3] = pFVar21;
    *(uint *)(puVar31 + 4) = __return_storage_ptr__->BinCount;
    *(int *)((longlong)puVar31 + 0x24) = iVar15;
    *(uint *)(puVar31 + 5) = this->RenderFlags;
    *(int *)((longlong)puVar31 + 0x2c) = (int)local_6f8;
    pFVar5 = this->SharedContext->ShaderMap;
    pFVar22 = FRasterBinFinalize_CS::GetStaticType();
    if (*(int *)&pFVar22->field_0x50 != 1) {
      local_773[0] = 0;
      `FGlobalShaderMap::GetShader<FRasterBinFinalize_CS>'::__l2::<lambda_1>::operator()(local_773);
    }
    pFVar23 = (FShaderType *)FRasterBinFinalize_CS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar5,&local_508,pFVar23,0);
    if (local_508.ShaderContent == (FShader *)0x0) {
      FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_218);
      ::FName::ToString((FName *)FVar24,&local_128);
      FRasterBinFinalize_CS::GetStaticType();
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pFVar20 = (FBinningData *)(*pcVar7)();
        return pFVar20;
      }
    }
    FRasterBinFinalize_CS::GetStaticType();
    pFVar25 = FRasterBinFinalize_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_118.ShaderContent = local_508.ShaderContent;
    local_118.ShaderMap = local_508.ShaderMap;
    ValidateShaderParameters(&local_118,pFVar25,puVar34);
    local_298._First = (FRDGResource **)0x0;
    local_298._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_508.ShaderContent)->Bindings,pFVar25,puVar34,&local_298);
    pFVar4 = this->GraphBuilder;
    pFStack_4e0 = local_508.ShaderContent;
    pFStack_4f0 = local_res18;
    uStack_4d0 = __return_storage_ptr__->BinCount;
    local_4e8 = 0;
    local_4d8 = local_508.ShaderMap;
    local_4f8 = puVar34;
    pFVar26 = FRDGEventName::FRDGEventName(local_78,1,L"RasterBinFinalize");
    pFVar25 = FRasterBinFinalize_CS::FParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass(&pFVar4->UserValidation,puVar34,pFVar25,pFVar26,param_8);
    FRDGBuilder::FlushAccessModeQueue(pFVar4);
    pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
    EVar14 = FRDGBuilder::OverridePassFlags(pFVar4,pwVar27,param_8);
    pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x1b8,8);
    local_398.Contents = puVar34;
    local_398.Layout.Reference = FShaderParametersMetadata::GetLayoutPtr(pFVar25);
    if (local_398.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_398.Layout.Reference);
    }
    local_398.Metadata = pFVar25;
    FRDGPass::FRDGPass(pFVar28,pFVar26,&local_398,EVar14,Async);
    pFVar28->_padding_ =
         (longlong)
         &TRDGLambdaPass<FRasterBinFinalize_CS::FParameters,`Nanite::FRenderer::AddPass_Binning'::`33'::<lambda_6>_>
          ::_vftable_;
    pFVar28[1]._padding_ = (longlong)local_4f8;
    pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_4f0;
    pFVar28[1].ParameterStruct.Contents = puVar34;
    pFVar28[1].FullPathIfDebug.Data.ArrayNum = (undefined4)local_4e8;
    pFVar28[1].FullPathIfDebug.Data.ArrayMax = local_4e8._4_4_;
    pFVar28[1].Name.EventFormat = (wchar_t *)pFStack_4e0;
    pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)local_4d8;
    pFVar28[1].Name.FormattedEventName.Data.ArrayNum = uStack_4d0;
    pFVar28[1].Name.FormattedEventName.Data.ArrayMax = uStack_4cc;
    FRDGBuilder::ClobberPassOutputs(pFVar4,pFVar28);
    TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Insert(&pFVar4->Passes,pFVar28);
    FRDGBuilder::SetupParameterPass(pFVar4,pFVar28);
    if (local_78[0].FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_78[0].FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// AddPass_InstanceHierarchyAndClusterCull @ 144f7fad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
Nanite::FRenderer::AddPass_InstanceHierarchyAndClusterCull(FRenderer *this,uint param_1)

{
  byte *pbVar1;
  int *piVar2;
  char cVar3;
  FRDGBuilder *pFVar4;
  FUploadedBuffer *pFVar5;
  FGlobalShaderMap *this_00;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  FRDGBuffer *pFVar11;
  FRDGScope *this_01;
  FInstanceWorkGroupParameters *pFVar12;
  ForAnyElementType _Dst;
  undefined8 *puVar13;
  FRDGBufferSRV *pFVar14;
  FRDGBufferUAV *pFVar15;
  FShaderType *pFVar16;
  FName this_02;
  FRDGEventName *pFVar17;
  FShaderParametersMetadata *pFVar18;
  byte bVar19;
  FRDGBufferSRVDesc *pFVar20;
  FRDGBufferUAVDesc *pFVar21;
  undefined8 *puVar22;
  ulong64 _Size;
  undefined4 uVar23;
  undefined4 uVar24;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  FRDGBufferUAV *local_res18;
  FRDGBufferUAV *local_res20;
  ForAnyElementType local_3b8;
  uint local_3b0 [2];
  undefined8 *local_3a8;
  FRDGBufferSRVDesc local_3a0;
  uint local_380;
  undefined1 local_37c;
  FRDGBuffer *local_378;
  FRDGBufferUAVDesc local_370;
  FRDGBufferUAVDesc local_360;
  FRDGBufferUAVDesc local_350;
  FRDGBufferUAVDesc local_340;
  FRDGBufferUAVDesc local_330;
  FRDGBufferUAVDesc local_320;
  FRDGBufferUAVDesc local_310;
  FRDGBufferUAVDesc local_300;
  TIntVector3<int>_u_0 local_2e8;
  FName local_2d8;
  FRDGBufferUAV *local_2d0;
  FRDGBufferUAV *local_2c8;
  undefined1 local_2c0 [4];
  undefined1 local_2bc;
  undefined1 local_2b8 [4];
  undefined1 local_2b4;
  FMemScope local_2b0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2a8;
  char local_298;
  FInstanceWorkGroupParameters local_288;
  FRDGBufferSRVDesc local_268;
  FRDGBufferSRVDesc local_248;
  FRDGBufferSRVDesc local_228;
  FRDGBufferSRVDesc local_208;
  FRDGBufferSRVDesc local_1e8;
  FRDGBufferSRVDesc local_1c8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a8;
  FRDGBufferSRVDesc local_198;
  FRenderer *local_178;
  FRDGBufferUAV **local_170;
  FRDGBufferUAV **local_168;
  uint *local_160;
  FRDGBufferUAV **local_158;
  FRDGBufferUAV **local_150;
  ulonglong local_148;
  EBufferUsageFlags EStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  FInstanceWorkGroupParameters local_128;
  undefined1 local_108 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_> local_100;
  FRDGBufferDesc local_f0;
  FString local_d8;
  TShaderRefBase<FCalculateSafeRasterizerArgs_CS,FShaderMapPointerTable> local_c8;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  FRDGEventName local_98;
  FInstanceWorkGroupParameters local_78;
  
  local_res10[0] = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_2d8 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_2b0,&local_2d8,true);
  if ((GRHIGlobals.PersistentThreadGroupCount < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GRHIGlobals.PersistentThreadGroupCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                         ,0x1110,
                         L"GRHIPersistentThreadGroupCount must be configured correctly in the RHI.")
     , bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar11 = FSystemTextures::GetDefaultStructuredBuffer
                      ((FSystemTextures *)&GSystemTextures,this->GraphBuilder,8);
  local_298 = '\0';
  cVar3 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
  local_378 = pFVar11;
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((this->GraphBuilder->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_a8 = 0;
      uStack_a4 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_ac);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)::u_InstanceCulling;
      ::Desc._padding_ = (longlong)::u_InstanceCulling;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x1115;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```Nanite::FRenderer::AddPass_InstanceHierarchyAndClusterCull'::__l17::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = this->GraphBuilder;
    local_100._Myfirst._Val = &::Desc;
    local_2a8.State = (FRDGScopeState *)pFVar4;
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar4->_padding_,(FRDGScope **)pFVar4);
    ((FState *)&pFVar4->_padding_)->Current = this_01;
    local_2a8.Scope = this_01;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_>_>
              (&(this_01->Impl).Impl,(FRDGScopeState *)pFVar4,&local_100);
    if (*(bool *)((longlong)&pFVar4->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)pFVar4->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)pFVar4->_padding_);
    }
    local_298 = '\x01';
  }
  uVar23 = 0;
  uVar24 = 0;
  local_288.InInstanceWorkArgs = (FRDGBufferSRV *)0x0;
  local_288.InInstanceWorkGroups = (FRDGBufferSRV *)0x0;
  local_288.InViewDrawRanges = (FRDGBufferSRV *)0x0;
  local_288.InstanceIds = (FRDGBufferSRV *)0x0;
  if ((this->InstanceHierarchyDriver).bIsEnabled != false) {
    pFVar12 = FInstanceHierarchyDriver::DispatchCullingPass
                        (&this->InstanceHierarchyDriver,&local_78,this->GraphBuilder,local_res10[0],
                         this);
    local_288.InInstanceWorkArgs = pFVar12->InInstanceWorkArgs;
    local_288.InInstanceWorkGroups = pFVar12->InInstanceWorkGroups;
    uVar23 = *(undefined4 *)&pFVar12->InViewDrawRanges;
    uVar24 = *(undefined4 *)((longlong)&pFVar12->InViewDrawRanges + 4);
    local_288.InViewDrawRanges = pFVar12->InViewDrawRanges;
    local_288.InstanceIds = pFVar12->InstanceIds;
  }
  local_370.Buffer = this->QueueState;
  local_370._padding_._2_1_ = 0;
  bVar19 = 0;
  if ((((local_370.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar19 = 0x1c;
  }
  local_370._padding_._0_2_ = (ushort)bVar19;
  local_2d0 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_370,SkipBarrier);
  local_360.Buffer = this->CandidateNodesBuffer;
  bVar19 = 0;
  local_360._padding_._2_1_ = 0;
  if ((((local_360.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar19 = 0x1c;
  }
  local_360._padding_._0_2_ = (ushort)bVar19;
  local_2c8 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_360,SkipBarrier);
  local_res18 = (FRDGBufferUAV *)0x0;
  local_res20 = (FRDGBufferUAV *)0x0;
  if (local_res10[0] == 1) {
    local_350.Buffer = this->OccludedInstances;
    bVar19 = 0;
    local_350._padding_._2_1_ = 0;
    if ((((local_350.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar19 = 0x1c;
    }
    local_350._padding_._0_2_ = (ushort)bVar19;
    local_res18 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_350,SkipBarrier);
    local_340.Buffer = this->OccludedInstancesArgs;
    bVar19 = 0;
    local_340._padding_._2_1_ = 0;
    if ((((local_340.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar19 = 0x1c;
    }
    local_340._padding_._0_2_ = (ushort)bVar19;
    local_res20 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_340,SkipBarrier);
  }
  local_170 = &local_2d0;
  local_168 = &local_2c8;
  local_160 = local_res10;
  local_158 = &local_res18;
  local_150 = &local_res20;
  local_178 = this;
  if (this->ExplicitChunkDrawInfo != (FExplicitChunkDrawInfo *)0x0) {
    local_288.InViewDrawRanges = (FRDGBufferSRV *)CONCAT44(uVar24,uVar23);
    if ((local_288.InViewDrawRanges == (FRDGBufferSRV *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceWorkGroupParameters.InViewDrawRanges",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                           ,0x11b0,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_3b8.Data = (FScriptContainerElement *)0x0;
    local_3b0[0] = 0;
    local_3b0[1] = 0;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,8,&local_3b8,(int *)local_3b0,(int *)(local_3b0 + 1));
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 4) = 0;
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 4 + 8) = 0;
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 4 + 0x10) = 0;
    *(undefined8 *)(local_3b8.Data + (longlong)iVar9 * 4 + 0x10 + 8) = 0;
    uVar10 = this->ExplicitChunkDrawInfo->NumChunks;
    if (((int)local_3b0[0] < 5) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(uint *)(local_3b8.Data + 0x10) = uVar10;
    if (((int)local_3b0[0] < 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)(local_3b8.Data + 0x14) = 1;
    if (((int)local_3b0[0] < 7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_3a0._padding_._0_4_ = 0x10119;
    local_3a0._padding_._0_4_ = 4;
    local_3a0._padding_ = 0;
    *(undefined4 *)(local_3b8.Data + 0x18) = 1;
    local_3a0._padding_._4_4_ = local_3b0[0] & 0x3fffffff;
    local_148 = CONCAT44(local_3b0[0],4) & 0x3fffffffffffffff;
    local_138 = 0;
    uStack_13c = local_3a0._padding_._4_4_;
    EStack_140 = StructuredBuffer|ShaderResource|DrawIndirect|ByteAddressBuffer|UnorderedAccess|
                 Static;
    local_f0.Metadata = (FShaderParametersMetadata *)0x0;
    local_f0.Usage =
         StructuredBuffer|ShaderResource|DrawIndirect|ByteAddressBuffer|UnorderedAccess|Static;
    local_f0._12_4_ = local_3a0._padding_._4_4_;
    local_f0._0_8_ = local_148;
    pFVar11 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_f0,L"Nanite.ExplicitChunkInstanceWorkArgs",None);
    _Src.Data = local_3b8.Data;
    pFVar4 = this->GraphBuilder;
    _Size = (longlong)(int)local_3b0[0] << 2;
    FRDGUserValidation::ValidateUploadBuffer(&pFVar4->UserValidation,pFVar11,local_3b8.Data,_Size);
    _Dst.Data = _Src.Data;
    if (_Size != 0) {
      _Dst.Data = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,_Size,0x10);
      memcpy(_Dst.Data,_Src.Data,_Size);
    }
    iVar9 = (pFVar4->UploadedBuffers).ArrayNum;
    piVar2 = &(pFVar4->UploadedBuffers).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                        (0x10e0,&(pFVar4->UploadedBuffers).AllocatorInstance,piVar2);
    }
    local_198._padding_._0_1_ = 0x1c;
    (pFVar4->UploadedBuffers).ArrayNum = iVar9 + 1;
    pFVar5 = (pFVar4->UploadedBuffers).AllocatorInstance.Data;
    local_198._padding_._0_4_ = 0xffffffff;
    pFVar5[iVar9].Data = _Dst.Data;
    pFVar5[iVar9].bUseDataCallbacks = false;
    pFVar5[iVar9].bUseFreeCallbacks = false;
    pFVar5[iVar9].Buffer = pFVar11;
    pFVar5[iVar9].DataSize = _Size;
    *(undefined8 *)&pFVar5[iVar9].DataCallback = 0;
    *(undefined8 *)&pFVar5[iVar9].DataCallback.field_0x28 = 0;
    *(undefined8 *)&pFVar5[iVar9].DataSizeCallback = 0;
    *(undefined8 *)&pFVar5[iVar9].DataSizeCallback.field_0x28 = 0;
    *(undefined8 *)&pFVar5[iVar9].DataFreeCallback = 0;
    *(undefined8 *)&pFVar5[iVar9].DataFreeCallback.field_0x28 = 0;
    *(undefined8 *)&pFVar5[iVar9].DataFillCallback = 0;
    *(undefined8 *)&pFVar5[iVar9].DataFillCallback.field_0x28 = 0;
    pbVar1 = (byte *)((longlong)&pFVar11->_padding_ + 1);
    *pbVar1 = *pbVar1 | 0x80;
    local_198._padding_._4_4_ = 0;
    local_198._padding_ = 0;
    local_198.Buffer = pFVar11;
    local_128.InInstanceWorkArgs = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_198);
    local_3a0.Buffer = this->ExplicitChunkDrawInfo->ExplicitChunkDraws;
    uVar8 = 0;
    local_3a0._padding_._4_4_ = 0;
    local_3a0._padding_._0_4_ = 0xffffffff;
    local_3a0._padding_ = 0;
    if ((((local_3a0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar8 = 0x1c;
    }
    local_3a0._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)local_3a0._padding_ >> 8),uVar8);
    local_128.InInstanceWorkGroups = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_3a0);
    local_268.Buffer = this->ExplicitChunkDrawInfo->InstanceIds;
    local_268._padding_._0_1_ = 0;
    local_268._padding_._4_4_ = 0;
    local_268._padding_._0_4_ = 0xffffffff;
    local_268._padding_ = 0;
    if ((((local_268.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_268._padding_._0_1_ = 0x1c;
    }
    local_128.InstanceIds = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_268);
    local_128.InViewDrawRanges = local_288.InViewDrawRanges;
    local_37c = 1;
    local_380 = this->ExplicitChunkDrawInfo->NumChunks;
    `Nanite::FRenderer::AddPass_InstanceHierarchyAndClusterCull'::__l12::<lambda_2>::operator()
              (&local_178,&local_128,(TOptional<unsigned_int>)&local_380,true);
    pFVar11 = local_378;
    if (local_3b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data);
      pFVar11 = local_378;
    }
  }
  puVar22 = (undefined8 *)0x0;
  if ((local_res10[0] == 2) && (local_288.InInstanceWorkArgs != (FRDGBufferSRV *)0x0)) {
    local_2bc = 0;
    `Nanite::FRenderer::AddPass_InstanceHierarchyAndClusterCull'::__l12::<lambda_2>::operator()
              (&local_178,&DummyInstanceWorkGroupParameters,(TOptional<unsigned_int>)local_2c0,false
              );
  }
  local_2b4 = 0;
  `Nanite::FRenderer::AddPass_InstanceHierarchyAndClusterCull'::__l12::<lambda_2>::operator()
            (&local_178,&local_288,(TOptional<unsigned_int>)local_2b8,false);
  if (local_298 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2a8);
  }
  AddPass_NodeAndClusterCull(this,local_res10[0]);
  pFVar4 = this->GraphBuilder;
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x50,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    puVar13[2] = 0;
    *puVar13 = &___7__TObject_VFParameters_FCalculateSafeRasterizerArgs_CS___FRDGAllocator__6B_;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar22 = puVar13;
  }
  local_3a8 = puVar22;
  if ((((undefined8 **)pFVar4->_padding_ <= &local_3a8) &&
      (&local_3a8 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4)))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (int)pFVar4->_padding_;
  piVar2 = (int *)((longlong)&pFVar4->_padding_ + 4);
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar2);
  }
  *(int *)&pFVar4->_padding_ = iVar9 + 1;
  *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar9 * 8) = local_3a8;
  bVar7 = local_res10[0] == 2;
  if ((this->RenderFlags & 0x2000) == 0) {
    local_228._padding_._4_4_ = 0;
    local_228._padding_._0_1_ = 0;
    pFVar20 = &local_228;
    local_228._padding_._0_4_ = 0xffffffff;
    local_228._padding_ = 0;
    local_228.Buffer = pFVar11;
    if (((pFVar11->Desc).Usage & DrawIndirect) != None) {
      local_228._padding_._0_1_ = 0x1c;
    }
  }
  else {
    local_248.Buffer = this->TotalPrevDrawClustersBuffer;
    local_248._padding_._0_1_ = 0;
    local_248._padding_._4_4_ = 0;
    local_248._padding_._0_4_ = 0xffffffff;
    local_248._padding_ = 0;
    pFVar20 = &local_248;
    if ((((local_248.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_248._padding_._0_1_ = 0x1c;
    }
  }
  pFVar14 = FRDGBuilder::CreateSRV(this->GraphBuilder,pFVar20);
  ((FParameters *)(puVar22 + 2))->InTotalPrevDrawClusters = pFVar14;
  pFVar11 = this->MainRasterizeArgsSWHW;
  if (bVar7) {
    local_208._padding_._0_1_ = 0;
    local_208._padding_._4_4_ = 0;
    local_208._padding_._0_4_ = 0xffffffff;
    local_208._padding_ = 0;
    if (((pFVar11->Desc).Usage & DrawIndirect) != None) {
      local_208._padding_._0_1_ = 0x1c;
    }
    local_208.Buffer = pFVar11;
    pFVar14 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_208);
    puVar22[3] = pFVar14;
    local_1e8.Buffer = this->PostRasterizeArgsSWHW;
    local_1e8._padding_._0_1_ = 0;
    local_1e8._padding_._4_4_ = 0;
    local_1e8._padding_._0_4_ = 0xffffffff;
    local_1e8._padding_ = 0;
    if ((((local_1e8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_1e8._padding_._0_1_ = 0x1c;
    }
    pFVar14 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_1e8);
    puVar22[4] = pFVar14;
    pFVar21 = &local_330;
    local_330.Buffer = this->SafePostRasterizeArgsSWHW;
    bVar19 = 0;
    local_330._padding_._2_1_ = 0;
    if ((((local_330.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar19 = 0x1c;
    }
    local_330._padding_._0_2_ = (ushort)bVar19;
  }
  else {
    local_1c8._padding_._0_1_ = 0;
    local_1c8._padding_._4_4_ = 0;
    local_1c8._padding_._0_4_ = 0xffffffff;
    local_1c8._padding_ = 0;
    if (((pFVar11->Desc).Usage & DrawIndirect) != None) {
      local_1c8._padding_._0_1_ = 0x1c;
    }
    local_1c8.Buffer = pFVar11;
    pFVar14 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_1c8);
    puVar22[4] = pFVar14;
    pFVar21 = &local_320;
    local_320.Buffer = this->SafeMainRasterizeArgsSWHW;
    bVar19 = 0;
    local_320._padding_._2_1_ = 0;
    if ((((local_320.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar19 = 0x1c;
    }
    local_320._padding_._0_2_ = (ushort)bVar19;
  }
  pFVar15 = FRDGBuilder::CreateUAV(this->GraphBuilder,pFVar21,None);
  puVar22[5] = pFVar15;
  local_310.Buffer = this->ClusterCountSWHW;
  bVar19 = 0;
  local_310._padding_._2_1_ = 0;
  if ((((local_310.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar19 = 0x1c;
  }
  local_310._padding_._0_2_ = (ushort)bVar19;
  pFVar15 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_310,None);
  puVar22[6] = pFVar15;
  local_300.Buffer = this->ClusterClassifyArgs;
  bVar19 = 0;
  local_300._padding_._2_1_ = 0;
  if ((((local_300.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar19 = 0x1c;
  }
  local_300._padding_._0_2_ = (ushort)bVar19;
  pFVar15 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_300,None);
  puVar22[7] = pFVar15;
  uVar10 = FGlobalResources::GetMaxVisibleClusters();
  *(uint *)(puVar22 + 8) = uVar10;
  *(uint *)((longlong)puVar22 + 0x44) = this->RenderFlags;
  this_00 = this->SharedContext->ShaderMap;
  pFVar16 = (FShaderType *)FCalculateSafeRasterizerArgs_CS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_1a8,pFVar16,(uint)bVar7);
  if (local_1a8.ShaderContent == (FShader *)0x0) {
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_108);
    ::FName::ToString((FName *)this_02,&local_d8);
    FCalculateSafeRasterizerArgs_CS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FCalculateSafeRasterizerArgs_CS::GetStaticType();
  local_c8.ShaderContent = (FCalculateSafeRasterizerArgs_CS *)local_1a8.ShaderContent;
  local_c8.ShaderMap = local_1a8.ShaderMap;
  pFVar17 = FRDGEventName::FRDGEventName(&local_98,1,L"CalculateSafeRasterizerArgs");
  pFVar4 = this->GraphBuilder;
  pFVar18 = FCalculateSafeRasterizerArgs_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_2e8._s_0.X = 1;
  local_2e8._s_0.Y = 1;
  local_2e8._s_0.Z = 1;
  FComputeShaderUtils::AddPass<FCalculateSafeRasterizerArgs_CS>
            (pFVar4,pFVar17,Compute,&local_c8,pFVar18,(FParameters *)(puVar22 + 2),
             (TIntVector3<int> *)&local_2e8._s_0);
  if (local_98.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_2b0);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddPass_NodeAndClusterCull @ 144f80800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
Nanite::FRenderer::AddPass_NodeAndClusterCull
          (FRenderer *this,FRDGEventName *param_1,FNodeAndClusterCullSharedParameters *param_2,
          FRDGBuffer *param_3,FRDGBuffer *param_4,uint param_5,uint param_6,uint param_7)

{
  FRDGBuilder *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  TVector2<float>_u_0 TVar4;
  FRDGTexture *pFVar5;
  FRDGBufferSRV *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FParameters *pFVar11;
  bool bVar12;
  FParameters *pFVar13;
  FShaderParametersMetadata *pFVar14;
  FRDGBufferSRV *pFVar15;
  FRDGBufferUAV *pFVar16;
  undefined1 uVar17;
  longlong lVar18;
  longlong *plVar19;
  FParameters *pFVar20;
  FNodeAndClusterCullSharedParameters *pFVar21;
  undefined1 auStackY_118 [32];
  FRDGBufferUAVDesc local_d8;
  TShaderPermutationDomain<FNodeAndClusterCull_CS::FCullingPassDim,FNodeAndClusterCull_CS::FCullingTypeDim,FNodeAndClusterCull_CS::FMultiViewDim,FNodeAndClusterCull_CS::FVirtualTextureTargetDim,FNodeAndClusterCull_CS::FMaterialCacheDim,FNodeAndClusterCull_CS::FDebugFlagsDim,FNodeAndClusterCull_CS::FSplineDeformDim>
  local_c8;
  TIntVector3<int>_u_0 local_b8;
  FRDGBufferSRVDesc local_a8;
  TShaderRefBase<FNodeAndClusterCull_CS,FShaderMapPointerTable> local_88;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar13 = FRDGAllocator::Alloc<FNodeAndClusterCull_CS::FParameters>
                      ((FRDGAllocator *)&this->GraphBuilder->_padding_);
  lVar18 = 2;
  pFVar11 = pFVar13;
  do {
    pFVar21 = param_2;
    pFVar20 = pFVar11;
    pFVar11 = (FParameters *)&(pFVar20->SharedParameters).Scene;
    uVar3 = *(undefined8 *)((longlong)&(pFVar21->CullingParameters).PageConstants.field0_0x0 + 8);
    *(undefined8 *)&(pFVar20->SharedParameters).CullingParameters.PageConstants.field0_0x0 =
         *(undefined8 *)&(pFVar21->CullingParameters).PageConstants.field0_0x0;
    *(undefined8 *)
     ((longlong)&(pFVar20->SharedParameters).CullingParameters.PageConstants.field0_0x0 + 8) = uVar3
    ;
    uVar7 = (pFVar21->CullingParameters).MaxVisibleClusters;
    uVar8 = (pFVar21->CullingParameters).RenderFlags;
    uVar9 = (pFVar21->CullingParameters).DebugFlags;
    (pFVar20->SharedParameters).CullingParameters.MaxCandidateClusters =
         (pFVar21->CullingParameters).MaxCandidateClusters;
    (pFVar20->SharedParameters).CullingParameters.MaxVisibleClusters = uVar7;
    (pFVar20->SharedParameters).CullingParameters.RenderFlags = uVar8;
    (pFVar20->SharedParameters).CullingParameters.DebugFlags = uVar9;
    iVar10 = (pFVar21->CullingParameters)._padding_;
    TVar4 = (pFVar21->CullingParameters).HZBSize.field0_0x0;
    (pFVar20->SharedParameters).CullingParameters.NumViews = (pFVar21->CullingParameters).NumViews;
    (pFVar20->SharedParameters).CullingParameters._padding_ = iVar10;
    (pFVar20->SharedParameters).CullingParameters.HZBSize.field0_0x0 = TVar4;
    pFVar5 = (pFVar21->CullingParameters).HZBTexture;
    (pFVar20->SharedParameters).CullingParameters.HZBTextureArray =
         (pFVar21->CullingParameters).HZBTextureArray;
    (pFVar20->SharedParameters).CullingParameters.HZBTexture = pFVar5;
    pFVar15 = (pFVar21->CullingParameters).InViews;
    (pFVar20->SharedParameters).CullingParameters.HZBSampler =
         (pFVar21->CullingParameters).HZBSampler;
    (pFVar20->SharedParameters).CullingParameters.InViews = pFVar15;
    uVar3 = *(undefined8 *)&(pFVar21->VirtualShadowMap).VirtualShadowMap.field_0x8;
    *(undefined8 *)&(pFVar20->SharedParameters).VirtualShadowMap.VirtualShadowMap =
         *(undefined8 *)&(pFVar21->VirtualShadowMap).VirtualShadowMap;
    *(undefined8 *)&(pFVar20->SharedParameters).VirtualShadowMap.VirtualShadowMap.field_0x8 = uVar3;
    pFVar15 = (pFVar21->VirtualShadowMap).HZBPageRectBounds;
    (pFVar20->SharedParameters).VirtualShadowMap.HZBPageTable =
         (pFVar21->VirtualShadowMap).HZBPageTable;
    (pFVar20->SharedParameters).VirtualShadowMap.HZBPageRectBounds = pFVar15;
    pFVar16 = (pFVar21->VirtualShadowMap).OutDirtyPageFlags;
    (pFVar20->SharedParameters).VirtualShadowMap.HZBPageFlags =
         (pFVar21->VirtualShadowMap).HZBPageFlags;
    (pFVar20->SharedParameters).VirtualShadowMap.OutDirtyPageFlags = pFVar16;
    lVar18 = lVar18 + -1;
    param_2 = (FNodeAndClusterCullSharedParameters *)&pFVar21->Scene;
  } while (lVar18 != 0);
  uVar3 = *(undefined8 *)&(pFVar21->Scene).field_0x8;
  *(undefined8 *)&((TRDGUniformBufferBinding<FSceneUniformParameters> *)pFVar11)->field_0x0 =
       *(undefined8 *)&(pFVar21->Scene).field_0x0;
  *(undefined8 *)&(pFVar20->SharedParameters).Scene.field_0x8 = uVar3;
  pFVar15 = pFVar21->ClusterPageData;
  pFVar6 = pFVar21->HierarchyBuffer;
  pFVar13->NodeLevel = param_5;
  (pFVar20->SharedParameters).ClusterPageData = pFVar15;
  (pFVar20->SharedParameters).HierarchyBuffer = pFVar6;
  local_c8.Tail.Tail.Tail.DimensionValue =
       this->VirtualShadowMapArray != (FVirtualShadowMapArray *)0x0;
  local_c8.DimensionValue = param_6;
  local_c8.Tail.Tail.DimensionValue = this->bMultiView;
  local_c8.Tail.Tail.Tail.Tail.DimensionValue =
       (bool)(*(byte *)((longlong)&this->RenderFlags + 2) & 1);
  local_c8.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = NaniteSplineMeshesSupported();
  if ((this->DebugFlags == 0) && ((this->RenderFlags & 0x8000) == 0)) {
    local_c8.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  }
  else {
    local_c8.Tail.Tail.Tail.Tail.Tail.DimensionValue = true;
  }
  local_c8.Tail.DimensionValue = param_7;
  FGlobalShaderMap::GetShader<FNodeAndClusterCull_CS>
            (this->SharedContext->ShaderMap,&local_88,&local_c8);
  iVar10 = GRHIGlobals.PersistentThreadGroupCount;
  if (param_7 == 0) {
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = 0xffffffff;
    local_a8._padding_ = 0;
    local_a8._padding_._0_1_ = 0;
    if (((param_3->Desc).Usage & DrawIndirect) != None) {
      local_a8._padding_._0_1_ = 0x1c;
    }
    local_a8.Buffer = param_3;
    pFVar15 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_a8);
    pFVar13->CurrentNodeIndirectArgs = pFVar15;
    local_d8.Buffer = param_4;
    uVar17 = 0;
    if (((param_4->Desc).Usage & DrawIndirect) != None) {
      uVar17 = 0x1c;
    }
    local_d8._padding_ =
         CONCAT71((int7)((ulonglong)local_d8._padding_ >> 8),uVar17) & 0xffffffffff0000ff;
    pFVar16 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_d8,None);
    pFVar13->NextNodeIndirectArgs = pFVar16;
  }
  else if (param_7 != 1) {
    if (param_7 == 2) {
      pFVar1 = this->GraphBuilder;
      pFVar14 = FNodeAndClusterCull_CS::FParameters::FTypeInfo::GetStructMetadata();
      local_b8._s_0.X = iVar10;
      local_b8._s_0.Y = 1;
      local_b8._s_0.Z = 1;
      FComputeShaderUtils::AddPass<FNodeAndClusterCull_CS>
                (pFVar1,param_1,Compute,&local_88,pFVar14,pFVar13,(TIntVector3<int> *)&local_b8._s_0
                );
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                        ,0x108a,L"Unknown culling type: %d");
    if (!bVar12) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_d8.Buffer = (FRDGBuffer *)CONCAT44(local_d8.Buffer._4_4_,4);
  *(FRDGBuffer **)&pFVar13->IndirectArgs = param_3;
  *(FRDGBuffer **)&(pFVar13->IndirectArgs).field_0x8 = local_d8.Buffer;
  local_78._0_8_ = 0;
  local_50 = (longlong *)0x0;
  local_d8._padding_ = (longlong)param_3;
  FComputeShaderUtils::AddPass<FNodeAndClusterCull_CS>
            (this->GraphBuilder,param_1,Compute,&local_88,pFVar13,param_3,param_5 << 5,
             (TFunction<void___cdecl(void)> *)local_78);
  if (local_78._0_8_ != 0) {
    plVar19 = (longlong *)(local_78 + 0x10);
    if (local_50 != (longlong *)0x0) {
      plVar19 = local_50;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  return;
}

// AddPass_NodeAndClusterCull @ 144f80ad0

/* WARNING: Removing unreachable block (ram,0x000144f81533) */
/* WARNING: Removing unreachable block (ram,0x000144f81542) */
/* WARNING: Removing unreachable block (ram,0x000144f81448) */
/* WARNING: Removing unreachable block (ram,0x000144f81450) */
/* WARNING: Removing unreachable block (ram,0x000144f815a3) */
/* WARNING: Removing unreachable block (ram,0x000144f815af) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall Nanite::FRenderer::AddPass_NodeAndClusterCull(FRenderer *this,uint param_1)

{
  char cVar1;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar2;
  code *pcVar3;
  FRDGBuffer *pFVar4;
  TConsoleVariableData<float> *pTVar5;
  TConsoleVariableData<float> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  undefined4 uVar8;
  EUniformBufferBindingFlags EVar9;
  bool bVar10;
  undefined1 uVar11;
  FShaderParametersMetadata *pFVar12;
  FRDGEventName *pFVar13;
  FRDGScope *this_00;
  FRDGBuffer *pFVar14;
  FRDGBuffer *pFVar15;
  FRDGBufferUAV *pFVar16;
  byte bVar17;
  FRDGBuilder *pFVar18;
  FRDGBuffer *pFVar19;
  FRDGBufferSRVDesc *pFVar20;
  FRDGBufferUAVDesc *pFVar21;
  char cVar22;
  uint uVar23;
  undefined4 uStack_3bc;
  FRDGBufferUAVDesc local_3a8;
  FRDGBufferUAVDesc local_398;
  FRDGBufferUAVDesc local_388;
  FRDGBufferUAVDesc local_378;
  FRDGBufferUAVDesc local_368;
  FRDGBufferUAVDesc local_358;
  FRDGBufferUAVDesc local_348;
  FRDGBufferUAVDesc local_338;
  FRDGBufferUAVDesc local_328;
  FRDGBufferUAVDesc local_318;
  FRDGBufferUAVDesc local_308;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2f8;
  char local_2e8;
  FRDGBufferSRVDesc local_2e0;
  FRDGBufferSRVDesc local_2c0;
  FRDGBufferSRVDesc local_2a0;
  TIntVector4<int>_u_0 local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  TVector2<float>_u_0 TStack_250;
  FRDGTexture *local_248;
  FRDGTexture *pFStack_240;
  FRHISamplerState *local_238;
  FRDGBufferSRV *pFStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  FRDGTexture *local_218;
  FRDGBufferSRV *pFStack_210;
  FRDGTexture *local_208;
  FRDGBufferUAV *pFStack_200;
  TRDGUniformBuffer<FSceneUniformParameters> *local_1f8;
  FRDGBuffer *pFStack_1f0;
  FRDGBufferSRV *local_1e8;
  FRDGBufferSRV *local_1e0;
  FRDGBufferSRV *local_1d8;
  FRDGBufferSRV *local_1d0;
  FRDGBufferUAV *local_1c8;
  FRDGBufferUAV *local_1c0;
  FRDGBufferUAV *local_1b8;
  FRDGBufferUAV *local_1b0;
  FRDGBufferUAV *local_1a8;
  FRDGBufferUAV *local_1a0;
  FRDGBufferUAV *local_198;
  FRDGBufferUAV *local_190;
  uint local_188;
  uint local_184;
  int local_180;
  uint local_17c;
  uint local_178;
  float local_174;
  float local_170;
  FRDGBufferUAV *local_168;
  FRDGBufferUAV *local_160;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_> local_158;
  FRDGBufferDesc local_148;
  FRDGBufferDesc local_130;
  FRDGBufferDesc local_118;
  FRDGBufferDesc local_100;
  uint uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  FRDGEventName local_c8;
  FRDGEventName local_b0;
  FRDGEventName local_98;
  FRDGEventName local_80;
  FRDGEventName local_68;
  
  pTVar2 = this->SceneUniformBuffer;
  local_228 = 0;
  local_218 = (FRDGTexture *)0x0;
  pFStack_210 = (FRDGBufferSRV *)0x0;
  local_208 = (FRDGTexture *)0x0;
  pFStack_200 = (FRDGBufferUAV *)0x0;
  local_1d0 = (FRDGBufferSRV *)0x0;
  local_1b0 = (FRDGBufferUAV *)0x0;
  local_168 = (FRDGBufferUAV *)0x0;
  uStack_220 = CONCAT71(uStack_220._1_7_,1);
  pFVar12 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  local_278._0_8_ = *(undefined8 *)&(this->CullingParameters).PageConstants.field0_0x0;
  local_278._8_8_ =
       *(undefined8 *)((longlong)&(this->CullingParameters).PageConstants.field0_0x0 + 8);
  local_258._0_4_ = (this->CullingParameters).NumViews;
  local_258._4_4_ = (this->CullingParameters)._padding_;
  TStack_250 = (this->CullingParameters).HZBSize.field0_0x0;
  EVar9 = Static;
  if (pFVar12->BindingFlags != StaticAndShader) {
    EVar9 = pFVar12->BindingFlags;
  }
  local_3a8.Buffer = (FRDGBuffer *)CONCAT71(local_3a8.Buffer._1_7_,EVar9);
  pFStack_1f0 = local_3a8.Buffer;
  local_268._0_4_ = (this->CullingParameters).MaxCandidateClusters;
  local_268._4_4_ = (this->CullingParameters).MaxVisibleClusters;
  uStack_260._0_4_ = (this->CullingParameters).RenderFlags;
  uStack_260._4_4_ = (this->CullingParameters).DebugFlags;
  local_238 = (this->CullingParameters).HZBSampler;
  pFStack_230 = (this->CullingParameters).InViews;
  local_248 = (this->CullingParameters).HZBTextureArray;
  pFStack_240 = (this->CullingParameters).HZBTexture;
  local_3a8._padding_ = (longlong)pTVar2;
  local_1f8 = pTVar2;
  local_188 = FGlobalResources::GetMaxNodes();
  local_184 = FGlobalResources::GetMaxVisibleAssemblyParts();
  local_1e8 = FStreamingManager::GetClusterPageDataSRV
                        ((FStreamingManager *)&GStreamingManager,this->GraphBuilder);
  local_1e0 = FStreamingManager::GetHierarchySRV
                        ((FStreamingManager *)&GStreamingManager,this->GraphBuilder);
  if (((this->DrawPassIndex != 0) && ((this->RenderFlags & 0x2000) == 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DrawPassIndex == 0 || RenderFlags & 0x2000",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x1098,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar18 = this->GraphBuilder;
  if ((this->RenderFlags & 0x2000) == 0) {
    local_2c0.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,pFVar18,8);
    local_2c0._padding_._0_1_ = 0;
    pFVar20 = &local_2c0;
    local_2c0._padding_._4_4_ = 0;
    local_2c0._padding_._0_4_ = 0xffffffff;
    local_2c0._padding_ = 0;
    pFVar18 = this->GraphBuilder;
    if ((((local_2c0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_2c0._padding_._0_1_ = 0x1c;
    }
  }
  else {
    local_2e0.Buffer = this->TotalPrevDrawClustersBuffer;
    local_2e0._padding_._4_4_ = 0;
    local_2e0._padding_._0_4_ = 0xffffffff;
    local_2e0._padding_ = 0;
    pFVar20 = &local_2e0;
    local_2e0._padding_._0_1_ = 0;
    if ((((local_2e0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_2e0._padding_._0_1_ = 0x1c;
    }
  }
  local_1d8 = FRDGBuilder::CreateSRV(pFVar18,pFVar20);
  local_398.Buffer = this->QueueState;
  bVar17 = 0;
  local_398._padding_._2_1_ = 0;
  if ((((local_398.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar17 = 0x1c;
  }
  local_398._padding_._0_2_ = (ushort)bVar17;
  local_1c8 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_398,None);
  local_388.Buffer = this->CandidateNodesBuffer;
  bVar17 = 0;
  local_388._padding_._2_1_ = 0;
  if ((((local_388.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar17 = 0x1c;
  }
  local_388._padding_._0_2_ = (ushort)bVar17;
  local_1c0 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_388,None);
  local_378.Buffer = this->CandidateClustersBuffer;
  bVar17 = 0;
  local_378._padding_._2_1_ = 0;
  if ((((local_378.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar17 = 0x1c;
  }
  local_378._padding_._0_2_ = (ushort)bVar17;
  local_1b8 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_378,None);
  pFVar14 = this->ClusterBatchesBuffer;
  if (pFVar14 != (FRDGBuffer *)0x0) {
    bVar17 = 0;
    local_368._padding_._2_1_ = 0;
    if (((pFVar14->Desc).Usage & DrawIndirect) != None) {
      bVar17 = 0x1c;
    }
    local_368._padding_._0_2_ = (ushort)bVar17;
    local_368.Buffer = pFVar14;
    local_1b0 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_368,None);
  }
  pFVar14 = this->MainRasterizeArgsSWHW;
  if (param_1 < 2) {
    pFVar21 = &local_348;
    bVar17 = 0;
    local_348._padding_._2_1_ = 0;
    if (((pFVar14->Desc).Usage & DrawIndirect) != None) {
      bVar17 = 0x1c;
    }
    local_348._padding_._0_2_ = (ushort)bVar17;
    local_348.Buffer = pFVar14;
  }
  else {
    local_2a0._padding_._0_1_ = 0;
    local_2a0._padding_._4_4_ = 0;
    local_2a0._padding_._0_4_ = 0xffffffff;
    local_2a0._padding_ = 0;
    if (((pFVar14->Desc).Usage & DrawIndirect) != None) {
      local_2a0._padding_._0_1_ = 0x1c;
    }
    local_2a0.Buffer = pFVar14;
    local_1d0 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_2a0);
    pFVar21 = &local_358;
    local_358.Buffer = this->PostRasterizeArgsSWHW;
    bVar17 = 0;
    local_358._padding_._2_1_ = 0;
    if ((((local_358.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar17 = 0x1c;
    }
    local_358._padding_._0_2_ = (ushort)bVar17;
  }
  local_190 = FRDGBuilder::CreateUAV(this->GraphBuilder,pFVar21,None);
  local_338.Buffer = this->VisibleClustersSWHW;
  bVar17 = 0;
  local_338._padding_._2_1_ = 0;
  if ((((local_338.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar17 = 0x1c;
  }
  local_338._padding_._0_2_ = (ushort)bVar17;
  local_1a0 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_338,None);
  local_328.Buffer = this->AssemblyTransformsBuffer;
  bVar17 = 0;
  local_328._padding_._2_1_ = 0;
  if ((((local_328.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar17 = 0x1c;
  }
  local_328._padding_._0_2_ = (ushort)bVar17;
  local_1a8 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_328,None);
  local_318.Buffer = this->StreamingRequests;
  bVar17 = 0;
  local_318._padding_._2_1_ = 0;
  if ((((local_318.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar17 = 0x1c;
  }
  local_318._padding_._0_2_ = (ushort)bVar17;
  local_198 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_318,None);
  local_228 = *(undefined8 *)&(this->VirtualTargetParameters).VirtualShadowMap;
  uStack_220 = *(undefined8 *)&(this->VirtualTargetParameters).VirtualShadowMap.field_0x8;
  local_218 = (this->VirtualTargetParameters).HZBPageTable;
  pFStack_210 = (this->VirtualTargetParameters).HZBPageRectBounds;
  local_208 = (this->VirtualTargetParameters).HZBPageFlags;
  pFStack_200 = (this->VirtualTargetParameters).OutDirtyPageFlags;
  if (this->StatsBuffer != (FRDGBuffer *)0x0) {
    local_168 = this->StatsBufferSkipBarrierUAV;
  }
  if (this->DebugFlags == 0) {
    if ((this->RenderFlags & 0x8000) == 0) {
      local_160 = (FRDGBufferUAV *)0x0;
      goto LAB_144f8100f;
    }
LAB_144f80f89:
    local_148.BytesPerElement = 4;
    local_148.NumElements = 1;
    local_148._12_4_ = uStack_3bc;
    local_148.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    local_148.Metadata = (FShaderParametersMetadata *)0x0;
    local_308.Buffer =
         FRDGBuilder::CreateBuffer(this->GraphBuilder,&local_148,L"Nanite.DummyDebugBuffer",None);
  }
  else {
    if ((this->DebugFlags >> 10 & 1) == 0) goto LAB_144f80f89;
    local_308.Buffer = this->AssemblyMetaBuffer;
  }
  bVar17 = 0;
  local_308._padding_._2_1_ = 0;
  if ((((local_308.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar17 = 0x1c;
  }
  local_308._padding_._0_2_ = (ushort)bVar17;
  local_160 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_308,None);
LAB_144f8100f:
  pTVar7 = CVarLargePageRectThreshold.Ref;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_180 = pTVar7->ShadowedValue[1];
  local_17c = FStreamingManager::GetStreamingRequestsBufferVersion
                        ((FStreamingManager *)&GStreamingManager);
  pTVar5 = CVarNaniteDepthBucketsMinZ.Ref;
  local_178 = (this->StreamingRequests->Desc).NumElements;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar6 = CVarNaniteDepthBucketsMaxZ.Ref;
  local_174 = pTVar5->ShadowedValue[1];
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_170 = pTVar6->ShadowedValue[1];
  if ((this->ViewsBuffer == (FRDGBuffer *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ViewsBuffer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x10d7,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = CVarNanitePersistentThreadsCulling.Ref;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pTVar7->ShadowedValue[1] == 0) {
    cVar22 = '\0';
    local_2e8 = '\0';
    cVar1 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((this->GraphBuilder->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_d8 = 0;
        uStack_d4 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_dc);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_NodeAndClusterC;
        ::Desc._padding_ = (longlong)u_NodeAndClusterC;
        ::Desc._padding_._0_4_ = 0x10e6;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```Nanite::FRenderer::AddPass_NodeAndClusterCull'::__l52::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar18 = this->GraphBuilder;
      local_158._Myfirst._Val = &::Desc;
      local_2f8.State = (FRDGScopeState *)pFVar18;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar18->_padding_,(FRDGScope **)pFVar18);
      ((FState *)&pFVar18->_padding_)->Current = this_00;
      local_2f8.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)pFVar18,&local_158);
      if (*(bool *)((longlong)&pFVar18->_padding_ + 4) != false) {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar18->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar18->_padding_);
      }
      cVar22 = '\x01';
      local_2e8 = '\x01';
    }
    local_130.BytesPerElement = 4;
    local_130.NumElements = 0x108;
    local_130._12_4_ = uStack_3bc;
    local_130.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    local_130.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar14 = FRDGBuilder::CreateBuffer(this->GraphBuilder,&local_130,L"Nanite.CullArgs0",None);
    local_118.BytesPerElement = 4;
    local_118.NumElements = 0x108;
    local_118._12_4_ = uStack_3bc;
    local_118.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    local_118.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar15 = FRDGBuilder::CreateBuffer(this->GraphBuilder,&local_118,L"Nanite.CullArgs1",None);
    local_3a8.Buffer = this->QueueState;
    uVar11 = 0;
    if ((((local_3a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar11 = 0x1c;
    }
    local_3a8._padding_ =
         CONCAT71((int7)((ulonglong)local_3a8._padding_ >> 8),uVar11) & 0xffffffffff0000ff;
    pFVar16 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_3a8,None);
    pFVar13 = FRDGEventName::FRDGEventName(&local_b0,1,L"InitNodeCullArgs");
    AddPass_InitNodeCullArgs
              (this->GraphBuilder,this->SharedContext->ShaderMap,pFVar13,pFVar16,pFVar14,pFVar15,
               param_1);
    if (local_b0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    uVar8 = GStreamingManager._952_4_;
    uVar23 = 0;
    if (GStreamingManager._952_4_ != 0) {
      do {
        pFVar13 = FRDGEventName::FRDGEventName(&local_98,L"NodeCull_%d");
        pFVar19 = pFVar15;
        pFVar4 = pFVar14;
        if ((uVar23 & 1) != 0) {
          pFVar19 = pFVar14;
          pFVar4 = pFVar15;
        }
        AddPass_NodeAndClusterCull
                  (this,pFVar13,(FNodeAndClusterCullSharedParameters *)&local_278._s_0,pFVar4,
                   pFVar19,uVar23,param_1,0);
        if (local_98.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
        }
        uVar23 = uVar23 + 1;
        cVar22 = local_2e8;
      } while (uVar23 < (uint)uVar8);
    }
    local_100.BytesPerElement = 4;
    local_100.NumElements = 3;
    local_100._12_4_ = uStack_3bc;
    local_100.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    local_100.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar14 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_100,L"Nanite.ClusterCullArgs",None);
    pFVar13 = FRDGEventName::FRDGEventName(&local_80,1,L"InitClusterCullArgs");
    AddPass_InitClusterCullArgs
              (this->GraphBuilder,this->SharedContext->ShaderMap,pFVar13,pFVar16,pFVar14,param_1);
    if (local_80.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pFVar13 = FRDGEventName::FRDGEventName(&local_68,1,L"ClusterCull");
    AddPass_NodeAndClusterCull
              (this,pFVar13,(FNodeAndClusterCullSharedParameters *)&local_278._s_0,pFVar14,
               (FRDGBuffer *)0x0,0,param_1,1);
    if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (cVar22 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2f8);
    }
  }
  else {
    pFVar13 = FRDGEventName::FRDGEventName(&local_c8,1,L"NodeAndClusterCull");
    AddPass_NodeAndClusterCull
              (this,pFVar13,(FNodeAndClusterCullSharedParameters *)&local_278._s_0,(FRDGBuffer *)0x0
               ,(FRDGBuffer *)0x0,0,param_1,2);
    if (local_c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AddPass_PatchSplit @ 144f81690

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall
Nanite::FRenderer::AddPass_PatchSplit
          (FRenderer *this,FDispatchContext *param_1,FGlobalWorkQueueParameters *param_2,
          FGlobalWorkQueueParameters *param_3,FRDGBuffer *param_4,FRDGBuffer *param_5,uint param_6,
          ERDGPassFlags param_7)

{
  int *piVar1;
  uchar *puVar2;
  char cVar3;
  FRDGBuilder *pFVar4;
  FViewInfo *pFVar5;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar6;
  FVirtualShadowMapArray *pFVar7;
  FGlobalShaderMap *pFVar8;
  FRDGUserValidation *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FShader *pFVar15;
  FShaderMapBase *pFVar16;
  uchar *puVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  undefined1 uVar23;
  ERDGPassFlags EVar24;
  int iVar25;
  uint uVar26;
  FRDGBufferUAV *pFVar27;
  undefined8 *puVar28;
  FRDGEventName *pFVar29;
  FShaderParametersMetadata *pFVar30;
  FShaderType *pFVar31;
  FName FVar32;
  FRDGBuffer *pFVar33;
  FRDGBuffer *pFVar34;
  FRDGScope *this_00;
  undefined8 *puVar35;
  FGlobalShaderType *pFVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  FRDGBufferSRV *pFVar39;
  wchar_t *pwVar40;
  FRDGPass *pFVar41;
  uchar *puVar42;
  longlong lVar43;
  FClearVisiblePatchesUAVParameters *pFVar44;
  FScriptContainerElement *pFVar45;
  FRDGBuffer *pFVar46;
  uint uVar47;
  bool bVar48;
  undefined1 local_528;
  undefined1 local_527 [3];
  uint local_524;
  uint local_520;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_518;
  FRDGBuffer *local_508;
  undefined8 *local_500;
  undefined8 *local_4f8;
  undefined8 *local_4f0;
  undefined8 *local_4e8;
  FRDGBuffer *local_4e0;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined8 local_4d0;
  FRDGBufferUAVDesc local_4c8;
  FRDGUserValidation *local_4b8;
  EUniformBufferBindingFlags EStack_4b0;
  undefined7 uStack_4af;
  FRDGBufferUAVDesc local_4a8;
  FRDGBufferUAVDesc local_498;
  FRDGBufferUAVDesc local_488;
  FRDGBufferUAVDesc local_478;
  FRDGBufferUAVDesc local_468;
  FRDGBufferUAVDesc local_458;
  TIntVector3<int>_u_0 local_448;
  FRDGBufferSRVDesc local_438;
  FRDGBuffer *local_418;
  FShader *local_410;
  FShaderMapBase *local_408;
  TRDGEventScopeGuard<FRDGScope_RHI> local_400;
  char local_3f0;
  void *local_3e8;
  void *local_3e0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3d8;
  FRDGBufferSRVDesc local_3c8;
  FRDGBufferSRVDesc local_3a8;
  uchar *local_388;
  FDispatchContext *pFStack_380;
  FShader *local_378;
  FShaderMapBase *pFStack_370;
  uint local_368;
  undefined4 uStack_364;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_358;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_348;
  <lambda_1> local_338;
  FRDGParameterStruct local_320;
  FRDGParameterStruct local_308;
  TShaderPermutationDomain<FPatchSplitCS::FCullingPassDim,FPatchSplitCS::FMultiViewDim,FPatchSplitCS::FVirtualTextureTargetDim,FPatchSplitCS::FMaterialCacheDim,FPatchSplitCS::FSplineDeformDim,FPatchSplitCS::FSkinningDim,FPatchSplitCS::FWriteStatsDim>
  local_2f0 [2];
  TShaderRefBase<FInitPatchSplitArgs_CS,FShaderMapPointerTable> local_2d8;
  initializer_list<FRDGResource_*> local_2c8;
  FString local_2b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2a8;
  initializer_list<FRDGResource_*> local_298;
  undefined1 local_288 [8];
  FRDGBufferDesc local_280;
  FRDGBufferDesc local_268;
  FString local_250;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11>_const_*,std::tuple<>_> local_240;
  FString local_230;
  undefined1 local_218 [24];
  EUniformBufferBindingFlags EStack_200;
  undefined4 uStack_1ff;
  undefined2 uStack_1fb;
  undefined1 uStack_1f9;
  FRDGBufferUAV *local_1f8;
  FRDGBufferUAV *pFStack_1f0;
  FRDGBufferUAV *local_1e8;
  FRDGBufferUAV *pFStack_1e0;
  TIntVector4<int>_u_0 local_1d8 [2];
  undefined8 local_1b8;
  TVector2<float>_u_0 TStack_1b0;
  FRDGTexture *local_1a8;
  FRDGTexture *pFStack_1a0;
  FRHISamplerState *local_198;
  FRDGBufferSRV *pFStack_190;
  TRDGUniformBufferBinding<FVirtualShadowMapUniformParameters> local_188;
  FRDGTexture *local_178;
  FRDGBufferSRV *pFStack_170;
  FRDGTexture *local_168;
  FRDGBufferUAV *pFStack_160;
  FRDGBufferSRV *local_158;
  FRDGBufferSRV *pFStack_150;
  FRHIShaderResourceView *local_148;
  FRHIShaderResourceView *local_140;
  longlong local_138;
  EUniformBufferBindingFlags local_130;
  undefined4 local_12f;
  undefined2 local_12b;
  undefined1 local_129;
  FRDGBufferSRV *local_128;
  FRDGBufferSRV *local_120;
  FRDGBufferUAV *local_110;
  FRDGBufferUAV *local_108;
  FRDGBufferUAV *local_100;
  uint local_f8;
  uint uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  FRDGEventName local_a8;
  FRDGEventName local_90;
  FRDGEventName local_78;
  FRDGEventName local_60;
  
  local_520 = 0;
  bVar18 = UseNaniteTessellation();
  if (bVar18) {
    local_4a8.Buffer = param_5;
    local_4a8._padding_._2_1_ = 0;
    bVar22 = 0;
    if (((param_5->Desc).Usage & DrawIndirect) != None) {
      bVar22 = 0x1c;
    }
    local_4a8._padding_._0_2_ = (ushort)bVar22;
    pFVar27 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_4a8,None);
    pFVar4 = this->GraphBuilder;
    puVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x20,0x10);
    if (puVar28 == (undefined8 *)0x0) {
      puVar28 = (undefined8 *)0x0;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      puVar28[2] = 0;
      *puVar28 = &___7__TObject_VFClearVisiblePatchesUAVParameters_Nanite___FRDGAllocator__6B_;
    }
    local_500 = puVar28;
    if ((((undefined8 **)pFVar4->_padding_ <= &local_500) &&
        (&local_500 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4))
        ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar25 = (int)pFVar4->_padding_;
    piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
    }
    *(int *)&pFVar4->_padding_ = iVar25 + 1;
    pFVar44 = (FClearVisiblePatchesUAVParameters *)(puVar28 + 2);
    *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar25 * 8) = local_500;
    pFVar44->VisiblePatchesArgsUAV = pFVar27;
    pFVar4 = this->GraphBuilder;
    local_338.Parameters = pFVar44;
    local_338.DispatchContext = param_1;
    local_338.VisiblePatchesArgsUAV = pFVar27;
    pFVar29 = FRDGEventName::FRDGEventName(&local_a8,1,L"ClearVisiblePatchesArgs");
    FRDGBuilder::
    AddPass<Nanite::FClearVisiblePatchesUAVParameters,_Nanite::FRenderer::AddPass_PatchSplit_::__l6::<lambda_1>_>
              (pFVar4,pFVar29,pFVar44,param_7,&local_338);
    if (local_a8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    FPatchSplitCS::FParameters::FParameters((FParameters *)local_218);
    pFVar5 = this->SceneView;
    pFVar30 = FViewUniformShaderParameters::GetStructMetadata();
    local_138 = pFVar5->_padding_;
    local_218._16_8_ = param_1->RasterUniformBuffer;
    local_130 = Static;
    if (pFVar30->BindingFlags != StaticAndShader) {
      local_130 = pFVar30->BindingFlags;
    }
    local_12f = local_518.ShaderMap._1_4_;
    local_12b = local_518.ShaderMap._5_2_;
    local_129 = local_518.ShaderMap._7_1_;
    pFVar30 = FNaniteRasterUniformParameters::GetStructMetadata();
    EStack_200 = Static;
    if (pFVar30->BindingFlags != StaticAndShader) {
      EStack_200 = pFVar30->BindingFlags;
    }
    uStack_1ff = local_518.ShaderMap._1_4_;
    uStack_1fb = local_518.ShaderMap._5_2_;
    uStack_1f9 = local_518.ShaderMap._7_1_;
    local_158 = FStreamingManager::GetClusterPageDataSRV
                          ((FStreamingManager *)&GStreamingManager,this->GraphBuilder);
    pFStack_150 = FStreamingManager::GetHierarchySRV
                            ((FStreamingManager *)&GStreamingManager,this->GraphBuilder);
    pTVar6 = this->SceneUniformBuffer;
    pFVar30 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
    local_1d8[0]._0_8_ = *(undefined8 *)&(this->CullingParameters).PageConstants.field0_0x0;
    local_1d8[0]._8_8_ =
         *(undefined8 *)((longlong)&(this->CullingParameters).PageConstants.field0_0x0 + 8);
    local_3c8._padding_._0_4_ = 0xffffffff;
    local_1d8[1]._0_4_ = (this->CullingParameters).MaxCandidateClusters;
    local_1d8[1]._4_4_ = (this->CullingParameters).MaxVisibleClusters;
    local_1d8[1]._8_4_ = (this->CullingParameters).RenderFlags;
    local_1d8[1]._12_4_ = (this->CullingParameters).DebugFlags;
    local_1b8._0_4_ = (this->CullingParameters).NumViews;
    local_1b8._4_4_ = (this->CullingParameters)._padding_;
    TStack_1b0 = (this->CullingParameters).HZBSize.field0_0x0;
    local_218[8] = Static;
    if (pFVar30->BindingFlags != StaticAndShader) {
      local_218[8] = pFVar30->BindingFlags;
    }
    local_1a8 = (this->CullingParameters).HZBTextureArray;
    pFStack_1a0 = (this->CullingParameters).HZBTexture;
    local_3c8._padding_._0_1_ = 0;
    local_218._9_4_ = local_518.ShaderMap._1_4_;
    local_218._13_2_ = local_518.ShaderMap._5_2_;
    local_218[0xf] = local_518.ShaderMap._7_1_;
    local_3c8.Buffer = this->VisibleClustersSWHW;
    local_198 = (this->CullingParameters).HZBSampler;
    pFStack_190 = (this->CullingParameters).InViews;
    local_3c8._padding_._4_4_ = 0;
    local_3c8._padding_ = 0;
    if ((((local_3c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_3c8._padding_._0_1_ = 0x1c;
    }
    local_1f8 = param_2->DataBuffer;
    pFStack_1f0 = param_2->StateBuffer;
    local_1e8 = param_3->DataBuffer;
    pFStack_1e0 = param_3->StateBuffer;
    local_218._0_8_ = pTVar6;
    local_128 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_3c8);
    local_3a8.Buffer = this->AssemblyTransformsBuffer;
    local_3a8._padding_._4_4_ = 0;
    local_3a8._padding_._0_4_ = 0xffffffff;
    local_3a8._padding_ = 0;
    local_3a8._padding_._0_1_ = 0;
    if ((((local_3a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_3a8._padding_._0_1_ = 0x1c;
    }
    local_120 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_3a8);
    local_148 = (FRHIShaderResourceView *)GTessellationTable._40_8_;
    local_140 = (FRHIShaderResourceView *)GTessellationTable._64_8_;
    local_498._padding_._2_1_ = 0;
    local_498.Buffer = param_4;
    bVar22 = 0;
    if (((param_4->Desc).Usage & DrawIndirect) != None) {
      bVar22 = 0x1c;
    }
    local_498._padding_._0_2_ = (ushort)bVar22;
    local_108 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_498,None);
    local_488.Buffer = param_5;
    bVar22 = 0;
    local_488._padding_._2_1_ = 0;
    if (((param_5->Desc).Usage & DrawIndirect) != None) {
      bVar22 = 0x1c;
    }
    local_488._padding_._0_2_ = (ushort)bVar22;
    local_100 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_488,None);
    local_f8 = (param_4->Desc).NumElements * (param_4->Desc).BytesPerElement >> 4;
    if (GNaniteShowStats == 0) {
      local_110 = (FRDGBufferUAV *)0x0;
    }
    else {
      local_110 = this->StatsBufferSkipBarrierUAV;
    }
    pFVar7 = this->VirtualShadowMapArray;
    if (pFVar7 != (FVirtualShadowMapArray *)0x0) {
      local_188._0_8_ = *(undefined8 *)&(this->VirtualTargetParameters).VirtualShadowMap;
      local_188._8_8_ = *(undefined8 *)&(this->VirtualTargetParameters).VirtualShadowMap.field_0x8;
      local_178 = (this->VirtualTargetParameters).HZBPageTable;
      pFStack_170 = (this->VirtualTargetParameters).HZBPageRectBounds;
      local_168 = (this->VirtualTargetParameters).HZBPageFlags;
      pFStack_160 = (this->VirtualTargetParameters).OutDirtyPageFlags;
    }
    bVar18 = this->bMultiView;
    bVar19 = NaniteSplineMeshesSupported();
    bVar20 = NaniteSkinnedMeshesSupported();
    bVar48 = GNaniteShowStats != 0;
    pFVar8 = this->SharedContext->ShaderMap;
    if (param_6 == 0) {
      iVar25 = 2;
    }
    else if (param_6 == 1) {
      iVar25 = 1;
    }
    else {
      if ((param_6 != 2) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                              ,0x90,L"Unknown shader permutation dimension value %i."), bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar25 = 0;
    }
    iVar25 = (-(uint)(pFVar7 != (FVirtualShadowMapArray *)0x0) & 6) + iVar25 +
             ((uint)bVar19 + ((uint)bVar20 + (uint)bVar48 * 2) * 2) * 0x18 +
             (-(uint)(bVar18 != false) & 3);
    pFVar31 = (FShaderType *)FPatchSplitCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar8,&local_3d8,pFVar31,iVar25);
    if (local_3d8.ShaderContent == (FShader *)0x0) {
      FVar32 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_288);
      ::FName::ToString((FName *)FVar32,&local_250);
      FPatchSplitCS::GetStaticType();
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    FPatchSplitCS::GetStaticType();
    TShaderPermutationDomain<FPatchSplitCS::FCullingPassDim,FPatchSplitCS::FMultiViewDim,FPatchSplitCS::FVirtualTextureTargetDim,FPatchSplitCS::FMaterialCacheDim,FPatchSplitCS::FSplineDeformDim,FPatchSplitCS::FSkinningDim,FPatchSplitCS::FWriteStatsDim>
    ::
    TShaderPermutationDomain<FPatchSplitCS::FCullingPassDim,FPatchSplitCS::FMultiViewDim,FPatchSplitCS::FVirtualTextureTargetDim,FPatchSplitCS::FMaterialCacheDim,FPatchSplitCS::FSplineDeformDim,FPatchSplitCS::FSkinningDim,FPatchSplitCS::FWriteStatsDim>
              (local_2f0,iVar25);
    bVar18 = NaniteSplineMeshesSupported();
    if (local_2f0[0].Tail.Tail.Tail.Tail.DimensionValue == bVar18) {
      NaniteSkinnedMeshesSupported();
    }
    local_408 = local_3d8.ShaderMap;
    puVar28 = (undefined8 *)0x0;
    uStack_4d8 = 0x4189;
    local_4e0 = (FRDGBuffer *)0x3800000004;
    local_280._12_4_ = uStack_4d4;
    local_280.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    local_4d0 = 0;
    local_280.BytesPerElement = 4;
    local_280.NumElements = 0x38;
    local_410 = local_3d8.ShaderContent;
    local_280.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar33 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_280,L"Nanite.PatchSplitArgs0",None);
    uStack_4d8 = 0x4189;
    local_4e0 = (FRDGBuffer *)0x3800000004;
    local_268._12_4_ = uStack_4d4;
    local_268.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    local_4d0 = 0;
    local_268.BytesPerElement = 4;
    local_268.NumElements = 0x38;
    local_268.Metadata = (FShaderParametersMetadata *)0x0;
    local_508 = pFVar33;
    pFVar34 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_268,L"Nanite.PatchSplitArgs1",None);
    local_3f0 = '\0';
    cVar3 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
    local_418 = pFVar34;
    if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((this->GraphBuilder->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_b8 = 0;
        uStack_b4 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_bc);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_PatchSplit;
        ::Desc._padding_ = (longlong)u_PatchSplit;
        ::Desc._padding_._0_4_ = 0x1750;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```Nanite::FRenderer::AddPass_PatchSplit'::__l16::<lambda_2>::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar4 = this->GraphBuilder;
      local_240._Myfirst._Val = &::Desc;
      local_400.State = (FRDGScopeState *)pFVar4;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar4->_padding_,(FRDGScope **)pFVar4);
      ((FState *)&pFVar4->_padding_)->Current = this_00;
      local_400.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)pFVar4,&local_240);
      if (*(bool *)((longlong)&pFVar4->_padding_ + 4) != false) {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)pFVar4->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)pFVar4->_padding_);
      }
      local_3f0 = '\x01';
    }
    pFVar4 = this->GraphBuilder;
    puVar35 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x40,0x10);
    if (puVar35 == (undefined8 *)0x0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      puVar35 = puVar28;
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      puVar35[2] = 0;
      *puVar35 = &___7__TObject_VFParameters_FInitPatchSplitArgs_CS___FRDGAllocator__6B_;
      *(undefined1 *)(puVar35 + 3) = 1;
      puVar35[4] = 0;
      puVar35[5] = 0;
      puVar35[6] = 0;
      puVar35[7] = 0;
    }
    local_4f8 = puVar35;
    if ((((undefined8 **)pFVar4->_padding_ <= &local_4f8) &&
        (&local_4f8 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4))
        ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar25 = (int)pFVar4->_padding_;
    piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
    }
    *(int *)&pFVar4->_padding_ = iVar25 + 1;
    *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar25 * 8) = local_4f8;
    pFVar9 = (FRDGUserValidation *)param_1->RasterUniformBuffer;
    pFVar30 = FNaniteRasterUniformParameters::GetStructMetadata();
    EStack_4b0 = Static;
    if (pFVar30->BindingFlags != StaticAndShader) {
      EStack_4b0 = pFVar30->BindingFlags;
    }
    *(FRDGUserValidation **)&((FParameters *)(puVar35 + 2))->NaniteRaster = pFVar9;
    puVar35[3] = CONCAT71(uStack_4af,EStack_4b0);
    pFVar27 = param_2->StateBuffer;
    local_478._padding_._2_1_ = 0;
    puVar35[4] = param_2->DataBuffer;
    puVar35[5] = pFVar27;
    bVar22 = 0;
    if (((pFVar33->Desc).Usage & DrawIndirect) != None) {
      bVar22 = 0x1c;
    }
    local_478._padding_._0_2_ = (ushort)bVar22;
    local_4b8 = pFVar9;
    local_478.Buffer = pFVar33;
    pFVar27 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_478,None);
    puVar35[6] = pFVar27;
    bVar22 = 0;
    local_468._padding_._2_1_ = 0;
    if (((pFVar34->Desc).Usage & DrawIndirect) != None) {
      bVar22 = 0x1c;
    }
    local_468._padding_._0_2_ = (ushort)bVar22;
    local_468.Buffer = pFVar34;
    pFVar27 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_468,None);
    puVar35[7] = pFVar27;
    pFVar8 = this->SharedContext->ShaderMap;
    pFVar36 = FInitPatchSplitArgs_CS::GetStaticType();
    if (*(int *)&pFVar36->field_0x50 != 1) {
      local_528 = 0;
      `FGlobalShaderMap::GetShader<FInitPatchSplitArgs_CS>'::__l2::<lambda_1>::operator()
                (&local_528);
    }
    pFVar31 = (FShaderType *)FInitPatchSplitArgs_CS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar8,&local_358,pFVar31,0);
    if (local_358.ShaderContent == (FShader *)0x0) {
      FVar32 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_3e8);
      ::FName::ToString((FName *)FVar32,&local_230);
      FInitPatchSplitArgs_CS::GetStaticType();
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    FInitPatchSplitArgs_CS::GetStaticType();
    local_2d8.ShaderContent = (FInitPatchSplitArgs_CS *)local_358.ShaderContent;
    local_2d8.ShaderMap = local_358.ShaderMap;
    pFVar29 = FRDGEventName::FRDGEventName(&local_90,1,L"InitPatchSplitArgs");
    pFVar4 = this->GraphBuilder;
    pFVar30 = FInitPatchSplitArgs_CS::FParameters::FTypeInfo::GetStructMetadata();
    local_448._s_0.X = 2;
    local_448._s_0.Y = 1;
    local_448._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FInitPatchSplitArgs_CS>
              (pFVar4,pFVar29,Compute,&local_2d8,pFVar30,(FParameters *)(puVar35 + 2),
               (TIntVector3<int> *)&local_448._s_0);
    if (local_90.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.FormattedEventName.Data.AllocatorInstance.Data);
    }
    local_524 = 0;
    local_520 = 0;
    do {
      puVar35 = (undefined8 *)0x0;
      pFVar4 = this->GraphBuilder;
      puVar37 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x160,0x10);
      if (puVar37 == (undefined8 *)0x0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar18) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      else {
        *puVar37 = &___7__TObject_VFParameters_FPatchSplitCS___FRDGAllocator__6B_;
        FPatchSplitCS::FParameters::FParameters((FParameters *)(puVar37 + 2));
        puVar35 = puVar37;
      }
      local_4e8 = puVar35;
      if ((((undefined8 **)pFVar4->_padding_ <= &local_4e8) &&
          (&local_4e8 <
           (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar25 = (int)pFVar4->_padding_;
      piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
      }
      puVar2 = (uchar *)(puVar35 + 2);
      *(int *)&pFVar4->_padding_ = iVar25 + 1;
      *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar25 * 8) = local_4e8;
      lVar43 = 2;
      puVar37 = (undefined8 *)local_218;
      puVar17 = puVar2;
      do {
        puVar42 = puVar17;
        puVar38 = puVar37;
        uVar11 = puVar38[1];
        uVar12 = puVar38[2];
        uVar13 = puVar38[3];
        *(undefined8 *)puVar42 = *puVar38;
        *(undefined8 *)(puVar42 + 8) = uVar11;
        uVar11 = puVar38[4];
        uVar14 = puVar38[5];
        *(undefined8 *)(puVar42 + 0x10) = uVar12;
        *(undefined8 *)(puVar42 + 0x18) = uVar13;
        uVar12 = puVar38[6];
        uVar13 = puVar38[7];
        *(undefined8 *)(puVar42 + 0x20) = uVar11;
        *(undefined8 *)(puVar42 + 0x28) = uVar14;
        uVar11 = puVar38[8];
        uVar14 = puVar38[9];
        *(undefined8 *)(puVar42 + 0x30) = uVar12;
        *(undefined8 *)(puVar42 + 0x38) = uVar13;
        uVar12 = puVar38[10];
        uVar13 = puVar38[0xb];
        *(undefined8 *)(puVar42 + 0x40) = uVar11;
        *(undefined8 *)(puVar42 + 0x48) = uVar14;
        uVar11 = puVar38[0xc];
        uVar14 = puVar38[0xd];
        *(undefined8 *)(puVar42 + 0x50) = uVar12;
        *(undefined8 *)(puVar42 + 0x58) = uVar13;
        uVar12 = puVar38[0xe];
        uVar13 = puVar38[0xf];
        *(undefined8 *)(puVar42 + 0x60) = uVar11;
        *(undefined8 *)(puVar42 + 0x68) = uVar14;
        *(undefined8 *)(puVar42 + 0x70) = uVar12;
        *(undefined8 *)(puVar42 + 0x78) = uVar13;
        lVar43 = lVar43 + -1;
        puVar37 = puVar38 + 0x10;
        puVar17 = puVar42 + 0x80;
      } while (lVar43 != 0);
      uVar11 = puVar38[0x11];
      local_438._padding_._0_4_ = 0xffffffff;
      uVar12 = puVar38[0x12];
      uVar13 = puVar38[0x13];
      pFVar34 = pFVar33;
      if (((ulonglong)puVar28 & 1) != 0) {
        pFVar34 = local_418;
      }
      *(undefined8 *)(puVar42 + 0x80) = puVar38[0x10];
      *(undefined8 *)(puVar42 + 0x88) = uVar11;
      uVar11 = puVar38[0x14];
      uVar14 = puVar38[0x15];
      *(undefined8 *)(puVar42 + 0x90) = uVar12;
      *(undefined8 *)(puVar42 + 0x98) = uVar13;
      uVar12 = puVar38[0x16];
      uVar13 = puVar38[0x17];
      *(undefined8 *)(puVar42 + 0xa0) = uVar11;
      *(undefined8 *)(puVar42 + 0xa8) = uVar14;
      uVar11 = puVar38[0x18];
      uVar14 = puVar38[0x19];
      *(undefined8 *)(puVar42 + 0xb0) = uVar12;
      *(undefined8 *)(puVar42 + 0xb8) = uVar13;
      pFVar46 = local_418;
      if (((ulonglong)puVar28 & 1) != 0) {
        pFVar46 = pFVar33;
      }
      *(undefined8 *)(puVar42 + 0xc0) = uVar11;
      *(undefined8 *)(puVar42 + 200) = uVar14;
      *(uint *)(puVar35 + 0x29) = local_524;
      pFVar4 = this->GraphBuilder;
      local_438._padding_._4_4_ = 0;
      local_438._padding_ = 0;
      uVar23 = 0;
      if (((pFVar34->Desc).Usage & DrawIndirect) != None) {
        uVar23 = 0x1c;
      }
      local_438._padding_._0_4_ =
           CONCAT31((int3)((uint)(undefined4)local_438._padding_ >> 8),uVar23);
      local_4b8 = &pFVar4->UserValidation;
      local_438.Buffer = pFVar34;
      FRDGUserValidation::ValidateCreateSRV(local_4b8,&local_438);
      pFVar33 = local_438.Buffer;
      pFVar39 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x50,8);
      lVar43 = pFVar33->_padding_;
      piVar1 = &(pFVar4->Views).Array.ArrayMax;
      *(byte *)&pFVar39->_padding_ = (byte)pFVar39->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar39->_padding_ + 4) = 0xffffffffffffffff;
      pFVar39->_padding_ = lVar43;
      pFVar39->_padding_ = 0;
      *(undefined1 *)&pFVar39->_padding_ = 3;
      pFVar39->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar39->Desc)._padding_ =
           CONCAT44(local_438._padding_._4_4_,(undefined4)local_438._padding_);
      (pFVar39->Desc)._padding_ =
           CONCAT44(local_438._padding_._4_4_,(undefined4)local_438._padding_);
      (pFVar39->Desc)._padding_ = local_438._padding_;
      (pFVar39->Desc).Buffer = local_438.Buffer;
      iVar25 = (pFVar4->Views).Array.ArrayNum;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)&pFVar4->Views,piVar1);
      }
      (pFVar4->Views).Array.ArrayNum = iVar25 + 1;
      (pFVar4->Views).Array.AllocatorInstance.Data[iVar25] = (FRDGView *)pFVar39;
      *(int *)((longlong)&pFVar39->_padding_ + 4) = (pFVar4->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV(local_4b8,pFVar39);
      puVar35[0x27] = pFVar39;
      pFVar4 = this->GraphBuilder;
      local_4c8._padding_._2_1_ = 0;
      local_4c8._padding_._1_1_ = 0;
      local_4c8._padding_._0_1_ = 0;
      if (((pFVar46->Desc).Usage & DrawIndirect) != None) {
        local_4c8._padding_._0_1_ = 0x1c;
      }
      local_4c8.Buffer = pFVar46;
      FRDGUserValidation::ValidateCreateUAV(&pFVar4->UserValidation,&local_4c8);
      pFVar33 = local_4c8.Buffer;
      pFVar27 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x48,8);
      lVar43 = pFVar33->_padding_;
      piVar1 = &(pFVar4->Views).Array.ArrayMax;
      *(byte *)&pFVar27->_padding_ = (byte)pFVar27->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar27->_padding_ + 4) = 0xffffffffffffffff;
      pFVar27->_padding_ = lVar43;
      pFVar27->_padding_ = 0;
      *(undefined1 *)&pFVar27->_padding_ = 2;
      *(undefined1 *)&pFVar27->_padding_ = 0;
      pFVar27->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
      (pFVar27->Desc)._padding_ =
           CONCAT53(local_4c8._padding_._3_5_,
                    CONCAT12(local_4c8._padding_._2_1_,
                             CONCAT11(local_4c8._padding_._1_1_,(undefined1)local_4c8._padding_)));
      (pFVar27->Desc).Buffer = local_4c8.Buffer;
      iVar25 = (pFVar4->Views).Array.ArrayNum;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)&pFVar4->Views,piVar1);
      }
      (pFVar4->Views).Array.ArrayNum = iVar25 + 1;
      (pFVar4->Views).Array.AllocatorInstance.Data[iVar25] = (FRDGView *)pFVar27;
      *(int *)((longlong)&pFVar27->_padding_ + 4) = (pFVar4->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(&pFVar4->UserValidation,pFVar27);
      uStack_4d8 = 4;
      puVar35[0x28] = pFVar27;
      puVar35[0x2a] = pFVar34;
      puVar35[0x2b] = CONCAT44(uStack_4d4,4);
      local_4e0 = pFVar34;
      pFVar30 = FPatchSplitCS::FParameters::FTypeInfo::GetStructMetadata();
      pFVar16 = local_408;
      pFVar15 = local_410;
      local_348.ShaderContent = local_410;
      local_348.ShaderMap = local_408;
      ValidateShaderParameters(&local_348,pFVar30,puVar2);
      local_2c8._First = (FRDGResource **)0x0;
      local_2c8._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl(&pFVar15->Bindings,pFVar30,puVar2,&local_2c8);
      uVar26 = local_524;
      pFVar4 = this->GraphBuilder;
      local_520 = local_520 | 0x10;
      pFStack_370 = pFVar16;
      local_378 = pFVar15;
      local_368 = local_524;
      local_388 = puVar2;
      pFStack_380 = param_1;
      pFVar29 = FRDGEventName::FRDGEventName(&local_78,L"PatchSplit_%d");
      pFVar30 = FPatchSplitCS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&pFVar4->UserValidation,puVar2,pFVar30,pFVar29,param_7);
      FRDGBuilder::FlushAccessModeQueue(pFVar4);
      pwVar40 = FRDGEventName::GetTCHAR(pFVar29);
      EVar24 = FRDGBuilder::OverridePassFlags(pFVar4,pwVar40,param_7);
      local_524 = CONCAT22(local_524._2_2_,EVar24);
      pFVar41 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x1b0,8);
      local_320.Contents = puVar2;
      if (((pFVar30->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_320.Layout.Reference = (pFVar30->Layout).Reference;
      if (local_320.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_320.Layout.Reference);
      }
      local_320.Metadata = pFVar30;
      FRDGPass::FRDGPass(pFVar41,pFVar29,&local_320,(ERDGPassFlags)local_524,Async);
      pFVar41->_padding_ =
           (longlong)
           &TRDGLambdaPass<FPatchSplitCS::FParameters,`Nanite::FRenderer::AddPass_PatchSplit'::`19'::<lambda_3>_>
            ::_vftable_;
      pFVar41[1]._padding_ = (longlong)local_388;
      pFVar41[1].FullPathIfDebug.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFStack_380;
      *(uchar **)&pFVar41[1].Name.FormattedEventName.Data.ArrayNum = puVar2;
      *(FShader **)&pFVar41[1].FullPathIfDebug.Data.ArrayNum = local_378;
      pFVar41[1].Name.EventFormat = (wchar_t *)pFStack_370;
      pFVar41[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)CONCAT44(uStack_364,local_368);
      FRDGBuilder::ClobberPassOutputs(pFVar4,pFVar41);
      iVar25 = (pFVar4->Passes).Array.ArrayNum;
      piVar1 = &(pFVar4->Passes).Array.ArrayMax;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&pFVar4->Passes,piVar1);
      }
      (pFVar4->Passes).Array.ArrayNum = iVar25 + 1;
      (pFVar4->Passes).Array.AllocatorInstance.Data[iVar25] = pFVar41;
      (pFVar41->Handle).Index = (pFVar4->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(pFVar4,pFVar41);
      uVar47 = local_520;
      if (((local_520 & 0x20) != 0) &&
         (uVar47 = local_520 & 0xffffffdf, local_520 = uVar47, local_3e8 != (void *)0x0)) {
        FMemory::Free(local_3e8);
      }
      if (local_78.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_78.FormattedEventName.Data.AllocatorInstance.Data);
      }
      local_524 = uVar26 + 1;
      puVar28 = (undefined8 *)(ulonglong)local_524;
      pFVar33 = local_508;
    } while (local_524 < 6);
    if (local_3f0 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_400);
    }
    pFVar4 = this->GraphBuilder;
    puVar28 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x20,0x10);
    if (puVar28 == (undefined8 *)0x0) {
      puVar28 = (undefined8 *)0x0;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      puVar28[2] = 0;
      *puVar28 = &___7__TObject_VFParameters_FInitVisiblePatchesArgsCS___FRDGAllocator__6B_;
    }
    local_4f0 = puVar28;
    if ((((undefined8 **)pFVar4->_padding_ <= &local_4f0) &&
        (&local_4f0 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4))
        ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar25 = (int)pFVar4->_padding_;
    piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
    }
    pFVar45 = (FScriptContainerElement *)(puVar28 + 2);
    *(int *)&pFVar4->_padding_ = iVar25 + 1;
    *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar25 * 8) = local_4f0;
    local_458._padding_._2_1_ = 0;
    local_458.Buffer = param_5;
    bVar22 = 0;
    if (((param_5->Desc).Usage & DrawIndirect) != None) {
      bVar22 = 0x1c;
    }
    local_458._padding_._0_2_ = (ushort)bVar22;
    pFVar27 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_458,None);
    *(FRDGBufferUAV **)pFVar45 = pFVar27;
    uVar26 = FGlobalResources::GetMaxVisiblePatches();
    *(uint *)(puVar28 + 3) = uVar26;
    pFVar8 = this->SharedContext->ShaderMap;
    pFVar36 = FInitVisiblePatchesArgsCS::GetStaticType();
    if (*(int *)&pFVar36->field_0x50 != 1) {
      local_527[0] = 0;
      `FGlobalShaderMap::GetShader<FInitVisiblePatchesArgsCS>'::__l2::<lambda_1>::operator()
                (local_527);
    }
    pFVar31 = (FShaderType *)FInitVisiblePatchesArgsCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar8,&local_518,pFVar31,0);
    if (local_518.ShaderContent == (FShader *)0x0) {
      FVar32 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_3e0);
      ::FName::ToString((FName *)FVar32,&local_2b8);
      FInitVisiblePatchesArgsCS::GetStaticType();
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if (bVar18) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    FInitVisiblePatchesArgsCS::GetStaticType();
    local_508 = (FRDGBuffer *)
                CONCAT17(local_518.ShaderMap._7_1_,
                         CONCAT25(local_518.ShaderMap._5_2_,
                                  CONCAT41(local_518.ShaderMap._1_4_,local_518.ShaderMap._0_1_)));
    pFVar30 = FInitVisiblePatchesArgsCS::FParameters::FTypeInfo::GetStructMetadata();
    local_2a8.ShaderContent = local_518.ShaderContent;
    ValidateShaderParameters(&local_2a8,pFVar30,pFVar45);
    local_298._First = (FRDGResource **)0x0;
    local_298._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_518.ShaderContent)->Bindings,pFVar30,pFVar45,&local_298);
    pFVar4 = this->GraphBuilder;
    pFVar29 = FRDGEventName::FRDGEventName(&local_60,1,L"InitVisiblePatchesArgs");
    pFVar30 = FInitVisiblePatchesArgsCS::FParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass(&pFVar4->UserValidation,pFVar45,pFVar30,pFVar29,param_7);
    FRDGBuilder::FlushAccessModeQueue(pFVar4);
    pwVar40 = FRDGEventName::GetTCHAR(pFVar29);
    EVar24 = FRDGBuilder::OverridePassFlags(pFVar4,pwVar40,param_7);
    local_524 = CONCAT22(local_524._2_2_,EVar24);
    pFVar41 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x1a8,8);
    local_308.Contents = (uchar *)pFVar45;
    if (((pFVar30->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_308.Layout.Reference = (pFVar30->Layout).Reference;
    if (local_308.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_308.Layout.Reference);
    }
    local_308.Metadata = pFVar30;
    FRDGPass::FRDGPass(pFVar41,pFVar29,&local_308,(ERDGPassFlags)local_524,Async);
    pFVar41->_padding_ =
         (longlong)
         &TRDGLambdaPass<FInitVisiblePatchesArgsCS::FParameters,`Nanite::FRenderer::AddPass_PatchSplit'::`20'::<lambda_4>_>
          ::_vftable_;
    pFVar41[1]._padding_ = (longlong)pFVar45;
    pFVar41[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    *(FShader **)&pFVar41[1].FullPathIfDebug.Data.ArrayNum = local_518.ShaderContent;
    pFVar41[1].Name.EventFormat = (wchar_t *)local_508;
    pFVar41[1].Name.FormattedEventName.Data.AllocatorInstance.Data = pFVar45;
    FRDGBuilder::ClobberPassOutputs(pFVar4,pFVar41);
    iVar25 = (pFVar4->Passes).Array.ArrayNum;
    piVar1 = &(pFVar4->Passes).Array.ArrayMax;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&pFVar4->Passes,piVar1);
    }
    (pFVar4->Passes).Array.ArrayNum = iVar25 + 1;
    (pFVar4->Passes).Array.AllocatorInstance.Data[iVar25] = pFVar41;
    (pFVar41->Handle).Index = (pFVar4->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(pFVar4,pFVar41);
    if (local_60.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (((uVar47 & 0x40) != 0) && (local_3e0 != (void *)0x0)) {
      FMemory::Free(local_3e0);
    }
  }
  return;
}

// AddPass_PrimitiveFilter @ 144f82c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Nanite::FRenderer::AddPass_PrimitiveFilter(FRenderer *this)

{
  FViewInfo **ppFVar1;
  int *piVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  FScene *pFVar6;
  FSceneViewState *pFVar7;
  FViewInfo *pFVar8;
  FRDGBuilder *pFVar9;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar10;
  FGlobalShaderMap *this_00;
  FRDGBuffer *pFVar11;
  code *pcVar12;
  uint uVar13;
  TConsoleVariableData<int> *pTVar14;
  bool bVar15;
  EUniformBufferBindingFlags EVar16;
  int iVar17;
  longlong lVar18;
  FRDGBufferUAV *pFVar19;
  FRDGBuffer *pFVar20;
  undefined8 *puVar21;
  FShaderParametersMetadata *pFVar22;
  FRDGBufferSRV *pFVar23;
  FShaderType *pFVar24;
  FName this_01;
  TIntVector3<int> *pTVar25;
  FRDGEventName *pFVar26;
  EFilterFlags EVar27;
  EFilterFlags EVar28;
  byte bVar29;
  ulonglong uVar30;
  int iVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  uint uVar34;
  ForElementType<unsigned_int> FVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ForElementType<unsigned_int> FVar40;
  uint uVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  longlong *plVar44;
  FIdentityFunctor local_res8;
  FLLMScope local_res10 [2];
  int local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_2c8;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_2b8;
  uint local_2a8;
  uint local_2a4;
  FScene *local_2a0;
  undefined8 *local_298;
  uint local_290;
  ForElementType<unsigned_int> local_288;
  ForElementType<unsigned_int> local_278;
  uint uStack_270;
  uint uStack_26c;
  longlong *local_268;
  undefined4 uStack_260;
  int iStack_25c;
  uint local_258;
  undefined4 uStack_254;
  FRDGBufferUAVDesc local_248;
  FRDGBufferUAVDesc local_238;
  undefined4 local_228;
  int local_224;
  int local_220;
  int local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  FName local_20c;
  FMemScope local_200;
  TIntVector3<int>_u_0 local_1f8;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  undefined4 local_1dc;
  ForElementType<unsigned_int> local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  longlong *local_188;
  uint uStack_180;
  uint uStack_17c;
  longlong *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  uint local_168;
  undefined4 uStack_164;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  FRDGBufferSRVDesc local_148;
  FRDGBufferSRVDesc local_128;
  FString local_108;
  TShaderRefBase<FPrimitiveFilter_CS,FShaderMapPointerTable> local_f8;
  ForElementType<unsigned_int> local_e8;
  undefined8 uStack_e0;
  FShaderParametersMetadata *local_d8;
  undefined1 local_d0 [8];
  FRDGEventName local_c8;
  TIntVector3<int> local_b0 [3];
  undefined4 local_84;
  undefined4 local_64;
  ulonglong uVar35;
  
  uVar35 = 0;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_20c = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_200,&local_20c,true);
  pTVar14 = CVarNaniteFilterPrimitives.Ref;
  pFVar6 = this->Scene;
  lVar18 = 0x4c28;
  if ((pFVar6->PersistentPrimitiveIdAllocator).bGrowOnly == false) {
    lVar18 = 0x4c24;
  }
  local_2a8 = *(uint *)((longlong)
                        ((pFVar6->UniformBuffers).MobileDirectionalLightUniformBuffers + -0xd) +
                       lVar18);
  if (local_2a8 != 0) {
    ppFVar1 = &this->SceneView;
    uVar34 = 0;
    uVar39 = local_res20._4_4_;
    if ((*(int *)&(pFVar6->SceneLODHierarchy).SceneNodes.field_0x8 -
         *(int *)&(pFVar6->SceneLODHierarchy).SceneNodes.field_0x34 < 1) ||
       (pFVar7 = (*ppFVar1)->ViewState, pFVar7 == (FSceneViewState *)0x0)) {
      local_res20 = (ulonglong)local_res20._4_4_ << 0x20;
    }
    else {
      local_res20 = (ulonglong)local_res20._4_4_ << 0x20;
      FVar40 = (pFVar7->HLODVisibilityState).ForcedHiddenPrimitiveMap.AllocatorInstance.
               SecondaryData;
      uVar37 = (pFVar7->HLODVisibilityState).ForcedHiddenPrimitiveMap.NumBits;
      if (FVar40 == (ForElementType<unsigned_int>)0x0) {
        FVar40 = (ForElementType<unsigned_int>)
                 &(pFVar7->HLODVisibilityState).ForcedHiddenPrimitiveMap;
      }
      iVar17 = uVar37 + 0x1f;
      iVar17 = (int)(iVar17 + (iVar17 >> 0x1f & 0x1fU)) >> 5;
      uVar37 = uVar37 & 0x8000001f;
      if ((int)uVar37 < 0) {
        uVar37 = (uVar37 - 1 | 0xffffffe0) + 1;
      }
      uVar38 = 0xffffffff >> ((byte)(0x20 - uVar37) & 0x1f);
      if (0x1f < (int)(0x20 - uVar37)) {
        uVar38 = 0xffffffff;
      }
      uVar37 = 0xffffffff;
      if (iVar17 == 1) {
        uVar37 = uVar38;
      }
      uVar30 = uVar35;
      if (0 < iVar17) {
        do {
          uVar34 = *(uint *)((longlong)FVar40 + uVar30 * 4);
          uVar13 = uVar34 & uVar37;
          if (uVar37 == 0xffffffff) {
            uVar13 = uVar34;
          }
          uVar41 = (int)uVar30 + 1;
          uVar30 = (ulonglong)uVar13 - ((ulonglong)(uVar13 >> 1) & 0x5555555555555555);
          uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333);
          uVar34 = (int)uVar35 +
                   (uint)(byte)(((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38);
          uVar35 = (ulonglong)uVar34;
          uVar37 = 0xffffffff;
          if (uVar41 == iVar17 - 1U) {
            uVar37 = uVar38;
          }
          uVar30 = (ulonglong)uVar41;
        } while ((int)uVar41 < iVar17);
        local_res20 = CONCAT44(uVar39,uVar34);
      }
    }
    puVar33 = (undefined8 *)0x0;
    pFVar8 = *ppFVar1;
    iVar17 = ((int)pFVar8->_padding_ - *(int *)((longlong)&pFVar8->_padding_ + 4)) + uVar34;
    _local_res18 = CONCAT44((int)((ulonglong)ppFVar1 >> 0x20),iVar17);
    uVar34 = 0;
    uVar39 = uVar34;
    if (*(int *)((longlong)&pFVar8->_padding_ + 4) != -1) {
      uVar39 = (int)pFVar8->_padding_ - *(int *)((longlong)&pFVar8->_padding_ + 4);
    }
    EVar28 = (this->Configuration).HiddenFilterFlags;
    uVar37 = *(uint *)(pFVar8->_padding_ + 0x50);
    uVar38 = *(uint *)(pFVar8->_padding_ + 0x58);
    EVar27 = EVar28 | StaticMesh;
    if ((uVar38 & 8) != 0) {
      EVar27 = EVar28;
    }
    EVar28 = EVar27 | InstancedStaticMesh;
    if ((uVar37 >> 0x11 & 1) != 0) {
      EVar28 = EVar27;
    }
    EVar27 = EVar28 | Foliage;
    if ((uVar37 >> 0x12 & 1) != 0) {
      EVar27 = EVar28;
    }
    EVar28 = EVar27 | Grass;
    if ((uVar37 >> 0x16 & 1) != 0) {
      EVar28 = EVar27;
    }
    EVar27 = EVar28 | Landscape;
    if ((uVar38 & 0x10) != 0) {
      EVar27 = EVar28;
    }
    local_290 = (uint)EVar27;
    local_2a4 = uVar39;
    bVar15 = IsInParallelRenderingThread();
    if ((!bVar15) &&
       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((pTVar14->ShadowedValue[1] != 0) && ((uVar39 + iVar17 != 0 || (EVar27 != None)))) {
      uStack_270 = 0x10109;
      local_268 = (longlong *)0x0;
      uVar37 = 1;
      if (local_2a8 + 0x1f >> 5 != 0) {
        uVar37 = local_2a8 + 0x1f >> 5;
      }
      local_d8 = (FShaderParametersMetadata *)0x0;
      uVar35 = (ulonglong)(uVar37 - 1) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_278._4_4_ = 1 << ((byte)lVar18 & 0x1f);
      local_278._0_4_ = 4;
      uStack_e0._4_4_ = uStack_26c;
      uStack_e0._0_4_ = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_1e8 = (undefined4)lVar18;
      local_e8 = local_278;
      local_248.Buffer =
           FRDGBuilder::CreateBuffer
                     (this->GraphBuilder,(FRDGBufferDesc *)&local_e8,L"Nanite.PrimitiveFilter",None)
      ;
      this->PrimitiveFilterBuffer = local_248.Buffer;
      local_248._padding_._2_1_ = 0;
      bVar29 = 0;
      if ((((local_248.Buffer)->Desc).Usage & DrawIndirect) != None) {
        bVar29 = 0x1c;
      }
      local_248._padding_._0_2_ = (ushort)bVar29;
      pFVar19 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_248,None);
      AddClearUAVPass(this->GraphBuilder,pFVar19,0,Compute);
      local_res8 = SUB81(this,0);
      if (uVar39 != 0) {
        local_2b8.AllocatorInstance.Data = (uint *)0x0;
        local_2a0 = (FScene *)((ulonglong)(uVar39 - 1) * 2 + 1);
        local_2b8.ArrayMax = 0;
        lVar18 = 0x3f;
        if (local_2a0 != (FScene *)0x0) {
          for (; (ulonglong)local_2a0 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar39 = 1 << ((byte)lVar18 & 0x1f);
        local_2b8.ArrayNum = 0;
        local_1e4 = (undefined4)lVar18;
        if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
        }
        puVar21 = puVar33;
        if (0 < (int)uVar39) {
          UE::Core::Private::
          ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                    (4,4,uVar39,&local_2b8.AllocatorInstance,0,&local_2b8.ArrayMax);
          puVar21 = (undefined8 *)(ulonglong)(uint)local_2b8.ArrayNum;
        }
        FVar36.Data = local_2b8.AllocatorInstance.Data;
        pFVar8 = this->SceneView;
        local_288 = (ForElementType<unsigned_int>)&pFVar8->_padding_;
        if ((*(int *)((longlong)&pFVar8->_padding_ + 4) == -1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_268 = &pFVar8->_padding_;
        uStack_26c = 1;
        uVar39 = (uint)pFVar8->_padding_;
        puVar32 = puVar33;
        uStack_270 = uVar34;
        local_258 = uVar34;
        if (uVar39 != 0) {
          puVar32 = (undefined8 *)(ulonglong)uVar39;
          plVar44 = (longlong *)pFVar8->_padding_;
          if ((longlong *)pFVar8->_padding_ == (longlong *)0x0) {
            plVar44 = local_268;
          }
          uVar37 = (uint)*plVar44;
          puVar42 = puVar33;
          puVar43 = puVar33;
          while( true ) {
            uStack_270 = (uint)puVar42;
            local_258 = (uint)puVar43;
            if (uVar37 != 0) break;
            lVar18 = (longlong)(int)uStack_270;
            local_258 = local_258 + 0x20;
            puVar43 = (undefined8 *)(ulonglong)local_258;
            uStack_270 = uStack_270 + 1;
            puVar42 = (undefined8 *)(ulonglong)uStack_270;
            if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_270)
            goto LAB_144f83170;
            uVar37 = *(uint *)((longlong)plVar44 + lVar18 * 4 + 4);
          }
          uStack_26c = -uVar37 & uVar37;
          uVar35 = (ulonglong)uStack_26c * 2 + 1;
          lVar18 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_1e0 = (int)lVar18;
          uVar37 = (local_258 - 1) + local_1e0;
          if ((int)uVar39 < (int)uVar37) {
            uVar37 = uVar39;
          }
          puVar32 = (undefined8 *)(ulonglong)uVar37;
        }
LAB_144f83170:
        local_278 = local_288;
        uStack_260 = 0xffffffff;
        iStack_25c = (int)puVar32;
        uStack_254 = local_84;
        TStack_1d0._padding_ = CONCAT44(uStack_26c,uStack_270);
        TStack_1d0.CurrentBitIndex = iStack_25c;
        TStack_1d0.UnvisitedBitMask = 0xffffffff;
        local_1d8 = local_288;
        TStack_1d0._28_4_ = local_84;
        TStack_1d0.BaseBitIndex = local_258;
        TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_268;
        if (iStack_25c < (int)uVar39) {
          do {
            puVar3 = (uint *)(*(longlong *)local_1d8 + (longlong)(int)puVar32 * 0xc);
            iVar17 = (int)puVar21;
            if (((FVar36.Data <= puVar3) && (puVar3 < FVar36.Data + local_2b8.ArrayMax)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (iVar17 == local_2b8.ArrayMax) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                 (0x404,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
              FVar36.Data = local_2b8.AllocatorInstance.Data;
            }
            local_2b8.ArrayNum = iVar17 + 1;
            puVar21 = (undefined8 *)(ulonglong)(uint)local_2b8.ArrayNum;
            FVar36.Data[iVar17] = *puVar3;
            TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
            puVar32 = (undefined8 *)(ulonglong)(uint)TStack_1d0.CurrentBitIndex;
          } while (TStack_1d0.CurrentBitIndex < (int)*(longlong *)&(TStack_1d0.Array)->NumBits);
        }
        lVar18 = 0x3f;
        if (local_2a0 != (FScene *)0x0) {
          for (; (ulonglong)local_2a0 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_1dc = (undefined4)lVar18;
        TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
        SetNumZeroed(&local_2b8,1 << ((byte)lVar18 & 0x1f),Default);
        iVar17 = local_2b8.ArrayNum;
        FVar36.Data = local_2b8.AllocatorInstance.Data;
        lVar18 = (longlong)local_2b8.ArrayNum;
        AlgoImpl::IntroSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>
                  (local_2b8.AllocatorInstance.Data,local_2b8.ArrayNum,local_res8,
                   (TLess<void>)local_res8);
        pFVar20 = CreateUploadBuffer(this->GraphBuilder,L"Nanite.ShowOnlyPrimitivesBuffer",4,iVar17,
                                     FVar36.Data,lVar18 << 2,None);
        this->ShowOnlyPrimitivesBuffer = pFVar20;
        if (FVar36.Data != (uint *)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar36.Data);
        }
        iVar17 = local_res18;
      }
      iVar31 = 0;
      if (iVar17 != 0) {
        local_2c8.AllocatorInstance.Data = (uint *)0x0;
        local_278 = (ForElementType<unsigned_int>)((ulonglong)(iVar17 - 1) * 2 + 1);
        local_2c8.ArrayNum = 0;
        local_2c8.ArrayMax = 0;
        lVar18 = 0x3f;
        if (local_278 != (ForElementType<unsigned_int>)0x0) {
          for (; (ulonglong)local_278 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar39 = 1 << ((byte)lVar18 & 0x1f);
        local_228 = (undefined4)lVar18;
        if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar39);
        }
        puVar21 = puVar33;
        if (0 < (int)uVar39) {
          UE::Core::Private::
          ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                    (4,4,uVar39,&local_2c8.AllocatorInstance,0,&local_2c8.ArrayMax);
          puVar21 = (undefined8 *)(local_2c8._8_8_ & 0xffffffff);
        }
        pFVar8 = this->SceneView;
        local_2a0 = (FScene *)&pFVar8->_padding_;
        uStack_17c = 1;
        uVar39 = (uint)pFVar8->_padding_;
        TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar8->_padding_;
        puVar32 = puVar33;
        uStack_180 = uVar34;
        local_168 = uVar34;
        if (uVar39 != 0) {
          puVar32 = (undefined8 *)(ulonglong)uVar39;
          plVar44 = (longlong *)pFVar8->_padding_;
          if ((longlong *)pFVar8->_padding_ == (longlong *)0x0) {
            plVar44 = (longlong *)TStack_1a8.Array;
          }
          uVar37 = (uint)*plVar44;
          puVar42 = puVar33;
          puVar43 = puVar33;
          while( true ) {
            uStack_180 = (uint)puVar42;
            local_168 = (uint)puVar43;
            if (uVar37 != 0) break;
            lVar18 = (longlong)(int)uStack_180;
            local_168 = local_168 + 0x20;
            puVar43 = (undefined8 *)(ulonglong)local_168;
            uStack_180 = uStack_180 + 1;
            puVar42 = (undefined8 *)(ulonglong)uStack_180;
            if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_180)
            goto LAB_144f83420;
            uVar37 = *(uint *)((longlong)plVar44 + lVar18 * 4 + 4);
          }
          uStack_17c = -uVar37 & uVar37;
          uVar35 = (ulonglong)uStack_17c * 2 + 1;
          lVar18 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_224 = (int)lVar18;
          uVar37 = local_224 + -1 + local_168;
          if ((int)uVar39 < (int)uVar37) {
            uVar37 = uVar39;
          }
          puVar32 = (undefined8 *)(ulonglong)uVar37;
        }
LAB_144f83420:
        uStack_170 = 0xffffffff;
        iStack_16c = (int)puVar32;
        uStack_164 = local_64;
        TStack_1a8._padding_ = CONCAT44(uStack_17c,uStack_180);
        TStack_1a8.CurrentBitIndex = iStack_16c;
        TStack_1a8.UnvisitedBitMask = 0xffffffff;
        TStack_1a8._28_4_ = local_64;
        TStack_1a8.BaseBitIndex = local_168;
        FVar36.Data = local_2c8.AllocatorInstance.Data;
        local_1b0 = (longlong *)local_2a0;
        local_188 = (longlong *)local_2a0;
        local_178 = (longlong *)TStack_1a8.Array;
        if (iStack_16c < (int)uVar39) {
          do {
            pFVar4 = (FScriptContainerElement *)(*local_1b0 + (longlong)(int)puVar32 * 0xc);
            iVar17 = (int)puVar21;
            if (((FVar36.Data <= pFVar4) &&
                (pFVar4 < (FScriptContainerElement *)
                          ((longlong)FVar36.Data + (longlong)local_2c8.ArrayMax * 4))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (iVar17 == local_2c8.ArrayMax) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                 (0x404,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
              FVar36.Data = local_2c8.AllocatorInstance.Data;
            }
            puVar21 = (undefined8 *)(ulonglong)(iVar17 + 1U);
            *(undefined4 *)((longlong)FVar36.Data + (longlong)iVar17 * 4) = *(undefined4 *)pFVar4;
            local_2c8.ArrayNum = iVar17 + 1U;
            TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
            puVar32 = (undefined8 *)(ulonglong)(uint)TStack_1a8.CurrentBitIndex;
          } while (TStack_1a8.CurrentBitIndex < (int)*(longlong *)&(TStack_1a8.Array)->NumBits);
        }
        bVar15 = (int)local_res20 != 0;
        if (bVar15) {
          pFVar7 = this->SceneView->ViewState;
          local_288 = (ForElementType<unsigned_int>)
                      &(pFVar7->HLODVisibilityState).ForcedHiddenPrimitiveMap;
          iVar17 = (pFVar7->HLODVisibilityState).ForcedHiddenPrimitiveMap.NumBits;
          if (iVar17 != 0) {
            FVar40 = (pFVar7->HLODVisibilityState).ForcedHiddenPrimitiveMap.AllocatorInstance.
                     SecondaryData;
            if (FVar40 == (ForElementType<unsigned_int>)0x0) {
              FVar40 = local_288;
            }
            uVar39 = *(uint *)FVar40;
            puVar32 = puVar33;
            puVar42 = puVar33;
            while (uVar39 == 0) {
              iVar31 = (int)puVar32;
              puVar42 = (undefined8 *)(ulonglong)((int)puVar42 + 0x20);
              uVar39 = iVar31 + 1;
              puVar32 = (undefined8 *)(ulonglong)uVar39;
              if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar39)
              goto LAB_144f837c3;
              uVar39 = *(uint *)((uchar *)((longlong)FVar40 + 4) + (longlong)iVar31 * 4);
            }
            uVar39 = -uVar39 & uVar39;
            uVar35 = (ulonglong)uVar39 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            local_220 = (int)lVar18;
            uVar37 = (int)puVar42 + -1 + local_220;
            local_res20 = (ulonglong)uVar39;
            if ((int)uVar37 < iVar17) {
              uVar39 = 0xffffffff;
              do {
                iVar17 = (int)puVar21;
                local_2a0 = this->Scene;
                uVar38 = uVar34;
                if ((int)uVar37 < (local_2a0->PrimitiveComponentIds).ArrayNum) {
                  uVar38 = ~uVar37 >> 0x1f;
                }
                if ((uVar38 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar4 = (local_2a0->PrimitiveComponentIds).AllocatorInstance.Data +
                         (longlong)(int)uVar37 * 4;
                if (((FVar36.Data <= pFVar4) &&
                    (pFVar4 < (FScriptContainerElement *)
                              ((longlong)FVar36.Data + (longlong)local_2c8.ArrayMax * 4))) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar15)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if (iVar17 == local_2c8.ArrayMax) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                     (0x404,&local_2c8.AllocatorInstance,&local_2c8.ArrayMax);
                  FVar36.Data = local_2c8.AllocatorInstance.Data;
                }
                puVar21 = (undefined8 *)(ulonglong)(iVar17 + 1U);
                *(undefined4 *)((longlong)FVar36.Data + (longlong)iVar17 * 4) =
                     *(undefined4 *)pFVar4;
                iVar31 = *(int *)((longlong)local_288 + 0x18);
                uVar39 = uVar39 & ~(uint)local_res20;
                local_2c8.ArrayNum = iVar17 + 1U;
                FVar40 = local_288;
                if (*(ForElementType<unsigned_int> *)((longlong)local_288 + 0x10) !=
                    (ForElementType<unsigned_int>)0x0) {
                  FVar40 = *(ForElementType<unsigned_int> *)((longlong)local_288 + 0x10);
                }
                uVar38 = uVar39 & *(uint *)((longlong)FVar40 + (longlong)(int)puVar32 * 4);
                while (uVar38 == 0) {
                  iVar17 = (int)puVar32;
                  puVar42 = (undefined8 *)(ulonglong)((int)puVar42 + 0x20);
                  uVar39 = iVar17 + 1;
                  puVar32 = (undefined8 *)(ulonglong)uVar39;
                  if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar39)
                  goto LAB_144f837c3;
                  uVar39 = 0xffffffff;
                  uVar38 = *(uint *)((undefined1 *)((longlong)FVar40 + 4) + (longlong)iVar17 * 4);
                }
                uVar38 = -uVar38 & uVar38;
                uVar35 = (ulonglong)uVar38 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                local_21c = (int)lVar18;
                uVar37 = (int)puVar42 + -1 + local_21c;
              } while (((int)uVar37 <= iVar31) &&
                      (local_res20 = (ulonglong)uVar38, (int)uVar37 < iVar31));
            }
          }
        }
LAB_144f837c3:
        lVar18 = 0x3f;
        if (local_278 != (ForElementType<unsigned_int>)0x0) {
          for (; (ulonglong)local_278 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_218 = (undefined4)lVar18;
        TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
        SetNumZeroed(&local_2c8,1 << ((byte)lVar18 & 0x1f),Default);
        FVar36.Data = local_2c8.AllocatorInstance.Data;
        iVar17 = local_2c8.ArrayNum;
        lVar18 = (longlong)local_2c8.ArrayNum;
        AlgoImpl::IntroSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>
                  (local_2c8.AllocatorInstance.Data,local_2c8.ArrayNum,local_res8,
                   (TLess<void>)local_res8);
        pFVar20 = CreateUploadBuffer(this->GraphBuilder,L"Nanite.HiddenPrimitivesBuffer",4,iVar17,
                                     FVar36.Data,lVar18 << 2,None);
        this->HiddenPrimitivesBuffer = pFVar20;
        if ((FScriptContainerElement *)FVar36.Data != (FScriptContainerElement *)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar36.Data);
        }
        iVar31 = local_res18;
      }
      pFVar9 = this->GraphBuilder;
      puVar21 = FMemStackBase::Alloc((FMemStackBase *)&pFVar9->_padding_,0x50,0x10);
      if (puVar21 == (undefined8 *)0x0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar15) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      else {
        puVar21[4] = 0;
        *puVar21 = &___7__TObject_VFParameters_FPrimitiveFilter_CS___FRDGAllocator__6B_;
        *(undefined1 *)(puVar21 + 5) = 1;
        puVar21[6] = 0;
        puVar21[7] = 0;
        puVar21[8] = 0;
        puVar33 = puVar21;
      }
      local_298 = puVar33;
      if ((((undefined8 **)pFVar9->_padding_ <= &local_298) &&
          (&local_298 <
           (undefined8 **)pFVar9->_padding_ + *(int *)((longlong)&pFVar9->_padding_ + 4))) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar17 = (int)pFVar9->_padding_;
      piVar2 = (int *)((longlong)&pFVar9->_padding_ + 4);
      if (iVar17 == *piVar2) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&pFVar9->_padding_,piVar2);
      }
      *(int *)&pFVar9->_padding_ = iVar17 + 1;
      *(undefined8 **)(pFVar9->_padding_ + (longlong)iVar17 * 8) = local_298;
      ((FParameters *)(puVar33 + 2))->NumPrimitives = local_2a8;
      *(uint *)((longlong)puVar33 + 0x14) = local_290 & 0xff;
      iVar17 = 1;
      if (iVar31 != 0) {
        iVar17 = iVar31;
      }
      uVar35 = (ulonglong)(iVar17 - 1) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      *(int *)(puVar33 + 3) = 1 << ((byte)lVar18 & 0x1f);
      local_214 = (undefined4)lVar18;
      uVar39 = 1;
      if (local_2a4 != 0) {
        uVar39 = local_2a4;
      }
      uVar35 = (ulonglong)(uVar39 - 1) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar35 != 0) {
        for (; uVar35 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      *(int *)((longlong)puVar33 + 0x1c) = 1 << ((byte)lVar18 & 0x1f);
      pTVar10 = this->SceneUniformBuffer;
      local_210 = (undefined4)lVar18;
      pFVar22 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
      EVar16 = Static;
      if (pFVar22->BindingFlags != StaticAndShader) {
        EVar16 = pFVar22->BindingFlags;
      }
      bVar29 = 0;
      uStack_270 = CONCAT31(uStack_270._1_3_,EVar16);
      puVar33[4] = pTVar10;
      puVar33[5] = CONCAT44(uStack_26c,uStack_270);
      local_238.Buffer = this->PrimitiveFilterBuffer;
      local_238._padding_._2_1_ = 0;
      if ((((local_238.Buffer)->Desc).Usage & DrawIndirect) != None) {
        bVar29 = 0x1c;
      }
      local_238._padding_._0_2_ = (ushort)bVar29;
      local_278 = (ForElementType<unsigned_int>)pTVar10;
      pFVar19 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_238,None);
      puVar33[6] = pFVar19;
      if (this->HiddenPrimitivesBuffer != (FRDGBuffer *)0x0) {
        local_148._padding_._0_1_ = 0x1c;
        local_148._padding_._4_4_ = 0;
        local_148._padding_._0_4_ = 0xffffffff;
        local_148._padding_ = 0;
        local_148.Buffer = this->HiddenPrimitivesBuffer;
        pFVar23 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_148);
        puVar33[7] = pFVar23;
      }
      if (this->ShowOnlyPrimitivesBuffer != (FRDGBuffer *)0x0) {
        local_128._padding_._0_1_ = 0x1c;
        local_128._padding_._4_4_ = 0;
        local_128._padding_._0_4_ = 0xffffffff;
        local_128._padding_ = 0;
        local_128.Buffer = this->ShowOnlyPrimitivesBuffer;
        pFVar23 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_128);
        puVar33[8] = pFVar23;
      }
      this_00 = this->SharedContext->ShaderMap;
      pFVar20 = this->ShowOnlyPrimitivesBuffer;
      pFVar11 = this->HiddenPrimitivesBuffer;
      pFVar24 = (FShaderType *)FPrimitiveFilter_CS::GetStaticType();
      FGlobalShaderMap::GetShader
                (this_00,&local_158,pFVar24,
                 (-(uint)(pFVar20 != (FRDGBuffer *)0x0) & 2) + (uint)(pFVar11 != (FRDGBuffer *)0x0))
      ;
      if (local_158.ShaderContent == (FShader *)0x0) {
        this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d0);
        ::FName::ToString((FName *)this_01,&local_108);
        FPrimitiveFilter_CS::GetStaticType();
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (bVar15) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      FPrimitiveFilter_CS::GetStaticType();
      local_f8.ShaderContent = (FPrimitiveFilter_CS *)local_158.ShaderContent;
      local_f8.ShaderMap = local_158.ShaderMap;
      pTVar25 = FComputeShaderUtils::GetGroupCountWrapped(local_b0,local_2a8,0x40);
      uVar5 = *(undefined8 *)&pTVar25->field0_0x0;
      iVar17 = (pTVar25->field0_0x0)._s_0.Z;
      pFVar26 = FRDGEventName::FRDGEventName(&local_c8,1,L"PrimitiveFilter");
      pFVar9 = this->GraphBuilder;
      pFVar22 = FPrimitiveFilter_CS::FParameters::FTypeInfo::GetStructMetadata();
      local_1f8._0_8_ = uVar5;
      local_1f8._s_0.Z = iVar17;
      FComputeShaderUtils::AddPass<FPrimitiveFilter_CS>
                (pFVar9,pFVar26,Compute,&local_f8,pFVar22,(FParameters *)(puVar33 + 2),
                 (TIntVector3<int> *)&local_1f8._s_0);
      if (local_c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
  }
  FMemScope::~FMemScope(&local_200);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// AddPass_Rasterize @ 144f83c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

FBinningData * __thiscall
Nanite::FRenderer::AddPass_Rasterize
          (FRenderer *this,FBinningData *__return_storage_ptr__,FDispatchContext *param_1,
          FRDGBuffer *param_2,FRDGBuffer *param_3,FRDGBuffer *param_4,
          FGlobalWorkQueueParameters *param_5,FGlobalWorkQueueParameters *param_6,bool param_7)

{
  int *piVar1;
  EPipeline EVar2;
  ERasterScheduling EVar3;
  FRasterContext *pFVar4;
  FRDGBuilder *pFVar5;
  FViewInfo *pFVar6;
  code *pcVar7;
  FGlobalWorkQueueParameters *pFVar8;
  TIntPoint<int> TVar9;
  ERasterHardwarePath EVar10;
  bool bVar11;
  bool bVar12;
  EShaderPlatform EVar13;
  ERDGPassFlags EVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  FRasterizePassParameters *pFVar19;
  FRDGEventName *pFVar20;
  FShaderParametersMetadata *pFVar21;
  wchar_t *pwVar22;
  FRDGPass *pFVar23;
  FBinningData *pFVar24;
  TIntPoint<int>_u_0 TVar25;
  bool bVar26;
  undefined1 in_stack_00000049;
  FRenderer *local_1f0;
  FViewInfo *local_1e8;
  FLLMScope local_1e0 [2];
  FRDGBuffer *local_1d8;
  undefined4 local_1d0;
  FRDGBuffer *local_1c8;
  FViewInfo *local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  FRDGBuffer *local_1b0;
  FRDGTextureUAV *local_1a8;
  FRDGTextureUAV *pFStack_1a0;
  FRDGTextureUAV *local_198;
  FRDGTextureUAV *pFStack_190;
  FRDGTextureUAV *local_188;
  undefined8 uStack_180;
  FName local_178;
  undefined8 local_170;
  FMemScope local_168;
  FBinningData local_160;
  FRDGParameterStruct local_140;
  FRDGParameterStruct local_128;
  FRDGParameterStruct local_110;
  FRDGParameterStruct local_f8;
  FRenderer *local_d8;
  FDispatchContext *local_d0;
  FRDGTextureUAV **local_c8;
  FRDGBuffer **local_c0;
  FRDGBuffer **local_b8;
  FRDGBuffer **local_b0;
  FGlobalWorkQueueParameters *local_a8;
  FRenderer **local_a0;
  FRDGEventName local_98;
  FRDGEventName local_80;
  FRDGEventName local_68;
  FRDGEventName local_50;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"AddPass_Rasterize");
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5628,"AddPass_Rasterize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
               ,0x15fc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5628);
  }
  FLLMScope::FLLMScope(local_1e0,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_178 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_168,&local_178,true);
  EVar2 = this->SharedContext->Pipeline;
  EVar13 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
  EVar10 = GetRasterHardwarePath(EVar13,EVar2);
  uVar15 = 0x100;
  if ((this->RenderFlags & 1) != 0) {
    uVar15 = 1;
  }
  local_1d8 = this->MainRasterizeArgsSWHW;
  if (param_7 == false) {
    this->RenderFlags = this->RenderFlags | 0x1000;
  }
  else {
    local_1d8 = FSystemTextures::GetDefaultBuffer
                          ((FSystemTextures *)&GSystemTextures,this->GraphBuilder,4);
    this->RenderFlags = this->RenderFlags & 0xffffefff;
  }
  EVar3 = this->RasterContext->RasterScheduling;
  if ((param_4 == (FRDGBuffer *)0x0) || (EVar3 == HardwareOnly)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  local_1f0 = this;
  local_1c8 = FSystemTextures::GetDefaultStructuredBuffer
                        ((FSystemTextures *)&GSystemTextures,this->GraphBuilder,8);
  local_1b0 = FSystemTextures::GetDefaultStructuredBuffer
                        ((FSystemTextures *)&GSystemTextures,this->GraphBuilder,0x20);
  pFVar4 = this->RasterContext;
  local_1a8 = (pFVar4->Parameters).OutDepthBuffer;
  pFStack_1a0 = (pFVar4->Parameters).OutDepthBufferArray;
  local_198 = (pFVar4->Parameters).OutVisBuffer64;
  pFStack_190 = (pFVar4->Parameters).OutDbgBuffer64;
  local_188 = (pFVar4->Parameters).OutDbgBuffer32;
  uStack_180 = *(undefined8 *)&(pFVar4->Parameters).field_0x28;
  if (local_1a8 != (FRDGTextureUAV *)0x0) {
    local_1a8 = FRDGBuilder::CreateUAV(local_1f0->GraphBuilder,&local_1a8->Desc,SkipBarrier);
  }
  if (pFStack_1a0 != (FRDGTextureUAV *)0x0) {
    pFStack_1a0 = FRDGBuilder::CreateUAV(local_1f0->GraphBuilder,&pFStack_1a0->Desc,SkipBarrier);
  }
  if (local_198 != (FRDGTextureUAV *)0x0) {
    local_198 = FRDGBuilder::CreateUAV(local_1f0->GraphBuilder,&local_198->Desc,SkipBarrier);
  }
  if (pFStack_190 != (FRDGTextureUAV *)0x0) {
    pFStack_190 = FRDGBuilder::CreateUAV(local_1f0->GraphBuilder,&pFStack_190->Desc,SkipBarrier);
  }
  if (local_188 != (FRDGTextureUAV *)0x0) {
    local_188 = FRDGBuilder::CreateUAV(local_1f0->GraphBuilder,&local_188->Desc,SkipBarrier);
  }
  TVar9.field0_0x0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_1d0 = 2;
  if (EVar3 == HardwareAndSoftwareOverlap) {
    local_1d0 = 4;
  }
  TVar25 = (this->RasterContext->TextureSize).field0_0x0;
  if (this->VirtualShadowMapArray != (FVirtualShadowMapArray *)0x0) {
    local_1b8 = 0x80;
    uStack_1b4 = 0x80;
    local_170 = 0x8000000080;
    TVar25 = (TIntPoint<int>_u_0)0x20000000200;
  }
  if ((this->RenderFlags & 0x2000) == 0) {
    this->TotalPrevDrawClustersBuffer = local_1c8;
  }
  iVar16 = FPSOCollectorCreateManager::GetIndex(Deferred,L"NaniteRaster");
  local_a8 = param_5;
  local_c8 = &local_1a8;
  local_c0 = &local_1d8;
  local_b8 = &param_3;
  local_b0 = &param_4;
  local_a0 = &local_1f0;
  local_d8 = this;
  local_d0 = param_1;
  AddPass_Binning(this,__return_storage_ptr__,param_1,EVar10,local_1d8,(FRDGBuffer *)0x0,
                  (FRDGBuffer *)0x0,param_5,param_7,Compute);
  if (__return_storage_ptr__->DataBuffer == (FRDGBuffer *)0x0) {
    __return_storage_ptr__->DataBuffer = local_1c8;
  }
  if (__return_storage_ptr__->MetaBuffer == (FRDGBuffer *)0x0) {
    __return_storage_ptr__->MetaBuffer = local_1b0;
  }
  pFVar19 = `Nanite::FRenderer::AddPass_Rasterize'::__l2::<lambda_2>::operator()
                      (&local_d8,__return_storage_ptr__,false);
  if (bVar12) {
    local_1c0 = this->SceneView;
    pFVar5 = this->GraphBuilder;
    uVar18 = this->RenderFlags;
    local_1e8 = (FViewInfo *)pFVar5;
    pFVar20 = FRDGEventName::FRDGEventName(&local_98,1,L"SW Rasterize (Tessellated)");
    pFVar21 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass(&pFVar5->UserValidation,pFVar19,pFVar21,pFVar20,Compute);
    FRDGBuilder::FlushAccessModeQueue(pFVar5);
    pwVar22 = FRDGEventName::GetTCHAR(pFVar20);
    EVar14 = FRDGBuilder::OverridePassFlags(pFVar5,pwVar22,Compute);
    pFVar23 = FMemStackBase::Alloc((FMemStackBase *)&pFVar5->_padding_,0x1a8,8);
    local_140.Contents = (uchar *)pFVar19;
    if ((pFVar21->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pFVar24 = (FBinningData *)(*pcVar7)();
        return pFVar24;
      }
    }
    local_140.Layout.Reference = (pFVar21->Layout).Reference;
    if (local_140.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_140.Layout.Reference);
    }
    local_140.Metadata = pFVar21;
    FRDGPass::FRDGPass(pFVar23,pFVar20,&local_140,EVar14,Async);
    pFVar23->_padding_ =
         (longlong)
         &TRDGLambdaPass<FRasterizePassParameters,`Nanite::FRenderer::AddPass_Rasterize'::`23'::<lambda_3>_>
          ::_vftable_;
    pFVar23[1]._padding_ = (longlong)pFVar19;
    pFVar23[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    *(FViewInfo **)&pFVar23[1].FullPathIfDebug.Data.ArrayNum = local_1c0;
    *(uint *)&pFVar23[1].Name.EventFormat = uVar18;
    *(int *)((longlong)&pFVar23[1].Name.EventFormat + 4) = iVar16;
    pFVar23[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)pFVar19;
    FRDGBuilder::ClobberPassOutputs(pFVar5,pFVar23);
    iVar17 = (pFVar5->Passes).Array.ArrayNum;
    piVar1 = &(pFVar5->Passes).Array.ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&pFVar5->Passes,piVar1);
    }
    (pFVar5->Passes).Array.ArrayNum = iVar17 + 1;
    (pFVar5->Passes).Array.AllocatorInstance.Data[iVar17] = pFVar23;
    (pFVar23->Handle).Index = (pFVar5->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass((FRDGBuilder *)local_1e8,pFVar23);
    if (local_98.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pFVar23->Workload = uVar15;
  }
  local_1e8 = this->SceneView;
  pFVar5 = this->GraphBuilder;
  uVar18 = this->RenderFlags;
  local_1c0 = (FViewInfo *)pFVar5;
  pFVar20 = FRDGEventName::FRDGEventName(&local_80,1,L"HW Rasterize (Triangles)");
  pFVar21 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass
            (&pFVar5->UserValidation,pFVar19,pFVar21,pFVar20,SkipRenderPass|Raster);
  FRDGBuilder::FlushAccessModeQueue(pFVar5);
  pwVar22 = FRDGEventName::GetTCHAR(pFVar20);
  EVar14 = FRDGBuilder::OverridePassFlags(pFVar5,pwVar22,SkipRenderPass|Raster);
  pFVar23 = FMemStackBase::Alloc((FMemStackBase *)&pFVar5->_padding_,0x1c0,8);
  local_128.Contents = (uchar *)pFVar19;
  if ((pFVar21->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsLayoutInitialized()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                        ,0x17c,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      pFVar24 = (FBinningData *)(*pcVar7)();
      return pFVar24;
    }
  }
  local_128.Layout.Reference = (pFVar21->Layout).Reference;
  if (local_128.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_128.Layout.Reference);
  }
  local_128.Metadata = pFVar21;
  FRDGPass::FRDGPass(pFVar23,pFVar20,&local_128,EVar14,Async);
  pFVar6 = local_1c0;
  pFVar23->_padding_ =
       (longlong)
       &TRDGLambdaPass<FRasterizePassParameters,`Nanite::FRenderer::AddPass_Rasterize'::`2'::<lambda_4>_>
        ::_vftable_;
  pFVar23[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  pFVar23[1]._padding_ = (longlong)pFVar19;
  *(TIntPoint<int>_u_0 *)&pFVar23[1].FullPathIfDebug.Data.ArrayNum =
       (TIntPoint<int>_u_0_s_0)TVar9.field0_0x0;
  pFVar23[1].Name.EventFormat = (wchar_t *)TVar25;
  pFVar23[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)local_1e8;
  *(bool *)&pFVar23[1].Name.FormattedEventName.Data.ArrayNum = param_7;
  *(ERasterHardwarePath *)((longlong)&pFVar23[1].Name.FormattedEventName.Data.ArrayNum + 1) = EVar10
  ;
  pFVar23[1].Name.FormattedEventName.Data.ArrayMax = iVar16;
  *(uint *)&pFVar23[1].ParameterStruct.Contents = uVar18;
  pFVar23[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)pFVar19;
  FRDGBuilder::ClobberPassOutputs((FRDGBuilder *)local_1c0,pFVar23);
  iVar17 = (((TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *)&pFVar6->_padding_)->Array).
           ArrayNum;
  piVar1 = &(((TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *)&pFVar6->_padding_)->Array)
            .ArrayMax;
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&pFVar6->_padding_,piVar1);
  }
  (((TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *)&pFVar6->_padding_)->Array).ArrayNum
       = iVar17 + 1;
  (((TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *)&pFVar6->_padding_)->Array).
  AllocatorInstance.Data[iVar17] = pFVar23;
  (pFVar23->Handle).Index =
       (((TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *)&pFVar6->_padding_)->Array).
       ArrayNum - 1;
  FRDGBuilder::SetupParameterPass((FRDGBuilder *)pFVar6,pFVar23);
  if (local_80.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.FormattedEventName.Data.AllocatorInstance.Data);
  }
  pFVar23->Workload = uVar15;
  pFVar8 = param_5;
  if (EVar3 != HardwareOnly) {
    local_1e8 = this->SceneView;
    pFVar5 = this->GraphBuilder;
    uVar18 = this->RenderFlags;
    pFVar20 = FRDGEventName::FRDGEventName(&local_68,1,L"SW Rasterize (Triangles)");
    pFVar21 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
    EVar14 = (ERDGPassFlags)local_1d0;
    FRDGUserValidation::ValidateAddPass(&pFVar5->UserValidation,pFVar19,pFVar21,pFVar20,EVar14);
    FRDGBuilder::FlushAccessModeQueue(pFVar5);
    pwVar22 = FRDGEventName::GetTCHAR(pFVar20);
    EVar14 = FRDGBuilder::OverridePassFlags(pFVar5,pwVar22,EVar14);
    pFVar23 = FMemStackBase::Alloc((FMemStackBase *)&pFVar5->_padding_,0x1a8,8);
    local_110.Contents = (uchar *)pFVar19;
    if ((pFVar21->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pFVar24 = (FBinningData *)(*pcVar7)();
        return pFVar24;
      }
    }
    local_110.Layout.Reference = (pFVar21->Layout).Reference;
    if (local_110.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_110.Layout.Reference);
    }
    local_110.Metadata = pFVar21;
    FRDGPass::FRDGPass(pFVar23,pFVar20,&local_110,EVar14,Async);
    pFVar23->_padding_ =
         (longlong)
         &TRDGLambdaPass<FRasterizePassParameters,`Nanite::FRenderer::AddPass_Rasterize'::`26'::<lambda_5>_>
          ::_vftable_;
    pFVar23[1]._padding_ = (longlong)pFVar19;
    pFVar23[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    *(FViewInfo **)&pFVar23[1].FullPathIfDebug.Data.ArrayNum = local_1e8;
    *(uint *)&pFVar23[1].Name.EventFormat = uVar18;
    *(int *)((longlong)&pFVar23[1].Name.EventFormat + 4) = iVar16;
    pFVar23[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)pFVar19;
    FRDGBuilder::ClobberPassOutputs(pFVar5,pFVar23);
    iVar17 = (pFVar5->Passes).Array.ArrayNum;
    piVar1 = &(pFVar5->Passes).Array.ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&pFVar5->Passes,piVar1);
    }
    (pFVar5->Passes).Array.ArrayNum = iVar17 + 1;
    (pFVar5->Passes).Array.AllocatorInstance.Data[iVar17] = pFVar23;
    (pFVar23->Handle).Index = (pFVar5->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(pFVar5,pFVar23);
    if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pFVar23->Workload = uVar15;
    pFVar8 = param_5;
  }
  if (bVar12) {
    bVar12 = param_7;
    if (param_7 == false) {
      uVar18 = 2;
    }
    else {
      uVar18 = (this->Configuration).bTwoPassOcclusion;
    }
    param_5 = pFVar8;
    AddPass_PatchSplit(this,param_1,pFVar8,param_6,param_3,param_4,uVar18,Compute);
    AddPass_Binning(this,&local_160,param_1,EVar10,local_1d8,param_3,param_4,pFVar8,bVar12,Compute);
    if (local_160.DataBuffer == (FRDGBuffer *)0x0) {
      local_160.DataBuffer = local_1c8;
    }
    if (local_160.MetaBuffer == (FRDGBuffer *)0x0) {
      local_160.MetaBuffer = local_1b0;
    }
    pFVar19 = `Nanite::FRenderer::AddPass_Rasterize'::__l2::<lambda_2>::operator()
                        (&local_d8,&local_160,true);
    pFVar5 = this->GraphBuilder;
    pFVar6 = this->SceneView;
    param_5._0_4_ = this->RenderFlags;
    pFVar20 = FRDGEventName::FRDGEventName(&local_50,1,L"SW Rasterize (Patches)");
    pFVar21 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass(&pFVar5->UserValidation,pFVar19,pFVar21,pFVar20,Compute);
    FRDGBuilder::FlushAccessModeQueue(pFVar5);
    pwVar22 = FRDGEventName::GetTCHAR(pFVar20);
    _param_7 = FRDGBuilder::OverridePassFlags(pFVar5,pwVar22,Compute);
    pFVar23 = FMemStackBase::Alloc((FMemStackBase *)&pFVar5->_padding_,0x1a8,8);
    local_f8.Contents = (uchar *)pFVar19;
    if (((pFVar21->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      pFVar24 = (FBinningData *)(*pcVar7)();
      return pFVar24;
    }
    local_f8.Layout.Reference = (pFVar21->Layout).Reference;
    if (local_f8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_f8.Layout.Reference);
    }
    local_f8.Metadata = pFVar21;
    FRDGPass::FRDGPass(pFVar23,pFVar20,&local_f8,_param_7,Async);
    pFVar23->_padding_ =
         (longlong)
         &TRDGLambdaPass<FRasterizePassParameters,`Nanite::FRenderer::AddPass_Rasterize'::`29'::<lambda_6>_>
          ::_vftable_;
    pFVar23[1]._padding_ = (longlong)pFVar19;
    pFVar23[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
    *(FViewInfo **)&pFVar23[1].FullPathIfDebug.Data.ArrayNum = pFVar6;
    *(uint *)&pFVar23[1].Name.EventFormat = (uint)param_5;
    *(int *)((longlong)&pFVar23[1].Name.EventFormat + 4) = iVar16;
    pFVar23[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)pFVar19;
    FRDGBuilder::ClobberPassOutputs(pFVar5,pFVar23);
    iVar16 = (pFVar5->Passes).Array.ArrayNum;
    piVar1 = &(pFVar5->Passes).Array.ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)&pFVar5->Passes,piVar1);
    }
    (pFVar5->Passes).Array.ArrayNum = iVar16 + 1;
    (pFVar5->Passes).Array.AllocatorInstance.Data[iVar16] = pFVar23;
    (pFVar23->Handle).Index = (pFVar5->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(pFVar5,pFVar23);
    if (local_50.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pFVar8 = (FGlobalWorkQueueParameters *)CONCAT44(param_5._4_4_,(uint)param_5);
    pFVar23->Workload = uVar15;
  }
  param_5 = pFVar8;
  FMemScope::~FMemScope(&local_168);
  FLLMScope::~FLLMScope(local_1e0);
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return __return_storage_ptr__;
}

// CalculateClusterIndirectArgsBuffer @ 144f84de0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall Nanite::FRenderer::CalculateClusterIndirectArgsBuffer(FRenderer *this)

{
  int *piVar1;
  undefined1 uVar2;
  FRDGBuilder *pFVar3;
  FGlobalShaderMap *this_00;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  FRDGBuffer *pFVar8;
  FRDGBuffer *pFVar9;
  undefined8 *puVar10;
  FRDGBufferUAV *pFVar11;
  FRDGBufferSRV *pFVar12;
  FShaderType *pFVar13;
  FName this_01;
  FRDGEventName *pFVar14;
  FShaderParametersMetadata *pFVar15;
  undefined8 *puVar16;
  undefined1 local_res8 [8];
  undefined8 *local_138 [2];
  TShaderRefBase<Nanite::FCalculateClusterIndirectArgsCS,FShaderMapPointerTable> local_128;
  undefined8 local_118;
  FRDGBufferUAVDesc local_108;
  FRDGBufferUAVDesc local_f8;
  TIntVector3<int>_u_0 local_e8;
  FRDGBufferSRVDesc local_d8;
  FRDGBufferSRVDesc local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  FString local_88;
  FRDGBufferDesc local_78;
  undefined1 local_60 [16];
  FShaderParametersMetadata *local_50;
  FRDGEventName local_48;
  
  local_128.ShaderMap._0_4_ = 0x4189;
  puVar16 = (undefined8 *)0x0;
  local_128.ShaderContent = (FCalculateClusterIndirectArgsCS *)0x400000004;
  local_118 = 0;
  local_78.BytesPerElement = 4;
  local_78.NumElements = 4;
  local_78.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  local_78._12_4_ = local_128.ShaderMap._4_4_;
  local_78.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar8 = FRDGBuilder::CreateBuffer
                     (this->GraphBuilder,&local_78,L"Nanite.ClusterIndirectArgs",None);
  local_128.ShaderMap =
       (FShaderMapBase *)
       CONCAT44(local_128.ShaderMap._4_4_,StructuredBuffer|ShaderResource|UnorderedAccess|Static);
  local_128.ShaderContent = (FCalculateClusterIndirectArgsCS *)0x200000004;
  local_118 = 0;
  local_60._0_4_ = 4;
  local_60._4_4_ = 2;
  local_60._8_8_ = local_128.ShaderMap;
  local_50 = (FShaderParametersMetadata *)0x0;
  pFVar9 = FRDGBuilder::CreateBuffer
                     (this->GraphBuilder,(FRDGBufferDesc *)local_60,L"Nanite.ClusterStats",None);
  pFVar3 = this->GraphBuilder;
  puVar10 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x40,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    puVar10[3] = 0;
    *puVar10 = &
               ___7__TObject_VFParameters_FCalculateClusterIndirectArgsCS_Nanite___FRDGAllocator__6B_
    ;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar16 = puVar10;
  }
  local_138[0] = puVar16;
  if ((((undefined8 **)pFVar3->_padding_ <= local_138) &&
      (local_138 < (undefined8 **)pFVar3->_padding_ + *(int *)((longlong)&pFVar3->_padding_ + 4)))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (int)pFVar3->_padding_;
  piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar3->_padding_,piVar1);
  }
  *(int *)&pFVar3->_padding_ = iVar7 + 1;
  *(undefined8 **)(pFVar3->_padding_ + (longlong)iVar7 * 8) = local_138[0];
  ((FParameters *)(puVar16 + 2))->RenderFlags = this->RenderFlags;
  local_108._padding_._2_1_ = 0;
  bVar6 = 0;
  if (((pFVar8->Desc).Usage & DrawIndirect) != None) {
    bVar6 = 0x1c;
  }
  local_108._padding_._0_2_ = (ushort)bVar6;
  local_108.Buffer = pFVar8;
  pFVar11 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_108,None);
  puVar16[3] = pFVar11;
  bVar6 = 0;
  local_f8._padding_._2_1_ = 0;
  if (((pFVar9->Desc).Usage & DrawIndirect) != None) {
    bVar6 = 0x1c;
  }
  local_f8._padding_._0_2_ = (ushort)bVar6;
  local_f8.Buffer = pFVar9;
  pFVar11 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_f8,None);
  puVar16[4] = pFVar11;
  local_d8.Buffer = this->MainRasterizeArgsSWHW;
  local_d8._padding_._0_1_ = 0;
  local_d8._padding_._4_4_ = 0;
  local_d8._padding_._0_4_ = 0xffffffff;
  local_d8._padding_ = 0;
  if ((((local_d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_d8._padding_._0_1_ = 0x1c;
  }
  pFVar12 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_d8);
  puVar16[5] = pFVar12;
  if ((this->Configuration).bTwoPassOcclusion != 0) {
    if ((this->PostRasterizeArgsSWHW == (FRDGBuffer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PostRasterizeArgsSWHW",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                           ,0x1aac,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_b8.Buffer = this->PostRasterizeArgsSWHW;
    local_b8._padding_._0_1_ = 0;
    local_b8._padding_._4_4_ = 0;
    local_b8._padding_._0_4_ = 0xffffffff;
    local_b8._padding_ = 0;
    if ((((local_b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_b8._padding_._0_1_ = 0x1c;
    }
    pFVar12 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_b8);
    puVar16[6] = pFVar12;
  }
  this_00 = this->SharedContext->ShaderMap;
  pFVar13 = (FShaderType *)FCalculateClusterIndirectArgsCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_98,pFVar13,(this->Configuration).bTwoPassOcclusion);
  if (local_98.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_01,&local_88);
    FCalculateClusterIndirectArgsCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FCalculateClusterIndirectArgsCS::GetStaticType();
  local_128.ShaderContent = (FCalculateClusterIndirectArgsCS *)local_98.ShaderContent;
  local_128.ShaderMap = local_98.ShaderMap;
  pFVar14 = FRDGEventName::FRDGEventName(&local_48,1,L"CalculateClusterIndirectArgs");
  pFVar3 = this->GraphBuilder;
  pFVar15 = FCalculateClusterIndirectArgsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_e8._s_0.X = 1;
  local_e8._s_0.Y = 1;
  local_e8._s_0.Z = 1;
  FComputeShaderUtils::AddPass<Nanite::FCalculateClusterIndirectArgsCS>
            (pFVar3,pFVar14,Compute,&local_128,pFVar15,(FParameters *)(puVar16 + 2),
             (TIntVector3<int> *)&local_e8._s_0);
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  this->ClusterStatsBuffer = pFVar9;
  this->ClusterIndirectArgsBuffer = pFVar8;
  return;
}

// DrawGeometry @ 144f92cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall
Nanite::FRenderer::DrawGeometry
          (FRenderer *this,FNaniteRasterPipelines *param_1,FNaniteVisibilityQuery *param_2,
          FPackedViewArray *param_3,FSceneInstanceCullingQuery *param_4,
          TArrayView<Nanite::FInstanceDraw_const_,int> *param_5)

{
  ulonglong uVar1;
  FRDGBuilder *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FRDGBuffer *pFVar6;
  uint uVar7;
  undefined ***pppuVar8;
  undefined1 auStackY_158 [32];
  FViewDrawGroup *pFVar9;
  ulong64 uVar10;
  code *local_e8 [2];
  undefined **local_d8;
  int local_d0;
  undefined ***local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  FPackedViewArray *local_a0;
  undefined ***local_90;
  code *local_88 [2];
  undefined **local_78;
  FPackedViewArray *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (param_3->NumViews == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewArray.NumViews > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                       ,0x1878,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((0x1000 < param_3->NumViews) && (2 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  uVar7 = 1;
  if (param_3->NumViews != 0) {
    uVar7 = param_3->NumViews;
  }
  local_60 = (undefined ***)0x0;
  local_90 = (undefined ***)0x0;
  local_c0 = (undefined ***)0x0;
  uVar1 = (ulonglong)(uVar7 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_3>,unsigned___int64>
                ::Call;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_2>,void_const_*>
                ::Call;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Nanite::FRenderer::DrawGeometry'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_d0 = 1 << ((byte)lVar3 & 0x1f);
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_1>,unsigned_int>
                ::Call;
  local_a0 = param_3;
  local_70 = param_3;
  pFVar6 = CreateStructuredBuffer
                     (this->GraphBuilder,L"Nanite.Views",0x3d0,
                      (TFunction<unsigned_int___cdecl(void)> *)local_e8,
                      (TFunction<void_const_*___cdecl(void)> *)local_b8,
                      (TFunction<unsigned___int64___cdecl(void)> *)local_88);
  if (local_e8[0] != (code *)0x0) {
    pppuVar8 = &local_d8;
    if (local_c0 != (undefined ***)0x0) {
      pppuVar8 = local_c0;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar8 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar8 = local_90;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar8 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar8 = local_60;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (param_4 != (FSceneInstanceCullingQuery *)0x0) {
    uVar7 = (param_4->ViewDrawGroups).ArrayNum;
    pFVar9 = (param_4->ViewDrawGroups).AllocatorInstance.Data;
    if ((int)uVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = this->GraphBuilder;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
        ::__l2::DummyElement.FirstView = 0;
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
        ::__l2::DummyElement.NumViews = 0;
        _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    bVar5 = uVar7 != 0;
    if (bVar5) {
      uVar10 = (longlong)(int)uVar7 << 3;
    }
    else {
      uVar10 = 8;
      uVar7 = 1;
      pFVar9 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<UE::HLSL::FViewDrawGroup>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<UE::HLSL::FViewDrawGroup_const_,int>,ERDGInitialDataFlags)'
                ::__l2::DummyElement;
    }
    CreateStructuredBuffer(pFVar2,L"Nanite.ViewDrawRanges",8,uVar7,pFVar9,uVar10,!bVar5);
  }
  (**(code **)(*(longlong *)this + 0x10))(this,param_1,param_2,pFVar6);
  return;
}

// DrawGeometry @ 144f93010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall
Nanite::FRenderer::DrawGeometry
          (FRenderer *this,FNaniteRasterPipelines *param_1,FNaniteVisibilityQuery *param_2,
          FRDGBuffer *param_3,FRDGBuffer *param_4,int param_5,FSceneInstanceCullingQuery *param_6,
          TArrayView<Nanite::FInstanceDraw_const_,int> *param_7,FExplicitChunkDrawInfo *param_8)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  EPipeline EVar4;
  FRHIGPUMask FVar5;
  undefined4 uVar6;
  Type TVar7;
  FRDGBuilder *pFVar8;
  undefined8 uVar9;
  FVirtualShadowMapArray *pFVar10;
  FVirtualShadowMapArrayCacheManager *pFVar11;
  FGlobalShaderMap *this_00;
  FRHIComputeCommandList *pFVar12;
  FRDGPooledBuffer *pFVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  code *pcVar16;
  undefined8 uVar17;
  TRefCountPtr<FRHISamplerState> TVar18;
  TConsoleVariableData<float> *pTVar19;
  TConsoleVariableData<float> *pTVar20;
  TConsoleVariableData<int> *pTVar21;
  bool bVar22;
  EUniformBufferBindingFlags EVar23;
  bool bVar24;
  byte bVar25;
  ERasterHardwarePath EVar26;
  EShaderPlatform EVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  FRDGScope *pFVar33;
  FRDGBuffer *pFVar34;
  FRDGBufferSRV *pFVar35;
  FRDGTexture *pFVar36;
  FShaderParametersMetadata *pFVar37;
  FRDGTexture *pFVar38;
  FRDGTexture *pFVar39;
  FRDGBufferUAV *pFVar40;
  TVector2<float>_u_0 TVar41;
  FShaderType *pFVar42;
  FName this_01;
  FRDGEventName *pFVar43;
  FRDGBufferDesc *pFVar44;
  TRefCountPtr<FRDGPooledBuffer> *pTVar45;
  FRDGBuffer *pFVar46;
  FRDGBuffer *pFVar47;
  FRDGBuffer *pFVar48;
  FDispatchContext *pFVar49;
  TRDGUniformBuffer<FNaniteRasterUniformParameters> *pTVar50;
  FBinningData *pFVar51;
  int *piVar52;
  TVector2<float>_u_0 TVar53;
  ulonglong uVar54;
  undefined1 auStackY_758 [32];
  undefined8 local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 local_6d8;
  FLLMScope local_6d0 [2];
  TVector2<float>_u_0 local_6c8;
  TVector2<float>_u_0 local_6c0;
  FGlobalWorkQueueParameters local_6b8;
  undefined8 local_6a8;
  FGlobalWorkQueueParameters local_698;
  FRDGBufferUAVDesc local_688;
  float local_678;
  float fStack_674;
  undefined8 local_670;
  FRDGBuffer *local_668;
  FRDGBufferUAVDesc local_660;
  FRDGBufferUAVDesc local_650;
  FRDGBufferUAVDesc local_640;
  FRDGBufferUAVDesc local_630;
  FRDGBufferUAVDesc local_620;
  FRDGBufferUAVDesc local_610;
  FRDGBufferUAVDesc local_600;
  FRDGBufferUAVDesc local_5f0;
  FRDGBufferUAVDesc local_5e0;
  FRDGBufferUAVDesc local_5d0;
  FRDGBufferUAVDesc local_5c0;
  FRDGBufferUAVDesc local_5b0;
  TIntVector3<int>_u_0 local_598;
  FRDGBufferDesc local_588;
  undefined4 local_570;
  FNaniteVisibilityQuery *local_568;
  FNaniteRasterPipelines *local_560;
  FRDGTexture *local_558;
  FMemScope local_550;
  TRDGEventScopeGuard<FRDGScope_RHI> local_548;
  char local_538;
  FName local_530;
  FRDGBufferSRVDesc local_528;
  FRDGBufferSRVDesc local_508;
  FRDGBufferSRVDesc local_4e8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_4c8;
  undefined1 local_4b8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_4b0;
  undefined1 local_4a0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_498;
  undefined1 local_488;
  TRDGEventScopeGuard<FRDGScope_RHI> local_480;
  undefined1 local_470;
  TRDGEventScopeGuard<FRDGScope_RHI> local_468;
  undefined1 local_458;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_448;
  TIntRect<int>_u_0 local_438;
  FBinningData local_428;
  FBinningData local_408;
  uint local_3dc;
  undefined4 uStack_3d8;
  uint uStack_3d4;
  undefined8 uStack_3d0;
  FRDGBufferDesc local_3c8;
  undefined1 local_3b0 [8];
  TShaderRefBase<FInitArgs_CS,FShaderMapPointerTable> local_3a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30>_const_*,std::tuple<>_> local_398;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_> local_388;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_> local_378;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_> local_368;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_> local_358;
  FRDGBufferDesc local_348;
  FRDGBufferUAV *local_330;
  FRDGBufferUAV *pFStack_328;
  FShaderParametersMetadata *local_320;
  FRDGBufferDesc local_318;
  FRDGBufferDesc local_300;
  FRDGBufferDesc local_2e8;
  FRDGBufferDesc local_2d0;
  FRDGBufferDesc local_2b8;
  FString local_2a0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_> local_290;
  uint uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  uint uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  uint uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  uint uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  TVector4<float>_u_0 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  uint uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  FRDGEventName local_1b8;
  FRDGBufferDesc local_1a0;
  FBinningData local_188;
  FBinningData local_168;
  FSceneTextureParameters local_148;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_758;
  local_568 = param_2;
  local_560 = param_1;
  FLLMScope::FLLMScope(local_6d0,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_530 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_550,&local_530,true);
  local_538 = '\0';
  cVar2 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((this->GraphBuilder->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_270 = 0;
      uStack_26c = 0;
      ::Desc._12_8_ = ZEXT48(uStack_274);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_Nanite__DrawGeo;
      ::Desc._padding_ = (longlong)u_Nanite__DrawGeo;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x18a9;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```Nanite::FRenderer::DrawGeometry'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar8 = this->GraphBuilder;
    local_290._Myfirst._Val = &::Desc;
    local_548.State = (FRDGScopeState *)pFVar8;
    pFVar33 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar8->_padding_,(FRDGScope **)pFVar8);
    ((FState *)&pFVar8->_padding_)->Current = pFVar33;
    local_548.Scope = pFVar33;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
              (&(pFVar33->Impl).Impl,(FRDGScopeState *)pFVar8,&local_290);
    if (*(bool *)((longlong)&pFVar8->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_,false);
      FRDGScope::BeginGPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_);
    }
    local_538 = '\x01';
  }
  this->bMultiView = param_5 != 1;
  bVar22 = FStreamingManager::IsSafeForRendering((FStreamingManager *)&GStreamingManager);
  if ((!bVar22) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Nanite::GStreamingManager.IsSafeForRendering()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x18ae,L""), bVar22)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (param_6 == (FSceneInstanceCullingQuery *)0x0) {
    if ((param_8 != (FExplicitChunkDrawInfo *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(SceneInstanceCullingQuery == nullptr && InOptionalExplicitChunkDrawInfo != nullptr)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                            ,0x18b2,L""), bVar22)) goto code_r0x000144f93212;
  }
  else if ((param_7 != (TArrayView<Nanite::FInstanceDraw_const_,int> *)0x0) &&
          (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                              ("!(SceneInstanceCullingQuery != nullptr && OptionalInstanceDraws != nullptr)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                               ,0x18b0,L""), bVar22)) {
code_r0x000144f93212:
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (((this->DrawPassIndex != 0) && ((this->Configuration).bSupportsMultiplePasses == 0)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("DrawPassIndex == 0 || Configuration.bSupportsMultiplePasses",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x18b4,L""), bVar22)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (((this->VirtualShadowMapArray != (FVirtualShadowMapArray *)0x0) && (this->bMultiView == false)
      ) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("!IsUsingVirtualShadowMap() || bMultiView",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                ,0x18b6,L""), bVar22)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  bVar22 = UseNaniteTessellation();
  if ((bVar22) && ((this->RenderFlags & 1) == 0)) {
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  this->ViewsBuffer = param_3;
  this->ExplicitChunkDrawInfo = param_8;
  if (param_7 == (TArrayView<Nanite::FInstanceDraw_const_,int> *)0x0) {
    uVar29 = FGPUScene::GetInstanceIdUpperBoundGPU(&this->Scene->GPUScene);
  }
  else {
    iVar30 = param_7->ArrayNum;
    iVar28 = 1;
    if (iVar30 != 0) {
      iVar28 = iVar30;
    }
    uVar54 = (ulonglong)(iVar28 - 1) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar54 != 0) {
      for (; uVar54 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_570 = (undefined4)lVar15;
    pFVar34 = CreateStructuredBuffer
                        (this->GraphBuilder,L"Nanite.InstanceDraws",8,1 << ((byte)lVar15 & 0x1f),
                         param_7->DataPtr,(longlong)iVar30 << 3,None);
    this->InstanceDrawsBuffer = pFVar34;
    uVar29 = param_7->ArrayNum;
  }
  TVar53 = (TVector2<float>_u_0)0x0;
  this->NumInstancesPreCull = uVar29;
  local_4e8.Buffer = this->ViewsBuffer;
  local_4e8._padding_._4_4_ = 0;
  local_4e8._padding_._0_4_ = 0xffffffff;
  local_4e8._padding_ = 0;
  local_4e8._padding_._0_1_ = 0;
  if ((((local_4e8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_4e8._padding_._0_1_ = 0x1c;
  }
  pFVar35 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_4e8);
  (this->CullingParameters).InViews = pFVar35;
  pFVar36 = this->PrevHZB;
  (this->CullingParameters).NumViews = param_5;
  if (pFVar36 == (FRDGTexture *)0x0) {
    pFVar36 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,this->GraphBuilder)
    ;
  }
  (this->CullingParameters).HZBTexture = pFVar36;
  if (this->PrevHZB == (FRDGTexture *)0x0) {
    local_670 = 0;
    TVar41 = TVar53;
  }
  else {
    uVar9 = *(undefined8 *)&(this->PrevHZB->Desc).field_0x24;
    local_678 = (float)(int)uVar9;
    fStack_674 = (float)(int)((ulonglong)uVar9 >> 0x20);
    TVar41._s_0.Y = fStack_674;
    TVar41._s_0.X = local_678;
  }
  uVar9 = *(undefined8 *)&(this->PageConstants).field0_0x0;
  uVar17 = *(undefined8 *)((longlong)&(this->PageConstants).field0_0x0 + 8);
  (this->CullingParameters).HZBSize.field0_0x0 = TVar41;
  TVar18 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
  *(undefined8 *)&(this->CullingParameters).PageConstants.field0_0x0 = uVar9;
  *(undefined8 *)((longlong)&(this->CullingParameters).PageConstants.field0_0x0 + 8) = uVar17;
  (this->CullingParameters).HZBSampler = TVar18.Reference;
  uVar29 = FGlobalResources::GetMaxCandidateClusters();
  (this->CullingParameters).MaxCandidateClusters = uVar29;
  uVar29 = FGlobalResources::GetMaxVisibleClusters();
  pFVar10 = this->VirtualShadowMapArray;
  (this->CullingParameters).MaxVisibleClusters = uVar29;
  (this->CullingParameters).RenderFlags = this->RenderFlags;
  (this->CullingParameters).DebugFlags = this->DebugFlags;
  if (pFVar10 != (FVirtualShadowMapArray *)0x0) {
    iVar30 = (pFVar10->CachedUniformBuffers).ArrayNum;
    TVar41 = TVar53;
    if (iVar30 != 0) {
      uVar29 = iVar30 - 1U;
      if (0 < (int)(iVar30 - 1U)) {
        uVar29 = 0;
      }
      uVar31 = 0;
      if ((int)uVar29 < iVar30) {
        uVar31 = ~uVar29 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      TVar41 = *(TVector2<float>_u_0 *)
                ((pFVar10->CachedUniformBuffers).AllocatorInstance.Data + (longlong)(int)uVar29 * 8)
      ;
    }
    pFVar37 = FVirtualShadowMapUniformParameters::GetStructMetadata();
    EVar23 = Static;
    if (pFVar37->BindingFlags != StaticAndShader) {
      EVar23 = pFVar37->BindingFlags;
    }
    uStack_6f0 = CONCAT31(uStack_6f0._1_3_,EVar23);
    pFVar10 = this->VirtualShadowMapArray;
    *(TVector2<float>_u_0 *)&(this->VirtualTargetParameters).VirtualShadowMap = TVar41;
    *(ulonglong *)&(this->VirtualTargetParameters).VirtualShadowMap.field_0x8 =
         CONCAT44(uStack_6ec,uStack_6f0);
    pFVar36 = pFVar10->PageTableRDG;
    pFVar34 = pFVar10->UncachedPageRectBoundsRDG;
    pFVar38 = pFVar10->PageFlagsRDG;
    if (this->PrevHZB != (FRDGTexture *)0x0) {
      if ((pFVar10->CacheManager == (FVirtualShadowMapArrayCacheManager *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("VirtualShadowMapArray->CacheManager",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                              ,0x18e8,L""), bVar24)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar11 = this->VirtualShadowMapArray->CacheManager;
      pFVar36 = FRDGBuilder::RegisterExternalTexture
                          (this->GraphBuilder,&(pFVar11->PrevBuffers).PageTable,
                           L"Shadow.Virtual.HZBPageTable",None);
      pFVar34 = FRDGBuilder::RegisterExternalBuffer
                          (this->GraphBuilder,&(pFVar11->PrevBuffers).UncachedPageRectBounds,
                           L"Shadow.Virtual.HZBPageRectBounds",None);
      pFVar38 = FRDGBuilder::RegisterExternalTexture
                          (this->GraphBuilder,&(pFVar11->PrevBuffers).PageFlags,
                           L"Shadow.Virtual.HZBPageFlags",None);
    }
    pFVar39 = this->PrevHZB;
    if (pFVar39 == (FRDGTexture *)0x0) {
      pFVar39 = FSystemTextures::GetBlackArrayDummy
                          ((FSystemTextures *)&GSystemTextures,this->GraphBuilder);
    }
    pFVar8 = this->GraphBuilder;
    (this->CullingParameters).HZBTextureArray = pFVar39;
    (this->VirtualTargetParameters).HZBPageTable = pFVar36;
    local_508._padding_._4_4_ = 0;
    local_508._padding_._0_4_ = 0xffffffff;
    local_508._padding_ = 0;
    local_508._padding_._0_1_ = 0;
    if (((pFVar34->Desc).Usage & DrawIndirect) != None) {
      local_508._padding_._0_1_ = 0x1c;
    }
    local_508.Buffer = pFVar34;
    pFVar35 = FRDGBuilder::CreateSRV(pFVar8,&local_508);
    (this->VirtualTargetParameters).HZBPageRectBounds = pFVar35;
    pFVar10 = this->VirtualShadowMapArray;
    (this->VirtualTargetParameters).HZBPageFlags = pFVar38;
    local_600.Buffer = pFVar10->DirtyPageFlagsRDG;
    bVar25 = 0;
    local_600._padding_._2_1_ = 0;
    if ((((local_600.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar25 = 0x1c;
    }
    local_600._padding_._0_2_ = (ushort)bVar25;
    pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_600,SkipBarrier);
    (this->VirtualTargetParameters).OutDirtyPageFlags = pFVar40;
  }
  FInstanceHierarchyDriver::Init
            (&this->InstanceHierarchyDriver,this->GraphBuilder,true,
             (this->Configuration).bTwoPassOcclusion,this->SharedContext->ShaderMap,param_6,param_4)
  ;
  local_f8 = 0;
  uStack_f0 = 0;
  local_68 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_60 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (((this->DebugFlags != 0) || ((this->RenderFlags & 0x8000) != 0)) &&
     ((this->InstanceHierarchyDriver).bIsEnabled == false)) {
    local_e8 = (ulonglong)this->NumInstancesPreCull << 0x20;
  }
  local_660.Buffer =
       CreateStructuredBuffer(this->GraphBuilder,L"Nanite.StatsBuffer",0x9c,1,&local_f8,0x9c,None);
  this->StatsBuffer = local_660.Buffer;
  local_660._padding_._2_1_ = 0;
  bVar25 = 0;
  if ((((local_660.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar25 = 0x1c;
  }
  local_660._padding_._0_2_ = (ushort)bVar25;
  pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_660,SkipBarrier);
  pFVar8 = this->GraphBuilder;
  this->StatsBufferSkipBarrierUAV = pFVar40;
  TVar41 = (TVector2<float>_u_0)FMemStackBase::Alloc((FMemStackBase *)&pFVar8->_padding_,0x40,0x10);
  if (TVar41 == (TVector2<float>_u_0)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    TVar41 = TVar53;
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  else {
    *(undefined8 *)((longlong)TVar41 + 0x18) = 0;
    *(undefined ***)TVar41 = &___7__TObject_VFParameters_FInitArgs_CS___FRDGAllocator__6B_;
    *(undefined8 *)((longlong)TVar41 + 0x20) = 0;
    *(undefined8 *)((longlong)TVar41 + 0x28) = 0;
    *(undefined8 *)((longlong)TVar41 + 0x30) = 0;
    *(undefined8 *)((longlong)TVar41 + 0x38) = 0;
  }
  local_6c8 = TVar41;
  if ((((TVector2<float>_u_0 *)pFVar8->_padding_ <= &local_6c8) &&
      (&local_6c8 <
       (TVector2<float>_u_0 *)pFVar8->_padding_ + *(int *)((longlong)&pFVar8->_padding_ + 4))) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar24)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  iVar30 = (int)pFVar8->_padding_;
  piVar52 = (int *)((longlong)&pFVar8->_padding_ + 4);
  if (iVar30 == *piVar52) {
    iVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar8->_padding_,piVar52);
  }
  *(int *)&pFVar8->_padding_ = iVar30 + 1;
                    /* WARNING: Store size is inaccurate */
  *(TVector2<float>_u_0 *)((TVector2<float>_u_0 *)(pFVar8->_padding_ + (longlong)iVar30 * 8))->XY =
       local_6c8;
  ((FParameters *)((longlong)TVar41 + 0x10))->RenderFlags = (this->CullingParameters).RenderFlags;
  local_5f0.Buffer = this->QueueState;
  bVar25 = 0;
  local_5f0._padding_._2_1_ = 0;
  if ((((local_5f0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar25 = 0x1c;
  }
  local_5f0._padding_._0_2_ = (ushort)bVar25;
  pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_5f0,None);
  *(FRDGBufferUAV **)((longlong)TVar41 + 0x18) = pFVar40;
  local_5e0.Buffer = this->MainRasterizeArgsSWHW;
  bVar25 = 0;
  local_5e0._padding_._2_1_ = 0;
  if ((((local_5e0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar25 = 0x1c;
  }
  local_5e0._padding_._0_2_ = (ushort)bVar25;
  pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_5e0,None);
  *(FRDGBufferUAV **)((longlong)TVar41 + 0x28) = pFVar40;
  uVar29 = 2;
  if (this->DrawPassIndex < 2) {
    uVar29 = this->DrawPassIndex;
  }
  if ((this->Configuration).bTwoPassOcclusion != 0) {
    local_5d0.Buffer = this->OccludedInstancesArgs;
    bVar25 = 0;
    local_5d0._padding_._2_1_ = 0;
    if ((((local_5d0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar25 = 0x1c;
    }
    local_5d0._padding_._0_2_ = (ushort)bVar25;
    pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_5d0,None);
    *(FRDGBufferUAV **)((longlong)TVar41 + 0x30) = pFVar40;
    local_5c0.Buffer = this->PostRasterizeArgsSWHW;
    bVar25 = 0;
    local_5c0._padding_._2_1_ = 0;
    if ((((local_5c0.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar25 = 0x1c;
    }
    local_5c0._padding_._0_2_ = (ushort)bVar25;
    pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_5c0,None);
    *(FRDGBufferUAV **)((longlong)TVar41 + 0x38) = pFVar40;
  }
  if (this->DrawPassIndex == 0) {
LAB_144f939c7:
    if ((this->RenderFlags & 0x2000) == 0) {
      pFVar40 = *(FRDGBufferUAV **)((longlong)TVar41 + 0x18);
      goto LAB_144f93a1c;
    }
  }
  else if ((this->RenderFlags & 0x2000) == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("DrawPassIndex == 0 || RenderFlags & 0x2000",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                        ,0x1915,L"");
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    goto LAB_144f939c7;
  }
  local_5b0.Buffer = this->TotalPrevDrawClustersBuffer;
  bVar25 = 0;
  local_5b0._padding_._2_1_ = 0;
  if ((((local_5b0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar25 = 0x1c;
  }
  local_5b0._padding_._0_2_ = (ushort)bVar25;
  pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_5b0,None);
LAB_144f93a1c:
  *(FRDGBufferUAV **)((longlong)TVar41 + 0x20) = pFVar40;
  this_00 = this->SharedContext->ShaderMap;
  if ((2 < uVar29) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationId < PermutationCount && PermutationId >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                          ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar24)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pFVar42 = (FShaderType *)FInitArgs_CS::GetStaticType();
  FGlobalShaderMap::GetShader
            (this_00,&local_448,pFVar42,(this->Configuration).bTwoPassOcclusion + uVar29 * 2);
  if (local_448.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3b0);
    ::FName::ToString((FName *)this_01,&local_2a0);
    FInitArgs_CS::GetStaticType();
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    if (bVar24) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  FInitArgs_CS::GetStaticType();
  local_3a8.ShaderContent = (FInitArgs_CS *)local_448.ShaderContent;
  local_3a8.ShaderMap = local_448.ShaderMap;
  pFVar43 = FRDGEventName::FRDGEventName(&local_1b8,1,L"InitArgs");
  pFVar8 = this->GraphBuilder;
  pFVar37 = FInitArgs_CS::FParameters::FTypeInfo::GetStructMetadata();
  local_598._s_0.X = 1;
  local_598._s_0.Y = 1;
  local_598._s_0.Z = 1;
  FComputeShaderUtils::AddPass<FInitArgs_CS>
            (pFVar8,pFVar43,Compute,&local_3a8,pFVar37,(FParameters *)((longlong)TVar41 + 0x10),
             (TIntVector3<int> *)&local_598._s_0);
  if (local_1b8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  uVar29 = FGlobalResources::GetMaxNodes();
  uVar31 = FGlobalResources::GetCandidateNodeSize(false);
  uVar32 = FGlobalResources::GetCandidateNodeSize(true);
  uVar29 = (uVar31 + uVar32) * uVar29;
  if (((uVar29 & 3) != 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBytes % 4 == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                          ,0x3af,L""), bVar24)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pTVar21 = CVarNanitePersistentThreadsCulling.Ref;
  local_588._12_4_ = uStack_6ec;
  local_588.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_588.BytesPerElement = 4;
  local_588.NumElements = uVar29 >> 2;
  local_588.Metadata = (FShaderParametersMetadata *)0x0;
  bVar24 = IsInParallelRenderingThread();
  if ((!bVar24) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  uVar9 = GGlobalResources._72_8_;
  if (pTVar21->ShadowedValue[1] == 0) {
    if (GGlobalResources._72_8_ != 0) {
      GGlobalResources._72_8_ = 0;
      FRefCountBase::Release((FRefCountBase *)uVar9);
    }
    uVar9 = GGlobalResources._80_8_;
    if (GGlobalResources._80_8_ != 0) {
      GGlobalResources._80_8_ = 0;
      piVar52 = (int *)(uVar9 + 8);
      LOCK();
      iVar30 = *piVar52;
      *piVar52 = *piVar52 + -1;
      UNLOCK();
      if (((iVar30 == 1) && (piVar52 != (int *)0x0)) && (uVar9 != 0)) {
        (*(code *)**(undefined8 **)uVar9)(uVar9,1);
      }
    }
    pFVar34 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_588,L"Nanite.CandidatesNodesBuffer",None);
    this->CandidateNodesBuffer = pFVar34;
  }
  else {
    pFVar8 = this->GraphBuilder;
    if (((GGlobalResources._72_8_ == 0) ||
        (*(uint *)(GGlobalResources._72_8_ + 0x10) != local_588.BytesPerElement)) ||
       ((*(uint *)(GGlobalResources._72_8_ + 0x14) != local_588.NumElements ||
        (*(EBufferUsageFlags *)(GGlobalResources._72_8_ + 0x18) != local_588.Usage)))) {
      pFVar12 = (FRHIComputeCommandList *)pFVar8->_padding_;
      FVar5.GPUMask = *(uint *)&pFVar12->field_0x29c;
      FRHIComputeCommandList::SetGPUMask
                (pFVar12,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
      pFVar34 = FRDGBuilder::CreateBuffer(pFVar8,&local_588,L"Nanite.CandidatesNodesBuffer",None);
      pTVar45 = FRDGBuilder::ConvertToExternalBuffer(pFVar8,pFVar34);
      uVar9 = GGlobalResources._72_8_;
      pFVar13 = pTVar45->Reference;
      if ((FRDGPooledBuffer *)GGlobalResources._72_8_ != pFVar13) {
        GGlobalResources._72_8_ = pFVar13;
        if (pFVar13 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
          UNLOCK();
        }
        if (uVar9 != 0) {
          FRefCountBase::Release((FRefCountBase *)uVar9);
        }
      }
      local_688._padding_._2_1_ = 0;
      bVar25 = 0;
      if (((pFVar34->Desc).Usage & DrawIndirect) != None) {
        bVar25 = 0x1c;
      }
      local_688._padding_._0_2_ = (ushort)bVar25;
      local_688.Buffer = pFVar34;
      pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_688,None);
      AddClearUAVPass(this->GraphBuilder,pFVar40,0xffffffff,Compute);
      FRHIComputeCommandList::SetGPUMask(pFVar12,FVar5);
    }
    else {
      pFVar34 = FRDGBuilder::RegisterExternalBuffer
                          (pFVar8,(TRefCountPtr<FRDGPooledBuffer> *)&GGlobalResources.field_0x48,
                           L"Nanite.CandidatesNodesBuffer",None);
    }
    this->CandidateNodesBuffer = pFVar34;
    uVar29 = FGlobalResources::GetMaxClusterBatches();
    pFVar44 = FRDGBufferDesc::CreateByteAddressDesc(&local_1a0,uVar29 << 3);
    pFVar8 = this->GraphBuilder;
    local_348.Metadata = pFVar44->Metadata;
    local_348.BytesPerElement = pFVar44->BytesPerElement;
    local_348.NumElements = pFVar44->NumElements;
    local_348.Usage = pFVar44->Usage;
    local_348._12_4_ = *(undefined4 *)&pFVar44->field_0xc;
    if (((GGlobalResources._80_8_ == 0) ||
        (*(uint *)(GGlobalResources._80_8_ + 0x10) != local_348.BytesPerElement)) ||
       ((*(uint *)(GGlobalResources._80_8_ + 0x14) != local_348.NumElements ||
        (*(EBufferUsageFlags *)(GGlobalResources._80_8_ + 0x18) != local_348.Usage)))) {
      pFVar12 = (FRHIComputeCommandList *)pFVar8->_padding_;
      FVar5.GPUMask = *(uint *)&pFVar12->field_0x29c;
      FRHIComputeCommandList::SetGPUMask
                (pFVar12,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
      pFVar34 = FRDGBuilder::CreateBuffer(pFVar8,&local_348,L"Nanite.ClusterBatches",None);
      pTVar45 = FRDGBuilder::ConvertToExternalBuffer(pFVar8,pFVar34);
      uVar9 = GGlobalResources._80_8_;
      pFVar13 = pTVar45->Reference;
      if ((FRDGPooledBuffer *)GGlobalResources._80_8_ != pFVar13) {
        GGlobalResources._80_8_ = pFVar13;
        if (pFVar13 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar13->_padding_ = (int)pFVar13->_padding_ + 1;
          UNLOCK();
        }
        if (uVar9 != 0) {
          FRefCountBase::Release((FRefCountBase *)uVar9);
        }
      }
      local_650._padding_._2_1_ = 0;
      bVar25 = 0;
      if (((pFVar34->Desc).Usage & DrawIndirect) != None) {
        bVar25 = 0x1c;
      }
      local_650._padding_._0_2_ = (ushort)bVar25;
      local_650.Buffer = pFVar34;
      pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_650,None);
      AddClearUAVPass(this->GraphBuilder,pFVar40,0,Compute);
      FRHIComputeCommandList::SetGPUMask(pFVar12,FVar5);
      this->ClusterBatchesBuffer = pFVar34;
    }
    else {
      pFVar34 = FRDGBuilder::RegisterExternalBuffer
                          (pFVar8,(TRefCountPtr<FRDGPooledBuffer> *)&GGlobalResources.field_0x50,
                           L"Nanite.ClusterBatches",None);
      this->ClusterBatchesBuffer = pFVar34;
    }
  }
  uVar29 = FGlobalResources::GetCandidateClusterSize();
  if (((uVar29 - 8 & 0xfffffffb) != 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("CandidateClusterSize == 8",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x195b,L""), bVar24)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pFVar8 = this->GraphBuilder;
  uVar31 = FGlobalResources::GetMaxCandidateClusters();
  if (((uVar31 * uVar29 & 3) != 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBytes % 4 == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                          ,0x3af,L""), bVar24)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  local_6b8.StateBuffer =
       (FRDGBufferUAV *)
       CONCAT44(local_6b8.StateBuffer._4_4_,
                StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static);
  local_6b8.DataBuffer = (FRDGBufferUAV *)CONCAT44(uVar31 * uVar29 >> 2,4);
  local_6a8 = 0;
  local_330 = local_6b8.DataBuffer;
  pFStack_328 = local_6b8.StateBuffer;
  local_320 = (FShaderParametersMetadata *)0x0;
  pFVar34 = FRDGBuilder::CreateBuffer
                      (pFVar8,(FRDGBufferDesc *)&local_330,L"Nanite.CandidateClustersBuffer",None);
  this->CandidateClustersBuffer = pFVar34;
  local_698.DataBuffer = (FRDGBufferUAV *)0x0;
  local_698.StateBuffer = (FRDGBufferUAV *)0x0;
  local_6b8.DataBuffer = (FRDGBufferUAV *)0x0;
  local_6b8.StateBuffer = (FRDGBufferUAV *)0x0;
  local_6d8 = (TVector2<float>_u_0)0x0;
  local_668 = (FRDGBuffer *)0x0;
  local_6f8 = (FRDGBuffer *)0x0;
  if (bVar22) {
    uVar29 = FGlobalResources::GetMaxCandidatePatches();
    local_3c8._12_4_ = uStack_6ec;
    local_3c8.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    local_3c8.Metadata = (FShaderParametersMetadata *)0x0;
    local_3c8.BytesPerElement = 4;
    local_3c8.NumElements = (uVar29 & 0xfffffff) << 2;
    uVar29 = FGlobalResources::GetMaxVisiblePatches();
    local_2e8._12_4_ = uStack_6ec;
    local_2e8.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    local_2e8.Metadata = (FShaderParametersMetadata *)0x0;
    local_2e8.BytesPerElement = 4;
    local_2e8.NumElements = (uVar29 & 0xfffffff) << 2;
    pFVar34 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_3c8,L"Nanite.SplitWorkQueue.DataBuffer",None);
    pFVar46 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_3c8,L"Nanite.OccludedPatches.DataBuffer",None);
    local_318._12_4_ = uStack_6ec;
    local_318.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_318.BytesPerElement = 0xc;
    local_318.NumElements = 1;
    local_318.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar47 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_318,L"Nanite.SplitWorkQueue.StateBuffer",None);
    local_300._12_4_ = uStack_6ec;
    local_300.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_300.BytesPerElement = 0xc;
    local_300.NumElements = 1;
    local_300.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar48 = FRDGBuilder::CreateBuffer
                        (this->GraphBuilder,&local_300,L"Nanite.OccludedPatches.StateBuffer",None);
    local_640._padding_._2_1_ = 0;
    bVar25 = 0;
    if (((pFVar34->Desc).Usage & DrawIndirect) != None) {
      bVar25 = 0x1c;
    }
    local_640._padding_._0_2_ = (ushort)bVar25;
    local_640.Buffer = pFVar34;
    local_698.DataBuffer = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_640,None);
    bVar25 = 0;
    local_630._padding_._2_1_ = 0;
    if (((pFVar47->Desc).Usage & DrawIndirect) != None) {
      bVar25 = 0x1c;
    }
    local_630._padding_._0_2_ = (ushort)bVar25;
    local_630.Buffer = pFVar47;
    local_698.StateBuffer = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_630,None);
    bVar25 = 0;
    local_620._padding_._2_1_ = 0;
    if (((pFVar46->Desc).Usage & DrawIndirect) != None) {
      bVar25 = 0x1c;
    }
    local_620._padding_._0_2_ = (ushort)bVar25;
    local_620.Buffer = pFVar46;
    local_6b8.DataBuffer = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_620,None);
    bVar25 = 0;
    local_610._padding_._2_1_ = 0;
    if (((pFVar48->Desc).Usage & DrawIndirect) != None) {
      bVar25 = 0x1c;
    }
    local_610._padding_._0_2_ = (ushort)bVar25;
    local_610.Buffer = pFVar48;
    pFVar40 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_610,None);
    local_6b8.StateBuffer = pFVar40;
    AddClearUAVPass(this->GraphBuilder,local_698.StateBuffer,0,Compute);
    AddClearUAVPass(this->GraphBuilder,pFVar40,0,Compute);
    local_6d8 = (TVector2<float>_u_0)
                FRDGBuilder::CreateBuffer
                          (this->GraphBuilder,&local_2e8,L"Nanite.VisiblePatches",None);
    local_2d0._12_4_ = uStack_6ec;
    local_2d0.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    local_2d0.BytesPerElement = 4;
    local_2d0.NumElements = 4;
    local_2d0.Metadata = (FShaderParametersMetadata *)0x0;
    local_668 = FRDGBuilder::CreateBuffer
                          (this->GraphBuilder,&local_2d0,L"Nanite.VisiblePatchesMainArgs",None);
    local_2b8._12_4_ = uStack_6ec;
    local_2b8.Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
    local_2b8.BytesPerElement = 4;
    local_2b8.NumElements = 4;
    local_2b8.Metadata = (FShaderParametersMetadata *)0x0;
    local_6f8 = FRDGBuilder::CreateBuffer
                          (this->GraphBuilder,&local_2b8,L"Nanite.VisiblePatchesPostArgs",None);
  }
  pFVar34 = (FRDGBuffer *)local_6d8;
  AddPass_PrimitiveFilter(this);
  local_408._0_8_ = (ulonglong)(uint)local_408._4_4_ << 0x20;
  local_408.DataBuffer = (FRDGBuffer *)0x0;
  local_408.MetaBuffer = (FRDGBuffer *)0x0;
  local_408.IndirectArgs = (FRDGBuffer *)0x0;
  local_428._0_8_ = (ulonglong)(uint)local_428._4_4_ << 0x20;
  local_428.DataBuffer = (FRDGBuffer *)0x0;
  local_428.MetaBuffer = (FRDGBuffer *)0x0;
  local_428.IndirectArgs = (FRDGBuffer *)0x0;
  pFVar49 = FRDGAllocator::Alloc<Nanite::FRenderer::FDispatchContext>
                      ((FRDGAllocator *)&this->GraphBuilder->_padding_);
  bVar22 = this->RasterContext->bCustomPass;
  TVar7 = *(Type *)&this->Scene->field_0x8;
  EVar4 = this->SharedContext->Pipeline;
  EVar27 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
  EVar26 = GetRasterHardwarePath(EVar27,EVar4);
  PrepareRasterizerPasses
            (this,pFVar49,EVar26,TVar7,local_560,local_568,bVar22,
             (&this->Configuration)->bIsLumenCapture);
  pFVar8 = this->GraphBuilder;
  TVar41 = (TVector2<float>_u_0)FMemStackBase::Alloc((FMemStackBase *)&pFVar8->_padding_,0x40,0x10);
  if (TVar41 == (TVector2<float>_u_0)0x0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar22) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  else {
    *(undefined ***)TVar41 = &___7__TObject_VFNaniteRasterUniformParameters___FRDGAllocator__6B_;
    TVar53 = TVar41;
  }
  local_6c0 = TVar53;
  if ((((TVector2<float>_u_0 *)pFVar8->_padding_ <= &local_6c0) &&
      (&local_6c0 <
       (TVector2<float>_u_0 *)pFVar8->_padding_ + *(int *)((longlong)&pFVar8->_padding_ + 4))) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar22)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  iVar30 = (int)pFVar8->_padding_;
  piVar52 = (int *)((longlong)&pFVar8->_padding_ + 4);
  if (iVar30 == *piVar52) {
    iVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar8->_padding_,piVar52);
  }
  *(int *)&pFVar8->_padding_ = iVar30 + 1;
                    /* WARNING: Store size is inaccurate */
  *(TVector2<float>_u_0 *)((TVector2<float>_u_0 *)(pFVar8->_padding_ + (longlong)iVar30 * 8))->XY =
       local_6c0;
  uVar9 = *(undefined8 *)((longlong)&(this->PageConstants).field0_0x0 + 8);
  *(undefined8 *)((longlong)TVar53 + 0x10) = *(undefined8 *)&(this->PageConstants).field0_0x0;
  *(undefined8 *)((longlong)TVar53 + 0x18) = uVar9;
  uVar29 = FGlobalResources::GetMaxNodes();
  *(uint *)((longlong)TVar53 + 0x20) = uVar29;
  uVar29 = FGlobalResources::GetMaxVisibleClusters();
  *(uint *)((longlong)TVar53 + 0x24) = uVar29;
  uVar29 = FGlobalResources::GetMaxCandidatePatches();
  *(uint *)((longlong)TVar53 + 0x28) = uVar29;
  pTVar19 = CVarNaniteMaxPixelsPerEdge.Ref;
  bVar22 = IsInParallelRenderingThread();
  if ((!bVar22) &&
     (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pTVar20 = CVarNaniteDicingRate.Ref;
  fVar1 = pTVar19->ShadowedValue[1];
  bVar22 = IsInParallelRenderingThread();
  if ((!bVar22) &&
     (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  *(float *)((longlong)TVar53 + 0x34) = fVar1 / pTVar20->ShadowedValue[1];
  uVar29 = GetMaxPatchesPerGroup();
  *(uint *)((longlong)TVar53 + 0x2c) = uVar29;
  uVar29 = (&this->Configuration)->bIsLumenCapture;
  if ((&this->Configuration)->bIsMaterialCache != 0) {
    uVar29 = 2;
  }
  *(uint *)((longlong)TVar53 + 0x30) = uVar29;
  *(uint *)((longlong)TVar53 + 0x38) = this->RenderFlags;
  *(uint *)((longlong)TVar53 + 0x3c) = this->DebugFlags;
  pFVar8 = this->GraphBuilder;
  pFVar37 = FNaniteRasterUniformParameters::GetStructMetadata();
  FRDGUserValidation::ValidateCreateUniformBuffer
            (&pFVar8->UserValidation,(undefined8 *)((longlong)TVar53 + 0x10),pFVar37);
  pFVar37 = FNaniteRasterUniformParameters::GetStructMetadata();
  pwVar14 = pFVar37->ShaderVariableName;
  pTVar50 = FMemStackBase::Alloc((FMemStackBase *)&pFVar8->_padding_,0x50,8);
  pTVar50 = TRDGUniformBuffer<FNaniteRasterUniformParameters>::
            TRDGUniformBuffer<FNaniteRasterUniformParameters>
                      (pTVar50,(FNaniteRasterUniformParameters *)((longlong)TVar53 + 0x10),pwVar14);
  piVar52 = &(pFVar8->UniformBuffers).Array.ArrayMax;
  iVar30 = (pFVar8->UniformBuffers).Array.ArrayNum;
  if (iVar30 == *piVar52) {
    iVar30 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
                       (0x808,(ForElementType<FRDGUniformBuffer_*> *)&pFVar8->UniformBuffers,piVar52
                       );
  }
  (pFVar8->UniformBuffers).Array.ArrayNum = iVar30 + 1;
  (pFVar8->UniformBuffers).Array.AllocatorInstance.Data[iVar30] = (FRDGUniformBuffer *)pTVar50;
  *(int *)&pTVar50->_padding_ = (pFVar8->UniformBuffers).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUniformBuffer
            (&pFVar8->UserValidation,(FRDGUniformBuffer *)pTVar50);
  uVar54 = (ulonglong)_tls_index;
  bVar22 = false;
  pFVar49->RasterUniformBuffer = pTVar50;
  local_458 = 0;
  if ((this->Configuration).bTwoPassOcclusion == 0) {
    cVar2 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((this->GraphBuilder->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar54 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x19aa;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_250 = 0;
        uStack_24c = 0;
        ::Desc._12_8_ = ZEXT48(uStack_254);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_NoOcclusionPass;
        ::Desc._padding_ = (longlong)u_NoOcclusionPass;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```Nanite::FRenderer::DrawGeometry'::__l127::<lambda_4>::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar8 = this->GraphBuilder;
      local_358._Myfirst._Val = &::Desc;
      local_468.State = (FRDGScopeState *)pFVar8;
      pFVar33 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar8->_padding_,(FRDGScope **)pFVar8);
      ((FState *)&pFVar8->_padding_)->Current = pFVar33;
      local_468.Scope = pFVar33;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_>_>
                (&(pFVar33->Impl).Impl,(FRDGScopeState *)pFVar8,&local_358);
      if (*(bool *)((longlong)&pFVar8->_padding_ + 4) != false) {
        FRDGScope::BeginCPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_,false);
        FRDGScope::BeginGPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_);
      }
      bVar22 = true;
      local_458 = 1;
    }
  }
  bVar24 = false;
  local_470 = 0;
  if ((this->Configuration).bTwoPassOcclusion != 0) {
    cVar2 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
    if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((this->GraphBuilder->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar54 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x19ab;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_230 = 0;
        uStack_22c = 0;
        ::Desc._12_8_ = ZEXT48(uStack_234);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_MainPass;
        ::Desc._padding_ = (longlong)u_MainPass;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```Nanite::FRenderer::DrawGeometry'[::E]::<lambda_5>::operator()<>'::__l3::<lambda_1>
               ::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar8 = this->GraphBuilder;
      local_368._Myfirst._Val = &::Desc;
      local_480.State = (FRDGScopeState *)pFVar8;
      pFVar33 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar8->_padding_,(FRDGScope **)pFVar8);
      ((FState *)&pFVar8->_padding_)->Current = pFVar33;
      local_480.Scope = pFVar33;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_>_>
                (&(pFVar33->Impl).Impl,(FRDGScopeState *)pFVar8,&local_368);
      if (*(bool *)((longlong)&pFVar8->_padding_ + 4) != false) {
        FRDGScope::BeginCPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_,false);
        FRDGScope::BeginGPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_);
      }
      local_470 = 1;
      bVar24 = true;
    }
  }
  AddPass_InstanceHierarchyAndClusterCull(this,(this->Configuration).bTwoPassOcclusion);
  pFVar51 = AddPass_Rasterize(this,&local_188,pFVar49,this->SafeMainRasterizeArgsSWHW,
                              (FRDGBuffer *)local_6d8,local_668,&local_698,&local_6b8,true);
  local_408.BinCount = pFVar51->BinCount;
  local_408._4_4_ = *(undefined4 *)&pFVar51->field_0x4;
  local_408.DataBuffer = pFVar51->DataBuffer;
  local_408.MetaBuffer = pFVar51->MetaBuffer;
  local_408.IndirectArgs = pFVar51->IndirectArgs;
  if (bVar24) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_480);
  }
  if (bVar22) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_468);
  }
  if ((this->Configuration).bTwoPassOcclusion != 0) {
    pFVar8 = this->GraphBuilder;
    bVar22 = false;
    cVar2 = *(char *)((longlong)&pFVar8->_padding_ + 6);
    if (this->VirtualShadowMapArray == (FVirtualShadowMapArray *)0x0) {
      local_488 = 0;
      if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((pFVar8->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar54 * 8) + 0x9d4c) <
             ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_._0_4_ = 0x19cb;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          uStack_3d8 = 0;
          uStack_3d4 = 0;
          ::Desc._12_8_ = ZEXT48(local_3dc);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_BuildPreviousOc;
          ::Desc._padding_ = (longlong)u_BuildPreviousOc;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```Nanite::FRenderer::DrawGeometry'::__l150::<lambda_7>::operator()<>'::__l3::
                 <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        pFVar8 = this->GraphBuilder;
        local_388._Myfirst._Val = &::Desc;
        local_498.State = (FRDGScopeState *)pFVar8;
        pFVar33 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&pFVar8->_padding_,(FRDGScope **)pFVar8);
        ((FState *)&pFVar8->_padding_)->Current = pFVar33;
        local_498.Scope = pFVar33;
        TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
        Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_>_>
                  (&(pFVar33->Impl).Impl,(FRDGScopeState *)pFVar8,&local_388);
        if (*(bool *)((longlong)&pFVar8->_padding_ + 4) != false) {
          FRDGScope::BeginCPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_,false);
          FRDGScope::BeginGPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_);
        }
        bVar22 = true;
        local_488 = 1;
      }
      GetSceneTextureParameters(&local_148,this->GraphBuilder,this->SceneView);
      pFVar36 = this->RasterContext->VisBuffer64;
      pFVar38 = local_148.SceneDepthTexture;
      if (this->RasterContext->RasterMode == DepthOnly) {
        pFVar38 = FRDGBuilder::RegisterExternalTexture
                            (this->GraphBuilder,
                             (TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x28,None);
        pFVar36 = this->RasterContext->DepthBuffer;
      }
      uVar17 = _UNK_150689538;
      uVar9 = ___xmm_000000003f8000000000000000000000;
      uStack_3d8 = 0;
      uStack_3d4 = uStack_3d4 & 0xffffff00;
      EVar27 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
      local_1e8 = CONCAT44(uStack_3d4,uStack_3d8);
      local_1f8._0_8_ = uVar9;
      local_1f8._8_8_ = uVar17;
      uStack_1e0 = uStack_3d0;
      local_438._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(this->HZBBuildViewRect).field0_0x0._s_0.Min.field0_0x0;
      local_438._s_0.Max.field0_0x0 =
           (TIntPoint<int>)(this->HZBBuildViewRect).field0_0x0._s_0.Max.field0_0x0;
      BuildHZBFurthest(this->GraphBuilder,pFVar38,pFVar36,(TIntRect<int> *)&local_438._s_0,
                       *(Type *)&this->Scene->field_0x8,EVar27,L"Nanite.PreviousOccluderHZB",
                       &local_558,PF_R16F,(FBuildHZBAsyncComputeParams *)0x0,
                       (FExtraParameters *)&local_1f8._s_0);
      (this->CullingParameters).HZBTexture = local_558;
      uVar9 = *(undefined8 *)&(local_558->Desc).field_0x24;
      local_6d8._4_4_ = (float)(int)((ulonglong)uVar9 >> 0x20);
      local_6d8._0_4_ = (float)(int)uVar9;
      (this->CullingParameters).HZBSize.field0_0x0 = local_6d8;
      if (bVar22) {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_498);
      }
    }
    else {
      local_4b8 = 0;
      if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((pFVar8->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar54 * 8) + 0x9d4c) <
             ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_._0_4_ = 0x19c0;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          local_210 = 0;
          uStack_20c = 0;
          ::Desc._12_8_ = ZEXT48(uStack_214);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_BuildPreviousOc;
          ::Desc._padding_ = (longlong)u_BuildPreviousOc;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```Nanite::FRenderer::DrawGeometry'[::P]::<lambda_6>::operator()<>'::__l3::
                 <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        pFVar8 = this->GraphBuilder;
        local_398._Myfirst._Val = &::Desc;
        local_4c8.State = (FRDGScopeState *)pFVar8;
        pFVar33 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&pFVar8->_padding_,(FRDGScope **)pFVar8);
        ((FState *)&pFVar8->_padding_)->Current = pFVar33;
        local_4c8.Scope = pFVar33;
        TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
        Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30>_const_*,std::tuple<>_>_>
                  (&(pFVar33->Impl).Impl,(FRDGScopeState *)pFVar8,&local_398);
        if (*(bool *)((longlong)&pFVar8->_padding_ + 4) != false) {
          FRDGScope::BeginCPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_,false);
          FRDGScope::BeginGPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_);
        }
        bVar22 = true;
        local_4b8 = 1;
      }
      FVirtualShadowMapArray::UpdateHZB(this->VirtualShadowMapArray,this->GraphBuilder);
      pFVar10 = this->VirtualShadowMapArray;
      (this->CullingParameters).HZBTextureArray = pFVar10->HZBPhysicalArrayRDG;
      uVar9 = *(undefined8 *)&(((this->CullingParameters).HZBTexture)->Desc).field_0x24;
      local_6d8._4_4_ = (float)(int)((ulonglong)uVar9 >> 0x20);
      local_6d8._0_4_ = (float)(int)uVar9;
      (this->CullingParameters).HZBSize.field0_0x0 = local_6d8;
      (this->VirtualTargetParameters).HZBPageTable = pFVar10->PageTableRDG;
      local_528.Buffer = pFVar10->UncachedPageRectBoundsRDG;
      local_528._padding_._4_4_ = 0;
      local_528._padding_._0_4_ = 0xffffffff;
      local_528._padding_ = 0;
      local_528._padding_._0_1_ = 0;
      if ((((local_528.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_528._padding_._0_1_ = 0x1c;
      }
      pFVar35 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_528);
      (this->VirtualTargetParameters).HZBPageRectBounds = pFVar35;
      (this->VirtualTargetParameters).HZBPageFlags = this->VirtualShadowMapArray->PageFlagsRDG;
      if (bVar22) {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_4c8);
      }
    }
    local_698.DataBuffer = local_6b8.DataBuffer;
    local_698.StateBuffer = local_6b8.StateBuffer;
    local_4a0 = 0;
    cVar2 = *(char *)((longlong)&this->GraphBuilder->_padding_ + 6);
    if (cVar2 == '\0') {
      bVar22 = false;
    }
    else if ((cVar2 == '\x01') && ((this->GraphBuilder->_padding_ & 4) != 0)) {
      bVar22 = false;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar54 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_1c8 = 0;
        uStack_1c4 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_1cc);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_PostPass;
        ::Desc._padding_ = (longlong)u_PostPass;
        ::Desc._padding_._0_4_ = 0x19ea;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```Nanite::FRenderer::DrawGeometry'::__l158::<lambda_8>::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar8 = this->GraphBuilder;
      local_378._Myfirst._Val = &::Desc;
      local_4b0.State = (FRDGScopeState *)pFVar8;
      pFVar33 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar8->_padding_,(FRDGScope **)pFVar8);
      ((FState *)&pFVar8->_padding_)->Current = pFVar33;
      local_4b0.Scope = pFVar33;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_>_>
                (&(pFVar33->Impl).Impl,(FRDGScopeState *)pFVar8,&local_378);
      if (*(bool *)((longlong)&pFVar8->_padding_ + 4) != false) {
        FRDGScope::BeginCPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_,false);
        FRDGScope::BeginGPU(pFVar33,(FRHIComputeCommandList *)pFVar8->_padding_);
      }
      local_4a0 = 1;
      bVar22 = true;
    }
    AddPass_InstanceHierarchyAndClusterCull(this,2);
    pFVar51 = AddPass_Rasterize(this,&local_168,pFVar49,this->SafePostRasterizeArgsSWHW,pFVar34,
                                local_6f8,&local_698,&local_6b8,false);
    local_428._0_8_ = *(undefined8 *)pFVar51;
    local_428.DataBuffer = pFVar51->DataBuffer;
    local_428.MetaBuffer = pFVar51->MetaBuffer;
    local_428.IndirectArgs = pFVar51->IndirectArgs;
    if (bVar22) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_4b0);
    }
  }
  if (this->RasterContext->RasterMode != DepthOnly) {
    this->DrawPassIndex = this->DrawPassIndex + 1;
    this->RenderFlags = this->RenderFlags | 0x2000;
  }
  if ((this->VirtualShadowMapArray != (FVirtualShadowMapArray *)0x0) &&
     ((&this->Configuration)->bExtractVSMPerformanceFeedback != 0)) {
    ExtractVSMPerformanceFeedback(this);
  }
  if ((&this->Configuration)->bExtractStats != 0) {
    ExtractStats(this,&local_408,&local_428);
  }
  this->RasterBinMetaBuffer = pFVar49->MetaBuffer;
  FeedbackStatus(this);
  if (local_538 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_548);
  }
  FMemScope::~FMemScope(&local_550);
  FLLMScope::~FLLMScope(local_6d0);
  return;
}

// ExtractResults @ 144faae60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall Nanite::FRenderer::ExtractResults(FRenderer *this,FRasterResults *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined8 uVar3;
  TConsoleVariableData<float> *pTVar4;
  TConsoleVariableData<float> *pTVar5;
  bool bVar6;
  uint uVar7;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  uVar3 = *(undefined8 *)((longlong)&(this->PageConstants).field0_0x0 + 8);
  *(undefined8 *)&(param_1->PageConstants).field0_0x0 =
       *(undefined8 *)&(this->PageConstants).field0_0x0;
  *(undefined8 *)((longlong)&(param_1->PageConstants).field0_0x0 + 8) = uVar3;
  uVar7 = FGlobalResources::GetMaxVisibleClusters();
  param_1->MaxVisibleClusters = uVar7;
  uVar7 = FGlobalResources::GetMaxCandidatePatches();
  param_1->MaxCandidatePatches = uVar7;
  uVar7 = FGlobalResources::GetMaxNodes();
  param_1->MaxNodes = uVar7;
  param_1->RenderFlags = this->RenderFlags;
  param_1->DebugFlags = this->DebugFlags;
  pTVar4 = CVarNaniteMaxPixelsPerEdge.Ref;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = CVarNaniteDicingRate.Ref;
  fVar1 = pTVar4->ShadowedValue[1];
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_1->InvDiceRate = fVar1 / pTVar5->ShadowedValue[1];
  uVar7 = GetMaxPatchesPerGroup();
  param_1->MaxPatchesPerGroup = uVar7;
  uVar7 = (&this->Configuration)->bIsLumenCapture;
  if ((&this->Configuration)->bIsMaterialCache != 0) {
    uVar7 = 2;
  }
  param_1->MeshPass = uVar7;
  param_1->ViewsBuffer = this->ViewsBuffer;
  param_1->VisibleClustersSWHW = this->VisibleClustersSWHW;
  param_1->AssemblyTransforms = this->AssemblyTransformsBuffer;
  param_1->AssemblyMeta = this->AssemblyMetaBuffer;
  param_1->VisBuffer64 = this->RasterContext->VisBuffer64;
  param_1->RasterBinMeta = this->RasterBinMetaBuffer;
  if (this->RasterContext->VisualizeActive != false) {
    param_1->DbgBuffer64 = this->RasterContext->DbgBuffer64;
    param_1->DbgBuffer32 = this->RasterContext->DbgBuffer32;
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ExtractStats @ 144fab510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall
Nanite::FRenderer::ExtractStats(FRenderer *this,FBinningData *param_1,FBinningData *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  FRDGBuilder *pFVar3;
  FGlobalShaderMap *pFVar4;
  FVirtualShadowMapArray *pFVar5;
  FRDGBuffer *pFVar6;
  FRDGPooledBuffer *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  FRDGBufferUAV *pFVar14;
  FRDGBufferSRV *pFVar15;
  FShaderType *pFVar16;
  FName FVar17;
  FRDGEventName *pFVar18;
  FShaderParametersMetadata *pFVar19;
  TRefCountPtr<FRDGPooledBuffer> *pTVar20;
  byte bVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined1 auStackY_288 [32];
  FLLMScope local_238 [2];
  undefined8 *local_230;
  undefined8 *local_228;
  FRDGBufferUAVDesc local_220;
  FRDGBufferUAVDesc local_210;
  TIntVector3<int>_u_0 local_1f8;
  FRDGBuffer *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  FName local_1d8;
  FMemScope local_1d0;
  FRDGBufferSRVDesc local_1c8;
  FRDGBufferSRVDesc local_1a8;
  FRDGBufferSRVDesc local_188;
  FRDGBufferSRVDesc local_168;
  FRDGBufferSRVDesc local_148;
  FRDGBufferSRVDesc local_128;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_108;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_f8;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  FString local_d8;
  TShaderRefBase<Nanite::FCalculateRasterStatsCS,FShaderMapPointerTable> local_c8;
  FString local_b8;
  TShaderRefBase<Nanite::FCalculateClusterStatsCS,FShaderMapPointerTable> local_a8;
  FRDGEventName local_98;
  FRDGEventName local_80;
  undefined1 local_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  puVar23 = (undefined8 *)0x0;
  FLLMScope::FLLMScope(local_238,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_1d8 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_1d0,&local_1d8,true);
  if (((this->RenderFlags & 0x8000) != 0) && (this->StatsBuffer != (FRDGBuffer *)0x0)) {
    pFVar3 = this->GraphBuilder;
    puVar13 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x60,0x10);
    if (puVar13 == (undefined8 *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      puVar13 = puVar23;
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      puVar13[4] = 0;
      *puVar13 = &___7__TObject_VFParameters_FCalculateRasterStatsCS_Nanite___FRDGAllocator__6B_;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = 0;
    }
    local_230 = puVar13;
    if ((((undefined8 **)pFVar3->_padding_ <= &local_230) &&
        (&local_230 < (undefined8 **)pFVar3->_padding_ + *(int *)((longlong)&pFVar3->_padding_ + 4))
        ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (int)pFVar3->_padding_;
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar3->_padding_,piVar1);
    }
    *(int *)&pFVar3->_padding_ = iVar11 + 1;
    *(undefined8 **)(pFVar3->_padding_ + (longlong)iVar11 * 8) = local_230;
    ((FParameters *)(puVar13 + 2))->RenderFlags = this->RenderFlags;
    local_220.Buffer = this->StatsBuffer;
    local_220._padding_._2_1_ = 0;
    bVar21 = 0;
    if ((((local_220.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar21 = 0x1c;
    }
    local_220._padding_._0_2_ = (ushort)bVar21;
    pFVar14 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_220,None);
    puVar13[4] = pFVar14;
    local_1c8.Buffer = this->QueueState;
    local_1c8._padding_._0_1_ = 0;
    local_1c8._padding_._4_4_ = 0;
    local_1c8._padding_._0_4_ = 0xffffffff;
    local_1c8._padding_ = 0;
    if ((((local_1c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_1c8._padding_._0_1_ = 0x1c;
    }
    pFVar15 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_1c8);
    puVar13[6] = pFVar15;
    *(uint *)((longlong)puVar13 + 0x14) = param_1->BinCount;
    local_1a8.Buffer = param_1->MetaBuffer;
    local_1a8._padding_._0_1_ = 0;
    local_1a8._padding_._4_4_ = 0;
    local_1a8._padding_._0_4_ = 0xffffffff;
    local_1a8._padding_ = 0;
    if ((((local_1a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_1a8._padding_._0_1_ = 0x1c;
    }
    pFVar15 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_1a8);
    puVar13[9] = pFVar15;
    if ((this->Configuration).bTwoPassOcclusion == 0) {
      *(undefined4 *)(puVar13 + 3) = 0;
    }
    else {
      if ((param_2->MetaBuffer == (FRDGBuffer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("PostPassBinning.MetaBuffer",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                              ,0x1b20,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(uint *)(puVar13 + 3) = param_2->BinCount;
      local_188.Buffer = param_2->MetaBuffer;
      local_188._padding_._0_1_ = 0;
      local_188._padding_._4_4_ = 0;
      local_188._padding_._0_4_ = 0xffffffff;
      local_188._padding_ = 0;
      if ((((local_188.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_188._padding_._0_1_ = 0x1c;
      }
      pFVar15 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_188);
      puVar13[10] = pFVar15;
    }
    pFVar4 = this->SharedContext->ShaderMap;
    pFVar16 = (FShaderType *)FCalculateRasterStatsCS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar4,&local_108,pFVar16,(this->Configuration).bTwoPassOcclusion);
    if (local_108.ShaderContent == (FShader *)0x0) {
      FVar17 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_e8);
      ::FName::ToString((FName *)FVar17,&local_d8);
      FCalculateRasterStatsCS::GetStaticType();
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FCalculateRasterStatsCS::GetStaticType();
    local_c8.ShaderContent = (FCalculateRasterStatsCS *)local_108.ShaderContent;
    local_c8.ShaderMap = local_108.ShaderMap;
    pFVar18 = FRDGEventName::FRDGEventName(&local_98,1,L"CalculateRasterStatsArgs");
    pFVar3 = this->GraphBuilder;
    pFVar19 = FCalculateRasterStatsCS::FParameters::FTypeInfo::GetStructMetadata();
    local_1f8._s_0.X = 1;
    local_1f8._s_0.Y = 1;
    local_1f8._s_0.Z = 1;
    FComputeShaderUtils::AddPass<Nanite::FCalculateRasterStatsCS>
              (pFVar3,pFVar18,Compute,&local_c8,pFVar19,(FParameters *)(puVar13 + 2),
               (TIntVector3<int> *)&local_1f8._s_0);
    if (local_98.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (((this->ClusterIndirectArgsBuffer == (FRDGBuffer *)0x0) &&
        (CalculateClusterIndirectArgsBuffer(this),
        this->ClusterIndirectArgsBuffer == (FRDGBuffer *)0x0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClusterIndirectArgsBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                            ,0x1b3a,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar3 = this->GraphBuilder;
    puVar13 = FMemStackBase::Alloc((FMemStackBase *)&pFVar3->_padding_,0x60,0x10);
    if (puVar13 == (undefined8 *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      puVar13[5] = 0;
      *puVar13 = &___7__TObject_VFParameters_FCalculateClusterStatsCS_Nanite___FRDGAllocator__6B_;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = 0;
      *(undefined4 *)(puVar13 + 0xb) = 4;
      puVar23 = puVar13;
    }
    local_228 = puVar23;
    if ((((undefined8 **)pFVar3->_padding_ <= &local_228) &&
        (&local_228 < (undefined8 **)pFVar3->_padding_ + *(int *)((longlong)&pFVar3->_padding_ + 4))
        ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (int)pFVar3->_padding_;
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar3->_padding_,piVar1);
    }
    *(int *)&pFVar3->_padding_ = iVar11 + 1;
    *(undefined8 **)(pFVar3->_padding_ + (longlong)iVar11 * 8) = local_228;
    uVar9 = *(undefined8 *)((longlong)&(this->PageConstants).field0_0x0 + 8);
    *(undefined8 *)&(((FParameters *)(puVar23 + 2))->PageConstants).field0_0x0 =
         *(undefined8 *)&(this->PageConstants).field0_0x0;
    puVar23[3] = uVar9;
    uVar12 = FGlobalResources::GetMaxVisibleClusters();
    *(uint *)(puVar23 + 4) = uVar12;
    *(uint *)((longlong)puVar23 + 0x24) = this->RenderFlags;
    pFVar15 = FStreamingManager::GetClusterPageDataSRV
                        ((FStreamingManager *)&GStreamingManager,this->GraphBuilder);
    puVar23[5] = pFVar15;
    local_168.Buffer = this->VisibleClustersSWHW;
    local_168._padding_._4_4_ = 0;
    local_168._padding_._0_4_ = 0xffffffff;
    local_168._padding_ = 0;
    local_168._padding_._0_1_ = 0;
    if ((((local_168.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_168._padding_._0_1_ = 0x1c;
    }
    pFVar15 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_168);
    puVar23[6] = pFVar15;
    local_210.Buffer = this->StatsBuffer;
    bVar21 = 0;
    local_210._padding_._2_1_ = 0;
    if ((((local_210.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar21 = 0x1c;
    }
    local_210._padding_._0_2_ = (ushort)bVar21;
    pFVar14 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_210,None);
    puVar23[7] = pFVar14;
    local_148.Buffer = this->MainRasterizeArgsSWHW;
    local_148._padding_._0_1_ = 0;
    local_148._padding_._4_4_ = 0;
    local_148._padding_._0_4_ = 0xffffffff;
    local_148._padding_ = 0;
    if ((((local_148.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_148._padding_._0_1_ = 0x1c;
    }
    pFVar15 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_148);
    puVar23[8] = pFVar15;
    if ((this->Configuration).bTwoPassOcclusion != 0) {
      if ((this->PostRasterizeArgsSWHW == (FRDGBuffer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("PostRasterizeArgsSWHW != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                              ,0x1b4b,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_128.Buffer = this->PostRasterizeArgsSWHW;
      local_128._padding_._0_1_ = 0;
      local_128._padding_._4_4_ = 0;
      local_128._padding_._0_4_ = 0xffffffff;
      local_128._padding_ = 0;
      if ((((local_128.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_128._padding_._0_1_ = 0x1c;
      }
      pFVar15 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_128);
      puVar23[9] = pFVar15;
    }
    local_1e8 = this->ClusterIndirectArgsBuffer;
    uStack_1e0 = 4;
    puVar23[10] = local_1e8;
    puVar23[0xb] = CONCAT44(uStack_1dc,4);
    pFVar4 = this->SharedContext->ShaderMap;
    pFVar5 = this->VirtualShadowMapArray;
    pFVar16 = (FShaderType *)FCalculateClusterStatsCS::GetStaticType();
    FGlobalShaderMap::GetShader
              (pFVar4,&local_f8,pFVar16,
               (this->Configuration).bTwoPassOcclusion +
               (-(uint)(pFVar5 != (FVirtualShadowMapArray *)0x0) & 2));
    if (local_f8.ShaderContent == (FShader *)0x0) {
      FVar17 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_e0);
      ::FName::ToString((FName *)FVar17,&local_b8);
      FCalculateClusterStatsCS::GetStaticType();
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FCalculateClusterStatsCS::GetStaticType();
    pFVar6 = this->ClusterIndirectArgsBuffer;
    local_a8.ShaderContent = (FCalculateClusterStatsCS *)local_f8.ShaderContent;
    local_a8.ShaderMap = local_f8.ShaderMap;
    local_68._0_8_ = 0;
    local_40 = (longlong *)0x0;
    pFVar18 = FRDGEventName::FRDGEventName(&local_80,1,L"CalculateStats");
    FComputeShaderUtils::AddPass<Nanite::FCalculateClusterStatsCS>
              (this->GraphBuilder,pFVar18,Compute,&local_a8,(FParameters *)(puVar23 + 2),pFVar6,0,
               (TFunction<void___cdecl(void)> *)local_68);
    if (local_80.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_68._0_8_ != 0) {
      plVar22 = (longlong *)(local_68 + 0x10);
      if (local_40 != (longlong *)0x0) {
        plVar22 = local_40;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    pTVar20 = FRDGBuilder::ConvertToExternalBuffer(this->GraphBuilder,this->MainRasterizeArgsSWHW);
    uVar9 = GGlobalResources._88_8_;
    pFVar7 = pTVar20->Reference;
    if ((FRDGPooledBuffer *)GGlobalResources._88_8_ != pFVar7) {
      GGlobalResources._88_8_ = pFVar7;
      if (pFVar7 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
      if (uVar9 != 0) {
        piVar1 = (int *)(uVar9 + 8);
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (piVar1 != (int *)0x0)) {
          (*(code *)**(undefined8 **)uVar9)(uVar9,1);
        }
      }
    }
    uVar9 = GGlobalResources._96_8_;
    if (GGlobalResources._96_8_ != 0) {
      GGlobalResources._96_8_ = 0;
      piVar1 = (int *)(uVar9 + 8);
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar11 == 1) && (piVar1 != (int *)0x0)) {
        (*(code *)**(undefined8 **)uVar9)(uVar9,1);
      }
    }
    if ((this->Configuration).bTwoPassOcclusion != 0) {
      if ((this->PostRasterizeArgsSWHW == (FRDGBuffer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("PostRasterizeArgsSWHW != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                              ,0x1b6a,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar20 = FRDGBuilder::ConvertToExternalBuffer(this->GraphBuilder,this->PostRasterizeArgsSWHW)
      ;
      uVar9 = GGlobalResources._96_8_;
      pFVar7 = pTVar20->Reference;
      if ((FRDGPooledBuffer *)GGlobalResources._96_8_ != pFVar7) {
        GGlobalResources._96_8_ = pFVar7;
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
          UNLOCK();
        }
        if (uVar9 != 0) {
          piVar1 = (int *)(uVar9 + 8);
          LOCK();
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar11 == 1) && (piVar1 != (int *)0x0)) {
            (*(code *)**(undefined8 **)uVar9)(uVar9,1);
          }
        }
      }
    }
    pTVar20 = FRDGBuilder::ConvertToExternalBuffer(this->GraphBuilder,this->StatsBuffer);
    uVar9 = GGlobalResources._104_8_;
    pFVar7 = pTVar20->Reference;
    if ((FRDGPooledBuffer *)GGlobalResources._104_8_ != pFVar7) {
      GGlobalResources._104_8_ = pFVar7;
      if (pFVar7 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
      if (uVar9 != 0) {
        piVar1 = (int *)(uVar9 + 8);
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (piVar1 != (int *)0x0)) {
          (*(code *)**(undefined8 **)uVar9)(uVar9,1);
        }
      }
    }
    GGlobalResources._32_4_ = this->RenderFlags;
    GGlobalResources._36_4_ = this->DebugFlags;
  }
  FMemScope::~FMemScope(&local_1d0);
  FLLMScope::~FLLMScope(local_238);
  return;
}

// ExtractVSMPerformanceFeedback @ 144fabf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall Nanite::FRenderer::ExtractVSMPerformanceFeedback(FRenderer *this)

{
  int *piVar1;
  FRDGBuilder *pFVar2;
  FRDGBuffer *pFVar3;
  FGlobalShaderMap *this_00;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  FRDGBufferSRV *pFVar11;
  FRDGBufferUAV *pFVar12;
  FShaderType *pFVar13;
  FName this_01;
  FRDGEventName *pFVar14;
  undefined1 uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined1 auStackY_188 [32];
  undefined8 *local_138;
  FRDGBufferUAVDesc local_130;
  FRDGBufferSRVDesc local_120;
  undefined1 local_100 [8];
  FRDGBufferSRVDesc local_f8;
  FRDGBufferSRVDesc local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b8;
  FString local_a8;
  TShaderRefBase<Nanite::FExtractVSMPerformanceFeedbackCS,FShaderMapPointerTable> local_98;
  FRDGEventName local_88;
  undefined1 local_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  puVar17 = (undefined8 *)0x0;
  if (this->ClusterIndirectArgsBuffer == (FRDGBuffer *)0x0) {
    CalculateClusterIndirectArgsBuffer(this);
    if ((this->ClusterIndirectArgsBuffer == (FRDGBuffer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClusterIndirectArgsBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                           ,0x1a5a,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->ClusterStatsBuffer == (FRDGBuffer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClusterStatsBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                           ,0x1a5b,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = this->GraphBuilder;
  puVar10 = FMemStackBase::Alloc((FMemStackBase *)&pFVar2->_padding_,0x60,0x10);
  if (puVar10 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    puVar10[9] = 0;
    *puVar10 = &
               ___7__TObject_VFParameters_FExtractVSMPerformanceFeedbackCS_Nanite___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar10 + 10) = 4;
    puVar10[0xb] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar17 = puVar10;
  }
  local_138 = puVar17;
  if ((((undefined8 **)pFVar2->_padding_ <= &local_138) &&
      (&local_138 < (undefined8 **)pFVar2->_padding_ + *(int *)((longlong)&pFVar2->_padding_ + 4)))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (int)pFVar2->_padding_;
  piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
  }
  *(int *)&pFVar2->_padding_ = iVar8 + 1;
  local_f8._padding_._4_4_ = 0;
  local_f8._padding_._0_4_ = 0xffffffff;
  local_f8._padding_ = 0;
  *(undefined8 **)(pFVar2->_padding_ + (longlong)iVar8 * 8) = local_138;
  local_f8.Buffer = this->ViewsBuffer;
  local_f8._padding_._0_1_ = 0;
  if ((((local_f8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_f8._padding_._0_1_ = 0x1c;
  }
  pFVar11 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_f8);
  puVar17[5] = pFVar11;
  uVar5 = *(undefined8 *)((longlong)&(this->PageConstants).field0_0x0 + 8);
  *(undefined8 *)&(((FParameters *)(puVar17 + 2))->PageConstants).field0_0x0 =
       *(undefined8 *)&(this->PageConstants).field0_0x0;
  puVar17[3] = uVar5;
  uVar9 = FGlobalResources::GetMaxVisibleClusters();
  *(uint *)(puVar17 + 4) = uVar9;
  *(uint *)((longlong)puVar17 + 0x24) = this->RenderFlags;
  pFVar11 = FStreamingManager::GetClusterPageDataSRV
                      ((FStreamingManager *)&GStreamingManager,this->GraphBuilder);
  puVar17[6] = pFVar11;
  local_d8.Buffer = this->VisibleClustersSWHW;
  local_d8._padding_._0_1_ = 0;
  local_d8._padding_._4_4_ = 0;
  local_d8._padding_._0_4_ = 0xffffffff;
  local_d8._padding_ = 0;
  if ((((local_d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_d8._padding_._0_1_ = 0x1c;
  }
  pFVar11 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_d8);
  puVar17[7] = pFVar11;
  pFVar3 = this->ClusterIndirectArgsBuffer;
  uVar15 = 0;
  puVar17[9] = pFVar3;
  puVar17[10] = CONCAT44(local_120._padding_._4_4_,4);
  local_120.Buffer = this->ClusterStatsBuffer;
  local_120._padding_._0_4_ = 0xffffffff;
  local_120._padding_ = 0;
  if ((((local_120.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar15 = 0x1c;
  }
  local_120._padding_ = CONCAT71((int7)((ulonglong)pFVar3 >> 8),uVar15) & 0xffffffff;
  pFVar11 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_120);
  puVar17[8] = pFVar11;
  if ((this->VirtualShadowMapArray == (FVirtualShadowMapArray *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("VirtualShadowMapArray",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                         ,0x1a6b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->VirtualShadowMapArray->NanitePerformanceFeedbackRDG == (FRDGBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("VirtualShadowMapArray->NanitePerformanceFeedbackRDG",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                         ,0x1a6c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_130.Buffer = this->VirtualShadowMapArray->NanitePerformanceFeedbackRDG;
  bVar7 = 0;
  local_130._padding_._2_1_ = 0;
  if ((((local_130.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar7 = 0x1c;
  }
  local_130._padding_._0_2_ = (ushort)bVar7;
  pFVar12 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_130,None);
  puVar17[0xb] = pFVar12;
  this_00 = this->SharedContext->ShaderMap;
  pFVar13 = (FShaderType *)FExtractVSMPerformanceFeedbackCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_b8,pFVar13,(this->Configuration).bTwoPassOcclusion);
  if (local_b8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_100);
    ::FName::ToString((FName *)this_01,&local_a8);
    FExtractVSMPerformanceFeedbackCS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FExtractVSMPerformanceFeedbackCS::GetStaticType();
  pFVar3 = this->ClusterIndirectArgsBuffer;
  local_98.ShaderContent = (FExtractVSMPerformanceFeedbackCS *)local_b8.ShaderContent;
  local_98.ShaderMap = local_b8.ShaderMap;
  local_68._0_8_ = 0;
  local_40 = (longlong *)0x0;
  pFVar14 = FRDGEventName::FRDGEventName(&local_88,1,L"ExtractVSMPerformanceFeedback");
  FComputeShaderUtils::AddPass<Nanite::FExtractVSMPerformanceFeedbackCS>
            (this->GraphBuilder,pFVar14,Compute,&local_98,(FParameters *)(puVar17 + 2),pFVar3,0,
             (TFunction<void___cdecl(void)> *)local_68);
  if (local_88.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_68._0_8_ != 0) {
    plVar16 = (longlong *)(local_68 + 0x10);
    if (local_40 != (longlong *)0x0) {
      plVar16 = local_40;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  return;
}

// FeedbackStatus @ 144fac420

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall Nanite::FRenderer::FeedbackStatus(FRenderer *this)

{
  int *piVar1;
  FRDGBuilder *pFVar2;
  FGlobalShaderMap *this_00;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  FRDGBufferUAV *pFVar9;
  FRDGBufferSRV *pFVar10;
  FParameters *pFVar11;
  FGlobalShaderType *pFVar12;
  FShaderType *pFVar13;
  FName this_01;
  FRDGEventName *pFVar14;
  FShaderParametersMetadata *pFVar15;
  undefined8 *puVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 *local_f8;
  FRDGBufferUAVDesc local_f0;
  TIntVector3<int>_u_0 local_d8;
  FRDGBufferSRVDesc local_c8;
  FRDGBufferSRVDesc local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_88;
  FString local_78;
  TShaderRefBase<Nanite::FNaniteFeedbackStatusCS,FShaderMapPointerTable> local_68;
  FRDGEventName local_58;
  FParameters local_38;
  
  pFVar2 = this->GraphBuilder;
  puVar16 = (undefined8 *)0x0;
  puVar8 = FMemStackBase::Alloc((FMemStackBase *)&pFVar2->_padding_,0x50,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar8[2] = 0;
    *puVar8 = &___7__TObject_VFParameters_FNaniteFeedbackStatusCS_Nanite___FRDGAllocator__6B_;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[6] = 0;
    puVar16 = puVar8;
  }
  local_f8 = puVar16;
  if ((((undefined8 **)pFVar2->_padding_ <= &local_f8) &&
      (&local_f8 < (undefined8 **)pFVar2->_padding_ + *(int *)((longlong)&pFVar2->_padding_ + 4)))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (int)pFVar2->_padding_;
  piVar1 = (int *)((longlong)&pFVar2->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar2->_padding_,piVar1);
  }
  *(int *)&pFVar2->_padding_ = iVar7 + 1;
  *(undefined8 **)(pFVar2->_padding_ + (longlong)iVar7 * 8) = local_f8;
  local_f0.Buffer = this->QueueState;
  local_f0._padding_._2_1_ = 0;
  bVar6 = 0;
  if ((((local_f0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar6 = 0x1c;
  }
  local_f0._padding_._0_2_ = (ushort)bVar6;
  pFVar9 = FRDGBuilder::CreateUAV(this->GraphBuilder,&local_f0,None);
  ((FParameters *)(puVar16 + 2))->OutQueueState = pFVar9;
  local_c8.Buffer = this->MainRasterizeArgsSWHW;
  local_c8._padding_._0_1_ = 0;
  local_c8._padding_._4_4_ = 0;
  local_c8._padding_._0_4_ = 0xffffffff;
  local_c8._padding_ = 0;
  if ((((local_c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_c8._padding_._0_1_ = 0x1c;
  }
  pFVar10 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_c8);
  puVar16[3] = pFVar10;
  local_a8.Buffer = (&this->MainRasterizeArgsSWHW)[(this->Configuration).bTwoPassOcclusion];
  local_a8._padding_._0_1_ = 0;
  local_a8._padding_._4_4_ = 0;
  local_a8._padding_._0_4_ = 0xffffffff;
  local_a8._padding_ = 0;
  if ((((local_a8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_a8._padding_._0_1_ = 0x1c;
  }
  pFVar10 = FRDGBuilder::CreateSRV(this->GraphBuilder,&local_a8);
  puVar16[4] = pFVar10;
  pFVar11 = GPUMessage::GetShaderParameters(&local_38,this->GraphBuilder);
  uVar4 = *(undefined8 *)&pFVar11->GPUMessageDataBufferSize;
  puVar16[6] = pFVar11->GPUMessageDataBuffer;
  puVar16[7] = uVar4;
  iVar7 = *(int *)GGlobalResources._128_8_;
  if ((iVar7 == -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                         ,0x166,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(int *)(puVar16 + 8) = iVar7;
  *(uint *)((longlong)puVar16 + 0x44) = this->RenderFlags;
  this_00 = this->SharedContext->ShaderMap;
  pFVar12 = FNaniteFeedbackStatusCS::GetStaticType();
  if (*(int *)&pFVar12->field_0x50 != 1) {
    local_res8[0] = 0;
    `FGlobalShaderMap::GetShader<Nanite::FNaniteFeedbackStatusCS>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  pFVar13 = (FShaderType *)FNaniteFeedbackStatusCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_88,pFVar13,0);
  if (local_88.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_01,&local_78);
    FNaniteFeedbackStatusCS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNaniteFeedbackStatusCS::GetStaticType();
  local_68.ShaderContent = (FNaniteFeedbackStatusCS *)local_88.ShaderContent;
  local_68.ShaderMap = local_88.ShaderMap;
  pFVar14 = FRDGEventName::FRDGEventName(&local_58,1,L"NaniteFeedbackStatus");
  pFVar2 = this->GraphBuilder;
  pFVar15 = FNaniteFeedbackStatusCS::FParameters::FTypeInfo::GetStructMetadata();
  local_d8._s_0.X = 1;
  local_d8._s_0.Y = 1;
  local_d8._s_0.Z = 1;
  FComputeShaderUtils::AddPass<Nanite::FNaniteFeedbackStatusCS>
            (pFVar2,pFVar14,Compute,&local_68,pFVar15,(FParameters *)(puVar16 + 2),
             (TIntVector3<int> *)&local_d8._s_0);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// PrepareRasterizerPasses @ 144fcdd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
Nanite::FRenderer::PrepareRasterizerPasses
          (FRenderer *this,FDispatchContext *param_1,ERasterHardwarePath param_2,Type param_3,
          FNaniteRasterPipelines *param_4,FNaniteVisibilityQuery *param_5,bool param_6,bool param_7)

{
  int *piVar1;
  TRefCountPtr<FRHIShaderBundle> *pTVar2;
  TRefCountPtr<FRHIShaderBundle> *pTVar3;
  TRefCountPtr<FRHIShaderBundle> *pTVar4;
  TArray<Nanite::FRasterizerPass,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar5;
  atomic<unsigned_int> *paVar6;
  ulonglong uVar7;
  atomic<unsigned_int> aVar8;
  byte bVar9;
  FVirtualShadowMapArray *pFVar10;
  FRHIShaderBundle *pFVar11;
  longlong lVar12;
  code *pcVar13;
  TConsoleVariableData<int> *pTVar14;
  TConsoleVariableData<int> *pTVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  UMaterial *pUVar21;
  FMaterialRenderProxy *pFVar22;
  FTaskHandle FVar23;
  FRDGBuffer *pFVar24;
  FNaniteRasterBinMeta *_Dst;
  uint uVar25;
  EShaderPlatform EVar26;
  FPipe *pFVar27;
  TRefCountPtr<FRHIShaderBundle> local_d0;
  TRefCountPtr<FRHIShaderBundle> local_c8;
  TRefCountPtr<FRHIShaderBundle> local_c0;
  uint local_b8 [3];
  undefined1 local_ac;
  undefined1 local_a8 [40];
  bool local_80;
  EOutputBufferMode local_7f;
  undefined1 local_7e;
  ERasterHardwarePath local_7d;
  undefined1 local_7c;
  byte local_7b;
  uint local_78 [3];
  char local_6c;
  FRDGBuilder *local_68;
  FDispatchContext *local_60;
  FTaskHandle local_58;
  
  pFVar10 = this->VirtualShadowMapArray;
  bVar9 = *(byte *)((longlong)&this->RenderFlags + 2);
  pUVar21 = UMaterial::GetDefaultMaterial(MD_Surface);
  pFVar22 = (FMaterialRenderProxy *)(**(code **)(pUVar21->_padding_ + 0x310))(pUVar21);
  param_1->FixedMaterialProxy = pFVar22;
  pFVar22 = (FMaterialRenderProxy *)
            (**(code **)(((GEngine->NaniteHiddenSectionMaterial).field0_0x0.DebugPtr)->_padding_ +
                        0x310))();
  param_1->HiddenMaterialProxy = pFVar22;
  uVar17 = FNaniteRasterPipelines::GetBinCount(param_4);
  iVar19 = (param_1->MetaBufferData).ArrayNum;
  piVar1 = &(param_1->MetaBufferData).ArrayNum;
  if (iVar19 < (int)uVar17) {
    iVar18 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteRasterBinMeta>_>
                       (0x20,4,uVar17 - iVar19,&(param_1->MetaBufferData).AllocatorInstance,piVar1,
                        &(param_1->MetaBufferData).ArrayMax);
    memset((param_1->MetaBufferData).AllocatorInstance.Data + iVar18,0,
           (longlong)(int)(uVar17 - iVar19) << 5);
  }
  else {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if ((int)uVar17 < iVar19) {
      uVar25 = iVar19 - uVar17;
      if ((int)(uVar25 | uVar17) < 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar16) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      if (uVar25 != 0) {
        _Dst = (param_1->MetaBufferData).AllocatorInstance.Data + (int)uVar17;
        iVar19 = (*piVar1 - uVar25) - uVar17;
        if (iVar19 != 0) {
          memmove(_Dst,_Dst + (int)uVar25,(longlong)iVar19 << 5);
        }
        *piVar1 = *piVar1 - uVar25;
        UE::Core::Private::
        ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FNaniteRasterBinMeta>_>
                  (0x20,4,&(param_1->MetaBufferData).AllocatorInstance,*piVar1,
                   &(param_1->MetaBufferData).ArrayMax);
      }
    }
  }
  pFVar11 = (param_1->SWShaderBundle).Reference;
  pTVar2 = &param_1->SWShaderBundle;
  pFVar27 = (FPipe *)0x0;
  if (pFVar11 != (FRHIShaderBundle *)0x0) {
    pTVar2->Reference = (FRHIShaderBundle *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar11);
  }
  pFVar11 = (param_1->SWShaderBundleAsync).Reference;
  pTVar3 = &param_1->SWShaderBundleAsync;
  if (pFVar11 != (FRHIShaderBundle *)0x0) {
    pTVar3->Reference = (FRHIShaderBundle *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar11);
  }
  pFVar11 = (param_1->HWShaderBundle).Reference;
  pTVar4 = &param_1->HWShaderBundle;
  if (pFVar11 != (FRHIShaderBundle *)0x0) {
    pTVar4->Reference = (FRHIShaderBundle *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar11);
  }
  if (param_3 == Num) {
    EVar26 = SP_NumPlatforms;
  }
  else {
    EVar26 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3];
  }
  if (uVar17 == 0) goto LAB_144fce107;
  bVar16 = UseRasterShaderBundleSW(EVar26);
  if (bVar16) {
    local_b8[1] = 0;
    local_b8[2] = 0x20;
    local_ac = 0;
    local_b8[0] = uVar17;
    (**(code **)(GDynamicRHI->_padding_ + 0x4c0))(GDynamicRHI,&local_d0,local_b8);
    if (pTVar2 == &local_d0) {
LAB_144fcdf69:
      if (local_d0.Reference != (FRHIShaderBundle *)0x0) {
        FRHIResource::Release((FRHIResource *)local_d0.Reference);
      }
    }
    else {
      pFVar11 = pTVar2->Reference;
      pTVar2->Reference = local_d0.Reference;
      local_d0.Reference = (FRHIShaderBundle *)0x0;
      if (pFVar11 != (FRHIShaderBundle *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar11);
        goto LAB_144fcdf69;
      }
    }
    if (pTVar2->Reference == (FRHIShaderBundle *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.SWShaderBundle != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                          ,0x136f,L"");
      if (bVar16) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    pTVar14 = CVarNaniteEnableAsyncRasterization.Ref;
    bVar16 = IsInParallelRenderingThread();
    if (!bVar16) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar16) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    if (pTVar14->ShadowedValue[1] != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x4c0))(GDynamicRHI,&local_c8,local_b8);
      if (pTVar3 == &local_c8) {
LAB_144fce01c:
        if (local_c8.Reference != (FRHIShaderBundle *)0x0) {
          FRHIResource::Release((FRHIResource *)local_c8.Reference);
        }
      }
      else {
        pFVar11 = pTVar3->Reference;
        pTVar3->Reference = local_c8.Reference;
        local_c8.Reference = (FRHIShaderBundle *)0x0;
        if (pFVar11 != (FRHIShaderBundle *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar11);
          goto LAB_144fce01c;
        }
      }
      if (pTVar3->Reference == (FRHIShaderBundle *)0x0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Context.SWShaderBundleAsync != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                            ,0x1374,L"");
        if (bVar16) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
    }
  }
  bVar16 = UseRasterShaderBundleHW(EVar26);
  if (!bVar16) goto LAB_144fce107;
  local_78[1] = 0x10;
  local_78[2] = 0x20;
  local_6c = (2 < (byte)(param_2 - MeshShaderWrapped)) + '\x01';
  local_78[0] = uVar17;
  (**(code **)(GDynamicRHI->_padding_ + 0x4c0))(GDynamicRHI,&local_c0,local_78);
  if (pTVar4 == &local_c0) {
LAB_144fce0cd:
    if (local_c0.Reference != (FRHIShaderBundle *)0x0) {
      FRHIResource::Release((FRHIResource *)local_c0.Reference);
    }
  }
  else {
    pFVar11 = pTVar4->Reference;
    pTVar4->Reference = local_c0.Reference;
    local_c0.Reference = (FRHIShaderBundle *)0x0;
    if (pFVar11 != (FRHIShaderBundle *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar11);
      goto LAB_144fce0cd;
    }
  }
  if (pTVar4->Reference == (FRHIShaderBundle *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Context.HWShaderBundle != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                        ,0x1381,L"");
    if (bVar16) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
LAB_144fce107:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      GNaniteRasterSetupPipe.EmptyEventRef.SharedReferenceCount.ReferenceController =
           ::operator_new(0x18);
      if (GNaniteRasterSetupPipe.EmptyEventRef.SharedReferenceCount.ReferenceController ==
          (TReferenceControllerBase<1> *)0x0) {
        GNaniteRasterSetupPipe.EmptyEventRef = ___xmm_00000000000000000000000000000010;
      }
      else {
        (GNaniteRasterSetupPipe.EmptyEventRef.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount = (atomic<int>)0x1;
        (GNaniteRasterSetupPipe.EmptyEventRef.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__TEventCount_I_UE___00_SharedPointerInternals__6B_
        ;
        *(undefined8 *)
         &(GNaniteRasterSetupPipe.EmptyEventRef.SharedReferenceCount.ReferenceController)->
          WeakReferenceCount = 1;
        GNaniteRasterSetupPipe.EmptyEventRef.Object =
             (TEventCount<unsigned_int> *)
             (GNaniteRasterSetupPipe.EmptyEventRef.SharedReferenceCount.ReferenceController + 1);
        if (GNaniteRasterSetupPipe.EmptyEventRef.SharedReferenceCount.ReferenceController + 1 ==
            (TReferenceControllerBase<1> *)0x0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L"");
          if (bVar16) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
      }
      GNaniteRasterSetupPipe.DebugName = L"NaniteRasterSetupPipe";
      atexit(`Nanite::FRenderer::PrepareRasterizerPasses'::__l2::
             _dynamic_atexit_destructor_for__GNaniteRasterSetupPipe__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar14 = CVarNaniteRasterSetupCache.Ref;
  bVar16 = IsInParallelRenderingThread();
  if (!bVar16) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar16) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar15 = CVarNaniteRasterSetupTask.Ref;
  iVar19 = pTVar14->ShadowedValue[1];
  local_68 = this->GraphBuilder;
  bVar16 = IsInParallelRenderingThread();
  if (!bVar16) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                        ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar16) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  iVar18 = pTVar15->ShadowedValue[1];
  FVar23 = GetVisibilityTask((FNaniteVisibilityQuery *)&stack0xffffffffffffffa8);
  local_a8._28_4_ = this->RenderFlags;
  local_a8._8_8_ = param_4;
  local_a8[0x27] = param_6;
  local_80 = param_7;
  local_7f = this->RasterContext->RasterMode;
  local_7e = this->RasterContext->VisualizeActive;
  if (0 < iVar19) {
    pFVar27 = &GNaniteRasterSetupPipe;
  }
  local_a8._16_8_ = param_5;
  local_a8._0_8_ = param_1;
  local_a8._24_4_ = uVar17;
  local_a8._32_4_ = param_3;
  local_a8._36_2_ = EVar26;
  local_a8[0x26] = 0 < iVar19;
  local_7d = param_2;
  local_7c = pFVar10 != (FVirtualShadowMapArray *)0x0;
  local_7b = bVar9 & 1;
  FRDGBuilder::
  AddSetupTask<_Nanite::FRenderer::PrepareRasterizerPasses_::__l2::<lambda_1>,UE::Tasks::Private::FTaskHandle>
            (local_68,(<lambda_1> *)&local_60,(FPipe *)local_a8,(FTaskHandle *)pFVar27,
             (ETaskPriority)FVar23.Pimpl.Reference,true,0 < iVar18);
  if (local_60 != (FDispatchContext *)0x0) {
    LOCK();
    pTVar5 = &local_60->RasterizerPasses;
    iVar19 = *(int *)&(pTVar5->AllocatorInstance).Data;
    *(int *)&(pTVar5->AllocatorInstance).Data = *(int *)&(pTVar5->AllocatorInstance).Data + -1;
    UNLOCK();
    if (iVar19 == 1) {
      (**(code **)(local_60->Dispatches_HW_Triangles).Indirections.AllocatorInstance.Data)
                (local_60,1);
    }
  }
  if (local_58.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar6 = (atomic<unsigned_int> *)((longlong)local_58.Pimpl.Reference + 0x30);
    aVar8 = *paVar6;
    *paVar6 = (atomic<unsigned_int>)((int)*paVar6 + -1);
    UNLOCK();
    if (aVar8 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_58.Pimpl.Reference)(local_58.Pimpl.Reference,1);
    }
  }
  if (uVar17 != 0) {
    uVar25 = 1;
    if (1 < uVar17) {
      uVar25 = uVar17;
    }
    uVar20 = 1;
    if (uVar25 != 0) {
      uVar20 = uVar25;
    }
    uVar7 = (ulonglong)(uVar20 - 1) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    pFVar24 = CreateStructuredBuffer
                        (this->GraphBuilder,L"Nanite.RasterBinMeta",0x20,1 << ((byte)lVar12 & 0x1f),
                         (param_1->MetaBufferData).AllocatorInstance.Data,(ulonglong)uVar17 << 5,
                         NoCopy);
    param_1->MetaBuffer = pFVar24;
  }
  return;
}

// UpdateSceneUniformBuffer @ 1450814f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FMaterialsSceneExtension::FRenderer::UpdateSceneUniformBuffer
          (FRenderer *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  FNaniteMaterialsParameters local_28;
  
  if ((this->SceneData->MaterialBuffers).Ptr == (FMaterialBuffers *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData->IsEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteMaterialsSceneExtension.cpp"
                       ,0x31d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28.PrimitiveMaterialElementStride = 8;
  local_28.PrimitiveMaterialData = (FRDGBufferSRV *)0x0;
  local_28.MaterialData = (FRDGBufferSRV *)0x0;
  FinishMaterialBufferUpload(this->SceneData,param_1,&local_28);
  pFVar3 = FNaniteMaterialsParameters::FTypeInfo::GetStructMetadata();
  FSceneUniformBuffer::Set(param_2,SceneUB::NaniteMaterials._32_4_,&local_28,pFVar3->Size);
  return;
}

// UpdateSceneUniformBuffer @ 1450815a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FOwnershipVisibilitySceneExtension::FRenderer::UpdateSceneUniformBuffer
          (FRenderer *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  FShaderParametersMetadata *pFVar4;
  undefined4 local_38 [2];
  FRDGBufferSRV *local_30;
  FRDGBufferSRVDesc local_28;
  
  local_28.Buffer = this->OwnershipHiddenPrimitivesBitArrayBuffer;
  if (local_28.Buffer == (FRDGBuffer *)0x0) {
    local_38[0] = 0;
    local_28.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
    uVar1 = (undefined1)((local_28.Buffer)->Desc).Usage;
  }
  else {
    lVar2 = this->SceneExtension->_padding_;
    lVar3 = 0x4c28;
    if (*(char *)(lVar2 + 0x4cf0) == '\0') {
      lVar3 = 0x4c24;
    }
    local_38[0] = *(undefined4 *)(lVar3 + lVar2);
    uVar1 = (undefined1)((local_28.Buffer)->Desc).Usage;
  }
  local_28._padding_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_1_ = 0;
  if ((uVar1 & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  local_30 = FRDGBuilder::CreateSRV(param_1,&local_28);
  pFVar4 = FNaniteOwnershipVisibilityParameters::FTypeInfo::GetStructMetadata();
  FSceneUniformBuffer::Set(param_2,SceneUB::NaniteOwnershipVisibility._32_4_,local_38,pFVar4->Size);
  return;
}

// UpdateViewData @ 1450828b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FOwnershipVisibilitySceneExtension::FRenderer::UpdateViewData
          (FRenderer *this,FRDGBuilder *param_1,FRendererViewDataManager *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  FPrimitiveSceneProxy *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<unsigned_int> FVar11;
  FPrimitiveSceneInfo *pFVar12;
  FScriptContainerElement *pFVar13;
  FRDGBuffer *pFVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  undefined1 auStackY_e8 [32];
  uint *puVar24;
  ulong64 uVar25;
  FPersistentPrimitiveIndex local_a4;
  int local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FScene *local_80;
  FRenderer *local_78;
  FRDGBuilder *local_70;
  ForElementType<unsigned_int> local_68;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar22 = param_2->SceneRendererPrimaryViews->ArrayNum;
  local_98 = (param_2->SceneRendererPrimaryViews->AllocatorInstance).Data;
  local_78 = this;
  local_70 = param_1;
  if (((int)uVar22 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar23 = (this->SceneExtension->NanitePrimitivesWithOwnership).ArrayNum;
  pFVar19 = (this->SceneExtension->NanitePrimitivesWithOwnership).AllocatorInstance.Data;
  local_90 = pFVar19;
  if (iVar23 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar23 == 0) {
    this->OwnershipHiddenPrimitivesBitArrayBuffer = (FRDGBuffer *)0x0;
    return;
  }
  lVar18 = this->SceneExtension->_padding_;
  lVar10 = 0x4c28;
  if (*(char *)(lVar18 + 0x4cf0) == '\0') {
    lVar10 = 0x4c24;
  }
  local_a0 = *(int *)(lVar10 + lVar18);
  local_50 = uVar22 * local_a0;
  local_68.SecondaryData.Data = (uint *)0x0;
  local_4c = 0x80;
  uVar16 = local_50 + 0x1f >> 5;
  if (local_50 + 0x1f >> 5 != 0) {
    if (4 < uVar16) {
      TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
      ForElementType<unsigned_int>::ResizeAllocation(&local_68,0,uVar16,4);
      local_4c = uVar16 << 5;
    }
    FVar11.Data = (uint *)&local_68;
    if ((ForElementType<unsigned_int> *)local_68.SecondaryData.Data !=
        (ForElementType<unsigned_int> *)0x0) {
      FVar11.Data = local_68.SecondaryData.Data;
    }
    memset(FVar11.Data,0,(ulonglong)uVar16 << 2);
    uVar16 = local_50 & 0x8000001f;
    if ((int)uVar16 < 0) {
      uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
    }
    if (uVar16 != 0) {
      FVar11.Data = (uint *)&local_68;
      if ((ForElementType<unsigned_int> *)local_68.SecondaryData.Data !=
          (ForElementType<unsigned_int> *)0x0) {
        FVar11.Data = local_68.SecondaryData.Data;
      }
      *(uint *)(((ForElementType<unsigned_int> *)FVar11.Data)->InlineData +
               (longlong)((int)(local_50 + ((int)local_50 >> 0x1f & 0x1fU)) >> 5) * 4) =
           *(uint *)(((ForElementType<unsigned_int> *)FVar11.Data)->InlineData +
                    (longlong)((int)(local_50 + ((int)local_50 >> 0x1f & 0x1fU)) >> 5) * 4) &
           0xffffffffU >> (0x20U - (char)uVar16 & 0x1f);
    }
  }
  local_80 = *(FScene **)(this->_padding_ + 8);
  local_88 = pFVar19 + (longlong)iVar23 * 4;
  uVar20 = (ulonglong)(int)uVar22;
  uVar21 = uVar20;
  if (pFVar19 != local_88) {
    do {
      local_a4.Index = *(int *)pFVar19;
      pFVar12 = FScene::GetPrimitiveSceneInfo(local_80,&local_a4);
      uVar16 = 0;
      lVar18 = 0;
      pFVar3 = pFVar12->Proxy;
      if (0 < (longlong)uVar20) {
        iVar23 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar16 < (int)uVar21) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar19 = local_98;
          if ((uVar16 != *(uint *)(*(longlong *)(local_98 + lVar18 * 8) + 0x28e4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ViewIndex == Views[ViewIndex]->SceneRendererPrimaryViewId",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteOwnershipVisibilitySceneExtension.cpp"
                                 ,0x6b,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar2 = *(byte *)(*(longlong *)(*(longlong *)(pFVar19 + lVar18 * 8) + 8) + 0x56);
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(*(longlong *)(local_98 + lVar18 * 8) + 0x360) != 0) {
            pFVar13 = (pFVar3->Owners).AllocatorInstance.Data;
            pFVar19 = pFVar13 + (longlong)(pFVar3->Owners).ArrayNum * 4;
            for (; pFVar13 != pFVar19; pFVar13 = pFVar13 + 4) {
              if (*(int *)pFVar13 == *(int *)(*(longlong *)(local_98 + lVar18 * 8) + 0x360)) {
                bVar6 = true;
                goto LAB_145082c54;
              }
            }
          }
          bVar6 = false;
LAB_145082c54:
          if ((bVar2 & 1) == 0) {
            if (bVar6) {
              if (!(bool)pFVar3->bOwnerNoSee) goto LAB_145082c6a;
            }
            else if (pFVar3->bOnlyOwnerSee == '\0') goto LAB_145082c6a;
            bVar6 = true;
          }
          else {
LAB_145082c6a:
            bVar6 = false;
          }
          iVar17 = local_a4.Index + iVar23;
          if (((iVar17 < 0) || ((int)local_50 <= iVar17)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar11.Data = (uint *)&local_68;
          if ((ForElementType<unsigned_int> *)local_68.SecondaryData.Data !=
              (ForElementType<unsigned_int> *)0x0) {
            FVar11.Data = local_68.SecondaryData.Data;
          }
          iVar8 = iVar17;
          if (iVar17 < 0) {
            iVar8 = iVar17 + 0x1f;
          }
          uVar9 = 1 << ((byte)iVar17 & 0x1f);
          uVar15 = *(uint *)(((ForElementType<unsigned_int> *)FVar11.Data)->InlineData +
                            (longlong)(iVar8 >> 5) * 4);
          if (bVar6) {
            uVar15 = uVar15 | uVar9;
          }
          else {
            uVar15 = uVar15 & ~uVar9;
          }
          iVar23 = iVar23 + local_a0;
          uVar16 = uVar16 + 1;
          uVar21 = (ulonglong)uVar22;
          lVar18 = lVar18 + 1;
          *(uint *)(((ForElementType<unsigned_int> *)FVar11.Data)->InlineData +
                   (longlong)(iVar8 >> 5) * 4) = uVar15;
        } while (lVar18 < (longlong)uVar20);
      }
      pFVar19 = local_90 + 4;
      this = local_78;
      param_1 = local_70;
      local_90 = pFVar19;
    } while (pFVar19 != local_88);
  }
  uVar22 = local_50 + 0x1f >> 5;
  puVar24 = (uint *)&local_68;
  if ((ForElementType<unsigned_int> *)local_68.SecondaryData.Data !=
      (ForElementType<unsigned_int> *)0x0) {
    puVar24 = local_68.SecondaryData.Data;
  }
  bVar6 = local_50 + 0x1f >> 5 != 0;
  if (bVar6) {
    uVar25 = (ulonglong)uVar22 << 2;
  }
  else {
    uVar25 = 4;
    uVar22 = 1;
    puVar24 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<unsigned_int>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<unsigned_int_const_,int>,ERDGInitialDataFlags)'
               ::__l2::DummyElement;
  }
  pFVar14 = CreateStructuredBuffer
                      (param_1,L"Nanite.OwnershipHiddenPrimitivesBuffer",4,uVar22,puVar24,uVar25,
                       !bVar6);
  this->OwnershipHiddenPrimitivesBitArrayBuffer = pFVar14;
  if ((ForElementType<unsigned_int> *)local_68.SecondaryData.Data !=
      (ForElementType<unsigned_int> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_68.SecondaryData.Data);
  }
  return;
}

// UpdateSceneUniformBuffer @ 1456a5840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinningSceneExtension::FRenderer::UpdateSceneUniformBuffer
          (FRenderer *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  bool bVar4;
  FSkinningSceneParameters local_28;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Silver,"FSkinningSceneExtension_FRenderer_UpdateSceneUniformBuffer");
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1353,
               "FSkinningSceneExtension_FRenderer_UpdateSceneUniformBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x549);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1353);
  }
  if (((this->SceneData->Buffers).Ptr == (FBuffers *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneData->IsEnabled()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
                         ,0x54a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_28.Headers = (FRDGBufferSRV *)0x0;
  local_28.BoneHierarchy = (FRDGBufferSRV *)0x0;
  local_28.BoneObjectSpace = (FRDGBufferSRV *)0x0;
  local_28.BoneTransforms = (FRDGBufferSRV *)0x0;
  FinishSkinningBufferUpload(this->SceneData,param_1,&local_28);
  pFVar3 = FSkinningSceneParameters::GetStructMetadata();
  FSceneUniformBuffer::Set(param_2,SceneUB::Skinning._32_4_,&local_28,pFVar3->Size);
  PerformSkinning(this->SceneData,&local_28,param_1);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// UpdateViewData @ 1456a5970

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSkinningSceneExtension::FRenderer::UpdateViewData
          (FRenderer *this,FRDGBuilder *param_1,FRendererViewDataManager *param_2)

{
  FParameters *pFVar1;
  longlong lVar2;
  FSceneCullingRenderer *this_00;
  FRDGBuffer *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FRDGBufferSRV *pFVar11;
  FRDGBufferSRV *pFVar12;
  FRDGBufferSRV *pFVar13;
  FRDGBufferSRV *pFVar14;
  FRDGBufferSRV *pFVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  FRDGBufferSRV *pFVar20;
  uint uVar21;
  FRenderer *pFVar22;
  bool bVar23;
  byte bVar24;
  int iVar25;
  FInstanceHierarchyParameters *pFVar26;
  undefined8 *puVar27;
  FRDGBufferUAV *pFVar28;
  FGlobalShaderMap *pFVar29;
  FGlobalShaderType *pFVar30;
  FShaderType *pFVar31;
  FName FVar32;
  FRDGEventName *pFVar33;
  FShaderParametersMetadata *pFVar34;
  undefined8 *puVar35;
  FGPUSceneResourceParameters *pFVar36;
  FRDGBufferSRV *pFVar37;
  longlong *plVar38;
  longlong lVar39;
  longlong lVar40;
  bool bVar41;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297 [7];
  undefined8 *local_290;
  undefined8 *local_288;
  Type local_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  FRenderer *local_260;
  FRendererViewDataManager *local_258;
  FRDGBuffer *local_250;
  FRDGBuffer *local_248;
  FRDGBufferUAVDesc local_240;
  FRDGBufferUAVDesc local_230;
  TIntVector3<int>_u_0 local_220 [2];
  TIntVector3<int>_u_0 local_208;
  FRDGBufferSRVDesc local_1f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1c8;
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  FString local_1a8;
  TShaderRefBase<FNaniteSkinningUpdateChunkCullCS,FShaderMapPointerTable> local_198;
  FString local_188;
  TShaderRefBase<FNaniteSkinningUpdateViewDataCS,FShaderMapPointerTable> local_178;
  FRDGBufferDesc local_168;
  FRDGEventName local_150;
  FRDGEventName local_138;
  FGPUSceneResourceParameters local_118;
  undefined1 local_c8 [40];
  longlong *local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_260 = this;
  local_258 = param_2;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Silver,"FSkinningSceneExtension_FRenderer_UpdateViewData");
  bVar41 = -1 < CpuChannel->Enabled;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1296,"FSkinningSceneExtension_FRenderer_UpdateViewData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x510);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1296);
  }
  uVar7 = FSceneCulling::ExtensionRegistration._8_4_;
  lVar2 = this->_padding_;
  lVar39 = (longlong)(int)FSceneCulling::ExtensionRegistration._8_4_;
  if ((-1 < (int)FSceneCulling::ExtensionRegistration._8_4_) &&
     ((int)FSceneCulling::ExtensionRegistration._8_4_ < *(int *)(lVar2 + 0x98))) {
    if ((*(int *)(lVar2 + 0x98) <= (int)FSceneCulling::ExtensionRegistration._8_4_) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar23)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar40 = *(longlong *)(lVar2 + 0x90);
    if (*(longlong *)(lVar2 + 0x90) == 0) {
      lVar40 = lVar2 + 0x80;
    }
    if ((((*(uint *)(lVar40 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar7 & 0x1f) & 1) != 0) &&
        (this_00 = *(FSceneCullingRenderer **)(*(longlong *)(lVar2 + 0x70) + lVar39 * 8),
        this_00 != (FSceneCullingRenderer *)0x0)) && (this_00->SceneCulling->bIsEnabled != false)) {
      pFVar26 = FSceneCullingRenderer::GetShaderParameters(this_00,param_1);
      puVar35 = (undefined8 *)0x0;
      uStack_270 = 0x10109;
      local_268 = 0;
      uVar5 = pFVar26->bCullChunkViewDistance;
      uVar6 = pFVar26->NumAllocatedChunks;
      uVar7 = *(undefined4 *)&pFVar26->InstanceHierarchyCellBlockData;
      uVar8 = *(undefined4 *)((longlong)&pFVar26->InstanceHierarchyCellBlockData + 4);
      uVar9._0_4_ = pFVar26->NumCellsPerBlockLog2;
      uVar9._4_4_ = pFVar26->CellBlockDimLog2;
      uVar10._0_4_ = pFVar26->LocalCellCoordMask;
      uVar10._4_4_ = pFVar26->FirstLevel;
      pFVar37 = pFVar26->InstanceHierarchyCellHeaders;
      pFVar11 = pFVar26->InstanceHierarchyItemChunks;
      pFVar12 = pFVar26->InstanceIds;
      pFVar13 = pFVar26->ExplicitChunkBounds;
      pFVar14 = pFVar26->ExplicitChunkCellIds;
      pFVar15 = pFVar26->UsedChunkIdMask;
      local_278._4_4_ = uVar6;
      local_278._0_4_ = 8;
      local_168._12_4_ = uStack_26c;
      local_168.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_168.Metadata = (FShaderParametersMetadata *)0x0;
      local_168.BytesPerElement = 8;
      local_168.NumElements = uVar6;
      local_248 = FRDGBuilder::CreateBuffer
                            (param_1,&local_168,L"Skinning.UpdateViewData.WorkGroups",None);
      local_220[0]._s_0.X = 0;
      local_220[0]._s_0.Y = 1;
      local_220[0]._s_0.Z = 1;
      local_280 = *(Type *)(local_260->SceneData->_padding_ + 8);
      local_250 = CreateAndClearIndirectDispatchArgs
                            (param_1,local_280,L"Skinning.UpdateViewData.IndirectArgs",
                             (TIntVector3<int> *)&local_220[0]._s_0,1,3);
      puVar27 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xb0,0x10);
      if (puVar27 == (undefined8 *)0x0) {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar23) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        puVar27[2] = 0;
        *puVar27 = &___7__TObject_VFParameters_FNaniteSkinningUpdateChunkCullCS___FRDGAllocator__6B_
        ;
        puVar27[6] = 0;
        puVar27[0xb] = 0;
        puVar27[0xc] = 0;
        puVar27[0xd] = 0;
        puVar27[0xe] = 0;
        puVar27[0xf] = 0;
        puVar27[0x10] = 0;
        puVar27[0x11] = 0;
        puVar27[0x12] = 0;
        puVar27[0x13] = 0;
        puVar35 = puVar27;
      }
      local_290 = puVar35;
      if ((((undefined8 **)param_1->_padding_ <= &local_290) &&
          (&local_290 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar25 = (int)param_1->_padding_;
      if (iVar25 == *(int *)((longlong)&param_1->_padding_ + 4)) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,
                            (int *)((longlong)&param_1->_padding_ + 4));
      }
      *(int *)&param_1->_padding_ = iVar25 + 1;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar25 * 8) = local_290;
      puVar35[8] = uVar9;
      puVar35[9] = uVar10;
      local_240._padding_._2_1_ = 0;
      *(uint *)(puVar35 + 10) = uVar5;
      *(uint *)((longlong)puVar35 + 0x54) = uVar6;
      *(undefined4 *)(puVar35 + 0xb) = uVar7;
      *(undefined4 *)((longlong)puVar35 + 0x5c) = uVar8;
      local_240.Buffer = local_248;
      puVar35[0xc] = pFVar37;
      puVar35[0xd] = pFVar11;
      puVar35[0xe] = pFVar12;
      puVar35[0xf] = pFVar13;
      puVar35[0x10] = pFVar14;
      puVar35[0x11] = pFVar15;
      *(float *)(puVar35 + 0x14) = GSkinningDefaultAnimationMinScreenSize;
      bVar24 = 0;
      if (((local_248->Desc).Usage & DrawIndirect) != None) {
        bVar24 = 0x1c;
      }
      local_240._padding_._0_2_ = (ushort)bVar24;
      local_278 = (FRDGBuffer *)(puVar35 + 2);
      pFVar28 = FRDGBuilder::CreateUAV(param_1,&local_240,None);
      puVar35[0x12] = pFVar28;
      local_230._padding_._2_1_ = 0;
      local_230.Buffer = local_250;
      bVar24 = 0;
      if (((local_250->Desc).Usage & DrawIndirect) != None) {
        bVar24 = 0x1c;
      }
      local_230._padding_._0_2_ = (ushort)bVar24;
      pFVar28 = FRDGBuilder::CreateUAV(param_1,&local_230,None);
      puVar35[0x13] = pFVar28;
      uVar16 = *(undefined8 *)&(local_258->WriterShaderParameters).Common.MaxPersistentViewId;
      uVar17 = *(undefined8 *)&(local_258->WriterShaderParameters).Common.InstanceMaskWordStride;
      uVar18 = *(undefined8 *)&(local_258->WriterShaderParameters).Common.field_0x18;
      pFVar28 = (local_258->WriterShaderParameters).OutDeformingInstanceViewMask;
      uVar19 = *(undefined8 *)&(local_258->WriterShaderParameters).field_0x28;
      (((FParameters *)(puVar35 + 2))->ViewDataParametersWriter).Common.InViews =
           (local_258->WriterShaderParameters).Common.InViews;
      puVar35[3] = uVar16;
      puVar35[4] = uVar17;
      puVar35[5] = uVar18;
      puVar35[6] = pFVar28;
      puVar35[7] = uVar19;
      pFVar29 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)local_280]);
      pFVar30 = FNaniteSkinningUpdateChunkCullCS::GetStaticType();
      if (*(int *)&pFVar30->field_0x50 != 1) {
        local_298 = 0;
        `FGlobalShaderMap::GetShader<FNaniteSkinningUpdateChunkCullCS>'::__l2::<lambda_1>::
        operator()(&local_298);
      }
      pFVar31 = (FShaderType *)FNaniteSkinningUpdateChunkCullCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar29,&local_1d8,pFVar31,0);
      if (local_1d8.ShaderContent == (FShader *)0x0) {
        FVar32 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1b8);
        ::FName::ToString((FName *)FVar32,&local_1a8);
        FNaniteSkinningUpdateChunkCullCS::GetStaticType();
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (bVar23) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FNaniteSkinningUpdateChunkCullCS::GetStaticType();
      local_198.ShaderContent = (FNaniteSkinningUpdateChunkCullCS *)local_1d8.ShaderContent;
      local_198.ShaderMap = local_1d8.ShaderMap;
      pFVar33 = FRDGEventName::FRDGEventName(&local_150,1,L"NaniteSkinningUpdateViewDataChunks");
      pFVar34 = FNaniteSkinningUpdateChunkCullCS::FParameters::FTypeInfo::GetStructMetadata();
      local_208._s_0.Y = 1;
      local_208._s_0.Z = 1;
      local_208._s_0.X = (int)(uVar6 + 0x3f + ((int)(uVar6 + 0x3f) >> 0x1f & 0x3fU)) >> 6;
      FComputeShaderUtils::AddPass<FNaniteSkinningUpdateChunkCullCS>
                (param_1,pFVar33,Compute,&local_198,pFVar34,(FParameters *)local_278,
                 (TIntVector3<int> *)&local_208._s_0);
      if (local_150.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_150.FormattedEventName.Data.AllocatorInstance.Data);
      }
      puVar35 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x100,0x10);
      if (puVar35 == (undefined8 *)0x0) {
        puVar35 = (undefined8 *)0x0;
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar23) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        *(undefined4 *)(puVar35 + 0x1f) = 4;
        *puVar35 = &___7__TObject_VFParameters_FNaniteSkinningUpdateViewDataCS___FRDGAllocator__6B_;
        puVar35[6] = 0;
        puVar35[7] = 0;
        puVar35[8] = 0;
        puVar35[9] = 0;
        puVar35[10] = 0;
        puVar35[0xc] = 0;
        puVar35[0x10] = 0;
        puVar35[0x15] = 0;
        puVar35[0x16] = 0;
        puVar35[0x17] = 0;
        puVar35[0x18] = 0;
        puVar35[0x19] = 0;
        puVar35[0x1a] = 0;
        puVar35[0x1b] = 0;
        puVar35[0x1c] = 0;
        puVar35[0x1e] = 0;
      }
      local_288 = puVar35;
      if ((((undefined8 **)param_1->_padding_ <= &local_288) &&
          (&local_288 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar25 = (int)param_1->_padding_;
      if (iVar25 == *(int *)((longlong)&param_1->_padding_ + 4)) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,
                            (int *)((longlong)&param_1->_padding_ + 4));
      }
      pFVar22 = local_260;
      pFVar1 = (FParameters *)(puVar35 + 2);
      *(int *)&param_1->_padding_ = iVar25 + 1;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar25 * 8) = local_288;
      pFVar36 = FGPUScene::GetShaderParameters
                          ((FGPUScene *)(local_260->SceneData->_padding_ + 0x3500),&local_118,
                           param_1);
      local_1f8._padding_._4_4_ = 0;
      local_1f8._padding_._0_4_ = 0xffffffff;
      uVar21 = (pFVar36->CommonParameters).GPUSceneInstanceDataTileSizeMask;
      uVar16 = *(undefined8 *)&(pFVar36->CommonParameters).GPUSceneInstanceDataTileStride;
      (pFVar1->GPUScene).CommonParameters.GPUSceneInstanceDataTileSizeLog2 =
           (pFVar36->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
      (pFVar1->GPUScene).CommonParameters.GPUSceneInstanceDataTileSizeMask = uVar21;
      puVar35[3] = uVar16;
      local_1f8._padding_ = 0;
      uVar16 = *(undefined8 *)&(pFVar36->CommonParameters).GPUSceneNumLightmapDataItems;
      puVar35[4] = *(undefined8 *)&(pFVar36->CommonParameters).GPUSceneMaxAllocatedInstanceId;
      puVar35[5] = uVar16;
      uStack_270 = 4;
      pFVar20 = pFVar36->GPUSceneInstancePayloadData;
      puVar35[6] = pFVar36->GPUSceneInstanceSceneData;
      puVar35[7] = pFVar20;
      pFVar20 = pFVar36->GPUSceneLightmapData;
      puVar35[8] = pFVar36->GPUScenePrimitiveSceneData;
      puVar35[9] = pFVar20;
      uVar16 = *(undefined8 *)&pFVar36->field_0x48;
      puVar35[10] = pFVar36->GPUSceneLightData;
      puVar35[0xb] = uVar16;
      uVar16 = *(undefined8 *)&(local_258->WriterShaderParameters).Common.MaxPersistentViewId;
      puVar35[0xc] = (local_258->WriterShaderParameters).Common.InViews;
      puVar35[0xd] = uVar16;
      uVar16 = *(undefined8 *)&(local_258->WriterShaderParameters).Common.field_0x18;
      puVar35[0xe] = *(undefined8 *)
                      &(local_258->WriterShaderParameters).Common.InstanceMaskWordStride;
      puVar35[0xf] = uVar16;
      pFVar28 = (local_258->WriterShaderParameters).OutDeformingInstanceViewMask;
      uVar16 = *(undefined8 *)&(local_258->WriterShaderParameters).field_0x28;
      puVar35[0x12] = uVar9;
      puVar35[0x13] = uVar10;
      local_278 = local_250;
      *(uint *)(puVar35 + 0x14) = uVar5;
      *(uint *)((longlong)puVar35 + 0xa4) = uVar6;
      *(undefined4 *)(puVar35 + 0x15) = uVar7;
      *(undefined4 *)((longlong)puVar35 + 0xac) = uVar8;
      local_1f8.Buffer = local_248;
      puVar35[0x16] = pFVar37;
      puVar35[0x17] = pFVar11;
      puVar35[0x18] = pFVar12;
      puVar35[0x19] = pFVar13;
      puVar35[0x10] = pFVar28;
      puVar35[0x11] = uVar16;
      puVar35[0x1a] = pFVar14;
      puVar35[0x1b] = pFVar15;
      *(float *)(puVar35 + 0x1d) = GSkinningDefaultAnimationMinScreenSize;
      puVar35[0x1e] = local_250;
      puVar35[0x1f] = CONCAT44(uStack_26c,4);
      local_1f8._padding_._0_1_ = 0;
      if (((local_248->Desc).Usage & DrawIndirect) != None) {
        local_1f8._padding_._0_1_ = 0x1c;
      }
      pFVar37 = FRDGBuilder::CreateSRV(param_1,&local_1f8);
      puVar35[0x1c] = pFVar37;
      pFVar29 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [*(int *)(pFVar22->SceneData->_padding_ + 8)]);
      pFVar30 = FNaniteSkinningUpdateViewDataCS::GetStaticType();
      if (*(int *)&pFVar30->field_0x50 != 1) {
        local_297[0] = 0;
        `FGlobalShaderMap::GetShader<FNaniteSkinningUpdateViewDataCS>'::__l2::<lambda_1>::operator()
                  (local_297);
      }
      pFVar31 = (FShaderType *)FNaniteSkinningUpdateViewDataCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar29,&local_1c8,pFVar31,0);
      if (local_1c8.ShaderContent == (FShader *)0x0) {
        FVar32 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1b0);
        ::FName::ToString((FName *)FVar32,&local_188);
        FNaniteSkinningUpdateViewDataCS::GetStaticType();
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (bVar23) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FNaniteSkinningUpdateViewDataCS::GetStaticType();
      pFVar3 = (FRDGBuffer *)puVar35[0x1e];
      local_178.ShaderContent = (FNaniteSkinningUpdateViewDataCS *)local_1c8.ShaderContent;
      local_178.ShaderMap = local_1c8.ShaderMap;
      local_c8._0_8_ = 0;
      local_a0 = (longlong *)0x0;
      pFVar33 = FRDGEventName::FRDGEventName(&local_138,1,L"NaniteSkinningUpdateViewData");
      FComputeShaderUtils::AddPass<FNaniteSkinningUpdateViewDataCS>
                (param_1,pFVar33,Compute,&local_178,pFVar1,pFVar3,0,
                 (TFunction<void___cdecl(void)> *)local_c8);
      if (local_138.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_138.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_c8._0_8_ != 0) {
        plVar38 = (longlong *)(local_c8 + 0x10);
        if (local_a0 != (longlong *)0x0) {
          plVar38 = local_a0;
        }
        (**(code **)(*plVar38 + 0x10))();
      }
    }
  }
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// UpdateSceneUniformBuffer @ 145929610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshPaintVirtualTextureSceneExtension::FRenderer::UpdateSceneUniformBuffer
          (FRenderer *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  FUniformParams *pFVar1;
  FShaderParametersMetadata *pFVar2;
  FRHITexture *local_48;
  FRHITexture *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  FUniformParams local_28;
  
  pFVar1 = MeshPaintVirtualTexture::GetUniformParams(&local_28);
  local_48 = (pFVar1->PageTableTexture).Reference;
  if (local_48 == (FRHITexture *)0x0) {
    local_48 = (GBlackUintTexture->TextureRHI).Reference;
  }
  local_40 = (pFVar1->PhysicalTexture).Reference;
  if (local_40 == (FRHITexture *)0x0) {
    local_40 = (FRHITexture *)GBlackTextureWithSRV->_padding_;
  }
  local_38 = *(undefined8 *)&(pFVar1->PackedUniform).field0_0x0;
  uStack_30 = *(undefined8 *)((longlong)&(pFVar1->PackedUniform).field0_0x0 + 8);
  if (local_28.PhysicalTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28.PhysicalTexture.Reference);
  }
  if (local_28.PageTableTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28.PageTableTexture.Reference);
  }
  pFVar2 = FMeshPaintTextureParameters::FTypeInfo::GetStructMetadata();
  FSceneUniformBuffer::Set(param_2,SceneUB::MeshPaint._32_4_,&local_48,pFVar2->Size);
  return;
}


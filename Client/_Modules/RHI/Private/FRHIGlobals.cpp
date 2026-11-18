// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FRHIGlobals @ 145c87860

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRHIGlobals * __thiscall FRHIGlobals::FRHIGlobals(FRHIGlobals *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  TVector2<float> TVar17;
  longlong lVar18;
  EShaderPlatform *pEVar19;
  
  bVar16 = (bool)UNK_150b50e2f;
  bVar15 = (bool)UNK_150b50e2e;
  bVar14 = (bool)UNK_150b50e2d;
  bVar13 = (bool)UNK_150b50e2c;
  bVar12 = (bool)UNK_150b50e2b;
  bVar11 = (bool)UNK_150b50e2a;
  bVar10 = (bool)UNK_150b50e29;
  bVar9 = (bool)UNK_150b50e28;
  bVar8 = (bool)UNK_150b50e27;
  bVar7 = (bool)UNK_150b50e26;
  bVar6 = (bool)UNK_150b50e25;
  bVar5 = (bool)UNK_150b50e24;
  bVar4 = (bool)UNK_150b50e23;
  bVar3 = (bool)UNK_150b50e22;
  bVar2 = (bool)UNK_150b50e21;
  bVar1 = (bool)__xmm_01010101010101010101010101010101;
  (this->GpuInfo).AdapterName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxViewDimensionForTypedBuffer).Value = 0x100000000;
  (this->MaxViewSizeBytesForNonTypedBuffer).Value = 0x100000000;
  (this->GpuInfo).AdapterName.Data.ArrayNum = 0;
  (this->GpuInfo).AdapterName.Data.ArrayMax = 0;
  (this->GpuInfo).AdapterInternalDriverVersion.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GpuInfo).AdapterInternalDriverVersion.Data.ArrayNum = 0;
  (this->GpuInfo).AdapterInternalDriverVersion.Data.ArrayMax = 0;
  (this->GpuInfo).AdapterUserDriverVersion.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->GpuInfo).AdapterUserDriverVersion.Data.ArrayNum = 0;
  (this->GpuInfo).AdapterUserDriverVersion.Data.ArrayMax = 0;
  (this->GpuInfo).AdapterDriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuInfo).AdapterDriverDate.Data.ArrayNum = 0;
  (this->GpuInfo).AdapterDriverDate.Data.ArrayMax = 0;
  (this->GpuInfo).AdapterDriverOnDenyList = false;
  (this->GpuInfo).DeviceId = 0;
  (this->GpuInfo).DeviceRevision = 0;
  (this->GpuInfo).IsAMDPreGCNArchitecture = false;
  (this->GpuInfo).VendorId = 0;
  (this->MaxComputeDispatchDimension).Value = 0xffff;
  (this->MaxShadowDepthBufferSizeX).Value = 0x800;
  (this->MaxShadowDepthBufferSizeY).Value = 0x800;
  (this->MaxTextureDimensions).Value = 0x800;
  (this->MaxConstantBufferByteSize).Value = 0x8000000;
  (this->MaxComputeSharedMemory).Value = 0x8000;
  (this->MaxVolumeTextureDimensions).Value = 0x800;
  (this->MaxCubeTextureDimensions).Value = 0x800;
  (this->MaxWorkGroupInvocations).Value = 0x400;
  this->IsRHIInitialized = false;
  this->PersistentThreadGroupCount = 0;
  this->MaxTextureMipCount = 0xf;
  this->SupportsQuadBufferStereo = false;
  this->SupportsRenderDepthTargetableShaderResources = true;
  this->SupportsDrawIndirect = true;
  this->SupportsMultiDrawIndirect = false;
  this->SupportsMultithreading = false;
  this->SupportsAsyncGetRenderQueryResult = false;
  this->SupportsPixelShaderUAVs = true;
  this->SupportsVertexShaderUAVs = false;
  this->SupportsRenderTargetFormat_PF_G8 = true;
  this->SupportsRenderTargetFormat_PF_FloatRGBA = true;
  this->SupportsShaderFramebufferFetch = false;
  this->SupportsShaderMRTFramebufferFetch = false;
  this->SupportsShaderFramebufferFetchProgrammableBlending = true;
  this->SupportsPixelLocalStorage = false;
  this->SupportsShaderDepthStencilFetch = false;
  this->SupportsTimestampRenderQueries = false;
  this->SupportsGPUTimestampBubblesRemoval = false;
  this->SupportsFrameCyclesBubblesRemoval = false;
  this->SupportsGPUUsage = false;
  this->HardwareHiddenSurfaceRemoval = false;
  this->SupportsAsyncTextureCreation = false;
  this->SupportsQuadTopology = false;
  this->SupportsRectTopology = false;
  this->SupportsPrimitiveShaders = false;
  this->SupportsAtomicUInt64 = false;
  this->SupportsDX12AtomicUInt64 = false;
  this->SupportsPipelineStateSortKey = false;
  this->SupportsParallelRenderingTasksWithSeparateRHIThread = true;
  this->RHIThreadNeedsKicking = false;
  this->MaximumInFlightQueries = 0x7fffffff;
  this->SupportsExactOcclusionQueries = true;
  this->SupportsVolumeTextureRendering = true;
  this->SupportsSeparateRenderTargetBlendState = false;
  this->SupportsDualSrcBlending = true;
  this->NeedsUnatlasedCSMDepthsWorkaround = false;
  this->SupportsTexture3D = true;
  this->UseTexture3DBulkData = false;
  this->SupportsMobileMultiView = false;
  this->SupportsImageExternal = false;
  this->SupportsWideMRT = true;
  this->SupportsDepthBoundsTest = false;
  this->SupportsExplicitHTile = false;
  this->SupportsExplicitFMask = false;
  this->SupportsResummarizeHTile = false;
  this->SupportsDepthUAV = false;
  this->SupportsEfficientAsyncCompute = false;
  this->SupportsAsyncComputeTransientAliasing = false;
  this->SupportsParallelOcclusionQueries = false;
  this->RequiresRenderTargetForPixelShaderUAVs = false;
  this->SupportsUAVFormatAliasing = false;
  this->SupportsTextureViews = true;
  this->SupportsDirectGPUMemoryLock = false;
  this->SupportsMultithreadedShaderCreation = true;
  this->SupportsMultithreadedResources = false;
  this->NeedsExtraDeletionLatency = false;
  this->ForceNoDeletionLatencyForStreamingTextures = false;
  this->LazyShaderCodeLoading = false;
  this->SupportsLazyShaderCodeLoading = false;
  this->SupportsUpdateFromBufferTexture = false;
  this->SupportsRWTextureBuffers = true;
  this->SupportsRawViewsForAnyBuffer = false;
  this->SupportsSeparateDepthStencilCopyAccess = true;
  this->SupportsAsyncTextureStreamOut = false;
  this->MaxTextureArrayLayers = 0x100;
  this->MaxTextureSamplers = 0x10;
  this->MaxSimultaneousUAVs = 8;
  this->UsingNullRHI = false;
  this->DrawUPVertexCheckCount = 0x7fffffff;
  this->DrawUPIndexCheckCount = 0x7fffffff;
  (this->VertexElementTypeSupport).ElementCaps[0] = bVar1;
  (this->VertexElementTypeSupport).ElementCaps[1] = bVar2;
  (this->VertexElementTypeSupport).ElementCaps[2] = bVar3;
  (this->VertexElementTypeSupport).ElementCaps[3] = bVar4;
  (this->VertexElementTypeSupport).ElementCaps[4] = bVar5;
  (this->VertexElementTypeSupport).ElementCaps[5] = bVar6;
  (this->VertexElementTypeSupport).ElementCaps[6] = bVar7;
  (this->VertexElementTypeSupport).ElementCaps[7] = bVar8;
  (this->VertexElementTypeSupport).ElementCaps[8] = bVar9;
  (this->VertexElementTypeSupport).ElementCaps[9] = bVar10;
  (this->VertexElementTypeSupport).ElementCaps[10] = bVar11;
  (this->VertexElementTypeSupport).ElementCaps[0xb] = bVar12;
  (this->VertexElementTypeSupport).ElementCaps[0xc] = bVar13;
  (this->VertexElementTypeSupport).ElementCaps[0xd] = bVar14;
  (this->VertexElementTypeSupport).ElementCaps[0xe] = bVar15;
  (this->VertexElementTypeSupport).ElementCaps[0xf] = bVar16;
  (this->VertexElementTypeSupport).ElementCaps[0x10] = bVar1;
  (this->VertexElementTypeSupport).ElementCaps[0x11] = bVar2;
  (this->VertexElementTypeSupport).ElementCaps[0x12] = bVar3;
  (this->VertexElementTypeSupport).ElementCaps[0x13] = bVar4;
  (this->VertexElementTypeSupport).ElementCaps[0x14] = bVar1;
  this->TriggerGPUProfile = false;
  this->TriggerGPUHitchProfile = false;
  this->TriggerGPUCrash = None;
  (this->GPUTraceFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GPUTraceFileName).Data.ArrayNum = 0;
  (this->GPUTraceFileName).Data.ArrayMax = 0;
  this->SupportsTextureStreaming = false;
  this->StreamingTextureMemorySizeInKB = 0;
  this->NonStreamingTextureMemorySizeInKB = 0;
  this->TexturePoolSize = 0;
  this->PoolSizeVRAMPercentage = 0;
  this->DemotedLocalMemorySize = 0;
  this->BufferMemorySize = 0;
  this->UniformBufferMemorySize = 0;
  this->SupportsBaseVertexIndex = true;
  this->SupportsFirstInstance = false;
  this->SupportsDynamicResolution = false;
  (this->RayTracing).Supported = false;
  (this->RayTracing).SupportsShaders = false;
  (this->RayTracing).SupportsPSOAdditions = false;
  (this->RayTracing).SupportsDispatchIndirect = false;
  (this->RayTracing).SupportsAsyncBuildAccelerationStructure = false;
  (this->RayTracing).SupportsAsyncRayTraceDispatch = false;
  (this->RayTracing).SupportsClusterOps = false;
  (this->RayTracing).SupportsAMDHitToken = false;
  (this->RayTracing).SupportsInlineRayTracing = false;
  (this->RayTracing).RequiresInlineRayTracingSBT = false;
  (this->RayTracing).SupportsInlinedCallbacks = false;
  (this->RayTracing).SupportsPersistentSBTs = false;
  (this->RayTracing).SupportsLooseParamsInShaderRecord = false;
  (this->RayTracing).SupportsAccelerationStructureCompaction = false;
  (this->RayTracing).SupportsSerializeAccelerationStructure = false;
  (this->RayTracing).RequiresSeparateHitGroupContributionsBuffer = false;
  (this->RayTracing).AccelerationStructureAlignment = 0;
  (this->RayTracing).ClusterAccelerationStructureAlignment = 0;
  (this->RayTracing).ClusterAccelerationStructureTemplateAlignment = 0;
  (this->RayTracing).ScratchBufferAlignment = 0;
  (this->RayTracing).ShaderTableAlignment = 0;
  (this->RayTracing).InstanceDescriptorSize = 0;
  this->SupportsWaveOperations = false;
  this->DeviceIsIntegrated = false;
  this->MinimumWaveSize = 0;
  this->MaximumWaveSize = 0;
  this->SupportsNative16BitOps = false;
  this->SupportsRHIThread = false;
  this->SupportsRHIOnTaskThread = false;
  this->SupportsParallelRHIExecute = false;
  this->SupportsParallelRenderPasses = false;
  this->ParallelRHIExecuteChildWait = false;
  this->ParallelRHIExecuteParentWait = false;
  this->SupportsMSAADepthSampleAccess = false;
  this->SupportsBackBufferWithCustomDepthStencil = true;
  this->IsHDREnabled = false;
  this->SupportsHDROutput = false;
  pEVar19 = this->ShaderPlatformForFeatureLevel;
  *(undefined8 *)&(this->MaxDispatchThreadGroupsPerDimension).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->MaxDispatchThreadGroupsPerDimension).field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  (this->VariableRateShading).SupportsPipeline = false;
  (this->VariableRateShading).SupportsLargerSizes = false;
  (this->VariableRateShading).SupportsAttachment = false;
  (this->VariableRateShading).SupportsComplexCombinerOps = false;
  (this->VariableRateShading).SupportsAttachmentArrayTextures = false;
  (this->VariableRateShading).ImageTileMaxWidth = 0;
  (this->VariableRateShading).ImageTileMaxHeight = 0;
  (this->VariableRateShading).ImageTileMinWidth = 0;
  (this->VariableRateShading).ImageTileMinHeight = 0;
  (this->VariableRateShading).ImageDataType = VRSImage_NotSupported;
  (this->VariableRateShading).ImageFormat = PF_Unknown;
  (this->VariableRateShading).SupportsLateUpdate = false;
  this->HDRDisplayOutputFormat = PF_FloatRGBA;
  this->PresentCounter = 1;
  this->SupportsArrayIndexFromAnyShader = false;
  this->SupportsPipelineFileCache = false;
  this->SupportsPSOPrecaching = false;
  this->SupportsStencilRefFromPixelShader = false;
  this->SupportsRasterOrderViews = false;
  this->SupportsConservativeRasterization = false;
  this->SupportsShaderRootConstants = false;
  (this->ShaderBundles).SupportsDispatch = false;
  *(undefined8 *)&(this->ShaderBundles).SupportsWorkGraphDispatch = 0;
  this->SupportsShaderTimestamp = false;
  this->SupportsEfficientUploadOnResourceCreation = false;
  this->SupportsMapWriteNoOverwrite = false;
  this->SupportsAsyncPipelinePrecompile = true;
  this->BindlessSupport = Unsupported;
  this->bSupportsBindless = false;
  (this->ReservedResources).Supported = false;
  (this->ReservedResources).SupportsVolumeTextures = false;
  (this->ReservedResources).TextureArrayMinimumMipDimension = 0x100;
  this->IsDebugLayerEnabled = false;
  this->NeedsShaderUnbinds = false;
  this->SupportsBarycentricsSemantic = false;
  this->SupportsMSAAShaderResolve = false;
  this->SupportsDepthStencilResolve = false;
  this->SupportLinearTextureVolumeFormat = true;
  this->SupportsShaderExecutionReordering = false;
  this->NeedsExtraTransitions = false;
  this->NeedsTransientDiscardStateTracking = false;
  this->NeedsTransientDiscardOnGraphicsWorkaround = false;
  this->SupportsLossyFramebufferCompression = false;
  this->SupportsBindingTexArrayPerSlice = false;
  this->NeedsSRVGraphicsNonPixelWorkaround = false;
  (this->PreferredPreviewShaderCodeFormat).ComparisonIndex = 0;
  TVar17 = GDefaultMSAASampleOffsets[1];
  (this->PreferredPreviewShaderCodeFormat).Number = 0;
  this->DefaultMSAASampleOffsets[0].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0].field0_0x0;
  this->DefaultMSAASampleOffsets[1].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[3];
  this->DefaultMSAASampleOffsets[2].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[2].field0_0x0;
  this->DefaultMSAASampleOffsets[3].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[5];
  this->DefaultMSAASampleOffsets[4].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[4].field0_0x0;
  this->DefaultMSAASampleOffsets[5].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[7];
  this->DefaultMSAASampleOffsets[6].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[6].field0_0x0;
  this->DefaultMSAASampleOffsets[7].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[9];
  this->DefaultMSAASampleOffsets[8].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[8].field0_0x0;
  this->DefaultMSAASampleOffsets[9].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0xb];
  this->DefaultMSAASampleOffsets[10].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[10].field0_0x0;
  this->DefaultMSAASampleOffsets[0xb].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0xd];
  this->DefaultMSAASampleOffsets[0xc].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0xc].field0_0x0;
  this->DefaultMSAASampleOffsets[0xd].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0xf];
  this->DefaultMSAASampleOffsets[0xe].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0xe].field0_0x0;
  this->DefaultMSAASampleOffsets[0xf].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0x11];
  this->DefaultMSAASampleOffsets[0x10].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0x10].field0_0x0;
  this->DefaultMSAASampleOffsets[0x11].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0x13];
  this->DefaultMSAASampleOffsets[0x12].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0x12].field0_0x0;
  this->DefaultMSAASampleOffsets[0x13].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0x15];
  this->DefaultMSAASampleOffsets[0x14].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0x14].field0_0x0;
  this->DefaultMSAASampleOffsets[0x15].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0x17];
  this->DefaultMSAASampleOffsets[0x16].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0x16].field0_0x0;
  this->DefaultMSAASampleOffsets[0x17].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0x19];
  this->DefaultMSAASampleOffsets[0x18].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0x18].field0_0x0;
  this->DefaultMSAASampleOffsets[0x19].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0x1b];
  this->DefaultMSAASampleOffsets[0x1a].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0x1a].field0_0x0;
  this->DefaultMSAASampleOffsets[0x1b].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  TVar17 = GDefaultMSAASampleOffsets[0x1d];
  this->DefaultMSAASampleOffsets[0x1c].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0x1c].field0_0x0;
  this->DefaultMSAASampleOffsets[0x1d].field0_0x0._s_0 = (TVector2<float>_u_0_s_0)TVar17.field0_0x0;
  this->DefaultMSAASampleOffsets[0x1e].field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)GDefaultMSAASampleOffsets[0x1e].field0_0x0;
  lVar18 = 5;
  if (pEVar19 <= &this->IsDebugLayerEnabled) {
    for (; lVar18 != 0; lVar18 = lVar18 + -1) {
      *pEVar19 = SP_NumPlatforms;
      pEVar19 = pEVar19 + 1;
    }
  }
  return this;
}

// ~FRHIGlobals @ 145c8b030

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FRHIGlobals::~FRHIGlobals(FRHIGlobals *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->GPUTraceFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GpuInfo).AdapterDriverDate.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GpuInfo).AdapterUserDriverVersion.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GpuInfo).AdapterInternalDriverVersion.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GpuInfo).AdapterName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}


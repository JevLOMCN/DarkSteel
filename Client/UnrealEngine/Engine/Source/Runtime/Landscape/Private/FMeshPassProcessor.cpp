// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_> @ 145f68a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FMeshPassProcessor::
AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
          (FMeshPassProcessor *this,FPSOPrecacheVertexFactoryData *param_1,FMaterial *param_2,
          FMeshPassProcessorRenderState *param_3,FGraphicsPipelineRenderTargetsInfo *param_4,
          TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
          *param_5,ERasterizerFillMode param_6,ERasterizerCullMode param_7,EPrimitiveType param_8,
          EMeshPassFeatures param_9,bool param_10,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_11)

{
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,None,'\0',
             param_10,(int)this->_padding_,param_11);
  return;
}

// AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_> @ 145f68ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FMeshPassProcessor::
AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
          (FPSOPrecacheVertexFactoryData *param_1,FMaterial *param_2,
          FMeshPassProcessorRenderState *param_3,FGraphicsPipelineRenderTargetsInfo *param_4,
          TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
          *param_5,ERasterizerFillMode param_6,ERasterizerCullMode param_7,EPrimitiveType param_8,
          EMeshPassFeatures param_9,ESubpassHint param_10,uchar param_11,bool param_12,int param_13,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_14)

{
  FPSOPrecacheData *pFVar1;
  code *pcVar2;
  FRHISamplerState *pFVar3;
  FRHISamplerState *pFVar4;
  bool bVar5;
  EVRSShadingRate EVar6;
  EPrimitiveType EVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> FVar15;
  FRHIVertexDeclaration *pFVar16;
  atomic<FRHIShader_*> aVar17;
  FPrecacheStatsCollector *pFVar18;
  EVertexInputStreamType EVar19;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> FVar20;
  ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> _Src;
  bool bVar21;
  bool bVar22;
  undefined1 auStackY_6b8 [32];
  FGraphicsMinimalPipelineStateInitializer local_658;
  FRHIBlendState *local_5b8;
  FRHIRasterizerState *local_5b0;
  FRHIDepthStencilState *local_5a8;
  FGraphicsPipelineRenderTargetsInfo *local_5a0;
  ETextureCreateFlags local_598;
  ETextureCreateFlags EStack_590;
  ETextureCreateFlags local_588;
  ETextureCreateFlags EStack_580;
  ETextureCreateFlags local_578;
  ETextureCreateFlags EStack_570;
  ETextureCreateFlags local_568;
  ETextureCreateFlags EStack_560;
  FMeshProcessorShaders local_558;
  FMeshProcessorShaders local_4f8;
  FGraphicsMinimalPipelineStateInitializer local_498;
  FGraphicsMinimalPipelineStateInitializer local_3f8;
  FPSOPrecacheData local_358;
  FGraphicsPipelineStateInitializer local_218;
  TArray<TShaderRefBase<FShader,FShaderMapPointerTable>,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  local_138;
  TArray<FVertexElement,TFixedAllocator<17>_> local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  bVar21 = -1 < CpuChannel->Enabled;
  local_5a0 = param_4;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_void___cdecl_FMeshPassProcessor::AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,EMeshPassFeatures,ESubpassHint,unsigned_char,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId258,
               "FMeshPassProcessor::AddGraphicsPipelineStateInitializer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.inl"
               ,0x102);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_void___cdecl_FMeshPassProcessor::AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>(FPSOPrecacheVertexFactoryData_const&___ptr64,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,FGraphicsPipelineRenderTargetsInfo_const&___ptr64___restrict,TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,EPrimitiveType,EMeshPassFeatures,ESubpassHint,unsigned_char,bool,int,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_>&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId258);
  }
  local_358.Type = Graphics;
  local_358.bRequired = true;
  local_358.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData =
       (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
  local_358.ShaderPreloadData.Shaders.ArrayNum = 0;
  local_358.VertexFactoryType = (FVertexFactoryType *)0x0;
  local_358.ShaderPreloadData.Shaders.ArrayMax = 3;
  local_358.bDefaultMaterial = 0;
  local_358.PSOCollectorIndex = -1;
  bVar9 = IsPSOShaderPreloadingEnabled();
  if (bVar9) {
    local_558.WorkGraphShader.ShaderContent = (FShader *)0x0;
    local_558.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
    local_558.VertexShader.ShaderContent = (FShader *)(param_5->VertexShader).ShaderContent;
    local_558.VertexShader.ShaderMap = (param_5->VertexShader).ShaderMap;
    local_558.PixelShader.ShaderContent = (FShader *)(param_5->PixelShader).ShaderContent;
    local_558.PixelShader.ShaderMap = (param_5->PixelShader).ShaderMap;
    local_558.GeometryShader.ShaderContent = (FShader *)(param_5->GeometryShader).ShaderContent;
    local_558.GeometryShader.ShaderMap = (param_5->GeometryShader).ShaderMap;
    local_558.ComputeShader.ShaderContent = (FShader *)(param_5->ComputeShader).ShaderContent;
    local_558.ComputeShader.ShaderMap = (param_5->ComputeShader).ShaderMap;
    local_558.RayTracingShader.ShaderContent = (FShader *)(param_5->RayTracingShader).ShaderContent;
    local_558.RayTracingShader.ShaderMap = (param_5->RayTracingShader).ShaderMap;
    FVar15 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
             FMeshProcessorShaders::GetValidShaders(&local_558,&local_138);
    if (((ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
         &local_358.ShaderPreloadData == FVar15) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar14 = *(int *)((longlong)FVar15 + 0x38);
    if (iVar14 != 0) {
      iVar13 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>_>
                         (0x10,8,iVar14,
                          (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *)
                          &local_358.ShaderPreloadData,&local_358.ShaderPreloadData.Shaders.ArrayNum
                          ,&local_358.ShaderPreloadData.Shaders.ArrayMax);
      _Src = FVar15;
      if (*(ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *)
           ((longlong)FVar15 + 0x30) !=
          (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
        _Src = *(ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_> *)
                ((longlong)FVar15 + 0x30);
      }
      FVar20 = (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)
               &local_358.ShaderPreloadData;
      if (local_358.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData !=
          (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
        FVar20 = local_358.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData;
      }
      memmove((void *)((longlong)iVar13 * 0x10 + (longlong)FVar20),(void *)_Src,
              (longlong)iVar14 << 4);
      *(int *)((longlong)FVar15 + 0x38) = 0;
    }
    if (local_138.AllocatorInstance.SecondaryData !=
        (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
      FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
    }
    goto LAB_145f68ce6;
  }
  local_658.BoundShaderState.VertexShaderResource.Reference = (FShaderMapResource *)0x0;
  local_658.BoundShaderState.PixelShaderResource.Reference = (FShaderMapResource *)0x0;
  local_658.PrimitiveType = param_8;
  local_658.BoundShaderState.VertexShaderIndex = ___xmm_ffffffffffffffffffffffffffffffff;
  local_658.BoundShaderState.PixelShaderIndex = _UNK_15060db24;
  local_658.BoundShaderState.GeometryShaderIndex = _UNK_15060db28;
  local_658.BoundShaderState.MeshShaderIndex = _UNK_15060db2c;
  EVar19 = (EVertexInputStreamType)param_9 & PositionOnly;
  local_658.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_658.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_658.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_658.BoundShaderState.CachedVertexShader = (FRHIVertexShader *)0x0;
  local_658.BoundShaderState.CachedPixelShader = (FRHIPixelShader *)0x0;
  local_658.BoundShaderState.bAllShaderAreLoaded = true;
  local_658.BoundShaderState.CachedGeometryShader = (FRHIGeometryShader *)0x0;
  local_658.BoundShaderState.CachedMeshShader = (FRHIMeshShader *)0x0;
  local_658.BoundShaderState.GeometryShaderResource.Reference = (FShaderMapResource *)0x0;
  local_658.BoundShaderState.MeshShaderResource.Reference = (FShaderMapResource *)0x0;
  local_658.BlendState = (FRHIBlendState *)0x0;
  local_658.RasterizerState = (FRHIRasterizerState *)0x0;
  local_658.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_658.bDepthBounds = false;
  local_658.bAllowVariableRateShading = true;
  local_658.DrawShadingRate = VRSSR_1x1;
  local_658.StatePrecachePSOHash = 0;
  local_658.PSOPrecacheState = Unknown;
  if ((param_9 & PositionAndNormalOnly) == Default) {
    if (((param_9 & PositionOnly) != Default) ||
       (pFVar16 = param_1->CustomDefaultVertexDeclaration, pFVar16 == (FRHIVertexDeclaration *)0x0))
    goto LAB_145f68efd;
  }
  else {
    EVar19 = PositionAndNormalOnly;
LAB_145f68efd:
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0x11;
    (*param_1->VertexFactoryType->GetPSOPrecacheVertexFetchElements)(EVar19,&local_f8);
    pFVar16 = PipelineStateCache::GetOrCreateVertexDeclaration(&local_f8);
    if ((pFVar16 == (FRHIVertexDeclaration *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexDeclaration",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.inl"
                           ,0x121,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_4f8.WorkGraphShader.ShaderContent = (FShader *)0x0;
  local_4f8.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
  local_4f8.VertexShader.ShaderContent = (FShader *)(param_5->VertexShader).ShaderContent;
  local_4f8.VertexShader.ShaderMap = (param_5->VertexShader).ShaderMap;
  local_4f8.PixelShader.ShaderContent = (FShader *)(param_5->PixelShader).ShaderContent;
  local_4f8.PixelShader.ShaderMap = (param_5->PixelShader).ShaderMap;
  local_4f8.GeometryShader.ShaderContent = (FShader *)(param_5->GeometryShader).ShaderContent;
  local_4f8.GeometryShader.ShaderMap = (param_5->GeometryShader).ShaderMap;
  local_4f8.ComputeShader.ShaderContent = (FShader *)(param_5->ComputeShader).ShaderContent;
  local_4f8.ComputeShader.ShaderMap = (param_5->ComputeShader).ShaderMap;
  local_4f8.RayTracingShader.ShaderContent = (FShader *)(param_5->RayTracingShader).ShaderContent;
  local_4f8.RayTracingShader.ShaderMap = (param_5->RayTracingShader).ShaderMap;
  FGraphicsMinimalPipelineStateInitializer::SetupBoundShaderState(&local_658,pFVar16,&local_4f8);
  local_658.RasterizerState = GetStaticRasterizerState<1>(param_6,param_7);
  if ((param_3->DepthStencilState == (FRHIDepthStencilState *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DrawRenderState.GetDepthStencilState()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.inl"
                         ,0x126,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3->BlendState == (FRHIBlendState *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DrawRenderState.GetBlendState()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.inl"
                         ,0x127,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_658.BlendState = param_3->BlendState;
  local_658.DepthStencilState = param_3->DepthStencilState;
  iVar14 = (**(code **)(param_2->_padding_ + 0x4b0))(param_2);
  if (iVar14 == 0) goto LAB_145f690b8;
  if (iVar14 == 1) {
    local_658.DrawShadingRate = VRSSR_2x1;
  }
  else if (iVar14 == 2) {
    local_658.DrawShadingRate = VRSSR_1x2;
  }
  else if (iVar14 == 3) {
    local_658.DrawShadingRate = VRSSR_2x2;
  }
  else if (GRHIGlobals.VariableRateShading.SupportsLargerSizes == false) {
LAB_145f690b8:
    local_658.DrawShadingRate = VRSSR_1x1;
  }
  else if (iVar14 == 4) {
    local_658.DrawShadingRate = VRSSR_4x2;
  }
  else if (iVar14 == 5) {
    local_658.DrawShadingRate = VRSSR_2x4;
  }
  else {
    if (iVar14 != 6) goto LAB_145f690b8;
    local_658.DrawShadingRate = VRSSR_4x4;
  }
  cVar11 = (**(code **)(param_2->_padding_ + 0x4c0))(param_2);
  if ((cVar11 == '\0') ||
     (bVar9 = HardwareVariableRateShadingSupportedByPlatform(GMaxRHIShaderPlatform), !bVar9)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  EVar7 = local_658.PrimitiveType;
  EVar6 = local_658.DrawShadingRate;
  pFVar4 = local_658.ImmutableSamplerState.ImmutableSamplers.Elements[1];
  pFVar3 = local_658.ImmutableSamplerState.ImmutableSamplers.Elements[0];
  bVar5 = local_658.bDepthBounds;
  bVar22 = true;
  local_598 = None;
  EStack_590 = None;
  local_588 = None;
  EStack_580 = None;
  local_578 = None;
  EStack_570 = None;
  local_568 = None;
  EStack_560 = None;
  local_5a8 = local_658.DepthStencilState;
  local_5b0 = local_658.RasterizerState;
  local_5b8 = local_658.BlendState;
  local_658.bAllowVariableRateShading = bVar9;
  bVar12 = FMinimalBoundShaderStateInput::AllowSkipUnloadedShaders(&local_658.BoundShaderState);
  if (((atomic<FRHIShader_*>)local_658.BoundShaderState.CachedVertexShader ==
       (atomic<FRHIShader_*>)0x0) ||
     (aVar17 = (atomic<FRHIShader_*>)local_658.BoundShaderState.CachedVertexShader,
     bVar8 = local_658.BoundShaderState.bAllShaderAreLoaded,
     local_658.BoundShaderState.bAllShaderAreLoaded == false)) {
    if (local_658.BoundShaderState.PixelShaderResource.Reference == (FShaderMapResource *)0x0) {
      aVar17 = (atomic<FRHIShader_*>)0x0;
    }
    else {
      aVar17 = ((local_658.BoundShaderState.PixelShaderResource.Reference)->RHIShaders).Ptr
               [local_658.BoundShaderState.PixelShaderIndex];
      bVar22 = false;
      if (aVar17 == (atomic<FRHIShader_*>)0x0) {
        aVar17 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (local_658.BoundShaderState.PixelShaderResource.Reference,
                            local_658.BoundShaderState.PixelShaderIndex,!bVar12);
        bVar22 = aVar17 == (atomic<FRHIShader_*>)0x0;
      }
      bVar22 = !bVar22;
    }
    local_658.BoundShaderState.CachedPixelShader = (FRHIPixelShader *)aVar17;
    if (local_658.BoundShaderState.GeometryShaderResource.Reference == (FShaderMapResource *)0x0) {
      aVar17 = (atomic<FRHIShader_*>)0x0;
    }
    else {
      aVar17 = ((local_658.BoundShaderState.GeometryShaderResource.Reference)->RHIShaders).Ptr
               [local_658.BoundShaderState.GeometryShaderIndex];
      if (aVar17 == (atomic<FRHIShader_*>)0x0) {
        aVar17 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (local_658.BoundShaderState.GeometryShaderResource.Reference,
                            local_658.BoundShaderState.GeometryShaderIndex,true);
      }
    }
    local_658.BoundShaderState.CachedGeometryShader = (FRHIGeometryShader *)aVar17;
    if (local_658.BoundShaderState.MeshShaderResource.Reference == (FShaderMapResource *)0x0) {
      aVar17 = (atomic<FRHIShader_*>)0x0;
    }
    else {
      aVar17 = ((local_658.BoundShaderState.MeshShaderResource.Reference)->RHIShaders).Ptr
               [local_658.BoundShaderState.MeshShaderIndex];
      if (aVar17 == (atomic<FRHIShader_*>)0x0) {
        aVar17 = (atomic<FRHIShader_*>)
                 FShaderMapResource::CreateShaderOrCrash
                           (local_658.BoundShaderState.MeshShaderResource.Reference,
                            local_658.BoundShaderState.MeshShaderIndex,true);
      }
    }
    bVar8 = bVar22;
    local_658.BoundShaderState.CachedMeshShader = (FRHIMeshShader *)aVar17;
    if (local_658.BoundShaderState.VertexShaderResource.Reference == (FShaderMapResource *)0x0) {
      aVar17 = (atomic<FRHIShader_*>)0x0;
    }
    else {
      aVar17 = ((local_658.BoundShaderState.VertexShaderResource.Reference)->RHIShaders).Ptr
               [local_658.BoundShaderState.VertexShaderIndex];
      if ((aVar17 == (atomic<FRHIShader_*>)0x0) &&
         (aVar17 = (atomic<FRHIShader_*>)
                   FShaderMapResource::CreateShaderOrCrash
                             (local_658.BoundShaderState.VertexShaderResource.Reference,
                              local_658.BoundShaderState.VertexShaderIndex,!bVar12),
         aVar17 == (atomic<FRHIShader_*>)0x0)) {
        bVar8 = false;
      }
    }
  }
  local_658.BoundShaderState.bAllShaderAreLoaded = bVar8;
  local_658.BoundShaderState.CachedVertexShader = (FRHIVertexShader *)aVar17;
  local_218.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_218.BoundShaderState.VertexShaderRHI = local_658.BoundShaderState.CachedVertexShader;
  local_218.BoundShaderState.MeshShaderRHI =
       (FRHIMeshShader *)local_218.BoundShaderState.AmplificationShaderRHI;
  local_218.BoundShaderState.GeometryShaderRHI = local_658.BoundShaderState.CachedGeometryShader;
  local_218.BoundShaderState.VertexDeclarationRHI = local_658.BoundShaderState.VertexDeclarationRHI;
  if ((atomic<FRHIShader_*>)local_658.BoundShaderState.CachedMeshShader != (atomic<FRHIShader_*>)0x0
     ) {
    local_218.BoundShaderState.VertexShaderRHI =
         (FRHIVertexShader *)local_218.BoundShaderState.AmplificationShaderRHI;
    local_218.BoundShaderState.MeshShaderRHI = local_658.BoundShaderState.CachedMeshShader;
    local_218.BoundShaderState.GeometryShaderRHI =
         (FRHIGeometryShader *)local_218.BoundShaderState.AmplificationShaderRHI;
    local_218.BoundShaderState.VertexDeclarationRHI =
         (FRHIVertexDeclaration *)local_218.BoundShaderState.AmplificationShaderRHI;
  }
  local_218.BoundShaderState.PixelShaderRHI = local_658.BoundShaderState.CachedPixelShader;
  local_218.BlendState = local_5b8;
  local_218.RasterizerState = local_5b0;
  local_218.DepthStencilState = local_5a8;
  local_218.PrimitiveType = EVar7;
  local_218.RenderTargetFlags.Elements[0] = local_598;
  local_218.RenderTargetFlags.Elements[1] = EStack_590;
  local_218.RenderTargetFlags.Elements[2] = local_588;
  local_218.RenderTargetFlags.Elements[3] = EStack_580;
  local_218.bDepthBounds = bVar5;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[0] = pFVar3;
  local_218.ImmutableSamplerState.ImmutableSamplers.Elements[1] = pFVar4;
  local_218.RenderTargetsEnabled = 0;
  local_218.RenderTargetFormats.Elements[0] = '\0';
  local_218.RenderTargetFormats.Elements[1] = '\0';
  local_218.RenderTargetFormats.Elements[2] = '\0';
  local_218.RenderTargetFormats.Elements[3] = '\0';
  local_218.RenderTargetFormats.Elements[4] = '\0';
  local_218.RenderTargetFormats.Elements[5] = '\0';
  local_218.RenderTargetFormats.Elements[6] = '\0';
  local_218.RenderTargetFormats.Elements[7] = '\0';
  local_218.RenderTargetFlags.Elements[4] = local_578;
  local_218.RenderTargetFlags.Elements[5] = EStack_570;
  local_218.RenderTargetFlags.Elements[6] = local_568;
  local_218.RenderTargetFlags.Elements[7] = EStack_560;
  local_218.DepthStencilTargetFormat = PF_Unknown;
  local_218.DepthTargetLoadAction = ENoAction;
  local_218.DepthTargetStoreAction = ENoAction;
  local_218.StencilTargetLoadAction = ENoAction;
  local_218.StencilTargetStoreAction = ENoAction;
  local_218.DepthStencilAccess.Value = DepthNop;
  local_218.NumSamples = 0;
  local_218.SubpassHint = None;
  local_218.SubpassIndex = '\0';
  local_218.ConservativeRasterization = Disabled;
  local_218.MultiViewCount = '\0';
  local_218.bHasFragmentDensityAttachment = false;
  local_218.ShadingRate = EVar6;
  local_218.field25_0xd2.Flags = 0;
  local_218.BoundShaderState.WorkGraphMeshShaderRHI =
       (FRHIWorkGraphShader *)local_218.BoundShaderState.AmplificationShaderRHI;
  local_218.DepthStencilTargetFlag =
       (ETextureCreateFlags)local_218.BoundShaderState.AmplificationShaderRHI;
  local_218.bAllowVariableRateShading = bVar9;
  local_218.StatePrecachePSOHash = (ulong64)local_218.BoundShaderState.AmplificationShaderRHI;
  bVar9 = PipelineStateCache::IsPSOPrecachingEnabled();
  aVar17 = (atomic<FRHIShader_*>)local_218.StatePrecachePSOHash;
  if ((bVar9) &&
     (aVar17 = (atomic<FRHIShader_*>)local_658.StatePrecachePSOHash,
     (atomic<FRHIShader_*>)local_658.StatePrecachePSOHash == (atomic<FRHIShader_*>)0x0)) {
    aVar17 = (atomic<FRHIShader_*>)
             (**(code **)(GDynamicRHI->_padding_ + 0x2d0))(GDynamicRHI,&local_218);
  }
  local_218.StatePrecachePSOHash = (ulong64)aVar17;
  bVar9 = PSOCollectorStats::IsFullPrecachingValidationEnabled();
  if (bVar9) {
    local_658.StatePrecachePSOHash = local_218.StatePrecachePSOHash;
    PSOCollectorStats::GetShadersOnlyInitializer(&local_3f8,&local_658);
    pFVar18 = PSOCollectorStats::GetShadersOnlyPSOPrecacheStatsCollector();
    PSOCollectorStats::FPrecacheStatsCollector::
    AddStateToCache<FGraphicsMinimalPipelineStateInitializer>
              (pFVar18,MeshPass,&local_3f8,PSOCollectorStats::GetPSOPrecacheHash,param_2,param_13,
               param_1->VertexFactoryType);
    PSOCollectorStats::PatchMinimalPipelineStateToCheck(&local_498,&local_658);
    pFVar18 = PSOCollectorStats::GetMinimalPSOPrecacheStatsCollector();
    PSOCollectorStats::FPrecacheStatsCollector::
    AddStateToCache<FGraphicsMinimalPipelineStateInitializer>
              (pFVar18,MeshPass,&local_498,PSOCollectorStats::GetPSOPrecacheHash,param_2,param_13,
               param_1->VertexFactoryType);
    if (local_498.BoundShaderState.MeshShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_498.BoundShaderState.MeshShaderResource.Reference);
    }
    if (local_498.BoundShaderState.GeometryShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_498.BoundShaderState.GeometryShaderResource.Reference);
    }
    if (local_498.BoundShaderState.PixelShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_498.BoundShaderState.PixelShaderResource.Reference);
    }
    if (local_498.BoundShaderState.VertexShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_498.BoundShaderState.VertexShaderResource.Reference);
    }
    if (local_3f8.BoundShaderState.MeshShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_3f8.BoundShaderState.MeshShaderResource.Reference);
    }
    if (local_3f8.BoundShaderState.GeometryShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_3f8.BoundShaderState.GeometryShaderResource.Reference);
    }
    if (local_3f8.BoundShaderState.PixelShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_3f8.BoundShaderState.PixelShaderResource.Reference);
    }
    if (local_3f8.BoundShaderState.VertexShaderResource.Reference != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(local_3f8.BoundShaderState.VertexShaderResource.Reference);
    }
  }
  ApplyTargetsInfo(&local_218,local_5a0);
  local_218.SubpassHint = param_10;
  local_218.SubpassIndex = param_11;
  local_358.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
       local_218.BoundShaderState.VertexDeclarationRHI;
  local_358.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexShaderRHI =
       local_218.BoundShaderState.VertexShaderRHI;
  local_358.field2_0x8.GraphicsPSOInitializer.BoundShaderState.PixelShaderRHI =
       local_218.BoundShaderState.PixelShaderRHI;
  local_358.field2_0x8.GraphicsPSOInitializer.BoundShaderState.MeshShaderRHI =
       local_218.BoundShaderState.MeshShaderRHI;
  local_358.field2_0x8.GraphicsPSOInitializer.BoundShaderState.AmplificationShaderRHI =
       local_218.BoundShaderState.AmplificationShaderRHI;
  local_358.field2_0x8.GraphicsPSOInitializer.BoundShaderState.GeometryShaderRHI =
       local_218.BoundShaderState.GeometryShaderRHI;
  local_358.field2_0x8.GraphicsPSOInitializer.BoundShaderState.WorkGraphMeshShaderRHI =
       local_218.BoundShaderState.WorkGraphMeshShaderRHI;
  local_358.field2_0x8.GraphicsPSOInitializer.BlendState = local_218.BlendState;
  local_358.field2_0x8.GraphicsPSOInitializer.RasterizerState = local_218.RasterizerState;
  local_358.field2_0x8.GraphicsPSOInitializer.DepthStencilState = local_218.DepthStencilState;
  local_358.field2_0x8._96_8_ = CONCAT44(local_218.RenderTargetsEnabled,local_218.PrimitiveType);
  local_358.field2_0x8._108_1_ = local_218.RenderTargetFormats.Elements[4];
  local_358.field2_0x8._109_1_ = local_218.RenderTargetFormats.Elements[5];
  local_358.field2_0x8._110_1_ = local_218.RenderTargetFormats.Elements[6];
  local_358.field2_0x8._111_1_ = local_218.RenderTargetFormats.Elements[7];
  local_358.field2_0x8._104_1_ = local_218.RenderTargetFormats.Elements[0];
  local_358.field2_0x8._105_1_ = local_218.RenderTargetFormats.Elements[1];
  local_358.field2_0x8._106_1_ = local_218.RenderTargetFormats.Elements[2];
  local_358.field2_0x8._107_1_ = local_218.RenderTargetFormats.Elements[3];
  local_358.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       local_218.ImmutableSamplerState.ImmutableSamplers.Elements[0];
  local_358.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
       local_218.ImmutableSamplerState.ImmutableSamplers.Elements[1];
  local_358.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[0] =
       local_218.RenderTargetFlags.Elements[0];
  local_358.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[1] =
       local_218.RenderTargetFlags.Elements[1];
  local_358.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[2] =
       local_218.RenderTargetFlags.Elements[2];
  local_358.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[3] =
       local_218.RenderTargetFlags.Elements[3];
  local_358.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[4] =
       local_218.RenderTargetFlags.Elements[4];
  local_358.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[5] =
       local_218.RenderTargetFlags.Elements[5];
  local_358.field2_0x8._176_8_ = CONCAT71(local_218._177_7_,local_218.DepthStencilTargetFormat);
  local_358.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[6] =
       local_218.RenderTargetFlags.Elements[6];
  local_358.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[7] =
       local_218.RenderTargetFlags.Elements[7];
  local_358.field2_0x8._200_8_ =
       CONCAT26(local_218._206_2_,
                CONCAT15(local_218.bDepthBounds,
                         CONCAT14(local_218.ConservativeRasterization,
                                  CONCAT13(param_11,CONCAT12(param_10,local_218.NumSamples)))));
  local_358.field2_0x8.GraphicsPSOInitializer.DepthStencilTargetFlag =
       local_218.DepthStencilTargetFlag;
  local_358.field2_0x8._208_8_ =
       CONCAT44(local_218._212_4_,
                CONCAT22(local_218.field25_0xd2.Flags,
                         CONCAT11(local_218.ShadingRate,local_218.bAllowVariableRateShading)));
  local_358.field2_0x8.GraphicsPSOInitializer.DepthTargetLoadAction =
       local_218.DepthTargetLoadAction;
  local_358.field2_0x8.GraphicsPSOInitializer.DepthTargetStoreAction =
       local_218.DepthTargetStoreAction;
  local_358.field2_0x8.GraphicsPSOInitializer.StencilTargetLoadAction =
       local_218.StencilTargetLoadAction;
  local_358.field2_0x8.GraphicsPSOInitializer.StencilTargetStoreAction =
       local_218.StencilTargetStoreAction;
  local_358.field2_0x8.GraphicsPSOInitializer.DepthStencilAccess.Value =
       (FExclusiveDepthStencil)local_218.DepthStencilAccess.Value;
  local_358.field2_0x8.GraphicsPSOInitializer.StatePrecachePSOHash = local_218.StatePrecachePSOHash;
  if (local_658.BoundShaderState.MeshShaderResource.Reference != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(local_658.BoundShaderState.MeshShaderResource.Reference);
  }
  if (local_658.BoundShaderState.GeometryShaderResource.Reference != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(local_658.BoundShaderState.GeometryShaderResource.Reference);
  }
  if (local_658.BoundShaderState.PixelShaderResource.Reference != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(local_658.BoundShaderState.PixelShaderResource.Reference);
  }
  if (local_658.BoundShaderState.VertexShaderResource.Reference != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(local_658.BoundShaderState.VertexShaderResource.Reference);
  }
LAB_145f68ce6:
  local_358._0_2_ = (ushort)param_12 << 8;
  local_358.PSOCollectorIndex = param_13;
  local_358.VertexFactoryType = param_1->VertexFactoryType;
  bVar9 = PSOCollectorStats::IsFullPrecachingValidationEnabled();
  if (bVar9) {
    bVar10 = (**(code **)(param_2->_padding_ + 0x418))(param_2);
    local_358._296_4_ = (uint)bVar10 << 0x1f | local_358._296_4_ & 0x7fffffff;
    ConditionalBreakOnPSOPrecacheShader(&local_358.field2_0x8.GraphicsPSOInitializer);
  }
  pFVar1 = (FPSOPrecacheData *)(param_14->AllocatorInstance).Data;
  if (((pFVar1 <= &local_358) && (&local_358 < pFVar1 + param_14->ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar14 = param_14->ArrayNum;
  if (iVar14 == param_14->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x138,8,&param_14->AllocatorInstance,&param_14->ArrayMax);
  }
  param_14->ArrayNum = iVar14 + 1;
  FPSOPrecacheData::FPSOPrecacheData
            ((FPSOPrecacheData *)((param_14->AllocatorInstance).Data + (longlong)iVar14 * 0x138),
             &local_358);
  if (local_358.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData !=
      (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
    FMemory::Free((void *)local_358.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildMeshDrawCommands<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FLandscapeGrassWeightShaderElementData> @ 145f6aea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMeshPassProcessor::
BuildMeshDrawCommands<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FLandscapeGrassWeightShaderElementData>
          (FMeshPassProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,
          FMeshPassProcessorRenderState *param_6,
          TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
          *param_7,ERasterizerFillMode param_8,ERasterizerCullMode param_9,
          FMeshDrawCommandSortKey param_10,EMeshPassFeatures param_11,
          FLandscapeGrassWeightShaderElementData *param_12)

{
  int iVar1;
  FGenericStaticFeatureLevel FVar2;
  FVertexFactory *this_00;
  FRHIVertexDeclaration *pFVar3;
  FLandscapeGrassWeightVS *pFVar4;
  FLandscapeGrassWeightPS *pFVar5;
  FSceneView *pFVar6;
  FShaderMapBase *pFVar7;
  FScene *pFVar8;
  FMeshMaterialShader *this_01;
  code *pcVar9;
  byte bVar10;
  FLandscapeGrassWeightShaderElementData *pFVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar18;
  FVertexFactoryType *pFVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar24;
  ForElementType<FMeshBatchElement> FVar25;
  byte bVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  FMeshBatchElement *pFVar30;
  longlong *plVar31;
  undefined8 *puVar32;
  int iVar33;
  FPrimitiveSceneProxy *pFVar34;
  FData *pFVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 auStackY_498 [32];
  uint local_424;
  uint local_420;
  uint local_410;
  undefined1 local_40c;
  undefined1 local_40b;
  undefined1 local_40a;
  undefined1 local_409;
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406 [2];
  int local_404;
  uint local_400;
  FMeshPassProcessor *local_3f8;
  FPrimitiveSceneProxy *local_3f0;
  TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  *local_3e8;
  longlong local_3e0;
  uint local_3d8;
  ulonglong local_3d0;
  ulonglong local_3c8;
  FMaterialRenderProxy *local_3c0;
  ForElementType<FMeshBatchElement> local_3b8;
  FLandscapeGrassWeightShaderElementData *local_3b0;
  ERasterizerCullMode local_3a8;
  ERasterizerFillMode local_3a4;
  FVertexFactory *local_3a0;
  FMeshBatchElement *local_398;
  undefined4 local_388;
  ushort local_384;
  undefined4 local_378;
  ushort local_374;
  FPrimitiveSceneInfo *local_368;
  ulonglong local_360;
  ulonglong local_358;
  FMeshDrawSingleShaderBindings local_350;
  FMeshDrawSingleShaderBindings local_340;
  FMeshDrawSingleShaderBindings local_330;
  FMeshDrawSingleShaderBindings local_320;
  FMeshDrawSingleShaderBindings local_310;
  FMeshDrawSingleShaderBindings local_300;
  FGraphicsMinimalPipelineStateInitializer local_2e8;
  FMeshDrawCommandPrimitiveIdInfo local_248;
  FMeshProcessorShaders local_238;
  FMeshDrawCommand local_1d8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_498;
  this_00 = param_1->VertexFactory;
  local_3a4 = param_8;
  local_3a8 = param_9;
  local_3b0 = param_12;
  local_3e8 = param_7;
  local_3c0 = param_4;
  if (param_3 == (FPrimitiveSceneProxy *)0x0) {
    local_368 = (FPrimitiveSceneInfo *)0x0;
  }
  else {
    local_368 = param_3->PrimitiveSceneInfo;
  }
  local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  local_1d8.ShaderBindings.ShaderLayouts.ArrayNum = 0;
  local_1d8.ShaderBindings.ShaderFrequencyBits = 0;
  local_1d8.ShaderBindings.Size = 0;
  local_1d8.VertexStreams.AllocatorInstance.SecondaryData = (ForElementType<FVertexInputStream>)0x0;
  local_1d8.VertexStreams.ArrayNum = 0;
  local_1d8.CachedPipelineId.field0_0x0.PackedId = 0;
  local_1d8.DebugData.MaterialRenderProxyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_1d8.DebugData.MaterialRenderProxyName.Data.ArrayNum = 0;
  local_1d8.DebugData.MaterialRenderProxyName.Data.ArrayMax = 0;
  local_1d8.DebugData.ResourceName.ComparisonIndex.Value = 0;
  local_1d8.DebugData.ResourceName.Number = 0;
  local_1d8.StatsData.CategoryName.ComparisonIndex.Value = 0;
  local_1d8.StatsData.CategoryName.Number = 0;
  local_400 = local_400 & 0xffffff00;
  local_1d8.ShaderBindings.ShaderLayouts.ArrayMax = 2;
  local_1d8.ShaderBindings.Data.InlineStorage[0] = (uchar *)0x0;
  local_1d8.ShaderBindings.Data.InlineStorage[1] = (uchar *)0x0;
  local_1d8.VertexStreams.ArrayMax = 7;
  local_1d8.ShaderBindings.Data.InlineStorage[2] = (uchar *)0x0;
  local_1d8.ShaderBindings.Data.InlineStorage[3] = (uchar *)0x0;
  local_1d8.ShaderBindings.Data.InlineStorage[4] = (uchar *)0x0;
  local_1d8.ShaderBindings.Data.InlineStorage[5] = (uchar *)0x0;
  local_1d8.ShaderBindings.Data.InlineStorage[6] = (uchar *)0x0;
  local_1d8.ShaderBindings.Data.InlineStorage[7] = (uchar *)0x0;
  local_1d8.ShaderBindings.Data.InlineStorage[8] = (uchar *)0x0;
  local_1d8.ShaderBindings.Data.InlineStorage[9] = (uchar *)0x0;
  local_1d8.DebugData.VertexShader.ShaderContent = (FShader *)0x0;
  local_1d8.DebugData.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1d8.DebugData.PixelShader.ShaderContent = (FShader *)0x0;
  local_1d8.DebugData.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_3f8 = this;
  local_3f0 = param_3;
  local_3b8 = (ForElementType<FMeshBatchElement>)param_1;
  local_3a0 = this_00;
  local_360 = param_2;
  bVar12 = FMaterial::MaterialUsesWorldPositionOffset_RenderThread(param_5);
  if (bVar12) {
    cVar13 = (**(code **)(param_5->_padding_ + 0x358))(param_5);
    local_400 = 1;
    if (cVar13 != '\0') {
      local_400 = 3;
    }
  }
  local_1d8.StencilRef = (uchar)param_6->StencilRef;
  local_2e8.PrimitiveType = param_1->Type;
  local_2e8.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_2e8.BoundShaderState.CachedVertexShader = (FRHIVertexShader *)0x0;
  local_1d8.PrimitiveType = local_2e8.PrimitiveType;
  local_2e8.BoundShaderState.CachedPixelShader = (FRHIPixelShader *)0x0;
  local_2e8.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_2e8.DrawShadingRate = VRSSR_1x1;
  local_2e8.StatePrecachePSOHash = 0;
  local_2e8.PSOPrecacheState = Unknown;
  local_2e8.BoundShaderState.CachedGeometryShader = (FRHIGeometryShader *)0x0;
  local_2e8.BoundShaderState.CachedMeshShader = (FRHIMeshShader *)0x0;
  local_2e8.BoundShaderState.GeometryShaderResource.Reference = (FShaderMapResource *)0x0;
  local_2e8.BoundShaderState.MeshShaderResource.Reference = (FShaderMapResource *)0x0;
  local_2e8.BlendState = (FRHIBlendState *)0x0;
  local_2e8.RasterizerState = (FRHIRasterizerState *)0x0;
  local_2e8.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       (param_4->ImmutableSamplerState).ImmutableSamplers.Elements[0];
  local_2e8.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
       (param_4->ImmutableSamplerState).ImmutableSamplers.Elements[1];
  uVar15 = (uint)((byte)param_11 & 1);
  if ((param_11 & PositionAndNormalOnly) != Default) {
    uVar15 = 2;
  }
  local_2e8.BoundShaderState.VertexShaderResource.Reference = (FShaderMapResource *)0x0;
  local_2e8.BoundShaderState.PixelShaderResource.Reference = (FShaderMapResource *)0x0;
  local_2e8.BoundShaderState.bAllShaderAreLoaded = true;
  local_2e8.BoundShaderState.VertexShaderIndex = ___xmm_ffffffffffffffffffffffffffffffff;
  local_2e8.BoundShaderState.PixelShaderIndex = _UNK_15060db24;
  local_2e8.BoundShaderState.GeometryShaderIndex = _UNK_15060db28;
  local_2e8.BoundShaderState.MeshShaderIndex = _UNK_15060db2c;
  local_2e8.bDepthBounds = false;
  local_2e8.bAllowVariableRateShading = true;
  local_3d8 = uVar15;
  if (((this_00 == (FVertexFactory *)0x0) || ((int)this_00->_padding_ == -1)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("VertexFactory && VertexFactory->IsInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.inl"
                          ,0x5b,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((char)uVar15 == '\0') {
LAB_145f6b128:
    pTVar18 = &this_00->Declaration;
  }
  else if (uVar15 == 1) {
    pTVar18 = &this_00->PositionDeclaration;
  }
  else {
    if (uVar15 != 2) goto LAB_145f6b128;
    pTVar18 = &this_00->PositionAndNormalDeclaration;
  }
  pFVar3 = pTVar18->Reference;
  if (((this_00->bNeedsDeclaration != false) && (pFVar3 == (FRHIVertexDeclaration *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!VertexFactory->NeedsDeclaration() || VertexDeclaration",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.inl"
                          ,0x5e,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_238.VertexShader.ShaderContent = (FShader *)(param_7->VertexShader).ShaderContent;
  local_238.VertexShader.ShaderMap = (param_7->VertexShader).ShaderMap;
  local_238.PixelShader.ShaderContent = (FShader *)(param_7->PixelShader).ShaderContent;
  local_238.PixelShader.ShaderMap = (param_7->PixelShader).ShaderMap;
  local_238.GeometryShader.ShaderContent = (FShader *)(param_7->GeometryShader).ShaderContent;
  local_238.GeometryShader.ShaderMap = (param_7->GeometryShader).ShaderMap;
  local_238.ComputeShader.ShaderContent = (FShader *)(param_7->ComputeShader).ShaderContent;
  local_238.ComputeShader.ShaderMap = (param_7->ComputeShader).ShaderMap;
  local_238.RayTracingShader.ShaderContent = (FShader *)(param_7->RayTracingShader).ShaderContent;
  local_238.RayTracingShader.ShaderMap = (param_7->RayTracingShader).ShaderMap;
  local_238.WorkGraphShader.ShaderContent = (FShader *)0x0;
  local_238.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
  FGraphicsMinimalPipelineStateInitializer::SetupBoundShaderState(&local_2e8,pFVar3,&local_238);
  FMeshDrawShaderBindings::Initialize(&local_1d8.ShaderBindings,&local_238);
  local_2e8.RasterizerState = GetStaticRasterizerState<1>(local_3a4,local_3a8);
  if ((param_6->DepthStencilState == (FRHIDepthStencilState *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("DrawRenderState.GetDepthStencilState()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.inl"
                          ,0x67,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_6->BlendState == (FRHIBlendState *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("DrawRenderState.GetBlendState()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.inl"
                          ,0x68,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_2e8.BlendState = param_6->BlendState;
  local_2e8.DepthStencilState = param_6->DepthStencilState;
  bVar12 = PipelineVariableRateShadingEnabled(this);
  if (bVar12) {
    iVar14 = (**(code **)(param_5->_padding_ + 0x4b0))(param_5);
    if (iVar14 == 0) goto LAB_145f6b317;
    if (iVar14 == 1) {
      local_2e8.DrawShadingRate = VRSSR_2x1;
    }
    else if (iVar14 == 2) {
      local_2e8.DrawShadingRate = VRSSR_1x2;
    }
    else if (iVar14 == 3) {
      local_2e8.DrawShadingRate = VRSSR_2x2;
    }
    else if (GRHIGlobals.VariableRateShading.SupportsLargerSizes == false) {
LAB_145f6b317:
      local_2e8.DrawShadingRate = VRSSR_1x1;
    }
    else if (iVar14 == 4) {
      local_2e8.DrawShadingRate = VRSSR_4x2;
    }
    else if (iVar14 == 5) {
      local_2e8.DrawShadingRate = VRSSR_2x4;
    }
    else {
      if (iVar14 != 6) goto LAB_145f6b317;
      local_2e8.DrawShadingRate = VRSSR_4x4;
    }
  }
  else {
    local_2e8.DrawShadingRate = VRSSR_1x1;
  }
  cVar13 = (**(code **)(param_5->_padding_ + 0x4c0))(param_5);
  if (cVar13 != '\0') {
    bVar12 = HardwareVariableRateShadingSupportedByScene(this);
    local_2e8.bAllowVariableRateShading = true;
    if (bVar12) goto LAB_145f6b353;
  }
  local_2e8._136_2_ = local_2e8._136_2_ & 0xff;
LAB_145f6b353:
  bVar12 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (bVar12) {
    FGraphicsMinimalPipelineStateInitializer::ComputeStatePrecachePSOHash(&local_2e8);
  }
  if (((int)this_00->_padding_ == -1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("VertexFactory && VertexFactory->IsInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.inl"
                          ,0x75,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVertexFactory::GetStreams
            (this_00,this->FeatureLevel,(EVertexInputStreamType)local_3d8,&local_1d8.VertexStreams);
  bVar12 = PSOCollectorStats::IsFullPrecachingValidationEnabled();
  pFVar34 = local_3f0;
  if (bVar12) {
    lVar20 = this->_padding_;
    pFVar19 = (FVertexFactoryType *)(**(code **)(this_00->_padding_ + 0x30))(this_00);
    pFVar34 = local_3f0;
    PSOCollectorStats::CheckShaderOnlyStateInCache(&local_2e8,param_5,pFVar19,local_3f0,(int)lVar20)
    ;
    lVar20 = this->_padding_;
    pFVar19 = (FVertexFactoryType *)(**(code **)(this_00->_padding_ + 0x30))(this_00);
    PSOCollectorStats::CheckMinimalPipelineStateInCache
              (&local_2e8,param_5,pFVar19,pFVar34,(int)lVar20);
  }
  local_1d8.PrimitiveIdStreamIndex =
       this_00->PrimitiveIdStreamIndex[(EVertexInputStreamType)local_3d8];
  if (this_00->PrimitiveIdStreamIndex[(EVertexInputStreamType)local_3d8] != -1) {
    local_400 = local_400 | 4;
  }
  uVar27 = 0;
  local_410 = 0;
  if ((param_7->VertexShader).ShaderContent != (FLandscapeGrassWeightVS *)0x0) {
    local_420 = 0;
    uVar15 = (uint)(byte)((ulonglong)(local_1d8.ShaderBindings.ShaderFrequencyBits & 1) *
                          0x101010101010101 >> 0x38);
    lVar20 = (ulonglong)uVar15 - 1;
    uVar15 = uVar15 - 1;
    uVar37 = uVar27;
    local_3e0 = lVar20;
    if (0 < lVar20) {
      do {
        iVar14 = 0;
        uVar36 = (uint)uVar27;
        uVar23 = 0;
        if ((int)uVar36 < local_1d8.ShaderBindings.ShaderLayouts.ArrayNum) {
          uVar23 = ~uVar36 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar24 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_1d8;
        if (local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar24 = local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
        }
        lVar21 = *(longlong *)((longlong)FVar24 + uVar37 * 8);
        iVar29 = *(int *)(lVar21 + 0x28);
        iVar1 = *(int *)(lVar21 + 0x18);
        iVar17 = *(int *)(lVar21 + 8);
        iVar16 = iVar29 + 7;
        if (iVar16 < 0) {
          iVar16 = iVar29 + 0xe;
        }
        uVar27 = *(ulonglong *)(lVar21 + 0x30);
        iVar33 = *(int *)(lVar21 + 0x38);
        lVar20 = (longlong)uVar27 >> 0x18;
        uVar28 = uVar27;
        if ((uVar27 & 1) != 0) {
          uVar27 = lVar20 + 0x30 + lVar21;
          uVar28 = lVar20 + 0x30 + lVar21;
        }
        while( true ) {
          if (*(int *)(lVar21 + 0x38) != iVar33) {
            local_40c = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_40c);
          }
          lVar20 = local_3e0;
          if (uVar27 == uVar28 + (longlong)iVar33 * 0x18) break;
          iVar14 = iVar14 + (uint)*(ushort *)(uVar27 + 2);
          uVar27 = uVar27 + 0x18;
        }
        uVar27 = (ulonglong)(uVar36 + 1);
        uVar37 = uVar37 + 1;
        local_420 = local_420 +
                    ((iVar16 >> 3) + (iVar1 + iVar17 + iVar29) * 8 + 7 + iVar14 & 0xfffffff8U);
      } while ((longlong)uVar37 < local_3e0);
      param_4 = local_3c0;
      this = local_3f8;
      if ((local_420 != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("CheckedDataOffset == DataOffset",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                              ,0x3dc,
                              L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                             ), param_4 = local_3c0, this = local_3f8, bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if ((int)uVar15 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                          ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                          ,0x1a,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_350._padding_ = 0x58;
      local_350.Data = (uchar *)0x0;
    }
    else {
      uVar23 = 0;
      if ((int)uVar15 < local_1d8.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar23 = ~uVar15 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_1d8;
      if (local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar24 = local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      local_410 = FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                            ((FMeshDrawShaderBindingsLayout *)((longlong)FVar24 + lVar20 * 8));
      local_350.Data = (uchar *)&local_1d8.ShaderBindings.Data;
      if (0x50 < local_1d8.ShaderBindings.Size) {
        local_350.Data = local_1d8.ShaderBindings.Data.InlineStorage[0];
      }
      uVar23 = 0;
      if ((int)uVar15 < local_1d8.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar23 = ~uVar15 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_1d8;
      if (local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar24 = local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      local_350._padding_ = *(longlong *)((longlong)FVar24 + lVar20 * 8);
    }
    pFVar11 = local_3b0;
    param_7 = local_3e8;
    pFVar34 = local_3f0;
    pFVar4 = (local_3e8->VertexShader).ShaderContent;
    FMeshMaterialShader::GetShaderBindings
              ((FMeshMaterialShader *)pFVar4,this->Scene,this->FeatureLevel,local_3f0,param_4,
               param_5,(FMeshMaterialShaderElementData *)local_3b0,&local_350);
    local_378._0_2_ = (pFVar4->RenderOffsetParameter).BufferIndex;
    local_378._2_2_ = (pFVar4->RenderOffsetParameter).BaseIndex;
    local_374 = (pFVar4->RenderOffsetParameter).NumBytes;
    FMeshDrawSingleShaderBindings::Add<UE::Math::TVector2<float>_>
              (&local_350,SUB86(&local_378,0),&pFVar11->RenderOffset);
  }
  uVar27 = 0;
  if ((param_7->PixelShader).ShaderContent != (FLandscapeGrassWeightPS *)0x0) {
    uVar23 = 0;
    local_420 = 0;
    uVar37 = (ulonglong)(local_1d8.ShaderBindings.ShaderFrequencyBits & 0xf) -
             ((ulonglong)((local_1d8.ShaderBindings.ShaderFrequencyBits & 0xf) >> 1) &
             0x5555555555555555);
    uVar37 = (uVar37 >> 2 & 0x3333333333333333) + (uVar37 & 0x3333333333333333);
    uVar15 = (uint)(byte)((uVar37 + (uVar37 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    local_3e0 = (ulonglong)uVar15 - 1;
    uVar15 = uVar15 - 1;
    uVar37 = uVar27;
    if (0 < local_3e0) {
      do {
        iVar14 = 0;
        uVar36 = (uint)uVar27;
        uVar23 = 0;
        if ((int)uVar36 < local_1d8.ShaderBindings.ShaderLayouts.ArrayNum) {
          uVar23 = ~uVar36 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar24 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_1d8;
        if (local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar24 = local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
        }
        lVar20 = *(longlong *)((longlong)FVar24 + uVar37 * 8);
        iVar29 = *(int *)(lVar20 + 0x28);
        iVar1 = *(int *)(lVar20 + 0x18);
        iVar17 = *(int *)(lVar20 + 8);
        iVar16 = iVar29 + 7;
        if (iVar16 < 0) {
          iVar16 = iVar29 + 0xe;
        }
        uVar27 = *(ulonglong *)(lVar20 + 0x30);
        iVar33 = *(int *)(lVar20 + 0x38);
        lVar21 = (longlong)uVar27 >> 0x18;
        uVar28 = uVar27;
        if ((uVar27 & 1) != 0) {
          uVar27 = lVar21 + 0x30 + lVar20;
          uVar28 = lVar21 + 0x30 + lVar20;
        }
        while( true ) {
          if (*(int *)(lVar20 + 0x38) != iVar33) {
            local_40b = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_40b);
          }
          if (uVar27 == uVar28 + (longlong)iVar33 * 0x18) break;
          iVar14 = iVar14 + (uint)*(ushort *)(uVar27 + 2);
          uVar27 = uVar27 + 0x18;
        }
        uVar27 = (ulonglong)(uVar36 + 1);
        uVar37 = uVar37 + 1;
        uVar23 = local_420 +
                 ((iVar16 >> 3) + (iVar1 + iVar17 + iVar29) * 8 + 7 + iVar14 & 0xfffffff8U);
        pFVar34 = local_3f0;
        local_420 = uVar23;
      } while ((longlong)uVar37 < local_3e0);
    }
    lVar20 = local_3e0;
    lVar21 = (longlong)(int)local_410;
    if ((uVar23 != local_410) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("CheckedDataOffset == DataOffset",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                            ,0x3dc,
                            L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((int)uVar15 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                          ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                          ,0x1a,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_340._padding_ = 0x58;
      local_340.Data = (uchar *)0x0;
    }
    else {
      uVar23 = 0;
      if ((int)uVar15 < local_1d8.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar23 = ~uVar15 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_1d8;
      if (local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar24 = local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      uVar23 = FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                         ((FMeshDrawShaderBindingsLayout *)((longlong)FVar24 + lVar20 * 8));
      local_410 = local_410 + uVar23;
      pFVar35 = &local_1d8.ShaderBindings.Data;
      if (0x50 < local_1d8.ShaderBindings.Size) {
        pFVar35 = (FData *)local_1d8.ShaderBindings.Data.InlineStorage[0];
      }
      uVar23 = 0;
      if ((int)uVar15 < local_1d8.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar23 = ~uVar15 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_1d8;
      if (local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar24 = local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      local_340._padding_ = *(longlong *)((longlong)FVar24 + lVar20 * 8);
      local_340.Data = (uchar *)((longlong)pFVar35->InlineStorage + lVar21);
      pFVar34 = local_3f0;
    }
    pFVar11 = local_3b0;
    param_4 = local_3c0;
    param_7 = local_3e8;
    this = local_3f8;
    pFVar5 = (local_3e8->PixelShader).ShaderContent;
    FMeshMaterialShader::GetShaderBindings
              ((FMeshMaterialShader *)pFVar5,local_3f8->Scene,local_3f8->FeatureLevel,pFVar34,
               local_3c0,param_5,(FMeshMaterialShaderElementData *)local_3b0,&local_340);
    local_388._0_2_ = (pFVar5->OutputPassParameter).BufferIndex;
    local_388._2_2_ = (pFVar5->OutputPassParameter).BaseIndex;
    local_384 = (pFVar5->OutputPassParameter).NumBytes;
    FMeshDrawSingleShaderBindings::Add<int>(&local_340,SUB86(&local_388,0),&pFVar11->OutputPass);
  }
  if ((param_7->GeometryShader).ShaderContent != (FMeshMaterialShader *)0x0) {
    uVar36 = 0;
    uVar27 = (ulonglong)(local_1d8.ShaderBindings.ShaderFrequencyBits & 0x1f) -
             ((ulonglong)((local_1d8.ShaderBindings.ShaderFrequencyBits & 0x1f) >> 1) &
             0x5555555555555555);
    uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
    uVar23 = 0;
    uVar15 = (uint)(byte)(((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    local_420 = 0;
    local_3e0 = (ulonglong)uVar15 - 1;
    uVar15 = uVar15 - 1;
    if (0 < local_3e0) {
      lVar20 = 0;
      do {
        uVar23 = 0;
        if ((int)uVar36 < local_1d8.ShaderBindings.ShaderLayouts.ArrayNum) {
          uVar23 = ~uVar36 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar24 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_1d8;
        if (local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar24 = local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
        }
        lVar21 = *(longlong *)((longlong)FVar24 + lVar20 * 8);
        iVar14 = *(int *)(lVar21 + 0x28);
        iVar29 = *(int *)(lVar21 + 0x18);
        iVar1 = *(int *)(lVar21 + 8);
        iVar17 = iVar14 + 7;
        if (iVar17 < 0) {
          iVar17 = iVar14 + 0xe;
        }
        uVar27 = *(ulonglong *)(lVar21 + 0x30);
        iVar16 = *(int *)(lVar21 + 0x38);
        iVar33 = 0;
        lVar22 = (longlong)uVar27 >> 0x18;
        uVar37 = uVar27;
        if ((uVar27 & 1) != 0) {
          uVar27 = lVar21 + 0x30 + lVar22;
          uVar37 = lVar21 + 0x30 + lVar22;
        }
        while( true ) {
          if (*(int *)(lVar21 + 0x38) != iVar16) {
            local_40a = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_40a);
          }
          if (uVar27 == uVar37 + (longlong)iVar16 * 0x18) break;
          iVar33 = iVar33 + (uint)*(ushort *)(uVar27 + 2);
          uVar27 = uVar27 + 0x18;
        }
        uVar36 = uVar36 + 1;
        lVar20 = lVar20 + 1;
        uVar23 = local_420 +
                 ((iVar17 >> 3) + (iVar29 + iVar1 + iVar14) * 8 + 7 + iVar33 & 0xfffffff8U);
        local_420 = uVar23;
      } while (lVar20 < local_3e0);
    }
    lVar20 = local_3e0;
    if ((uVar23 != local_410) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("CheckedDataOffset == DataOffset",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                            ,0x3dc,
                            L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((int)uVar15 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                          ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                          ,0x1a,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_330._padding_ = 0x58;
      local_330.Data = (uchar *)0x0;
    }
    else {
      uVar23 = 0;
      if ((int)uVar15 < local_1d8.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar23 = ~uVar15 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_1d8;
      if (local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar24 = local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                ((FMeshDrawShaderBindingsLayout *)((longlong)FVar24 + lVar20 * 8));
      pFVar35 = &local_1d8.ShaderBindings.Data;
      if (0x50 < local_1d8.ShaderBindings.Size) {
        pFVar35 = (FData *)local_1d8.ShaderBindings.Data.InlineStorage[0];
      }
      uVar23 = 0;
      if ((int)uVar15 < local_1d8.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar23 = ~uVar15 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar24 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_1d8;
      if (local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar24 = local_1d8.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      local_330._padding_ = *(longlong *)((longlong)FVar24 + lVar20 * 8);
      local_330.Data = (uchar *)((longlong)pFVar35->InlineStorage + (longlong)(int)local_410);
    }
    param_4 = local_3c0;
    param_7 = local_3e8;
    pFVar34 = local_3f0;
    this = local_3f8;
    FMeshMaterialShader::GetShaderBindings
              ((local_3e8->GeometryShader).ShaderContent,local_3f8->Scene,local_3f8->FeatureLevel,
               local_3f0,local_3c0,param_5,(FMeshMaterialShaderElementData *)local_3b0,&local_330);
  }
  FMeshDrawCommand::SetDebugData
            (&local_1d8,pFVar34,param_5,param_4,&local_238,local_3a0,(FMeshBatch *)local_3b8,
             (int)this->_padding_);
  FMeshDrawCommand::SetStatsData(&local_1d8,pFVar34);
  FVar25 = local_3b8;
  bVar12 = ShouldSkipMeshDrawCommand(this,(FMeshBatch *)local_3b8,pFVar34);
  if (!bVar12) {
    iVar14 = *(int *)((longlong)FVar25 + 0xa0);
    local_420 = 0;
    if (0 < iVar14) {
      local_358 = 1;
      local_3e0 = 0;
      uVar27 = local_360;
      do {
        lVar20 = local_3e0;
        if ((uVar27 & local_358) != 0) {
          uVar15 = 0;
          if ((int)local_420 < *(int *)((longlong)FVar25 + 0xa0)) {
            uVar15 = ~local_420 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar25 + 0x98) !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar25 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar25 + 0x98);
          }
          pFVar30 = (FMeshBatchElement *)(lVar20 + (longlong)FVar25);
          local_398 = pFVar30;
          lVar20 = (**(code **)((longlong)*this->DrawListContext + 8))
                             (this->DrawListContext,&local_1d8,iVar14);
          bVar26 = (byte)local_400;
          if (pFVar30->bForceInstanceCulling != 0) {
            bVar26 = bVar26 | 8;
          }
          if (pFVar30->bPreserveInstanceOrder != 0) {
            if ((int)this->FeatureLevel < 2) {
              local_409 = 0;
              bVar12 = `FMeshPassProcessor::
                       BuildMeshDrawCommands<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FLandscapeGrassWeightShaderElementData>'
                       ::__l77::<lambda_1>::operator()(&local_409);
              if (!bVar12) goto LAB_145f6bfdd;
            }
            bVar26 = bVar26 | 0x10;
          }
LAB_145f6bfdd:
          bVar10 = bVar26 | 0x20;
          if (pFVar30->bFetchInstanceCountFromScene == 0) {
            bVar10 = bVar26;
          }
          uVar15 = 0;
          local_3c0 = (FMaterialRenderProxy *)CONCAT44(local_3c0._4_4_,(uint)bVar10);
          local_410 = 0;
          if ((param_7->VertexShader).ShaderContent != (FLandscapeGrassWeightVS *)0x0) {
            local_424 = 0;
            uVar37 = (ulonglong)(*(ushort *)(lVar20 + 0x70) & 1) * 0x101010101010101;
            uVar27 = uVar37 >> 0x38;
            uVar23 = (byte)(uVar37 >> 0x38) - 1;
            local_3c8 = uVar27;
            if (0 < (int)uVar23) {
              local_3d0 = 0;
              do {
                uVar27 = local_3d0;
                uVar23 = 0;
                if ((int)uVar15 < *(int *)(lVar20 + 0x18)) {
                  uVar23 = ~uVar15 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar29 = 0;
                lVar21 = lVar20;
                if (*(longlong *)(lVar20 + 0x10) != 0) {
                  lVar21 = *(longlong *)(lVar20 + 0x10);
                }
                lVar21 = *(longlong *)(uVar27 + lVar21);
                iVar1 = *(int *)(lVar21 + 0x28);
                iVar17 = iVar1 + 7;
                if (iVar17 < 0) {
                  iVar17 = iVar1 + 0xe;
                }
                uVar37 = *(ulonglong *)(lVar21 + 0x30);
                iVar16 = *(int *)(lVar21 + 0x38);
                local_404 = (iVar17 >> 3) +
                            (*(int *)(lVar21 + 0x18) + *(int *)(lVar21 + 8) + iVar1) * 8;
                lVar22 = (longlong)uVar37 >> 0x18;
                uVar28 = uVar37;
                if ((uVar37 & 1) != 0) {
                  uVar37 = lVar21 + 0x30 + lVar22;
                  uVar28 = lVar21 + 0x30 + lVar22;
                }
                while( true ) {
                  if (*(int *)(lVar21 + 0x38) != iVar16) {
                    local_408 = 0;
                    `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(&local_408);
                  }
                  uVar27 = local_3c8;
                  if (uVar28 == uVar37 + (longlong)iVar16 * 0x18) break;
                  iVar29 = iVar29 + (uint)*(ushort *)(uVar28 + 2);
                  uVar28 = uVar28 + 0x18;
                }
                uVar15 = uVar15 + 1;
                local_3d0 = local_3d0 + 8;
                local_424 = local_424 + (local_404 + 7 + iVar29 & 0xfffffff8U);
                uVar23 = (int)local_3c8 - 1;
              } while ((int)uVar15 < (int)uVar23);
              if ((local_424 != 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CheckedDataOffset == DataOffset",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                      ,0x3dc,
                                      L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                                     ), bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            if ((int)uVar23 < 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                  ,0x3e5,L"Invalid shader binding frequency requested");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Shader.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                                  ,0x1a,L"");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_320._padding_ = 0x58;
              local_320.Data = (uchar *)0x0;
            }
            else {
              uVar15 = 0;
              if ((int)uVar23 < *(int *)(lVar20 + 0x18)) {
                uVar15 = ~uVar23 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar21 = lVar20;
              if (*(longlong *)(lVar20 + 0x10) != 0) {
                lVar21 = *(longlong *)(lVar20 + 0x10);
              }
              local_410 = FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                                    ((FMeshDrawShaderBindingsLayout *)
                                     (lVar21 + (uVar27 & 0xffffffff) * 8 + -8));
              plVar31 = (longlong *)(lVar20 + 0x20);
              if (0x50 < *(ushort *)(lVar20 + 0x72)) {
                plVar31 = (longlong *)*plVar31;
              }
              uVar15 = 0;
              if ((int)uVar23 < *(int *)(lVar20 + 0x18)) {
                uVar15 = ~uVar23 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar21 = lVar20;
              if (*(longlong *)(lVar20 + 0x10) != 0) {
                lVar21 = *(longlong *)(lVar20 + 0x10);
              }
              local_320._padding_ = *(longlong *)(lVar21 + -8 + (uVar27 & 0xffffffff) * 8);
              local_320.Data = (uchar *)plVar31;
            }
            pFVar6 = local_3f8->ViewIfDynamicMeshCommand;
            pFVar4 = (local_3e8->VertexShader).ShaderContent;
            pFVar7 = (local_3e8->VertexShader).ShaderMap;
            pFVar8 = local_3f8->Scene;
            FVar2.FeatureLevel = local_3f8->FeatureLevel;
            if ((pFVar7->PointerTable == (FShaderMapPointerTable *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PointerTable",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x9b4,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FMeshMaterialShader::GetElementShaderBindings
                      ((FMeshMaterialShader *)pFVar4,pFVar7->PointerTable,pFVar8,pFVar6,local_3a0,
                       (EVertexInputStreamType)local_3d8,FVar2,local_3f0,(FMeshBatch *)local_3b8,
                       local_398,(FMeshMaterialShaderElementData *)local_3b0,&local_320,
                       (TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                        *)(lVar20 + 0x78));
            param_7 = local_3e8;
          }
          uVar15 = 0;
          if ((param_7->PixelShader).ShaderContent != (FLandscapeGrassWeightPS *)0x0) {
            uVar23 = *(ushort *)(lVar20 + 0x70) & 0xf;
            uVar27 = (ulonglong)uVar23 - ((ulonglong)(uVar23 >> 1) & 0x5555555555555555);
            uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
            local_424 = 0;
            uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            local_3c8 = uVar27 >> 0x38;
            uVar23 = (byte)(uVar27 >> 0x38) - 1;
            if (0 < (int)uVar23) {
              local_3d0 = 0;
              do {
                uVar27 = local_3d0;
                uVar23 = 0;
                if ((int)uVar15 < *(int *)(lVar20 + 0x18)) {
                  uVar23 = ~uVar15 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                iVar29 = 0;
                lVar21 = lVar20;
                if (*(longlong *)(lVar20 + 0x10) != 0) {
                  lVar21 = *(longlong *)(lVar20 + 0x10);
                }
                lVar21 = *(longlong *)(lVar21 + uVar27);
                iVar1 = *(int *)(lVar21 + 0x28);
                iVar17 = iVar1 + 7;
                if (iVar17 < 0) {
                  iVar17 = iVar1 + 0xe;
                }
                uVar27 = *(ulonglong *)(lVar21 + 0x30);
                iVar16 = *(int *)(lVar21 + 0x38);
                local_404 = (iVar17 >> 3) +
                            (*(int *)(lVar21 + 0x18) + *(int *)(lVar21 + 8) + iVar1) * 8;
                lVar22 = (longlong)uVar27 >> 0x18;
                uVar37 = uVar27;
                if ((uVar27 & 1) != 0) {
                  uVar27 = lVar22 + 0x30 + lVar21;
                  uVar37 = lVar21 + 0x30 + lVar22;
                }
                while( true ) {
                  if (*(int *)(lVar21 + 0x38) != iVar16) {
                    local_407 = 0;
                    `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(&local_407);
                  }
                  if (uVar37 == uVar27 + (longlong)iVar16 * 0x18) break;
                  iVar29 = iVar29 + (uint)*(ushort *)(uVar37 + 2);
                  uVar37 = uVar37 + 0x18;
                }
                uVar15 = uVar15 + 1;
                local_3d0 = local_3d0 + 8;
                local_424 = local_424 + (local_404 + 7 + iVar29 & 0xfffffff8U);
                uVar23 = (int)local_3c8 - 1;
              } while ((int)uVar15 < (int)uVar23);
            }
            uVar27 = local_3c8;
            lVar21 = (longlong)(int)local_410;
            if ((local_424 != local_410) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CheckedDataOffset == DataOffset",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                    ,0x3dc,
                                    L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                                   ), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((int)uVar23 < 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                  ,0x3e5,L"Invalid shader binding frequency requested");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Shader.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                                  ,0x1a,L"");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_310._padding_ = 0x58;
              local_310.Data = (uchar *)0x0;
            }
            else {
              uVar15 = 0;
              if ((int)uVar23 < *(int *)(lVar20 + 0x18)) {
                uVar15 = ~uVar23 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar22 = lVar20;
              if (*(longlong *)(lVar20 + 0x10) != 0) {
                lVar22 = *(longlong *)(lVar20 + 0x10);
              }
              uVar15 = FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                                 ((FMeshDrawShaderBindingsLayout *)
                                  (lVar22 + (uVar27 & 0xffffffff) * 8 + -8));
              local_410 = local_410 + uVar15;
              puVar32 = (undefined8 *)(lVar20 + 0x20);
              if (0x50 < *(ushort *)(lVar20 + 0x72)) {
                puVar32 = (undefined8 *)*puVar32;
              }
              uVar15 = 0;
              if ((int)uVar23 < *(int *)(lVar20 + 0x18)) {
                uVar15 = ~uVar23 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar22 = lVar20;
              if (*(longlong *)(lVar20 + 0x10) != 0) {
                lVar22 = *(longlong *)(lVar20 + 0x10);
              }
              local_310._padding_ = *(longlong *)(lVar22 + -8 + (local_3c8 & 0xffffffff) * 8);
              local_310.Data = (uchar *)((longlong)puVar32 + lVar21);
            }
            pFVar6 = local_3f8->ViewIfDynamicMeshCommand;
            pFVar5 = (local_3e8->PixelShader).ShaderContent;
            pFVar7 = (local_3e8->PixelShader).ShaderMap;
            pFVar8 = local_3f8->Scene;
            FVar2.FeatureLevel = local_3f8->FeatureLevel;
            if ((pFVar7->PointerTable == (FShaderMapPointerTable *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PointerTable",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x9b4,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FMeshMaterialShader::GetElementShaderBindings
                      ((FMeshMaterialShader *)pFVar5,pFVar7->PointerTable,pFVar8,pFVar6,local_3a0,
                       Default,FVar2,local_3f0,(FMeshBatch *)local_3b8,local_398,
                       (FMeshMaterialShaderElementData *)local_3b0,&local_310,
                       (TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                        *)(lVar20 + 0x78));
            param_7 = local_3e8;
          }
          if ((param_7->GeometryShader).ShaderContent != (FMeshMaterialShader *)0x0) {
            uVar23 = 0;
            uVar15 = *(ushort *)(lVar20 + 0x70) & 0x1f;
            uVar27 = (ulonglong)uVar15 - ((ulonglong)(uVar15 >> 1) & 0x5555555555555555);
            uVar27 = (uVar27 >> 2 & 0x3333333333333333) + (uVar27 & 0x3333333333333333);
            local_424 = 0;
            uVar27 = ((uVar27 >> 4) + uVar27 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            local_3d0 = uVar27 >> 0x38;
            uVar15 = (byte)(uVar27 >> 0x38) - 1;
            if (0 < (int)uVar15) {
              local_3c8 = 0;
              do {
                uVar27 = local_3c8;
                iVar29 = 0;
                uVar15 = 0;
                if ((int)uVar23 < *(int *)(lVar20 + 0x18)) {
                  uVar15 = ~uVar23 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                lVar21 = lVar20;
                if (*(longlong *)(lVar20 + 0x10) != 0) {
                  lVar21 = *(longlong *)(lVar20 + 0x10);
                }
                lVar21 = *(longlong *)(uVar27 + lVar21);
                iVar1 = *(int *)(lVar21 + 0x28);
                iVar17 = iVar1 + 7;
                if (iVar17 < 0) {
                  iVar17 = iVar1 + 0xe;
                }
                uVar27 = *(ulonglong *)(lVar21 + 0x30);
                iVar16 = *(int *)(lVar21 + 0x38);
                local_404 = (iVar17 >> 3) +
                            (*(int *)(lVar21 + 0x18) + *(int *)(lVar21 + 8) + iVar1) * 8;
                lVar22 = (longlong)uVar27 >> 0x18;
                uVar37 = uVar27;
                if ((uVar27 & 1) != 0) {
                  uVar27 = lVar21 + 0x30 + lVar22;
                  uVar37 = lVar21 + 0x30 + lVar22;
                }
                while( true ) {
                  if (*(int *)(lVar21 + 0x38) != iVar16) {
                    local_406[0] = 0;
                    `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(local_406);
                  }
                  if (uVar37 == uVar27 + (longlong)iVar16 * 0x18) break;
                  iVar29 = iVar29 + (uint)*(ushort *)(uVar37 + 2);
                  uVar37 = uVar37 + 0x18;
                }
                uVar23 = uVar23 + 1;
                local_3c8 = local_3c8 + 8;
                local_424 = local_424 + (local_404 + 7 + iVar29 & 0xfffffff8U);
                uVar15 = (int)local_3d0 - 1;
              } while ((int)uVar23 < (int)uVar15);
            }
            uVar27 = local_3d0;
            if ((local_424 != local_410) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CheckedDataOffset == DataOffset",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                    ,0x3dc,
                                    L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                                   ), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((int)uVar15 < 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                  ,0x3e5,L"Invalid shader binding frequency requested");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Shader.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                                  ,0x1a,L"");
              if (bVar12) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              local_300._padding_ = 0x58;
              local_300.Data = (uchar *)0x0;
            }
            else {
              uVar23 = 0;
              if ((int)uVar15 < *(int *)(lVar20 + 0x18)) {
                uVar23 = ~uVar15 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar21 = lVar20;
              if (*(longlong *)(lVar20 + 0x10) != 0) {
                lVar21 = *(longlong *)(lVar20 + 0x10);
              }
              FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                        ((FMeshDrawShaderBindingsLayout *)(lVar21 + (uVar27 & 0xffffffff) * 8 + -8))
              ;
              puVar32 = (undefined8 *)(lVar20 + 0x20);
              if (0x50 < *(ushort *)(lVar20 + 0x72)) {
                puVar32 = (undefined8 *)*puVar32;
              }
              uVar23 = 0;
              if ((int)uVar15 < *(int *)(lVar20 + 0x18)) {
                uVar23 = ~uVar15 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              lVar21 = lVar20;
              if (*(longlong *)(lVar20 + 0x10) != 0) {
                lVar21 = *(longlong *)(lVar20 + 0x10);
              }
              local_300._padding_ = *(longlong *)(lVar21 + -8 + (uVar27 & 0xffffffff) * 8);
              local_300.Data = (uchar *)((longlong)(int)local_410 + (longlong)puVar32);
            }
            pFVar6 = local_3f8->ViewIfDynamicMeshCommand;
            this_01 = (local_3e8->GeometryShader).ShaderContent;
            pFVar7 = (local_3e8->GeometryShader).ShaderMap;
            pFVar8 = local_3f8->Scene;
            FVar2.FeatureLevel = local_3f8->FeatureLevel;
            if ((pFVar7->PointerTable == (FShaderMapPointerTable *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PointerTable",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x9b4,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FMeshMaterialShader::GetElementShaderBindings
                      (this_01,pFVar7->PointerTable,pFVar8,pFVar6,local_3a0,Default,FVar2,local_3f0,
                       (FMeshBatch *)local_3b8,local_398,(FMeshMaterialShaderElementData *)local_3b0
                       ,&local_300,
                       (TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                        *)(lVar20 + 0x78));
            param_7 = local_3e8;
          }
          this = local_3f8;
          GetDrawCommandPrimitiveId(local_3f8,&local_248,local_368,local_398);
          FVar25 = local_3b8;
          (**(code **)((longlong)*this->DrawListContext + 0x10))
                    (this->DrawListContext,local_3b8,local_420,&local_248);
          uVar27 = local_360;
        }
        local_420 = local_420 + 1;
        local_358 = local_358 << 1 | (ulonglong)((longlong)local_358 < 0);
        local_3e0 = local_3e0 + 0x98;
      } while ((int)local_420 < iVar14);
    }
  }
  if (local_2e8.BoundShaderState.MeshShaderResource.Reference != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(local_2e8.BoundShaderState.MeshShaderResource.Reference);
  }
  if (local_2e8.BoundShaderState.GeometryShaderResource.Reference != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(local_2e8.BoundShaderState.GeometryShaderResource.Reference);
  }
  if (local_2e8.BoundShaderState.PixelShaderResource.Reference != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(local_2e8.BoundShaderState.PixelShaderResource.Reference);
  }
  if (local_2e8.BoundShaderState.VertexShaderResource.Reference != (FShaderMapResource *)0x0) {
    FShaderMapResource::Release(local_2e8.BoundShaderState.VertexShaderResource.Reference);
  }
  if (local_1d8.DebugData.MaterialRenderProxyName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.DebugData.MaterialRenderProxyName.Data.AllocatorInstance.Data);
  }
  if (local_1d8.VertexStreams.AllocatorInstance.SecondaryData !=
      (ForElementType<FVertexInputStream>)0x0) {
    FMemory::Free((void *)local_1d8.VertexStreams.AllocatorInstance.SecondaryData);
  }
  FMeshDrawShaderBindings::~FMeshDrawShaderBindings(&local_1d8.ShaderBindings);
  return;
}

// operator() @ 1504df9d0

bool __thiscall
`FMeshPassProcessor::
BuildMeshDrawCommands<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FLandscapeGrassWeightShaderElementData>'
::__l77::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6332909744440737618>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6332909744440737618>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshPassProcessor::BuildMeshDrawCommands<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FLandscapeGrassWeightShaderElementData>(FMeshBatch_const&___ptr64___restrict,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,FMeshPassProcessorRenderState_const&___ptr64___restrict,TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_const&___ptr64,ERasterizerFillMode,ERasterizerCullMode,FMeshDrawCommandSortKey,EMeshPassFeatures,FLandscapeGrassWeightShaderElementData_const&___ptr64)___ptr64'::`77'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


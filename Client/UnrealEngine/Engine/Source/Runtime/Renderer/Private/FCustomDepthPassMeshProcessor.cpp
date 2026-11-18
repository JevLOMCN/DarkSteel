// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// CollectPSOInitializersInternal<1> @ 1447196f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCustomDepthPassMeshProcessor::CollectPSOInitializersInternal<1>
          (FCustomDepthPassMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,ERasterizerFillMode param_3,ERasterizerCullMode param_4,
          EPrimitiveType param_5,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_6)

{
  bool bVar1;
  undefined1 auStackY_188 [32];
  FShaderPipelineRef local_118;
  TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_108;
  FGraphicsPipelineRenderTargetsInfo local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_108.VertexShader.ShaderContent = (TDepthOnlyVS<1> *)0x0;
  local_108.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_108.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_108.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_108.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_108.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.ShaderPipeline = (FShaderPipeline *)0x0;
  local_118.ShaderMap = (FShaderMapBase *)0x0;
  bVar1 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_2);
  bVar1 = GetDepthPassShaders<1>
                    (param_2,param_1->VertexFactoryType,(Type)this->_padding_,bVar1,
                     &local_108.VertexShader,&local_108.PixelShader,&local_118);
  if (bVar1) {
    local_b8.RenderTargetsEnabled = 0;
    local_b8.RenderTargetFormats.Elements[0] = '\0';
    local_b8.RenderTargetFormats.Elements[1] = '\0';
    local_b8.RenderTargetFormats.Elements[2] = '\0';
    local_b8.RenderTargetFormats.Elements[3] = '\0';
    local_b8.RenderTargetFormats.Elements[4] = '\0';
    local_b8.RenderTargetFormats.Elements[5] = '\0';
    local_b8.RenderTargetFormats.Elements[6] = '\0';
    local_b8.RenderTargetFormats.Elements[7] = '\0';
    local_b8.DepthStencilTargetFormat = PF_Unknown;
    local_b8.DepthStencilTargetFlag = None;
    local_b8.DepthTargetLoadAction = ENoAction;
    local_b8.DepthTargetStoreAction = ENoAction;
    local_b8.StencilTargetLoadAction = ENoAction;
    local_b8.StencilTargetStoreAction = ENoAction;
    local_b8.DepthStencilAccess.Value = DepthNop;
    local_b8.RenderTargetFlags.Elements[0] = None;
    local_b8.RenderTargetFlags.Elements[1] = None;
    local_b8.RenderTargetFlags.Elements[2] = None;
    local_b8.RenderTargetFlags.Elements[3] = None;
    local_b8.RenderTargetFlags.Elements[4] = None;
    local_b8.RenderTargetFlags.Elements[5] = None;
    local_b8.RenderTargetFlags.Elements[6] = None;
    local_b8.RenderTargetFlags.Elements[7] = None;
    local_b8.NumSamples = 1;
    local_b8.MultiViewCount = '\0';
    local_b8.bHasFragmentDensityAttachment = false;
    SetupDepthStencilInfo
              (PF_DepthStencil,
               GFastVRamConfig.CustomDepth | (NoFastClear|ShaderResource|DepthStencilTargetable),
               ELoad,ELoad,(FExclusiveDepthStencil)0x22,&local_b8);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_1,param_2,&this->PassDrawRenderState,&local_b8,&local_108,param_3,param_4,
               param_5,PositionOnly,None,'\0',true,(int)this->_padding_,param_6);
  }
  return;
}

// CollectPSOInitializersInternal<0> @ 144719880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCustomDepthPassMeshProcessor::CollectPSOInitializersInternal<0>
          (FCustomDepthPassMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,ERasterizerFillMode param_3,ERasterizerCullMode param_4,
          EPrimitiveType param_5,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_6)

{
  bool bVar1;
  undefined1 auStackY_188 [32];
  FShaderPipelineRef local_118;
  TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_108;
  FGraphicsPipelineRenderTargetsInfo local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_108.VertexShader.ShaderContent = (TDepthOnlyVS<0> *)0x0;
  local_108.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_108.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_108.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_108.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_108.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.ShaderPipeline = (FShaderPipeline *)0x0;
  local_118.ShaderMap = (FShaderMapBase *)0x0;
  bVar1 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_2);
  bVar1 = GetDepthPassShaders<0>
                    (param_2,param_1->VertexFactoryType,(Type)this->_padding_,bVar1,
                     &local_108.VertexShader,&local_108.PixelShader,&local_118);
  if (bVar1) {
    local_b8.RenderTargetsEnabled = 0;
    local_b8.RenderTargetFormats.Elements[0] = '\0';
    local_b8.RenderTargetFormats.Elements[1] = '\0';
    local_b8.RenderTargetFormats.Elements[2] = '\0';
    local_b8.RenderTargetFormats.Elements[3] = '\0';
    local_b8.RenderTargetFormats.Elements[4] = '\0';
    local_b8.RenderTargetFormats.Elements[5] = '\0';
    local_b8.RenderTargetFormats.Elements[6] = '\0';
    local_b8.RenderTargetFormats.Elements[7] = '\0';
    local_b8.DepthStencilTargetFormat = PF_Unknown;
    local_b8.DepthStencilTargetFlag = None;
    local_b8.DepthTargetLoadAction = ENoAction;
    local_b8.DepthTargetStoreAction = ENoAction;
    local_b8.StencilTargetLoadAction = ENoAction;
    local_b8.StencilTargetStoreAction = ENoAction;
    local_b8.DepthStencilAccess.Value = DepthNop;
    local_b8.RenderTargetFlags.Elements[0] = None;
    local_b8.RenderTargetFlags.Elements[1] = None;
    local_b8.RenderTargetFlags.Elements[2] = None;
    local_b8.RenderTargetFlags.Elements[3] = None;
    local_b8.RenderTargetFlags.Elements[4] = None;
    local_b8.RenderTargetFlags.Elements[5] = None;
    local_b8.RenderTargetFlags.Elements[6] = None;
    local_b8.RenderTargetFlags.Elements[7] = None;
    local_b8.NumSamples = 1;
    local_b8.MultiViewCount = '\0';
    local_b8.bHasFragmentDensityAttachment = false;
    SetupDepthStencilInfo
              (PF_DepthStencil,
               GFastVRamConfig.CustomDepth | (NoFastClear|ShaderResource|DepthStencilTargetable),
               ELoad,ELoad,(FExclusiveDepthStencil)0x22,&local_b8);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_1,param_2,&this->PassDrawRenderState,&local_b8,&local_108,param_3,param_4,
               param_5,Default,None,'\0',true,(int)this->_padding_,param_6);
  }
  return;
}

// Process<1> @ 144722990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FCustomDepthPassMeshProcessor::Process<1>
          (FCustomDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  FVertexFactory *pFVar1;
  longlong lVar2;
  bool bVar3;
  FVertexFactoryType *pFVar4;
  FMeshDrawCommandSortKey FVar5;
  FMeshMaterialShaderElementData local_98;
  FShaderPipelineRef local_88;
  TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  pFVar1 = param_1->VertexFactory;
  local_78.VertexShader.ShaderContent = (TDepthOnlyVS<1> *)0x0;
  local_78.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_78.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ShaderPipeline = (FShaderPipeline *)0x0;
  local_88.ShaderMap = (FShaderMapBase *)0x0;
  bVar3 = FMaterial::MaterialUsesPixelDepthOffset_RenderThread(param_6);
  lVar2 = this->_padding_;
  pFVar4 = (FVertexFactoryType *)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
  bVar3 = GetDepthPassShaders<1>
                    (param_6,pFVar4,(Type)lVar2,bVar3,&local_78.VertexShader,&local_78.PixelShader,
                     &local_88);
  if (bVar3) {
    local_98.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_98.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_98,(FSceneView *)this->_padding_,param_4,param_1,param_3,false);
    FVar5 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,
               &this->PassDrawRenderState,&local_78,param_7,param_8,FVar5,PositionOnly,&local_98);
  }
  return bVar3;
}

// Process<0> @ 144722b20

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FCustomDepthPassMeshProcessor::Process<0>
          (FCustomDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  FVertexFactory *pFVar1;
  longlong lVar2;
  bool bVar3;
  FVertexFactoryType *pFVar4;
  FMeshDrawCommandSortKey FVar5;
  FMeshMaterialShaderElementData local_98;
  FShaderPipelineRef local_88;
  TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  pFVar1 = param_1->VertexFactory;
  local_78.VertexShader.ShaderContent = (TDepthOnlyVS<0> *)0x0;
  local_78.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_78.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_78.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ShaderPipeline = (FShaderPipeline *)0x0;
  local_88.ShaderMap = (FShaderMapBase *)0x0;
  bVar3 = FMaterial::MaterialUsesPixelDepthOffset_RenderThread(param_6);
  lVar2 = this->_padding_;
  pFVar4 = (FVertexFactoryType *)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
  bVar3 = GetDepthPassShaders<0>
                    (param_6,pFVar4,(Type)lVar2,bVar3,&local_78.VertexShader,&local_78.PixelShader,
                     &local_88);
  if (bVar3) {
    local_98.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_98.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_98,(FSceneView *)this->_padding_,param_4,param_1,param_3,false);
    FVar5 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,
               &this->PassDrawRenderState,&local_78,param_7,param_8,FVar5,Default,&local_98);
  }
  return bVar3;
}

// FCustomDepthPassMeshProcessor @ 14472dc80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCustomDepthPassMeshProcessor * __thiscall
FCustomDepthPassMeshProcessor::FCustomDepthPassMeshProcessor
          (FCustomDepthPassMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          FMeshPassDrawListContext *param_4)

{
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,CustomDepth,param_1,param_2,param_3,param_4);
  this->_padding_ = (longlong)&___7FCustomDepthPassMeshProcessor__6B_;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  return this;
}

// AddMeshBatch @ 14473e260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FCustomDepthPassMeshProcessor::AddMeshBatch
          (FCustomDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  bool bVar1;
  FMaterial *pFVar2;
  FMaterialRenderProxy *pFVar3;
  
  bVar1 = FPrimitiveSceneProxy::ShouldRenderCustomDepth(param_3);
  if (bVar1) {
    pFVar3 = param_1->MaterialRenderProxy;
    while ((pFVar3 != (FMaterialRenderProxy *)0x0 &&
           ((pFVar2 = (FMaterial *)
                      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,(int)this->_padding_),
            pFVar2 == (FMaterial *)0x0 ||
            (bVar1 = TryAddMeshBatch(this,param_1,param_2,param_3,param_4,pFVar3,pFVar2), !bVar1))))
          ) {
      pFVar3 = (FMaterialRenderProxy *)
               (**(code **)(pFVar3->_padding_ + 0x38))(pFVar3,(int)this->_padding_);
    }
  }
  return;
}

// CollectDefaultMaterialPSOInitializers @ 144740ed0

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
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FCustomDepthPassMeshProcessor::CollectDefaultMaterialPSOInitializers
          (FCustomDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_4)

{
  CollectPSOInitializersInternal<1>
            (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_None,PT_TriangleList,param_4);
  CollectPSOInitializersInternal<0>
            (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_None,PT_TriangleList,param_4);
  CollectPSOInitializersInternal<1>
            (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_CW,PT_TriangleList,param_4);
  CollectPSOInitializersInternal<0>
            (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_CW,PT_TriangleList,param_4);
  CollectPSOInitializersInternal<1>
            (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_CCW,PT_TriangleList,param_4);
  CollectPSOInitializersInternal<0>
            (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_CCW,PT_TriangleList,param_4);
  return;
}

// CollectPSOInitializers @ 144741cd0

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
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FCustomDepthPassMeshProcessor::CollectPSOInitializers
          (FCustomDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  Type TVar1;
  EVertexFactoryFlags EVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  ECustomDepthMode EVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  ERasterizerFillMode EVar11;
  ERasterizerCullMode EVar12;
  longlong lVar13;
  FRHIDepthStencilState *pFVar14;
  FCachedSystemScalabilityCVars *pFVar15;
  UMaterial *pUVar16;
  FMaterial *pFVar17;
  ulonglong uVar18;
  bool bVar19;
  EVertexFactoryFlags EVar20;
  FMeshDrawingPolicyOverrideSettings local_30;
  
  pTVar4 = CVarPSOPrecacheCustomDepth.Ref;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_144741d09:
    lVar13 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    lVar13 = 4;
    if (bVar5) goto LAB_144741d09;
  }
  local_30.MeshOverrideFlags =
       *(EDrawingPolicyOverrideFlags *)((longlong)pTVar4->ShadowedValue + lVar13);
  if (local_30.MeshOverrideFlags == None) {
    return;
  }
  EVar6 = GetCustomDepthMode();
  pFVar14 = GetCustomDepthStencilState
                      (EVar6 == EnabledWithStencil,
                       *(uint *)&param_4->field0_0x0 >> 0x1a & (SM_64|SM_32));
  (this->PassDrawRenderState).DepthStencilState = pFVar14;
  (this->PassDrawRenderState).StencilRef = 0;
  if ((*(byte *)&param_4->field0_0x0 & 0x40) != 0) {
    CollectPSOInitializersInternal<1>
              (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_None,PT_TriangleList,param_5);
    CollectPSOInitializersInternal<0>
              (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_None,PT_TriangleList,param_5);
    CollectPSOInitializersInternal<1>
              (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_CW,PT_TriangleList,param_5);
    CollectPSOInitializersInternal<0>
              (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_CW,PT_TriangleList,param_5);
    CollectPSOInitializersInternal<1>
              (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_CCW,PT_TriangleList,param_5);
    CollectPSOInitializersInternal<0>
              (this,param_3,param_2,ERasterizerFillMode_NumBits,CM_CCW,PT_TriangleList,param_5);
    return;
  }
  EVar2 = param_3->VertexFactoryType->Flags;
  EVar20 = EVar2 & SupportsPositionOnly;
  bVar19 = (bool)(~(byte)(EVar2 >> 0xf) & 1);
  bVar5 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2);
  bVar7 = IsOpaqueBlendMode(param_2);
  bVar8 = IsTranslucentBlendMode(param_2);
  pFVar17 = param_2;
  if ((((!bVar7) || (EVar20 == None)) || (bVar5)) ||
     (bVar7 = FMaterial::WritesEveryPixel(param_2,false,bVar19), !bVar7)) {
    if ((bVar8) && (cVar9 = (**(code **)(param_2->_padding_ + 0x60))(param_2), cVar9 == '\0')) {
      return;
    }
    bVar7 = FMaterial::WritesEveryPixel(param_2,false,bVar19);
    if ((!bVar7) || (cVar9 = (**(code **)(param_2->_padding_ + 0x60))(), cVar9 != '\0')) {
      bVar5 = false;
      bVar7 = false;
      goto LAB_144741f47;
    }
    bVar7 = false;
    if (!bVar5) {
      if ((EVar20 != None) ||
         (param_3->CustomDefaultVertexDeclaration == (FRHIVertexDeclaration *)0x0))
      goto LAB_144741f02;
      goto LAB_144741f08;
    }
  }
  else {
    bVar7 = true;
LAB_144741f02:
    bVar5 = true;
    if ((*(byte *)&param_4->field0_0x0 & 0x3f) == 0) goto LAB_144741f47;
LAB_144741f08:
    pFVar15 = GetCachedScalabilityCVars();
    TVar1 = pFVar15->MaterialQualityLevel;
    pUVar16 = UMaterial::GetDefaultMaterial(MD_Surface);
    pFVar17 = (FMaterial *)
              (**(code **)(pUVar16->_padding_ + 0x390))(pUVar16,param_1->ShaderPlatform,TVar1);
  }
  bVar5 = false;
LAB_144741f47:
  uVar18 = (param_4->field0_0x0).Data >> 0xe;
  bVar10 = (byte)uVar18 & 1;
  if ((local_30.MeshOverrideFlags == DitheredLODTransition) &&
     (((uVar18 & 1) != 0 || (((param_4->field0_0x0).Data >> 0xb & 1) != 0)))) {
    bVar10 = 1;
  }
  if ((!bVar5) && (bVar10 != 0)) {
    if ((bVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bPositionOnly",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\CustomDepthRendering.cpp"
                           ,0x2c4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_30 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    EVar11 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_30);
    EVar12 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_30);
    CollectPSOInitializersInternal<0>
              (this,param_3,pFVar17,EVar11,EVar12,*(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,
               param_5);
  }
  return;
}

// TryAddMeshBatch @ 1447b97b0

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FCustomDepthPassMeshProcessor::TryAddMeshBatch
          (FCustomDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  FVertexFactory *pFVar1;
  code *pcVar2;
  ECustomDepthMode EVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  ERasterizerFillMode EVar9;
  ERasterizerCullMode EVar10;
  FRHIDepthStencilState *pFVar11;
  longlong lVar12;
  UMaterial *pUVar13;
  FMaterial *this_00;
  FVertexFactoryType *pFVar14;
  FMeshDrawCommandSortKey FVar15;
  bool bVar16;
  FMeshDrawingPolicyOverrideSettings local_138;
  FMeshMaterialShaderElementData local_130;
  FMeshMaterialShaderElementData local_120;
  FShaderPipelineRef local_110;
  FShaderPipelineRef local_100;
  TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_e8;
  TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_98;
  
  EVar3 = GetCustomDepthMode();
  pFVar11 = GetCustomDepthStencilState
                      (EVar3 == EnabledWithStencil,
                       (uint)(param_3->CustomDepthStencilWriteMask).Value);
  (this->PassDrawRenderState).DepthStencilState = pFVar11;
  (this->PassDrawRenderState).StencilRef = 0;
  if (EVar3 == EnabledWithStencil) {
    (this->PassDrawRenderState).StencilRef = (uint)param_3->CustomDepthStencilValue;
  }
  cVar4 = (**(code **)(param_1->VertexFactory->_padding_ + 0x38))();
  lVar12 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar16 = (bool)(~(byte)(*(uint *)(lVar12 + 0x38) >> 0xf) & 1);
  bVar5 = DoMaterialAndPrimitiveModifyMeshPosition(param_6,param_3);
  bVar6 = IsOpaqueBlendMode(param_6);
  bVar7 = IsTranslucentBlendMode(param_6);
  if ((((!bVar6) || (cVar4 == '\0')) || (bVar5)) ||
     (bVar6 = FMaterial::WritesEveryPixel(param_6,false,bVar16), !bVar6)) {
    if ((bVar7) && (cVar4 = (**(code **)(param_6->_padding_ + 0x60))(param_6), cVar4 == '\0')) {
      return true;
    }
    bVar6 = FMaterial::WritesEveryPixel(param_6,false,bVar16);
    if (((!bVar6) || (cVar4 = (**(code **)(param_6->_padding_ + 0x60))(), cVar4 != '\0')) ||
       (uVar8 = 0, bVar5)) {
      uVar8 = 0;
      this_00 = param_6;
      goto LAB_1447b9940;
    }
  }
  else {
    uVar8 = 1;
  }
  pUVar13 = UMaterial::GetDefaultMaterial(MD_Surface);
  param_5 = (FMaterialRenderProxy *)(**(code **)(pUVar13->_padding_ + 0x310))(pUVar13);
  this_00 = (FMaterial *)(**(code **)(param_5->_padding_ + 0x30))(param_5,(int)this->_padding_);
  if ((this_00 == (FMaterial *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EffectiveMaterial",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\CustomDepthRendering.cpp"
                         ,0x24f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
LAB_1447b9940:
  local_138 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar9 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_138);
  EVar10 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_138);
  pFVar1 = param_1->VertexFactory;
  if ((bool)uVar8) {
    local_e8.VertexShader.ShaderContent = (TDepthOnlyVS<1> *)0x0;
    local_e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_e8.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
    local_e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    local_110.ShaderPipeline = (FShaderPipeline *)0x0;
    local_110.ShaderMap = (FShaderMapBase *)0x0;
    bVar5 = FMaterial::MaterialUsesPixelDepthOffset_RenderThread(this_00);
    lVar12 = this->_padding_;
    pFVar14 = (FVertexFactoryType *)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
    bVar5 = GetDepthPassShaders<1>
                      (this_00,pFVar14,(Type)lVar12,bVar5,&local_e8.VertexShader,
                       &local_e8.PixelShader,&local_110);
    if (!bVar5) {
      return false;
    }
    local_130.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_130.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_130,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
    FVar15 = CalculateMeshStaticSortKey
                       ((FMeshMaterialShader *)local_e8.VertexShader.ShaderContent,
                        (FMeshMaterialShader *)local_e8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,this_00,
               &this->PassDrawRenderState,&local_e8,EVar9,EVar10,FVar15,PositionOnly,&local_130);
  }
  else {
    local_98.VertexShader.ShaderContent = (TDepthOnlyVS<0> *)0x0;
    local_98.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_98.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
    local_98.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_98.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_98.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_98.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_98.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_98.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_98.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    local_100.ShaderPipeline = (FShaderPipeline *)0x0;
    local_100.ShaderMap = (FShaderMapBase *)0x0;
    bVar5 = FMaterial::MaterialUsesPixelDepthOffset_RenderThread(this_00);
    lVar12 = this->_padding_;
    pFVar14 = (FVertexFactoryType *)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
    bVar5 = GetDepthPassShaders<0>
                      (this_00,pFVar14,(Type)lVar12,bVar5,&local_98.VertexShader,
                       &local_98.PixelShader,&local_100);
    if (!bVar5) {
      return false;
    }
    local_120.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_120.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_120,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
    FVar15 = CalculateMeshStaticSortKey
                       ((FMeshMaterialShader *)local_98.VertexShader.ShaderContent,
                        (FMeshMaterialShader *)local_98.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,this_00,
               &this->PassDrawRenderState,&local_98,EVar9,EVar10,FVar15,Default,&local_120);
  }
  return true;
}

// UseDefaultMaterial @ 1447ba7c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCustomDepthPassMeshProcessor::UseDefaultMaterial
          (FCustomDepthPassMeshProcessor *this,FMaterial *param_1,bool param_2,bool param_3,
          bool param_4,bool *param_5,bool *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  
  *param_6 = false;
  bVar1 = IsOpaqueBlendMode(param_1);
  bVar2 = IsTranslucentBlendMode(param_1);
  if ((((bVar1) && (param_3)) && (!param_2)) &&
     (bVar1 = FMaterial::WritesEveryPixel(param_1,false,param_4), bVar1)) {
    *param_5 = true;
    return true;
  }
  if ((bVar2) && (cVar3 = (**(code **)(param_1->_padding_ + 0x60))(param_1), cVar3 == '\0')) {
    *param_6 = true;
  }
  else {
    bVar1 = FMaterial::WritesEveryPixel(param_1,false,param_4);
    if ((bVar1) &&
       ((cVar3 = (**(code **)(param_1->_padding_ + 0x60))(param_1), cVar3 == '\0' && (!param_2)))) {
      *param_5 = false;
      return true;
    }
  }
  return false;
}


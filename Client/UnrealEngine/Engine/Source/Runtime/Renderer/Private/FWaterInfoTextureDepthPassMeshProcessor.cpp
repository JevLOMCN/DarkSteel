// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// CollectPSOInitializersInternal<1> @ 14592f110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FWaterInfoTextureDepthPassMeshProcessor::CollectPSOInitializersInternal<1>
          (FWaterInfoTextureDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,FPSOPrecacheParams *param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  bool bVar1;
  undefined1 auStackY_178 [32];
  FShaderPipelineRef local_108;
  TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_f8;
  FGraphicsPipelineRenderTargetsInfo local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f8.VertexShader.ShaderContent = (TDepthOnlyVS<1> *)0x0;
  local_f8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_f8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_f8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_f8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_f8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.ShaderPipeline = (FShaderPipeline *)0x0;
  local_108.ShaderMap = (FShaderMapBase *)0x0;
  bVar1 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_3);
  bVar1 = GetDepthPassShaders<1>
                    (param_3,param_2->VertexFactoryType,(Type)this->_padding_,bVar1,
                     &local_f8.VertexShader,&local_f8.PixelShader,&local_108);
  if (bVar1) {
    local_a8.RenderTargetsEnabled = 0;
    local_a8.RenderTargetFormats.Elements[0] = '\0';
    local_a8.RenderTargetFormats.Elements[1] = '\0';
    local_a8.RenderTargetFormats.Elements[2] = '\0';
    local_a8.RenderTargetFormats.Elements[3] = '\0';
    local_a8.RenderTargetFormats.Elements[4] = '\0';
    local_a8.RenderTargetFormats.Elements[5] = '\0';
    local_a8.RenderTargetFormats.Elements[6] = '\0';
    local_a8.RenderTargetFormats.Elements[7] = '\0';
    local_a8.DepthStencilTargetFormat = PF_Unknown;
    local_a8.DepthStencilTargetFlag = None;
    local_a8.DepthTargetLoadAction = ENoAction;
    local_a8.DepthTargetStoreAction = ENoAction;
    local_a8.StencilTargetLoadAction = ENoAction;
    local_a8.StencilTargetStoreAction = ENoAction;
    local_a8.DepthStencilAccess.Value = DepthNop;
    local_a8.RenderTargetFlags.Elements[0] = None;
    local_a8.RenderTargetFlags.Elements[1] = None;
    local_a8.RenderTargetFlags.Elements[2] = None;
    local_a8.RenderTargetFlags.Elements[3] = None;
    local_a8.RenderTargetFlags.Elements[4] = None;
    local_a8.RenderTargetFlags.Elements[5] = None;
    local_a8.RenderTargetFlags.Elements[6] = None;
    local_a8.RenderTargetFlags.Elements[7] = None;
    local_a8.NumSamples = 1;
    local_a8.MultiViewCount = '\0';
    local_a8.bHasFragmentDensityAttachment = false;
    SetupDepthStencilInfo
              (PF_DepthStencil,ShaderResource|DepthStencilTargetable,EClear,ENoAction,
               (FExclusiveDepthStencil)0x2,&local_a8);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_2,param_3,&this->PassDrawRenderState,&local_a8,&local_f8,param_4,param_5,
               *(EPrimitiveType *)&param_6->field0_0x0 & 0x3f,PositionOnly,None,'\0',true,
               (int)this->_padding_,param_7);
  }
  return;
}

// CollectPSOInitializersInternal<0> @ 14592f2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FWaterInfoTextureDepthPassMeshProcessor::CollectPSOInitializersInternal<0>
          (FWaterInfoTextureDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,FPSOPrecacheParams *param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  bool bVar1;
  undefined1 auStackY_178 [32];
  FShaderPipelineRef local_108;
  TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_f8;
  FGraphicsPipelineRenderTargetsInfo local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f8.VertexShader.ShaderContent = (TDepthOnlyVS<0> *)0x0;
  local_f8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_f8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_f8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_f8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_f8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_108.ShaderPipeline = (FShaderPipeline *)0x0;
  local_108.ShaderMap = (FShaderMapBase *)0x0;
  bVar1 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_3);
  bVar1 = GetDepthPassShaders<0>
                    (param_3,param_2->VertexFactoryType,(Type)this->_padding_,bVar1,
                     &local_f8.VertexShader,&local_f8.PixelShader,&local_108);
  if (bVar1) {
    local_a8.RenderTargetFlags.Elements[0] = None;
    local_a8.RenderTargetFlags.Elements[1] = None;
    local_a8.RenderTargetsEnabled = 0;
    local_a8.RenderTargetFormats.Elements[0] = '\0';
    local_a8.RenderTargetFormats.Elements[1] = '\0';
    local_a8.RenderTargetFormats.Elements[2] = '\0';
    local_a8.RenderTargetFormats.Elements[3] = '\0';
    local_a8.RenderTargetFormats.Elements[4] = '\0';
    local_a8.RenderTargetFormats.Elements[5] = '\0';
    local_a8.RenderTargetFormats.Elements[6] = '\0';
    local_a8.RenderTargetFormats.Elements[7] = '\0';
    local_a8.DepthStencilTargetFormat = PF_Unknown;
    local_a8.DepthStencilTargetFlag = None;
    local_a8.DepthTargetLoadAction = ENoAction;
    local_a8.DepthTargetStoreAction = ENoAction;
    local_a8.StencilTargetLoadAction = ENoAction;
    local_a8.StencilTargetStoreAction = ENoAction;
    local_a8.DepthStencilAccess.Value = DepthNop;
    local_a8.RenderTargetFlags.Elements[2] = None;
    local_a8.RenderTargetFlags.Elements[3] = None;
    local_a8.RenderTargetFlags.Elements[4] = None;
    local_a8.RenderTargetFlags.Elements[5] = None;
    local_a8.RenderTargetFlags.Elements[6] = None;
    local_a8.RenderTargetFlags.Elements[7] = None;
    local_a8.NumSamples = 1;
    local_a8.MultiViewCount = '\0';
    local_a8.bHasFragmentDensityAttachment = false;
    SetupDepthStencilInfo
              (PF_DepthStencil,ShaderResource|DepthStencilTargetable,EClear,ENoAction,
               (FExclusiveDepthStencil)0x2,&local_a8);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_2,param_3,&this->PassDrawRenderState,&local_a8,&local_f8,param_4,param_5,
               *(EPrimitiveType *)&param_6->field0_0x0 & 0x3f,Default,None,'\0',true,
               (int)this->_padding_,param_7);
  }
  return;
}

// Process<1> @ 14592fb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
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
FWaterInfoTextureDepthPassMeshProcessor::Process<1>
          (FWaterInfoTextureDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  FVertexFactoryType *pFVar4;
  FMeshDrawCommandSortKey FVar5;
  FMeshMaterialShaderElementData local_88;
  FShaderPipelineRef local_78;
  TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_68;
  
  local_68.VertexShader.ShaderContent = (TDepthOnlyVS<1> *)0x0;
  local_68.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_68.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.ShaderPipeline = (FShaderPipeline *)0x0;
  local_78.ShaderMap = (FShaderMapBase *)0x0;
  bVar2 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_6);
  lVar1 = this->_padding_;
  pFVar4 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar2 = GetDepthPassShaders<1>
                    (param_6,pFVar4,(Type)lVar1,bVar2,&local_68.VertexShader,&local_68.PixelShader,
                     &local_78);
  if (bVar2) {
    local_88.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_88.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_88,(FSceneView *)this->_padding_,param_3,param_1,param_4,true);
    bVar3 = IsMaskedBlendMode(param_6);
    FVar5 = CalculateDepthPassMeshStaticSortKey
                      (bVar3,(FMeshMaterialShader *)local_68.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_68.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
               &this->PassDrawRenderState,&local_68,param_7,param_8,FVar5,PositionOnly,&local_88);
  }
  return bVar2;
}

// Process<0> @ 14592fce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
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
FWaterInfoTextureDepthPassMeshProcessor::Process<0>
          (FWaterInfoTextureDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  FVertexFactoryType *pFVar4;
  FMeshDrawCommandSortKey FVar5;
  FMeshMaterialShaderElementData local_88;
  FShaderPipelineRef local_78;
  TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_68;
  
  local_68.VertexShader.ShaderContent = (TDepthOnlyVS<0> *)0x0;
  local_68.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
  local_68.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_78.ShaderPipeline = (FShaderPipeline *)0x0;
  local_78.ShaderMap = (FShaderMapBase *)0x0;
  bVar2 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_6);
  lVar1 = this->_padding_;
  pFVar4 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar2 = GetDepthPassShaders<0>
                    (param_6,pFVar4,(Type)lVar1,bVar2,&local_68.VertexShader,&local_68.PixelShader,
                     &local_78);
  if (bVar2) {
    local_88.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_88.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_88,(FSceneView *)this->_padding_,param_3,param_1,param_4,true);
    bVar3 = IsMaskedBlendMode(param_6);
    FVar5 = CalculateDepthPassMeshStaticSortKey
                      (bVar3,(FMeshMaterialShader *)local_68.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_68.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
               &this->PassDrawRenderState,&local_68,param_7,param_8,FVar5,Default,&local_88);
  }
  return bVar2;
}

// FWaterInfoTextureDepthPassMeshProcessor @ 145933e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FWaterInfoTextureDepthPassMeshProcessor * __thiscall
FWaterInfoTextureDepthPassMeshProcessor::FWaterInfoTextureDepthPassMeshProcessor
          (FWaterInfoTextureDepthPassMeshProcessor *this,FScene *param_1,Type param_2,
          FSceneView *param_3,FMeshPassDrawListContext *param_4)

{
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,WaterInfoTextureDepthPass,param_1,param_2,param_3,param_4);
  this->_padding_ = (longlong)&___7FWaterInfoTextureDepthPassMeshProcessor__6B_;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilAccess = DepthWrite;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  return this;
}

// AddMeshBatch @ 145934dd0

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
FWaterInfoTextureDepthPassMeshProcessor::AddMeshBatch
          (FWaterInfoTextureDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  bool bVar1;
  FMaterial *pFVar2;
  FMaterialRenderProxy *pFVar3;
  
  pFVar3 = param_1->MaterialRenderProxy;
  while ((pFVar3 != (FMaterialRenderProxy *)0x0 &&
         ((pFVar2 = (FMaterial *)
                    (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,(int)this->_padding_),
          pFVar2 == (FMaterial *)0x0 ||
          (bVar1 = TryAddMeshBatch(this,param_1,param_2,param_3,param_4,pFVar3,pFVar2), !bVar1)))))
  {
    pFVar3 = (FMaterialRenderProxy *)
             (**(code **)(pFVar3->_padding_ + 0x38))(pFVar3,(int)this->_padding_);
  }
  return;
}

// CollectPSOInitializers @ 1459359f0

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FWaterInfoTextureDepthPassMeshProcessor::CollectPSOInitializers
          (FWaterInfoTextureDepthPassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  Type TVar1;
  EVertexFactoryFlags EVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ERasterizerFillMode EVar6;
  ERasterizerCullMode EVar7;
  FCachedSystemScalabilityCVars *pFVar8;
  UMaterial *pUVar9;
  FMaterial *pFVar10;
  bool bVar11;
  FMeshDrawingPolicyOverrideSettings local_38 [2];
  
  iVar5 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if ((iVar5 == 0) && (bVar4 = IsTranslucentBlendMode(param_2), !bVar4)) {
    local_38[0] = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    EVar6 = FMeshPassProcessor::ComputeMeshFillMode(param_2,local_38);
    EVar7 = FMeshPassProcessor::ComputeMeshCullMode(param_2,local_38);
    EVar2 = param_3->VertexFactoryType->Flags;
    bVar11 = (bool)(~(byte)(EVar2 >> 0xf) & 1);
    bVar4 = IsOpaqueBlendMode(param_2);
    if ((!bVar4) ||
       ((((EVar2 & SupportsPositionOnly) == None ||
         (bVar4 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2), bVar4)) ||
        (bVar4 = FMaterial::WritesEveryPixel(param_2,false,bVar11), !bVar4)))) {
      bVar4 = FMaterial::WritesEveryPixel(param_2,false,bVar11);
      if ((bVar4) && (bVar4 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2), !bVar4))
      {
        pFVar8 = GetCachedScalabilityCVars();
        TVar1 = pFVar8->MaterialQualityLevel;
        pUVar9 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_2 = (FMaterial *)
                  (**(code **)(pUVar9->_padding_ + 0x390))(pUVar9,param_1->ShaderPlatform,TVar1);
        if ((param_2 == (FMaterial *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("EffectiveMaterial",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\WaterInfoTextureRendering.cpp"
                               ,0x244,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      CollectPSOInitializersInternal<0>(this,param_1,param_3,param_2,EVar6,EVar7,param_4,param_5);
    }
    else {
      pFVar8 = GetCachedScalabilityCVars();
      TVar1 = pFVar8->MaterialQualityLevel;
      pUVar9 = UMaterial::GetDefaultMaterial(MD_Surface);
      pFVar10 = (FMaterial *)
                (**(code **)(pUVar9->_padding_ + 0x390))(pUVar9,param_1->ShaderPlatform,TVar1);
      if ((pFVar10 == (FMaterial *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefaultMaterial",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\WaterInfoTextureRendering.cpp"
                             ,0x236,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      CollectPSOInitializersInternal<1>(this,param_1,param_3,pFVar10,EVar6,EVar7,param_4,param_5);
    }
  }
  return;
}

// TryAddMeshBatch @ 145947a90

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
FWaterInfoTextureDepthPassMeshProcessor::TryAddMeshBatch
          (FWaterInfoTextureDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  longlong lVar9;
  UMaterial *pUVar10;
  FMaterial *this_00;
  FVertexFactoryType *pFVar11;
  FMeshDrawCommandSortKey FVar12;
  bool bVar13;
  FMeshDrawingPolicyOverrideSettings local_120;
  FMeshMaterialShaderElementData local_118;
  FMeshMaterialShaderElementData local_108;
  FShaderPipelineRef local_f8;
  FShaderPipelineRef local_e8;
  TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_d8;
  TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  if (param_1->bUseForWaterInfoTextureDepth == 0) {
    return true;
  }
  iVar6 = (**(code **)(param_6->_padding_ + 0x40))(param_6);
  if (iVar6 == 0) {
    bVar2 = IsTranslucentBlendMode(param_6);
    if (bVar2) {
      return true;
    }
    local_120 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_120);
    EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_120);
    lVar9 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
    bVar13 = (bool)(~(byte)(*(uint *)(lVar9 + 0x38) >> 0xf) & 1);
    bVar2 = FMaterial::MaterialModifiesMeshPosition_RenderThread(param_6);
    if ((!bVar2) ||
       ((bVar2 = ShouldOptimizedWPOAffectNonNaniteShaderSelection(), bVar2 &&
        (param_3->bEvaluateWorldPositionOffset == 0)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar3 = IsOpaqueBlendMode(param_6);
    if ((((!bVar3) ||
         (cVar4 = (**(code **)(param_1->VertexFactory->_padding_ + 0x38))(), cVar4 == '\0')) ||
        (bVar2)) || (bVar3 = FMaterial::WritesEveryPixel(param_6,false,bVar13), !bVar3)) {
      bVar13 = FMaterial::WritesEveryPixel(param_6,false,bVar13);
      if ((bVar13) && (!bVar2)) {
        pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
        param_5 = (FMaterialRenderProxy *)(**(code **)(pUVar10->_padding_ + 0x310))(pUVar10);
        param_6 = (FMaterial *)
                  (**(code **)(param_5->_padding_ + 0x30))(param_5,(int)this->_padding_);
        if ((param_6 == (FMaterial *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("EffectiveMaterial",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\WaterInfoTextureRendering.cpp"
                               ,0x1e8,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
      }
      local_88.VertexShader.ShaderContent = (TDepthOnlyVS<0> *)0x0;
      local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
      local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
      local_e8.ShaderPipeline = (FShaderPipeline *)0x0;
      local_e8.ShaderMap = (FShaderMapBase *)0x0;
      bVar2 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_6);
      lVar9 = this->_padding_;
      pFVar11 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
      bVar2 = GetDepthPassShaders<0>
                        (param_6,pFVar11,(Type)lVar9,bVar2,&local_88.VertexShader,
                         &local_88.PixelShader,&local_e8);
      if (bVar2) {
        local_118.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
        local_118.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
        FMeshMaterialShaderElementData::InitializeMeshMaterialData
                  (&local_118,(FSceneView *)this->_padding_,param_3,param_1,param_4,true);
        bVar2 = IsMaskedBlendMode(param_6);
        FVar12 = CalculateDepthPassMeshStaticSortKey
                           (bVar2,(FMeshMaterialShader *)local_88.VertexShader.ShaderContent,
                            (FMeshMaterialShader *)local_88.PixelShader.ShaderContent);
        FMeshPassProcessor::
        BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                  ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
                   &this->PassDrawRenderState,&local_88,EVar7,EVar8,FVar12,Default,&local_118);
        return true;
      }
    }
    else {
      pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
      local_118.FadeUniformBuffer =
           (FRHIUniformBuffer *)(**(code **)(pUVar10->_padding_ + 0x310))(pUVar10);
      this_00 = (FMaterial *)
                (**(code **)(((FMaterialRenderProxy *)local_118.FadeUniformBuffer)->_padding_ + 0x30
                            ))(local_118.FadeUniformBuffer,(int)this->_padding_);
      local_d8.VertexShader.ShaderContent = (TDepthOnlyVS<1> *)0x0;
      local_d8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_d8.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
      local_d8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_d8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_d8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_d8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_d8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_d8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_d8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
      local_f8.ShaderPipeline = (FShaderPipeline *)0x0;
      local_f8.ShaderMap = (FShaderMapBase *)0x0;
      bVar2 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(this_00);
      lVar9 = this->_padding_;
      pFVar11 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
      bVar2 = GetDepthPassShaders<1>
                        (this_00,pFVar11,(Type)lVar9,bVar2,&local_d8.VertexShader,
                         &local_d8.PixelShader,&local_f8);
      if (bVar2) {
        local_108.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
        local_108.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
        FMeshMaterialShaderElementData::InitializeMeshMaterialData
                  (&local_108,(FSceneView *)this->_padding_,param_3,param_1,param_4,true);
        bVar2 = IsMaskedBlendMode(this_00);
        FVar12 = CalculateDepthPassMeshStaticSortKey
                           (bVar2,(FMeshMaterialShader *)local_d8.VertexShader.ShaderContent,
                            (FMeshMaterialShader *)local_d8.PixelShader.ShaderContent);
        FMeshPassProcessor::
        BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                  ((FMeshPassProcessor *)this,param_1,param_2,param_3,
                   (FMaterialRenderProxy *)local_118.FadeUniformBuffer,this_00,
                   &this->PassDrawRenderState,&local_d8,EVar7,EVar8,FVar12,PositionOnly,&local_108);
        return true;
      }
    }
    return false;
  }
  return true;
}


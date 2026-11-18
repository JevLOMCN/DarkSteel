// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// CollectPSOInitializersInternal<1> @ 14565eee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
FSingleLayerWaterDepthPrepassMeshProcessor::CollectPSOInitializersInternal<1>
          (FSingleLayerWaterDepthPrepassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,FPSOPrecacheParams *param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

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
  bVar1 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_3);
  bVar1 = GetDepthPassShaders<1>
                    (param_3,param_2->VertexFactoryType,(Type)this->_padding_,bVar1,
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
    local_b8.MultiViewCount = '\0';
    local_b8.bHasFragmentDensityAttachment = false;
    local_b8.NumSamples = (ushort)param_1->NumSamples;
    local_b8.RenderTargetFlags.Elements[0] = None;
    local_b8.RenderTargetFlags.Elements[1] = None;
    local_b8.RenderTargetFlags.Elements[2] = None;
    local_b8.RenderTargetFlags.Elements[3] = None;
    local_b8.RenderTargetFlags.Elements[4] = None;
    local_b8.RenderTargetFlags.Elements[5] = None;
    local_b8.RenderTargetFlags.Elements[6] = None;
    local_b8.RenderTargetFlags.Elements[7] = None;
    SetupDepthStencilInfo
              (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x22,
               &local_b8);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_2,param_3,&this->PassDrawRenderState,&local_b8,&local_108,param_4,param_5,
               *(EPrimitiveType *)&param_6->field0_0x0 & 0x3f,PositionOnly,None,'\0',true,
               (int)this->_padding_,param_7);
  }
  return;
}

// CollectPSOInitializersInternal<0> @ 14565f060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
FSingleLayerWaterDepthPrepassMeshProcessor::CollectPSOInitializersInternal<0>
          (FSingleLayerWaterDepthPrepassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,FPSOPrecacheParams *param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

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
  bVar1 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(param_3);
  bVar1 = GetDepthPassShaders<0>
                    (param_3,param_2->VertexFactoryType,(Type)this->_padding_,bVar1,
                     &local_108.VertexShader,&local_108.PixelShader,&local_118);
  if (bVar1) {
    local_b8.NumSamples = (ushort)param_1->NumSamples;
    local_b8.RenderTargetsEnabled = 0;
    local_b8.RenderTargetFormats.Elements[0] = '\0';
    local_b8.RenderTargetFormats.Elements[1] = '\0';
    local_b8.RenderTargetFormats.Elements[2] = '\0';
    local_b8.RenderTargetFormats.Elements[3] = '\0';
    local_b8.RenderTargetFormats.Elements[4] = '\0';
    local_b8.RenderTargetFormats.Elements[5] = '\0';
    local_b8.RenderTargetFormats.Elements[6] = '\0';
    local_b8.RenderTargetFormats.Elements[7] = '\0';
    local_b8.RenderTargetFlags.Elements[0] = None;
    local_b8.RenderTargetFlags.Elements[1] = None;
    local_b8.RenderTargetFlags.Elements[2] = None;
    local_b8.RenderTargetFlags.Elements[3] = None;
    local_b8.RenderTargetFlags.Elements[4] = None;
    local_b8.RenderTargetFlags.Elements[5] = None;
    local_b8.RenderTargetFlags.Elements[6] = None;
    local_b8.RenderTargetFlags.Elements[7] = None;
    local_b8.DepthStencilTargetFormat = PF_Unknown;
    local_b8.DepthStencilTargetFlag = None;
    local_b8.DepthTargetLoadAction = ENoAction;
    local_b8.DepthTargetStoreAction = ENoAction;
    local_b8.StencilTargetLoadAction = ENoAction;
    local_b8.StencilTargetStoreAction = ENoAction;
    local_b8.DepthStencilAccess.Value = DepthNop;
    local_b8.MultiViewCount = '\0';
    local_b8.bHasFragmentDensityAttachment = false;
    SetupDepthStencilInfo
              (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x22,
               &local_b8);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_2,param_3,&this->PassDrawRenderState,&local_b8,&local_108,param_4,param_5,
               *(EPrimitiveType *)&param_6->field0_0x0 & 0x3f,Default,None,'\0',true,
               (int)this->_padding_,param_7);
  }
  return;
}

// Process<1> @ 1456636d0

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
FSingleLayerWaterDepthPrepassMeshProcessor::Process<1>
          (FSingleLayerWaterDepthPrepassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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

// Process<0> @ 145663870

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
FSingleLayerWaterDepthPrepassMeshProcessor::Process<0>
          (FSingleLayerWaterDepthPrepassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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

// FSingleLayerWaterDepthPrepassMeshProcessor @ 145665d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSingleLayerWaterDepthPrepassMeshProcessor * __thiscall
FSingleLayerWaterDepthPrepassMeshProcessor::FSingleLayerWaterDepthPrepassMeshProcessor
          (FSingleLayerWaterDepthPrepassMeshProcessor *this,FScene *param_1,Type param_2,
          FSceneView *param_3,FMeshPassProcessorRenderState *param_4,
          FMeshPassDrawListContext *param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,NumBits,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7FSingleLayerWaterDepthPrepassMeshProcessor__6B_;
  pFVar1 = param_4->DepthStencilState;
  (this->PassDrawRenderState).BlendState = param_4->BlendState;
  (this->PassDrawRenderState).DepthStencilState = pFVar1;
  uVar3 = *(undefined4 *)&param_4->field_0x14;
  pFVar2 = param_4->ViewUniformBuffer;
  (this->PassDrawRenderState).DepthStencilAccess = param_4->DepthStencilAccess;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x14 = uVar3;
  (this->PassDrawRenderState).ViewUniformBuffer = pFVar2;
  pFVar2 = param_4->PassUniformBuffer;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = param_4->InstancedViewUniformBuffer;
  (this->PassDrawRenderState).PassUniformBuffer = pFVar2;
  uVar4 = param_4->StencilRef;
  uVar3 = *(undefined4 *)&param_4->field_0x3c;
  (this->PassDrawRenderState).NaniteUniformBuffer = param_4->NaniteUniformBuffer;
  (this->PassDrawRenderState).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar3;
  return this;
}

// AddMeshBatch @ 145672110

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSingleLayerWaterDepthPrepassMeshProcessor::AddMeshBatch
          (FSingleLayerWaterDepthPrepassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  FGenericStaticFeatureLevel FVar1;
  bool bVar2;
  FMaterial *pFVar3;
  FMaterialRenderProxy *pFVar4;
  FStaticShaderPlatform FVar5;
  
  FVar1.FeatureLevel = (Type)this->_padding_;
  if (FVar1.FeatureLevel == Num) {
    FVar5.Platform = SP_NumPlatforms;
  }
  else {
    FVar5.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)FVar1.FeatureLevel];
  }
  bVar2 = IsSingleLayerWaterDepthPrepassEnabled(FVar5,FVar1);
  if (bVar2) {
    pFVar4 = param_1->MaterialRenderProxy;
    while ((pFVar4 != (FMaterialRenderProxy *)0x0 &&
           ((pFVar3 = (FMaterial *)
                      (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,(int)this->_padding_),
            pFVar3 == (FMaterial *)0x0 ||
            (bVar2 = TryAddMeshBatch(this,param_1,param_2,param_3,param_4,pFVar4,pFVar3), !bVar2))))
          ) {
      pFVar4 = (FMaterialRenderProxy *)
               (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4,(int)this->_padding_);
    }
  }
  return;
}

// CollectPSOInitializers @ 145676da0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSingleLayerWaterDepthPrepassMeshProcessor::CollectPSOInitializers
          (FSingleLayerWaterDepthPrepassMeshProcessor *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  Type TVar1;
  FGenericStaticFeatureLevel FVar2;
  EVertexFactoryFlags EVar3;
  code *pcVar4;
  bool bVar5;
  ERasterizerFillMode EVar6;
  ERasterizerCullMode EVar7;
  ushort *puVar8;
  FCachedSystemScalabilityCVars *pFVar9;
  UMaterial *pUVar10;
  FMaterial *pFVar11;
  FStaticShaderPlatform FVar12;
  bool bVar13;
  undefined1 local_res18 [8];
  FMeshDrawingPolicyOverrideSettings local_30;
  
  puVar8 = (ushort *)(**(code **)(param_2->_padding_ + 0x280))(param_2,local_res18);
  if ((*puVar8 & 0x400) != 0) {
    FVar2.FeatureLevel = (Type)this->_padding_;
    if (FVar2.FeatureLevel == Num) {
      FVar12.Platform = SP_NumPlatforms;
    }
    else {
      FVar12.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)FVar2.FeatureLevel];
    }
    bVar5 = IsSingleLayerWaterDepthPrepassEnabled(FVar12,FVar2);
    if (bVar5) {
      local_30 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
      EVar6 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_30);
      EVar7 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_30);
      EVar3 = param_3->VertexFactoryType->Flags;
      bVar13 = (bool)(~(byte)(EVar3 >> 0xf) & 1);
      bVar5 = IsOpaqueBlendMode(param_2);
      if ((((!bVar5) || ((EVar3 & SupportsPositionOnly) == None)) ||
          (bVar5 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2), bVar5)) ||
         (bVar5 = FMaterial::WritesEveryPixel(param_2,false,bVar13), !bVar5)) {
        bVar5 = FMaterial::WritesEveryPixel(param_2,false,bVar13);
        if ((bVar5) && (bVar5 = FMaterial::MaterialModifiesMeshPosition_GameThread(param_2), !bVar5)
           ) {
          pFVar9 = GetCachedScalabilityCVars();
          TVar1 = pFVar9->MaterialQualityLevel;
          pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
          param_2 = (FMaterial *)
                    (**(code **)(pUVar10->_padding_ + 0x390))(pUVar10,param_1->ShaderPlatform,TVar1)
          ;
          if ((param_2 == (FMaterial *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("EffectiveMaterial",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SingleLayerWaterRendering.cpp"
                                 ,0x91e,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        CollectPSOInitializersInternal<0>(this,param_1,param_3,param_2,EVar6,EVar7,param_4,param_5);
      }
      else {
        pFVar9 = GetCachedScalabilityCVars();
        TVar1 = pFVar9->MaterialQualityLevel;
        pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
        pFVar11 = (FMaterial *)
                  (**(code **)(pUVar10->_padding_ + 0x390))(pUVar10,param_1->ShaderPlatform,TVar1);
        if ((pFVar11 == (FMaterial *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("DefaultMaterial",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SingleLayerWaterRendering.cpp"
                               ,0x910,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        CollectPSOInitializersInternal<1>(this,param_1,param_3,pFVar11,EVar6,EVar7,param_4,param_5);
      }
    }
  }
  return;
}

// TryAddMeshBatch @ 1456a4960

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
FSingleLayerWaterDepthPrepassMeshProcessor::TryAddMeshBatch
          (FSingleLayerWaterDepthPrepassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  ERasterizerFillMode EVar6;
  ERasterizerCullMode EVar7;
  ushort *puVar8;
  longlong lVar9;
  UMaterial *pUVar10;
  FMaterial *pFVar11;
  FVertexFactoryType *pFVar12;
  FMeshDrawCommandSortKey FVar13;
  bool bVar14;
  FMeshDrawingPolicyOverrideSettings local_110;
  FMeshMaterialShaderElementData local_108;
  FMeshMaterialShaderElementData local_f8;
  FShaderPipelineRef local_e8;
  FShaderPipelineRef local_d8;
  TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_c8;
  TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  pFVar11 = param_6;
  puVar8 = (ushort *)(**(code **)(param_6->_padding_ + 0x280))(param_6,&param_6);
  if ((*puVar8 & 0x400) == 0) {
    return true;
  }
  local_110 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar6 = FMeshPassProcessor::ComputeMeshFillMode(pFVar11,&local_110);
  EVar7 = FMeshPassProcessor::ComputeMeshCullMode(pFVar11,&local_110);
  lVar9 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar14 = (bool)(~(byte)(*(uint *)(lVar9 + 0x38) >> 0xf) & 1);
  bVar2 = DoMaterialAndPrimitiveModifyMeshPosition(pFVar11,param_3);
  bVar3 = IsOpaqueBlendMode(pFVar11);
  if ((((!bVar3) ||
       (cVar4 = (**(code **)(param_1->VertexFactory->_padding_ + 0x38))(), cVar4 == '\0')) ||
      (bVar2)) || (bVar3 = FMaterial::WritesEveryPixel(pFVar11,false,bVar14), !bVar3)) {
    bVar3 = FMaterial::WritesEveryPixel(pFVar11,false,bVar14);
    if ((bVar3) && (!bVar2)) {
      pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
      param_5 = (FMaterialRenderProxy *)(**(code **)(pUVar10->_padding_ + 0x310))(pUVar10);
      pFVar11 = (FMaterial *)(**(code **)(param_5->_padding_ + 0x30))(param_5,(int)this->_padding_);
      if ((pFVar11 == (FMaterial *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("EffectiveMaterial",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SingleLayerWaterRendering.cpp"
                             ,0x8c3,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
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
    local_d8.ShaderPipeline = (FShaderPipeline *)0x0;
    local_d8.ShaderMap = (FShaderMapBase *)0x0;
    bVar2 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(pFVar11);
    lVar9 = this->_padding_;
    pFVar12 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
    bVar2 = GetDepthPassShaders<0>
                      (pFVar11,pFVar12,(Type)lVar9,bVar2,&local_78.VertexShader,
                       &local_78.PixelShader,&local_d8);
    if (bVar2) {
      local_f8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
      local_f8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
      FMeshMaterialShaderElementData::InitializeMeshMaterialData
                (&local_f8,(FSceneView *)this->_padding_,param_3,param_1,param_4,true);
      bVar2 = IsMaskedBlendMode(pFVar11);
      FVar13 = CalculateDepthPassMeshStaticSortKey
                         (bVar2,(FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                          (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
      FMeshPassProcessor::
      BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<0>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,pFVar11,
                 &this->PassDrawRenderState,&local_78,EVar6,EVar7,FVar13,Default,&local_f8);
      return true;
    }
  }
  else {
    pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
    param_6 = (FMaterial *)(**(code **)(pUVar10->_padding_ + 0x310))(pUVar10);
    pFVar11 = (FMaterial *)(**(code **)(param_6->_padding_ + 0x30))(param_6,(int)this->_padding_);
    local_c8.VertexShader.ShaderContent = (TDepthOnlyVS<1> *)0x0;
    local_c8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_c8.PixelShader.ShaderContent = (FDepthOnlyPS *)0x0;
    local_c8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_c8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_c8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_c8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_c8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_c8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_c8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    local_e8.ShaderPipeline = (FShaderPipeline *)0x0;
    local_e8.ShaderMap = (FShaderMapBase *)0x0;
    bVar2 = FMaterial::MaterialUsesPixelDepthOffset_GameThread(pFVar11);
    lVar9 = this->_padding_;
    pFVar12 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
    bVar2 = GetDepthPassShaders<1>
                      (pFVar11,pFVar12,(Type)lVar9,bVar2,&local_c8.VertexShader,
                       &local_c8.PixelShader,&local_e8);
    if (bVar2) {
      local_108.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
      local_108.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
      FMeshMaterialShaderElementData::InitializeMeshMaterialData
                (&local_108,(FSceneView *)this->_padding_,param_3,param_1,param_4,true);
      bVar2 = IsMaskedBlendMode(pFVar11);
      FVar13 = CalculateDepthPassMeshStaticSortKey
                         (bVar2,(FMeshMaterialShader *)local_c8.VertexShader.ShaderContent,
                          (FMeshMaterialShader *)local_c8.PixelShader.ShaderContent);
      FMeshPassProcessor::
      BuildMeshDrawCommands<TMeshProcessorShaders<TDepthOnlyVS<1>,FDepthOnlyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                ((FMeshPassProcessor *)this,param_1,param_2,param_3,(FMaterialRenderProxy *)param_6,
                 pFVar11,&this->PassDrawRenderState,&local_c8,EVar6,EVar7,FVar13,PositionOnly,
                 &local_108);
      return true;
    }
  }
  return false;
}


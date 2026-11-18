// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FLumenFrontLayerTranslucencyGBufferMeshProcessor @ 144c1e200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenFrontLayerTranslucencyGBufferMeshProcessor * __thiscall
FLumenFrontLayerTranslucencyGBufferMeshProcessor::FLumenFrontLayerTranslucencyGBufferMeshProcessor
          (FLumenFrontLayerTranslucencyGBufferMeshProcessor *this,FScene *param_1,Type param_2,
          FSceneView *param_3,FMeshPassProcessorRenderState *param_4,
          FMeshPassDrawListContext *param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,LumenFrontLayerTranslucencyGBuffer,param_1,param_2,param_3,
             param_5);
  this->_padding_ = (longlong)&___7FLumenFrontLayerTranslucencyGBufferMeshProcessor__6B_;
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

// operator() @ 144c22e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
`FLumenFrontLayerTranslucencyGBufferMeshProcessor::AddMeshBatch'::__l11::<lambda_1>::operator()
          (void *this,FMeshBatch *param_1,ulong64 param_2,FPrimitiveSceneProxy *param_3,int param_4,
          FMaterialRenderProxy *param_5,FMaterial *param_6)

{
  FVertexFactory *pFVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ERasterizerFillMode EVar5;
  ERasterizerCullMode EVar6;
  FVertexFactoryType *pFVar7;
  FMeshDrawCommandSortKey FVar8;
  FMeshDrawingPolicyOverrideSettings local_res20;
  FMeshMaterialShaderElementData local_88;
  TMeshProcessorShaders<FLumenFrontLayerTranslucencyGBufferVS,FLumenFrontLayerTranslucencyGBufferPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  if ((((param_3->bRenderInMainPass != '\0') &&
       (iVar4 = (**(code **)(param_6->_padding_ + 0x40))(param_6), iVar4 != 3)) &&
      (cVar2 = (**(code **)(param_6->_padding_ + 0x78))(param_6), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(param_6->_padding_ + 0x310))(param_6), cVar2 == '\0')) {
    pFVar1 = param_1->VertexFactory;
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
    local_78.VertexShader.ShaderContent = (FLumenFrontLayerTranslucencyGBufferVS *)0x0;
    local_78.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_78.PixelShader.ShaderContent = (FLumenFrontLayerTranslucencyGBufferPS *)0x0;
    local_78.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_78.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_78.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_78.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_78.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_78.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_78.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    pFVar7 = (FVertexFactoryType *)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
    bVar3 = GetLumenFrontLayerTranslucencyGBufferShaders
                      (param_6,pFVar7,&local_78.VertexShader,&local_78.PixelShader);
    if (!bVar3) {
      return bVar3;
    }
    local_88.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_88.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_88,*(FSceneView **)(*(longlong *)this + 0x28),param_3,param_1,param_4,false);
    local_res20 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar5 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_res20);
    EVar6 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_res20);
    FVar8 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FLumenFrontLayerTranslucencyGBufferVS,FLumenFrontLayerTranslucencyGBufferPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              (*(FMeshPassProcessor **)this,param_1,param_2,param_3,param_5,param_6,
               (FMeshPassProcessorRenderState *)(*(FMeshPassProcessor **)this + 1),&local_78,EVar5,
               EVar6,FVar8,Default,&local_88);
  }
  return true;
}

// AddMeshBatch @ 144c28340

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

void __thiscall
FLumenFrontLayerTranslucencyGBufferMeshProcessor::AddMeshBatch
          (FLumenFrontLayerTranslucencyGBufferMeshProcessor *this,FMeshBatch *param_1,
          ulong64 param_2,FPrimitiveSceneProxy *param_3,int param_4)

{
  bool bVar1;
  FMaterial *pFVar2;
  FMaterialRenderProxy *pFVar3;
  FLLMScope local_res10 [2];
  FName local_28;
  FMemScope local_20;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_Lumen.UniqueName,false,None,Default,true);
  local_28 = LLMTagDeclaration_Lumen.UniqueName;
  FMemScope::FMemScope(&local_20,&local_28,true);
  if ((((param_1->bUseForMaterial != 0) && (param_3 != (FPrimitiveSceneProxy *)0x0)) &&
      ((FSceneView *)this->_padding_ != (FSceneView *)0x0)) &&
     ((bVar1 = ShouldRenderLumenReflections((FSceneView *)this->_padding_,false,false,true), bVar1
      || (bVar1 = RayTracedTranslucency::IsEnabled((FViewInfo *)this->_padding_), bVar1)))) {
    pFVar3 = param_1->MaterialRenderProxy;
    while ((pFVar3 != (FMaterialRenderProxy *)0x0 &&
           ((pFVar2 = (FMaterial *)
                      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,(int)this->_padding_),
            pFVar2 == (FMaterial *)0x0 ||
            (local_28 = (FName)this,
            bVar1 = `FLumenFrontLayerTranslucencyGBufferMeshProcessor::AddMeshBatch'::__l11::
                    <lambda_1>::operator()(&local_28,param_1,param_2,param_3,param_4,pFVar3,pFVar2),
            !bVar1))))) {
      pFVar3 = (FMaterialRenderProxy *)
               (**(code **)(pFVar3->_padding_ + 0x38))(pFVar3,(int)this->_padding_);
    }
  }
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// CollectPSOInitializers @ 144c2cf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLumenFrontLayerTranslucencyGBufferMeshProcessor::CollectPSOInitializers
          (FLumenFrontLayerTranslucencyGBufferMeshProcessor *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ERasterizerFillMode EVar4;
  ERasterizerCullMode EVar5;
  undefined1 auStackY_1b8 [32];
  FLLMScope local_148 [2];
  FMeshDrawingPolicyOverrideSettings local_140;
  FName local_138;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_130;
  FMemScope local_128 [2];
  TMeshProcessorShaders<FLumenFrontLayerTranslucencyGBufferVS,FLumenFrontLayerTranslucencyGBufferPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_118;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_130 = param_5;
  FLLMScope::FLLMScope(local_148,LLMTagDeclaration_Lumen.UniqueName,false,None,Default,true);
  local_138 = LLMTagDeclaration_Lumen.UniqueName;
  FMemScope::FMemScope(local_128,&local_138,true);
  if ((((param_4->field0_0x0).Data >> 10 & 1) == 0) ||
     (((iVar3 = (**(code **)(param_2->_padding_ + 0x40))(param_2), iVar3 != 3 &&
       (cVar1 = (**(code **)(param_2->_padding_ + 0x78))(param_2), cVar1 != '\0')) &&
      (cVar1 = (**(code **)(param_2->_padding_ + 0x310))(param_2), cVar1 == '\0')))) {
    local_140 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    EVar4 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_140);
    EVar5 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_140);
    local_118.VertexShader.ShaderContent = (FLumenFrontLayerTranslucencyGBufferVS *)0x0;
    local_118.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_118.PixelShader.ShaderContent = (FLumenFrontLayerTranslucencyGBufferPS *)0x0;
    local_118.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_118.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_118.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_118.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_118.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_118.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_118.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    bVar2 = GetLumenFrontLayerTranslucencyGBufferShaders
                      (param_2,param_3->VertexFactoryType,&local_118.VertexShader,
                       &local_118.PixelShader);
    if (bVar2) {
      local_c8.NumSamples = 1;
      local_c8.MultiViewCount = '\0';
      local_c8.bHasFragmentDensityAttachment = false;
      local_c8.RenderTargetsEnabled = 0;
      local_c8.RenderTargetFormats.Elements[0] = '\0';
      local_c8.RenderTargetFormats.Elements[1] = '\0';
      local_c8.RenderTargetFormats.Elements[2] = '\0';
      local_c8.RenderTargetFormats.Elements[3] = '\0';
      local_c8.RenderTargetFormats.Elements[4] = '\0';
      local_c8.RenderTargetFormats.Elements[5] = '\0';
      local_c8.RenderTargetFormats.Elements[6] = '\0';
      local_c8.RenderTargetFormats.Elements[7] = '\0';
      local_c8.RenderTargetFlags.Elements[0] = None;
      local_c8.RenderTargetFlags.Elements[1] = None;
      local_c8.RenderTargetFlags.Elements[2] = None;
      local_c8.RenderTargetFlags.Elements[3] = None;
      local_c8.RenderTargetFlags.Elements[4] = None;
      local_c8.RenderTargetFlags.Elements[5] = None;
      local_c8.RenderTargetFlags.Elements[6] = None;
      local_c8.RenderTargetFlags.Elements[7] = None;
      local_c8.DepthStencilTargetFormat = PF_Unknown;
      local_c8.DepthStencilTargetFlag = None;
      local_c8.DepthTargetLoadAction = ENoAction;
      local_c8.DepthTargetStoreAction = ENoAction;
      local_c8.StencilTargetLoadAction = ENoAction;
      local_c8.StencilTargetStoreAction = ENoAction;
      local_c8.DepthStencilAccess.Value = DepthNop;
      AddRenderTargetInfo(PF_FloatRGBA,ShaderResource|RenderTargetable,&local_c8);
      SetupDepthStencilInfo
                (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ENoAction,
                 (FExclusiveDepthStencil)0x2,&local_c8);
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLumenFrontLayerTranslucencyGBufferVS,FLumenFrontLayerTranslucencyGBufferPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_3,param_2,&this->PassDrawRenderState,&local_c8,&local_118,EVar4,EVar5,
                 *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
                 (int)this->_padding_,local_130);
    }
  }
  FMemScope::~FMemScope(local_128);
  FLLMScope::~FLLMScope(local_148);
  return;
}


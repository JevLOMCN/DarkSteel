// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FLumenTranslucencyRadianceCacheMarkMeshProcessor @ 144df4bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLumenTranslucencyRadianceCacheMarkMeshProcessor * __thiscall
FLumenTranslucencyRadianceCacheMarkMeshProcessor::FLumenTranslucencyRadianceCacheMarkMeshProcessor
          (FLumenTranslucencyRadianceCacheMarkMeshProcessor *this,FScene *param_1,Type param_2,
          FSceneView *param_3,FMeshPassProcessorRenderState *param_4,
          FMeshPassDrawListContext *param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,LumenTranslucencyRadianceCacheMark,param_1,param_2,param_3,
             param_5);
  this->_padding_ = (longlong)&___7FLumenTranslucencyRadianceCacheMarkMeshProcessor__6B_;
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

// AddMeshBatch @ 144dffe00

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FLumenTranslucencyRadianceCacheMarkMeshProcessor::AddMeshBatch
          (FLumenTranslucencyRadianceCacheMarkMeshProcessor *this,FMeshBatch *param_1,
          ulong64 param_2,FPrimitiveSceneProxy *param_3,int param_4)

{
  FVertexFactory *pFVar1;
  bool bVar2;
  bool bVar3;
  ERasterizerFillMode EVar4;
  ERasterizerCullMode EVar5;
  FMaterial *pFVar6;
  FVertexFactoryType *pFVar7;
  FMaterialRenderProxy *pFVar8;
  FMeshDrawCommandSortKey FVar9;
  FLLMScope local_res8 [2];
  FName local_98;
  FMemScope local_90;
  FMeshMaterialShaderElementData local_88;
  TMeshProcessorShaders<FLumenTranslucencyRadianceCacheMarkVS,FLumenTranslucencyRadianceCacheMarkPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Lumen.UniqueName,false,None,Default,true);
  local_98 = LLMTagDeclaration_Lumen.UniqueName;
  FMemScope::FMemScope(&local_90,&local_98,true);
  if ((FSceneView *)this->_padding_ == (FSceneView *)0x0) goto LAB_144e0007b;
  bVar2 = ShouldRenderLumenDiffuseGI
                    ((FScene *)this->_padding_,(FSceneView *)this->_padding_,false,false);
  if (bVar2) {
LAB_144dffe86:
    bVar2 = true;
  }
  else {
    bVar3 = IsTranslucencyLightingVolumeUsingVoxelMarking();
    bVar2 = false;
    if (bVar3) goto LAB_144dffe86;
  }
  if (((param_1->bUseForMaterial != 0) && (param_3 != (FPrimitiveSceneProxy *)0x0)) && (bVar2)) {
    for (pFVar8 = param_1->MaterialRenderProxy; pFVar8 != (FMaterialRenderProxy *)0x0;
        pFVar8 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar8->_padding_ + 0x38))(pFVar8,(int)this->_padding_)) {
      pFVar6 = (FMaterial *)(**(code **)(pFVar8->_padding_ + 0x30))(pFVar8,(int)this->_padding_);
      if (pFVar6 != (FMaterial *)0x0) {
        bVar2 = Lumen::ShouldRenderInTranslucencyRadianceCacheMarkPass
                          (param_3->bRenderInMainPass,pFVar6);
        if (!bVar2) break;
        pFVar1 = param_1->VertexFactory;
        (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
        local_78.VertexShader.ShaderContent = (FLumenTranslucencyRadianceCacheMarkVS *)0x0;
        local_78.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.PixelShader.ShaderContent = (FLumenTranslucencyRadianceCacheMarkPS *)0x0;
        local_78.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_78.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_78.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_78.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
        pFVar7 = (FVertexFactoryType *)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
        bVar2 = GetLumenTranslucencyRadianceCacheMarkShaders
                          (pFVar6,pFVar7,&local_78.VertexShader,&local_78.PixelShader);
        if (bVar2) {
          local_88.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_88.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
          FMeshMaterialShaderElementData::InitializeMeshMaterialData
                    (&local_88,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
          local_98 = (FName)FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
          EVar4 = FMeshPassProcessor::ComputeMeshFillMode
                            (pFVar6,(FMeshDrawingPolicyOverrideSettings *)&local_98);
          EVar5 = FMeshPassProcessor::ComputeMeshCullMode
                            (pFVar6,(FMeshDrawingPolicyOverrideSettings *)&local_98);
          FVar9 = CalculateMeshStaticSortKey
                            ((FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                             (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
          FMeshPassProcessor::
          BuildMeshDrawCommands<TMeshProcessorShaders<FLumenTranslucencyRadianceCacheMarkVS,FLumenTranslucencyRadianceCacheMarkPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                    ((FMeshPassProcessor *)this,param_1,param_2,param_3,pFVar8,pFVar6,
                     &this->PassDrawRenderState,&local_78,EVar4,EVar5,FVar9,Default,&local_88);
          break;
        }
      }
    }
  }
LAB_144e0007b:
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CollectPSOInitializers @ 144e017d0

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
FLumenTranslucencyRadianceCacheMarkMeshProcessor::CollectPSOInitializers
          (FLumenTranslucencyRadianceCacheMarkMeshProcessor *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  ERasterizerFillMode EVar2;
  ERasterizerCullMode EVar3;
  ulonglong uVar4;
  undefined1 auStackY_198 [32];
  FLLMScope local_128 [2];
  FMeshDrawingPolicyOverrideSettings local_120;
  FName local_118;
  FMemScope local_110;
  TMeshProcessorShaders<FLumenTranslucencyRadianceCacheMarkVS,FLumenTranslucencyRadianceCacheMarkPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_108;
  FGraphicsPipelineRenderTargetsInfo local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FLLMScope::FLLMScope(local_128,LLMTagDeclaration_Lumen.UniqueName,false,None,Default,true);
  local_118 = LLMTagDeclaration_Lumen.UniqueName;
  FMemScope::FMemScope(&local_110,&local_118,true);
  uVar4 = (param_4->field0_0x0).Data >> 10;
  if (((uVar4 & 1) == 0) ||
     (bVar1 = Lumen::ShouldRenderInTranslucencyRadianceCacheMarkPass
                        ((bool)((byte)uVar4 & 1),param_2), bVar1)) {
    local_120 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    EVar2 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_120);
    EVar3 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_120);
    local_108.VertexShader.ShaderContent = (FLumenTranslucencyRadianceCacheMarkVS *)0x0;
    local_108.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_108.PixelShader.ShaderContent = (FLumenTranslucencyRadianceCacheMarkPS *)0x0;
    local_108.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_108.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_108.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_108.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_108.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_108.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_108.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    bVar1 = GetLumenTranslucencyRadianceCacheMarkShaders
                      (param_2,param_3->VertexFactoryType,&local_108.VertexShader,
                       &local_108.PixelShader);
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
      local_b8.NumSamples = 0;
      local_b8.MultiViewCount = '\0';
      local_b8.bHasFragmentDensityAttachment = false;
      local_b8.RenderTargetFlags.Elements[0] = None;
      local_b8.RenderTargetFlags.Elements[1] = None;
      local_b8.RenderTargetFlags.Elements[2] = None;
      local_b8.RenderTargetFlags.Elements[3] = None;
      local_b8.RenderTargetFlags.Elements[4] = None;
      local_b8.RenderTargetFlags.Elements[5] = None;
      local_b8.RenderTargetFlags.Elements[6] = None;
      local_b8.RenderTargetFlags.Elements[7] = None;
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLumenTranslucencyRadianceCacheMarkVS,FLumenTranslucencyRadianceCacheMarkPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_3,param_2,&this->PassDrawRenderState,&local_b8,&local_108,EVar2,EVar3,
                 *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
                 (int)this->_padding_,param_5);
    }
  }
  FMemScope::~FMemScope(&local_110);
  FLLMScope::~FLLMScope(local_128);
  return;
}


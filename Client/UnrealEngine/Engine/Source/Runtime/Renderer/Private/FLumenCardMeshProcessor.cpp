// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FLumenCardMeshProcessor @ 144d3f210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenCardMeshProcessor * __thiscall
FLumenCardMeshProcessor::FLumenCardMeshProcessor
          (FLumenCardMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          FMeshPassProcessorRenderState *param_4,FMeshPassDrawListContext *param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,LumenCardCapture,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7FLumenCardMeshProcessor__6B_;
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

// operator() @ 144d4a780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
`FLumenCardMeshProcessor::AddMeshBatch'::__l10::<lambda_1>::operator()
          (void *this,FMeshBatch *param_1,ulong64 param_2,FPrimitiveSceneProxy *param_3,int param_4,
          FMaterialRenderProxy *param_5,FMaterial *param_6)

{
  EShaderPlatform EVar1;
  FVertexFactory *pFVar2;
  FMaterial *pFVar3;
  bool bVar4;
  ERasterizerFillMode EVar5;
  ERasterizerCullMode EVar6;
  EBlendMode EVar7;
  int iVar8;
  longlong lVar9;
  FVertexFactoryType *pFVar10;
  FMeshDrawCommandSortKey FVar11;
  FMeshDrawingPolicyOverrideSettings local_a8;
  FMeshMaterialShaderElementData local_a0;
  TMeshProcessorShaders<FLumenCardVS,FLumenCardPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  pFVar3 = param_6;
  (**(code **)(param_6->_padding_ + 0x280))(param_6,&param_6);
  local_a8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar5 = FMeshPassProcessor::ComputeMeshFillMode(pFVar3,&local_a8);
  EVar6 = FMeshPassProcessor::ComputeMeshCullMode(pFVar3,&local_a8);
  pFVar2 = param_1->VertexFactory;
  EVar1 = *(EShaderPlatform *)((longlong)this + 8);
  lVar9 = (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  EVar7 = (**(code **)(pFVar3->_padding_ + 0x268))(pFVar3);
  iVar8 = (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3);
  if (((iVar8 == 0) &&
      (((bVar4 = DoesProjectSupportLumenRayTracedTranslucentRefraction(), bVar4 ||
        (bVar4 = IsOpaqueOrMaskedBlendMode(EVar7), bVar4)) &&
       ((*(uint *)(lVar9 + 0x38) & 0x40000) != 0)))) &&
     (bVar4 = DoesPlatformSupportLumenGI(EVar1,false), bVar4)) {
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
    local_88.VertexShader.ShaderContent = (FLumenCardVS *)0x0;
    local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_88.PixelShader.ShaderContent = (FLumenCardPS *)0x0;
    local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    pFVar10 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
    bVar4 = GetLumenCardShaders(pFVar3,pFVar10,&local_88.VertexShader,&local_88.PixelShader);
    if (!bVar4) {
      return bVar4;
    }
    local_a0.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_a0.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_a0,*(FSceneView **)(*(longlong *)this + 0x28),param_3,param_1,param_4,false);
    FVar11 = CalculateMeshStaticSortKey
                       ((FMeshMaterialShader *)local_88.VertexShader.ShaderContent,
                        (FMeshMaterialShader *)local_88.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FLumenCardVS,FLumenCardPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              (*(FMeshPassProcessor **)this,param_1,param_2,param_3,param_5,pFVar3,
               (FMeshPassProcessorRenderState *)(*(FMeshPassProcessor **)this + 1),&local_88,EVar5,
               EVar6,FVar11,Default,&local_a0);
  }
  return true;
}

// AddMeshBatch @ 144d57410

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
FLumenCardMeshProcessor::AddMeshBatch
          (FLumenCardMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  FMaterial *pFVar3;
  FMaterialRenderProxy *pFVar4;
  EShaderPlatform EVar5;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_48;
  FLumenCardMeshProcessor *local_40;
  EShaderPlatform local_38;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Lumen.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Lumen.UniqueName;
  FMemScope::FMemScope(&local_48,&local_res10,true);
  iVar1 = (int)this->_padding_;
  if (iVar1 == 5) {
    EVar5 = SP_NumPlatforms;
  }
  else {
    EVar5 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
  }
  if (((((param_1->bUseForMaterial != 0 || param_1->bUseForLumenSurfaceCacheCapture != 0) &&
        (bVar2 = DoesPlatformSupportLumenGI(EVar5,false), bVar2)) &&
       (bVar2 = LumenDiffuseIndirect::IsAllowed(), bVar2)) &&
      ((param_3 != (FPrimitiveSceneProxy *)0x0 && (param_3->bRenderInMainPass != '\0')))) &&
     (param_3->bAffectDynamicIndirectLighting != '\0')) {
    pFVar4 = param_1->MaterialRenderProxy;
    while ((pFVar4 != (FMaterialRenderProxy *)0x0 &&
           ((pFVar3 = (FMaterial *)
                      (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,(int)this->_padding_),
            pFVar3 == (FMaterial *)0x0 ||
            (local_40 = this, local_38 = EVar5,
            bVar2 = `FLumenCardMeshProcessor::AddMeshBatch'::__l10::<lambda_1>::operator()
                              (&local_40,param_1,param_2,param_3,param_4,pFVar4,pFVar3), !bVar2)))))
    {
      pFVar4 = (FMaterialRenderProxy *)
               (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4,(int)this->_padding_);
    }
  }
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CollectPSOInitializers @ 144d5e890

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
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FLumenCardMeshProcessor::CollectPSOInitializers
          (FLumenCardMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  FVertexFactoryType *pFVar2;
  bool bVar3;
  FNameEntryId FVar4;
  EBlendMode EVar5;
  EMaterialDomain EVar6;
  EShaderPlatform EVar7;
  undefined1 auStackY_1a8 [32];
  FLLMScope local_138;
  undefined1 local_134 [4];
  ERasterizerCullMode local_130;
  FName local_12c;
  FMeshDrawingPolicyOverrideSettings local_120;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_118;
  FMemScope local_110;
  TMeshProcessorShaders<FLumenCardVS,FLumenCardPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_108;
  FGraphicsPipelineRenderTargetsInfo local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_118 = param_5;
  FLLMScope::FLLMScope(&local_138,LLMTagDeclaration_Lumen.UniqueName,false,None,Default,true);
  local_12c = LLMTagDeclaration_Lumen.UniqueName;
  FMemScope::FMemScope(&local_110,&local_12c,true);
  iVar1 = (int)this->_padding_;
  if (iVar1 == 5) {
    EVar7 = SP_NumPlatforms;
  }
  else {
    EVar7 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
  }
  if (((*(uint *)&param_4->field0_0x0 & 0x10400) == 0x10400) &&
     (bVar3 = Lumen::ShouldPrecachePSOs(EVar7), bVar3)) {
    (**(code **)(param_2->_padding_ + 0x280))(param_2,local_134);
    IsTranslucentBlendMode(param_2);
    local_120 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    FVar4.Value = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_120);
    local_12c.ComparisonIndex.Value = FVar4.Value;
    local_130 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_120);
    pFVar2 = param_3->VertexFactoryType;
    EVar5 = (**(code **)(param_2->_padding_ + 0x268))(param_2);
    EVar6 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
    bVar3 = ShouldCompileLumenMeshCardShaders(EVar6,EVar5,pFVar2,EVar7);
    if (bVar3) {
      local_108.VertexShader.ShaderContent = (FLumenCardVS *)0x0;
      local_108.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_108.PixelShader.ShaderContent = (FLumenCardPS *)0x0;
      local_108.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_108.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_108.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_108.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_108.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_108.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_108.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
      bVar3 = GetLumenCardShaders(param_2,param_3->VertexFactoryType,&local_108.VertexShader,
                                  &local_108.PixelShader);
      if (bVar3) {
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
        local_b8.NumSamples = 0;
        local_b8.MultiViewCount = '\0';
        local_b8.bHasFragmentDensityAttachment = false;
        SetupCardCaptureRenderTargetsInfo(&local_b8,EVar7);
        FMeshPassProcessor::
        AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLumenCardVS,FLumenCardPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (param_3,param_2,&this->PassDrawRenderState,&local_b8,&local_108,
                   local_12c.ComparisonIndex.Value,local_130,
                   *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
                   (int)this->_padding_,local_118);
      }
    }
  }
  FMemScope::~FMemScope(&local_110);
  FLLMScope::~FLLMScope(&local_138);
  return;
}


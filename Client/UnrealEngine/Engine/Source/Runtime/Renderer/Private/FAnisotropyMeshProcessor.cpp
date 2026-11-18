// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FAnisotropyMeshProcessor @ 14472d800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAnisotropyMeshProcessor * __thiscall
FAnisotropyMeshProcessor::FAnisotropyMeshProcessor
          (FAnisotropyMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          FMeshPassProcessorRenderState *param_4,FMeshPassDrawListContext *param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,AnisotropyPass,param_1,param_2,param_3,param_5);
  this->_padding_ = (longlong)&___7FAnisotropyMeshProcessor__6B_;
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

// AddMeshBatch @ 14473df40

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
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FAnisotropyMeshProcessor::AddMeshBatch
          (FAnisotropyMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  Type TVar1;
  longlong lVar2;
  bool bVar3;
  ERasterizerFillMode EVar4;
  ERasterizerCullMode EVar5;
  FMaterial *this_00;
  FVertexFactoryType *pFVar6;
  FMaterialRenderProxy *pFVar7;
  FMeshDrawCommandSortKey FVar8;
  FMeshDrawingPolicyOverrideSettings local_res8;
  FMeshMaterialShaderElementData local_98;
  TMeshProcessorShaders<FAnisotropyVS,FAnisotropyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  TVar1 = (Type)this->_padding_;
  bVar3 = SupportsAnisotropicMaterialPass
                    (TVar1,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar1]);
  if ((bVar3) && (param_1->bUseForMaterial != 0)) {
    for (pFVar7 = param_1->MaterialRenderProxy; pFVar7 != (FMaterialRenderProxy *)0x0;
        pFVar7 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar7->_padding_ + 0x38))(pFVar7,(int)this->_padding_)) {
      this_00 = (FMaterial *)(**(code **)(pFVar7->_padding_ + 0x30))(pFVar7,(int)this->_padding_);
      if (this_00 != (FMaterial *)0x0) {
        bVar3 = FMaterial::MaterialUsesAnisotropy_RenderThread(this_00);
        bVar3 = ShouldDraw(this_00,bVar3);
        if (!bVar3) {
          return;
        }
        local_res8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
        EVar4 = FMeshPassProcessor::ComputeMeshFillMode(this_00,&local_res8);
        EVar5 = FMeshPassProcessor::ComputeMeshCullMode(this_00,&local_res8);
        lVar2 = this->_padding_;
        local_88.VertexShader.ShaderContent = (FAnisotropyVS *)0x0;
        local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
        local_88.PixelShader.ShaderContent = (FAnisotropyPS *)0x0;
        local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
        local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
        local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
        pFVar6 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
        bVar3 = GetAnisotropyPassShaders
                          (this_00,pFVar6,(Type)lVar2,&local_88.VertexShader,&local_88.PixelShader);
        if (bVar3) {
          local_98.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_98.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
          FMeshMaterialShaderElementData::InitializeMeshMaterialData
                    (&local_98,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
          FVar8 = CalculateMeshStaticSortKey
                            ((FMeshMaterialShader *)local_88.VertexShader.ShaderContent,
                             (FMeshMaterialShader *)local_88.PixelShader.ShaderContent);
          FMeshPassProcessor::
          BuildMeshDrawCommands<TMeshProcessorShaders<FAnisotropyVS,FAnisotropyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                    ((FMeshPassProcessor *)this,param_1,param_2,param_3,pFVar7,this_00,
                     &this->PassDrawRenderState,&local_88,EVar4,EVar5,FVar8,Default,&local_98);
          return;
        }
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 1447418f0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FAnisotropyMeshProcessor::CollectPSOInitializers
          (FAnisotropyMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  Type TVar1;
  bool bVar2;
  EPixelFormat EVar3;
  ERasterizerFillMode EVar4;
  ERasterizerCullMode EVar5;
  undefined1 auStackY_1a8 [32];
  FMeshDrawingPolicyOverrideSettings local_130;
  ETextureCreateFlags local_128 [2];
  TMeshProcessorShaders<FAnisotropyVS,FAnisotropyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_118;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar2 = FMaterial::MaterialUsesAnisotropy_GameThread(param_2);
  bVar2 = ShouldDraw(param_2,bVar2);
  if (bVar2) {
    TVar1 = (Type)this->_padding_;
    bVar2 = SupportsAnisotropicMaterialPass
                      (TVar1,GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar1]);
    if (bVar2) {
      local_130 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
      EVar4 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_130);
      EVar5 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_130);
      local_118.VertexShader.ShaderContent = (FAnisotropyVS *)0x0;
      local_118.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_118.PixelShader.ShaderContent = (FAnisotropyPS *)0x0;
      local_118.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_118.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_118.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_118.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_118.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_118.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_118.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
      bVar2 = GetAnisotropyPassShaders
                        (param_2,param_3->VertexFactoryType,(Type)this->_padding_,
                         &local_118.VertexShader,&local_118.PixelShader);
      if (bVar2) {
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
        local_c8.NumSamples = 1;
        local_c8.MultiViewCount = '\0';
        local_c8.bHasFragmentDensityAttachment = false;
        EVar3 = FSceneTextures::GetGBufferFFormatAndCreateFlags(local_128);
        AddRenderTargetInfo(EVar3,local_128[0],&local_c8);
        SetupDepthStencilInfo
                  (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x1
                   ,&local_c8);
        FMeshPassProcessor::
        AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FAnisotropyVS,FAnisotropyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (param_3,param_2,&this->PassDrawRenderState,&local_c8,&local_118,EVar4,EVar5,
                   *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
                   (int)this->_padding_,param_5);
      }
    }
  }
  return;
}

// Process @ 144781690

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
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FAnisotropyMeshProcessor::Process
          (FAnisotropyMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  longlong lVar1;
  bool bVar2;
  FVertexFactoryType *pFVar3;
  FMeshDrawCommandSortKey FVar4;
  FMeshMaterialShaderElementData local_78;
  TMeshProcessorShaders<FAnisotropyVS,FAnisotropyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_68;
  
  local_68.VertexShader.ShaderContent = (FAnisotropyVS *)0x0;
  local_68.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.PixelShader.ShaderContent = (FAnisotropyPS *)0x0;
  local_68.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  lVar1 = this->_padding_;
  local_68.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar3 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar2 = GetAnisotropyPassShaders
                    (param_6,pFVar3,(Type)lVar1,&local_68.VertexShader,&local_68.PixelShader);
  if (bVar2) {
    local_78.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_78.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_78,(FSceneView *)this->_padding_,param_4,param_1,param_3,false);
    FVar4 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_68.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_68.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FAnisotropyVS,FAnisotropyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,
               &this->PassDrawRenderState,&local_68,param_7,param_8,FVar4,Default,&local_78);
  }
  return bVar2;
}

// TryAddMeshBatch @ 1447b8f10

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
FAnisotropyMeshProcessor::TryAddMeshBatch
          (FAnisotropyMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  longlong lVar1;
  bool bVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  FVertexFactoryType *pFVar5;
  FMeshDrawCommandSortKey FVar6;
  FMeshDrawingPolicyOverrideSettings local_98;
  FMeshMaterialShaderElementData local_90;
  TMeshProcessorShaders<FAnisotropyVS,FAnisotropyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  bVar2 = FMaterial::MaterialUsesAnisotropy_RenderThread(param_6);
  bVar2 = ShouldDraw(param_6,bVar2);
  if (bVar2) {
    local_98 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar3 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_98);
    EVar4 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_98);
    lVar1 = this->_padding_;
    local_78.VertexShader.ShaderContent = (FAnisotropyVS *)0x0;
    local_78.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_78.PixelShader.ShaderContent = (FAnisotropyPS *)0x0;
    local_78.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_78.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_78.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_78.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_78.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_78.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_78.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    pFVar5 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
    bVar2 = GetAnisotropyPassShaders
                      (param_6,pFVar5,(Type)lVar1,&local_78.VertexShader,&local_78.PixelShader);
    if (bVar2) {
      local_90.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
      local_90.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
      FMeshMaterialShaderElementData::InitializeMeshMaterialData
                (&local_90,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
      FVar6 = CalculateMeshStaticSortKey
                        ((FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                         (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
      FMeshPassProcessor::
      BuildMeshDrawCommands<TMeshProcessorShaders<FAnisotropyVS,FAnisotropyPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
                 &this->PassDrawRenderState,&local_78,EVar3,EVar4,FVar6,Default,&local_90);
    }
    return bVar2;
  }
  return true;
}


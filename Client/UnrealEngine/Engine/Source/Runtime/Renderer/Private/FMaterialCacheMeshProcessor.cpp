// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FMaterialCacheMeshProcessor @ 144e72240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMaterialCacheMeshProcessor * __thiscall
FMaterialCacheMeshProcessor::FMaterialCacheMeshProcessor
          (FMaterialCacheMeshProcessor *this,FScene *param_1,Type param_2,FGuid *param_3,
          FSceneView *param_4,FMeshPassProcessorRenderState *param_5,
          FMeshPassDrawListContext *param_6,FMaterialRenderProxy *param_7)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,Num,param_1,param_2,param_4,param_6);
  this->_padding_ = (longlong)&___7FMaterialCacheMeshProcessor__6B_;
  this->OverrideLayerMaterialProxy = param_7;
  uVar3 = param_3->B;
  uVar4 = param_3->C;
  uVar5 = param_3->D;
  (this->TagGuid).A = param_3->A;
  (this->TagGuid).B = uVar3;
  (this->TagGuid).C = uVar4;
  (this->TagGuid).D = uVar5;
  pFVar1 = param_5->DepthStencilState;
  (this->PassDrawRenderState).BlendState = param_5->BlendState;
  (this->PassDrawRenderState).DepthStencilState = pFVar1;
  uVar6 = *(undefined4 *)&param_5->field_0x14;
  pFVar2 = param_5->ViewUniformBuffer;
  (this->PassDrawRenderState).DepthStencilAccess = param_5->DepthStencilAccess;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x14 = uVar6;
  (this->PassDrawRenderState).ViewUniformBuffer = pFVar2;
  pFVar2 = param_5->PassUniformBuffer;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = param_5->InstancedViewUniformBuffer;
  (this->PassDrawRenderState).PassUniformBuffer = pFVar2;
  uVar3 = param_5->StencilRef;
  uVar6 = *(undefined4 *)&param_5->field_0x3c;
  (this->PassDrawRenderState).NaniteUniformBuffer = param_5->NaniteUniformBuffer;
  (this->PassDrawRenderState).StencilRef = uVar3;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar6;
  return this;
}

// AddMeshBatch @ 144e7b9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FMaterialCacheMeshProcessor::AddMeshBatch
          (FMaterialCacheMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  bool bVar1;
  ERasterizerFillMode EVar2;
  FMaterial *pFVar3;
  FVertexFactoryType *pFVar4;
  FMaterialRenderProxy *pFVar5;
  FMeshDrawCommandSortKey FVar6;
  FMeshDrawingPolicyOverrideSettings local_res10;
  FMeshMaterialShaderElementData local_88;
  TMeshProcessorShaders<FMaterialCacheUnwrapVSBase,FMaterialCacheUnwrapPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  if (param_1->bUseForMaterial != 0) {
    pFVar5 = this->OverrideLayerMaterialProxy;
    if (pFVar5 != (FMaterialRenderProxy *)0x0) goto LAB_144e7ba30;
    for (pFVar5 = param_1->MaterialRenderProxy; pFVar5 != (FMaterialRenderProxy *)0x0;
        pFVar5 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar5->_padding_ + 0x38))(pFVar5,(int)this->_padding_)) {
LAB_144e7ba30:
      pFVar3 = (FMaterial *)(**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,(int)this->_padding_);
      if (pFVar3 != (FMaterial *)0x0) {
        local_78.VertexShader.ShaderContent = (FMaterialCacheUnwrapVSBase *)0x0;
        local_78.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.PixelShader.ShaderContent = (FMaterialCacheUnwrapPS *)0x0;
        local_78.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_78.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_78.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_78.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
        if ((GRHIGlobals.SupportsArrayIndexFromAnyShader == false) ||
           (GMaterialCacheStaticMeshEnableViewportFromVS == false)) {
          pFVar4 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
          bVar1 = GetMaterialCacheShaders<0>
                            (pFVar3,pFVar4,&this->TagGuid,&local_78.VertexShader,
                             &local_78.PixelShader);
        }
        else {
          pFVar4 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
          bVar1 = GetMaterialCacheShaders<1>
                            (pFVar3,pFVar4,&this->TagGuid,&local_78.VertexShader,
                             &local_78.PixelShader);
        }
        if (bVar1 != false) {
          local_88.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_88.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
          FMeshMaterialShaderElementData::InitializeMeshMaterialData
                    (&local_88,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
          FVar6 = CalculateMeshStaticSortKey
                            ((FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                             (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
          local_res10 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
          EVar2 = FMeshPassProcessor::ComputeMeshFillMode(pFVar3,&local_res10);
          FMeshPassProcessor::
          BuildMeshDrawCommands<TMeshProcessorShaders<FMaterialCacheUnwrapVSBase,FMaterialCacheUnwrapPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                    ((FMeshPassProcessor *)this,param_1,param_2,param_3,pFVar5,pFVar3,
                     &this->PassDrawRenderState,&local_78,EVar2,CM_None,FVar6,Default,&local_88);
          return;
        }
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 144e7e080

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialCacheMeshProcessor::CollectPSOInitializers
          (FMaterialCacheMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  ERasterizerFillMode EVar2;
  ERasterizerCullMode EVar3;
  undefined1 auStackY_188 [32];
  FMeshDrawingPolicyOverrideSettings local_118 [2];
  TMeshProcessorShaders<FMaterialCacheUnwrapVSBase,FMaterialCacheUnwrapPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_108;
  FGraphicsPipelineRenderTargetsInfo local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((*(uint *)&param_4->field0_0x0 >> 10 & 1) != 0) {
    local_118[0] = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    EVar2 = FMeshPassProcessor::ComputeMeshFillMode(param_2,local_118);
    EVar3 = FMeshPassProcessor::ComputeMeshCullMode(param_2,local_118);
    local_108.VertexShader.ShaderContent = (FMaterialCacheUnwrapVSBase *)0x0;
    local_108.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_108.PixelShader.ShaderContent = (FMaterialCacheUnwrapPS *)0x0;
    local_108.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_108.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_108.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_108.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_108.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_108.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_108.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((GRHIGlobals.SupportsArrayIndexFromAnyShader == false) ||
       (GMaterialCacheStaticMeshEnableViewportFromVS == false)) {
      bVar1 = GetMaterialCacheShaders<0>
                        (param_2,param_3->VertexFactoryType,&this->TagGuid,&local_108.VertexShader,
                         &local_108.PixelShader);
    }
    else {
      bVar1 = GetMaterialCacheShaders<1>
                        (param_2,param_3->VertexFactoryType,&this->TagGuid,&local_108.VertexShader,
                         &local_108.PixelShader);
    }
    if (bVar1 != false) {
      local_b8.RenderTargetFlags.Elements[1] = None;
      local_b8.RenderTargetsEnabled = 1;
      local_b8.DepthStencilTargetFormat = PF_Unknown;
      local_b8.DepthStencilTargetFlag = None;
      local_b8.DepthTargetLoadAction = ENoAction;
      local_b8.DepthTargetStoreAction = ENoAction;
      local_b8.StencilTargetLoadAction = ENoAction;
      local_b8.StencilTargetStoreAction = ENoAction;
      local_b8.DepthStencilAccess.Value = DepthNop;
      local_b8.RenderTargetFormats.Elements[1] = '\0';
      local_b8.RenderTargetFormats.Elements[2] = '\0';
      local_b8.RenderTargetFormats.Elements[3] = '\0';
      local_b8.RenderTargetFormats.Elements[4] = '\0';
      local_b8.RenderTargetFormats.Elements[5] = '\0';
      local_b8.RenderTargetFormats.Elements[6] = '\0';
      local_b8.RenderTargetFormats.Elements[7] = '\0';
      local_b8.RenderTargetFlags.Elements[2] = None;
      local_b8.RenderTargetFlags.Elements[3] = None;
      local_b8.RenderTargetFlags.Elements[4] = None;
      local_b8.RenderTargetFlags.Elements[5] = None;
      local_b8.RenderTargetFlags.Elements[6] = None;
      local_b8.RenderTargetFlags.Elements[7] = None;
      local_b8.NumSamples = 1;
      local_b8.MultiViewCount = '\0';
      local_b8.bHasFragmentDensityAttachment = false;
      local_b8.RenderTargetFormats.Elements[0] = '%';
      local_b8.RenderTargetFlags.Elements[0] = ShaderResource|RenderTargetable;
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FMaterialCacheUnwrapVSBase,FMaterialCacheUnwrapPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_3,param_2,&this->PassDrawRenderState,&local_b8,&local_108,EVar2,EVar3,
                 *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
                 (int)this->_padding_,param_5);
    }
  }
  return;
}

// TryAddMeshBatch @ 144eb4aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
FMaterialCacheMeshProcessor::TryAddMeshBatch
          (FMaterialCacheMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  bool bVar1;
  ERasterizerFillMode EVar2;
  FVertexFactoryType *pFVar3;
  FMeshDrawCommandSortKey FVar4;
  FMeshDrawingPolicyOverrideSettings local_88;
  FMeshMaterialShaderElementData local_80;
  TMeshProcessorShaders<FMaterialCacheUnwrapVSBase,FMaterialCacheUnwrapPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_68;
  
  local_68.VertexShader.ShaderContent = (FMaterialCacheUnwrapVSBase *)0x0;
  local_68.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.PixelShader.ShaderContent = (FMaterialCacheUnwrapPS *)0x0;
  local_68.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((GRHIGlobals.SupportsArrayIndexFromAnyShader) &&
     (GMaterialCacheStaticMeshEnableViewportFromVS)) {
    pFVar3 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
    bVar1 = GetMaterialCacheShaders<1>
                      (param_6,pFVar3,&this->TagGuid,&local_68.VertexShader,&local_68.PixelShader);
  }
  else {
    pFVar3 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
    bVar1 = GetMaterialCacheShaders<0>
                      (param_6,pFVar3,&this->TagGuid,&local_68.VertexShader,&local_68.PixelShader);
  }
  if (bVar1) {
    local_80.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_80.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_80,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
    FVar4 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_68.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_68.PixelShader.ShaderContent);
    local_88 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar2 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_88);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FMaterialCacheUnwrapVSBase,FMaterialCacheUnwrapPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
               &this->PassDrawRenderState,&local_68,EVar2,CM_None,FVar4,Default,&local_80);
  }
  return bVar1;
}


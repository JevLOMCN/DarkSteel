// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FDistortionMeshProcessor @ 14485c5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDistortionMeshProcessor * __thiscall
FDistortionMeshProcessor::FDistortionMeshProcessor
          (FDistortionMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          FMeshPassProcessorRenderState *param_4,FMeshPassProcessorRenderState *param_5,
          FMeshPassDrawListContext *param_6)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,Distortion,param_1,param_2,param_3,param_6);
  this->_padding_ = (longlong)&___7FDistortionMeshProcessor__6B_;
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
  pFVar1 = param_5->DepthStencilState;
  (this->PassDrawRenderStateNoDepthTest).BlendState = param_5->BlendState;
  (this->PassDrawRenderStateNoDepthTest).DepthStencilState = pFVar1;
  uVar3 = *(undefined4 *)&param_5->field_0x14;
  pFVar2 = param_5->ViewUniformBuffer;
  (this->PassDrawRenderStateNoDepthTest).DepthStencilAccess = param_5->DepthStencilAccess;
  *(undefined4 *)&(this->PassDrawRenderStateNoDepthTest).field_0x14 = uVar3;
  (this->PassDrawRenderStateNoDepthTest).ViewUniformBuffer = pFVar2;
  pFVar2 = param_5->PassUniformBuffer;
  (this->PassDrawRenderStateNoDepthTest).InstancedViewUniformBuffer =
       param_5->InstancedViewUniformBuffer;
  (this->PassDrawRenderStateNoDepthTest).PassUniformBuffer = pFVar2;
  uVar4 = param_5->StencilRef;
  uVar3 = *(undefined4 *)&param_5->field_0x3c;
  (this->PassDrawRenderStateNoDepthTest).NaniteUniformBuffer = param_5->NaniteUniformBuffer;
  (this->PassDrawRenderStateNoDepthTest).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderStateNoDepthTest).field_0x3c = uVar3;
  return this;
}

// AddMeshBatch @ 144865f10

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

void __thiscall
FDistortionMeshProcessor::AddMeshBatch
          (FDistortionMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ERasterizerFillMode EVar4;
  ERasterizerCullMode EVar5;
  FMaterial *pFVar6;
  FVertexFactoryType *pFVar7;
  FMaterialRenderProxy *pFVar8;
  FMeshDrawCommandSortKey FVar9;
  longlong lVar10;
  FMeshDrawingPolicyOverrideSettings local_res10;
  ulong64 local_res18;
  FMeshMaterialShaderElementData local_98;
  TMeshProcessorShaders<FDistortionMeshVS,FDistortionMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  if (param_1->bUseForMaterial != 0) {
    local_res18 = param_2;
    for (pFVar8 = param_1->MaterialRenderProxy; pFVar8 != (FMaterialRenderProxy *)0x0;
        pFVar8 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar8->_padding_ + 0x38))(pFVar8,(int)this->_padding_)) {
      pFVar6 = (FMaterial *)(**(code **)(pFVar8->_padding_ + 0x30))(pFVar8,(int)this->_padding_);
      if (pFVar6 != (FMaterial *)0x0) {
        bVar1 = IsTranslucentBlendMode(pFVar6);
        if (!bVar1) {
          return;
        }
        iVar3 = (**(code **)(pFVar6->_padding_ + 0x40))(pFVar6);
        if (iVar3 == 3) {
          return;
        }
        cVar2 = (**(code **)(pFVar6->_padding_ + 0x2a8))(pFVar6);
        if (cVar2 == '\0') {
          return;
        }
        if ((param_3 != (FPrimitiveSceneProxy *)0x0) && (param_3->bRenderInMainPass == '\0')) {
          return;
        }
        local_res10 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
        EVar4 = FMeshPassProcessor::ComputeMeshFillMode(pFVar6,&local_res10);
        EVar5 = FMeshPassProcessor::ComputeMeshCullMode(pFVar6,&local_res10);
        lVar10 = this->_padding_;
        local_88.VertexShader.ShaderContent = (FDistortionMeshVS *)0x0;
        local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
        local_88.PixelShader.ShaderContent = (FDistortionMeshPS *)0x0;
        local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
        local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
        local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
        pFVar7 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
        bVar1 = GetDistortionPassShaders
                          (pFVar6,pFVar7,(Type)lVar10,&local_88.VertexShader,&local_88.PixelShader);
        if (bVar1) {
          local_98.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_98.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
          FMeshMaterialShaderElementData::InitializeMeshMaterialData
                    (&local_98,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
          FVar9 = CalculateMeshStaticSortKey
                            ((FMeshMaterialShader *)local_88.VertexShader.ShaderContent,
                             (FMeshMaterialShader *)local_88.PixelShader.ShaderContent);
          cVar2 = (**(code **)(pFVar6->_padding_ + 0x90))(pFVar6);
          lVar10 = 0x78;
          if (cVar2 == '\0') {
            lVar10 = 0x38;
          }
          FMeshPassProcessor::
          BuildMeshDrawCommands<TMeshProcessorShaders<FDistortionMeshVS,FDistortionMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                    ((FMeshPassProcessor *)this,param_1,local_res18,param_3,pFVar8,pFVar6,
                     (FMeshPassProcessorRenderState *)((longlong)&this->_padding_ + lVar10),
                     &local_88,EVar4,EVar5,FVar9,Default,&local_98);
          return;
        }
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 14486a700

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
FDistortionMeshProcessor::CollectPSOInitializers
          (FDistortionMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ERasterizerFillMode EVar4;
  ERasterizerCullMode EVar5;
  uint uVar6;
  EPixelFormat EVar7;
  ETextureCreateFlags EVar8;
  undefined1 auStackY_198 [32];
  FMeshDrawingPolicyOverrideSettings local_120;
  TMeshProcessorShaders<FDistortionMeshVS,FDistortionMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_118;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = IsTranslucentBlendMode(param_2);
  if (bVar1) {
    iVar3 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
    if (iVar3 != 3) {
      cVar2 = (**(code **)(param_2->_padding_ + 0x2a8))(param_2);
      if (cVar2 != '\0') {
        local_118.VertexShader.ShaderContent = (FDistortionMeshVS *)0x0;
        local_118.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
        local_118.PixelShader.ShaderContent = (FDistortionMeshPS *)0x0;
        local_118.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
        local_118.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_118.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
        local_118.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_118.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        local_118.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_118.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
        bVar1 = GetDistortionPassShaders
                          (param_2,param_3->VertexFactoryType,(Type)this->_padding_,
                           &local_118.VertexShader,&local_118.PixelShader);
        if (bVar1) {
          local_120 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
          EVar4 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_120);
          EVar5 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_120);
          EVar8 = GFastVRamConfig.Distortion | (ShaderResource|RenderTargetable);
          local_c8.RenderTargetFlags.Elements[0] = None;
          local_c8.RenderTargetFlags.Elements[1] = None;
          local_c8.RenderTargetsEnabled = 0;
          local_c8.RenderTargetFormats.Elements[0] = '\0';
          local_c8.RenderTargetFormats.Elements[1] = '\0';
          local_c8.RenderTargetFormats.Elements[2] = '\0';
          local_c8.RenderTargetFormats.Elements[3] = '\0';
          local_c8.RenderTargetFormats.Elements[4] = '\0';
          local_c8.RenderTargetFormats.Elements[5] = '\0';
          local_c8.RenderTargetFormats.Elements[6] = '\0';
          local_c8.RenderTargetFormats.Elements[7] = '\0';
          local_c8.DepthStencilTargetFormat = PF_Unknown;
          local_c8.DepthStencilTargetFlag = None;
          local_c8.DepthTargetLoadAction = ENoAction;
          local_c8.DepthTargetStoreAction = ENoAction;
          local_c8.StencilTargetLoadAction = ENoAction;
          local_c8.StencilTargetStoreAction = ENoAction;
          local_c8.DepthStencilAccess.Value = DepthNop;
          local_c8.RenderTargetFlags.Elements[2] = None;
          local_c8.RenderTargetFlags.Elements[3] = None;
          local_c8.RenderTargetFlags.Elements[4] = None;
          local_c8.RenderTargetFlags.Elements[5] = None;
          local_c8.RenderTargetFlags.Elements[6] = None;
          local_c8.RenderTargetFlags.Elements[7] = None;
          local_c8.NumSamples = 1;
          local_c8.MultiViewCount = '\0';
          local_c8.bHasFragmentDensityAttachment = false;
          uVar6 = GetRefractionOffsetQuality(param_1->ShaderPlatform);
          EVar7 = PF_B8G8R8A8;
          if (uVar6 != 0) {
            EVar7 = PF_FloatRGBA;
          }
          AddRenderTargetInfo(EVar7,EVar8,&local_c8);
          bVar1 = GetSubstrateEnabledUseRoughRefraction();
          if (bVar1) {
            AddRenderTargetInfo(PF_R16F,GFastVRamConfig.Distortion |
                                        (ShaderResource|RenderTargetable),&local_c8);
          }
          SetupDepthStencilInfo
                    (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,
                     (FExclusiveDepthStencil)0x21,&local_c8);
          FMeshPassProcessor::
          AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FDistortionMeshVS,FDistortionMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                    (param_3,param_2,&this->PassDrawRenderState,&local_c8,&local_118,EVar4,EVar5,
                     *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
                     (int)this->_padding_,param_5);
        }
      }
    }
  }
  return;
}

// Process @ 14488af00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FDistortionMeshProcessor::Process
          (FDistortionMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  FVertexFactoryType *pFVar4;
  FMeshDrawCommandSortKey FVar5;
  longlong lVar6;
  FMeshMaterialShaderElementData local_78;
  TMeshProcessorShaders<FDistortionMeshVS,FDistortionMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_68;
  
  local_68.VertexShader.ShaderContent = (FDistortionMeshVS *)0x0;
  local_68.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.PixelShader.ShaderContent = (FDistortionMeshPS *)0x0;
  local_68.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  lVar6 = this->_padding_;
  local_68.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_68.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_68.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar4 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar1 = GetDistortionPassShaders
                    (param_6,pFVar4,(Type)lVar6,&local_68.VertexShader,&local_68.PixelShader);
  bVar3 = false;
  if (bVar1) {
    local_78.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_78.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_78,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
    FVar5 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_68.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_68.PixelShader.ShaderContent);
    cVar2 = (**(code **)(param_6->_padding_ + 0x90))(param_6);
    lVar6 = 0x78;
    if (cVar2 == '\0') {
      lVar6 = 0x38;
    }
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FDistortionMeshVS,FDistortionMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
               (FMeshPassProcessorRenderState *)((longlong)&this->_padding_ + lVar6),&local_68,
               param_7,param_8,FVar5,Default,&local_78);
    bVar3 = true;
  }
  return bVar3;
}

// TryAddMeshBatch @ 1448ab440

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
FDistortionMeshProcessor::TryAddMeshBatch
          (FDistortionMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ERasterizerFillMode EVar5;
  ERasterizerCullMode EVar6;
  FVertexFactoryType *pFVar7;
  FMeshDrawCommandSortKey FVar8;
  longlong lVar9;
  FMeshDrawingPolicyOverrideSettings local_98;
  FMeshMaterialShaderElementData local_90;
  TMeshProcessorShaders<FDistortionMeshVS,FDistortionMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_78;
  
  bVar1 = IsTranslucentBlendMode(param_6);
  if (bVar1) {
    iVar4 = (**(code **)(param_6->_padding_ + 0x40))(param_6);
    if (iVar4 != 3) {
      cVar2 = (**(code **)(param_6->_padding_ + 0x2a8))(param_6);
      if ((cVar2 != '\0') &&
         ((param_3 == (FPrimitiveSceneProxy *)0x0 || (param_3->bRenderInMainPass != '\0')))) {
        local_98 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
        EVar5 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_98);
        EVar6 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_98);
        lVar9 = this->_padding_;
        local_78.VertexShader.ShaderContent = (FDistortionMeshVS *)0x0;
        local_78.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.PixelShader.ShaderContent = (FDistortionMeshPS *)0x0;
        local_78.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_78.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_78.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        local_78.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_78.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
        pFVar7 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
        bVar3 = GetDistortionPassShaders
                          (param_6,pFVar7,(Type)lVar9,&local_78.VertexShader,&local_78.PixelShader);
        bVar1 = false;
        if (bVar3) {
          local_90.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_90.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
          FMeshMaterialShaderElementData::InitializeMeshMaterialData
                    (&local_90,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
          FVar8 = CalculateMeshStaticSortKey
                            ((FMeshMaterialShader *)local_78.VertexShader.ShaderContent,
                             (FMeshMaterialShader *)local_78.PixelShader.ShaderContent);
          cVar2 = (**(code **)(param_6->_padding_ + 0x90))(param_6);
          lVar9 = 0x78;
          if (cVar2 == '\0') {
            lVar9 = 0x38;
          }
          FMeshPassProcessor::
          BuildMeshDrawCommands<TMeshProcessorShaders<FDistortionMeshVS,FDistortionMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                    ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,
                     (FMeshPassProcessorRenderState *)((longlong)&this->_padding_ + lVar9),&local_78
                     ,EVar5,EVar6,FVar8,Default,&local_90);
          bVar1 = true;
        }
        return bVar1;
      }
    }
  }
  return true;
}


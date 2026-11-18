// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FMeshDecalMeshProcessor @ 14472ddb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMeshDecalMeshProcessor * __thiscall
FMeshDecalMeshProcessor::FMeshDecalMeshProcessor
          (FMeshDecalMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          EDecalRenderTargetMode param_4,EShadingPath param_5,FMeshPassDrawListContext *param_6)

{
  Type TVar1;
  EDecalRenderStage EVar2;
  TRefCountPtr<FRHIDepthStencilState> TVar3;
  
  TVar1 = DecalRendering::GetMeshPassType(param_4);
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,TVar1,param_1,param_2,param_3,param_6);
  this->_padding_ = (longlong)&___7FMeshDecalMeshProcessor__6B_;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  EVar2 = DecalRendering::GetRenderStage(param_4,param_5);
  this->PassDecalStage = EVar2;
  this->RenderTargetMode = param_4;
  TVar3 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
          ::StaticResource.StateRHI;
  if (param_4 == DBuffer) {
    TVar3 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
  }
  (this->PassDrawRenderState).DepthStencilState = TVar3.Reference;
  (this->PassDrawRenderState).StencilRef = 0;
  return this;
}

// AddMeshBatch @ 14473e310

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMeshDecalMeshProcessor::AddMeshBatch
          (FMeshDecalMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  int iVar1;
  FSceneViewFamily *this_00;
  bool bVar2;
  char cVar3;
  EDecalRenderTargetMode EVar4;
  FDecalBlendDesc FVar5;
  ERasterizerFillMode EVar6;
  ERasterizerCullMode EVar7;
  EDebugViewShaderMode EVar8;
  FMaterial *this_01;
  FMaterialShaderMap *pFVar9;
  TRefCountPtr<FRHIBlendState> TVar10;
  FMaterialRenderProxy *pFVar11;
  EShaderPlatform EVar12;
  FMeshDrawingPolicyOverrideSettings local_res10;
  ulong64 local_res18;
  FPrimitiveSceneProxy *local_res20;
  
  if ((param_1->bUseForMaterial != 0) &&
     (local_res18 = param_2, local_res20 = param_3,
     bVar2 = FMeshBatch::IsDecal(param_1,(Type)this->_padding_), bVar2)) {
    for (pFVar11 = param_1->MaterialRenderProxy; pFVar11 != (FMaterialRenderProxy *)0x0;
        pFVar11 = (FMaterialRenderProxy *)
                  (**(code **)(pFVar11->_padding_ + 0x38))(pFVar11,(int)this->_padding_)) {
      this_01 = (FMaterial *)(**(code **)(pFVar11->_padding_ + 0x30))(pFVar11,(int)this->_padding_);
      if (this_01 != (FMaterial *)0x0) {
        cVar3 = (**(code **)(this_01->_padding_ + 0xe0))(this_01);
        if (cVar3 == '\0') {
          return;
        }
        pFVar9 = FMaterial::GetRenderingThreadShaderMap(this_01);
        if (pFVar9 == (FMaterialShaderMap *)0x0) {
          return;
        }
        iVar1 = (int)this->_padding_;
        EVar12 = SP_NumPlatforms;
        if (iVar1 != 5) {
          EVar12 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
        }
        FVar5 = DecalRendering::ComputeDecalBlendDesc(EVar12,this_01);
        bVar2 = DecalRendering::IsCompatibleWithRenderStage(FVar5,this->PassDecalStage);
        if (!bVar2) {
          return;
        }
        EVar4 = DecalRendering::GetRenderTargetMode(FVar5,this->PassDecalStage);
        if (EVar4 != this->RenderTargetMode) {
          return;
        }
        local_res10 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
        EVar6 = FMeshPassProcessor::ComputeMeshFillMode(this_01,&local_res10);
        EVar7 = FMeshPassProcessor::ComputeMeshCullMode(this_01,&local_res10);
        if ((this->_padding_ == 0) ||
           (EVar8 = FSceneViewFamily::GetDebugViewShaderMode
                              (*(FSceneViewFamily **)(this->_padding_ + 8)), EVar8 == DVSM_None)) {
          TVar10.Reference =
               DecalRendering::GetDecalBlendState(FVar5,this->PassDecalStage,this->RenderTargetMode)
          ;
LAB_14473e491:
          (this->PassDrawRenderState).BlendState = TVar10.Reference;
        }
        else {
          this_00 = *(FSceneViewFamily **)(this->_padding_ + 8);
          TVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                   ::StaticResource.StateRHI;
          if (((this_00->EngineShowFlags).ShaderComplexity != 0) ||
             (EVar8 = FSceneViewFamily::GetDebugViewShaderMode(this_00),
             TVar10 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                      ::StaticResource.StateRHI, EVar8 != DVSM_OutputMaterialTextureScales))
          goto LAB_14473e491;
        }
        if (this->RenderTargetMode != DBuffer) {
          (this->PassDrawRenderState).StencilRef = 0x80;
        }
        bVar2 = Process(this,param_1,local_res18,param_4,local_res20,pFVar11,this_01,EVar6,EVar7);
        if (bVar2) {
          return;
        }
      }
    }
  }
  return;
}

// CollectDeferredDecalMeshPSOInitializers @ 144740ff0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshDecalMeshProcessor::CollectDeferredDecalMeshPSOInitializers
          (FMeshDecalMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FPSOPrecacheParams *param_3,FMaterial *param_4,
          FDecalBlendDesc param_5,EDecalRenderStage param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  EDecalRenderTargetMode EVar4;
  bool bVar5;
  ESubpassHint EVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  FRHIBlendState *pFVar9;
  FShaderType *pFVar10;
  TRefCountPtr<FRHIDepthStencilState> TVar11;
  undefined1 auStackY_2b8 [32];
  FMeshDrawingPolicyOverrideSettings local_238;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_230;
  TMeshProcessorShaders<FMeshDecalsVS,FMeshDecalsPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_228;
  FMaterialShaders local_1d8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_230 = param_7;
  EVar4 = DecalRendering::GetRenderTargetMode(param_5,param_6);
  pFVar9 = DecalRendering::GetDecalBlendState(param_5,param_6,EVar4);
  (this->PassDrawRenderState).BlendState = pFVar9;
  TVar11 = TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,128,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
  if (EVar4 == DBuffer) {
    TVar11 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI;
  }
  (this->PassDrawRenderState).StencilRef = 0;
  (this->PassDrawRenderState).DepthStencilState = TVar11.Reference;
  local_238 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_3);
  EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_4,&local_238);
  EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_4,&local_238);
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
  local_f8.ShaderType[2] = (FShaderType *)0x0;
  local_f8.ShaderType[3] = (FShaderType *)0x0;
  local_f8.ShaderType[4] = (FShaderType *)0x0;
  local_f8.ShaderType[5] = (FShaderType *)0x0;
  local_f8.ShaderType[6] = (FShaderType *)0x0;
  local_f8.ShaderType[7] = (FShaderType *)0x0;
  local_f8.ShaderType[8] = (FShaderType *)0x0;
  local_f8.ShaderType[9] = (FShaderType *)0x0;
  local_f8.ShaderType[10] = (FShaderType *)0x0;
  local_f8.ShaderType[0xb] = (FShaderType *)0x0;
  local_f8.PermutationId[0] = 0;
  local_f8.PermutationId[1] = 0;
  local_f8.PermutationId[2] = 0;
  local_f8.PermutationId[3] = 0;
  local_f8.PermutationId[4] = 0;
  local_f8.PermutationId[5] = 0;
  local_f8.PermutationId[6] = 0;
  local_f8.PermutationId[7] = 0;
  local_f8.PermutationId[8] = 0;
  local_f8.PermutationId[9] = 0;
  local_f8.PermutationId[10] = 0;
  local_f8.PermutationId[0xb] = 0;
  pFVar10 = (FShaderType *)FMeshDecalsVS::GetStaticType();
  bVar1 = (byte)pFVar10->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_f8.ShaderType[bVar1] = pFVar10;
  local_f8.PermutationId[bVar1] = 0;
  if (param_6 == Emissive) {
    pFVar10 = (FShaderType *)FMeshDecalsEmissivePS::GetStaticType();
  }
  else if (param_6 == AmbientOcclusion) {
    pFVar10 = (FShaderType *)FMeshDecalsAmbientOcclusionPS::GetStaticType();
  }
  else {
    pFVar10 = (FShaderType *)FMeshDecalsPS::GetStaticType();
  }
  bVar1 = (byte)pFVar10->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_2->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar10;
  local_1d8.ShaderMap = (FShaderMapBase *)0x0;
  local_1d8.Pipeline = (FShaderPipeline *)0x0;
  local_f8.PermutationId[bVar1] = 0;
  local_1d8.Shaders[0] = (FShader *)0x0;
  local_1d8.Shaders[1] = (FShader *)0x0;
  local_1d8.Shaders[2] = (FShader *)0x0;
  local_1d8.Shaders[3] = (FShader *)0x0;
  local_1d8.Shaders[4] = (FShader *)0x0;
  local_1d8.Shaders[5] = (FShader *)0x0;
  local_1d8.Shaders[6] = (FShader *)0x0;
  local_1d8.Shaders[7] = (FShader *)0x0;
  local_1d8.Shaders[8] = (FShader *)0x0;
  local_1d8.Shaders[9] = (FShader *)0x0;
  local_1d8.Shaders[10] = (FShader *)0x0;
  local_1d8.Shaders[0xb] = (FShader *)0x0;
  bVar5 = FMaterial::TryGetShaders(param_4,&local_f8,pFVar2,&local_1d8);
  if (bVar5) {
    local_228.VertexShader.ShaderContent = (FMeshDecalsVS *)0x0;
    local_228.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_228.PixelShader.ShaderContent = (FMeshDecalsPS *)0x0;
    local_228.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_228.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_228.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_228.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_228.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_228.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_228.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshDecalsVS *)local_1d8.Shaders[0] != (FMeshDecalsVS *)0x0) {
      local_228.VertexShader.ShaderContent = (FMeshDecalsVS *)local_1d8.Shaders[0];
      local_228.VertexShader.ShaderMap = local_1d8.ShaderMap;
    }
    if ((FMeshDecalsPS *)local_1d8.Shaders[3] != (FMeshDecalsPS *)0x0) {
      local_228.PixelShader.ShaderContent = (FMeshDecalsPS *)local_1d8.Shaders[3];
      local_228.PixelShader.ShaderMap = local_1d8.ShaderMap;
    }
    local_168.RenderTargetsEnabled = 0;
    local_168.RenderTargetFormats.Elements[0] = '\0';
    local_168.RenderTargetFormats.Elements[1] = '\0';
    local_168.RenderTargetFormats.Elements[2] = '\0';
    local_168.RenderTargetFormats.Elements[3] = '\0';
    local_168.RenderTargetFormats.Elements[4] = '\0';
    local_168.RenderTargetFormats.Elements[5] = '\0';
    local_168.RenderTargetFormats.Elements[6] = '\0';
    local_168.RenderTargetFormats.Elements[7] = '\0';
    local_168.RenderTargetFlags.Elements[0] = None;
    local_168.RenderTargetFlags.Elements[1] = None;
    local_168.RenderTargetFlags.Elements[2] = None;
    local_168.RenderTargetFlags.Elements[3] = None;
    local_168.RenderTargetFlags.Elements[4] = None;
    local_168.RenderTargetFlags.Elements[5] = None;
    local_168.RenderTargetFlags.Elements[6] = None;
    local_168.RenderTargetFlags.Elements[7] = None;
    local_168.DepthStencilTargetFormat = PF_Unknown;
    local_168.DepthStencilTargetFlag = None;
    local_168.DepthTargetLoadAction = ENoAction;
    local_168.DepthTargetStoreAction = ENoAction;
    local_168.StencilTargetLoadAction = ENoAction;
    local_168.StencilTargetStoreAction = ENoAction;
    local_168.DepthStencilAccess.Value = DepthNop;
    local_168.NumSamples = 0;
    local_168.MultiViewCount = '\0';
    local_168.bHasFragmentDensityAttachment = false;
    GetDeferredDecalRenderTargetsInfo(param_1,EVar4,&local_168);
    bVar5 = false;
    EVar6 = None;
    if ((int)this->_padding_ == 1) {
      EVar6 = GetSubpassHint((FStaticShaderPlatform)param_1->ShaderPlatform,
                             param_1->bIsUsingGBuffers,param_1->bRequireMultiView,
                             param_1->NumSamples);
      bVar5 = EVar6 != None;
    }
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FMeshDecalsVS,FMeshDecalsPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_2,param_4,&this->PassDrawRenderState,&local_168,&local_228,EVar7,EVar8,
               PT_TriangleList,Default,EVar6,bVar5,true,(int)this->_padding_,local_230);
  }
  return;
}

// CollectPSOInitializers @ 144742030

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMeshDecalMeshProcessor::CollectPSOInitializers
          (FMeshDecalMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  FDecalBlendDesc FVar4;
  EShaderPlatform EVar5;
  EDecalRenderStage EVar6;
  uint uVar7;
  
  cVar2 = (**(code **)(param_2->_padding_ + 0xe0))(param_2);
  if (cVar2 != '\0') {
    iVar1 = (int)this->_padding_;
    if (iVar1 == 5) {
      EVar5 = SP_NumPlatforms;
    }
    else {
      EVar5 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
    }
    FVar4 = DecalRendering::ComputeDecalBlendDesc(EVar5,param_2);
    uVar7 = 0;
    do {
      EVar6 = (EDecalRenderStage)uVar7;
      bVar3 = DecalRendering::IsCompatibleWithRenderStage(FVar4,EVar6);
      if ((bVar3) &&
         (CollectDeferredDecalPassPSOInitializers
                    ((int)this->_padding_,(Type)this->_padding_,param_1,param_2,EVar6,param_5),
         GDeferredDecalMeshMaterialPSOPrecache != 0)) {
        CollectDeferredDecalMeshPSOInitializers
                  (this,param_1,param_3,param_4,param_2,FVar4,EVar6,param_5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
  }
  return;
}

// Process @ 1447817f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FMeshDecalMeshProcessor::Process
          (FMeshDecalMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  byte bVar1;
  EDecalRenderStage EVar2;
  code *pcVar3;
  FMeshDecalsVS *pFVar4;
  FMeshDecalsPS *pFVar5;
  FShader *pFVar6;
  FShader *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  FVertexFactoryType *pFVar11;
  FShaderType *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStackY_248 [32];
  FMeshMaterialShaderElementData local_1b8;
  TMeshProcessorShaders<FMeshDecalsVS,FMeshDecalsPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1a8;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar11 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.ShaderType[4] = (FShaderType *)0x0;
  local_e8.ShaderType[5] = (FShaderType *)0x0;
  local_e8.ShaderType[6] = (FShaderType *)0x0;
  local_e8.ShaderType[7] = (FShaderType *)0x0;
  local_e8.ShaderType[8] = (FShaderType *)0x0;
  local_e8.ShaderType[9] = (FShaderType *)0x0;
  local_e8.ShaderType[10] = (FShaderType *)0x0;
  local_e8.ShaderType[0xb] = (FShaderType *)0x0;
  local_e8.PermutationId[0] = 0;
  local_e8.PermutationId[1] = 0;
  local_e8.PermutationId[2] = 0;
  local_e8.PermutationId[3] = 0;
  local_e8.PermutationId[4] = 0;
  local_e8.PermutationId[5] = 0;
  local_e8.PermutationId[6] = 0;
  local_e8.PermutationId[7] = 0;
  local_e8.PermutationId[8] = 0;
  local_e8.PermutationId[9] = 0;
  local_e8.PermutationId[10] = 0;
  local_e8.PermutationId[0xb] = 0;
  pFVar12 = (FShaderType *)FMeshDecalsVS::GetStaticType();
  bVar1 = (byte)pFVar12->Frequency;
  if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  EVar2 = this->PassDecalStage;
  local_e8.ShaderType[bVar1] = pFVar12;
  local_e8.PermutationId[bVar1] = 0;
  if (EVar2 == Emissive) {
    pFVar12 = (FShaderType *)FMeshDecalsEmissivePS::GetStaticType();
  }
  else if (EVar2 == AmbientOcclusion) {
    pFVar12 = (FShaderType *)FMeshDecalsAmbientOcclusionPS::GetStaticType();
  }
  else {
    pFVar12 = (FShaderType *)FMeshDecalsPS::GetStaticType();
  }
  bVar1 = (byte)pFVar12->Frequency;
  if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  local_e8.ShaderType[bVar1] = pFVar12;
  local_e8.PermutationId[bVar1] = 0;
  local_158.ShaderMap = (FShaderMapBase *)0x0;
  local_158.Pipeline = (FShaderPipeline *)0x0;
  local_158.Shaders[0] = (FShader *)0x0;
  local_158.Shaders[1] = (FShader *)0x0;
  local_158.Shaders[2] = (FShader *)0x0;
  local_158.Shaders[3] = (FShader *)0x0;
  local_158.Shaders[4] = (FShader *)0x0;
  local_158.Shaders[5] = (FShader *)0x0;
  local_158.Shaders[6] = (FShader *)0x0;
  local_158.Shaders[7] = (FShader *)0x0;
  local_158.Shaders[8] = (FShader *)0x0;
  local_158.Shaders[9] = (FShader *)0x0;
  local_158.Shaders[10] = (FShader *)0x0;
  local_158.Shaders[0xb] = (FShader *)0x0;
  bVar10 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar11,&local_158);
  pFVar7 = local_158.Shaders[3];
  pFVar6 = local_158.Shaders[0];
  bVar8 = false;
  if (bVar10) {
    local_1a8.VertexShader.ShaderContent = (FMeshDecalsVS *)0x0;
    local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.PixelShader.ShaderContent = (FMeshDecalsPS *)0x0;
    local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshDecalsVS *)local_158.Shaders[0] != (FMeshDecalsVS *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FMeshDecalsVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    pFVar4 = local_1a8.VertexShader.ShaderContent;
    if ((FMeshDecalsPS *)local_158.Shaders[3] != (FMeshDecalsPS *)0x0) {
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
      local_1a8.PixelShader.ShaderContent = (FMeshDecalsPS *)local_158.Shaders[3];
    }
    pFVar5 = local_1a8.PixelShader.ShaderContent;
    local_1b8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_1b8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_1b8,(FSceneView *)this->_padding_,param_4,param_1,param_3,true);
    if ((FMeshDecalsVS *)pFVar6 == (FMeshDecalsVS *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulonglong)*(uint *)&pFVar4->field_0xd8;
    }
    if ((FMeshDecalsPS *)pFVar7 == (FMeshDecalsPS *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (ulonglong)*(uint *)&pFVar5->field_0xd8;
    }
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FMeshDecalsVS,FMeshDecalsPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,
               (FMeshDrawCommandSortKey)
               (uVar14 << 0x10 | (param_2 & 0xffffffffffff0000 | uVar13) & 0x100000000ffff |
               (longlong)param_4->TranslucencySortPriority << 0x31),Default,&local_1b8);
    bVar8 = true;
  }
  return bVar8;
}

// TryAddMeshBatch @ 1447b9bc0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FMeshDecalMeshProcessor::TryAddMeshBatch
          (FMeshDecalMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  int iVar1;
  FSceneViewFamily *this_00;
  FMaterial *this_01;
  char cVar2;
  bool bVar3;
  EDecalRenderTargetMode EVar4;
  FDecalBlendDesc FVar5;
  ERasterizerFillMode EVar6;
  ERasterizerCullMode EVar7;
  EDebugViewShaderMode EVar8;
  FMaterialShaderMap *pFVar9;
  TRefCountPtr<FRHIBlendState> TVar10;
  EShaderPlatform EVar11;
  
  this_01 = param_6;
  cVar2 = (**(code **)(param_6->_padding_ + 0xe0))(param_6);
  if ((cVar2 == '\0') ||
     (pFVar9 = FMaterial::GetRenderingThreadShaderMap(this_01), pFVar9 == (FMaterialShaderMap *)0x0)
     ) {
    return true;
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 == 5) {
    EVar11 = SP_NumPlatforms;
  }
  else {
    EVar11 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar1];
  }
  FVar5 = DecalRendering::ComputeDecalBlendDesc(EVar11,this_01);
  bVar3 = DecalRendering::IsCompatibleWithRenderStage(FVar5,this->PassDecalStage);
  if (!bVar3) {
    return true;
  }
  EVar4 = DecalRendering::GetRenderTargetMode(FVar5,this->PassDecalStage);
  if (EVar4 != this->RenderTargetMode) {
    return true;
  }
  param_6 = (FMaterial *)FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar6 = FMeshPassProcessor::ComputeMeshFillMode
                    (this_01,(FMeshDrawingPolicyOverrideSettings *)&param_6);
  EVar7 = FMeshPassProcessor::ComputeMeshCullMode
                    (this_01,(FMeshDrawingPolicyOverrideSettings *)&param_6);
  if ((this->_padding_ == 0) ||
     (EVar8 = FSceneViewFamily::GetDebugViewShaderMode(*(FSceneViewFamily **)(this->_padding_ + 8)),
     EVar8 == DVSM_None)) {
    TVar10.Reference =
         DecalRendering::GetDecalBlendState(FVar5,this->PassDecalStage,this->RenderTargetMode);
  }
  else {
    this_00 = *(FSceneViewFamily **)(this->_padding_ + 8);
    TVar10 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI;
    if (((this_00->EngineShowFlags).ShaderComplexity == 0) &&
       (EVar8 = FSceneViewFamily::GetDebugViewShaderMode(this_00),
       TVar10 = TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                ::StaticResource.StateRHI, EVar8 == DVSM_OutputMaterialTextureScales))
    goto LAB_1447b9cef;
  }
  (this->PassDrawRenderState).BlendState = TVar10.Reference;
LAB_1447b9cef:
  if (this->RenderTargetMode != DBuffer) {
    (this->PassDrawRenderState).StencilRef = 0x80;
  }
  bVar3 = Process(this,param_1,param_2,param_4,param_3,param_5,this_01,EVar6,EVar7);
  return bVar3;
}


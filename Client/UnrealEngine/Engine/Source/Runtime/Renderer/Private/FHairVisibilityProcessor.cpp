// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 16

// AddPSOInitializer<1,1> @ 144967c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FHairVisibilityProcessor::AddPSOInitializer<1,1>
          (FHairVisibilityProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          ERasterizerFillMode param_5,ERasterizerCullMode param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  undefined1 auStackY_2a8 [32];
  TMeshProcessorShaders<FHairVisibilityVS<1,1>,FHairVisibilityPS<1>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_228;
  FMaterialShaders local_1d8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_228.VertexShader.ShaderContent = (FHairVisibilityVS<1,1> *)0x0;
  local_228.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
  local_228.PixelShader.ShaderContent = (FHairVisibilityPS<1> *)0x0;
  local_228.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
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
  pFVar5 = (FShaderType *)FHairVisibilityVS<1,1>::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_f8.ShaderType[bVar1] = pFVar5;
  local_f8.PermutationId[bVar1] = 0;
  pFVar5 = (FShaderType *)FHairVisibilityPS<1>::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_3->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar5;
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
  bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar2,&local_1d8);
  if (bVar4) {
    if ((FHairVisibilityVS<1,1> *)local_1d8.Shaders[0] != (FHairVisibilityVS<1,1> *)0x0) {
      local_228.VertexShader.ShaderContent = (FHairVisibilityVS<1,1> *)local_1d8.Shaders[0];
      local_228.VertexShader.ShaderMap = local_1d8.ShaderMap;
    }
    if ((FHairVisibilityPS<1> *)local_1d8.Shaders[3] != (FHairVisibilityPS<1> *)0x0) {
      local_228.PixelShader.ShaderContent = (FHairVisibilityPS<1> *)local_1d8.Shaders[3];
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
    local_168.NumSamples = 1;
    local_168.MultiViewCount = '\0';
    local_168.bHasFragmentDensityAttachment = false;
    SetupDepthStencilInfo
              (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x11,
               &local_168);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FHairVisibilityVS<1,1>,FHairVisibilityPS<1>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_3,param_2,&this->PassDrawRenderState,&local_168,&local_228,param_5,param_6,
               *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
               (int)this->_padding_,param_7);
  }
  return;
}

// AddPSOInitializer<2,1> @ 144967f10

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FHairVisibilityProcessor::AddPSOInitializer<2,1>
          (FHairVisibilityProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          ERasterizerFillMode param_5,ERasterizerCullMode param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  int iVar2;
  FVertexFactoryType *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FShaderType *pFVar7;
  EShaderPlatform EVar8;
  undefined1 auStackY_2a8 [32];
  TMeshProcessorShaders<FHairVisibilityVS<2,1>,FHairVisibilityPS<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_228;
  FMaterialShaders local_1d8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_228.VertexShader.ShaderContent = (FHairVisibilityVS<2,1> *)0x0;
  local_228.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
  local_228.PixelShader.ShaderContent = (FHairVisibilityPS<2> *)0x0;
  local_228.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
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
  pFVar7 = (FShaderType *)FHairVisibilityVS<2,1>::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_f8.ShaderType[bVar1] = pFVar7;
  local_f8.PermutationId[bVar1] = 0;
  pFVar7 = (FShaderType *)FHairVisibilityPS<2>::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_3->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar7;
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
  bVar5 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar3,&local_1d8);
  if (bVar5) {
    if ((FHairVisibilityVS<2,1> *)local_1d8.Shaders[0] != (FHairVisibilityVS<2,1> *)0x0) {
      local_228.VertexShader.ShaderContent = (FHairVisibilityVS<2,1> *)local_1d8.Shaders[0];
      local_228.VertexShader.ShaderMap = local_1d8.ShaderMap;
    }
    if ((FHairVisibilityPS<2> *)local_1d8.Shaders[3] != (FHairVisibilityPS<2> *)0x0) {
      local_228.PixelShader.ShaderContent = (FHairVisibilityPS<2> *)local_1d8.Shaders[3];
      local_228.PixelShader.ShaderMap = local_1d8.ShaderMap;
    }
    iVar2 = (int)this->_padding_;
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
    local_168.MultiViewCount = '\0';
    local_168.bHasFragmentDensityAttachment = false;
    if (iVar2 == 5) {
      EVar8 = SP_NumPlatforms;
    }
    else {
      EVar8 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar2];
    }
    uVar6 = GetMaxSamplePerPixel(EVar8);
    local_168.NumSamples = (ushort)uVar6;
    AddRenderTargetInfo(PF_R32_UINT,NoFastClear|ShaderResource|RenderTargetable,&local_168);
    SetupDepthStencilInfo
              (PF_D24,param_1->DepthCreateFlags,ELoad,ENoAction,(FExclusiveDepthStencil)0x2,
               &local_168);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FHairVisibilityVS<2,1>,FHairVisibilityPS<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_3,param_2,&this->PassDrawRenderState,&local_168,&local_228,param_5,param_6,
               *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
               (int)this->_padding_,param_7);
  }
  return;
}

// AddPSOInitializer<2,0> @ 144968200

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FHairVisibilityProcessor::AddPSOInitializer<2,0>
          (FHairVisibilityProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          ERasterizerFillMode param_5,ERasterizerCullMode param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  int iVar2;
  FVertexFactoryType *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FShaderType *pFVar7;
  EShaderPlatform EVar8;
  undefined1 auStackY_2a8 [32];
  TMeshProcessorShaders<FHairVisibilityVS<2,0>,FHairVisibilityPS<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_228;
  FMaterialShaders local_1d8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_228.VertexShader.ShaderContent = (FHairVisibilityVS<2,0> *)0x0;
  local_228.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
  local_228.PixelShader.ShaderContent = (FHairVisibilityPS<2> *)0x0;
  local_228.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
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
  pFVar7 = (FShaderType *)FHairVisibilityVS<2,0>::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_f8.ShaderType[bVar1] = pFVar7;
  local_f8.PermutationId[bVar1] = 0;
  pFVar7 = (FShaderType *)FHairVisibilityPS<2>::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = param_3->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar7;
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
  bVar5 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar3,&local_1d8);
  if (bVar5) {
    if ((FHairVisibilityVS<2,0> *)local_1d8.Shaders[0] != (FHairVisibilityVS<2,0> *)0x0) {
      local_228.VertexShader.ShaderContent = (FHairVisibilityVS<2,0> *)local_1d8.Shaders[0];
      local_228.VertexShader.ShaderMap = local_1d8.ShaderMap;
    }
    if ((FHairVisibilityPS<2> *)local_1d8.Shaders[3] != (FHairVisibilityPS<2> *)0x0) {
      local_228.PixelShader.ShaderContent = (FHairVisibilityPS<2> *)local_1d8.Shaders[3];
      local_228.PixelShader.ShaderMap = local_1d8.ShaderMap;
    }
    iVar2 = (int)this->_padding_;
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
    local_168.MultiViewCount = '\0';
    local_168.bHasFragmentDensityAttachment = false;
    if (iVar2 == 5) {
      EVar8 = SP_NumPlatforms;
    }
    else {
      EVar8 = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar2];
    }
    uVar6 = GetMaxSamplePerPixel(EVar8);
    local_168.NumSamples = (ushort)uVar6;
    AddRenderTargetInfo(PF_R32_UINT,NoFastClear|ShaderResource|RenderTargetable,&local_168);
    SetupDepthStencilInfo
              (PF_D24,param_1->DepthCreateFlags,ELoad,ENoAction,(FExclusiveDepthStencil)0x2,
               &local_168);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FHairVisibilityVS<2,0>,FHairVisibilityPS<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_3,param_2,&this->PassDrawRenderState,&local_168,&local_228,param_5,param_6,
               *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
               (int)this->_padding_,param_7);
  }
  return;
}

// AddPSOInitializer<3,1> @ 1449684f0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FHairVisibilityProcessor::AddPSOInitializer<3,1>
          (FHairVisibilityProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          ERasterizerFillMode param_5,ERasterizerCullMode param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  undefined1 auStackY_2a8 [32];
  TMeshProcessorShaders<FHairVisibilityVS<3,1>,FHairVisibilityPS<3>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_228;
  FMaterialShaders local_1d8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<1,0,8,0,0,0,0,3,0,1,1,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_228.VertexShader.ShaderContent = (FHairVisibilityVS<3,1> *)0x0;
  local_228.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
  local_228.PixelShader.ShaderContent = (FHairVisibilityPS<3> *)0x0;
  local_228.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
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
  pFVar5 = (FShaderType *)FHairVisibilityVS<3,1>::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_f8.ShaderType[bVar1] = pFVar5;
  local_f8.PermutationId[bVar1] = 0;
  pFVar5 = (FShaderType *)FHairVisibilityPS<3>::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_3->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar5;
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
  bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar2,&local_1d8);
  if (bVar4) {
    if ((FHairVisibilityVS<3,1> *)local_1d8.Shaders[0] != (FHairVisibilityVS<3,1> *)0x0) {
      local_228.VertexShader.ShaderContent = (FHairVisibilityVS<3,1> *)local_1d8.Shaders[0];
      local_228.VertexShader.ShaderMap = local_1d8.ShaderMap;
    }
    if ((FHairVisibilityPS<3> *)local_1d8.Shaders[3] != (FHairVisibilityPS<3> *)0x0) {
      local_228.PixelShader.ShaderContent = (FHairVisibilityPS<3> *)local_1d8.Shaders[3];
      local_228.PixelShader.ShaderMap = local_1d8.ShaderMap;
    }
    local_168.RenderTargetsEnabled = 0;
    local_168.RenderTargetFormats.Elements[0] = '\0';
    local_168.RenderTargetFormats.Elements[1] = '\0';
    local_168.RenderTargetFormats.Elements[2] = '\0';
    local_168.RenderTargetFormats.Elements[3] = '\0';
    local_168.RenderTargetFlags.Elements[0] = None;
    local_168.RenderTargetFlags.Elements[1] = None;
    local_168.RenderTargetFlags.Elements[2] = None;
    local_168.RenderTargetFlags.Elements[3] = None;
    local_168.RenderTargetFlags.Elements[4] = None;
    local_168.RenderTargetFlags.Elements[5] = None;
    local_168.RenderTargetFlags.Elements[6] = None;
    local_168.RenderTargetFlags.Elements[7] = None;
    local_168.RenderTargetFormats.Elements[4] = '\0';
    local_168.RenderTargetFormats.Elements[5] = '\0';
    local_168.RenderTargetFormats.Elements[6] = '\0';
    local_168.RenderTargetFormats.Elements[7] = '\0';
    local_168.DepthStencilTargetFormat = PF_Unknown;
    local_168.DepthStencilTargetFlag = None;
    local_168.DepthTargetLoadAction = ENoAction;
    local_168.DepthTargetStoreAction = ENoAction;
    local_168.StencilTargetLoadAction = ENoAction;
    local_168.StencilTargetStoreAction = ENoAction;
    local_168.DepthStencilAccess.Value = DepthNop;
    local_168.NumSamples = 1;
    local_168.MultiViewCount = '\0';
    local_168.bHasFragmentDensityAttachment = false;
    AddRenderTargetInfo(PF_R32_FLOAT,ShaderResource|RenderTargetable,&local_168);
    AddRenderTargetInfo(PF_G32R32F,ShaderResource|RenderTargetable,&local_168);
    SetupDepthStencilInfo
              (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x11,
               &local_168);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FHairVisibilityVS<3,1>,FHairVisibilityPS<3>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_3,param_2,&this->PassDrawRenderState,&local_168,&local_228,param_5,param_6,
               *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
               (int)this->_padding_,param_7);
  }
  return;
}

// AddPSOInitializer<0,1> @ 1449687d0

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
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FHairVisibilityProcessor::AddPSOInitializer<0,1>
          (FHairVisibilityProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          ERasterizerFillMode param_5,ERasterizerCullMode param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  undefined1 auStackY_2a8 [32];
  TMeshProcessorShaders<FHairVisibilityVS<0,1>,FHairVisibilityPS<0>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_228;
  FMaterialShaders local_1d8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<1,0,8,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_228.VertexShader.ShaderContent = (FHairVisibilityVS<0,1> *)0x0;
  local_228.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
  local_228.PixelShader.ShaderContent = (FHairVisibilityPS<0> *)0x0;
  local_228.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_228.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_228.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
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
  pFVar5 = (FShaderType *)FHairVisibilityVS<0,1>::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_f8.ShaderType[bVar1] = pFVar5;
  local_f8.PermutationId[bVar1] = 0;
  pFVar5 = (FShaderType *)FHairVisibilityPS<0>::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if (local_f8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = param_3->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar5;
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
  bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar2,&local_1d8);
  if (bVar4) {
    if ((FHairVisibilityVS<0,1> *)local_1d8.Shaders[0] != (FHairVisibilityVS<0,1> *)0x0) {
      local_228.VertexShader.ShaderContent = (FHairVisibilityVS<0,1> *)local_1d8.Shaders[0];
      local_228.VertexShader.ShaderMap = local_1d8.ShaderMap;
    }
    if ((FHairVisibilityPS<0> *)local_1d8.Shaders[3] != (FHairVisibilityPS<0> *)0x0) {
      local_228.PixelShader.ShaderContent = (FHairVisibilityPS<0> *)local_1d8.Shaders[3];
      local_228.PixelShader.ShaderMap = local_1d8.ShaderMap;
    }
    local_168.RenderTargetsEnabled = 0;
    local_168.RenderTargetFormats.Elements[0] = '\0';
    local_168.RenderTargetFormats.Elements[1] = '\0';
    local_168.RenderTargetFormats.Elements[2] = '\0';
    local_168.RenderTargetFormats.Elements[3] = '\0';
    local_168.RenderTargetFlags.Elements[0] = None;
    local_168.RenderTargetFlags.Elements[1] = None;
    local_168.RenderTargetFlags.Elements[2] = None;
    local_168.RenderTargetFlags.Elements[3] = None;
    local_168.RenderTargetFlags.Elements[4] = None;
    local_168.RenderTargetFlags.Elements[5] = None;
    local_168.RenderTargetFlags.Elements[6] = None;
    local_168.RenderTargetFlags.Elements[7] = None;
    local_168.RenderTargetFormats.Elements[4] = '\0';
    local_168.RenderTargetFormats.Elements[5] = '\0';
    local_168.RenderTargetFormats.Elements[6] = '\0';
    local_168.RenderTargetFormats.Elements[7] = '\0';
    local_168.DepthStencilTargetFormat = PF_Unknown;
    local_168.DepthStencilTargetFlag = None;
    local_168.DepthTargetLoadAction = ENoAction;
    local_168.DepthTargetStoreAction = ENoAction;
    local_168.StencilTargetLoadAction = ENoAction;
    local_168.StencilTargetStoreAction = ENoAction;
    local_168.DepthStencilAccess.Value = DepthNop;
    local_168.NumSamples = 1;
    local_168.MultiViewCount = '\0';
    local_168.bHasFragmentDensityAttachment = false;
    AddRenderTargetInfo(PF_R32_FLOAT,ShaderResource|RenderTargetable,&local_168);
    SetupDepthStencilInfo
              (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x11,
               &local_168);
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FHairVisibilityVS<0,1>,FHairVisibilityPS<0>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_3,param_2,&this->PassDrawRenderState,&local_168,&local_228,param_5,param_6,
               *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,Default,None,'\0',true,
               (int)this->_padding_,param_7);
  }
  return;
}

// Process<1,1> @ 144991840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FHairVisibilityProcessor::Process<1,1>
          (FHairVisibilityProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,uint param_7,uint param_8,uint param_9,float param_10,ERasterizerFillMode param_11,
          ERasterizerCullMode param_12)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  FShaderType *pFVar8;
  FVertexFactoryType *pFVar9;
  undefined1 auStackY_288 [32];
  FHairVisibilityShaderElementData local_208;
  TMeshProcessorShaders<FHairVisibilityVS<1,1>,FHairVisibilityPS<1>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1e8;
  FMaterialShaders local_198;
  FMeshPassProcessorRenderState local_128;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar2 = param_1->VertexFactory;
  local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<1,1> *)0x0;
  local_1e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<1> *)0x0;
  local_1e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar8 = (FShaderType *)FHairVisibilityVS<1,1>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar8 = (FShaderType *)FHairVisibilityPS<1>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar3 = pFVar2->_padding_;
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FVertexFactoryType *)(**(code **)(lVar3 + 0x30))(pFVar2);
  local_198.ShaderMap = (FShaderMapBase *)0x0;
  local_198.Pipeline = (FShaderPipeline *)0x0;
  local_198.Shaders[0] = (FShader *)0x0;
  local_198.Shaders[1] = (FShader *)0x0;
  local_198.Shaders[2] = (FShader *)0x0;
  local_198.Shaders[3] = (FShader *)0x0;
  local_198.Shaders[4] = (FShader *)0x0;
  local_198.Shaders[5] = (FShader *)0x0;
  local_198.Shaders[6] = (FShader *)0x0;
  local_198.Shaders[7] = (FShader *)0x0;
  local_198.Shaders[8] = (FShader *)0x0;
  local_198.Shaders[9] = (FShader *)0x0;
  local_198.Shaders[10] = (FShader *)0x0;
  local_198.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar9,&local_198);
  bVar5 = false;
  if (bVar7) {
    if ((FHairVisibilityVS<1,1> *)local_198.Shaders[0] != (FHairVisibilityVS<1,1> *)0x0) {
      local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<1,1> *)local_198.Shaders[0];
      local_1e8.VertexShader.ShaderMap = local_198.ShaderMap;
    }
    if ((FHairVisibilityPS<1> *)local_198.Shaders[3] != (FHairVisibilityPS<1> *)0x0) {
      local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<1> *)local_198.Shaders[3];
      local_1e8.PixelShader.ShaderMap = local_198.ShaderMap;
    }
    local_128.BlendState = (this->PassDrawRenderState).BlendState;
    local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_208.HairMacroGroupId = param_7;
    local_208.HairMaterialId = param_8;
    local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_128.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_128._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    local_208.LightChannelMask = param_9;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208.HairCoverageScale = param_10;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_208,(FSceneView *)this->_padding_,param_3,
               param_1,param_4,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FHairVisibilityVS<1,1>,FHairVisibilityPS<1>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FHairVisibilityShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,&local_128,
               &local_1e8,param_11,param_12,FMeshDrawCommandSortKey::Default,Default,&local_208);
    bVar5 = true;
  }
  return bVar5;
}

// Process<2,1> @ 144991b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FHairVisibilityProcessor::Process<2,1>
          (FHairVisibilityProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,uint param_7,uint param_8,uint param_9,float param_10,ERasterizerFillMode param_11,
          ERasterizerCullMode param_12)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  FShaderType *pFVar8;
  FVertexFactoryType *pFVar9;
  undefined1 auStackY_288 [32];
  FHairVisibilityShaderElementData local_208;
  TMeshProcessorShaders<FHairVisibilityVS<2,1>,FHairVisibilityPS<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1e8;
  FMaterialShaders local_198;
  FMeshPassProcessorRenderState local_128;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar2 = param_1->VertexFactory;
  local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<2,1> *)0x0;
  local_1e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<2> *)0x0;
  local_1e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar8 = (FShaderType *)FHairVisibilityVS<2,1>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar8 = (FShaderType *)FHairVisibilityPS<2>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar3 = pFVar2->_padding_;
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FVertexFactoryType *)(**(code **)(lVar3 + 0x30))(pFVar2);
  local_198.ShaderMap = (FShaderMapBase *)0x0;
  local_198.Pipeline = (FShaderPipeline *)0x0;
  local_198.Shaders[0] = (FShader *)0x0;
  local_198.Shaders[1] = (FShader *)0x0;
  local_198.Shaders[2] = (FShader *)0x0;
  local_198.Shaders[3] = (FShader *)0x0;
  local_198.Shaders[4] = (FShader *)0x0;
  local_198.Shaders[5] = (FShader *)0x0;
  local_198.Shaders[6] = (FShader *)0x0;
  local_198.Shaders[7] = (FShader *)0x0;
  local_198.Shaders[8] = (FShader *)0x0;
  local_198.Shaders[9] = (FShader *)0x0;
  local_198.Shaders[10] = (FShader *)0x0;
  local_198.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar9,&local_198);
  bVar5 = false;
  if (bVar7) {
    if ((FHairVisibilityVS<2,1> *)local_198.Shaders[0] != (FHairVisibilityVS<2,1> *)0x0) {
      local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<2,1> *)local_198.Shaders[0];
      local_1e8.VertexShader.ShaderMap = local_198.ShaderMap;
    }
    if ((FHairVisibilityPS<2> *)local_198.Shaders[3] != (FHairVisibilityPS<2> *)0x0) {
      local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<2> *)local_198.Shaders[3];
      local_1e8.PixelShader.ShaderMap = local_198.ShaderMap;
    }
    local_128.BlendState = (this->PassDrawRenderState).BlendState;
    local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_208.HairMacroGroupId = param_7;
    local_208.HairMaterialId = param_8;
    local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_128.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_128._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    local_208.LightChannelMask = param_9;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208.HairCoverageScale = param_10;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_208,(FSceneView *)this->_padding_,param_3,
               param_1,param_4,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FHairVisibilityVS<2,1>,FHairVisibilityPS<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FHairVisibilityShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,&local_128,
               &local_1e8,param_11,param_12,FMeshDrawCommandSortKey::Default,Default,&local_208);
    bVar5 = true;
  }
  return bVar5;
}

// Process<2,0> @ 144991e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FHairVisibilityProcessor::Process<2,0>
          (FHairVisibilityProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,uint param_7,uint param_8,uint param_9,float param_10,ERasterizerFillMode param_11,
          ERasterizerCullMode param_12)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  FShaderType *pFVar8;
  FVertexFactoryType *pFVar9;
  undefined1 auStackY_288 [32];
  FHairVisibilityShaderElementData local_208;
  TMeshProcessorShaders<FHairVisibilityVS<2,0>,FHairVisibilityPS<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1e8;
  FMaterialShaders local_198;
  FMeshPassProcessorRenderState local_128;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar2 = param_1->VertexFactory;
  local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<2,0> *)0x0;
  local_1e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<2> *)0x0;
  local_1e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar8 = (FShaderType *)FHairVisibilityVS<2,0>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar8 = (FShaderType *)FHairVisibilityPS<2>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar3 = pFVar2->_padding_;
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FVertexFactoryType *)(**(code **)(lVar3 + 0x30))(pFVar2);
  local_198.ShaderMap = (FShaderMapBase *)0x0;
  local_198.Pipeline = (FShaderPipeline *)0x0;
  local_198.Shaders[0] = (FShader *)0x0;
  local_198.Shaders[1] = (FShader *)0x0;
  local_198.Shaders[2] = (FShader *)0x0;
  local_198.Shaders[3] = (FShader *)0x0;
  local_198.Shaders[4] = (FShader *)0x0;
  local_198.Shaders[5] = (FShader *)0x0;
  local_198.Shaders[6] = (FShader *)0x0;
  local_198.Shaders[7] = (FShader *)0x0;
  local_198.Shaders[8] = (FShader *)0x0;
  local_198.Shaders[9] = (FShader *)0x0;
  local_198.Shaders[10] = (FShader *)0x0;
  local_198.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar9,&local_198);
  bVar5 = false;
  if (bVar7) {
    if ((FHairVisibilityVS<2,0> *)local_198.Shaders[0] != (FHairVisibilityVS<2,0> *)0x0) {
      local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<2,0> *)local_198.Shaders[0];
      local_1e8.VertexShader.ShaderMap = local_198.ShaderMap;
    }
    if ((FHairVisibilityPS<2> *)local_198.Shaders[3] != (FHairVisibilityPS<2> *)0x0) {
      local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<2> *)local_198.Shaders[3];
      local_1e8.PixelShader.ShaderMap = local_198.ShaderMap;
    }
    local_128.BlendState = (this->PassDrawRenderState).BlendState;
    local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_208.HairMacroGroupId = param_7;
    local_208.HairMaterialId = param_8;
    local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_128.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_128._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    local_208.LightChannelMask = param_9;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208.HairCoverageScale = param_10;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_208,(FSceneView *)this->_padding_,param_3,
               param_1,param_4,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FHairVisibilityVS<2,0>,FHairVisibilityPS<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FHairVisibilityShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,&local_128,
               &local_1e8,param_11,param_12,FMeshDrawCommandSortKey::Default,Default,&local_208);
    bVar5 = true;
  }
  return bVar5;
}

// Process<3,1> @ 1449920e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FHairVisibilityProcessor::Process<3,1>
          (FHairVisibilityProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,uint param_7,uint param_8,uint param_9,float param_10,ERasterizerFillMode param_11,
          ERasterizerCullMode param_12)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  FShaderType *pFVar8;
  FVertexFactoryType *pFVar9;
  undefined1 auStackY_288 [32];
  FHairVisibilityShaderElementData local_208;
  TMeshProcessorShaders<FHairVisibilityVS<3,1>,FHairVisibilityPS<3>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1e8;
  FMaterialShaders local_198;
  FMeshPassProcessorRenderState local_128;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar2 = param_1->VertexFactory;
  local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<3,1> *)0x0;
  local_1e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<3> *)0x0;
  local_1e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar8 = (FShaderType *)FHairVisibilityVS<3,1>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar8 = (FShaderType *)FHairVisibilityPS<3>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar3 = pFVar2->_padding_;
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FVertexFactoryType *)(**(code **)(lVar3 + 0x30))(pFVar2);
  local_198.ShaderMap = (FShaderMapBase *)0x0;
  local_198.Pipeline = (FShaderPipeline *)0x0;
  local_198.Shaders[0] = (FShader *)0x0;
  local_198.Shaders[1] = (FShader *)0x0;
  local_198.Shaders[2] = (FShader *)0x0;
  local_198.Shaders[3] = (FShader *)0x0;
  local_198.Shaders[4] = (FShader *)0x0;
  local_198.Shaders[5] = (FShader *)0x0;
  local_198.Shaders[6] = (FShader *)0x0;
  local_198.Shaders[7] = (FShader *)0x0;
  local_198.Shaders[8] = (FShader *)0x0;
  local_198.Shaders[9] = (FShader *)0x0;
  local_198.Shaders[10] = (FShader *)0x0;
  local_198.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar9,&local_198);
  bVar5 = false;
  if (bVar7) {
    if ((FHairVisibilityVS<3,1> *)local_198.Shaders[0] != (FHairVisibilityVS<3,1> *)0x0) {
      local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<3,1> *)local_198.Shaders[0];
      local_1e8.VertexShader.ShaderMap = local_198.ShaderMap;
    }
    if ((FHairVisibilityPS<3> *)local_198.Shaders[3] != (FHairVisibilityPS<3> *)0x0) {
      local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<3> *)local_198.Shaders[3];
      local_1e8.PixelShader.ShaderMap = local_198.ShaderMap;
    }
    local_128.BlendState = (this->PassDrawRenderState).BlendState;
    local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_208.HairMacroGroupId = param_7;
    local_208.HairMaterialId = param_8;
    local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_128.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_128._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    local_208.LightChannelMask = param_9;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208.HairCoverageScale = param_10;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_208,(FSceneView *)this->_padding_,param_3,
               param_1,param_4,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FHairVisibilityVS<3,1>,FHairVisibilityPS<3>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FHairVisibilityShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,&local_128,
               &local_1e8,param_11,param_12,FMeshDrawCommandSortKey::Default,Default,&local_208);
    bVar5 = true;
  }
  return bVar5;
}

// Process<0,1> @ 1449923c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FHairVisibilityProcessor::Process<0,1>
          (FHairVisibilityProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,uint param_7,uint param_8,uint param_9,float param_10,ERasterizerFillMode param_11,
          ERasterizerCullMode param_12)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  FShaderType *pFVar8;
  FVertexFactoryType *pFVar9;
  undefined1 auStackY_288 [32];
  FHairVisibilityShaderElementData local_208;
  TMeshProcessorShaders<FHairVisibilityVS<0,1>,FHairVisibilityPS<0>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1e8;
  FMaterialShaders local_198;
  FMeshPassProcessorRenderState local_128;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar2 = param_1->VertexFactory;
  local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<0,1> *)0x0;
  local_1e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<0> *)0x0;
  local_1e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar8 = (FShaderType *)FHairVisibilityVS<0,1>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar8 = (FShaderType *)FHairVisibilityPS<0>::GetStaticType();
  bVar1 = (byte)pFVar8->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar3 = pFVar2->_padding_;
  local_e8.ShaderType[bVar1] = pFVar8;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FVertexFactoryType *)(**(code **)(lVar3 + 0x30))(pFVar2);
  local_198.ShaderMap = (FShaderMapBase *)0x0;
  local_198.Pipeline = (FShaderPipeline *)0x0;
  local_198.Shaders[0] = (FShader *)0x0;
  local_198.Shaders[1] = (FShader *)0x0;
  local_198.Shaders[2] = (FShader *)0x0;
  local_198.Shaders[3] = (FShader *)0x0;
  local_198.Shaders[4] = (FShader *)0x0;
  local_198.Shaders[5] = (FShader *)0x0;
  local_198.Shaders[6] = (FShader *)0x0;
  local_198.Shaders[7] = (FShader *)0x0;
  local_198.Shaders[8] = (FShader *)0x0;
  local_198.Shaders[9] = (FShader *)0x0;
  local_198.Shaders[10] = (FShader *)0x0;
  local_198.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar9,&local_198);
  bVar5 = false;
  if (bVar7) {
    if ((FHairVisibilityVS<0,1> *)local_198.Shaders[0] != (FHairVisibilityVS<0,1> *)0x0) {
      local_1e8.VertexShader.ShaderContent = (FHairVisibilityVS<0,1> *)local_198.Shaders[0];
      local_1e8.VertexShader.ShaderMap = local_198.ShaderMap;
    }
    if ((FHairVisibilityPS<0> *)local_198.Shaders[3] != (FHairVisibilityPS<0> *)0x0) {
      local_1e8.PixelShader.ShaderContent = (FHairVisibilityPS<0> *)local_198.Shaders[3];
      local_1e8.PixelShader.ShaderMap = local_198.ShaderMap;
    }
    local_128.BlendState = (this->PassDrawRenderState).BlendState;
    local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_208.HairMacroGroupId = param_7;
    local_208.HairMaterialId = param_8;
    local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_128.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_128._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    local_208.LightChannelMask = param_9;
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208.HairCoverageScale = param_10;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_208,(FSceneView *)this->_padding_,param_3,
               param_1,param_4,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FHairVisibilityVS<0,1>,FHairVisibilityPS<0>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FHairVisibilityShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,&local_128,
               &local_1e8,param_11,param_12,FMeshDrawCommandSortKey::Default,Default,&local_208);
    bVar5 = true;
  }
  return bVar5;
}

// FHairVisibilityProcessor @ 14499e2e0

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FHairVisibilityProcessor * __thiscall
FHairVisibilityProcessor::FHairVisibilityProcessor
          (FHairVisibilityProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          EHairVisibilityRenderMode param_4,FDynamicPassMeshDrawListContext *param_5)

{
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  TRefCountPtr<FRHIBlendState> TVar2;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,HairVisibilityPassName,param_1,param_2,param_3,
             (FMeshPassDrawListContext *)param_5);
  this->_padding_ = (longlong)&___7FHairVisibilityProcessor__6B_;
  this->RenderMode = param_4;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  if (param_4 == HairVisibilityRenderMode_MSAA_Visibility) {
    (this->PassDrawRenderState).BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    TVar1 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
    (this->PassDrawRenderState).StencilRef = 0;
    (this->PassDrawRenderState).DepthStencilState = TVar1.Reference;
    return this;
  }
  TVar2 = TStaticStateRHI<TStaticBlendState<1,0,8,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
          ::StaticResource.StateRHI;
  if ((param_4 != HairVisibilityRenderMode_Transmittance) &&
     (TVar2 = TStaticStateRHI<TStaticBlendState<1,0,8,0,0,0,0,3,0,1,1,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource.StateRHI,
     param_4 != HairVisibilityRenderMode_TransmittanceAndHairCount)) {
    if (param_4 == HairVisibilityRenderMode_PPLL) {
      (this->PassDrawRenderState).BlendState =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      TVar1 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource.StateRHI;
      (this->PassDrawRenderState).StencilRef = 0;
      (this->PassDrawRenderState).DepthStencilState = TVar1.Reference;
    }
    return this;
  }
  (this->PassDrawRenderState).BlendState = TVar2.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).StencilRef = 0;
  return this;
}

// AddMeshBatch @ 1449bcfc0

/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FHairVisibilityProcessor::AddMeshBatch
          (FHairVisibilityProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,uint param_5,uint param_6,float param_7,
          bool param_8)

{
  EHairVisibilityRenderMode EVar1;
  bool bVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  FMaterial *pFVar5;
  FVertexFactoryType *pFVar6;
  FMaterialRenderProxy *pFVar7;
  uint uVar8;
  FMeshDrawingPolicyOverrideSettings local_res10;
  
  pFVar7 = param_1->MaterialRenderProxy;
  do {
    if (pFVar7 == (FMaterialRenderProxy *)0x0) {
      return;
    }
    pFVar5 = (FMaterial *)(**(code **)(pFVar7->_padding_ + 0x30))(pFVar7,(int)this->_padding_);
    if (pFVar5 != (FMaterial *)0x0) {
      if (param_3 == (FPrimitiveSceneProxy *)0x0) {
        if (0 < (param_1->Elements).ArrayNum) goto LAB_1449bd076;
LAB_1449bd037:
        bVar2 = false;
      }
      else {
        if (param_3->bRenderInMainPass == '\0') goto LAB_1449bd037;
LAB_1449bd076:
        bVar2 = true;
      }
      pFVar6 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
      bVar2 = ShouldRenderHairStrands((Type)this->_padding_,pFVar5,pFVar6,bVar2);
      if (!bVar2) {
        return;
      }
      if (param_3 == (FPrimitiveSceneProxy *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)param_3->LightingChannelMask;
      }
      local_res10 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
      EVar3 = FMeshPassProcessor::ComputeMeshFillMode(pFVar5,&local_res10);
      EVar4 = FMeshPassProcessor::ComputeMeshCullMode(pFVar5,&local_res10);
      EVar1 = this->RenderMode;
      if (EVar1 == HairVisibilityRenderMode_MSAA_Visibility) {
        if (param_8) {
          bVar2 = Process<2,1>(this,param_1,param_2,param_3,param_4,pFVar7,pFVar5,param_5,param_6,
                               uVar8,param_7,EVar3,EVar4);
        }
        else {
          bVar2 = Process<2,0>(this,param_1,param_2,param_3,param_4,pFVar7,pFVar5,param_5,param_6,
                               uVar8,param_7,EVar3,EVar4);
        }
      }
      else if (EVar1 == HairVisibilityRenderMode_Transmittance) {
        bVar2 = Process<0,1>(this,param_1,param_2,param_3,param_4,pFVar7,pFVar5,param_5,param_6,
                             uVar8,param_7,EVar3,EVar4);
      }
      else if (EVar1 == HairVisibilityRenderMode_TransmittanceAndHairCount) {
        bVar2 = Process<3,1>(this,param_1,param_2,param_3,param_4,pFVar7,pFVar5,param_5,param_6,
                             uVar8,param_7,EVar3,EVar4);
      }
      else {
        if (EVar1 != HairVisibilityRenderMode_PPLL) {
          return;
        }
        bVar2 = Process<1,1>(this,param_1,param_2,param_3,param_4,pFVar7,pFVar5,param_5,param_6,
                             uVar8,param_7,EVar3,EVar4);
      }
      if (bVar2 != false) {
        return;
      }
    }
    pFVar7 = (FMaterialRenderProxy *)
             (**(code **)(pFVar7->_padding_ + 0x38))(pFVar7,(int)this->_padding_);
  } while( true );
}

// AddMeshBatch @ 1449bd280

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
FHairVisibilityProcessor::AddMeshBatch
          (FHairVisibilityProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  AddMeshBatch(this,param_1,param_2,param_3,param_4,0,0,__real_3f800000,false);
  return;
}

// CollectPSOInitializers @ 1449c4140

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
FHairVisibilityProcessor::CollectPSOInitializers
          (FHairVisibilityProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  FPSOPrecacheParams *pFVar1;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  ERasterizerFillMode EVar4;
  ERasterizerCullMode EVar5;
  
  pFVar1 = param_4;
  bVar3 = ShouldRenderHairStrands
                    ((Type)this->_padding_,param_2,param_3->VertexFactoryType,
                     (bool)((byte)(*(uint *)&param_4->field0_0x0 >> 10) & 1));
  if (bVar3) {
    param_4 = (FPSOPrecacheParams *)FMeshPassProcessor::ComputeMeshOverrideSettings(pFVar1);
    EVar4 = FMeshPassProcessor::ComputeMeshFillMode
                      (param_2,(FMeshDrawingPolicyOverrideSettings *)&param_4);
    EVar5 = FMeshPassProcessor::ComputeMeshCullMode
                      (param_2,(FMeshDrawingPolicyOverrideSettings *)&param_4);
    pTVar2 = param_5;
    AddPSOInitializer<2,1>(this,param_1,param_2,param_3,pFVar1,EVar4,EVar5,param_5);
    AddPSOInitializer<2,0>(this,param_1,param_2,param_3,pFVar1,EVar4,EVar5,pTVar2);
    AddPSOInitializer<0,1>(this,param_1,param_2,param_3,pFVar1,EVar4,EVar5,pTVar2);
    AddPSOInitializer<3,1>(this,param_1,param_2,param_3,pFVar1,EVar4,EVar5,pTVar2);
    AddPSOInitializer<1,1>(this,param_1,param_2,param_3,pFVar1,EVar4,EVar5,pTVar2);
  }
  return;
}

// SetupDrawRenderState @ 1449fe8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FHairVisibilityProcessor::SetupDrawRenderState
          (FHairVisibilityProcessor *this,EHairVisibilityRenderMode param_1)

{
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  TRefCountPtr<FRHIBlendState> TVar2;
  
  if (param_1 != HairVisibilityRenderMode_MSAA_Visibility) {
    TVar2.Reference =
         TStaticStateRHI<TStaticBlendState<1,0,8,0,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    if (((param_1 == HairVisibilityRenderMode_Transmittance) ||
        (TVar2.Reference =
              TStaticStateRHI<TStaticBlendState<1,0,8,0,0,0,0,3,0,1,1,0,0,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource.StateRHI.Reference,
        param_1 == HairVisibilityRenderMode_TransmittanceAndHairCount)) ||
       (TVar2.Reference =
             TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI.Reference, param_1 == HairVisibilityRenderMode_PPLL)) {
      (this->PassDrawRenderState).BlendState = TVar2.Reference;
      TVar1 = TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource.StateRHI;
      (this->PassDrawRenderState).StencilRef = 0;
      (this->PassDrawRenderState).DepthStencilState = TVar1.Reference;
    }
    return;
  }
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  TVar1 = TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
          ::StaticResource.StateRHI;
  (this->PassDrawRenderState).StencilRef = 0;
  (this->PassDrawRenderState).DepthStencilState = TVar1.Reference;
  return;
}

// TryAddMeshBatch @ 144a08560

/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
FHairVisibilityProcessor::TryAddMeshBatch
          (FHairVisibilityProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,uint param_5,uint param_6,float param_7,
          bool param_8,FMaterialRenderProxy *param_9,FMaterial *param_10)

{
  EHairVisibilityRenderMode EVar1;
  bool bVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  FVertexFactoryType *pFVar5;
  uint uVar6;
  FMeshDrawingPolicyOverrideSettings local_res8;
  
  if (param_3 == (FPrimitiveSceneProxy *)0x0) {
    if ((param_1->Elements).ArrayNum < 1) {
LAB_144a0858a:
      bVar2 = false;
      goto LAB_144a0858d;
    }
  }
  else if (param_3->bRenderInMainPass == '\0') goto LAB_144a0858a;
  bVar2 = true;
LAB_144a0858d:
  pFVar5 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar2 = ShouldRenderHairStrands((Type)this->_padding_,param_10,pFVar5,bVar2);
  if (bVar2) {
    if (param_3 == (FPrimitiveSceneProxy *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)param_3->LightingChannelMask;
    }
    local_res8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar3 = FMeshPassProcessor::ComputeMeshFillMode(param_10,&local_res8);
    EVar4 = FMeshPassProcessor::ComputeMeshCullMode(param_10,&local_res8);
    EVar1 = this->RenderMode;
    if (EVar1 == HairVisibilityRenderMode_MSAA_Visibility) {
      if (param_8) {
        bVar2 = Process<2,1>(this,param_1,param_2,param_3,param_4,param_9,param_10,param_5,param_6,
                             uVar6,param_7,EVar3,EVar4);
        return bVar2;
      }
      bVar2 = Process<2,0>(this,param_1,param_2,param_3,param_4,param_9,param_10,param_5,param_6,
                           uVar6,param_7,EVar3,EVar4);
      return bVar2;
    }
    if (EVar1 == HairVisibilityRenderMode_Transmittance) {
      bVar2 = Process<0,1>(this,param_1,param_2,param_3,param_4,param_9,param_10,param_5,param_6,
                           uVar6,param_7,EVar3,EVar4);
      return bVar2;
    }
    if (EVar1 == HairVisibilityRenderMode_TransmittanceAndHairCount) {
      bVar2 = Process<3,1>(this,param_1,param_2,param_3,param_4,param_9,param_10,param_5,param_6,
                           uVar6,param_7,EVar3,EVar4);
      return bVar2;
    }
    if (EVar1 == HairVisibilityRenderMode_PPLL) {
      bVar2 = Process<1,1>(this,param_1,param_2,param_3,param_4,param_9,param_10,param_5,param_6,
                           uVar6,param_7,EVar3,EVar4);
      return bVar2;
    }
  }
  return true;
}


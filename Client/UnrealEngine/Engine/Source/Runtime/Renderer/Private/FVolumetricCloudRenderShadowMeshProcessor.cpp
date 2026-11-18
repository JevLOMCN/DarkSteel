// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// AddMeshBatch @ 145861370

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

void __thiscall
FVolumetricCloudRenderShadowMeshProcessor::AddMeshBatch
          (FVolumetricCloudRenderShadowMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMaterial *pFVar4;
  FMaterialRenderProxy *pFVar5;
  
  pFVar5 = param_1->MaterialRenderProxy;
  do {
    if (pFVar5 == (FMaterialRenderProxy *)0x0) {
      return;
    }
    pFVar4 = (FMaterial *)(**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,(int)this->_padding_);
    if (pFVar4 != (FMaterial *)0x0) {
      iVar3 = (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4);
      if ((iVar3 != 3) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Material->GetMaterialDomain() == MD_Volume",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricCloudRendering.cpp"
                             ,0x58b,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = Process(this,param_1,param_2,param_3,pFVar5,pFVar4,param_4,ERasterizerFillMode_NumBits
                      ,CM_None);
      if (bVar2) {
        return;
      }
    }
    pFVar5 = (FMaterialRenderProxy *)
             (**(code **)(pFVar5->_padding_ + 0x38))(pFVar5,(int)this->_padding_);
  } while( true );
}

// CollectPSOInitializers @ 145861dc0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */

void __thiscall
FVolumetricCloudRenderShadowMeshProcessor::CollectPSOInitializers
          (FVolumetricCloudRenderShadowMeshProcessor *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FShaderType *pFVar6;
  undefined1 auStackY_288 [32];
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FVolumetricCloudShadowPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_218;
  FMaterialShaders local_1c8;
  FGraphicsPipelineRenderTargetsInfo local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  iVar5 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if (iVar5 == 3) {
    FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    local_e8.PipelineType = (FShaderPipelineType *)0x0;
    local_218.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
    local_218.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_218.PixelShader.ShaderContent = (FVolumetricCloudShadowPS *)0x0;
    local_218.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_218.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_218.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_218.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_218.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_218.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_218.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
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
    pFVar6 = (FShaderType *)FRenderVolumetricCloudVS::GetStaticType();
    bVar1 = (byte)pFVar6->Frequency;
    if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderType[Frequency] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0xd0,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_e8.ShaderType[bVar1] = pFVar6;
    local_e8.PermutationId[bVar1] = 0;
    pFVar6 = (FShaderType *)FVolumetricCloudShadowPS::GetStaticType();
    bVar1 = (byte)pFVar6->Frequency;
    if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderType[Frequency] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0xd0,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = param_3->VertexFactoryType;
    local_e8.ShaderType[bVar1] = pFVar6;
    local_1c8.ShaderMap = (FShaderMapBase *)0x0;
    local_1c8.Pipeline = (FShaderPipeline *)0x0;
    local_e8.PermutationId[bVar1] = 0;
    local_1c8.Shaders[0] = (FShader *)0x0;
    local_1c8.Shaders[1] = (FShader *)0x0;
    local_1c8.Shaders[2] = (FShader *)0x0;
    local_1c8.Shaders[3] = (FShader *)0x0;
    local_1c8.Shaders[4] = (FShader *)0x0;
    local_1c8.Shaders[5] = (FShader *)0x0;
    local_1c8.Shaders[6] = (FShader *)0x0;
    local_1c8.Shaders[7] = (FShader *)0x0;
    local_1c8.Shaders[8] = (FShader *)0x0;
    local_1c8.Shaders[9] = (FShader *)0x0;
    local_1c8.Shaders[10] = (FShader *)0x0;
    local_1c8.Shaders[0xb] = (FShader *)0x0;
    bVar4 = FMaterial::TryGetShaders(param_2,&local_e8,pFVar2,&local_1c8);
    if (bVar4) {
      if ((FRenderVolumetricCloudVS *)local_1c8.Shaders[0] != (FRenderVolumetricCloudVS *)0x0) {
        local_218.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_1c8.Shaders[0];
        local_218.VertexShader.ShaderMap = local_1c8.ShaderMap;
      }
      if ((FVolumetricCloudShadowPS *)local_1c8.Shaders[3] != (FVolumetricCloudShadowPS *)0x0) {
        local_218.PixelShader.ShaderContent = (FVolumetricCloudShadowPS *)local_1c8.Shaders[3];
        local_218.PixelShader.ShaderMap = local_1c8.ShaderMap;
      }
      local_158.RenderTargetsEnabled = 0;
      local_158.RenderTargetFormats.Elements[0] = '\0';
      local_158.RenderTargetFormats.Elements[1] = '\0';
      local_158.RenderTargetFormats.Elements[2] = '\0';
      local_158.RenderTargetFormats.Elements[3] = '\0';
      local_158.RenderTargetFlags.Elements[0] = None;
      local_158.RenderTargetFlags.Elements[1] = None;
      local_158.RenderTargetFlags.Elements[2] = None;
      local_158.RenderTargetFlags.Elements[3] = None;
      local_158.RenderTargetFlags.Elements[4] = None;
      local_158.RenderTargetFlags.Elements[5] = None;
      local_158.RenderTargetFlags.Elements[6] = None;
      local_158.RenderTargetFlags.Elements[7] = None;
      local_158.RenderTargetFormats.Elements[4] = '\0';
      local_158.RenderTargetFormats.Elements[5] = '\0';
      local_158.RenderTargetFormats.Elements[6] = '\0';
      local_158.RenderTargetFormats.Elements[7] = '\0';
      local_158.DepthStencilTargetFormat = PF_Unknown;
      local_158.DepthStencilTargetFlag = None;
      local_158.DepthTargetLoadAction = ENoAction;
      local_158.DepthTargetStoreAction = ENoAction;
      local_158.StencilTargetLoadAction = ENoAction;
      local_158.StencilTargetStoreAction = ENoAction;
      local_158.DepthStencilAccess.Value = DepthNop;
      local_158.NumSamples = 1;
      local_158.MultiViewCount = '\0';
      local_158.bHasFragmentDensityAttachment = false;
      AddRenderTargetInfo(PF_FloatR11G11B10,ShaderResource|RenderTargetable,&local_158);
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FRenderVolumetricCloudVS,FVolumetricCloudShadowPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_3,param_2,&this->PassDrawRenderState,&local_158,&local_218,
                 ERasterizerFillMode_NumBits,CM_None,*(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,
                 Default,None,'\0',true,(int)this->_padding_,param_5);
    }
  }
  return;
}

// Process @ 14587fb40

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
FVolumetricCloudRenderShadowMeshProcessor::Process
          (FVolumetricCloudRenderShadowMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,int param_6
          ,ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  FShaderType *pFVar7;
  FVertexFactoryType *pFVar8;
  FMeshDrawCommandSortKey FVar9;
  undefined1 auStackY_238 [32];
  FMeshMaterialShaderElementData local_1b8;
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FVolumetricCloudShadowPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1a8;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1b8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_1b8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            (&local_1b8,(FSceneView *)this->_padding_,param_3,param_1,param_6,false);
  pFVar2 = param_1->VertexFactory;
  local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
  local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.PixelShader.ShaderContent = (FVolumetricCloudShadowPS *)0x0;
  local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar7 = (FShaderType *)FRenderVolumetricCloudVS::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
  if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_e8.ShaderType[bVar1] = pFVar7;
  local_e8.PermutationId[bVar1] = 0;
  pFVar7 = (FShaderType *)FVolumetricCloudShadowPS::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
  if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_e8.ShaderType[bVar1] = pFVar7;
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
  pFVar8 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = FMaterial::TryGetShaders(param_5,&local_e8,pFVar8,&local_158);
  bVar4 = false;
  if (bVar6) {
    if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FMeshMaterialShader *)local_158.Shaders[3] != (FMeshMaterialShader *)0x0) {
      local_1a8.PixelShader.ShaderContent = (FVolumetricCloudShadowPS *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FRenderVolumetricCloudVS,FVolumetricCloudShadowPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,FVar9,Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}


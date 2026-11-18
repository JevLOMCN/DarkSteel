// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 14

// CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> @ 1458c38b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>
          (FRuntimeVirtualTextureMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,ERasterizerFillMode *param_3,ERasterizerCullMode *param_4,uchar param_5
          ,ERuntimeVirtualTextureMaterialType param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  EPixelFormat EVar6;
  ETextureCreateFlags EVar7;
  undefined1 auStackY_2e8 [32];
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_268;
  FMaterialShaders local_218;
  FMeshPassProcessorRenderState local_1a8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
  local_f8.ShaderType[2] = (FShaderType *)0x0;
  local_f8.ShaderType[3] = (FShaderType *)0x0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>::
           GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.ShaderType[bVar1] = pFVar5;
  local_f8.PermutationId[bVar1] = 0;
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>::
           GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_1->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar5;
  local_218.ShaderMap = (FShaderMapBase *)0x0;
  local_218.Pipeline = (FShaderPipeline *)0x0;
  local_f8.PermutationId[bVar1] = 0;
  local_218.Shaders[0] = (FShader *)0x0;
  local_218.Shaders[1] = (FShader *)0x0;
  local_218.Shaders[2] = (FShader *)0x0;
  local_218.Shaders[3] = (FShader *)0x0;
  local_218.Shaders[4] = (FShader *)0x0;
  local_218.Shaders[5] = (FShader *)0x0;
  local_218.Shaders[6] = (FShader *)0x0;
  local_218.Shaders[7] = (FShader *)0x0;
  local_218.Shaders[8] = (FShader *)0x0;
  local_218.Shaders[9] = (FShader *)0x0;
  local_218.Shaders[10] = (FShader *)0x0;
  local_218.Shaders[0xb] = (FShader *)0x0;
  bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar2,&local_218);
  if (!bVar4) {
    return;
  }
  local_268.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
       0x0;
  local_268.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
       0x0;
  local_268.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
      local_218.Shaders[0] !=
      (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)0x0
     ) {
    local_268.VertexShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
         local_218.Shaders[0];
    local_268.VertexShader.ShaderMap = local_218.ShaderMap;
  }
  if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
      local_218.Shaders[3] !=
      (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)0x0
     ) {
    local_268.PixelShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
         local_218.Shaders[3];
    local_268.PixelShader.ShaderMap = local_218.ShaderMap;
  }
  local_1a8.DepthStencilState = (this->DrawRenderState).DepthStencilState;
  local_1a8.DepthStencilAccess = (this->DrawRenderState).DepthStencilAccess;
  local_1a8._20_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x14;
  local_1a8.ViewUniformBuffer = (this->DrawRenderState).ViewUniformBuffer;
  local_168.RenderTargetsEnabled = 0;
  local_168.RenderTargetFormats.Elements[0] = '\0';
  local_168.RenderTargetFormats.Elements[1] = '\0';
  local_168.RenderTargetFormats.Elements[2] = '\0';
  local_168.RenderTargetFormats.Elements[3] = '\0';
  local_1a8.InstancedViewUniformBuffer = (this->DrawRenderState).InstancedViewUniformBuffer;
  local_1a8.PassUniformBuffer = (this->DrawRenderState).PassUniformBuffer;
  local_1a8.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_168.RenderTargetFlags.Elements[0] = None;
  local_168.RenderTargetFlags.Elements[1] = None;
  local_168.RenderTargetFlags.Elements[4] = None;
  local_168.RenderTargetFlags.Elements[5] = None;
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
  local_1a8.NaniteUniformBuffer = (this->DrawRenderState).NaniteUniformBuffer;
  local_1a8.StencilRef = (this->DrawRenderState).StencilRef;
  local_1a8._60_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x3c;
  local_168.RenderTargetFlags.Elements[2] = None;
  local_168.RenderTargetFlags.Elements[3] = None;
  local_168.RenderTargetFlags.Elements[6] = None;
  local_168.RenderTargetFlags.Elements[7] = None;
  switch(param_6) {
  case BaseColor:
    EVar7 = SRGB|ShaderResource|RenderTargetable;
    EVar6 = PF_B8G8R8A8;
    goto LAB_1458c3b42;
  case BaseColor_Normal_Specular:
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    AddRenderTargetInfo(PF_B8G8R8A8,SRGB|ShaderResource|RenderTargetable,&local_168);
  case Mask4:
  case BaseColor_Normal_Roughness:
    AddRenderTargetInfo(PF_B8G8R8A8,ShaderResource|RenderTargetable,&local_168);
    EVar6 = PF_B8G8R8A8;
    break;
  case WorldHeight:
  case Displacement:
    EVar6 = PF_G16;
    break;
  default:
    goto switchD_1458c3b06_default;
  }
  EVar7 = ShaderResource|RenderTargetable;
LAB_1458c3b42:
  AddRenderTargetInfo(EVar6,EVar7,&local_168);
switchD_1458c3b06_default:
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_1,param_2,&local_1a8,&local_168,&local_268,*param_3,*param_4,PT_TriangleList,
             Default,None,'\0',true,(int)this->_padding_,param_7);
  return;
}

// CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness> @ 1458c3bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
          (FRuntimeVirtualTextureMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,ERasterizerFillMode *param_3,ERasterizerCullMode *param_4,uchar param_5
          ,ERuntimeVirtualTextureMaterialType param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  EPixelFormat EVar6;
  ETextureCreateFlags EVar7;
  undefined1 auStackY_2e8 [32];
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_268;
  FMaterialShaders local_218;
  FMeshPassProcessorRenderState local_1a8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
           ::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.ShaderType[bVar1] = pFVar5;
  local_f8.PermutationId[bVar1] = 0;
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
           ::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_1->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar5;
  local_218.ShaderMap = (FShaderMapBase *)0x0;
  local_218.Pipeline = (FShaderPipeline *)0x0;
  local_f8.PermutationId[bVar1] = 0;
  local_218.Shaders[0] = (FShader *)0x0;
  local_218.Shaders[1] = (FShader *)0x0;
  local_218.Shaders[2] = (FShader *)0x0;
  local_218.Shaders[3] = (FShader *)0x0;
  local_218.Shaders[4] = (FShader *)0x0;
  local_218.Shaders[5] = (FShader *)0x0;
  local_218.Shaders[6] = (FShader *)0x0;
  local_218.Shaders[7] = (FShader *)0x0;
  local_218.Shaders[8] = (FShader *)0x0;
  local_218.Shaders[9] = (FShader *)0x0;
  local_218.Shaders[10] = (FShader *)0x0;
  local_218.Shaders[0xb] = (FShader *)0x0;
  bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar2,&local_218);
  if (!bVar4) {
    return;
  }
  local_268.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
        *)0x0;
  local_268.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
        *)0x0;
  local_268.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
       *)local_218.Shaders[0] !=
      (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
       *)0x0) {
    local_268.VertexShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
          *)local_218.Shaders[0];
    local_268.VertexShader.ShaderMap = local_218.ShaderMap;
  }
  if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
       *)local_218.Shaders[3] !=
      (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
       *)0x0) {
    local_268.PixelShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
          *)local_218.Shaders[3];
    local_268.PixelShader.ShaderMap = local_218.ShaderMap;
  }
  local_1a8.BlendState = (this->DrawRenderState).BlendState;
  local_1a8.DepthStencilState = (this->DrawRenderState).DepthStencilState;
  local_1a8.DepthStencilAccess = (this->DrawRenderState).DepthStencilAccess;
  local_1a8._20_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x14;
  local_1a8.ViewUniformBuffer = (this->DrawRenderState).ViewUniformBuffer;
  local_1a8.InstancedViewUniformBuffer = (this->DrawRenderState).InstancedViewUniformBuffer;
  local_1a8.PassUniformBuffer = (this->DrawRenderState).PassUniformBuffer;
  local_1a8.NaniteUniformBuffer = (this->DrawRenderState).NaniteUniformBuffer;
  local_1a8.StencilRef = (this->DrawRenderState).StencilRef;
  local_1a8._60_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x3c;
  local_1a8.BlendState = FMaterialPolicy_BaseColorNormalRoughness::GetBlendState(param_5);
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
  switch(param_6) {
  case BaseColor:
    EVar7 = SRGB|ShaderResource|RenderTargetable;
    EVar6 = PF_B8G8R8A8;
    goto LAB_1458c3e91;
  case BaseColor_Normal_Specular:
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    AddRenderTargetInfo(PF_B8G8R8A8,SRGB|ShaderResource|RenderTargetable,&local_168);
  case Mask4:
  case BaseColor_Normal_Roughness:
    AddRenderTargetInfo(PF_B8G8R8A8,ShaderResource|RenderTargetable,&local_168);
    EVar6 = PF_B8G8R8A8;
    break;
  case WorldHeight:
  case Displacement:
    EVar6 = PF_G16;
    break;
  default:
    goto switchD_1458c3e55_default;
  }
  EVar7 = ShaderResource|RenderTargetable;
LAB_1458c3e91:
  AddRenderTargetInfo(EVar6,EVar7,&local_168);
switchD_1458c3e55_default:
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_1,param_2,&local_1a8,&local_168,&local_268,*param_3,*param_4,PT_TriangleList,
             Default,None,'\0',true,(int)this->_padding_,param_7);
  return;
}

// CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular> @ 1458c3f50

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
          (FRuntimeVirtualTextureMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,ERasterizerFillMode *param_3,ERasterizerCullMode *param_4,uchar param_5
          ,ERuntimeVirtualTextureMaterialType param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  EPixelFormat EVar6;
  ETextureCreateFlags EVar7;
  undefined1 auStackY_2e8 [32];
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_268;
  FMaterialShaders local_218;
  FMeshPassProcessorRenderState local_1a8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
           ::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.ShaderType[bVar1] = pFVar5;
  local_f8.PermutationId[bVar1] = 0;
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
           ::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_1->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar5;
  local_218.ShaderMap = (FShaderMapBase *)0x0;
  local_218.Pipeline = (FShaderPipeline *)0x0;
  local_f8.PermutationId[bVar1] = 0;
  local_218.Shaders[0] = (FShader *)0x0;
  local_218.Shaders[1] = (FShader *)0x0;
  local_218.Shaders[2] = (FShader *)0x0;
  local_218.Shaders[3] = (FShader *)0x0;
  local_218.Shaders[4] = (FShader *)0x0;
  local_218.Shaders[5] = (FShader *)0x0;
  local_218.Shaders[6] = (FShader *)0x0;
  local_218.Shaders[7] = (FShader *)0x0;
  local_218.Shaders[8] = (FShader *)0x0;
  local_218.Shaders[9] = (FShader *)0x0;
  local_218.Shaders[10] = (FShader *)0x0;
  local_218.Shaders[0xb] = (FShader *)0x0;
  bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar2,&local_218);
  if (!bVar4) {
    return;
  }
  local_268.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
        *)0x0;
  local_268.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
        *)0x0;
  local_268.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
       *)local_218.Shaders[0] !=
      (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
       *)0x0) {
    local_268.VertexShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
          *)local_218.Shaders[0];
    local_268.VertexShader.ShaderMap = local_218.ShaderMap;
  }
  if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
       *)local_218.Shaders[3] !=
      (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
       *)0x0) {
    local_268.PixelShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
          *)local_218.Shaders[3];
    local_268.PixelShader.ShaderMap = local_218.ShaderMap;
  }
  local_1a8.BlendState = (this->DrawRenderState).BlendState;
  local_1a8.DepthStencilState = (this->DrawRenderState).DepthStencilState;
  local_1a8.DepthStencilAccess = (this->DrawRenderState).DepthStencilAccess;
  local_1a8._20_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x14;
  local_1a8.ViewUniformBuffer = (this->DrawRenderState).ViewUniformBuffer;
  local_1a8.InstancedViewUniformBuffer = (this->DrawRenderState).InstancedViewUniformBuffer;
  local_1a8.PassUniformBuffer = (this->DrawRenderState).PassUniformBuffer;
  local_1a8.NaniteUniformBuffer = (this->DrawRenderState).NaniteUniformBuffer;
  local_1a8.StencilRef = (this->DrawRenderState).StencilRef;
  local_1a8._60_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x3c;
  local_1a8.BlendState = FMaterialPolicy_BaseColorNormalSpecular::GetBlendState(param_5);
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
  switch(param_6) {
  case BaseColor:
    EVar7 = SRGB|ShaderResource|RenderTargetable;
    EVar6 = PF_B8G8R8A8;
    goto LAB_1458c41f1;
  case BaseColor_Normal_Specular:
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    AddRenderTargetInfo(PF_B8G8R8A8,SRGB|ShaderResource|RenderTargetable,&local_168);
  case Mask4:
  case BaseColor_Normal_Roughness:
    AddRenderTargetInfo(PF_B8G8R8A8,ShaderResource|RenderTargetable,&local_168);
    EVar6 = PF_B8G8R8A8;
    break;
  case WorldHeight:
  case Displacement:
    EVar6 = PF_G16;
    break;
  default:
    goto switchD_1458c41b5_default;
  }
  EVar7 = ShaderResource|RenderTargetable;
LAB_1458c41f1:
  AddRenderTargetInfo(EVar6,EVar7,&local_168);
switchD_1458c41b5_default:
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_1,param_2,&local_1a8,&local_168,&local_268,*param_3,*param_4,PT_TriangleList,
             Default,None,'\0',true,(int)this->_padding_,param_7);
  return;
}

// CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_Displacement> @ 1458c42b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
          (FRuntimeVirtualTextureMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,ERasterizerFillMode *param_3,ERasterizerCullMode *param_4,uchar param_5
          ,ERuntimeVirtualTextureMaterialType param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  EPixelFormat EVar6;
  ETextureCreateFlags EVar7;
  undefined1 auStackY_2e8 [32];
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_268;
  FMaterialShaders local_218;
  FMeshPassProcessorRenderState local_1a8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
  local_f8.ShaderType[2] = (FShaderType *)0x0;
  local_f8.ShaderType[3] = (FShaderType *)0x0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
           ::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.ShaderType[bVar1] = pFVar5;
  local_f8.PermutationId[bVar1] = 0;
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
           ::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_1->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar5;
  local_218.ShaderMap = (FShaderMapBase *)0x0;
  local_218.Pipeline = (FShaderPipeline *)0x0;
  local_f8.PermutationId[bVar1] = 0;
  local_218.Shaders[0] = (FShader *)0x0;
  local_218.Shaders[1] = (FShader *)0x0;
  local_218.Shaders[2] = (FShader *)0x0;
  local_218.Shaders[3] = (FShader *)0x0;
  local_218.Shaders[4] = (FShader *)0x0;
  local_218.Shaders[5] = (FShader *)0x0;
  local_218.Shaders[6] = (FShader *)0x0;
  local_218.Shaders[7] = (FShader *)0x0;
  local_218.Shaders[8] = (FShader *)0x0;
  local_218.Shaders[9] = (FShader *)0x0;
  local_218.Shaders[10] = (FShader *)0x0;
  local_218.Shaders[0xb] = (FShader *)0x0;
  bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar2,&local_218);
  if (!bVar4) {
    return;
  }
  local_268.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement> *
       )0x0;
  local_268.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement> *
       )0x0;
  local_268.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement> *)
      local_218.Shaders[0] !=
      (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement> *)
      0x0) {
    local_268.VertexShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
          *)local_218.Shaders[0];
    local_268.VertexShader.ShaderMap = local_218.ShaderMap;
  }
  if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement> *)
      local_218.Shaders[3] !=
      (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement> *)
      0x0) {
    local_268.PixelShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
          *)local_218.Shaders[3];
    local_268.PixelShader.ShaderMap = local_218.ShaderMap;
  }
  local_1a8.DepthStencilState = (this->DrawRenderState).DepthStencilState;
  local_1a8.DepthStencilAccess = (this->DrawRenderState).DepthStencilAccess;
  local_1a8._20_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x14;
  local_1a8.ViewUniformBuffer = (this->DrawRenderState).ViewUniformBuffer;
  local_168.RenderTargetsEnabled = 0;
  local_168.RenderTargetFormats.Elements[0] = '\0';
  local_168.RenderTargetFormats.Elements[1] = '\0';
  local_168.RenderTargetFormats.Elements[2] = '\0';
  local_168.RenderTargetFormats.Elements[3] = '\0';
  local_1a8.InstancedViewUniformBuffer = (this->DrawRenderState).InstancedViewUniformBuffer;
  local_1a8.PassUniformBuffer = (this->DrawRenderState).PassUniformBuffer;
  local_1a8.BlendState =
       TStaticStateRHI<TStaticBlendState<1,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_168.RenderTargetFlags.Elements[0] = None;
  local_168.RenderTargetFlags.Elements[1] = None;
  local_168.RenderTargetFlags.Elements[4] = None;
  local_168.RenderTargetFlags.Elements[5] = None;
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
  local_1a8.NaniteUniformBuffer = (this->DrawRenderState).NaniteUniformBuffer;
  local_1a8.StencilRef = (this->DrawRenderState).StencilRef;
  local_1a8._60_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x3c;
  local_168.RenderTargetFlags.Elements[2] = None;
  local_168.RenderTargetFlags.Elements[3] = None;
  local_168.RenderTargetFlags.Elements[6] = None;
  local_168.RenderTargetFlags.Elements[7] = None;
  switch(param_6) {
  case BaseColor:
    EVar7 = SRGB|ShaderResource|RenderTargetable;
    EVar6 = PF_B8G8R8A8;
    goto LAB_1458c4542;
  case BaseColor_Normal_Specular:
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    AddRenderTargetInfo(PF_B8G8R8A8,SRGB|ShaderResource|RenderTargetable,&local_168);
  case Mask4:
  case BaseColor_Normal_Roughness:
    AddRenderTargetInfo(PF_B8G8R8A8,ShaderResource|RenderTargetable,&local_168);
    EVar6 = PF_B8G8R8A8;
    break;
  case WorldHeight:
  case Displacement:
    EVar6 = PF_G16;
    break;
  default:
    goto switchD_1458c4506_default;
  }
  EVar7 = ShaderResource|RenderTargetable;
LAB_1458c4542:
  AddRenderTargetInfo(EVar6,EVar7,&local_168);
switchD_1458c4506_default:
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_1,param_2,&local_1a8,&local_168,&local_268,*param_3,*param_4,PT_TriangleList,
             Default,None,'\0',true,(int)this->_padding_,param_7);
  return;
}

// CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_Mask4> @ 1458c45f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_Mask4>
          (FRuntimeVirtualTextureMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,ERasterizerFillMode *param_3,ERasterizerCullMode *param_4,uchar param_5
          ,ERuntimeVirtualTextureMaterialType param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  EPixelFormat EVar6;
  ETextureCreateFlags EVar7;
  undefined1 auStackY_2e8 [32];
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_268;
  FMaterialShaders local_218;
  FMeshPassProcessorRenderState local_1a8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
  local_f8.ShaderType[2] = (FShaderType *)0x0;
  local_f8.ShaderType[3] = (FShaderType *)0x0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>::
           GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.ShaderType[bVar1] = pFVar5;
  local_f8.PermutationId[bVar1] = 0;
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>::
           GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_1->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar5;
  local_218.ShaderMap = (FShaderMapBase *)0x0;
  local_218.Pipeline = (FShaderPipeline *)0x0;
  local_f8.PermutationId[bVar1] = 0;
  local_218.Shaders[0] = (FShader *)0x0;
  local_218.Shaders[1] = (FShader *)0x0;
  local_218.Shaders[2] = (FShader *)0x0;
  local_218.Shaders[3] = (FShader *)0x0;
  local_218.Shaders[4] = (FShader *)0x0;
  local_218.Shaders[5] = (FShader *)0x0;
  local_218.Shaders[6] = (FShader *)0x0;
  local_218.Shaders[7] = (FShader *)0x0;
  local_218.Shaders[8] = (FShader *)0x0;
  local_218.Shaders[9] = (FShader *)0x0;
  local_218.Shaders[10] = (FShader *)0x0;
  local_218.Shaders[0xb] = (FShader *)0x0;
  bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar2,&local_218);
  if (!bVar4) {
    return;
  }
  local_268.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)0x0;
  local_268.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)0x0;
  local_268.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)
      local_218.Shaders[0] !=
      (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)0x0) {
    local_268.VertexShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)
         local_218.Shaders[0];
    local_268.VertexShader.ShaderMap = local_218.ShaderMap;
  }
  if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)
      local_218.Shaders[3] !=
      (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)0x0) {
    local_268.PixelShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)
         local_218.Shaders[3];
    local_268.PixelShader.ShaderMap = local_218.ShaderMap;
  }
  local_1a8.DepthStencilState = (this->DrawRenderState).DepthStencilState;
  local_1a8.DepthStencilAccess = (this->DrawRenderState).DepthStencilAccess;
  local_1a8._20_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x14;
  local_1a8.ViewUniformBuffer = (this->DrawRenderState).ViewUniformBuffer;
  local_168.RenderTargetsEnabled = 0;
  local_168.RenderTargetFormats.Elements[0] = '\0';
  local_168.RenderTargetFormats.Elements[1] = '\0';
  local_168.RenderTargetFormats.Elements[2] = '\0';
  local_168.RenderTargetFormats.Elements[3] = '\0';
  local_1a8.InstancedViewUniformBuffer = (this->DrawRenderState).InstancedViewUniformBuffer;
  local_1a8.PassUniformBuffer = (this->DrawRenderState).PassUniformBuffer;
  local_1a8.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,1,1,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_168.RenderTargetFlags.Elements[0] = None;
  local_168.RenderTargetFlags.Elements[1] = None;
  local_168.RenderTargetFlags.Elements[4] = None;
  local_168.RenderTargetFlags.Elements[5] = None;
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
  local_1a8.NaniteUniformBuffer = (this->DrawRenderState).NaniteUniformBuffer;
  local_1a8.StencilRef = (this->DrawRenderState).StencilRef;
  local_1a8._60_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x3c;
  local_168.RenderTargetFlags.Elements[2] = None;
  local_168.RenderTargetFlags.Elements[3] = None;
  local_168.RenderTargetFlags.Elements[6] = None;
  local_168.RenderTargetFlags.Elements[7] = None;
  switch(param_6) {
  case BaseColor:
    EVar7 = SRGB|ShaderResource|RenderTargetable;
    EVar6 = PF_B8G8R8A8;
    goto LAB_1458c4882;
  case BaseColor_Normal_Specular:
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    AddRenderTargetInfo(PF_B8G8R8A8,SRGB|ShaderResource|RenderTargetable,&local_168);
  case Mask4:
  case BaseColor_Normal_Roughness:
    AddRenderTargetInfo(PF_B8G8R8A8,ShaderResource|RenderTargetable,&local_168);
    EVar6 = PF_B8G8R8A8;
    break;
  case WorldHeight:
  case Displacement:
    EVar6 = PF_G16;
    break;
  default:
    goto switchD_1458c4846_default;
  }
  EVar7 = ShaderResource|RenderTargetable;
LAB_1458c4882:
  AddRenderTargetInfo(EVar6,EVar7,&local_168);
switchD_1458c4846_default:
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_1,param_2,&local_1a8,&local_168,&local_268,*param_3,*param_4,PT_TriangleList,
             Default,None,'\0',true,(int)this->_padding_,param_7);
  return;
}

// CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> @ 1458c4930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
          (FRuntimeVirtualTextureMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMaterial *param_2,ERasterizerFillMode *param_3,ERasterizerCullMode *param_4,uchar param_5
          ,ERuntimeVirtualTextureMaterialType param_6,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_7)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  FShaderType *pFVar5;
  EPixelFormat EVar6;
  ETextureCreateFlags EVar7;
  undefined1 auStackY_2e8 [32];
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_268;
  FMaterialShaders local_218;
  FMeshPassProcessorRenderState local_1a8;
  FGraphicsPipelineRenderTargetsInfo local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_f8.ShaderType[0] = (FShaderType *)0x0;
  local_f8.ShaderType[1] = (FShaderType *)0x0;
  local_f8.ShaderType[2] = (FShaderType *)0x0;
  local_f8.ShaderType[3] = (FShaderType *)0x0;
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
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
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
           ::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_f8.ShaderType[bVar1] = pFVar5;
  local_f8.PermutationId[bVar1] = 0;
  pFVar5 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
           ::GetStaticType();
  bVar1 = (byte)pFVar5->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_1->VertexFactoryType;
  local_f8.ShaderType[bVar1] = pFVar5;
  local_218.ShaderMap = (FShaderMapBase *)0x0;
  local_218.Pipeline = (FShaderPipeline *)0x0;
  local_f8.PermutationId[bVar1] = 0;
  local_218.Shaders[0] = (FShader *)0x0;
  local_218.Shaders[1] = (FShader *)0x0;
  local_218.Shaders[2] = (FShader *)0x0;
  local_218.Shaders[3] = (FShader *)0x0;
  local_218.Shaders[4] = (FShader *)0x0;
  local_218.Shaders[5] = (FShader *)0x0;
  local_218.Shaders[6] = (FShader *)0x0;
  local_218.Shaders[7] = (FShader *)0x0;
  local_218.Shaders[8] = (FShader *)0x0;
  local_218.Shaders[9] = (FShader *)0x0;
  local_218.Shaders[10] = (FShader *)0x0;
  local_218.Shaders[0xb] = (FShader *)0x0;
  bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,pFVar2,&local_218);
  if (!bVar4) {
    return;
  }
  local_268.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *)
       0x0;
  local_268.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *)
       0x0;
  local_268.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_268.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_268.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *)
      local_218.Shaders[0] !=
      (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *)
      0x0) {
    local_268.VertexShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
          *)local_218.Shaders[0];
    local_268.VertexShader.ShaderMap = local_218.ShaderMap;
  }
  if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *)
      local_218.Shaders[3] !=
      (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *)
      0x0) {
    local_268.PixelShader.ShaderContent =
         (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
          *)local_218.Shaders[3];
    local_268.PixelShader.ShaderMap = local_218.ShaderMap;
  }
  local_1a8.DepthStencilState = (this->DrawRenderState).DepthStencilState;
  local_1a8.DepthStencilAccess = (this->DrawRenderState).DepthStencilAccess;
  local_1a8._20_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x14;
  local_1a8.ViewUniformBuffer = (this->DrawRenderState).ViewUniformBuffer;
  local_168.RenderTargetsEnabled = 0;
  local_168.RenderTargetFormats.Elements[0] = '\0';
  local_168.RenderTargetFormats.Elements[1] = '\0';
  local_168.RenderTargetFormats.Elements[2] = '\0';
  local_168.RenderTargetFormats.Elements[3] = '\0';
  local_1a8.InstancedViewUniformBuffer = (this->DrawRenderState).InstancedViewUniformBuffer;
  local_1a8.PassUniformBuffer = (this->DrawRenderState).PassUniformBuffer;
  local_1a8.BlendState =
       TStaticStateRHI<TStaticBlendState<1,3,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_168.RenderTargetFlags.Elements[0] = None;
  local_168.RenderTargetFlags.Elements[1] = None;
  local_168.RenderTargetFlags.Elements[4] = None;
  local_168.RenderTargetFlags.Elements[5] = None;
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
  local_1a8.NaniteUniformBuffer = (this->DrawRenderState).NaniteUniformBuffer;
  local_1a8.StencilRef = (this->DrawRenderState).StencilRef;
  local_1a8._60_4_ = *(undefined4 *)&(this->DrawRenderState).field_0x3c;
  local_168.RenderTargetFlags.Elements[2] = None;
  local_168.RenderTargetFlags.Elements[3] = None;
  local_168.RenderTargetFlags.Elements[6] = None;
  local_168.RenderTargetFlags.Elements[7] = None;
  switch(param_6) {
  case BaseColor:
    EVar7 = SRGB|ShaderResource|RenderTargetable;
    EVar6 = PF_B8G8R8A8;
    goto LAB_1458c4bc2;
  case BaseColor_Normal_Specular:
  case BaseColor_Normal_Specular_YCoCg:
  case BaseColor_Normal_Specular_Mask_YCoCg:
    AddRenderTargetInfo(PF_B8G8R8A8,SRGB|ShaderResource|RenderTargetable,&local_168);
  case Mask4:
  case BaseColor_Normal_Roughness:
    AddRenderTargetInfo(PF_B8G8R8A8,ShaderResource|RenderTargetable,&local_168);
    EVar6 = PF_B8G8R8A8;
    break;
  case WorldHeight:
  case Displacement:
    EVar6 = PF_G16;
    break;
  default:
    goto switchD_1458c4b86_default;
  }
  EVar7 = ShaderResource|RenderTargetable;
LAB_1458c4bc2:
  AddRenderTargetInfo(EVar6,EVar7,&local_168);
switchD_1458c4b86_default:
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_1,param_2,&local_1a8,&local_168,&local_268,*param_3,*param_4,PT_TriangleList,
             Default,None,'\0',true,(int)this->_padding_,param_7);
  return;
}

// Process<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> @ 1458c8e00

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
Process<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>
          (FRuntimeVirtualTextureMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3
          ,uchar param_4,FPrimitiveSceneProxy *param_5,FMaterialRenderProxy *param_6,
          FMaterial *param_7)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  FShaderType *pFVar9;
  FVertexFactoryType *pFVar10;
  undefined1 auStackY_248 [32];
  FMeshDrawingPolicyOverrideSettings local_1d0;
  FMaterialRenderProxy *local_1c8;
  ulong64 local_1c0;
  FMeshMaterialShaderElementData local_1b8;
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1a8;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar2 = param_1->VertexFactory;
  local_1c8 = param_6;
  local_1a8.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
       0x0;
  local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
       0x0;
  local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.ShaderType[4] = (FShaderType *)0x0;
  local_e8.ShaderType[5] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  local_1c0 = param_2;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>::
           GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>::
           GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
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
  pFVar10 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = FMaterial::TryGetShaders(param_7,&local_e8,pFVar10,&local_158);
  bVar4 = false;
  if (bVar6) {
    if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
        local_158.Shaders[0] !=
        (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
        0x0) {
      local_1a8.VertexShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>
            *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
        local_158.Shaders[3] !=
        (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor> *)
        0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>
            *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    (this->DrawRenderState).BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_1d0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_7,&local_1d0);
    EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_7,&local_1d0);
    local_1b8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_1b8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_1b8,(FSceneView *)this->_padding_,param_5,param_1,param_3,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,local_1c0,param_5,local_1c8,param_7,
               &this->DrawRenderState,&local_1a8,EVar7,EVar8,
               (FMeshDrawCommandSortKey)
               ((ulonglong)(ushort)(param_5->TranslucencySortPriority + 0x8000) << 0x30 |
               (ulonglong)param_1->MeshIdInPrimitive),Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// Process<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness> @ 1458c90c0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
Process<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
          (FRuntimeVirtualTextureMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3
          ,uchar param_4,FPrimitiveSceneProxy *param_5,FMaterialRenderProxy *param_6,
          FMaterial *param_7)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  FShaderType *pFVar9;
  FVertexFactoryType *pFVar10;
  FRHIBlendState *pFVar11;
  undefined1 auStackY_248 [32];
  FMeshDrawingPolicyOverrideSettings local_1d0;
  FMaterialRenderProxy *local_1c8;
  ulong64 local_1c0;
  FMeshMaterialShaderElementData local_1b8;
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1a8;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar2 = param_1->VertexFactory;
  local_1c8 = param_6;
  local_1a8.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
        *)0x0;
  local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
        *)0x0;
  local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
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
  local_1c0 = param_2;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
           ::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
           ::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
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
  pFVar10 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = FMaterial::TryGetShaders(param_7,&local_e8,pFVar10,&local_158);
  bVar4 = false;
  if (bVar6) {
    if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
         *)local_158.Shaders[0] !=
        (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
         *)0x0) {
      local_1a8.VertexShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
            *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
         *)local_158.Shaders[3] !=
        (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
         *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
            *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    pFVar11 = FMaterialPolicy_BaseColorNormalRoughness::GetBlendState(param_4);
    (this->DrawRenderState).BlendState = pFVar11;
    local_1d0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_7,&local_1d0);
    EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_7,&local_1d0);
    local_1b8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_1b8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_1b8,(FSceneView *)this->_padding_,param_5,param_1,param_3,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,local_1c0,param_5,local_1c8,param_7,
               &this->DrawRenderState,&local_1a8,EVar7,EVar8,
               (FMeshDrawCommandSortKey)
               ((ulonglong)(ushort)(param_5->TranslucencySortPriority + 0x8000) << 0x30 |
               (ulonglong)param_1->MeshIdInPrimitive),Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// Process<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular> @ 1458c9390

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
Process<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
          (FRuntimeVirtualTextureMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3
          ,uchar param_4,FPrimitiveSceneProxy *param_5,FMaterialRenderProxy *param_6,
          FMaterial *param_7)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  FShaderType *pFVar9;
  FVertexFactoryType *pFVar10;
  FRHIBlendState *pFVar11;
  undefined1 auStackY_248 [32];
  FMeshDrawingPolicyOverrideSettings local_1d0;
  FMaterialRenderProxy *local_1c8;
  ulong64 local_1c0;
  FMeshMaterialShaderElementData local_1b8;
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1a8;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar2 = param_1->VertexFactory;
  local_1c8 = param_6;
  local_1a8.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
        *)0x0;
  local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
        *)0x0;
  local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
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
  local_1c0 = param_2;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
           ::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
           ::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
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
  pFVar10 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = FMaterial::TryGetShaders(param_7,&local_e8,pFVar10,&local_158);
  bVar4 = false;
  if (bVar6) {
    if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
         *)local_158.Shaders[0] !=
        (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
         *)0x0) {
      local_1a8.VertexShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
            *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
         *)local_158.Shaders[3] !=
        (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
         *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
            *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    pFVar11 = FMaterialPolicy_BaseColorNormalSpecular::GetBlendState(param_4);
    (this->DrawRenderState).BlendState = pFVar11;
    local_1d0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_7,&local_1d0);
    EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_7,&local_1d0);
    local_1b8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_1b8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_1b8,(FSceneView *)this->_padding_,param_5,param_1,param_3,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,local_1c0,param_5,local_1c8,param_7,
               &this->DrawRenderState,&local_1a8,EVar7,EVar8,
               (FMeshDrawCommandSortKey)
               ((ulonglong)(ushort)(param_5->TranslucencySortPriority + 0x8000) << 0x30 |
               (ulonglong)param_1->MeshIdInPrimitive),Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// Process<RuntimeVirtualTexture::FMaterialPolicy_Displacement> @ 1458c9660

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
Process<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
          (FRuntimeVirtualTextureMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3
          ,uchar param_4,FPrimitiveSceneProxy *param_5,FMaterialRenderProxy *param_6,
          FMaterial *param_7)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  FShaderType *pFVar9;
  FVertexFactoryType *pFVar10;
  undefined1 auStackY_248 [32];
  FMeshDrawingPolicyOverrideSettings local_1d0;
  FMaterialRenderProxy *local_1c8;
  ulong64 local_1c0;
  FMeshMaterialShaderElementData local_1b8;
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1a8;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar2 = param_1->VertexFactory;
  local_1c8 = param_6;
  local_1a8.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement> *
       )0x0;
  local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement> *
       )0x0;
  local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.ShaderType[4] = (FShaderType *)0x0;
  local_e8.ShaderType[5] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  local_1c0 = param_2;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
           ::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
           ::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
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
  pFVar10 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = FMaterial::TryGetShaders(param_7,&local_e8,pFVar10,&local_158);
  bVar4 = false;
  if (bVar6) {
    if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
         *)local_158.Shaders[0] !=
        (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
         *)0x0) {
      local_1a8.VertexShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
            *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
         *)local_158.Shaders[3] !=
        (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
         *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
            *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    (this->DrawRenderState).BlendState =
         TStaticStateRHI<TStaticBlendState<1,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_1d0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_7,&local_1d0);
    EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_7,&local_1d0);
    local_1b8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_1b8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_1b8,(FSceneView *)this->_padding_,param_5,param_1,param_3,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Displacement>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,local_1c0,param_5,local_1c8,param_7,
               &this->DrawRenderState,&local_1a8,EVar7,EVar8,
               (FMeshDrawCommandSortKey)
               ((ulonglong)(ushort)(param_5->TranslucencySortPriority + 0x8000) << 0x30 |
               (ulonglong)param_1->MeshIdInPrimitive),Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// Process<RuntimeVirtualTexture::FMaterialPolicy_Mask4> @ 1458c9920

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
Process<RuntimeVirtualTexture::FMaterialPolicy_Mask4>
          (FRuntimeVirtualTextureMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3
          ,uchar param_4,FPrimitiveSceneProxy *param_5,FMaterialRenderProxy *param_6,
          FMaterial *param_7)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  FShaderType *pFVar9;
  FVertexFactoryType *pFVar10;
  undefined1 auStackY_248 [32];
  FMeshDrawingPolicyOverrideSettings local_1d0;
  FMaterialRenderProxy *local_1c8;
  ulong64 local_1c0;
  FMeshMaterialShaderElementData local_1b8;
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1a8;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar2 = param_1->VertexFactory;
  local_1c8 = param_6;
  local_1a8.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)0x0;
  local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)0x0;
  local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.ShaderType[4] = (FShaderType *)0x0;
  local_e8.ShaderType[5] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  local_1c0 = param_2;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>::
           GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>::
           GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
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
  pFVar10 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = FMaterial::TryGetShaders(param_7,&local_e8,pFVar10,&local_158);
  bVar4 = false;
  if (bVar6) {
    if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)
        local_158.Shaders[0] !=
        (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)0x0)
    {
      local_1a8.VertexShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)
           local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)
        local_158.Shaders[3] !=
        (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)0x0)
    {
      local_1a8.PixelShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4> *)
           local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    (this->DrawRenderState).BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,1,1,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_1d0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_7,&local_1d0);
    EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_7,&local_1d0);
    local_1b8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_1b8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_1b8,(FSceneView *)this->_padding_,param_5,param_1,param_3,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_Mask4>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,local_1c0,param_5,local_1c8,param_7,
               &this->DrawRenderState,&local_1a8,EVar7,EVar8,
               (FMeshDrawCommandSortKey)
               ((ulonglong)(ushort)(param_5->TranslucencySortPriority + 0x8000) << 0x30 |
               (ulonglong)param_1->MeshIdInPrimitive),Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// Process<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> @ 1458c9be0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::
Process<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
          (FRuntimeVirtualTextureMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3
          ,uchar param_4,FPrimitiveSceneProxy *param_5,FMaterialRenderProxy *param_6,
          FMaterial *param_7)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  FShaderType *pFVar9;
  FVertexFactoryType *pFVar10;
  undefined1 auStackY_248 [32];
  FMeshDrawingPolicyOverrideSettings local_1d0;
  FMaterialRenderProxy *local_1c8;
  ulong64 local_1c0;
  FMeshMaterialShaderElementData local_1b8;
  TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1a8;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar2 = param_1->VertexFactory;
  local_1c8 = param_6;
  local_1a8.VertexShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *)
       0x0;
  local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.PixelShader.ShaderContent =
       (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *)
       0x0;
  local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.ShaderType[4] = (FShaderType *)0x0;
  local_e8.ShaderType[5] = (FShaderType *)0x0;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
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
  local_1c0 = param_2;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
           ::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
  local_e8.PermutationId[bVar1] = 0;
  pFVar9 = (FShaderType *)
           FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
           ::GetStaticType();
  bVar1 = (byte)pFVar9->Frequency;
  if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_e8.ShaderType[bVar1] = pFVar9;
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
  pFVar10 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = FMaterial::TryGetShaders(param_7,&local_e8,pFVar10,&local_158);
  bVar4 = false;
  if (bVar6) {
    if ((FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *
        )local_158.Shaders[0] !=
        (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *
        )0x0) {
      local_1a8.VertexShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
            *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *
        )local_158.Shaders[3] !=
        (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight> *
        )0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
            *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    (this->DrawRenderState).BlendState =
         TStaticStateRHI<TStaticBlendState<1,3,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_1d0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar7 = FMeshPassProcessor::ComputeMeshFillMode(param_7,&local_1d0);
    EVar8 = FMeshPassProcessor::ComputeMeshCullMode(param_7,&local_1d0);
    local_1b8.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_1b8.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_1b8,(FSceneView *)this->_padding_,param_5,param_1,param_3,false);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_VS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>,RuntimeVirtualTexture::FShader_VirtualTextureMaterialDraw_PS<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,local_1c0,param_5,local_1c8,param_7,
               &this->DrawRenderState,&local_1a8,EVar7,EVar8,
               (FMeshDrawCommandSortKey)
               ((ulonglong)(ushort)(param_5->TranslucencySortPriority + 0x8000) << 0x30 |
               (ulonglong)param_1->MeshIdInPrimitive),Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// AddMeshBatch @ 1458d9210

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
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::AddMeshBatch
          (FRuntimeVirtualTextureMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  char cVar1;
  uchar uVar2;
  bool bVar3;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar4;
  FMaterialRenderProxy *pFVar5;
  
  if (param_1->bRenderToVirtualTexture != 0) {
    for (pFVar5 = param_1->MaterialRenderProxy; pFVar5 != (FMaterialRenderProxy *)0x0;
        pFVar5 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar5->_padding_ + 0x38))(pFVar5,(int)this->_padding_)) {
      this_00 = (FMaterial *)(**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,(int)this->_padding_);
      if ((this_00 != (FMaterial *)0x0) &&
         (pFVar4 = FMaterial::GetRenderingThreadShaderMap(this_00),
         pFVar4 != (FMaterialShaderMap *)0x0)) {
        cVar1 = (**(code **)(this_00->_padding_ + 0x418))(this_00);
        if (cVar1 == '\0') {
          uVar2 = FMaterial::GetRuntimeVirtualTextureOutputAttibuteMask_RenderThread(this_00);
          if (uVar2 == '\0') {
            return;
          }
        }
        else {
          uVar2 = 0xff;
        }
        switch(param_1->RuntimeVirtualTextureMaterialType) {
        case 0:
          bVar3 = Process<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>
                            (this,param_1,param_2,param_4,uVar2,param_3,pFVar5,this_00);
          break;
        case 1:
          bVar3 = Process<RuntimeVirtualTexture::FMaterialPolicy_Mask4>
                            (this,param_1,param_2,param_4,uVar2,param_3,pFVar5,this_00);
          break;
        case 2:
          bVar3 = Process<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
                            (this,param_1,param_2,param_4,uVar2,param_3,pFVar5,this_00);
          break;
        default:
          bVar3 = Process<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
                            (this,param_1,param_2,param_4,uVar2,param_3,pFVar5,this_00);
          break;
        case 6:
          bVar3 = Process<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
                            (this,param_1,param_2,param_4,uVar2,param_3,pFVar5,this_00);
          break;
        case 7:
          bVar3 = Process<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
                            (this,param_1,param_2,param_4,uVar2,param_3,pFVar5,this_00);
        }
        if (bVar3 != false) {
          return;
        }
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 1458e1740

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
RuntimeVirtualTexture::FRuntimeVirtualTextureMeshProcessor::CollectPSOInitializers
          (FRuntimeVirtualTextureMeshProcessor *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  char cVar1;
  uchar uVar2;
  ERasterizerCullMode local_res18 [4];
  ERasterizerFillMode local_28 [2];
  FMeshDrawingPolicyOverrideSettings local_20;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x418))(param_2);
  if (cVar1 == '\0') {
    uVar2 = FMaterial::GetRuntimeVirtualTextureOutputAttibuteMask_GameThread(param_2);
    if (uVar2 == '\0') {
      return;
    }
  }
  else {
    uVar2 = 0xff;
  }
  local_20 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
  local_28[0] = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_20);
  local_res18[0] = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_20);
  CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_BaseColor>
            (this,param_3,param_2,local_28,local_res18,uVar2,BaseColor,param_5);
  CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalRoughness>
            (this,param_3,param_2,local_28,local_res18,uVar2,BaseColor_Normal_Roughness,param_5);
  CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_BaseColorNormalSpecular>
            (this,param_3,param_2,local_28,local_res18,uVar2,BaseColor_Normal_Specular,param_5);
  CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_Mask4>
            (this,param_3,param_2,local_28,local_res18,uVar2,BaseColor,param_5);
  CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_WorldHeight>
            (this,param_3,param_2,local_28,local_res18,uVar2,WorldHeight,param_5);
  CollectPSOInitializersInternal<RuntimeVirtualTexture::FMaterialPolicy_Displacement>
            (this,param_3,param_2,local_28,local_res18,uVar2,Displacement,param_5);
  return;
}


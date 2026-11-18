// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// TemplatedProcess<FRenderVolumetricCloudRenderViewPs<1>_> @ 145855520

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
FVolumetricCloudRenderViewMeshProcessor::TemplatedProcess<FRenderVolumetricCloudRenderViewPs<1>_>
          (FVolumetricCloudRenderViewMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<1>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
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
  pFVar7 = (FShaderType *)FRenderVolumetricCloudRenderViewPs<1>::GetStaticType();
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
    local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
    local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.PixelShader.ShaderContent = (FRenderVolumetricCloudRenderViewPs<1> *)0x0;
    local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FMeshMaterialShader *)local_158.Shaders[3] != (FMeshMaterialShader *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FRenderVolumetricCloudRenderViewPs<1> *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<1>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,FVar9,Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// TemplatedProcess<FRenderVolumetricCloudRenderViewPs<2>_> @ 1458557a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
FVolumetricCloudRenderViewMeshProcessor::TemplatedProcess<FRenderVolumetricCloudRenderViewPs<2>_>
          (FVolumetricCloudRenderViewMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
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
  pFVar7 = (FShaderType *)FRenderVolumetricCloudRenderViewPs<2>::GetStaticType();
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
    local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
    local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.PixelShader.ShaderContent = (FRenderVolumetricCloudRenderViewPs<2> *)0x0;
    local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FMeshMaterialShader *)local_158.Shaders[3] != (FMeshMaterialShader *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FRenderVolumetricCloudRenderViewPs<2> *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<2>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,FVar9,Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// TemplatedProcess<FRenderVolumetricCloudRenderViewPs<3>_> @ 145855a20

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
FVolumetricCloudRenderViewMeshProcessor::TemplatedProcess<FRenderVolumetricCloudRenderViewPs<3>_>
          (FVolumetricCloudRenderViewMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<3>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
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
  pFVar7 = (FShaderType *)FRenderVolumetricCloudRenderViewPs<3>::GetStaticType();
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
    local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
    local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.PixelShader.ShaderContent = (FRenderVolumetricCloudRenderViewPs<3> *)0x0;
    local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FMeshMaterialShader *)local_158.Shaders[3] != (FMeshMaterialShader *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FRenderVolumetricCloudRenderViewPs<3> *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<3>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,FVar9,Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// TemplatedProcess<FRenderVolumetricCloudRenderViewPs<4>_> @ 145855ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
FVolumetricCloudRenderViewMeshProcessor::TemplatedProcess<FRenderVolumetricCloudRenderViewPs<4>_>
          (FVolumetricCloudRenderViewMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<4>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
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
  pFVar7 = (FShaderType *)FRenderVolumetricCloudRenderViewPs<4>::GetStaticType();
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
    local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
    local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.PixelShader.ShaderContent = (FRenderVolumetricCloudRenderViewPs<4> *)0x0;
    local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FMeshMaterialShader *)local_158.Shaders[3] != (FMeshMaterialShader *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FRenderVolumetricCloudRenderViewPs<4> *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<4>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,FVar9,Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// TemplatedProcess<FRenderVolumetricCloudRenderViewPs<5>_> @ 145855f20

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
FVolumetricCloudRenderViewMeshProcessor::TemplatedProcess<FRenderVolumetricCloudRenderViewPs<5>_>
          (FVolumetricCloudRenderViewMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<5>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
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
  pFVar7 = (FShaderType *)FRenderVolumetricCloudRenderViewPs<5>::GetStaticType();
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
    local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
    local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.PixelShader.ShaderContent = (FRenderVolumetricCloudRenderViewPs<5> *)0x0;
    local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FMeshMaterialShader *)local_158.Shaders[3] != (FMeshMaterialShader *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FRenderVolumetricCloudRenderViewPs<5> *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<5>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,FVar9,Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// TemplatedProcess<FRenderVolumetricCloudRenderViewPs<6>_> @ 1458561a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
FVolumetricCloudRenderViewMeshProcessor::TemplatedProcess<FRenderVolumetricCloudRenderViewPs<6>_>
          (FVolumetricCloudRenderViewMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<6>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
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
  pFVar7 = (FShaderType *)FRenderVolumetricCloudRenderViewPs<6>::GetStaticType();
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
    local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
    local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.PixelShader.ShaderContent = (FRenderVolumetricCloudRenderViewPs<6> *)0x0;
    local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FMeshMaterialShader *)local_158.Shaders[3] != (FMeshMaterialShader *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FRenderVolumetricCloudRenderViewPs<6> *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<6>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,FVar9,Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// TemplatedProcess<FRenderVolumetricCloudRenderViewPs<7>_> @ 145856420

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
FVolumetricCloudRenderViewMeshProcessor::TemplatedProcess<FRenderVolumetricCloudRenderViewPs<7>_>
          (FVolumetricCloudRenderViewMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<7>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
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
  pFVar7 = (FShaderType *)FRenderVolumetricCloudRenderViewPs<7>::GetStaticType();
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
    local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
    local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.PixelShader.ShaderContent = (FRenderVolumetricCloudRenderViewPs<7> *)0x0;
    local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FMeshMaterialShader *)local_158.Shaders[3] != (FMeshMaterialShader *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FRenderVolumetricCloudRenderViewPs<7> *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<7>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,FVar9,Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// TemplatedProcess<FRenderVolumetricCloudRenderViewPs<0>_> @ 1458566a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
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
FVolumetricCloudRenderViewMeshProcessor::TemplatedProcess<FRenderVolumetricCloudRenderViewPs<0>_>
          (FVolumetricCloudRenderViewMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
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
  TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<0>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
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
  pFVar7 = (FShaderType *)FRenderVolumetricCloudRenderViewPs<0>::GetStaticType();
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
    local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)0x0;
    local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.PixelShader.ShaderContent = (FRenderVolumetricCloudRenderViewPs<0> *)0x0;
    local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_1a8.VertexShader.ShaderContent = (FRenderVolumetricCloudVS *)local_158.Shaders[0];
      local_1a8.VertexShader.ShaderMap = local_158.ShaderMap;
    }
    if ((FMeshMaterialShader *)local_158.Shaders[3] != (FMeshMaterialShader *)0x0) {
      local_1a8.PixelShader.ShaderContent =
           (FRenderVolumetricCloudRenderViewPs<0> *)local_158.Shaders[3];
      local_1a8.PixelShader.ShaderMap = local_158.ShaderMap;
    }
    FVar9 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FRenderVolumetricCloudVS,FRenderVolumetricCloudRenderViewPs<0>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_5,
               &this->PassDrawRenderState,&local_1a8,param_7,param_8,FVar9,Default,&local_1b8);
    bVar4 = true;
  }
  return bVar4;
}

// AddMeshBatch @ 145861470

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
FVolumetricCloudRenderViewMeshProcessor::AddMeshBatch
          (FVolumetricCloudRenderViewMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  FMaterial *pFVar3;
  FMaterialRenderProxy *pFVar4;
  
  pFVar4 = param_1->MaterialRenderProxy;
  do {
    if (pFVar4 == (FMaterialRenderProxy *)0x0) {
      return;
    }
    pFVar3 = (FMaterial *)(**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,(int)this->_padding_);
    if (pFVar3 != (FMaterial *)0x0) {
      iVar2 = (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3);
      if (iVar2 != 3) {
        return;
      }
      bVar1 = this->bVolumetricCloudPerSampleAtmosphereTransmittance;
      if (this->bVolumetricCloudSecondLight == false) {
        if (this->bVolumetricCloudSampleLightShadowmap == false) {
          if (bVar1 == false) {
            bVar1 = TemplatedProcess<FRenderVolumetricCloudRenderViewPs<0>_>
                              (this,param_1,param_2,param_3,pFVar4,pFVar3,param_4,
                               ERasterizerFillMode_NumBits,CM_None);
          }
          else {
            bVar1 = TemplatedProcess<FRenderVolumetricCloudRenderViewPs<1>_>
                              (this,param_1,param_2,param_3,pFVar4,pFVar3,param_4,
                               ERasterizerFillMode_NumBits,CM_None);
          }
        }
        else if (bVar1 == false) {
          bVar1 = TemplatedProcess<FRenderVolumetricCloudRenderViewPs<2>_>
                            (this,param_1,param_2,param_3,pFVar4,pFVar3,param_4,
                             ERasterizerFillMode_NumBits,CM_None);
        }
        else {
          bVar1 = TemplatedProcess<FRenderVolumetricCloudRenderViewPs<3>_>
                            (this,param_1,param_2,param_3,pFVar4,pFVar3,param_4,
                             ERasterizerFillMode_NumBits,CM_None);
        }
      }
      else if (this->bVolumetricCloudSampleLightShadowmap == false) {
        if (bVar1 == false) {
          bVar1 = TemplatedProcess<FRenderVolumetricCloudRenderViewPs<4>_>
                            (this,param_1,param_2,param_3,pFVar4,pFVar3,param_4,
                             ERasterizerFillMode_NumBits,CM_None);
        }
        else {
          bVar1 = TemplatedProcess<FRenderVolumetricCloudRenderViewPs<5>_>
                            (this,param_1,param_2,param_3,pFVar4,pFVar3,param_4,
                             ERasterizerFillMode_NumBits,CM_None);
        }
      }
      else if (bVar1 == false) {
        bVar1 = TemplatedProcess<FRenderVolumetricCloudRenderViewPs<6>_>
                          (this,param_1,param_2,param_3,pFVar4,pFVar3,param_4,
                           ERasterizerFillMode_NumBits,CM_None);
      }
      else {
        bVar1 = TemplatedProcess<FRenderVolumetricCloudRenderViewPs<7>_>
                          (this,param_1,param_2,param_3,pFVar4,pFVar3,param_4,
                           ERasterizerFillMode_NumBits,CM_None);
      }
      if (bVar1 != false) {
        return;
      }
    }
    pFVar4 = (FMaterialRenderProxy *)
             (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4,(int)this->_padding_);
  } while( true );
}


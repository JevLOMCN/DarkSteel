// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS> @ 1449926a0

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
FHairRasterMeshProcessor::Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS>
          (FHairRasterMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
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
  longlong lVar9;
  undefined1 auStackY_288 [32];
  FHashedName local_218;
  FMaterialRenderProxy *local_210;
  ulong64 local_208;
  FMeshMaterialShaderElementData local_200;
  TMeshProcessorShaders<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1e8;
  FMaterialShaders local_198;
  FMeshPassProcessorRenderState local_128;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar2 = param_1->VertexFactory;
  local_210 = param_5;
  local_208 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FHashedName::FHashedName(&local_218,L"FHairStrandsVertexFactory");
      `private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l2::CompatibleVF = FVertexFactoryType::GetVFByName(&local_218);
      _Init_thread_footer(&`private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
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
  pFVar7 = (FShaderType *)FDeepShadowDepthMeshVS::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
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
  local_e8.ShaderType[bVar1] = pFVar7;
  local_e8.PermutationId[bVar1] = 0;
  pFVar7 = (FShaderType *)FDeepShadowDepthMeshPS::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
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
  local_e8.ShaderType[bVar1] = pFVar7;
  local_e8.PermutationId[bVar1] = 0;
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
  pFVar8 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar8,&local_198);
  bVar4 = false;
  if (bVar6) {
    local_1e8.VertexShader.ShaderContent = (FDeepShadowDepthMeshVS *)0x0;
    local_1e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1e8.PixelShader.ShaderContent = (FDeepShadowDepthMeshPS *)0x0;
    local_1e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
    lVar9 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
    if (*(ulong64 *)(lVar9 + 0x30) ==
        (`private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
         ::__l2::CompatibleVF->HashedName).Hash) {
      if ((FDeepShadowDepthMeshVS *)local_198.Shaders[0] != (FDeepShadowDepthMeshVS *)0x0) {
        local_1e8.VertexShader.ShaderContent = (FDeepShadowDepthMeshVS *)local_198.Shaders[0];
        local_1e8.VertexShader.ShaderMap = local_198.ShaderMap;
      }
      if ((FDeepShadowDepthMeshPS *)local_198.Shaders[3] != (FDeepShadowDepthMeshPS *)0x0) {
        local_1e8.PixelShader.ShaderContent = (FDeepShadowDepthMeshPS *)local_198.Shaders[3];
        local_1e8.PixelShader.ShaderMap = local_198.ShaderMap;
      }
      local_128.BlendState = (this->PassDrawRenderState).BlendState;
      local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
      local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
      local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
      local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
      local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
      local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
      local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
      local_128.StencilRef = (this->PassDrawRenderState).StencilRef;
      local_128._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
      local_200.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
      local_200.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
      FMeshMaterialShaderElementData::InitializeMeshMaterialData
                (&local_200,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
      FMeshPassProcessor::
      BuildMeshDrawCommands<TMeshProcessorShaders<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                ((FMeshPassProcessor *)this,param_1,local_208,param_3,local_210,param_6,&local_128,
                 &local_1e8,param_7,param_8,FMeshDrawCommandSortKey::Default,Default,&local_200);
    }
    bVar4 = true;
  }
  return bVar4;
}

// Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS> @ 144992a00

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
FHairRasterMeshProcessor::Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS>
          (FHairRasterMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
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
  longlong lVar9;
  undefined1 auStackY_288 [32];
  FHashedName local_218;
  FMaterialRenderProxy *local_210;
  ulong64 local_208;
  FMeshMaterialShaderElementData local_200;
  TMeshProcessorShaders<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1e8;
  FMaterialShaders local_198;
  FMeshPassProcessorRenderState local_128;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar2 = param_1->VertexFactory;
  local_210 = param_5;
  local_208 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FHashedName::FHashedName(&local_218,L"FHairStrandsVertexFactory");
      `private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l2::CompatibleVF = FVertexFactoryType::GetVFByName(&local_218);
      _Init_thread_footer(&`private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
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
  pFVar7 = (FShaderType *)FDeepShadowDomMeshVS::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
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
  local_e8.ShaderType[bVar1] = pFVar7;
  local_e8.PermutationId[bVar1] = 0;
  pFVar7 = (FShaderType *)FDeepShadowDomMeshPS::GetStaticType();
  bVar1 = (byte)pFVar7->Frequency;
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
  local_e8.ShaderType[bVar1] = pFVar7;
  local_e8.PermutationId[bVar1] = 0;
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
  pFVar8 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar6 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar8,&local_198);
  bVar4 = false;
  if (bVar6) {
    local_1e8.VertexShader.ShaderContent = (FDeepShadowDomMeshVS *)0x0;
    local_1e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1e8.PixelShader.ShaderContent = (FDeepShadowDomMeshPS *)0x0;
    local_1e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
    lVar9 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
    if (*(ulong64 *)(lVar9 + 0x30) ==
        (`private:_bool___cdecl_FHairRasterMeshProcessor::Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
         ::__l2::CompatibleVF->HashedName).Hash) {
      if ((FDeepShadowDomMeshVS *)local_198.Shaders[0] != (FDeepShadowDomMeshVS *)0x0) {
        local_1e8.VertexShader.ShaderContent = (FDeepShadowDomMeshVS *)local_198.Shaders[0];
        local_1e8.VertexShader.ShaderMap = local_198.ShaderMap;
      }
      if ((FDeepShadowDomMeshPS *)local_198.Shaders[3] != (FDeepShadowDomMeshPS *)0x0) {
        local_1e8.PixelShader.ShaderContent = (FDeepShadowDomMeshPS *)local_198.Shaders[3];
        local_1e8.PixelShader.ShaderMap = local_198.ShaderMap;
      }
      local_128.BlendState = (this->PassDrawRenderState).BlendState;
      local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
      local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
      local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
      local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
      local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
      local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
      local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
      local_128.StencilRef = (this->PassDrawRenderState).StencilRef;
      local_128._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
      local_200.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
      local_200.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
      FMeshMaterialShaderElementData::InitializeMeshMaterialData
                (&local_200,(FSceneView *)this->_padding_,param_3,param_1,param_4,false);
      FMeshPassProcessor::
      BuildMeshDrawCommands<TMeshProcessorShaders<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
                ((FMeshPassProcessor *)this,param_1,local_208,param_3,local_210,param_6,&local_128,
                 &local_1e8,param_7,param_8,FMeshDrawCommandSortKey::Default,Default,&local_200);
    }
    bVar4 = true;
  }
  return bVar4;
}

// FHairRasterMeshProcessor @ 14499e0f0

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

FHairRasterMeshProcessor * __thiscall
FHairRasterMeshProcessor::FHairRasterMeshProcessor
          (FHairRasterMeshProcessor *this,FScene *param_1,FSceneView *param_2,
          FMeshPassProcessorRenderState *param_3,FDynamicPassMeshDrawListContext *param_4,
          EHairStrandsRasterPassType param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,Num,param_1,*(Type *)&param_1->field_0x8,param_2,
             (FMeshPassDrawListContext *)param_4);
  this->_padding_ = (longlong)&___7FHairRasterMeshProcessor__6B_;
  this->RasterPassType = param_5;
  pFVar1 = param_3->DepthStencilState;
  (this->PassDrawRenderState).BlendState = param_3->BlendState;
  (this->PassDrawRenderState).DepthStencilState = pFVar1;
  uVar3 = *(undefined4 *)&param_3->field_0x14;
  pFVar2 = param_3->ViewUniformBuffer;
  (this->PassDrawRenderState).DepthStencilAccess = param_3->DepthStencilAccess;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x14 = uVar3;
  (this->PassDrawRenderState).ViewUniformBuffer = pFVar2;
  pFVar2 = param_3->PassUniformBuffer;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = param_3->InstancedViewUniformBuffer;
  (this->PassDrawRenderState).PassUniformBuffer = pFVar2;
  uVar4 = param_3->StencilRef;
  uVar3 = *(undefined4 *)&param_3->field_0x3c;
  (this->PassDrawRenderState).NaniteUniformBuffer = param_3->NaniteUniformBuffer;
  (this->PassDrawRenderState).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar3;
  return this;
}

// AddMeshBatch @ 1449bce00

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

void __thiscall
FHairRasterMeshProcessor::AddMeshBatch
          (FHairRasterMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,bool param_5)

{
  bool bVar1;
  int iVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  FMaterial *pFVar5;
  FMaterialRenderProxy *pFVar6;
  FMeshDrawingPolicyOverrideSettings local_res10;
  
  pFVar6 = param_1->MaterialRenderProxy;
  do {
    if (pFVar6 == (FMaterialRenderProxy *)0x0) {
      return;
    }
    pFVar5 = (FMaterial *)(**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,(int)this->_padding_);
    if (pFVar5 != (FMaterial *)0x0) {
      bVar1 = IsCompatibleWithHairStrands(pFVar5,(Type)this->_padding_);
      if (!bVar1) {
        return;
      }
      if (param_3 != (FPrimitiveSceneProxy *)0x0) {
        if (((this->RasterPassType == FrontDepth) || (this->RasterPassType == DeepOpacityMap)) &&
           (param_3->bCastDynamicShadow == '\0')) {
          return;
        }
        if (param_3->bRenderInMainPass == '\0') {
          return;
        }
      }
      iVar2 = (**(code **)(pFVar5->_padding_ + 0x40))(pFVar5);
      if (iVar2 == 3) {
        return;
      }
      local_res10 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
      EVar3 = FMeshPassProcessor::ComputeMeshFillMode(pFVar5,&local_res10);
      if (this->RasterPassType == FrontDepth) {
        EVar4 = FMeshPassProcessor::ComputeMeshCullMode(pFVar5,&local_res10);
      }
      else {
        EVar4 = CM_None;
      }
      if (this->RasterPassType == FrontDepth) {
        bVar1 = Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS>
                          (this,param_1,param_2,param_3,param_4,pFVar6,pFVar5,EVar3,EVar4);
      }
      else {
        if (this->RasterPassType != DeepOpacityMap) {
          return;
        }
        bVar1 = Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS>
                          (this,param_1,param_2,param_3,param_4,pFVar6,pFVar5,EVar3,EVar4);
      }
      if (bVar1 != false) {
        return;
      }
    }
    pFVar6 = (FMaterialRenderProxy *)
             (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6,(int)this->_padding_);
  } while( true );
}

// AddMeshBatch @ 1449bcf90

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
FHairRasterMeshProcessor::AddMeshBatch
          (FHairRasterMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  AddMeshBatch(this,param_1,param_2,param_3,param_4,false);
  return;
}

// TryAddMeshBatch @ 144a08410

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

bool __thiscall
FHairRasterMeshProcessor::TryAddMeshBatch
          (FHairRasterMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  bool bVar1;
  int iVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  FMeshDrawingPolicyOverrideSettings local_res8;
  
  bVar1 = IsCompatibleWithHairStrands(param_6,(Type)this->_padding_);
  if ((bVar1) &&
     (((param_3 == (FPrimitiveSceneProxy *)0x0 ||
       ((((this->RasterPassType != FrontDepth && (this->RasterPassType != DeepOpacityMap)) ||
         (param_3->bCastDynamicShadow != '\0')) && (param_3->bRenderInMainPass != '\0')))) &&
      (iVar2 = (**(code **)(param_6->_padding_ + 0x40))(param_6), iVar2 != 3)))) {
    local_res8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar3 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_res8);
    if (this->RasterPassType == FrontDepth) {
      EVar4 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_res8);
    }
    else {
      EVar4 = CM_None;
    }
    if (this->RasterPassType == FrontDepth) {
      bVar1 = Process<FDeepShadowDepthMeshVS,FDeepShadowDepthMeshPS>
                        (this,param_1,param_2,param_3,param_4,param_5,param_6,EVar3,EVar4);
      return bVar1;
    }
    if (this->RasterPassType == DeepOpacityMap) {
      bVar1 = Process<FDeepShadowDomMeshVS,FDeepShadowDomMeshPS>
                        (this,param_1,param_2,param_3,param_4,param_5,param_6,EVar3,EVar4);
      return bVar1;
    }
  }
  return true;
}


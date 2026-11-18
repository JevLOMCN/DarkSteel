// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// Process<1> @ 14574d120

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FTranslucencyDepthPassMeshProcessor::Process<1>
          (FTranslucencyDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3
          ,FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          float param_7,ERasterizerFillMode param_8,ERasterizerCullMode param_9)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  FVertexFactory *pFVar4;
  code *pcVar5;
  TTranslucencyShadowDepthVS<1> *pTVar6;
  TTranslucencyShadowDepthPS<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  FShaderType *pFVar11;
  FVertexFactoryType *pFVar12;
  TVector<double> *pTVar13;
  FMeshDrawCommandSortKey FVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_2a8 [32];
  FTranslucencyDepthShaderElementData local_220;
  TMeshProcessorShaders<TTranslucencyShadowDepthVS<1>,TTranslucencyShadowDepthPS<1>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_208;
  FMaterialShaders local_1b8;
  FMeshPassProcessorRenderState local_148;
  TVector<double> local_108;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pFVar4 = param_1->VertexFactory;
  local_208.VertexShader.ShaderContent = (TTranslucencyShadowDepthVS<1> *)0x0;
  local_208.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_208.PixelShader.ShaderContent = (TTranslucencyShadowDepthPS<1> *)0x0;
  local_208.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_208.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_208.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_208.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_208.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_208.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_208.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
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
  pFVar11 = (FShaderType *)TTranslucencyShadowDepthVS<1>::GetStaticType();
  bVar3 = (byte)pFVar11->Frequency;
  if ((local_e8.ShaderType[bVar3] != (FShaderType *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_e8.ShaderType[bVar3] = pFVar11;
  local_e8.PermutationId[bVar3] = 0;
  pFVar11 = (FShaderType *)TTranslucencyShadowDepthPS<1>::GetStaticType();
  bVar3 = (byte)pFVar11->Frequency;
  if ((local_e8.ShaderType[bVar3] != (FShaderType *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_e8.ShaderType[bVar3] = pFVar11;
  local_e8.PermutationId[bVar3] = 0;
  pFVar12 = (FVertexFactoryType *)(**(code **)(pFVar4->_padding_ + 0x30))(pFVar4);
  local_1b8.ShaderMap = (FShaderMapBase *)0x0;
  local_1b8.Pipeline = (FShaderPipeline *)0x0;
  local_1b8.Shaders[0] = (FShader *)0x0;
  local_1b8.Shaders[1] = (FShader *)0x0;
  local_1b8.Shaders[2] = (FShader *)0x0;
  local_1b8.Shaders[3] = (FShader *)0x0;
  local_1b8.Shaders[4] = (FShader *)0x0;
  local_1b8.Shaders[5] = (FShader *)0x0;
  local_1b8.Shaders[6] = (FShader *)0x0;
  local_1b8.Shaders[7] = (FShader *)0x0;
  local_1b8.Shaders[8] = (FShader *)0x0;
  local_1b8.Shaders[9] = (FShader *)0x0;
  local_1b8.Shaders[10] = (FShader *)0x0;
  local_1b8.Shaders[0xb] = (FShader *)0x0;
  bVar10 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar12,&local_1b8);
  bVar8 = false;
  if (bVar10) {
    if ((FMeshMaterialShader *)local_1b8.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_208.VertexShader.ShaderContent = (TTranslucencyShadowDepthVS<1> *)local_1b8.Shaders[0];
      local_208.VertexShader.ShaderMap = local_1b8.ShaderMap;
    }
    pTVar6 = local_208.VertexShader.ShaderContent;
    if ((TTranslucencyShadowDepthPS<1> *)local_1b8.Shaders[3] !=
        (TTranslucencyShadowDepthPS<1> *)0x0) {
      local_208.PixelShader.ShaderContent = (TTranslucencyShadowDepthPS<1> *)local_1b8.Shaders[3];
      local_208.PixelShader.ShaderMap = local_1b8.ShaderMap;
    }
    pTVar7 = local_208.PixelShader.ShaderContent;
    local_148.BlendState = (this->PassDrawRenderState).BlendState;
    local_148.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_148.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_148._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_148.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_148.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_148.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_148.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_148.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_148._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    local_220._padding_ = 0;
    local_220._padding_ = 0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_220,(FSceneView *)this->_padding_,param_4,
               param_1,param_3,false);
    pTVar13 = UE::Math::TMatrix<double>::GetScaleVector
                        (&this->ShadowInfo->ParentSceneInfo->Proxy->LocalToWorld,&local_108,
                         __real_3e45798ee0000000);
    dVar1 = *(double *)((longlong)&pTVar13->field0_0x0 + 8);
    uVar15 = SUB84(dVar1,0);
    uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)&pTVar13->field0_0x0;
    if (dVar1 <= dVar2) {
      uVar15 = SUB84(dVar2,0);
      uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar1 = *(double *)((longlong)&pTVar13->field0_0x0 + 0x10);
    if ((double)CONCAT44(uVar16,uVar15) <= dVar1) {
      uVar15 = SUB84(dVar1,0);
      uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    local_220.TranslucentShadowStartOffset =
         ((float)(double)CONCAT44(uVar16,uVar15) * param_7) /
         (this->ShadowInfo->MaxSubjectZ - this->ShadowInfo->MinSubjectZ);
    FVar14 = CalculateMeshStaticSortKey((FMeshMaterialShader *)pTVar6,(FMeshMaterialShader *)pTVar7)
    ;
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TTranslucencyShadowDepthVS<1>,TTranslucencyShadowDepthPS<1>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FTranslucencyDepthShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,&local_148,
               &local_208,param_8,param_9,FVar14,Default,&local_220);
    bVar8 = true;
  }
  return bVar8;
}

// Process<0> @ 14574d460

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FTranslucencyDepthPassMeshProcessor::Process<0>
          (FTranslucencyDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3
          ,FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          float param_7,ERasterizerFillMode param_8,ERasterizerCullMode param_9)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  FVertexFactory *pFVar4;
  code *pcVar5;
  TTranslucencyShadowDepthVS<0> *pTVar6;
  TTranslucencyShadowDepthPS<0> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  FShaderType *pFVar11;
  FVertexFactoryType *pFVar12;
  TVector<double> *pTVar13;
  FMeshDrawCommandSortKey FVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_2a8 [32];
  FTranslucencyDepthShaderElementData local_220;
  TMeshProcessorShaders<TTranslucencyShadowDepthVS<0>,TTranslucencyShadowDepthPS<0>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_208;
  FMaterialShaders local_1b8;
  FMeshPassProcessorRenderState local_148;
  TVector<double> local_108;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pFVar4 = param_1->VertexFactory;
  local_208.VertexShader.ShaderContent = (TTranslucencyShadowDepthVS<0> *)0x0;
  local_208.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_208.PixelShader.ShaderContent = (TTranslucencyShadowDepthPS<0> *)0x0;
  local_208.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_208.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_208.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_208.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_208.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_208.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_208.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
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
  pFVar11 = (FShaderType *)TTranslucencyShadowDepthVS<0>::GetStaticType();
  bVar3 = (byte)pFVar11->Frequency;
  if ((local_e8.ShaderType[bVar3] != (FShaderType *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_e8.ShaderType[bVar3] = pFVar11;
  local_e8.PermutationId[bVar3] = 0;
  pFVar11 = (FShaderType *)TTranslucencyShadowDepthPS<0>::GetStaticType();
  bVar3 = (byte)pFVar11->Frequency;
  if ((local_e8.ShaderType[bVar3] != (FShaderType *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  local_e8.ShaderType[bVar3] = pFVar11;
  local_e8.PermutationId[bVar3] = 0;
  pFVar12 = (FVertexFactoryType *)(**(code **)(pFVar4->_padding_ + 0x30))(pFVar4);
  local_1b8.ShaderMap = (FShaderMapBase *)0x0;
  local_1b8.Pipeline = (FShaderPipeline *)0x0;
  local_1b8.Shaders[0] = (FShader *)0x0;
  local_1b8.Shaders[1] = (FShader *)0x0;
  local_1b8.Shaders[2] = (FShader *)0x0;
  local_1b8.Shaders[3] = (FShader *)0x0;
  local_1b8.Shaders[4] = (FShader *)0x0;
  local_1b8.Shaders[5] = (FShader *)0x0;
  local_1b8.Shaders[6] = (FShader *)0x0;
  local_1b8.Shaders[7] = (FShader *)0x0;
  local_1b8.Shaders[8] = (FShader *)0x0;
  local_1b8.Shaders[9] = (FShader *)0x0;
  local_1b8.Shaders[10] = (FShader *)0x0;
  local_1b8.Shaders[0xb] = (FShader *)0x0;
  bVar10 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar12,&local_1b8);
  bVar8 = false;
  if (bVar10) {
    if ((FMeshMaterialShader *)local_1b8.Shaders[0] != (FMeshMaterialShader *)0x0) {
      local_208.VertexShader.ShaderContent = (TTranslucencyShadowDepthVS<0> *)local_1b8.Shaders[0];
      local_208.VertexShader.ShaderMap = local_1b8.ShaderMap;
    }
    pTVar6 = local_208.VertexShader.ShaderContent;
    if ((TTranslucencyShadowDepthPS<0> *)local_1b8.Shaders[3] !=
        (TTranslucencyShadowDepthPS<0> *)0x0) {
      local_208.PixelShader.ShaderContent = (TTranslucencyShadowDepthPS<0> *)local_1b8.Shaders[3];
      local_208.PixelShader.ShaderMap = local_1b8.ShaderMap;
    }
    pTVar7 = local_208.PixelShader.ShaderContent;
    local_148.BlendState = (this->PassDrawRenderState).BlendState;
    local_148.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_148.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_148._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_148.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_148.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_148.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_148.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_148.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_148._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    local_220._padding_ = 0;
    local_220._padding_ = 0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_220,(FSceneView *)this->_padding_,param_4,
               param_1,param_3,false);
    pTVar13 = UE::Math::TMatrix<double>::GetScaleVector
                        (&this->ShadowInfo->ParentSceneInfo->Proxy->LocalToWorld,&local_108,
                         __real_3e45798ee0000000);
    dVar1 = *(double *)((longlong)&pTVar13->field0_0x0 + 8);
    uVar15 = SUB84(dVar1,0);
    uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)&pTVar13->field0_0x0;
    if (dVar1 <= dVar2) {
      uVar15 = SUB84(dVar2,0);
      uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar1 = *(double *)((longlong)&pTVar13->field0_0x0 + 0x10);
    if ((double)CONCAT44(uVar16,uVar15) <= dVar1) {
      uVar15 = SUB84(dVar1,0);
      uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    local_220.TranslucentShadowStartOffset =
         ((float)(double)CONCAT44(uVar16,uVar15) * param_7) /
         (this->ShadowInfo->MaxSubjectZ - this->ShadowInfo->MinSubjectZ);
    FVar14 = CalculateMeshStaticSortKey((FMeshMaterialShader *)pTVar6,(FMeshMaterialShader *)pTVar7)
    ;
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TTranslucencyShadowDepthVS<0>,TTranslucencyShadowDepthPS<0>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FTranslucencyDepthShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,&local_148,
               &local_208,param_8,param_9,FVar14,Default,&local_220);
    bVar8 = true;
  }
  return bVar8;
}

// FTranslucencyDepthPassMeshProcessor @ 14574f080

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FTranslucencyDepthPassMeshProcessor * __thiscall
FTranslucencyDepthPassMeshProcessor::FTranslucencyDepthPassMeshProcessor
          (FTranslucencyDepthPassMeshProcessor *this,FScene *param_1,FSceneView *param_2,
          FMeshPassProcessorRenderState *param_3,FProjectedShadowInfo *param_4,
          FMeshPassDrawListContext *param_5)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,Num,param_1,*(Type *)&param_1->field_0x8,param_2,param_5);
  this->_padding_ = (longlong)&___7FTranslucencyDepthPassMeshProcessor__6B_;
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
  pFVar2 = param_3->NaniteUniformBuffer;
  uVar4 = param_3->StencilRef;
  uVar3 = *(undefined4 *)&param_3->field_0x3c;
  this->ShadowInfo = param_4;
  (this->PassDrawRenderState).NaniteUniformBuffer = pFVar2;
  (this->PassDrawRenderState).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar3;
  this->bDirectionalLight = param_4->bDirectionalLight;
  return this;
}

// AddMeshBatch @ 145757350

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FTranslucencyDepthPassMeshProcessor::AddMeshBatch
          (FTranslucencyDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  int iVar5;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar6;
  FMaterialRenderProxy *pFVar7;
  float fVar8;
  FMeshDrawingPolicyOverrideSettings local_58 [4];
  
  if (param_1->CastShadow != 0) {
    for (pFVar7 = param_1->MaterialRenderProxy; pFVar7 != (FMaterialRenderProxy *)0x0;
        pFVar7 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar7->_padding_ + 0x38))(pFVar7,(int)this->_padding_)) {
      this_00 = (FMaterial *)(**(code **)(pFVar7->_padding_ + 0x30))(pFVar7,(int)this->_padding_);
      if ((this_00 != (FMaterial *)0x0) &&
         (pFVar6 = FMaterial::GetRenderingThreadShaderMap(this_00),
         pFVar6 != (FMaterialShaderMap *)0x0)) {
        fVar8 = (float)(**(code **)(this_00->_padding_ + 0x338))(this_00);
        cVar1 = (**(code **)(this_00->_padding_ + 0x2a0))(this_00);
        local_58[0] = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
        EVar3 = FMeshPassProcessor::ComputeMeshFillMode(this_00,local_58);
        EVar4 = FMeshPassProcessor::ComputeMeshCullMode(this_00,local_58);
        bVar2 = IsTranslucentBlendMode(this_00);
        if (!bVar2) {
          return;
        }
        iVar5 = (**(code **)(this_00->_padding_ + 0x40))(this_00);
        if (iVar5 == 3) {
          return;
        }
        if (cVar1 != '\0') {
          return;
        }
        if (this->bDirectionalLight == false) {
          bVar2 = Process<0>(this,param_1,param_2,param_4,param_3,pFVar7,this_00,fVar8,EVar3,EVar4);
        }
        else {
          bVar2 = Process<1>(this,param_1,param_2,param_4,param_3,pFVar7,this_00,fVar8,EVar3,EVar4);
        }
        if (bVar2 != false) {
          return;
        }
      }
    }
  }
  return;
}

// TryAddMeshBatch @ 145793ab0

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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FTranslucencyDepthPassMeshProcessor::TryAddMeshBatch
          (FTranslucencyDepthPassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  FMaterial *pFVar1;
  char cVar2;
  bool bVar3;
  ERasterizerFillMode EVar4;
  ERasterizerCullMode EVar5;
  int iVar6;
  float fVar7;
  
  pFVar1 = param_6;
  fVar7 = (float)(**(code **)(param_6->_padding_ + 0x338))(param_6);
  cVar2 = (**(code **)(pFVar1->_padding_ + 0x2a0))(pFVar1);
  param_6 = (FMaterial *)FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar4 = FMeshPassProcessor::ComputeMeshFillMode
                    (pFVar1,(FMeshDrawingPolicyOverrideSettings *)&param_6);
  EVar5 = FMeshPassProcessor::ComputeMeshCullMode
                    (pFVar1,(FMeshDrawingPolicyOverrideSettings *)&param_6);
  bVar3 = IsTranslucentBlendMode(pFVar1);
  if (((bVar3) && (iVar6 = (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1), iVar6 != 3)) &&
     (cVar2 == '\0')) {
    if (this->bDirectionalLight != false) {
      bVar3 = Process<1>(this,param_1,param_2,param_4,param_3,param_5,pFVar1,fVar7,EVar4,EVar5);
      return bVar3;
    }
    bVar3 = Process<0>(this,param_1,param_2,param_4,param_3,param_5,pFVar1,fVar7,EVar4,EVar5);
    return bVar3;
  }
  return true;
}


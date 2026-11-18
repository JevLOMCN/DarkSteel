// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// Process<TUniformLightMapPolicy<4>_> @ 144b912a0

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
FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<4>_>
          (FLightmapDensityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,TUniformLightMapPolicy<4> *param_7,FLightCacheInterface **param_8,
          ERasterizerFillMode param_9,ERasterizerCullMode param_10)

{
  byte bVar1;
  IAllocatedVirtualTexture *pIVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  TLightMapDensityVS<TUniformLightMapPolicy<4>_> *pTVar5;
  TLightMapDensityPS<TUniformLightMapPolicy<4>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FVertexFactoryType *pFVar10;
  FShaderType *pFVar11;
  FLightMapInteraction *pFVar12;
  ULightMapTexture2D *pUVar13;
  ULightMapVirtualTexture2D *pUVar14;
  FMeshDrawCommandSortKey FVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStackY_6c8 [32];
  undefined1 local_658 [36];
  undefined8 local_634;
  bool local_62c;
  float local_628;
  float fStack_624;
  FMaterial *local_620;
  FMaterialRenderProxy *local_618;
  ulong64 local_610;
  TMeshProcessorShaders<TLightMapDensityVS<TUniformLightMapPolicy<4>_>,TLightMapDensityPS<TUniformLightMapPolicy<4>_>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_608;
  FMaterialShaders local_5b8;
  FMaterialShaderTypes local_548;
  FLightMapInteraction local_4a8;
  FLightMapInteraction local_3c8;
  FLightMapInteraction local_2e8;
  FLightMapInteraction local_208;
  FLightMapInteraction local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_618 = param_5;
  local_620 = param_6;
  local_610 = param_2;
  pFVar10 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  local_548.PipelineType = (FShaderPipelineType *)0x0;
  local_548.ShaderType[0] = (FShaderType *)0x0;
  local_548.ShaderType[1] = (FShaderType *)0x0;
  local_548.ShaderType[2] = (FShaderType *)0x0;
  local_548.ShaderType[3] = (FShaderType *)0x0;
  local_548.ShaderType[4] = (FShaderType *)0x0;
  local_548.ShaderType[5] = (FShaderType *)0x0;
  local_548.ShaderType[6] = (FShaderType *)0x0;
  local_548.ShaderType[7] = (FShaderType *)0x0;
  local_548.ShaderType[8] = (FShaderType *)0x0;
  local_548.ShaderType[9] = (FShaderType *)0x0;
  local_548.ShaderType[10] = (FShaderType *)0x0;
  local_548.ShaderType[0xb] = (FShaderType *)0x0;
  local_548.PermutationId[0] = 0;
  local_548.PermutationId[1] = 0;
  local_548.PermutationId[2] = 0;
  local_548.PermutationId[3] = 0;
  local_548.PermutationId[4] = 0;
  local_548.PermutationId[5] = 0;
  local_548.PermutationId[6] = 0;
  local_548.PermutationId[7] = 0;
  local_548.PermutationId[8] = 0;
  local_548.PermutationId[9] = 0;
  local_548.PermutationId[10] = 0;
  local_548.PermutationId[0xb] = 0;
  pFVar11 = (FShaderType *)TLightMapDensityVS<TUniformLightMapPolicy<4>_>::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_548.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_548.ShaderType[bVar1] = pFVar11;
  local_548.PermutationId[bVar1] = 0;
  pFVar11 = (FShaderType *)TLightMapDensityPS<TUniformLightMapPolicy<4>_>::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_548.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_548.ShaderType[bVar1] = pFVar11;
  local_548.PermutationId[bVar1] = 0;
  local_5b8.ShaderMap = (FShaderMapBase *)0x0;
  local_5b8.Pipeline = (FShaderPipeline *)0x0;
  local_5b8.Shaders[0] = (FShader *)0x0;
  local_5b8.Shaders[1] = (FShader *)0x0;
  local_5b8.Shaders[2] = (FShader *)0x0;
  local_5b8.Shaders[3] = (FShader *)0x0;
  local_5b8.Shaders[4] = (FShader *)0x0;
  local_5b8.Shaders[5] = (FShader *)0x0;
  local_5b8.Shaders[6] = (FShader *)0x0;
  local_5b8.Shaders[7] = (FShader *)0x0;
  local_5b8.Shaders[8] = (FShader *)0x0;
  local_5b8.Shaders[9] = (FShader *)0x0;
  local_5b8.Shaders[10] = (FShader *)0x0;
  local_5b8.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_548,pFVar10,&local_5b8);
  if (!bVar7) {
    return bVar7;
  }
  local_608.VertexShader.ShaderContent = (TLightMapDensityVS<TUniformLightMapPolicy<4>_> *)0x0;
  local_608.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.PixelShader.ShaderContent = (TLightMapDensityPS<TUniformLightMapPolicy<4>_> *)0x0;
  local_608.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((TLightMapDensityVS<TUniformLightMapPolicy<4>_> *)local_5b8.Shaders[0] !=
      (TLightMapDensityVS<TUniformLightMapPolicy<4>_> *)0x0) {
    local_608.VertexShader.ShaderContent =
         (TLightMapDensityVS<TUniformLightMapPolicy<4>_> *)local_5b8.Shaders[0];
    local_608.VertexShader.ShaderMap = local_5b8.ShaderMap;
  }
  pTVar5 = local_608.VertexShader.ShaderContent;
  if ((TLightMapDensityPS<TUniformLightMapPolicy<4>_> *)local_5b8.Shaders[3] !=
      (TLightMapDensityPS<TUniformLightMapPolicy<4>_> *)0x0) {
    local_608.PixelShader.ShaderContent =
         (TLightMapDensityPS<TUniformLightMapPolicy<4>_> *)local_5b8.Shaders[3];
    local_608.PixelShader.ShaderMap = local_5b8.ShaderMap;
  }
  pTVar6 = local_608.PixelShader.ShaderContent;
  local_658._16_8_ = *param_8;
  local_658._0_8_ = (FRHIUniformBuffer *)0x0;
  local_658._8_8_ = (FRHIUniformBuffer *)0x0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)local_658,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,true);
  local_634 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
  local_658._24_8_ = 0;
  local_658._32_4_ = 0.0;
  bVar7 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)(Type)this->_padding_);
  local_62c = false;
  if ((param_1->LCI == (FLightCacheInterface *)0x0) ||
     (pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_4a8,(Type)this->_padding_),
     pFVar12->Type != LMIT_Texture)) {
LAB_144b9165f:
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
      iVar9 = (**(code **)(param_3->_padding_ + 0x1f0))(param_3);
      if (((param_3->Mobility).Value == '\0') && (0 < iVar9)) {
        local_62c = true;
        local_628 = (float)iVar9;
        local_634._4_4_ = local_628;
        local_634._0_4_ = local_628;
        uVar20 = local_628;
        if (bVar7) {
          uVar20 = local_628 * __real_40000000;
        }
        local_658._24_8_ = 0x3f800000;
        fStack_624 = local_628;
      }
      else {
        local_634 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        TVar4._s_0 = local_634;
        local_634._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
        local_658._24_8_ = 0x3f80000000000000;
        uVar20 = local_634._4_4_;
        local_634 = TVar4._s_0;
      }
      goto LAB_144b916d1;
    }
    uVar20 = local_634._4_4_;
  }
  else {
    pFVar12 = FLightCacheInterface::GetLightMapInteraction
                        (param_1->LCI,&local_3c8,(Type)this->_padding_);
    pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
    if (pUVar13 == (ULightMapTexture2D *)0x0) {
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_2e8,(Type)this->_padding_);
      pUVar14 = FLightMapInteraction::GetVirtualTexture(pFVar12);
      if (pUVar14 == (ULightMapVirtualTexture2D *)0x0) goto LAB_144b9165f;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<4>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<4>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
         ::__l9::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<4>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<4>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                             ::__l9::_thread_safe_static_guard_0__),
       `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<4>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<4>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
       ::__l9::_thread_safe_static_guard_0__ == -1)) {
      pIVar16 = IConsoleManager::Get();
      plVar17 = (longlong *)
                (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.VirtualTexturedLightmaps",1);
      pTVar18 = (TConsoleVariableData<int> *)0x0;
      if (plVar17 != (longlong *)0x0) {
        pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
      }
      `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<4>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<4>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l9::CVar = pTVar18;
      _Init_thread_footer(&`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<4>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<4>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l9::_thread_safe_static_guard_0__);
    }
    iVar9 = TConsoleVariableData<int>::GetValueOnRenderThread
                      (`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<4>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<4>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                       ::__l9::CVar);
    if (iVar9 == 1) {
      pIVar2 = param_1->LCI->ResourceCluster->AllocatedVT;
      if (pIVar2 == (IAllocatedVirtualTexture *)0x0) {
        uVar20 = local_634._4_4_;
      }
      else {
        local_634._4_4_ = 0;
        local_634._0_4_ =
             (float)(pIVar2->WidthInBlocks * pIVar2->BlockWidthInTiles *
                    (pIVar2->Description).TileSize);
        fVar19 = (float)(pIVar2->HeightInBlocks * pIVar2->BlockHeightInTiles *
                        (pIVar2->Description).TileSize);
        uVar20 = fVar19 + fVar19;
      }
    }
    else {
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_208,(Type)this->_padding_);
      pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
      iVar9 = UTexture2D::GetSizeX((UTexture2D *)pUVar13);
      local_634._0_4_ = (float)iVar9;
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_128,(Type)this->_padding_);
      pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
      iVar9 = UTexture2D::GetSizeY((UTexture2D *)pUVar13);
      uVar20 = (undefined4)iVar9;
    }
    local_62c = true;
    local_658._24_8_ = 0x3f800000;
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
LAB_144b916d1:
      if (param_3->bParentSelected != '\0' || param_3->bIndividuallySelected != '\0') {
        local_658._32_4_ = 1.0;
        goto LAB_144b916ec;
      }
    }
  }
  local_658._32_4_ = 0.0;
LAB_144b916ec:
  local_634._4_4_ = (float)uVar20 * __real_3f000000;
  local_634._0_4_ = (float)(undefined4)local_634 * __real_3f000000;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)local_658,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,false);
  FVar15 = CalculateMeshStaticSortKey((FMeshMaterialShader *)pTVar5,(FMeshMaterialShader *)pTVar6);
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TLightMapDensityVS<TUniformLightMapPolicy<4>_>,TLightMapDensityPS<TUniformLightMapPolicy<4>_>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TLightMapDensityElementData<TUniformLightMapPolicy<4>_>_>
            ((FMeshPassProcessor *)this,param_1,local_610,param_3,local_618,local_620,
             &this->PassDrawRenderState,&local_608,param_9,param_10,FVar15,Default,
             (TLightMapDensityElementData<TUniformLightMapPolicy<4>_> *)local_658);
  return true;
}

// Process<TUniformLightMapPolicy<5>_> @ 144b91830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<5>_>
          (FLightmapDensityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,TUniformLightMapPolicy<5> *param_7,FLightCacheInterface **param_8,
          ERasterizerFillMode param_9,ERasterizerCullMode param_10)

{
  byte bVar1;
  IAllocatedVirtualTexture *pIVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  TLightMapDensityVS<TUniformLightMapPolicy<5>_> *pTVar5;
  TLightMapDensityPS<TUniformLightMapPolicy<5>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FVertexFactoryType *pFVar10;
  FShaderType *pFVar11;
  FLightMapInteraction *pFVar12;
  ULightMapTexture2D *pUVar13;
  ULightMapVirtualTexture2D *pUVar14;
  FMeshDrawCommandSortKey FVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStackY_6c8 [32];
  undefined1 local_658 [36];
  undefined8 local_634;
  bool local_62c;
  float local_628;
  float fStack_624;
  FMaterial *local_620;
  FMaterialRenderProxy *local_618;
  ulong64 local_610;
  TMeshProcessorShaders<TLightMapDensityVS<TUniformLightMapPolicy<5>_>,TLightMapDensityPS<TUniformLightMapPolicy<5>_>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_608;
  FMaterialShaders local_5b8;
  FMaterialShaderTypes local_548;
  FLightMapInteraction local_4a8;
  FLightMapInteraction local_3c8;
  FLightMapInteraction local_2e8;
  FLightMapInteraction local_208;
  FLightMapInteraction local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_618 = param_5;
  local_620 = param_6;
  local_610 = param_2;
  pFVar10 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  local_548.PipelineType = (FShaderPipelineType *)0x0;
  local_548.ShaderType[0] = (FShaderType *)0x0;
  local_548.ShaderType[1] = (FShaderType *)0x0;
  local_548.ShaderType[2] = (FShaderType *)0x0;
  local_548.ShaderType[3] = (FShaderType *)0x0;
  local_548.ShaderType[4] = (FShaderType *)0x0;
  local_548.ShaderType[5] = (FShaderType *)0x0;
  local_548.ShaderType[6] = (FShaderType *)0x0;
  local_548.ShaderType[7] = (FShaderType *)0x0;
  local_548.ShaderType[8] = (FShaderType *)0x0;
  local_548.ShaderType[9] = (FShaderType *)0x0;
  local_548.ShaderType[10] = (FShaderType *)0x0;
  local_548.ShaderType[0xb] = (FShaderType *)0x0;
  local_548.PermutationId[0] = 0;
  local_548.PermutationId[1] = 0;
  local_548.PermutationId[2] = 0;
  local_548.PermutationId[3] = 0;
  local_548.PermutationId[4] = 0;
  local_548.PermutationId[5] = 0;
  local_548.PermutationId[6] = 0;
  local_548.PermutationId[7] = 0;
  local_548.PermutationId[8] = 0;
  local_548.PermutationId[9] = 0;
  local_548.PermutationId[10] = 0;
  local_548.PermutationId[0xb] = 0;
  pFVar11 = (FShaderType *)TLightMapDensityVS<TUniformLightMapPolicy<5>_>::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_548.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_548.ShaderType[bVar1] = pFVar11;
  local_548.PermutationId[bVar1] = 0;
  pFVar11 = (FShaderType *)TLightMapDensityPS<TUniformLightMapPolicy<5>_>::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_548.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_548.ShaderType[bVar1] = pFVar11;
  local_548.PermutationId[bVar1] = 0;
  local_5b8.ShaderMap = (FShaderMapBase *)0x0;
  local_5b8.Pipeline = (FShaderPipeline *)0x0;
  local_5b8.Shaders[0] = (FShader *)0x0;
  local_5b8.Shaders[1] = (FShader *)0x0;
  local_5b8.Shaders[2] = (FShader *)0x0;
  local_5b8.Shaders[3] = (FShader *)0x0;
  local_5b8.Shaders[4] = (FShader *)0x0;
  local_5b8.Shaders[5] = (FShader *)0x0;
  local_5b8.Shaders[6] = (FShader *)0x0;
  local_5b8.Shaders[7] = (FShader *)0x0;
  local_5b8.Shaders[8] = (FShader *)0x0;
  local_5b8.Shaders[9] = (FShader *)0x0;
  local_5b8.Shaders[10] = (FShader *)0x0;
  local_5b8.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_548,pFVar10,&local_5b8);
  if (!bVar7) {
    return bVar7;
  }
  local_608.VertexShader.ShaderContent = (TLightMapDensityVS<TUniformLightMapPolicy<5>_> *)0x0;
  local_608.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.PixelShader.ShaderContent = (TLightMapDensityPS<TUniformLightMapPolicy<5>_> *)0x0;
  local_608.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((TLightMapDensityVS<TUniformLightMapPolicy<5>_> *)local_5b8.Shaders[0] !=
      (TLightMapDensityVS<TUniformLightMapPolicy<5>_> *)0x0) {
    local_608.VertexShader.ShaderContent =
         (TLightMapDensityVS<TUniformLightMapPolicy<5>_> *)local_5b8.Shaders[0];
    local_608.VertexShader.ShaderMap = local_5b8.ShaderMap;
  }
  pTVar5 = local_608.VertexShader.ShaderContent;
  if ((TLightMapDensityPS<TUniformLightMapPolicy<5>_> *)local_5b8.Shaders[3] !=
      (TLightMapDensityPS<TUniformLightMapPolicy<5>_> *)0x0) {
    local_608.PixelShader.ShaderContent =
         (TLightMapDensityPS<TUniformLightMapPolicy<5>_> *)local_5b8.Shaders[3];
    local_608.PixelShader.ShaderMap = local_5b8.ShaderMap;
  }
  pTVar6 = local_608.PixelShader.ShaderContent;
  local_658._16_8_ = *param_8;
  local_658._0_8_ = (FRHIUniformBuffer *)0x0;
  local_658._8_8_ = (FRHIUniformBuffer *)0x0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)local_658,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,true);
  local_634 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
  local_658._24_8_ = 0;
  local_658._32_4_ = 0.0;
  bVar7 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)(Type)this->_padding_);
  local_62c = false;
  if ((param_1->LCI == (FLightCacheInterface *)0x0) ||
     (pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_4a8,(Type)this->_padding_),
     pFVar12->Type != LMIT_Texture)) {
LAB_144b91bef:
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
      iVar9 = (**(code **)(param_3->_padding_ + 0x1f0))(param_3);
      if (((param_3->Mobility).Value == '\0') && (0 < iVar9)) {
        local_62c = true;
        local_628 = (float)iVar9;
        local_634._4_4_ = local_628;
        local_634._0_4_ = local_628;
        uVar20 = local_628;
        if (bVar7) {
          uVar20 = local_628 * __real_40000000;
        }
        local_658._24_8_ = 0x3f800000;
        fStack_624 = local_628;
      }
      else {
        local_634 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        TVar4._s_0 = local_634;
        local_634._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
        local_658._24_8_ = 0x3f80000000000000;
        uVar20 = local_634._4_4_;
        local_634 = TVar4._s_0;
      }
      goto LAB_144b91c61;
    }
    uVar20 = local_634._4_4_;
  }
  else {
    pFVar12 = FLightCacheInterface::GetLightMapInteraction
                        (param_1->LCI,&local_3c8,(Type)this->_padding_);
    pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
    if (pUVar13 == (ULightMapTexture2D *)0x0) {
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_2e8,(Type)this->_padding_);
      pUVar14 = FLightMapInteraction::GetVirtualTexture(pFVar12);
      if (pUVar14 == (ULightMapVirtualTexture2D *)0x0) goto LAB_144b91bef;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<5>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<5>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
         ::__l9::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<5>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<5>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                             ::__l9::_thread_safe_static_guard_0__),
       `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<5>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<5>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
       ::__l9::_thread_safe_static_guard_0__ == -1)) {
      pIVar16 = IConsoleManager::Get();
      plVar17 = (longlong *)
                (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.VirtualTexturedLightmaps",1);
      pTVar18 = (TConsoleVariableData<int> *)0x0;
      if (plVar17 != (longlong *)0x0) {
        pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
      }
      `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<5>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<5>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l9::CVar = pTVar18;
      _Init_thread_footer(&`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<5>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<5>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l9::_thread_safe_static_guard_0__);
    }
    iVar9 = TConsoleVariableData<int>::GetValueOnRenderThread
                      (`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<5>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<5>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                       ::__l9::CVar);
    if (iVar9 == 1) {
      pIVar2 = param_1->LCI->ResourceCluster->AllocatedVT;
      if (pIVar2 == (IAllocatedVirtualTexture *)0x0) {
        uVar20 = local_634._4_4_;
      }
      else {
        local_634._4_4_ = 0;
        local_634._0_4_ =
             (float)(pIVar2->WidthInBlocks * pIVar2->BlockWidthInTiles *
                    (pIVar2->Description).TileSize);
        fVar19 = (float)(pIVar2->HeightInBlocks * pIVar2->BlockHeightInTiles *
                        (pIVar2->Description).TileSize);
        uVar20 = fVar19 + fVar19;
      }
    }
    else {
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_208,(Type)this->_padding_);
      pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
      iVar9 = UTexture2D::GetSizeX((UTexture2D *)pUVar13);
      local_634._0_4_ = (float)iVar9;
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_128,(Type)this->_padding_);
      pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
      iVar9 = UTexture2D::GetSizeY((UTexture2D *)pUVar13);
      uVar20 = (undefined4)iVar9;
    }
    local_62c = true;
    local_658._24_8_ = 0x3f800000;
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
LAB_144b91c61:
      if (param_3->bParentSelected != '\0' || param_3->bIndividuallySelected != '\0') {
        local_658._32_4_ = 1.0;
        goto LAB_144b91c7c;
      }
    }
  }
  local_658._32_4_ = 0.0;
LAB_144b91c7c:
  local_634._4_4_ = (float)uVar20 * __real_3f000000;
  local_634._0_4_ = (float)(undefined4)local_634 * __real_3f000000;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)local_658,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,false);
  FVar15 = CalculateMeshStaticSortKey((FMeshMaterialShader *)pTVar5,(FMeshMaterialShader *)pTVar6);
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TLightMapDensityVS<TUniformLightMapPolicy<5>_>,TLightMapDensityPS<TUniformLightMapPolicy<5>_>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TLightMapDensityElementData<TUniformLightMapPolicy<5>_>_>
            ((FMeshPassProcessor *)this,param_1,local_610,param_3,local_618,local_620,
             &this->PassDrawRenderState,&local_608,param_9,param_10,FVar15,Default,
             (TLightMapDensityElementData<TUniformLightMapPolicy<5>_> *)local_658);
  return true;
}

// Process<TUniformLightMapPolicy<0>_> @ 144b91dc0

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
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<0>_>
          (FLightmapDensityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,TUniformLightMapPolicy<0> *param_7,FLightCacheInterface **param_8,
          ERasterizerFillMode param_9,ERasterizerCullMode param_10)

{
  byte bVar1;
  IAllocatedVirtualTexture *pIVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  TLightMapDensityVS<TUniformLightMapPolicy<0>_> *pTVar5;
  TLightMapDensityPS<TUniformLightMapPolicy<0>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FVertexFactoryType *pFVar10;
  FShaderType *pFVar11;
  FLightMapInteraction *pFVar12;
  ULightMapTexture2D *pUVar13;
  ULightMapVirtualTexture2D *pUVar14;
  FMeshDrawCommandSortKey FVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStackY_6c8 [32];
  undefined1 local_658 [36];
  undefined8 local_634;
  bool local_62c;
  float local_628;
  float fStack_624;
  FMaterial *local_620;
  FMaterialRenderProxy *local_618;
  ulong64 local_610;
  TMeshProcessorShaders<TLightMapDensityVS<TUniformLightMapPolicy<0>_>,TLightMapDensityPS<TUniformLightMapPolicy<0>_>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_608;
  FMaterialShaders local_5b8;
  FMaterialShaderTypes local_548;
  FLightMapInteraction local_4a8;
  FLightMapInteraction local_3c8;
  FLightMapInteraction local_2e8;
  FLightMapInteraction local_208;
  FLightMapInteraction local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_618 = param_5;
  local_620 = param_6;
  local_610 = param_2;
  pFVar10 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  local_548.PipelineType = (FShaderPipelineType *)0x0;
  local_548.ShaderType[0] = (FShaderType *)0x0;
  local_548.ShaderType[1] = (FShaderType *)0x0;
  local_548.ShaderType[2] = (FShaderType *)0x0;
  local_548.ShaderType[3] = (FShaderType *)0x0;
  local_548.ShaderType[4] = (FShaderType *)0x0;
  local_548.ShaderType[5] = (FShaderType *)0x0;
  local_548.ShaderType[6] = (FShaderType *)0x0;
  local_548.ShaderType[7] = (FShaderType *)0x0;
  local_548.ShaderType[8] = (FShaderType *)0x0;
  local_548.ShaderType[9] = (FShaderType *)0x0;
  local_548.ShaderType[10] = (FShaderType *)0x0;
  local_548.ShaderType[0xb] = (FShaderType *)0x0;
  local_548.PermutationId[0] = 0;
  local_548.PermutationId[1] = 0;
  local_548.PermutationId[2] = 0;
  local_548.PermutationId[3] = 0;
  local_548.PermutationId[4] = 0;
  local_548.PermutationId[5] = 0;
  local_548.PermutationId[6] = 0;
  local_548.PermutationId[7] = 0;
  local_548.PermutationId[8] = 0;
  local_548.PermutationId[9] = 0;
  local_548.PermutationId[10] = 0;
  local_548.PermutationId[0xb] = 0;
  pFVar11 = (FShaderType *)TLightMapDensityVS<TUniformLightMapPolicy<0>_>::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_548.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_548.ShaderType[bVar1] = pFVar11;
  local_548.PermutationId[bVar1] = 0;
  pFVar11 = (FShaderType *)TLightMapDensityPS<TUniformLightMapPolicy<0>_>::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_548.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_548.ShaderType[bVar1] = pFVar11;
  local_548.PermutationId[bVar1] = 0;
  local_5b8.ShaderMap = (FShaderMapBase *)0x0;
  local_5b8.Pipeline = (FShaderPipeline *)0x0;
  local_5b8.Shaders[0] = (FShader *)0x0;
  local_5b8.Shaders[1] = (FShader *)0x0;
  local_5b8.Shaders[2] = (FShader *)0x0;
  local_5b8.Shaders[3] = (FShader *)0x0;
  local_5b8.Shaders[4] = (FShader *)0x0;
  local_5b8.Shaders[5] = (FShader *)0x0;
  local_5b8.Shaders[6] = (FShader *)0x0;
  local_5b8.Shaders[7] = (FShader *)0x0;
  local_5b8.Shaders[8] = (FShader *)0x0;
  local_5b8.Shaders[9] = (FShader *)0x0;
  local_5b8.Shaders[10] = (FShader *)0x0;
  local_5b8.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_548,pFVar10,&local_5b8);
  if (!bVar7) {
    return bVar7;
  }
  local_608.VertexShader.ShaderContent = (TLightMapDensityVS<TUniformLightMapPolicy<0>_> *)0x0;
  local_608.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.PixelShader.ShaderContent = (TLightMapDensityPS<TUniformLightMapPolicy<0>_> *)0x0;
  local_608.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((TLightMapDensityVS<TUniformLightMapPolicy<0>_> *)local_5b8.Shaders[0] !=
      (TLightMapDensityVS<TUniformLightMapPolicy<0>_> *)0x0) {
    local_608.VertexShader.ShaderContent =
         (TLightMapDensityVS<TUniformLightMapPolicy<0>_> *)local_5b8.Shaders[0];
    local_608.VertexShader.ShaderMap = local_5b8.ShaderMap;
  }
  pTVar5 = local_608.VertexShader.ShaderContent;
  if ((TLightMapDensityPS<TUniformLightMapPolicy<0>_> *)local_5b8.Shaders[3] !=
      (TLightMapDensityPS<TUniformLightMapPolicy<0>_> *)0x0) {
    local_608.PixelShader.ShaderContent =
         (TLightMapDensityPS<TUniformLightMapPolicy<0>_> *)local_5b8.Shaders[3];
    local_608.PixelShader.ShaderMap = local_5b8.ShaderMap;
  }
  pTVar6 = local_608.PixelShader.ShaderContent;
  local_658._16_8_ = *param_8;
  local_658._0_8_ = (FRHIUniformBuffer *)0x0;
  local_658._8_8_ = (FRHIUniformBuffer *)0x0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)local_658,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,true);
  local_634 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
  local_658._24_8_ = 0;
  local_658._32_4_ = 0.0;
  bVar7 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)(Type)this->_padding_);
  local_62c = false;
  if ((param_1->LCI == (FLightCacheInterface *)0x0) ||
     (pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_4a8,(Type)this->_padding_),
     pFVar12->Type != LMIT_Texture)) {
LAB_144b9217f:
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
      iVar9 = (**(code **)(param_3->_padding_ + 0x1f0))(param_3);
      if (((param_3->Mobility).Value == '\0') && (0 < iVar9)) {
        local_62c = true;
        local_628 = (float)iVar9;
        local_634._4_4_ = local_628;
        local_634._0_4_ = local_628;
        uVar20 = local_628;
        if (bVar7) {
          uVar20 = local_628 * __real_40000000;
        }
        local_658._24_8_ = 0x3f800000;
        fStack_624 = local_628;
      }
      else {
        local_634 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        TVar4._s_0 = local_634;
        local_634._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
        local_658._24_8_ = 0x3f80000000000000;
        uVar20 = local_634._4_4_;
        local_634 = TVar4._s_0;
      }
      goto LAB_144b921f1;
    }
    uVar20 = local_634._4_4_;
  }
  else {
    pFVar12 = FLightCacheInterface::GetLightMapInteraction
                        (param_1->LCI,&local_3c8,(Type)this->_padding_);
    pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
    if (pUVar13 == (ULightMapTexture2D *)0x0) {
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_2e8,(Type)this->_padding_);
      pUVar14 = FLightMapInteraction::GetVirtualTexture(pFVar12);
      if (pUVar14 == (ULightMapVirtualTexture2D *)0x0) goto LAB_144b9217f;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<0>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<0>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
         ::__l9::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<0>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<0>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                             ::__l9::_thread_safe_static_guard_0__),
       `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<0>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<0>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
       ::__l9::_thread_safe_static_guard_0__ == -1)) {
      pIVar16 = IConsoleManager::Get();
      plVar17 = (longlong *)
                (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.VirtualTexturedLightmaps",1);
      pTVar18 = (TConsoleVariableData<int> *)0x0;
      if (plVar17 != (longlong *)0x0) {
        pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
      }
      `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<0>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<0>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l9::CVar = pTVar18;
      _Init_thread_footer(&`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<0>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<0>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l9::_thread_safe_static_guard_0__);
    }
    iVar9 = TConsoleVariableData<int>::GetValueOnRenderThread
                      (`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<0>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<0>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                       ::__l9::CVar);
    if (iVar9 == 1) {
      pIVar2 = param_1->LCI->ResourceCluster->AllocatedVT;
      if (pIVar2 == (IAllocatedVirtualTexture *)0x0) {
        uVar20 = local_634._4_4_;
      }
      else {
        local_634._4_4_ = 0;
        local_634._0_4_ =
             (float)(pIVar2->WidthInBlocks * pIVar2->BlockWidthInTiles *
                    (pIVar2->Description).TileSize);
        fVar19 = (float)(pIVar2->HeightInBlocks * pIVar2->BlockHeightInTiles *
                        (pIVar2->Description).TileSize);
        uVar20 = fVar19 + fVar19;
      }
    }
    else {
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_208,(Type)this->_padding_);
      pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
      iVar9 = UTexture2D::GetSizeX((UTexture2D *)pUVar13);
      local_634._0_4_ = (float)iVar9;
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_128,(Type)this->_padding_);
      pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
      iVar9 = UTexture2D::GetSizeY((UTexture2D *)pUVar13);
      uVar20 = (undefined4)iVar9;
    }
    local_62c = true;
    local_658._24_8_ = 0x3f800000;
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
LAB_144b921f1:
      if (param_3->bParentSelected != '\0' || param_3->bIndividuallySelected != '\0') {
        local_658._32_4_ = 1.0;
        goto LAB_144b9220c;
      }
    }
  }
  local_658._32_4_ = 0.0;
LAB_144b9220c:
  local_634._4_4_ = (float)uVar20 * __real_3f000000;
  local_634._0_4_ = (float)(undefined4)local_634 * __real_3f000000;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)local_658,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,false);
  FVar15 = CalculateMeshStaticSortKey((FMeshMaterialShader *)pTVar5,(FMeshMaterialShader *)pTVar6);
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TLightMapDensityVS<TUniformLightMapPolicy<0>_>,TLightMapDensityPS<TUniformLightMapPolicy<0>_>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TLightMapDensityElementData<TUniformLightMapPolicy<0>_>_>
            ((FMeshPassProcessor *)this,param_1,local_610,param_3,local_618,local_620,
             &this->PassDrawRenderState,&local_608,param_9,param_10,FVar15,Default,
             (TLightMapDensityElementData<TUniformLightMapPolicy<0>_> *)local_658);
  return true;
}

// Process<TUniformLightMapPolicy<13>_> @ 144b92350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<13>_>
          (FLightmapDensityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,TUniformLightMapPolicy<13> *param_7,FLightCacheInterface **param_8,
          ERasterizerFillMode param_9,ERasterizerCullMode param_10)

{
  byte bVar1;
  IAllocatedVirtualTexture *pIVar2;
  code *pcVar3;
  TVector2<float>_u_0 TVar4;
  TLightMapDensityVS<TUniformLightMapPolicy<13>_> *pTVar5;
  TLightMapDensityPS<TUniformLightMapPolicy<13>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FVertexFactoryType *pFVar10;
  FShaderType *pFVar11;
  FLightMapInteraction *pFVar12;
  ULightMapTexture2D *pUVar13;
  ULightMapVirtualTexture2D *pUVar14;
  FMeshDrawCommandSortKey FVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 auStackY_6c8 [32];
  undefined1 local_658 [36];
  undefined8 local_634;
  bool local_62c;
  float local_628;
  float fStack_624;
  FMaterial *local_620;
  FMaterialRenderProxy *local_618;
  ulong64 local_610;
  TMeshProcessorShaders<TLightMapDensityVS<TUniformLightMapPolicy<13>_>,TLightMapDensityPS<TUniformLightMapPolicy<13>_>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_608;
  FMaterialShaders local_5b8;
  FMaterialShaderTypes local_548;
  FLightMapInteraction local_4a8;
  FLightMapInteraction local_3c8;
  FLightMapInteraction local_2e8;
  FLightMapInteraction local_208;
  FLightMapInteraction local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_618 = param_5;
  local_620 = param_6;
  local_610 = param_2;
  pFVar10 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  local_548.PipelineType = (FShaderPipelineType *)0x0;
  local_548.ShaderType[0] = (FShaderType *)0x0;
  local_548.ShaderType[1] = (FShaderType *)0x0;
  local_548.ShaderType[2] = (FShaderType *)0x0;
  local_548.ShaderType[3] = (FShaderType *)0x0;
  local_548.ShaderType[4] = (FShaderType *)0x0;
  local_548.ShaderType[5] = (FShaderType *)0x0;
  local_548.ShaderType[6] = (FShaderType *)0x0;
  local_548.ShaderType[7] = (FShaderType *)0x0;
  local_548.ShaderType[8] = (FShaderType *)0x0;
  local_548.ShaderType[9] = (FShaderType *)0x0;
  local_548.ShaderType[10] = (FShaderType *)0x0;
  local_548.ShaderType[0xb] = (FShaderType *)0x0;
  local_548.PermutationId[0] = 0;
  local_548.PermutationId[1] = 0;
  local_548.PermutationId[2] = 0;
  local_548.PermutationId[3] = 0;
  local_548.PermutationId[4] = 0;
  local_548.PermutationId[5] = 0;
  local_548.PermutationId[6] = 0;
  local_548.PermutationId[7] = 0;
  local_548.PermutationId[8] = 0;
  local_548.PermutationId[9] = 0;
  local_548.PermutationId[10] = 0;
  local_548.PermutationId[0xb] = 0;
  pFVar11 = (FShaderType *)TLightMapDensityVS<TUniformLightMapPolicy<13>_>::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_548.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_548.ShaderType[bVar1] = pFVar11;
  local_548.PermutationId[bVar1] = 0;
  pFVar11 = (FShaderType *)TLightMapDensityPS<TUniformLightMapPolicy<13>_>::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_548.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_548.ShaderType[bVar1] = pFVar11;
  local_548.PermutationId[bVar1] = 0;
  local_5b8.ShaderMap = (FShaderMapBase *)0x0;
  local_5b8.Pipeline = (FShaderPipeline *)0x0;
  local_5b8.Shaders[0] = (FShader *)0x0;
  local_5b8.Shaders[1] = (FShader *)0x0;
  local_5b8.Shaders[2] = (FShader *)0x0;
  local_5b8.Shaders[3] = (FShader *)0x0;
  local_5b8.Shaders[4] = (FShader *)0x0;
  local_5b8.Shaders[5] = (FShader *)0x0;
  local_5b8.Shaders[6] = (FShader *)0x0;
  local_5b8.Shaders[7] = (FShader *)0x0;
  local_5b8.Shaders[8] = (FShader *)0x0;
  local_5b8.Shaders[9] = (FShader *)0x0;
  local_5b8.Shaders[10] = (FShader *)0x0;
  local_5b8.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(param_6,&local_548,pFVar10,&local_5b8);
  if (!bVar7) {
    return bVar7;
  }
  local_608.VertexShader.ShaderContent = (TLightMapDensityVS<TUniformLightMapPolicy<13>_> *)0x0;
  local_608.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.PixelShader.ShaderContent = (TLightMapDensityPS<TUniformLightMapPolicy<13>_> *)0x0;
  local_608.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_608.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_608.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  if ((TLightMapDensityVS<TUniformLightMapPolicy<13>_> *)local_5b8.Shaders[0] !=
      (TLightMapDensityVS<TUniformLightMapPolicy<13>_> *)0x0) {
    local_608.VertexShader.ShaderContent =
         (TLightMapDensityVS<TUniformLightMapPolicy<13>_> *)local_5b8.Shaders[0];
    local_608.VertexShader.ShaderMap = local_5b8.ShaderMap;
  }
  pTVar5 = local_608.VertexShader.ShaderContent;
  if ((TLightMapDensityPS<TUniformLightMapPolicy<13>_> *)local_5b8.Shaders[3] !=
      (TLightMapDensityPS<TUniformLightMapPolicy<13>_> *)0x0) {
    local_608.PixelShader.ShaderContent =
         (TLightMapDensityPS<TUniformLightMapPolicy<13>_> *)local_5b8.Shaders[3];
    local_608.PixelShader.ShaderMap = local_5b8.ShaderMap;
  }
  pTVar6 = local_608.PixelShader.ShaderContent;
  local_658._16_8_ = *param_8;
  local_658._0_8_ = (FRHIUniformBuffer *)0x0;
  local_658._8_8_ = (FRHIUniformBuffer *)0x0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)local_658,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,true);
  local_634 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
  local_658._24_8_ = 0;
  local_658._32_4_ = 0.0;
  bVar7 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)(Type)this->_padding_);
  local_62c = false;
  if ((param_1->LCI == (FLightCacheInterface *)0x0) ||
     (pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_4a8,(Type)this->_padding_),
     pFVar12->Type != LMIT_Texture)) {
LAB_144b9270f:
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
      iVar9 = (**(code **)(param_3->_padding_ + 0x1f0))(param_3);
      if (((param_3->Mobility).Value == '\0') && (0 < iVar9)) {
        local_62c = true;
        local_628 = (float)iVar9;
        local_634._4_4_ = local_628;
        local_634._0_4_ = local_628;
        uVar20 = local_628;
        if (bVar7) {
          uVar20 = local_628 * __real_40000000;
        }
        local_658._24_8_ = 0x3f800000;
        fStack_624 = local_628;
      }
      else {
        local_634 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        TVar4._s_0 = local_634;
        local_634._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
        local_658._24_8_ = 0x3f80000000000000;
        uVar20 = local_634._4_4_;
        local_634 = TVar4._s_0;
      }
      goto LAB_144b92781;
    }
    uVar20 = local_634._4_4_;
  }
  else {
    pFVar12 = FLightCacheInterface::GetLightMapInteraction
                        (param_1->LCI,&local_3c8,(Type)this->_padding_);
    pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
    if (pUVar13 == (ULightMapTexture2D *)0x0) {
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_2e8,(Type)this->_padding_);
      pUVar14 = FLightMapInteraction::GetVirtualTexture(pFVar12);
      if (pUVar14 == (ULightMapVirtualTexture2D *)0x0) goto LAB_144b9270f;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<13>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<13>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
         ::__l9::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<13>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<13>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                             ::__l9::_thread_safe_static_guard_0__),
       `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<13>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<13>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
       ::__l9::_thread_safe_static_guard_0__ == -1)) {
      pIVar16 = IConsoleManager::Get();
      plVar17 = (longlong *)
                (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.VirtualTexturedLightmaps",1);
      pTVar18 = (TConsoleVariableData<int> *)0x0;
      if (plVar17 != (longlong *)0x0) {
        pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
      }
      `private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<13>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<13>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
      ::__l9::CVar = pTVar18;
      _Init_thread_footer(&`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<13>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<13>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                           ::__l9::_thread_safe_static_guard_0__);
    }
    iVar9 = TConsoleVariableData<int>::GetValueOnRenderThread
                      (`private:_bool___cdecl_FLightmapDensityMeshProcessor::Process<TUniformLightMapPolicy<13>_>(FMeshBatch_const&___ptr64,unsigned___int64,FPrimitiveSceneProxy_const*___ptr64___restrict,int,FMaterialRenderProxy_const&___ptr64___restrict,FMaterial_const&___ptr64___restrict,TUniformLightMapPolicy<13>_const&___ptr64___restrict,FLightCacheInterface_const*___ptr64_const&___ptr64___restrict,ERasterizerFillMode,ERasterizerCullMode)___ptr64'
                       ::__l9::CVar);
    if (iVar9 == 1) {
      pIVar2 = param_1->LCI->ResourceCluster->AllocatedVT;
      if (pIVar2 == (IAllocatedVirtualTexture *)0x0) {
        uVar20 = local_634._4_4_;
      }
      else {
        local_634._4_4_ = 0;
        local_634._0_4_ =
             (float)(pIVar2->WidthInBlocks * pIVar2->BlockWidthInTiles *
                    (pIVar2->Description).TileSize);
        fVar19 = (float)(pIVar2->HeightInBlocks * pIVar2->BlockHeightInTiles *
                        (pIVar2->Description).TileSize);
        uVar20 = fVar19 + fVar19;
      }
    }
    else {
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_208,(Type)this->_padding_);
      pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
      iVar9 = UTexture2D::GetSizeX((UTexture2D *)pUVar13);
      local_634._0_4_ = (float)iVar9;
      pFVar12 = FLightCacheInterface::GetLightMapInteraction
                          (param_1->LCI,&local_128,(Type)this->_padding_);
      pUVar13 = FLightMapInteraction::GetTexture(pFVar12,bVar7);
      iVar9 = UTexture2D::GetSizeY((UTexture2D *)pUVar13);
      uVar20 = (undefined4)iVar9;
    }
    local_62c = true;
    local_658._24_8_ = 0x3f800000;
    if (param_3 != (FPrimitiveSceneProxy *)0x0) {
LAB_144b92781:
      if (param_3->bParentSelected != '\0' || param_3->bIndividuallySelected != '\0') {
        local_658._32_4_ = 1.0;
        goto LAB_144b9279c;
      }
    }
  }
  local_658._32_4_ = 0.0;
LAB_144b9279c:
  local_634._4_4_ = (float)uVar20 * __real_3f000000;
  local_634._0_4_ = (float)(undefined4)local_634 * __real_3f000000;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)local_658,(FSceneView *)this->_padding_,param_3,
             param_1,param_4,false);
  FVar15 = CalculateMeshStaticSortKey((FMeshMaterialShader *)pTVar5,(FMeshMaterialShader *)pTVar6);
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TLightMapDensityVS<TUniformLightMapPolicy<13>_>,TLightMapDensityPS<TUniformLightMapPolicy<13>_>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TLightMapDensityElementData<TUniformLightMapPolicy<13>_>_>
            ((FMeshPassProcessor *)this,param_1,local_610,param_3,local_618,local_620,
             &this->PassDrawRenderState,&local_608,param_9,param_10,FVar15,Default,
             (TLightMapDensityElementData<TUniformLightMapPolicy<13>_> *)local_658);
  return true;
}

// FLightmapDensityMeshProcessor @ 144b98020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLightmapDensityMeshProcessor * __thiscall
FLightmapDensityMeshProcessor::FLightmapDensityMeshProcessor
          (FLightmapDensityMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          FMeshPassDrawListContext *param_4)

{
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,LightmapDensity,param_1,param_2,param_3,param_4);
  this->_padding_ = (longlong)&___7FLightmapDensityMeshProcessor__6B_;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  return this;
}

// AddMeshBatch @ 144ba92d0

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
FLightmapDensityMeshProcessor::AddMeshBatch
          (FLightmapDensityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  bool bVar1;
  FMaterial *pFVar2;
  FMaterialRenderProxy *pFVar3;
  
  if ((((2 < (int)this->_padding_) &&
       ((*(byte *)(*(longlong *)(this->_padding_ + 8) + 0x54) & 8) != 0)) &&
      (bVar1 = AllowDebugViewmodes(), bVar1)) && (param_1->bUseForMaterial != 0)) {
    pFVar3 = param_1->MaterialRenderProxy;
    while ((pFVar3 != (FMaterialRenderProxy *)0x0 &&
           ((pFVar2 = (FMaterial *)
                      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,(int)this->_padding_),
            pFVar2 == (FMaterial *)0x0 ||
            (bVar1 = TryAddMeshBatch(this,param_1,param_2,param_3,param_4,pFVar3,pFVar2), !bVar1))))
          ) {
      pFVar3 = (FMaterialRenderProxy *)
               (**(code **)(pFVar3->_padding_ + 0x38))(pFVar3,(int)this->_padding_);
    }
  }
  return;
}

// TryAddMeshBatch @ 144bea0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FLightmapDensityMeshProcessor::TryAddMeshBatch
          (FLightmapDensityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  FLightCacheInterface **ppFVar1;
  byte bVar2;
  code *pcVar3;
  FMeshBatch *pFVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  byte *pbVar12;
  TVector4<float>_u_0 *pTVar13;
  ushort *puVar14;
  FLightMapInteraction *pFVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  TConsoleVariableData<int> *pTVar19;
  undefined1 auStackY_468 [32];
  char local_404 [4];
  ERasterizerCullMode local_400;
  ERasterizerFillMode local_3fc;
  ulong64 local_3f8;
  undefined1 local_3f0 [8];
  FMeshBatch *local_3e8;
  FMeshDrawingPolicyOverrideSettings local_3e0;
  TUniformLightMapPolicy<5> local_3d8;
  TUniformLightMapPolicy<4> local_3d4;
  TUniformLightMapPolicy<13> local_3d0 [2];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  ULightMapTexture2D *local_388;
  ULightMapTexture2D *pUStack_380;
  ULightMapTexture2D *local_378;
  longlong lStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  ULightMapTexture2D *local_328;
  undefined8 uStack_320;
  ULightMapVirtualTexture2D *local_318;
  undefined8 uStack_310;
  double local_308;
  undefined8 uStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  TVector4<float>_u_0 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_238;
  undefined4 local_230;
  FLightMapInteraction local_208;
  FLightMapInteraction local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_3f8 = param_2;
  local_3e8 = param_1;
  cVar5 = (**(code **)(param_6->_padding_ + 0x250))(param_6);
  local_404[0] = IsTranslucentBlendMode(param_6);
  pbVar12 = (byte *)(**(code **)(param_6->_padding_ + 0x280))(param_6,local_3f0);
  bVar2 = *pbVar12;
  local_3e0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  local_3fc = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_3e0);
  local_400 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_3e0);
  pTVar19 = (TConsoleVariableData<int> *)0x0;
  if ((param_1->LCI == (FLightCacheInterface *)0x0) || ((bVar2 & 1) != 0)) {
    pTVar13 = &local_2e8;
    local_2e8._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_2e8._8_8_ = _UNK_150689648;
    local_2d8 = ___xmm_3f800000000000000000000000000000;
    uStack_2d0 = _UNK_150689648;
    local_2c8 = ___xmm_3f800000000000000000000000000000;
    uStack_2c0 = _UNK_150689648;
    local_2b8 = ___xmm_3f800000000000000000000000000000;
    uStack_2b0 = _UNK_150689648;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_288 = ___xmm_3f800000000000000000000000000000;
    uStack_280 = _UNK_150689648;
    local_278 = ___xmm_3f800000000000000000000000000000;
    uStack_270 = _UNK_150689648;
    local_268 = ___xmm_3f800000000000000000000000000000;
    uStack_260 = _UNK_150689648;
    local_258 = ___xmm_3f800000000000000000000000000000;
    uStack_250 = _UNK_150689648;
    local_298 = 0;
    local_248 = 0;
    local_238 = 0;
    local_230 = 0;
  }
  else {
    pTVar13 = (TVector4<float>_u_0 *)
              FLightCacheInterface::GetLightMapInteraction
                        (param_1->LCI,&local_208,(Type)this->_padding_);
  }
  local_3c8 = *(undefined8 *)&((TVector4<float> *)&(pTVar13->_s_0).X)->field0_0x0;
  uStack_3c0._0_4_ = *(float *)((longlong)pTVar13 + 8);
  uStack_3c0._4_4_ = *(float *)((longlong)pTVar13 + 0xc);
  local_3b8 = *(undefined8 *)&(&pTVar13->_s_0)[1].X;
  uStack_3b0._0_4_ = ((TVector4<float>_u_0_s_0 *)(pTVar13 + 1))->Z;
  uStack_3b0._4_4_ = ((TVector4<float>_u_0_s_0 *)(pTVar13 + 1))->W;
  local_3a8 = *(undefined8 *)&((TVector4<float> *)(pTVar13->XYZW + 8))->field0_0x0;
  uStack_3a0 = *(undefined8 *)(pTVar13->XYZW + 10);
  local_398 = *(undefined8 *)&((TVector4<float> *)(pTVar13->XYZW + 0xc))->field0_0x0;
  uStack_390 = *(undefined8 *)(pTVar13->XYZW + 0xe);
  local_388 = *(ULightMapTexture2D **)(pTVar13->XYZW + 0x10);
  pUStack_380 = *(ULightMapTexture2D **)(pTVar13->XYZW + 0x12);
  local_378 = *(ULightMapTexture2D **)(pTVar13->XYZW + 0x14);
  lStack_370 = *(longlong *)(pTVar13->XYZW + 0x16);
  local_368 = *(undefined8 *)&((TVector4<float> *)(pTVar13->XYZW + 0x18))->field0_0x0;
  uStack_360 = *(undefined8 *)(pTVar13->XYZW + 0x1a);
  local_348 = *(undefined8 *)&((TVector4<float> *)(pTVar13->XYZW + 0x20))->field0_0x0;
  uStack_340 = *(undefined8 *)(pTVar13->XYZW + 0x22);
  local_358 = *(undefined8 *)&((TVector4<float> *)(pTVar13->XYZW + 0x1c))->field0_0x0;
  uStack_350 = *(undefined8 *)(pTVar13->XYZW + 0x1e);
  local_338 = *(undefined8 *)&((TVector4<float> *)(pTVar13->XYZW + 0x24))->field0_0x0;
  uStack_330 = *(undefined8 *)(pTVar13->XYZW + 0x26);
  local_328 = *(ULightMapTexture2D **)(pTVar13->XYZW + 0x28);
  uStack_320 = *(undefined8 *)(pTVar13->XYZW + 0x2a);
  local_318 = *(ULightMapVirtualTexture2D **)(pTVar13->XYZW + 0x2c);
  uStack_310 = *(undefined8 *)(pTVar13->XYZW + 0x2e);
  local_308 = (((TVector2<double> *)(pTVar13->XYZW + 0x30))->field0_0x0)._s_0.X;
  uStack_300 = *(undefined8 *)(pTVar13->XYZW + 0x32);
  local_2f8 = (((TVector2<double> *)(pTVar13->XYZW + 0x34))->field0_0x0)._s_0.X;
  uStack_2f0 = *(undefined8 *)(pTVar13->XYZW + 0x36);
  bVar6 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)(Type)this->_padding_);
  if (bVar6) {
    bVar6 = true;
    if ((char)uStack_320 == '\0') goto LAB_144bea28c;
  }
  else {
LAB_144bea28c:
    bVar6 = false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar17 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))(pIVar16,L"r.SupportLowQualityLightmaps",1);
    pTVar18 = pTVar19;
    if (plVar17 != (longlong *)0x0) {
      pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    SupportLowQualityLightmapsVar = pTVar18;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar18 = SupportLowQualityLightmapsVar;
  if (SupportLowQualityLightmapsVar != (TConsoleVariableData<int> *)0x0) {
    bVar7 = IsInParallelGameThread();
    if ((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) {
      pTVar19 = (TConsoleVariableData<int> *)&DAT_00000004;
    }
    bVar7 = false;
    if (*(int *)((longlong)pTVar18->ShadowedValue + (longlong)pTVar19->ShadowedValue) == 0)
    goto LAB_144bea2ed;
  }
  bVar7 = true;
LAB_144bea2ed:
  if ((((local_404[0] == '\0') || ((*(byte *)(*(longlong *)(this->_padding_ + 8) + 0x58) & 2) != 0))
      && (cVar8 = (**(code **)(param_6->_padding_ + 0x368))(param_6), cVar8 == '\0')) &&
     (puVar14 = (ushort *)(**(code **)(param_6->_padding_ + 0x280))(param_6,local_404),
     (*puVar14 & 0x400) == 0)) {
    if ((cVar5 == '\0') &&
       (bVar9 = FMaterial::MaterialModifiesMeshPosition_RenderThread(param_6), !bVar9)) {
      param_5 = (FMaterialRenderProxy *)
                (**(code **)(((GEngine->LevelColorationLitMaterial).field0_0x0.DebugPtr)->_padding_
                            + 0x310))();
      param_6 = (FMaterial *)(**(code **)(param_5->_padding_ + 0x30))(param_5,(int)this->_padding_);
      if (param_6 == (FMaterial *)0x0) {
        return false;
      }
    }
    pFVar4 = local_3e8;
    if (param_5 == (FMaterialRenderProxy *)0x0) {
      param_5 = local_3e8->MaterialRenderProxy;
    }
    if (((param_6 == (FMaterial *)0x0) || (param_5 == (FMaterialRenderProxy *)0x0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Material && MaterialRenderProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightMapDensityRendering.cpp"
                           ,0x129,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
    if ((((bVar2 & 1) == 0) && (param_3 != (FPrimitiveSceneProxy *)0x0)) &&
       (((int)uStack_310 == 2 ||
        (((param_3->Mobility).Value == '\0' &&
         (iVar11 = (**(code **)(param_3->_padding_ + 0x1f0))(param_3), 0 < iVar11)))))) {
      ppFVar1 = &pFVar4->LCI;
      if ((*ppFVar1 == (FLightCacheInterface *)0x0) ||
         (pFVar15 = FLightCacheInterface::GetLightMapInteraction
                              (*ppFVar1,&local_128,(Type)this->_padding_),
         pFVar15->Type != LMIT_Texture)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((bVar6) || (bVar7)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7 || bVar9) {
        bVar6 = Process<TUniformLightMapPolicy<13>_>
                          (this,pFVar4,local_3f8,param_3,param_4,param_5,param_6,local_3d0,ppFVar1,
                           local_3fc,local_400);
      }
      else if (bVar6) {
        bVar6 = Process<TUniformLightMapPolicy<5>_>
                          (this,pFVar4,local_3f8,param_3,param_4,param_5,param_6,&local_3d8,ppFVar1,
                           local_3fc,local_400);
      }
      else {
        bVar6 = Process<TUniformLightMapPolicy<4>_>
                          (this,pFVar4,local_3f8,param_3,param_4,param_5,param_6,&local_3d4,ppFVar1,
                           local_3fc,local_400);
      }
    }
    else {
      bVar6 = Process<TUniformLightMapPolicy<0>_>
                        (this,pFVar4,local_3f8,param_3,param_4,param_5,param_6,
                         (TUniformLightMapPolicy<0> *)&local_3e8,&pFVar4->LCI,local_3fc,local_400);
    }
  }
  else {
    bVar6 = true;
  }
  return bVar6;
}


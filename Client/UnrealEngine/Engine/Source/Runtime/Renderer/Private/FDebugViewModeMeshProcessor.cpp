// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FDebugViewModeMeshProcessor @ 1447f2ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDebugViewModeMeshProcessor * __thiscall
FDebugViewModeMeshProcessor::FDebugViewModeMeshProcessor
          (FDebugViewModeMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          bool param_4,FMeshPassDrawListContext *param_5)

{
  EDebugViewShaderMode EVar1;
  FDebugViewModeInterface *pFVar2;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,DebugViewMode,param_1,param_2,param_3,param_5);
  this->ViewModeParam = -1;
  this->DebugViewMode = DVSM_None;
  this->_padding_ = (longlong)&___7FDebugViewModeMeshProcessor__6B_;
  (this->ViewModeParamName).ComparisonIndex = 0;
  (this->ViewModeParamName).Number = 0;
  this->DebugViewModeInterface = (FDebugViewModeInterface *)0x0;
  if (param_3 != (FSceneView *)0x0) {
    EVar1 = FSceneViewFamily::GetDebugViewShaderMode(param_3->Family);
    this->DebugViewMode = EVar1;
    this->ViewModeParam = param_3->Family->ViewModeParam;
    this->ViewModeParamName = param_3->Family->ViewModeParamName;
    pFVar2 = (FDebugViewModeInterface *)0x0;
    if (EVar1 < DVSM_MAX) {
      pFVar2 = FDebugViewModeInterface::Singleton;
    }
    this->DebugViewModeInterface = pFVar2;
  }
  return this;
}

// AddMeshBatch @ 1448018f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FDebugViewModeMeshProcessor::AddMeshBatch
          (FDebugViewModeMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  FMaterialRenderProxy *pFVar1;
  FDebugViewModeInterface *pFVar2;
  ForElementType<FMeshBatchElement> FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ERasterizerFillMode EVar7;
  ERasterizerCullMode EVar8;
  undefined4 uVar9;
  FMaterial *this_00;
  FVertexFactoryType *pFVar10;
  FMeshDrawCommandSortKey FVar11;
  TVector<double> *pTVar12;
  char cVar13;
  FColor *pFVar14;
  undefined1 auStackY_308 [32];
  FMeshDrawingPolicyOverrideSettings local_290;
  code *local_288;
  FPrimitiveSceneProxy *local_280;
  ulong64 local_278;
  FRHIBlendState *local_270;
  FRHIDepthStencilState *pFStack_268;
  FDebugViewModeShaderElementData local_258;
  TMeshProcessorShaders<FDebugViewModeVS,FDebugViewModePS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1e8;
  FMeshPassProcessorRenderState local_198;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  ForElementType<FMeshBatchElement> FVar15;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (this->DebugViewModeInterface != (FDebugViewModeInterface *)0x0) {
    pFVar1 = param_1->MaterialRenderProxy;
    local_280 = param_3;
    local_278 = param_2;
    this_00 = (FMaterial *)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,(int)this->_padding_);
    if (this_00 != (FMaterial *)0x0) {
      pFVar10 = (FVertexFactoryType *)
                (**(code **)(param_1->VertexFactory->_padding_ + 0x30))(param_1->VertexFactory);
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
      (**(code **)((longlong)*this->DebugViewModeInterface + 8))
                (this->DebugViewModeInterface,(int)this->_padding_,pFVar10,&local_e8);
      bVar6 = FMaterial::ShouldCacheShaders(this_00,&local_e8,pFVar10);
      if (bVar6) {
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
        bVar6 = FMaterial::TryGetShaders(this_00,&local_e8,pFVar10,&local_158);
        if (bVar6) {
          local_1e8.VertexShader.ShaderContent = (FDebugViewModeVS *)0x0;
          local_1e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
          local_1e8.PixelShader.ShaderContent = (FDebugViewModePS *)0x0;
          local_1e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
          local_1e8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
          local_1e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
          local_1e8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
          local_1e8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
          local_1e8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
          local_1e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
          if ((FMeshMaterialShader *)local_158.Shaders[0] != (FMeshMaterialShader *)0x0) {
            local_1e8.VertexShader.ShaderContent = (FDebugViewModeVS *)local_158.Shaders[0];
            local_1e8.VertexShader.ShaderMap = local_158.ShaderMap;
          }
          if ((FDebugViewModePS *)local_158.Shaders[3] != (FDebugViewModePS *)0x0) {
            local_1e8.PixelShader.ShaderContent = (FDebugViewModePS *)local_158.Shaders[3];
            local_1e8.PixelShader.ShaderMap = local_158.ShaderMap;
          }
          local_290 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
          EVar7 = FMeshPassProcessor::ComputeMeshFillMode(this_00,&local_290);
          EVar8 = FMeshPassProcessor::ComputeMeshCullMode(this_00,&local_290);
          pFVar2 = this->DebugViewModeInterface;
          local_270 = (FRHIBlendState *)0x0;
          pFStack_268 = (FRHIDepthStencilState *)0x0;
          local_198.DepthStencilAccess = DepthRead_StencilRead;
          local_198.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_198.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_198.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_198.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_288 = *(code **)((longlong)*pFVar2 + 0x10);
          if (this->_padding_ != 0) {
            FSceneInterface::GetShadingPath(*(Type *)(this->_padding_ + 8));
          }
          uVar9 = (**(code **)(this_00->_padding_ + 0x268))(this_00);
          (*local_288)(pFVar2,this->DebugViewMode,uVar9,&local_270);
          local_258.ViewModeParam = this->ViewModeParam;
          local_198.BlendState = local_270;
          local_198.DepthStencilState = pFStack_268;
          local_198.StencilRef = 0;
          if ((this->_padding_ == 0) ||
             ((*(uint *)(*(longlong *)(this->_padding_ + 8) + 0x60) & 0x800000) == 0)) {
            pFVar14 = &FColor::White;
          }
          else {
            if (((param_1->Elements).ArrayNum < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar3 = (param_1->Elements).AllocatorInstance.SecondaryData;
            FVar15 = (ForElementType<FMeshBatchElement>)param_1;
            if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
              FVar15 = FVar3;
            }
            pFVar14 = (FColor *)((longlong)FVar15 + 0x80);
          }
          lVar4 = this->_padding_;
          if ((lVar4 == 0) || ((*(uint *)(*(longlong *)(lVar4 + 8) + 0x5c) & 0x8000) == 0)) {
            cVar13 = param_1->VisualizeLODIndex;
            if (lVar4 == 0) {
              pTVar12 = &UE::Math::TVector<double>::ZeroVector;
            }
            else {
              pTVar12 = (TVector<double> *)(lVar4 + 0xbc8);
            }
          }
          else {
            cVar13 = param_1->VisualizeHLODIndex;
            pTVar12 = (TVector<double> *)(lVar4 + 0xbc8);
          }
          local_258.DebugViewMode = this->DebugViewMode;
          local_258.VisualizeLODIndex = (int)cVar13;
          local_258._padding_ = 0;
          local_258._padding_ = 0;
          local_258.ViewOrigin.field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
          local_258.ViewOrigin.field0_0x0._s_0.Y = (pTVar12->field0_0x0)._s_0.Y;
          local_258.ViewOrigin.field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
          local_258.SkinCacheDebugColor.field0_0x0 = pFVar14->field0_0x0;
          local_258.ViewModeParamName = this->ViewModeParamName;
          local_258.NumVSInstructions = 0;
          local_258.NumPSInstructions = 0;
          local_258.NumCSInstructions = 0;
          local_258.LWCComplexityVS = 0;
          local_258.LWCComplexityPS = 0;
          local_258.LWCComplexityCS = 0;
          local_258.MaterialRenderProxy = pFVar1;
          local_258.Material = this_00;
          UpdateInstructionCount(this,&local_258,this_00,pFVar10);
          FMeshMaterialShaderElementData::InitializeMeshMaterialData
                    ((FMeshMaterialShaderElementData *)&local_258,(FSceneView *)this->_padding_,
                     local_280,param_1,param_4,true);
          FVar11 = CalculateMeshStaticSortKey
                             ((FMeshMaterialShader *)local_1e8.VertexShader.ShaderContent,
                              (FMeshMaterialShader *)local_1e8.PixelShader.ShaderContent);
          FMeshPassProcessor::
          BuildMeshDrawCommands<TMeshProcessorShaders<FDebugViewModeVS,FDebugViewModePS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FDebugViewModeShaderElementData>
                    ((FMeshPassProcessor *)this,param_1,local_278,local_280,pFVar1,this_00,
                     &local_198,&local_1e8,EVar7,EVar8,FVar11,Default,&local_258);
        }
      }
    }
  }
  return;
}

// UpdateInstructionCount @ 1448378a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FDebugViewModeMeshProcessor::UpdateInstructionCount
          (FDebugViewModeMeshProcessor *this,FDebugViewModeShaderElementData *param_1,
          FMaterial *param_2,FVertexFactoryType *param_3)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  EShadingPath EVar5;
  int iVar6;
  FShaderType *pFVar7;
  ushort *puVar8;
  FStaticShaderPlatform FVar9;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  TShaderRefBase<TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
  local_190;
  TShaderRefBase<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
  local_180;
  FMaterialShaders local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (((param_2 == (FMaterial *)0x0) || (param_3 == (FVertexFactoryType *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBatchMaterial && InVertexFactoryType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DebugViewModeRendering.cpp"
                         ,0x1fd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->_padding_ != 0) {
    EVar5 = FSceneInterface::GetShadingPath(*(Type *)(this->_padding_ + 8));
    if (EVar5 == Deferred) {
      if (param_2->FeatureLevel == Num) {
        FVar9.Platform = SP_NumPlatforms;
      }
      else {
        FVar9.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2->FeatureLevel];
      }
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
      pFVar7 = (FShaderType *)TBasePassVS<TUniformLightMapPolicy<0>_>::GetStaticType();
      bVar1 = (byte)pFVar7->Frequency;
      if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderType[Frequency] == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                             ,0xd0,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_f8.ShaderType[bVar1] = pFVar7;
      local_f8.PermutationId[bVar1] = 0;
      pFVar7 = (FShaderType *)TBasePassPS<TUniformLightMapPolicy<0>,0,0>::GetStaticType();
      bVar1 = (byte)pFVar7->Frequency;
      if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderType[Frequency] == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                             ,0xd0,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_f8.ShaderType[bVar1] = pFVar7;
      local_f8.PermutationId[bVar1] = 0;
      local_168.ShaderMap = (FShaderMapBase *)0x0;
      local_168.Pipeline = (FShaderPipeline *)0x0;
      local_168.Shaders[0] = (FShader *)0x0;
      local_168.Shaders[1] = (FShader *)0x0;
      local_168.Shaders[2] = (FShader *)0x0;
      local_168.Shaders[3] = (FShader *)0x0;
      local_168.Shaders[4] = (FShader *)0x0;
      local_168.Shaders[5] = (FShader *)0x0;
      local_168.Shaders[6] = (FShader *)0x0;
      local_168.Shaders[7] = (FShader *)0x0;
      local_168.Shaders[8] = (FShader *)0x0;
      local_168.Shaders[9] = (FShader *)0x0;
      local_168.Shaders[10] = (FShader *)0x0;
      local_168.Shaders[0xb] = (FShader *)0x0;
      bVar4 = FMaterial::TryGetShaders(param_2,&local_f8,param_3,&local_168);
      if (!bVar4) {
        return;
      }
      param_1->NumVSInstructions = 0;
      param_1->NumPSInstructions = 0;
      bVar4 = IsForwardShadingEnabled(FVar9);
      if ((bVar4) && (bVar4 = IsTranslucentBlendMode(param_2), !bVar4)) {
        puVar8 = (ushort *)(**(code **)(param_2->_padding_ + 0x280))(param_2,local_198);
        uVar2 = *puVar8;
        param_1->NumVSInstructions =
             param_1->NumVSInstructions +
             (GShaderComplexityBaselineDeferredVS - GShaderComplexityBaselineForwardVS);
        iVar6 = GShaderComplexityBaselineForwardUnlitPS - GShaderComplexityBaselineDeferredUnlitPS;
        if ((uVar2 & 1) == 0) {
          iVar6 = GShaderComplexityBaselineForwardPS - GShaderComplexityBaselineDeferredPS;
        }
        param_1->NumPSInstructions = param_1->NumPSInstructions - iVar6;
      }
      param_1->NumCSInstructions = 0;
      iVar6 = param_1->NumVSInstructions;
      if (param_1->NumVSInstructions < 0) {
        iVar6 = 0;
      }
      param_1->NumVSInstructions = iVar6;
      iVar6 = param_1->NumPSInstructions;
      if (param_1->NumPSInstructions < 0) {
        iVar6 = 0;
      }
    }
    else {
      local_180.ShaderContent = (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_180.ShaderMap = (FShaderMapBase *)0x0;
      local_190.ShaderContent = (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_190.ShaderMap = (FShaderMapBase *)0x0;
      bVar4 = MobileBasePass::GetShaders
                        (LMP_NO_LIGHTMAP,LOCAL_LIGHTS_DISABLED,param_2,param_3,&local_180,&local_190
                        );
      if (bVar4) {
        param_1->NumVSInstructions = 0;
        param_1->NumPSInstructions = 0;
        param_1->NumCSInstructions = 0;
      }
      if (param_2->FeatureLevel == Num) {
        FVar9.Platform = SP_NumPlatforms;
      }
      else {
        FVar9.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2->FeatureLevel];
      }
      bVar4 = IsMaskedBlendMode(param_2);
      if (!bVar4) {
        return;
      }
      bVar4 = MaskedInEarlyPass(FVar9);
      if (bVar4) {
        return;
      }
      iVar6 = (int)((float)param_1->NumPSInstructions * GShaderComplexityMobileMaskedCostMultiplier)
      ;
    }
    param_1->NumPSInstructions = iVar6;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FEditorPrimitivesBasePassMeshProcessor @ 14485c850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FEditorPrimitivesBasePassMeshProcessor * __thiscall
FEditorPrimitivesBasePassMeshProcessor::FEditorPrimitivesBasePassMeshProcessor
          (FEditorPrimitivesBasePassMeshProcessor *this,FScene *param_1,Type param_2,
          FSceneView *param_3,FMeshPassProcessorRenderState *param_4,bool param_5,
          FMeshPassDrawListContext *param_6)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,Num,param_1,param_2,param_3,param_6);
  this->_padding_ = (longlong)&___7FEditorPrimitivesBasePassMeshProcessor__6B_;
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
  pFVar2 = param_4->NaniteUniformBuffer;
  uVar4 = param_4->StencilRef;
  uVar3 = *(undefined4 *)&param_4->field_0x3c;
  this->bTranslucentBasePass = param_5;
  (this->PassDrawRenderState).NaniteUniformBuffer = pFVar2;
  (this->PassDrawRenderState).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar3;
  return this;
}

// AddMeshBatch @ 144866170

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

void __thiscall
FEditorPrimitivesBasePassMeshProcessor::AddMeshBatch
          (FEditorPrimitivesBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  Type TVar1;
  bool bVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  int iVar5;
  ERasterizerFillMode EVar6;
  ERasterizerCullMode EVar7;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar8;
  FVertexFactoryType *pFVar9;
  ushort *puVar10;
  FMeshDrawCommandSortKey FVar11;
  FMaterialRenderProxy *pFVar12;
  undefined1 local_res10 [8];
  ulong64 local_res18;
  FMeshDrawingPolicyOverrideSettings local_f8;
  FMeshDrawingPolicyOverrideSettings local_f0;
  TMobileBasePassShaderElementData<FUniformLightMapPolicy> local_e8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_c8;
  FMeshPassProcessorRenderState local_78;
  
  if (param_1->bUseForMaterial != 0) {
    local_res18 = param_2;
    for (pFVar12 = param_1->MaterialRenderProxy; pFVar12 != (FMaterialRenderProxy *)0x0;
        pFVar12 = (FMaterialRenderProxy *)
                  (**(code **)(pFVar12->_padding_ + 0x38))(pFVar12,(int)this->_padding_)) {
      this_00 = (FMaterial *)(**(code **)(pFVar12->_padding_ + 0x30))(pFVar12);
      if ((this_00 != (FMaterial *)0x0) &&
         (pFVar8 = FMaterial::GetRenderingThreadShaderMap(this_00),
         pFVar8 != (FMaterialShaderMap *)0x0)) {
        bVar2 = IsTranslucentBlendMode(this_00);
        if (bVar2 != this->bTranslucentBasePass) {
          return;
        }
        if ((param_3 != (FPrimitiveSceneProxy *)0x0) && (param_3->bRenderInMainPass == '\0')) {
          return;
        }
        iVar5 = (**(code **)(this_00->_padding_ + 0x40))(this_00);
        if (iVar5 == 3) {
          return;
        }
        TVar1 = (Type)this->_padding_;
        local_c8.VertexShader.ShaderContent =
             (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
        local_c8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
        local_c8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_c8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
        local_c8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_c8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
        local_c8.PixelShader.ShaderContent =
             (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
        local_c8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
        local_c8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
        local_c8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
        pFVar9 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
        if ((int)TVar1 < 3) {
          bVar3 = MobileBasePass::GetShaders
                            (LMP_NO_LIGHTMAP,LOCAL_LIGHTS_DISABLED,this_00,pFVar9,
                             (TShaderRefBase<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
                              *)&local_c8,
                             (TShaderRefBase<TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
                              *)&local_c8.PixelShader);
          bVar2 = false;
          if (bVar3) {
            local_78.BlendState = (this->PassDrawRenderState).BlendState;
            local_78.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
            local_78.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
            local_78._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
            local_78.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
            local_78.InstancedViewUniformBuffer =
                 (this->PassDrawRenderState).InstancedViewUniformBuffer;
            local_78.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
            local_78.NaniteUniformBuffer._0_4_ =
                 *(undefined4 *)&(this->PassDrawRenderState).NaniteUniformBuffer;
            local_78.NaniteUniformBuffer._4_4_ =
                 *(undefined4 *)((longlong)&(this->PassDrawRenderState).NaniteUniformBuffer + 4);
            local_78.StencilRef = (this->PassDrawRenderState).StencilRef;
            local_78._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
            if (this->bTranslucentBasePass != false) {
              puVar10 = (ushort *)(**(code **)(this_00->_padding_ + 0x280))(this_00,local_res10);
              MobileBasePass::SetTranslucentRenderState
                        (&local_78,this_00,(FMaterialShadingModelField)*puVar10);
            }
            local_f8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
            EVar6 = FMeshPassProcessor::ComputeMeshFillMode(this_00,&local_f8);
            EVar7 = FMeshPassProcessor::ComputeMeshCullMode(this_00,&local_f8);
            local_e8.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
            local_e8._padding_ = 0;
            local_e8._padding_ = 0;
            local_e8.bCanReceiveCSM = false;
            FMeshMaterialShaderElementData::InitializeMeshMaterialData
                      ((FMeshMaterialShaderElementData *)&local_e8,(FSceneView *)this->_padding_,
                       param_3,param_1,param_4,false);
            FVar11 = CalculateMeshStaticSortKey
                               ((FMeshMaterialShader *)local_c8.VertexShader.ShaderContent,
                                (FMeshMaterialShader *)local_c8.PixelShader.ShaderContent);
            FMeshPassProcessor::
            BuildMeshDrawCommands<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TMobileBasePassShaderElementData<FUniformLightMapPolicy>_>
                      ((FMeshPassProcessor *)this,param_1,local_res18,param_3,pFVar12,this_00,
                       &local_78,
                       (TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
                        *)&local_c8,EVar6,EVar7,FVar11,Default,&local_e8);
LAB_1448664c4:
            bVar2 = true;
          }
        }
        else {
          bVar3 = GetBasePassShaders<FUniformLightMapPolicy>
                            (this_00,pFVar9,(FUniformLightMapPolicy)0x0,TVar1,false,false,false,
                             GBL_Default,&local_c8.VertexShader,&local_c8.PixelShader,false);
          bVar2 = false;
          if (bVar3) {
            local_78.BlendState = (this->PassDrawRenderState).BlendState;
            local_78.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
            local_78.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
            local_78._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
            local_78.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
            local_78.InstancedViewUniformBuffer =
                 (this->PassDrawRenderState).InstancedViewUniformBuffer;
            local_78.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
            local_78.NaniteUniformBuffer._0_4_ =
                 *(undefined4 *)&(this->PassDrawRenderState).NaniteUniformBuffer;
            local_78.NaniteUniformBuffer._4_4_ =
                 *(undefined4 *)((longlong)&(this->PassDrawRenderState).NaniteUniformBuffer + 4);
            local_78.StencilRef = (this->PassDrawRenderState).StencilRef;
            local_78._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
            if (this->bTranslucentBasePass != false) {
              EVar4 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
              SetTranslucentRenderState(&local_78,this_00,EVar4,TPT_TranslucencyStandard);
            }
            local_f0 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
            EVar6 = FMeshPassProcessor::ComputeMeshFillMode(this_00,&local_f0);
            EVar7 = FMeshPassProcessor::ComputeMeshCullMode(this_00,&local_f0);
            local_e8.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
            local_e8._padding_ = 0;
            local_e8._padding_ = 0;
            FMeshMaterialShaderElementData::InitializeMeshMaterialData
                      ((FMeshMaterialShaderElementData *)&local_e8,(FSceneView *)this->_padding_,
                       param_3,param_1,param_4,false);
            FVar11 = CalculateMeshStaticSortKey
                               ((FMeshMaterialShader *)local_c8.VertexShader.ShaderContent,
                                (FMeshMaterialShader *)local_c8.PixelShader.ShaderContent);
            FMeshPassProcessor::
            BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FUniformLightMapPolicy>_>
                      ((FMeshPassProcessor *)this,param_1,local_res18,param_3,pFVar12,this_00,
                       &local_78,&local_c8,EVar6,EVar7,FVar11,Default,
                       (TBasePassShaderElementData<FUniformLightMapPolicy> *)&local_e8);
            goto LAB_1448664c4;
          }
        }
        if (bVar2) {
          return;
        }
      }
    }
  }
  return;
}

// ProcessDeferredShadingPath @ 14488b080

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
FEditorPrimitivesBasePassMeshProcessor::ProcessDeferredShadingPath
          (FEditorPrimitivesBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FMaterial *param_3,FMaterialRenderProxy *param_4,FPrimitiveSceneProxy *param_5,int param_6
          )

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  ERasterizerFillMode EVar5;
  ERasterizerCullMode EVar6;
  FVertexFactoryType *pFVar7;
  FMeshDrawCommandSortKey FVar8;
  FMeshDrawingPolicyOverrideSettings local_res8;
  TBasePassShaderElementData<FUniformLightMapPolicy> local_c8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_a8;
  FMeshPassProcessorRenderState local_58;
  
  local_a8.VertexShader.ShaderContent =
       (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.PixelShader.ShaderContent =
       (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  lVar1 = this->_padding_;
  local_a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar7 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar2 = GetBasePassShaders<FUniformLightMapPolicy>
                    (param_3,pFVar7,(FUniformLightMapPolicy)0x0,(Type)lVar1,false,false,false,
                     GBL_Default,&local_a8.VertexShader,&local_a8.PixelShader,false);
  bVar3 = false;
  if (bVar2) {
    local_58.BlendState = (this->PassDrawRenderState).BlendState;
    local_58.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_58.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_58._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_58.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_58.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_58.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_58.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_58.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_58._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    if (this->bTranslucentBasePass != false) {
      EVar4 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
      SetTranslucentRenderState(&local_58,param_3,EVar4,TPT_TranslucencyStandard);
    }
    local_res8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar5 = FMeshPassProcessor::ComputeMeshFillMode(param_3,&local_res8);
    EVar6 = FMeshPassProcessor::ComputeMeshCullMode(param_3,&local_res8);
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_c8,(FSceneView *)this->_padding_,param_5,
               param_1,param_6,false);
    FVar8 = CalculateMeshStaticSortKey
                      ((FMeshMaterialShader *)local_a8.VertexShader.ShaderContent,
                       (FMeshMaterialShader *)local_a8.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FUniformLightMapPolicy>_>
              ((FMeshPassProcessor *)this,param_1,param_2,param_5,param_4,param_3,&local_58,
               &local_a8,EVar5,EVar6,FVar8,Default,&local_c8);
    bVar3 = true;
  }
  return bVar3;
}

// ProcessMobileShadingPath @ 14488b8a0

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
FEditorPrimitivesBasePassMeshProcessor::ProcessMobileShadingPath
          (FEditorPrimitivesBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FMaterial *param_3,FMaterialRenderProxy *param_4,FPrimitiveSceneProxy *param_5,int param_6
          )

{
  bool bVar1;
  ERasterizerFillMode EVar2;
  ERasterizerCullMode EVar3;
  FVertexFactoryType *pFVar4;
  ushort *puVar5;
  FMeshDrawCommandSortKey FVar6;
  undefined1 local_res10 [8];
  FMeshDrawingPolicyOverrideSettings local_e8;
  TMobileBasePassShaderElementData<FUniformLightMapPolicy> local_e0;
  TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_b8;
  FMeshPassProcessorRenderState local_68;
  
  local_b8.VertexShader.ShaderContent =
       (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_b8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_b8.PixelShader.ShaderContent =
       (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_b8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_b8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_b8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_b8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_b8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_b8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_b8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  pFVar4 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar1 = MobileBasePass::GetShaders
                    (LMP_NO_LIGHTMAP,LOCAL_LIGHTS_DISABLED,param_3,pFVar4,&local_b8.VertexShader,
                     &local_b8.PixelShader);
  if (!bVar1) {
    return false;
  }
  local_68.BlendState = (this->PassDrawRenderState).BlendState;
  local_68.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
  local_68.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
  local_68._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
  local_68.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
  local_68.InstancedViewUniformBuffer._0_4_ =
       *(undefined4 *)&(this->PassDrawRenderState).InstancedViewUniformBuffer;
  local_68.InstancedViewUniformBuffer._4_4_ =
       *(undefined4 *)((longlong)&(this->PassDrawRenderState).InstancedViewUniformBuffer + 4);
  local_68.PassUniformBuffer._0_4_ = *(undefined4 *)&(this->PassDrawRenderState).PassUniformBuffer;
  local_68.PassUniformBuffer._4_4_ =
       *(undefined4 *)((longlong)&(this->PassDrawRenderState).PassUniformBuffer + 4);
  local_68.NaniteUniformBuffer._0_4_ =
       *(undefined4 *)&(this->PassDrawRenderState).NaniteUniformBuffer;
  local_68.NaniteUniformBuffer._4_4_ =
       *(undefined4 *)((longlong)&(this->PassDrawRenderState).NaniteUniformBuffer + 4);
  local_68.StencilRef = (this->PassDrawRenderState).StencilRef;
  local_68._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
  if (this->bTranslucentBasePass != false) {
    puVar5 = (ushort *)(**(code **)(param_3->_padding_ + 0x280))(param_3,local_res10);
    MobileBasePass::SetTranslucentRenderState(&local_68,param_3,(FMaterialShadingModelField)*puVar5)
    ;
  }
  local_e8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
  EVar2 = FMeshPassProcessor::ComputeMeshFillMode(param_3,&local_e8);
  EVar3 = FMeshPassProcessor::ComputeMeshCullMode(param_3,&local_e8);
  local_e0._padding_ = 0;
  local_e0._padding_ = 0;
  local_e0.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
  local_e0.bCanReceiveCSM = false;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_e0,(FSceneView *)this->_padding_,param_5,
             param_1,param_6,false);
  FVar6 = CalculateMeshStaticSortKey
                    ((FMeshMaterialShader *)local_b8.VertexShader.ShaderContent,
                     (FMeshMaterialShader *)local_b8.PixelShader.ShaderContent);
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TMobileBasePassShaderElementData<FUniformLightMapPolicy>_>
            ((FMeshPassProcessor *)this,param_1,param_2,param_5,param_4,param_3,&local_68,&local_b8,
             EVar2,EVar3,FVar6,Default,&local_e0);
  return true;
}

// TryAddMeshBatch @ 1448ab660

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
FEditorPrimitivesBasePassMeshProcessor::TryAddMeshBatch
          (FEditorPrimitivesBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  Type TVar1;
  longlong lVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  int iVar5;
  ERasterizerFillMode EVar6;
  ERasterizerCullMode EVar7;
  FVertexFactoryType *pFVar8;
  ushort *puVar9;
  FMeshDrawCommandSortKey FVar10;
  FMeshDrawingPolicyOverrideSettings local_res8;
  FMeshDrawingPolicyOverrideSettings local_f8;
  TMobileBasePassShaderElementData<FUniformLightMapPolicy> local_f0;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_c8;
  FMeshPassProcessorRenderState local_78;
  
  bVar3 = IsTranslucentBlendMode(param_6);
  if ((bVar3 == this->bTranslucentBasePass) &&
     ((param_3 == (FPrimitiveSceneProxy *)0x0 || (param_3->bRenderInMainPass != '\0')))) {
    iVar5 = (**(code **)(param_6->_padding_ + 0x40))(param_6);
    if (iVar5 == 3) {
      return true;
    }
    TVar1 = (Type)this->_padding_;
    local_c8.VertexShader.ShaderContent =
         (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
    local_c8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_c8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_c8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_c8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_c8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    local_c8.PixelShader.ShaderContent =
         (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
    local_c8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_c8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_c8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    lVar2 = param_1->VertexFactory->_padding_;
    if ((int)TVar1 < 3) {
      pFVar8 = (FVertexFactoryType *)(**(code **)(lVar2 + 0x30))();
      bVar3 = MobileBasePass::GetShaders
                        (LMP_NO_LIGHTMAP,LOCAL_LIGHTS_DISABLED,param_6,pFVar8,
                         (TShaderRefBase<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
                          *)&local_c8,
                         (TShaderRefBase<TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FShaderMapPointerTable>
                          *)&local_c8.PixelShader);
      if (bVar3) {
        local_78.BlendState = (this->PassDrawRenderState).BlendState;
        local_78.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
        local_78.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
        local_78._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
        local_78.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
        local_78.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer
        ;
        local_78.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
        local_78.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
        local_78.StencilRef = (this->PassDrawRenderState).StencilRef;
        local_78._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
        if (this->bTranslucentBasePass != false) {
          puVar9 = (ushort *)(**(code **)(param_6->_padding_ + 0x280))(param_6,&local_res8);
          MobileBasePass::SetTranslucentRenderState
                    (&local_78,param_6,(FMaterialShadingModelField)*puVar9);
        }
        local_f8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
        EVar6 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_f8);
        EVar7 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_f8);
        local_f0.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
        local_f0.bCanReceiveCSM = false;
        local_f0._padding_ = 0;
        local_f0._padding_ = 0;
        FMeshMaterialShaderElementData::InitializeMeshMaterialData
                  ((FMeshMaterialShaderElementData *)&local_f0,(FSceneView *)this->_padding_,param_3
                   ,param_1,param_4,false);
        FVar10 = CalculateMeshStaticSortKey
                           ((FMeshMaterialShader *)local_c8.VertexShader.ShaderContent,
                            (FMeshMaterialShader *)local_c8.PixelShader.ShaderContent);
        FMeshPassProcessor::
        BuildMeshDrawCommands<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TMobileBasePassShaderElementData<FUniformLightMapPolicy>_>
                  ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,&local_78,
                   (TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
                    *)&local_c8,EVar6,EVar7,FVar10,Default,&local_f0);
        return true;
      }
    }
    else {
      pFVar8 = (FVertexFactoryType *)(**(code **)(lVar2 + 0x30))();
      bVar3 = GetBasePassShaders<FUniformLightMapPolicy>
                        (param_6,pFVar8,(FUniformLightMapPolicy)0x0,TVar1,false,false,false,
                         GBL_Default,&local_c8.VertexShader,&local_c8.PixelShader,false);
      if (bVar3) {
        local_78.BlendState = (this->PassDrawRenderState).BlendState;
        local_78.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
        local_78.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
        local_78._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
        local_78.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
        local_78.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer
        ;
        local_78.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
        local_78.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
        local_78.StencilRef = (this->PassDrawRenderState).StencilRef;
        local_78._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
        if (this->bTranslucentBasePass != false) {
          EVar4 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
          SetTranslucentRenderState(&local_78,param_6,EVar4,TPT_TranslucencyStandard);
        }
        local_res8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
        EVar6 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_res8);
        EVar7 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_res8);
        local_f0.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
        local_f0._padding_ = 0;
        local_f0._padding_ = 0;
        FMeshMaterialShaderElementData::InitializeMeshMaterialData
                  ((FMeshMaterialShaderElementData *)&local_f0,(FSceneView *)this->_padding_,param_3
                   ,param_1,param_4,false);
        FVar10 = CalculateMeshStaticSortKey
                           ((FMeshMaterialShader *)local_c8.VertexShader.ShaderContent,
                            (FMeshMaterialShader *)local_c8.PixelShader.ShaderContent);
        FMeshPassProcessor::
        BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FUniformLightMapPolicy>_>
                  ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_5,param_6,&local_78,
                   &local_c8,EVar6,EVar7,FVar10,Default,
                   (TBasePassShaderElementData<FUniformLightMapPolicy> *)&local_f0);
        return true;
      }
    }
    return false;
  }
  return true;
}


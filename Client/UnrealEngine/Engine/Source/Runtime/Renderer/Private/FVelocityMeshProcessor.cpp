// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FVelocityMeshProcessor @ 14574ff80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FVelocityMeshProcessor * __thiscall
FVelocityMeshProcessor::FVelocityMeshProcessor
          (FVelocityMeshProcessor *this,Type param_1,FScene *param_2,Type param_3,
          FSceneView *param_4,FMeshPassProcessorRenderState *param_5,
          FMeshPassDrawListContext *param_6)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,param_1,param_2,param_3,param_4,param_6);
  this->_padding_ = (longlong)&___7FVelocityMeshProcessor__6B_;
  pFVar1 = param_5->DepthStencilState;
  (this->PassDrawRenderState).BlendState = param_5->BlendState;
  (this->PassDrawRenderState).DepthStencilState = pFVar1;
  uVar3 = *(undefined4 *)&param_5->field_0x14;
  pFVar2 = param_5->ViewUniformBuffer;
  (this->PassDrawRenderState).DepthStencilAccess = param_5->DepthStencilAccess;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x14 = uVar3;
  (this->PassDrawRenderState).ViewUniformBuffer = pFVar2;
  pFVar2 = param_5->PassUniformBuffer;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = param_5->InstancedViewUniformBuffer;
  (this->PassDrawRenderState).PassUniformBuffer = pFVar2;
  pFVar2 = param_5->NaniteUniformBuffer;
  uVar4 = param_5->StencilRef;
  uVar3 = *(undefined4 *)&param_5->field_0x3c;
  this->MeshPassType = param_1;
  (this->PassDrawRenderState).NaniteUniformBuffer = pFVar2;
  (this->PassDrawRenderState).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar3;
  this->EarlyZPassMode = DDM_None;
  return this;
}

// CollectPSOInitializersInternal @ 14575be00

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

bool __thiscall
FVelocityMeshProcessor::CollectPSOInitializersInternal
          (FVelocityMeshProcessor *this,FSceneTexturesConfig *param_1,
          FPSOPrecacheVertexFactoryData *param_2,FMaterial *param_3,ERasterizerFillMode param_4,
          ERasterizerCullMode param_5,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_6)

{
  Type TVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EPixelFormat EVar6;
  FStaticShaderPlatform FVar7;
  FStaticShaderPlatform FVar8;
  EVelocityPassMode EVar9;
  ETextureCreateFlags EVar10;
  ETextureCreateFlags EVar11;
  undefined1 auStackY_198 [32];
  TMeshProcessorShaders<FVelocityVS,FVelocityPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_118;
  FGraphicsPipelineRenderTargetsInfo local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  TVar1 = this->MeshPassType;
  iVar2 = (int)this->_padding_;
  FVar8.Platform = SP_NumPlatforms;
  local_118.VertexShader.ShaderContent = (FVelocityVS *)0x0;
  local_118.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.PixelShader.ShaderContent = (FVelocityPS *)0x0;
  local_118.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_118.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_118.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_118.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_118.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  FVar7.Platform = SP_NumPlatforms;
  if (iVar2 != 5) {
    FVar7.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar2];
  }
  bVar4 = PlatformSupportsOpenXRMotionVectors(FVar7);
  EVar9 = Velocity_Standard;
  if (bVar4) {
    if ((TVar1 == TranslucentVelocityClippedDepth) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsTranslucentClippedDepthPass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VelocityRendering.cpp"
                           ,0x510,
                           L"Translucent velocity clipped depth is not supported alongside motion vector rendering. If this is causing problems in your project, disable r.Velocity.DirectlyRenderOpenXRMotionVectors."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    EVar9 = Velocity_StereoMotionVectors;
  }
  else if (TVar1 == TranslucentVelocityClippedDepth) {
    EVar9 = Velocity_ClippedDepth;
  }
  bVar4 = GetVelocityPassShaders
                    (param_3,param_2->VertexFactoryType,(Type)this->_padding_,EVar9,
                     &local_118.VertexShader,&local_118.PixelShader);
  if (!bVar4) {
    return bVar4;
  }
  iVar2 = (int)this->_padding_;
  if (iVar2 != 5) {
    FVar8.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar2];
  }
  local_c8.RenderTargetsEnabled = 0;
  local_c8.RenderTargetFormats.Elements[0] = '\0';
  local_c8.RenderTargetFormats.Elements[1] = '\0';
  local_c8.RenderTargetFormats.Elements[2] = '\0';
  local_c8.RenderTargetFormats.Elements[3] = '\0';
  local_c8.RenderTargetFlags.Elements[0] = None;
  local_c8.RenderTargetFlags.Elements[1] = None;
  local_c8.RenderTargetFlags.Elements[2] = None;
  local_c8.RenderTargetFlags.Elements[3] = None;
  local_c8.RenderTargetFlags.Elements[4] = None;
  local_c8.RenderTargetFlags.Elements[5] = None;
  local_c8.RenderTargetFlags.Elements[6] = None;
  local_c8.RenderTargetFlags.Elements[7] = None;
  local_c8.RenderTargetFormats.Elements[4] = '\0';
  local_c8.RenderTargetFormats.Elements[5] = '\0';
  local_c8.RenderTargetFormats.Elements[6] = '\0';
  local_c8.RenderTargetFormats.Elements[7] = '\0';
  local_c8.DepthStencilTargetFormat = PF_Unknown;
  local_c8.DepthStencilTargetFlag = None;
  local_c8.DepthTargetLoadAction = ENoAction;
  local_c8.DepthTargetStoreAction = ENoAction;
  local_c8.StencilTargetLoadAction = ENoAction;
  local_c8.StencilTargetStoreAction = ENoAction;
  local_c8.DepthStencilAccess.Value = DepthNop;
  local_c8.NumSamples = 1;
  local_c8.MultiViewCount = '\0';
  local_c8.bHasFragmentDensityAttachment = false;
  bVar4 = IsUsingBasePassVelocity(FVar8);
  EVar10 = None;
  if (bVar4) {
    EVar10 = GFastVRamConfig.GBufferVelocity;
  }
  bVar4 = NeedVelocityDepth(FVar8.Platform);
  if (bVar4) {
    bVar4 = SupportsTranslucentClippedDepth(FVar8.Platform);
    EVar11 = Atomic64Compatible|UAV|ShaderResource|RenderTargetable;
    if (bVar4) goto LAB_14575bf7a;
  }
  EVar11 = UAV|ShaderResource|RenderTargetable;
LAB_14575bf7a:
  EVar6 = FVelocityRendering::GetFormat(FVar8.Platform);
  AddRenderTargetInfo(EVar6,EVar10 | EVar11,&local_c8);
  SetupDepthStencilInfo
            (PF_DepthStencil,param_1->DepthCreateFlags,ELoad,ELoad,(FExclusiveDepthStencil)0x22,
             &local_c8);
  FMeshPassProcessor::
  AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FVelocityVS,FVelocityPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
            (param_2,param_3,&this->PassDrawRenderState,&local_c8,&local_118,param_4,param_5,
             PT_TriangleList,Default,None,'\0',true,(int)this->_padding_,param_6);
  return true;
}

// PrimitiveHasVelocityForView @ 145783070

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __cdecl
FVelocityMeshProcessor::PrimitiveHasVelocityForView
          (FViewInfo *param_1,FPrimitiveSceneProxy *param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  FStaticShaderPlatform FVar4;
  EDebugViewShaderMode EVar5;
  float fVar6;
  TVector4<double>_u_0 local_28;
  
  FVar4.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_1);
  bVar3 = PlatformSupportsVelocityRendering(FVar4);
  if ((bVar3) &&
     ((*(char *)((longlong)&param_1->_padding_ + 4) == '\0' || ((char)param_1->_padding_ != '\0'))))
  {
    EVar5 = FSceneViewFamily::GetDebugViewShaderMode((FSceneViewFamily *)param_1->_padding_);
    if (EVar5 == DVSM_None) {
      lVar2 = param_1->_padding_;
      FVar4.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_1);
      bVar3 = IsMobilePlatform(FVar4);
      if (((!bVar3) || ((int)lVar2 == 2)) || ((*(byte *)(param_1->_padding_ + 100) & 1) != 0)) {
        local_28._s_0.X = (param_2->Bounds).Origin.field0_0x0._s_0.X;
        local_28._s_0.Y = (param_2->Bounds).Origin.field0_0x0._s_0.Y;
        local_28._s_0.W = __real_3ff0000000000000;
        local_28._s_0.Z = (param_2->Bounds).Origin.field0_0x0._s_0.Z;
        fVar6 = ComputeBoundsScreenRadiusSquared
                          ((TVector4<double> *)&local_28._s_0,(float)(param_2->Bounds).SphereRadius,
                           (FSceneView *)param_1);
        fVar1 = *(float *)((longlong)&param_1->_padding_ + 4);
        return *(float *)&param_1->_padding_ * *(float *)&param_1->_padding_ * ___real_37d1b717 *
               fVar1 * fVar1 <= fVar6;
      }
    }
  }
  return false;
}

// Process @ 145783180

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FVelocityMeshProcessor::Process
          (FVelocityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8)

{
  Type TVar1;
  int iVar2;
  FVertexFactory *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  FVertexFactoryType *pFVar9;
  FMaterial *pFVar10;
  TOptional<unsigned_int> TVar11;
  FMeshDrawCommandSortKey FVar12;
  FStaticShaderPlatform FVar13;
  EVelocityPassMode EVar14;
  FMaterialShadingModelField local_res8 [8];
  FMeshMaterialShaderElementData local_98;
  TMeshProcessorShaders<FVelocityVS,FVelocityPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  pFVar3 = param_1->VertexFactory;
  TVar1 = this->MeshPassType;
  local_88.VertexShader.ShaderContent = (FVelocityVS *)0x0;
  local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.PixelShader.ShaderContent = (FVelocityPS *)0x0;
  local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  iVar2 = (int)this->_padding_;
  if (iVar2 == 5) {
    FVar13.Platform = SP_NumPlatforms;
  }
  else {
    FVar13.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar2];
  }
  bVar6 = PlatformSupportsOpenXRMotionVectors(FVar13);
  if (bVar6) {
    if (TVar1 == TranslucentVelocityClippedDepth) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsTranslucentClippedDepthPass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VelocityRendering.cpp"
                         ,0x4ba,
                         L"Translucent velocity clipped depth is not supported alongside motion vector rendering. If this is causing problems in your project, disable r.Velocity.DirectlyRenderOpenXRMotionVectors."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    EVar14 = Velocity_StereoMotionVectors;
  }
  else {
    EVar14 = Velocity_Standard;
    if (TVar1 == TranslucentVelocityClippedDepth) {
      EVar14 = Velocity_ClippedDepth;
    }
  }
  lVar5 = this->_padding_;
  pFVar9 = (FVertexFactoryType *)(**(code **)(pFVar3->_padding_ + 0x30))(pFVar3);
  bVar8 = GetVelocityPassShaders
                    (param_6,pFVar9,(Type)lVar5,EVar14,&local_88.VertexShader,&local_88.PixelShader)
  ;
  bVar6 = false;
  if (bVar8) {
    if (((int)this->_padding_ == 1) && (this->EarlyZPassMode == DDM_AllOpaqueNoVelocity)) {
      pFVar10 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                          (param_1->MaterialRenderProxy,ES3_1);
      (**(code **)(pFVar10->_padding_ + 0x280))(pFVar10,local_res8);
      if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
         (FReadOnlyCVARCache::bMobileHDR == false)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      TVar11 = GetOptionalDitheringFlag
                         ((FSceneView *)(local_res8 + 4),(FMeshBatch *)this->_padding_,(int)param_1)
      ;
      SetMobileBasePassDepthState
                (&this->PassDrawRenderState,param_4,param_6,local_res8[0],bVar6,TVar11);
    }
    local_98.FadeUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_98.DitherUniformBuffer = (FRHIUniformBuffer *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              (&local_98,(FSceneView *)this->_padding_,param_4,param_1,param_3,false);
    FVar12 = CalculateMeshStaticSortKey
                       ((FMeshMaterialShader *)local_88.VertexShader.ShaderContent,
                        (FMeshMaterialShader *)local_88.PixelShader.ShaderContent);
    FMeshPassProcessor::
    BuildMeshDrawCommands<TMeshProcessorShaders<FVelocityVS,FVelocityPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FMeshMaterialShaderElementData>
              ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,
               &this->PassDrawRenderState,&local_88,param_7,param_8,FVar12,Default,&local_98);
    bVar6 = true;
  }
  return bVar6;
}


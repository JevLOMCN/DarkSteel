// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// FLandscapeGrassWeightMeshProcessor @ 145f79ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FLandscapeGrassWeightMeshProcessor * __thiscall
FLandscapeGrassWeightMeshProcessor::FLandscapeGrassWeightMeshProcessor
          (FLandscapeGrassWeightMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3
          ,FMeshPassDrawListContext *param_4)

{
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,LandscapeGrassWeightMeshPassName,param_1,param_2,param_3,
             param_4);
  this->_padding_ = (longlong)&___7FLandscapeGrassWeightMeshProcessor__6B_;
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
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  return this;
}

// AddMeshBatch @ 145f80ed0

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
FLandscapeGrassWeightMeshProcessor::AddMeshBatch
          (FLandscapeGrassWeightMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          TVector2<double> *param_4,float param_5,int param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7,FPrimitiveSceneProxy *param_8)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  FMaterial *pFVar5;
  FMaterialRenderProxy *pFVar6;
  TVector2<double>_u_0 local_58 [3];
  
  pFVar6 = param_1->MaterialRenderProxy;
  do {
    if (pFVar6 == (FMaterialRenderProxy *)0x0) {
      return;
    }
    pFVar5 = (FMaterial *)(**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,(int)this->_padding_);
    if (pFVar5 != (FMaterial *)0x0) {
      dVar2 = (param_4->field0_0x0)._s_0.X;
      dVar3 = (param_4->field0_0x0)._s_0.Y;
      if ((param_1->VertexFactory == (FVertexFactory *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MeshBatch.VertexFactory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                             ,0x115,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_58[0]._0_8_ = dVar2;
      local_58[0]._8_8_ = dVar3;
      bVar4 = Process(this,param_1,param_2,param_8,pFVar6,pFVar5,param_3,
                      (TVector2<double> *)&local_58[0]._s_0,param_5,param_6,param_7);
      if (bVar4) {
        return;
      }
    }
    pFVar6 = (FMaterialRenderProxy *)
             (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6,(int)this->_padding_);
  } while( true );
}

// AddMeshBatch @ 145f81020

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
FLandscapeGrassWeightMeshProcessor::AddMeshBatch
          (FLandscapeGrassWeightMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                     ,0xc0,
                     L"Default AddMeshBatch can\'t be used as rendering requires extra parameters per pass."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CollectPSOInitializers @ 145f857b0

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FLandscapeGrassWeightMeshProcessor::CollectPSOInitializers
          (FLandscapeGrassWeightMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2
          ,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  bool bVar4;
  ERasterizerFillMode EVar5;
  FShaderType *pFVar6;
  undefined1 auStackY_298 [32];
  FMeshDrawingPolicyOverrideSettings local_228 [2];
  TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_218;
  FMaterialShaders local_1c8;
  FGraphicsPipelineRenderTargetsInfo local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (param_3->VertexFactoryType == &FLandscapeFixedGridVertexFactory::StaticType) {
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
    pFVar6 = (FShaderType *)FLandscapeGrassWeightVS::GetStaticType();
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
    pFVar6 = (FShaderType *)FLandscapeGrassWeightPS::GetStaticType();
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
    local_e8.PermutationId[bVar1] = 0;
    local_1c8.ShaderMap = (FShaderMapBase *)0x0;
    local_1c8.Pipeline = (FShaderPipeline *)0x0;
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
      local_218.VertexShader.ShaderContent = (FLandscapeGrassWeightVS *)0x0;
      local_218.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_218.PixelShader.ShaderContent = (FLandscapeGrassWeightPS *)0x0;
      local_218.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_218.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_218.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_218.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_218.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_218.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_218.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
      if ((FLandscapeGrassWeightVS *)local_1c8.Shaders[0] != (FLandscapeGrassWeightVS *)0x0) {
        local_218.VertexShader.ShaderContent = (FLandscapeGrassWeightVS *)local_1c8.Shaders[0];
        local_218.VertexShader.ShaderMap = local_1c8.ShaderMap;
      }
      if ((FLandscapeGrassWeightPS *)local_1c8.Shaders[3] != (FLandscapeGrassWeightPS *)0x0) {
        local_218.PixelShader.ShaderContent = (FLandscapeGrassWeightPS *)local_1c8.Shaders[3];
        local_218.PixelShader.ShaderMap = local_1c8.ShaderMap;
      }
      local_228[0] = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
      EVar5 = FMeshPassProcessor::ComputeMeshFillMode(param_2,local_228);
      local_158.NumSamples = 1;
      local_158.MultiViewCount = '\0';
      local_158.bHasFragmentDensityAttachment = false;
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
      AddRenderTargetInfo(PF_B8G8R8A8,RenderTargetable,&local_158);
      FMeshPassProcessor::
      AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                (param_3,param_2,&this->PassDrawRenderState,&local_158,&local_218,EVar5,CM_None,
                 PT_PointList,Default,None,'\0',true,(int)this->_padding_,param_5);
    }
  }
  return;
}

// Process @ 145f9c9c0

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
FLandscapeGrassWeightMeshProcessor::Process
          (FLandscapeGrassWeightMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,int param_6
          ,TVector2<double> *param_7,float param_8,int param_9,
          TArray<int,TSizedDefaultAllocator<32>_> *param_10)

{
  byte bVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  FLandscapeGrassWeightVS *pFVar4;
  FLandscapeGrassWeightPS *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  ERasterizerFillMode EVar9;
  uint uVar10;
  FShaderType *pFVar11;
  FVertexFactoryType *pFVar12;
  FMeshDrawCommandSortKey FVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  undefined1 auStackY_298 [32];
  FMeshDrawingPolicyOverrideSettings local_208;
  ulong64 local_200;
  FMaterial *local_1f8;
  FMaterialRenderProxy *local_1f0;
  FMeshBatch *local_1e8;
  FLandscapeGrassWeightShaderElementData local_1e0;
  TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1b8;
  FMaterialShaders local_168;
  FMaterialShaderTypes local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar2 = param_1->VertexFactory;
  local_1f0 = param_4;
  local_1f8 = param_5;
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
  local_f8.PipelineType = (FShaderPipelineType *)0x0;
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
  local_200 = param_2;
  local_1e8 = param_1;
  pFVar11 = (FShaderType *)FLandscapeGrassWeightVS::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_f8.ShaderType[bVar1] = pFVar11;
  local_f8.PermutationId[bVar1] = 0;
  pFVar11 = (FShaderType *)FLandscapeGrassWeightPS::GetStaticType();
  bVar1 = (byte)pFVar11->Frequency;
  if ((local_f8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_f8.ShaderType[bVar1] = pFVar11;
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
  pFVar12 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
  bVar8 = FMaterial::TryGetShaders(param_5,&local_f8,pFVar12,&local_168);
  bVar6 = false;
  if (bVar8) {
    local_1b8.VertexShader.ShaderContent = (FLandscapeGrassWeightVS *)0x0;
    local_1b8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1b8.PixelShader.ShaderContent = (FLandscapeGrassWeightPS *)0x0;
    local_1b8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1b8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1b8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1b8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1b8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
    local_1b8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
    local_1b8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
    if ((FLandscapeGrassWeightVS *)local_168.Shaders[0] != (FLandscapeGrassWeightVS *)0x0) {
      local_1b8.VertexShader.ShaderContent = (FLandscapeGrassWeightVS *)local_168.Shaders[0];
      local_1b8.VertexShader.ShaderMap = local_168.ShaderMap;
    }
    pFVar4 = local_1b8.VertexShader.ShaderContent;
    if ((FLandscapeGrassWeightPS *)local_168.Shaders[3] != (FLandscapeGrassWeightPS *)0x0) {
      local_1b8.PixelShader.ShaderContent = (FLandscapeGrassWeightPS *)local_168.Shaders[3];
      local_1b8.PixelShader.ShaderMap = local_168.ShaderMap;
    }
    pFVar5 = local_1b8.PixelShader.ShaderContent;
    local_208 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar9 = FMeshPassProcessor::ComputeMeshFillMode(param_5,&local_208);
    local_1e0._padding_ = 0;
    local_1e0._padding_ = 0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_1e0,(FSceneView *)this->_padding_,param_3,
               param_1,-1,true);
    FVar13 = CalculateMeshStaticSortKey((FMeshMaterialShader *)pFVar4,(FMeshMaterialShader *)pFVar5)
    ;
    uVar16 = 0;
    if (0 < param_6) {
      lVar14 = (longlong)param_9 * -4;
      uVar18 = uVar16;
      do {
        iVar15 = (int)uVar16;
        local_1e0.OutputPass = iVar15;
        if (param_9 <= iVar15) {
          local_1e0.OutputPass = 0;
        }
        local_1e0.RenderOffset.field0_0x0._s_0.X =
             (float)iVar15 * param_8 + (float)(param_7->field0_0x0)._s_0.X;
        local_1e0.RenderOffset.field0_0x0._s_0.Y = (float)(param_7->field0_0x0)._s_0.Y;
        uVar17 = local_200;
        if ((longlong)param_9 <= (longlong)uVar18) {
          uVar10 = 0;
          if (iVar15 - param_9 < param_10->ArrayNum) {
            uVar10 = (uint)~(iVar15 - param_9) >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          uVar17 = (longlong)*(int *)((param_10->AllocatorInstance).Data + lVar14);
        }
        FMeshPassProcessor::
        BuildMeshDrawCommands<TMeshProcessorShaders<FLandscapeGrassWeightVS,FLandscapeGrassWeightPS,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,FLandscapeGrassWeightShaderElementData>
                  ((FMeshPassProcessor *)this,local_1e8,uVar17,param_3,local_1f0,local_1f8,
                   &this->PassDrawRenderState,&local_1b8,EVar9,CM_None,FVar13,Default,&local_1e0);
        uVar16 = (ulonglong)(iVar15 + 1U);
        uVar18 = uVar18 + 1;
        lVar14 = lVar14 + 4;
      } while ((int)(iVar15 + 1U) < param_6);
    }
    bVar6 = true;
  }
  return bVar6;
}

// TryAddMeshBatch @ 145fa5c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FLandscapeGrassWeightMeshProcessor::TryAddMeshBatch
          (FLandscapeGrassWeightMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          ,int param_7,TVector2<double> *param_8,float param_9,int param_10,
          TArray<int,TSizedDefaultAllocator<32>_> *param_11)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TVector2<double>_u_0 local_18;
  
  if (param_1->VertexFactory == (FVertexFactory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshBatch.VertexFactory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrassWeightExporter.cpp"
                       ,0x115,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_18._s_0.X = (param_8->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_8->field0_0x0)._s_0.Y;
  bVar2 = Process(this,param_1,param_2,param_3,param_5,param_6,param_7,
                  (TVector2<double> *)&local_18._s_0,param_9,param_10,param_11);
  return bVar2;
}


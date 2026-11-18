// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FWaterInfoTexturePassMeshProcessor @ 145933f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FWaterInfoTexturePassMeshProcessor * __thiscall
FWaterInfoTexturePassMeshProcessor::FWaterInfoTexturePassMeshProcessor
          (FWaterInfoTexturePassMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3
          ,FMeshPassDrawListContext *param_4,bool param_5)

{
  TArray<wchar_t_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FWaterInfoTexturePassMeshProcessor *pFVar5;
  ForElementType<wchar_t_const_*> FVar6;
  wchar_t *local_18 [2];
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,WaterInfoTexturePass,param_1,param_2,param_3,param_4);
  pTVar1 = &this->MaterialAllowList;
  this->_padding_ = (longlong)&___7FWaterInfoTexturePassMeshProcessor__6B_;
  (this->PassDrawRenderState).BlendState = (FRHIBlendState *)0x0;
  (this->PassDrawRenderState).DepthStencilState = (FRHIDepthStencilState *)0x0;
  (this->PassDrawRenderState).DepthStencilAccess = DepthRead_StencilRead;
  (this->PassDrawRenderState).ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
  (this->PassDrawRenderState).StencilRef = 0;
  (this->MaterialAllowList).AllocatorInstance.SecondaryData = (ForElementType<wchar_t_const_*>)0x0;
  (this->MaterialAllowList).ArrayNum = 0;
  (this->MaterialAllowList).ArrayMax = 1;
  this->bIsMobile = param_5;
  (this->PassDrawRenderState).BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).DepthStencilAccess = DepthWrite;
  (this->PassDrawRenderState).DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  (this->PassDrawRenderState).StencilRef = 0;
  FVar6 = (this->MaterialAllowList).AllocatorInstance.SecondaryData;
  local_18[0] = L"DrawWaterInfo";
  if (FVar6 == (ForElementType<wchar_t_const_*>)0x0) {
    FVar6 = (ForElementType<wchar_t_const_*>)pTVar1;
  }
  if (((ulonglong)FVar6 <= local_18) &&
     (local_18 < (wchar_t **)((longlong)FVar6 + (longlong)(this->MaterialAllowList).ArrayMax * 8)))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FWaterInfoTexturePassMeshProcessor *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->MaterialAllowList).ArrayNum;
  if (iVar4 == (this->MaterialAllowList).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t_const_*>_>
                      (0x808,&pTVar1->AllocatorInstance,&(this->MaterialAllowList).ArrayMax);
  }
  (this->MaterialAllowList).ArrayNum = iVar4 + 1;
  FVar6 = (this->MaterialAllowList).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<wchar_t_const_*>)0x0) {
    FVar6 = (ForElementType<wchar_t_const_*>)pTVar1;
  }
  *(wchar_t **)((longlong)FVar6 + (longlong)iVar4 * 8) = local_18[0];
  return this;
}

// AddMeshBatch @ 145934e80

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
FWaterInfoTexturePassMeshProcessor::AddMeshBatch
          (FWaterInfoTexturePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  ForElementType<wchar_t_const_*> FVar1;
  bool bVar2;
  int iVar3;
  FMaterial *pFVar4;
  undefined8 *puVar5;
  FMaterialRenderProxy *pFVar6;
  wchar_t *pwVar7;
  ForElementType<wchar_t_const_*> FVar8;
  bool bVar9;
  void *local_48 [2];
  
  bVar9 = false;
  if (param_1->bUseForMaterial != 0) {
    for (pFVar6 = param_1->MaterialRenderProxy; pFVar6 != (FMaterialRenderProxy *)0x0;
        pFVar6 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6,(int)this->_padding_)) {
      pFVar4 = (FMaterial *)(**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,(int)this->_padding_);
      if (pFVar4 != (FMaterial *)0x0) {
        bVar9 = true;
        puVar5 = (undefined8 *)(**(code **)(pFVar4->_padding_ + 0x398))(pFVar4,local_48);
        FVar1 = (this->MaterialAllowList).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<wchar_t_const_*>)&this->MaterialAllowList;
        if (FVar1 != (ForElementType<wchar_t_const_*>)0x0) {
          FVar8 = FVar1;
        }
        FVar1 = (ForElementType<wchar_t_const_*>)
                ((longlong)FVar8 + (longlong)(this->MaterialAllowList).ArrayNum * 8);
        for (; FVar8 != FVar1; FVar8 = (ForElementType<wchar_t_const_*>)((longlong)FVar8 + 8)) {
          if (*(int *)(puVar5 + 1) == 0) {
            pwVar7 = L"";
          }
          else {
            pwVar7 = (wchar_t *)*puVar5;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,*(wchar_t **)FVar8);
          if (iVar3 == 0) {
            bVar2 = true;
            goto LAB_145934f5f;
          }
        }
      }
      bVar2 = false;
LAB_145934f5f:
      if ((bVar9) && (bVar9 = false, local_48[0] != (void *)0x0)) {
        FMemory::Free(local_48[0]);
      }
      if ((bVar2) &&
         (bVar2 = TryAddMeshBatch(this,param_1,param_2,param_3,param_4,pFVar6,pFVar4), bVar2)) {
        return;
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 145935c40

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
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWaterInfoTexturePassMeshProcessor::CollectPSOInitializers
          (FWaterInfoTexturePassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2
          ,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  byte bVar1;
  FVertexFactoryType *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ERasterizerFillMode EVar8;
  ERasterizerCullMode EVar9;
  byte *pbVar10;
  FString *pFVar11;
  FShaderType *pFVar12;
  bool bVar13;
  undefined1 auStackY_308 [32];
  undefined4 local_298 [2];
  FMeshDrawingPolicyOverrideSettings local_290;
  FPSOPrecacheParams *local_288;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_280;
  void *local_278 [2];
  TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_268;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_218;
  FMaterialShaders local_1c8;
  FGraphicsPipelineRenderTargetsInfo local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_280 = param_5;
  local_298[0] = 0;
  local_288 = param_4;
  pbVar10 = (byte *)(**(code **)(param_2->_padding_ + 0x280))(param_2,local_298);
  bVar6 = false;
  if ((*pbVar10 & 1) != 0) {
    iVar7 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
    bVar6 = false;
    if (iVar7 == 0) {
      cVar4 = (**(code **)(param_2->_padding_ + 0x368))(param_2);
      if (cVar4 == '\0') {
        bVar13 = true;
        pFVar11 = (FString *)(**(code **)(param_2->_padding_ + 0x398))(param_2,local_278);
        bVar5 = TArray<wchar_t_const_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
                Contains<FString>(&this->MaterialAllowList,pFVar11);
        bVar6 = true;
        if (bVar5) {
          bVar6 = true;
          goto LAB_145935cfa;
        }
      }
    }
  }
  bVar13 = bVar6;
  bVar6 = false;
LAB_145935cfa:
  if ((bVar13) && (local_278[0] != (void *)0x0)) {
    FMemory::Free(local_278[0]);
  }
  if (bVar6) {
    local_290 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
    EVar8 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_290);
    EVar9 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_290);
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
    AddRenderTargetInfo(PF_FloatRGBA,ShaderResource|RenderTargetable,&local_158);
    SetupDepthStencilInfo
              (PF_DepthStencil,ShaderResource|DepthStencilTargetable,EClear,ENoAction,
               (FExclusiveDepthStencil)0x2,&local_158);
    if (this->bIsMobile == false) {
      local_218.VertexShader.ShaderContent =
           (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_218.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_218.PixelShader.ShaderContent =
           (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_218.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_218.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_218.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_218.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_218.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_218.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_218.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
      bVar6 = GetBasePassShaders<FUniformLightMapPolicy>
                        (param_2,param_3->VertexFactoryType,(FUniformLightMapPolicy)0x0,
                         (Type)this->_padding_,false,false,false,GBL_Default,&local_218.VertexShader
                         ,&local_218.PixelShader,false);
      if (bVar6) {
        FMeshPassProcessor::
        AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (param_3,param_2,&this->PassDrawRenderState,&local_158,&local_218,EVar8,EVar9,
                   *(EPrimitiveType *)&local_288->field0_0x0 & 0x3f,Default,None,'\0',true,
                   (int)this->_padding_,local_280);
      }
    }
    else {
      local_268.VertexShader.ShaderContent =
           (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_268.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_268.PixelShader.ShaderContent =
           (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_268.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_268.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_268.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_268.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_268.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_268.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_268.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
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
      pFVar12 = (FShaderType *)TMobileBasePassVS<TUniformLightMapPolicy<0>_>::GetStaticType();
      bVar1 = (byte)pFVar12->Frequency;
      if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderType[Frequency] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0xd0,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_e8.ShaderType[bVar1] = pFVar12;
      local_e8.PermutationId[bVar1] = 0;
      pFVar12 = (FShaderType *)TMobileBasePassPS<TUniformLightMapPolicy<0>,0,0>::GetStaticType();
      bVar1 = (byte)pFVar12->Frequency;
      if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderType[Frequency] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                           ,0xd0,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = param_3->VertexFactoryType;
      local_e8.ShaderType[bVar1] = pFVar12;
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
      bVar6 = FMaterial::TryGetShaders(param_2,&local_e8,pFVar2,&local_1c8);
      if (bVar6) {
        if ((TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)local_1c8.Shaders[0] !=
            (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0) {
          local_268.VertexShader.ShaderContent =
               (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)local_1c8.Shaders[0];
          local_268.VertexShader.ShaderMap = local_1c8.ShaderMap;
        }
        if ((TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)local_1c8.Shaders[3] !=
            (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0) {
          local_268.PixelShader.ShaderContent =
               (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)local_1c8.Shaders[3];
          local_268.PixelShader.ShaderMap = local_1c8.ShaderMap;
        }
        FMeshPassProcessor::
        AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
                  (param_3,param_2,&this->PassDrawRenderState,&local_158,&local_268,EVar8,EVar9,
                   *(EPrimitiveType *)&local_288->field0_0x0 & 0x3f,Default,None,'\0',true,
                   (int)this->_padding_,local_280);
      }
    }
  }
  return;
}

// TryAddMeshBatch @ 145947ec0

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FWaterInfoTexturePassMeshProcessor::TryAddMeshBatch
          (FWaterInfoTexturePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  byte bVar1;
  FVertexFactory *pFVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ERasterizerFillMode EVar9;
  ERasterizerCullMode EVar10;
  byte *pbVar11;
  FVertexFactoryType *pFVar12;
  FMeshDrawCommandSortKey FVar13;
  FShaderType *pFVar14;
  undefined1 auStackY_2d8 [32];
  undefined1 local_260 [8];
  FMeshDrawingPolicyOverrideSettings local_258;
  FMaterialRenderProxy *local_250;
  ulong64 local_248;
  FPrimitiveSceneProxy *local_240;
  TBasePassShaderElementData<FUniformLightMapPolicy> local_238;
  TMobileBasePassShaderElementData<FUniformLightMapPolicy> local_220;
  TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1f8;
  TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_1a8;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_250 = param_5;
  local_248 = param_2;
  local_240 = param_3;
  pbVar11 = (byte *)(**(code **)(param_6->_padding_ + 0x280))(param_6,local_260);
  if ((((*pbVar11 & 1) != 0) &&
      (iVar8 = (**(code **)(param_6->_padding_ + 0x40))(param_6), iVar8 == 0)) &&
     (cVar5 = (**(code **)(param_6->_padding_ + 0x368))(param_6), cVar5 == '\0')) {
    local_258 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar9 = FMeshPassProcessor::ComputeMeshFillMode(param_6,&local_258);
    EVar10 = FMeshPassProcessor::ComputeMeshCullMode(param_6,&local_258);
    pFVar2 = param_1->VertexFactory;
    if (this->bIsMobile == false) {
      lVar4 = this->_padding_;
      local_1a8.VertexShader.ShaderContent =
           (TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_1a8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_1a8.PixelShader.ShaderContent =
           (TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_1a8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_1a8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_1a8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_1a8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_1a8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_1a8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_1a8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
      pFVar12 = (FVertexFactoryType *)(**(code **)(pFVar2->_padding_ + 0x30))(pFVar2);
      bVar6 = GetBasePassShaders<FUniformLightMapPolicy>
                        (param_6,pFVar12,(FUniformLightMapPolicy)0x0,(Type)lVar4,false,false,false,
                         GBL_Default,&local_1a8.VertexShader,&local_1a8.PixelShader,false);
      if (bVar6) {
        FVar13 = CalculateMeshStaticSortKey
                           ((FMeshMaterialShader *)local_1a8.VertexShader.ShaderContent,
                            (FMeshMaterialShader *)local_1a8.PixelShader.ShaderContent);
        local_238.LightMapPolicyElementData = param_1->LCI;
        local_238._padding_ = 0;
        local_238._padding_ = 0;
        FMeshMaterialShaderElementData::InitializeMeshMaterialData
                  ((FMeshMaterialShaderElementData *)&local_238,(FSceneView *)this->_padding_,
                   param_3,param_1,param_4,true);
        FMeshPassProcessor::
        BuildMeshDrawCommands<TMeshProcessorShaders<TBasePassVertexShaderPolicyParamType<FUniformLightMapPolicy>,TBasePassPixelShaderPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TBasePassShaderElementData<FUniformLightMapPolicy>_>
                  ((FMeshPassProcessor *)this,param_1,local_248,param_3,local_250,param_6,
                   &this->PassDrawRenderState,&local_1a8,EVar9,EVar10,FVar13,Default,&local_238);
        return true;
      }
    }
    else {
      local_1f8.VertexShader.ShaderContent =
           (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_1f8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
      local_e8.PipelineType = (FShaderPipelineType *)0x0;
      local_1f8.PixelShader.ShaderContent =
           (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
      local_1f8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
      local_1f8.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_1f8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
      local_1f8.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_1f8.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
      local_1f8.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
      local_1f8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
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
      pFVar14 = (FShaderType *)TMobileBasePassVS<TUniformLightMapPolicy<0>_>::GetStaticType();
      bVar1 = (byte)pFVar14->Frequency;
      if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderType[Frequency] == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                             ,0xd0,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      local_e8.ShaderType[bVar1] = pFVar14;
      local_e8.PermutationId[bVar1] = 0;
      pFVar14 = (FShaderType *)TMobileBasePassPS<TUniformLightMapPolicy<0>,0,0>::GetStaticType();
      bVar1 = (byte)pFVar14->Frequency;
      if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderType[Frequency] == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                             ,0xd0,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      lVar4 = pFVar2->_padding_;
      local_e8.ShaderType[bVar1] = pFVar14;
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
      pFVar12 = (FVertexFactoryType *)(**(code **)(lVar4 + 0x30))(pFVar2);
      bVar6 = FMaterial::TryGetShaders(param_6,&local_e8,pFVar12,&local_158);
      if (bVar6) {
        if ((TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)local_158.Shaders[0] !=
            (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0) {
          local_1f8.VertexShader.ShaderContent =
               (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)local_158.Shaders[0];
          local_1f8.VertexShader.ShaderMap = local_158.ShaderMap;
        }
        if ((TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)local_158.Shaders[3] !=
            (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0) {
          local_1f8.PixelShader.ShaderContent =
               (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)local_158.Shaders[3];
          local_1f8.PixelShader.ShaderMap = local_158.ShaderMap;
        }
        FVar13 = CalculateMeshStaticSortKey
                           ((FMeshMaterialShader *)local_1f8.VertexShader.ShaderContent,
                            (FMeshMaterialShader *)local_1f8.PixelShader.ShaderContent);
        local_220.LightMapPolicyElementData = param_1->LCI;
        local_220._padding_ = 0;
        local_220._padding_ = 0;
        local_220.bCanReceiveCSM = false;
        FMeshMaterialShaderElementData::InitializeMeshMaterialData
                  ((FMeshMaterialShaderElementData *)&local_220,(FSceneView *)this->_padding_,
                   local_240,param_1,param_4,false);
        FMeshPassProcessor::
        BuildMeshDrawCommands<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TMobileBasePassShaderElementData<FUniformLightMapPolicy>_>
                  ((FMeshPassProcessor *)this,param_1,local_248,local_240,local_250,param_6,
                   &this->PassDrawRenderState,&local_1f8,EVar9,EVar10,FVar13,Default,&local_220);
        return true;
      }
    }
  }
  return false;
}


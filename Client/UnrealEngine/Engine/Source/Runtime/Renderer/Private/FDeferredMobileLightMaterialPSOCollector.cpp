// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// operator() @ 144f70c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
`FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional'::__l2::<lambda_1>::
operator()(void *this,int param_1,bool param_2,bool param_3,int param_4,bool param_5)

{
  int *piVar1;
  byte bVar2;
  FMaterial *this_00;
  FShaderMapResource *this_01;
  FSceneTexturesConfig *pFVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  FShaderMapBase *pFVar6;
  FShader *this_02;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FShaderType *pFVar10;
  FGlobalShaderMap *pFVar11;
  undefined1 auStackY_468 [32];
  TShaderPermutationDomain<FMobileDirectionalLightFunctionPS::FEnableShadingModelSupport,FMobileDirectionalLightFunctionPS::FEnableClustredLights,FMobileDirectionalLightFunctionPS::FEnableSkyLight,FMobileDirectionalLightFunctionPS::FEnableScreenSpaceShadowMask,FMobileDirectionalLightFunctionPS::FEnableCSM,FMobileDirectionalLightFunctionPS::FShadowQuality,FMobileDirectionalLightFunctionPS::FSkyShadowing>
  local_418;
  TShaderRefBase<FScreenPassVS,FShaderMapPointerTable> local_3f8;
  FMaterialShaders local_3e8;
  FGraphicsPipelineStateInitializer local_378;
  FPSOPrecacheData local_298;
  FGraphicsPipelineRenderTargetsInfo local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  if (!param_3) {
    bVar7 = MobileUsesGBufferCustomData((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    uVar8 = 2;
    if (bVar7) goto LAB_144f70c54;
  }
  uVar8 = 0;
LAB_144f70c54:
  if ((GMobileUseClusteredDeferredShading == 0) ||
     (FReadOnlyCVARCache::MobileForwardLocalLightsValue < 1)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  MobileUsesShadowMaskTexture((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  local_418.Tail.Tail.Tail.DimensionValue = false;
  local_418.Tail.Tail.Tail.Tail.DimensionValue = 0 < param_4;
  local_418.Tail.Tail.Tail.Tail.Tail.Tail.DimensionValue = false;
  iVar9 = 3;
  if (param_4 < 3) {
    iVar9 = param_4;
  }
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_418.Tail.Tail.Tail.Tail.Tail.DimensionValue = 1;
  if (1 < iVar9) {
    local_418.Tail.Tail.Tail.Tail.Tail.DimensionValue = iVar9;
  }
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
  local_418.DimensionValue = (uVar8 >> (param_1 & 0x1fU) & 1) != 0;
  local_418.Tail.DimensionValue = bVar7;
  local_418.Tail.Tail.DimensionValue = param_2;
  iVar9 = TShaderPermutationDomain<FMobileDirectionalLightFunctionPS::FEnableShadingModelSupport,FMobileDirectionalLightFunctionPS::FEnableClustredLights,FMobileDirectionalLightFunctionPS::FEnableSkyLight,FMobileDirectionalLightFunctionPS::FEnableScreenSpaceShadowMask,FMobileDirectionalLightFunctionPS::FEnableCSM,FMobileDirectionalLightFunctionPS::FShadowQuality,FMobileDirectionalLightFunctionPS::FSkyShadowing>
          ::ToDimensionValueId(&local_418);
  pFVar10 = (FShaderType *)FMobileDirectionalLightFunctionPS::GetStaticType();
  bVar2 = (byte)pFVar10->Frequency;
  if ((local_e8.ShaderType[bVar2] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = *(FMaterial **)this;
  local_e8.ShaderType[bVar2] = pFVar10;
  local_e8.PermutationId[bVar2] = iVar9;
  local_3e8.ShaderMap = (FShaderMapBase *)0x0;
  local_3e8.Pipeline = (FShaderPipeline *)0x0;
  local_3e8.Shaders[0] = (FShader *)0x0;
  local_3e8.Shaders[1] = (FShader *)0x0;
  local_3e8.Shaders[2] = (FShader *)0x0;
  local_3e8.Shaders[3] = (FShader *)0x0;
  local_3e8.Shaders[4] = (FShader *)0x0;
  local_3e8.Shaders[5] = (FShader *)0x0;
  local_3e8.Shaders[6] = (FShader *)0x0;
  local_3e8.Shaders[7] = (FShader *)0x0;
  local_3e8.Shaders[8] = (FShader *)0x0;
  local_3e8.Shaders[9] = (FShader *)0x0;
  local_3e8.Shaders[10] = (FShader *)0x0;
  local_3e8.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(this_00,&local_e8,(FVertexFactoryType *)0x0,&local_3e8);
  this_02 = local_3e8.Shaders[3];
  pFVar6 = local_3e8.ShaderMap;
  if ((bVar7) && (local_3e8.Shaders[3] != (FShader *)0x0)) {
    this_01 = ((local_3e8.ShaderMap)->Resource).Reference;
    if ((this_01 == (FShaderMapResource *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = this_02->ResourceIndex;
    local_378.BoundShaderState.PixelShaderRHI =
         *(FRHIPixelShader **)((this_01->RHIShaders).Ptr + iVar9);
    if (((atomic<FRHIShader_*>)local_378.BoundShaderState.PixelShaderRHI ==
         (atomic<FRHIShader_*>)0x0) &&
       (local_378.BoundShaderState.PixelShaderRHI =
             (FRHIPixelShader *)FShaderMapResource::CreateShaderOrCrash(this_01,iVar9,false),
       (atomic<FRHIShader_*>)local_378.BoundShaderState.PixelShaderRHI == (atomic<FRHIShader_*>)0x0)
       ) {
      if (4 < (byte)LogShaders._0_1_) {
        if ((pFVar6->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FShader::GetType(this_02,pFVar6->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMobileDirectionalLightFunctionPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
    }
    else {
      pFVar11 = GetGlobalShaderMap(GMaxRHIShaderPlatform);
      TShaderMapRef<FScreenPassVS>::TShaderMapRef<FScreenPassVS>
                ((TShaderMapRef<FScreenPassVS> *)&local_3f8,pFVar11);
      local_378.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FScreenPassVS,FShaderMapPointerTable>::GetVertexShader(&local_3f8,false);
      if (local_378.BoundShaderState.VertexShaderRHI != (FRHIVertexShader *)0x0) {
        local_378.RasterizerState =
             TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
             ::StaticResource.StateRHI.Reference;
        local_378.BlendState =
             TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI.Reference;
        local_378.DepthStencilState =
             TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,22,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference;
        local_378.BoundShaderState.VertexDeclarationRHI =
             (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
        local_378.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
        local_378.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
        local_378.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
        local_378.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
        local_378.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
        local_378.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
        local_378.PrimitiveType = PT_TriangleList;
        local_378.RenderTargetsEnabled = 0;
        local_378.RenderTargetFormats.Elements[0] = '\0';
        local_378.RenderTargetFormats.Elements[1] = '\0';
        local_378.RenderTargetFormats.Elements[2] = '\0';
        local_378.RenderTargetFormats.Elements[3] = '\0';
        local_378.RenderTargetFormats.Elements[4] = '\0';
        local_378.RenderTargetFormats.Elements[5] = '\0';
        local_378.RenderTargetFormats.Elements[6] = '\0';
        local_378.RenderTargetFormats.Elements[7] = '\0';
        local_378.RenderTargetFlags.Elements[0] = None;
        local_378.RenderTargetFlags.Elements[1] = None;
        local_378.RenderTargetFlags.Elements[2] = None;
        local_378.RenderTargetFlags.Elements[3] = None;
        local_378.RenderTargetFlags.Elements[4] = None;
        local_378.RenderTargetFlags.Elements[5] = None;
        local_378.RenderTargetFlags.Elements[6] = None;
        local_378.RenderTargetFlags.Elements[7] = None;
        local_378.DepthStencilTargetFormat = PF_Unknown;
        local_378.DepthStencilTargetFlag = None;
        local_378.DepthTargetLoadAction = ENoAction;
        local_378.DepthTargetStoreAction = ENoAction;
        local_378.StencilTargetLoadAction = ENoAction;
        local_378.StencilTargetStoreAction = ENoAction;
        local_378.DepthStencilAccess.Value = DepthNop;
        local_378.NumSamples = 0;
        local_378.SubpassHint = None;
        local_378.SubpassIndex = '\0';
        local_378.ConservativeRasterization = Disabled;
        local_378.bDepthBounds = false;
        local_378.MultiViewCount = '\0';
        local_378.bHasFragmentDensityAttachment = false;
        local_378.bAllowVariableRateShading = true;
        local_378.ShadingRate = VRSSR_1x1;
        local_378.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
        local_378.StatePrecachePSOHash = 0;
        local_158.RenderTargetsEnabled = 0;
        local_158.RenderTargetFormats.Elements[0] = '\0';
        local_158.RenderTargetFormats.Elements[1] = '\0';
        local_158.RenderTargetFormats.Elements[2] = '\0';
        local_158.RenderTargetFormats.Elements[3] = '\0';
        local_158.RenderTargetFormats.Elements[4] = '\0';
        local_158.RenderTargetFormats.Elements[5] = '\0';
        local_158.RenderTargetFormats.Elements[6] = '\0';
        local_158.RenderTargetFormats.Elements[7] = '\0';
        local_158.RenderTargetFlags.Elements[0] = None;
        local_158.RenderTargetFlags.Elements[1] = None;
        local_158.RenderTargetFlags.Elements[2] = None;
        local_158.RenderTargetFlags.Elements[3] = None;
        local_158.RenderTargetFlags.Elements[4] = None;
        local_158.RenderTargetFlags.Elements[5] = None;
        local_158.RenderTargetFlags.Elements[6] = None;
        local_158.RenderTargetFlags.Elements[7] = None;
        local_158.DepthStencilTargetFormat = PF_Unknown;
        local_158.DepthStencilTargetFlag = None;
        local_158.DepthTargetLoadAction = ENoAction;
        local_158.DepthTargetStoreAction = ENoAction;
        local_158.StencilTargetLoadAction = ENoAction;
        local_158.StencilTargetStoreAction = ENoAction;
        local_158.DepthStencilAccess.Value = DepthNop;
        local_158.NumSamples = 1;
        local_158.MultiViewCount = '\0';
        local_158.bHasFragmentDensityAttachment = false;
        bVar7 = MobileAllowFramebufferFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform);
        pFVar3 = *(FSceneTexturesConfig **)((longlong)this + 8);
        if (bVar7) {
          SetupGBufferRenderTargetInfo(pFVar3,&local_158,false,GBL_Default);
        }
        else {
          AddRenderTargetInfo(pFVar3->ColorFormat,pFVar3->ColorCreateFlags,&local_158);
        }
        SetupDepthStencilInfo
                  (PF_DepthStencil,
                   *(ETextureCreateFlags *)(*(longlong *)((longlong)this + 8) + 0x30),ELoad,ELoad,
                   (FExclusiveDepthStencil)0x21,&local_158);
        local_378.StatePrecachePSOHash =
             (**(code **)(GDynamicRHI->_padding_ + 0x2d0))(GDynamicRHI,&local_378);
        ApplyTargetsInfo(&local_378,&local_158);
        local_378.SubpassHint = None;
        local_378.SubpassIndex = '\0';
        bVar7 = MobileAllowFramebufferFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform);
        if (bVar7) {
          local_378.SubpassHint = DeferredShadingSubpass;
          local_378.SubpassIndex = '\x02';
        }
        pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
        local_298.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData =
             (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
        local_298.ShaderPreloadData.Shaders.ArrayNum = 0;
        local_298.ShaderPreloadData.Shaders.ArrayMax = 3;
        local_298.Type = Graphics;
        local_298.bRequired = true;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
             local_378.BoundShaderState.VertexDeclarationRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexShaderRHI =
             local_378.BoundShaderState.VertexShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.PixelShaderRHI =
             local_378.BoundShaderState.PixelShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.MeshShaderRHI =
             local_378.BoundShaderState.MeshShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.AmplificationShaderRHI =
             local_378.BoundShaderState.AmplificationShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.GeometryShaderRHI =
             local_378.BoundShaderState.GeometryShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.WorkGraphMeshShaderRHI =
             local_378.BoundShaderState.WorkGraphMeshShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BlendState = local_378.BlendState;
        local_298.field2_0x8.GraphicsPSOInitializer.RasterizerState = local_378.RasterizerState;
        local_298.field2_0x8.GraphicsPSOInitializer.DepthStencilState = local_378.DepthStencilState;
        local_298.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements
        [0] = local_378.ImmutableSamplerState.ImmutableSamplers.Elements[0];
        local_298.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements
        [1] = local_378.ImmutableSamplerState.ImmutableSamplers.Elements[1];
        local_298.field2_0x8.GraphicsPSOInitializer.PrimitiveType = local_378.PrimitiveType;
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetsEnabled =
             local_378.RenderTargetsEnabled;
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFormats.Elements =
             (TStaticArray<unsigned_char,8,4294967295>)
             (TStaticArray<unsigned_char,8,4294967295>)local_378.RenderTargetFormats.Elements;
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[0] =
             local_378.RenderTargetFlags.Elements[0];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[1] =
             local_378.RenderTargetFlags.Elements[1];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[2] =
             local_378.RenderTargetFlags.Elements[2];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[3] =
             local_378.RenderTargetFlags.Elements[3];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[4] =
             local_378.RenderTargetFlags.Elements[4];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[5] =
             local_378.RenderTargetFlags.Elements[5];
        local_298.field2_0x8._176_8_ =
             CONCAT71(local_378._177_7_,local_378.DepthStencilTargetFormat);
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[6] =
             local_378.RenderTargetFlags.Elements[6];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[7] =
             local_378.RenderTargetFlags.Elements[7];
        local_298.field2_0x8.GraphicsPSOInitializer.DepthStencilTargetFlag =
             local_378.DepthStencilTargetFlag;
        local_298.field2_0x8._208_8_ = CONCAT44(local_378._212_4_,local_378._208_4_);
        local_298.field2_0x8.GraphicsPSOInitializer.DepthTargetLoadAction =
             local_378.DepthTargetLoadAction;
        local_298.field2_0x8.GraphicsPSOInitializer.DepthTargetStoreAction =
             local_378.DepthTargetStoreAction;
        local_298.field2_0x8.GraphicsPSOInitializer.StencilTargetLoadAction =
             local_378.StencilTargetLoadAction;
        local_298.field2_0x8.GraphicsPSOInitializer.StencilTargetStoreAction =
             local_378.StencilTargetStoreAction;
        local_298.field2_0x8.GraphicsPSOInitializer.DepthStencilAccess.Value =
             (FExclusiveDepthStencil)local_378.DepthStencilAccess.Value;
        local_298.field2_0x8.GraphicsPSOInitializer.NumSamples = local_378.NumSamples;
        local_298.field2_0x8.GraphicsPSOInitializer.SubpassHint = local_378.SubpassHint;
        local_298.field2_0x8.GraphicsPSOInitializer.SubpassIndex = local_378.SubpassIndex;
        local_298.field2_0x8.GraphicsPSOInitializer.ConservativeRasterization =
             local_378.ConservativeRasterization;
        local_298.field2_0x8.GraphicsPSOInitializer.bDepthBounds = local_378.bDepthBounds;
        local_298.field2_0x8.GraphicsPSOInitializer.MultiViewCount = local_378.MultiViewCount;
        local_298.field2_0x8.GraphicsPSOInitializer.bHasFragmentDensityAttachment =
             local_378.bHasFragmentDensityAttachment;
        local_298.field2_0x8.GraphicsPSOInitializer.StatePrecachePSOHash =
             local_378.StatePrecachePSOHash;
        local_298.bDefaultMaterial = 0;
        local_298.PSOCollectorIndex = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
        local_298.VertexFactoryType = (FVertexFactoryType *)0x0;
        if ((((FPSOPrecacheData *)pFVar4->Data <= &local_298) &&
            (&local_298 < (FPSOPrecacheData *)pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4)
            )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)&pFVar4[1].Data;
        piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x138,8,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar9 + 1;
        FPSOPrecacheData::FPSOPrecacheData
                  ((FPSOPrecacheData *)(pFVar4->Data + (longlong)iVar9 * 0x138),&local_298);
        if (local_298.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData !=
            (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
          FMemory::Free((void *)local_298.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData)
          ;
        }
      }
    }
  }
  return;
}

// operator() @ 144f71210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
`FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
operator()(void *this,int param_1,uchar param_2,bool param_3,bool param_4)

{
  int *piVar1;
  byte bVar2;
  FMaterial *this_00;
  FShaderMapResource *this_01;
  FSceneTexturesConfig *pFVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  FShaderMapBase *pFVar6;
  FShader *this_02;
  bool bVar7;
  FShaderType *pFVar8;
  atomic<FRHIShader_*> aVar9;
  FGlobalShaderMap *this_03;
  FName this_04;
  int iVar10;
  undefined1 auStackY_478 [32];
  TShaderRefBase<FDeferredLightVS,FShaderMapPointerTable> local_428;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_418;
  undefined1 local_408 [8];
  FString local_400;
  FMaterialShaders local_3e8;
  FGraphicsPipelineStateInitializer local_378;
  FPSOPrecacheData local_298;
  FGraphicsPipelineRenderTargetsInfo local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
  iVar10 = param_2 - 1;
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
  if (((2 < iVar10) || (iVar10 < 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = (FShaderType *)FMobileRadialLightFunctionPS::GetStaticType();
  bVar2 = (byte)pFVar8->Frequency;
  if ((local_e8.ShaderType[bVar2] != (FShaderType *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = *(FMaterial **)this;
  local_e8.ShaderType[bVar2] = pFVar8;
  local_e8.PermutationId[bVar2] = (uint)(0 < param_1) + (iVar10 + (uint)param_3 * 3) * 2;
  local_3e8.ShaderMap = (FShaderMapBase *)0x0;
  local_3e8.Pipeline = (FShaderPipeline *)0x0;
  local_3e8.Shaders[0] = (FShader *)0x0;
  local_3e8.Shaders[1] = (FShader *)0x0;
  local_3e8.Shaders[2] = (FShader *)0x0;
  local_3e8.Shaders[3] = (FShader *)0x0;
  local_3e8.Shaders[4] = (FShader *)0x0;
  local_3e8.Shaders[5] = (FShader *)0x0;
  local_3e8.Shaders[6] = (FShader *)0x0;
  local_3e8.Shaders[7] = (FShader *)0x0;
  local_3e8.Shaders[8] = (FShader *)0x0;
  local_3e8.Shaders[9] = (FShader *)0x0;
  local_3e8.Shaders[10] = (FShader *)0x0;
  local_3e8.Shaders[0xb] = (FShader *)0x0;
  bVar7 = FMaterial::TryGetShaders(this_00,&local_e8,(FVertexFactoryType *)0x0,&local_3e8);
  this_02 = local_3e8.Shaders[3];
  pFVar6 = local_3e8.ShaderMap;
  if ((bVar7) && (local_3e8.Shaders[3] != (FShader *)0x0)) {
    this_01 = ((local_3e8.ShaderMap)->Resource).Reference;
    if ((this_01 == (FShaderMapResource *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = this_02->ResourceIndex;
    aVar9 = (this_01->RHIShaders).Ptr[iVar10];
    if ((aVar9 == (atomic<FRHIShader_*>)0x0) &&
       (aVar9 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_01,iVar10,false),
       aVar9 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if ((pFVar6->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FShader::GetType(this_02,pFVar6->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FMobileRadialLightFunctionPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
    }
    else {
      this_03 = GetGlobalShaderMap(GMaxRHIShaderPlatform);
      pFVar8 = (FShaderType *)FDeferredLightVS::GetStaticType();
      FGlobalShaderMap::GetShader(this_03,&local_418,pFVar8,1);
      if (local_418.ShaderContent == (FShader *)0x0) {
        this_04 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_408);
        ::FName::ToString((FName *)this_04,&local_400);
        FDeferredLightVS::GetStaticType();
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FDeferredLightVS::GetStaticType();
      local_428.ShaderContent = (FDeferredLightVS *)local_418.ShaderContent;
      local_428.ShaderMap = local_418.ShaderMap;
      local_378.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FDeferredLightVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_428,false);
      if (local_378.BoundShaderState.VertexShaderRHI != (FRHIVertexShader *)0x0) {
        local_378.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
        local_378.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
        local_378.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
        local_378.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
        local_378.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
        local_378.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
        local_378.RenderTargetsEnabled = 0;
        local_378.RenderTargetFormats.Elements[0] = '\0';
        local_378.RenderTargetFormats.Elements[1] = '\0';
        local_378.RenderTargetFormats.Elements[2] = '\0';
        local_378.RenderTargetFormats.Elements[3] = '\0';
        local_378.RenderTargetFormats.Elements[4] = '\0';
        local_378.RenderTargetFormats.Elements[5] = '\0';
        local_378.RenderTargetFormats.Elements[6] = '\0';
        local_378.RenderTargetFormats.Elements[7] = '\0';
        local_378.RenderTargetFlags.Elements[0] = None;
        local_378.RenderTargetFlags.Elements[1] = None;
        local_378.RenderTargetFlags.Elements[2] = None;
        local_378.RenderTargetFlags.Elements[3] = None;
        local_378.RenderTargetFlags.Elements[4] = None;
        local_378.RenderTargetFlags.Elements[5] = None;
        local_378.RenderTargetFlags.Elements[6] = None;
        local_378.RenderTargetFlags.Elements[7] = None;
        local_378.DepthStencilTargetFormat = PF_Unknown;
        local_378.DepthStencilTargetFlag = None;
        local_378.DepthTargetLoadAction = ENoAction;
        local_378.DepthTargetStoreAction = ENoAction;
        local_378.StencilTargetLoadAction = ENoAction;
        local_378.StencilTargetStoreAction = ENoAction;
        local_378.DepthStencilAccess.Value = DepthNop;
        local_378.NumSamples = 0;
        local_378.SubpassHint = None;
        local_378.SubpassIndex = '\0';
        local_378.ConservativeRasterization = Disabled;
        local_378.bDepthBounds = false;
        local_378.MultiViewCount = '\0';
        local_378.bHasFragmentDensityAttachment = false;
        local_378.bAllowVariableRateShading = true;
        local_378.ShadingRate = VRSSR_1x1;
        local_378.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
        local_378.StatePrecachePSOHash = 0;
        local_378.BlendState =
             TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI.Reference;
        if (GMobileUseLightStencilCulling == 0) {
          if (param_4) {
            local_378.RasterizerState =
                 TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                 ::StaticResource.StateRHI.Reference;
            local_378.DepthStencilState =
                 TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,22,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI.Reference;
          }
          else {
            local_378.RasterizerState =
                 TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                 ::StaticResource.StateRHI.Reference;
            local_378.DepthStencilState =
                 TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,22,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI.Reference;
          }
        }
        else {
          local_378.RasterizerState =
               TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference;
          local_378.DepthStencilState =
               TStaticStateRHI<TStaticDepthStencilState<0,1,0,4,0,0,0,1,4,1,0,1,23,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference;
        }
        local_378.BoundShaderState.VertexDeclarationRHI =
             (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
        local_378.PrimitiveType = PT_TriangleList;
        local_158.RenderTargetsEnabled = 0;
        local_158.RenderTargetFormats.Elements[0] = '\0';
        local_158.RenderTargetFormats.Elements[1] = '\0';
        local_158.RenderTargetFormats.Elements[2] = '\0';
        local_158.RenderTargetFormats.Elements[3] = '\0';
        local_158.RenderTargetFormats.Elements[4] = '\0';
        local_158.RenderTargetFormats.Elements[5] = '\0';
        local_158.RenderTargetFormats.Elements[6] = '\0';
        local_158.RenderTargetFormats.Elements[7] = '\0';
        local_158.RenderTargetFlags.Elements[0] = None;
        local_158.RenderTargetFlags.Elements[1] = None;
        local_158.RenderTargetFlags.Elements[2] = None;
        local_158.RenderTargetFlags.Elements[3] = None;
        local_158.RenderTargetFlags.Elements[4] = None;
        local_158.RenderTargetFlags.Elements[5] = None;
        local_158.RenderTargetFlags.Elements[6] = None;
        local_158.RenderTargetFlags.Elements[7] = None;
        local_158.DepthStencilTargetFormat = PF_Unknown;
        local_158.DepthStencilTargetFlag = None;
        local_158.DepthTargetLoadAction = ENoAction;
        local_158.DepthTargetStoreAction = ENoAction;
        local_158.StencilTargetLoadAction = ENoAction;
        local_158.StencilTargetStoreAction = ENoAction;
        local_158.DepthStencilAccess.Value = DepthNop;
        local_158.NumSamples = 1;
        local_158.MultiViewCount = '\0';
        local_158.bHasFragmentDensityAttachment = false;
        local_378.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar9;
        bVar7 = MobileAllowFramebufferFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform);
        pFVar3 = *(FSceneTexturesConfig **)((longlong)this + 8);
        if (bVar7) {
          SetupGBufferRenderTargetInfo(pFVar3,&local_158,false,GBL_Default);
        }
        else {
          AddRenderTargetInfo(pFVar3->ColorFormat,pFVar3->ColorCreateFlags,&local_158);
        }
        SetupDepthStencilInfo
                  (PF_DepthStencil,
                   *(ETextureCreateFlags *)(*(longlong *)((longlong)this + 8) + 0x30),ELoad,ELoad,
                   (FExclusiveDepthStencil)0x21,&local_158);
        local_378.StatePrecachePSOHash =
             (**(code **)(GDynamicRHI->_padding_ + 0x2d0))(GDynamicRHI,&local_378);
        ApplyTargetsInfo(&local_378,&local_158);
        local_378.SubpassHint = None;
        local_378.SubpassIndex = '\0';
        bVar7 = MobileAllowFramebufferFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform);
        if (bVar7) {
          local_378.SubpassHint = DeferredShadingSubpass;
          local_378.SubpassIndex = '\x02';
        }
        local_298.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData =
             (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
        local_298.ShaderPreloadData.Shaders.ArrayNum = 0;
        local_298.ShaderPreloadData.Shaders.ArrayMax = 3;
        local_298.Type = Graphics;
        local_298.bRequired = true;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
             local_378.BoundShaderState.VertexDeclarationRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexShaderRHI =
             local_378.BoundShaderState.VertexShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.PixelShaderRHI =
             local_378.BoundShaderState.PixelShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.MeshShaderRHI =
             local_378.BoundShaderState.MeshShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.AmplificationShaderRHI =
             local_378.BoundShaderState.AmplificationShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.GeometryShaderRHI =
             local_378.BoundShaderState.GeometryShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BoundShaderState.WorkGraphMeshShaderRHI =
             local_378.BoundShaderState.WorkGraphMeshShaderRHI;
        local_298.field2_0x8.GraphicsPSOInitializer.BlendState = local_378.BlendState;
        local_298.field2_0x8.GraphicsPSOInitializer.RasterizerState = local_378.RasterizerState;
        local_298.field2_0x8.GraphicsPSOInitializer.DepthStencilState = local_378.DepthStencilState;
        local_298.field2_0x8._96_8_ =
             CONCAT44(local_378.RenderTargetsEnabled,local_378.PrimitiveType);
        local_298.field2_0x8._108_1_ = local_378.RenderTargetFormats.Elements[4];
        local_298.field2_0x8._109_1_ = local_378.RenderTargetFormats.Elements[5];
        local_298.field2_0x8._110_1_ = local_378.RenderTargetFormats.Elements[6];
        local_298.field2_0x8._111_1_ = local_378.RenderTargetFormats.Elements[7];
        local_298.field2_0x8._104_1_ = local_378.RenderTargetFormats.Elements[0];
        local_298.field2_0x8._105_1_ = local_378.RenderTargetFormats.Elements[1];
        local_298.field2_0x8._106_1_ = local_378.RenderTargetFormats.Elements[2];
        local_298.field2_0x8._107_1_ = local_378.RenderTargetFormats.Elements[3];
        local_298.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements
        [0] = local_378.ImmutableSamplerState.ImmutableSamplers.Elements[0];
        local_298.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements
        [1] = local_378.ImmutableSamplerState.ImmutableSamplers.Elements[1];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[0] =
             local_378.RenderTargetFlags.Elements[0];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[1] =
             local_378.RenderTargetFlags.Elements[1];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[2] =
             local_378.RenderTargetFlags.Elements[2];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[3] =
             local_378.RenderTargetFlags.Elements[3];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[4] =
             local_378.RenderTargetFlags.Elements[4];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[5] =
             local_378.RenderTargetFlags.Elements[5];
        local_298.field2_0x8._176_8_ =
             CONCAT71(local_378._177_7_,local_378.DepthStencilTargetFormat);
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[6] =
             local_378.RenderTargetFlags.Elements[6];
        local_298.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[7] =
             local_378.RenderTargetFlags.Elements[7];
        local_298.field2_0x8.GraphicsPSOInitializer.DepthStencilTargetFlag =
             local_378.DepthStencilTargetFlag;
        local_298.field2_0x8._208_8_ = CONCAT44(local_378._212_4_,local_378._208_4_);
        local_298.field2_0x8.GraphicsPSOInitializer.DepthTargetLoadAction =
             local_378.DepthTargetLoadAction;
        local_298.field2_0x8.GraphicsPSOInitializer.DepthTargetStoreAction =
             local_378.DepthTargetStoreAction;
        local_298.field2_0x8.GraphicsPSOInitializer.StencilTargetLoadAction =
             local_378.StencilTargetLoadAction;
        local_298.field2_0x8.GraphicsPSOInitializer.StencilTargetStoreAction =
             local_378.StencilTargetStoreAction;
        local_298.field2_0x8.GraphicsPSOInitializer.DepthStencilAccess.Value =
             (FExclusiveDepthStencil)local_378.DepthStencilAccess.Value;
        local_298.field2_0x8.GraphicsPSOInitializer.NumSamples = local_378.NumSamples;
        local_298.field2_0x8.GraphicsPSOInitializer.SubpassHint = local_378.SubpassHint;
        local_298.field2_0x8.GraphicsPSOInitializer.SubpassIndex = local_378.SubpassIndex;
        local_298.field2_0x8.GraphicsPSOInitializer.ConservativeRasterization =
             local_378.ConservativeRasterization;
        local_298.field2_0x8.GraphicsPSOInitializer.bDepthBounds = local_378.bDepthBounds;
        local_298.field2_0x8.GraphicsPSOInitializer.MultiViewCount = local_378.MultiViewCount;
        local_298.field2_0x8.GraphicsPSOInitializer.bHasFragmentDensityAttachment =
             local_378.bHasFragmentDensityAttachment;
        local_298.field2_0x8.GraphicsPSOInitializer.StatePrecachePSOHash =
             local_378.StatePrecachePSOHash;
        local_298.VertexFactoryType = (FVertexFactoryType *)0x0;
        local_298.bDefaultMaterial = 0;
        local_298.PSOCollectorIndex = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
        pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
        if ((((FPSOPrecacheData *)pFVar4->Data <= &local_298) &&
            (&local_298 < (FPSOPrecacheData *)pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4)
            )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *(int *)&pFVar4[1].Data;
        piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x138,8,pFVar4,piVar1);
        }
        *(int *)&pFVar4[1].Data = iVar10 + 1;
        FPSOPrecacheData::FPSOPrecacheData
                  ((FPSOPrecacheData *)(pFVar4->Data + (longlong)iVar10 * 0x138),&local_298);
        if (local_298.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData !=
            (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
          FMemory::Free((void *)local_298.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData)
          ;
        }
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 144f85c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializers
          (FDeferredMobileLightMaterialPSOCollector *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FShaderType *pFVar5;
  undefined1 auStack_1a8 [32];
  FMaterial *local_178;
  FSceneTexturesConfig *local_170;
  FDeferredMobileLightMaterialPSOCollector *local_168;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_160;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  iVar4 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if (iVar4 == 2) {
    CollectPSOInitializersDirectional(this,param_1,param_2,param_5);
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
    pFVar5 = (FShaderType *)FMobileRadialLightFunctionPS::GetStaticType();
    bVar1 = (byte)pFVar5->Frequency;
    if (local_e8.ShaderType[bVar1] != (FShaderType *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_e8.ShaderType[bVar1] = pFVar5;
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
    bVar3 = FMaterial::TryGetShaders(param_2,&local_e8,(FVertexFactoryType *)0x0,&local_158);
    if (bVar3) {
      local_160 = param_5;
      local_178 = param_2;
      local_170 = param_1;
      local_168 = this;
      `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
      operator()(&local_178,0,'\x01',false,false);
      `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
      operator()(&local_178,1,'\x01',false,false);
      `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
      operator()(&local_178,0,'\x01',true,false);
      `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
      operator()(&local_178,1,'\x01',true,false);
      `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
      operator()(&local_178,0,'\x01',true,true);
      `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
      operator()(&local_178,1,'\x01',true,true);
      `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
      operator()(&local_178,0,'\x02',false,false);
      `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
      operator()(&local_178,1,'\x02',false,false);
    }
  }
  return;
}

// CollectPSOInitializersDirectional @ 144f86330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional
          (FDeferredMobileLightMaterialPSOCollector *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  undefined1 auStackY_198 [32];
  FMaterial *local_168;
  FSceneTexturesConfig *local_160;
  FDeferredMobileLightMaterialPSOCollector *local_158;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_150;
  FMaterialShaders local_148;
  FMaterialShaderTypes local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_d8.PipelineType = (FShaderPipelineType *)0x0;
  local_d8.ShaderType[0] = (FShaderType *)0x0;
  local_d8.ShaderType[1] = (FShaderType *)0x0;
  local_d8.ShaderType[2] = (FShaderType *)0x0;
  local_d8.ShaderType[3] = (FShaderType *)0x0;
  local_d8.ShaderType[4] = (FShaderType *)0x0;
  local_d8.ShaderType[5] = (FShaderType *)0x0;
  local_d8.ShaderType[6] = (FShaderType *)0x0;
  local_d8.ShaderType[7] = (FShaderType *)0x0;
  local_d8.ShaderType[8] = (FShaderType *)0x0;
  local_d8.ShaderType[9] = (FShaderType *)0x0;
  local_d8.ShaderType[10] = (FShaderType *)0x0;
  local_d8.ShaderType[0xb] = (FShaderType *)0x0;
  local_d8.PermutationId[0] = 0;
  local_d8.PermutationId[1] = 0;
  local_d8.PermutationId[2] = 0;
  local_d8.PermutationId[3] = 0;
  local_d8.PermutationId[4] = 0;
  local_d8.PermutationId[5] = 0;
  local_d8.PermutationId[6] = 0;
  local_d8.PermutationId[7] = 0;
  local_d8.PermutationId[8] = 0;
  local_d8.PermutationId[9] = 0;
  local_d8.PermutationId[10] = 0;
  local_d8.PermutationId[0xb] = 0;
  pFVar4 = (FShaderType *)FMobileDirectionalLightFunctionPS::GetStaticType();
  bVar1 = (byte)pFVar4->Frequency;
  if (local_d8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_d8.ShaderType[bVar1] = pFVar4;
  local_d8.PermutationId[bVar1] = 0;
  local_148.ShaderMap = (FShaderMapBase *)0x0;
  local_148.Pipeline = (FShaderPipeline *)0x0;
  local_148.Shaders[0] = (FShader *)0x0;
  local_148.Shaders[1] = (FShader *)0x0;
  local_148.Shaders[2] = (FShader *)0x0;
  local_148.Shaders[3] = (FShader *)0x0;
  local_148.Shaders[4] = (FShader *)0x0;
  local_148.Shaders[5] = (FShader *)0x0;
  local_148.Shaders[6] = (FShader *)0x0;
  local_148.Shaders[7] = (FShader *)0x0;
  local_148.Shaders[8] = (FShader *)0x0;
  local_148.Shaders[9] = (FShader *)0x0;
  local_148.Shaders[10] = (FShader *)0x0;
  local_148.Shaders[0xb] = (FShader *)0x0;
  bVar3 = FMaterial::TryGetShaders(param_2,&local_d8,(FVertexFactoryType *)0x0,&local_148);
  if (bVar3) {
    local_168 = param_2;
    local_160 = param_1;
    local_158 = this;
    local_150 = param_3;
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional'::__l2::<lambda_1>
    ::operator()(&local_168,0,true,false,3,true);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional'::__l2::<lambda_1>
    ::operator()(&local_168,1,true,false,3,true);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional'::__l2::<lambda_1>
    ::operator()(&local_168,0,false,true,0,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional'::__l2::<lambda_1>
    ::operator()(&local_168,0,true,false,0,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional'::__l2::<lambda_1>
    ::operator()(&local_168,1,true,false,0,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional'::__l2::<lambda_1>
    ::operator()(&local_168,0,false,false,0,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional'::__l2::<lambda_1>
    ::operator()(&local_168,1,false,false,0,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersDirectional'::__l2::<lambda_1>
    ::operator()(&local_168,0,true,true,0,false);
  }
  return;
}

// CollectPSOInitializersLocal @ 144f86690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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

void __thiscall
FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal
          (FDeferredMobileLightMaterialPSOCollector *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FShaderType *pFVar4;
  undefined1 auStack_198 [32];
  FMaterial *local_168;
  FSceneTexturesConfig *local_160;
  FDeferredMobileLightMaterialPSOCollector *local_158;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_150;
  FMaterialShaders local_148;
  FMaterialShaderTypes local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_d8.PipelineType = (FShaderPipelineType *)0x0;
  local_d8.ShaderType[0] = (FShaderType *)0x0;
  local_d8.ShaderType[1] = (FShaderType *)0x0;
  local_d8.ShaderType[2] = (FShaderType *)0x0;
  local_d8.ShaderType[3] = (FShaderType *)0x0;
  local_d8.ShaderType[4] = (FShaderType *)0x0;
  local_d8.ShaderType[5] = (FShaderType *)0x0;
  local_d8.ShaderType[6] = (FShaderType *)0x0;
  local_d8.ShaderType[7] = (FShaderType *)0x0;
  local_d8.ShaderType[8] = (FShaderType *)0x0;
  local_d8.ShaderType[9] = (FShaderType *)0x0;
  local_d8.ShaderType[10] = (FShaderType *)0x0;
  local_d8.ShaderType[0xb] = (FShaderType *)0x0;
  local_d8.PermutationId[0] = 0;
  local_d8.PermutationId[1] = 0;
  local_d8.PermutationId[2] = 0;
  local_d8.PermutationId[3] = 0;
  local_d8.PermutationId[4] = 0;
  local_d8.PermutationId[5] = 0;
  local_d8.PermutationId[6] = 0;
  local_d8.PermutationId[7] = 0;
  local_d8.PermutationId[8] = 0;
  local_d8.PermutationId[9] = 0;
  local_d8.PermutationId[10] = 0;
  local_d8.PermutationId[0xb] = 0;
  pFVar4 = (FShaderType *)FMobileRadialLightFunctionPS::GetStaticType();
  bVar1 = (byte)pFVar4->Frequency;
  if (local_d8.ShaderType[bVar1] != (FShaderType *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType[Frequency] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                       ,0xd0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_d8.ShaderType[bVar1] = pFVar4;
  local_d8.PermutationId[bVar1] = 0;
  local_148.ShaderMap = (FShaderMapBase *)0x0;
  local_148.Pipeline = (FShaderPipeline *)0x0;
  local_148.Shaders[0] = (FShader *)0x0;
  local_148.Shaders[1] = (FShader *)0x0;
  local_148.Shaders[2] = (FShader *)0x0;
  local_148.Shaders[3] = (FShader *)0x0;
  local_148.Shaders[4] = (FShader *)0x0;
  local_148.Shaders[5] = (FShader *)0x0;
  local_148.Shaders[6] = (FShader *)0x0;
  local_148.Shaders[7] = (FShader *)0x0;
  local_148.Shaders[8] = (FShader *)0x0;
  local_148.Shaders[9] = (FShader *)0x0;
  local_148.Shaders[10] = (FShader *)0x0;
  local_148.Shaders[0xb] = (FShader *)0x0;
  bVar3 = FMaterial::TryGetShaders(param_2,&local_d8,(FVertexFactoryType *)0x0,&local_148);
  if (bVar3) {
    local_168 = param_2;
    local_160 = param_1;
    local_158 = this;
    local_150 = param_3;
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
    operator()(&local_168,0,'\x01',false,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
    operator()(&local_168,1,'\x01',false,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
    operator()(&local_168,0,'\x01',true,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
    operator()(&local_168,1,'\x01',true,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
    operator()(&local_168,0,'\x01',true,true);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
    operator()(&local_168,1,'\x01',true,true);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
    operator()(&local_168,0,'\x02',false,false);
    `FDeferredMobileLightMaterialPSOCollector::CollectPSOInitializersLocal'::__l2::<lambda_1>::
    operator()(&local_168,1,'\x02',false,false);
  }
  return;
}


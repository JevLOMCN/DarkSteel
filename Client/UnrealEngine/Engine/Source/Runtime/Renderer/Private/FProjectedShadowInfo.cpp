// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 71

// operator() @ 1448617c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection'::__l28::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FParameters *pFVar1;
  longlong lVar2;
  FRDGResource *this_00;
  FRHIResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FRHIBlendState> TVar6;
  FRHIPixelShader *pFVar7;
  FRHIVertexShader *pFVar8;
  FShaderParametersMetadata *pFVar9;
  IRHICommandContext *pIVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined1 auStackY_178 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_138;
  FGraphicsPipelineStateInitializer local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FRHICommandList::SetViewport
            (param_2,(float)*(int *)((longlong)this + 0x30),(float)*(int *)((longlong)this + 0x34),
             0.0,(float)*(int *)((longlong)this + 0x38),(float)*(int *)((longlong)this + 0x3c),
             __real_3f800000);
  FRHICommandList::SetScissorRect
            (param_2,true,*(uint *)((longlong)this + 0x30),*(uint *)((longlong)this + 0x34),
             *(uint *)((longlong)this + 0x38),*(uint *)((longlong)this + 0x3c));
  local_128.bAllowVariableRateShading = true;
  local_128.ShadingRate = VRSSR_1x1;
  local_128.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_128.RenderTargetsEnabled = 0;
  local_128.RenderTargetFormats.Elements[0] = '\0';
  local_128.RenderTargetFormats.Elements[1] = '\0';
  local_128.RenderTargetFormats.Elements[2] = '\0';
  local_128.RenderTargetFormats.Elements[3] = '\0';
  local_128.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_128.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_128.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_128.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_128.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_128.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_128.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_128.BlendState = (FRHIBlendState *)0x0;
  local_128.RasterizerState = (FRHIRasterizerState *)0x0;
  local_128.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_128.RenderTargetFlags.Elements[0] = None;
  local_128.RenderTargetFlags.Elements[1] = None;
  local_128.RenderTargetFlags.Elements[2] = None;
  local_128.RenderTargetFlags.Elements[3] = None;
  local_128.RenderTargetFlags.Elements[4] = None;
  local_128.RenderTargetFlags.Elements[5] = None;
  local_128.RenderTargetFlags.Elements[6] = None;
  local_128.RenderTargetFlags.Elements[7] = None;
  local_128.RenderTargetFormats.Elements[4] = '\0';
  local_128.RenderTargetFormats.Elements[5] = '\0';
  local_128.RenderTargetFormats.Elements[6] = '\0';
  local_128.RenderTargetFormats.Elements[7] = '\0';
  local_128.DepthStencilTargetFormat = PF_Unknown;
  local_128.DepthStencilTargetFlag = None;
  local_128.DepthTargetLoadAction = ENoAction;
  local_128.DepthTargetStoreAction = ENoAction;
  local_128.StencilTargetLoadAction = ENoAction;
  local_128.StencilTargetStoreAction = ENoAction;
  local_128.DepthStencilAccess.Value = DepthNop;
  local_128.NumSamples = 0;
  local_128.SubpassHint = None;
  local_128.SubpassIndex = '\0';
  local_128.ConservativeRasterization = Disabled;
  local_128.bDepthBounds = false;
  local_128.MultiViewCount = '\0';
  local_128.bHasFragmentDensityAttachment = false;
  local_128.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_128);
  local_128.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  TVar6 = TStaticStateRHI<TStaticBlendState<15,0,0,2,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
          ::StaticResource.StateRHI;
  if (*(char *)((longlong)this + 0x50) == '\0') {
    TVar6.Reference =
         FProjectedShadowInfo::GetBlendStateForProjection
                   (*(FProjectedShadowInfo **)this,*(bool *)((longlong)this + 0x40),false);
  }
  local_128._200_8_ =
       CONCAT26(local_128._206_2_,
                CONCAT15((char)(*(uint *)(*(longlong *)this + 0x990) >> 4),local_128._200_5_)) &
       0xffff01ffffffffff;
  local_128.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  local_128.PrimitiveType = -(uint)(GRHIGlobals.SupportsRectTopology != false) & PT_RectList;
  local_128.BlendState = TVar6.Reference;
  local_128.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable> *)
                  ((longlong)this + 0x20),true);
  local_128.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FShadowTileVS,FShaderMapPointerTable>::GetVertexShader
                 ((TShaderRefBase<FShadowTileVS,FShaderMapPointerTable> *)((longlong)this + 0x10),
                  true);
  SetGraphicsPipelineState(param_2,&local_128,0,CheckApply,true);
  pFVar1 = *(FParameters **)((longlong)this + 0x48);
  pFVar7 = TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x20),true);
  SetShaderParameters<FRHICommandList,FDistanceFieldShadowingUpsamplePS,FRHIPixelShader>
            (param_2,(TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x20),pFVar7,pFVar1);
  pvVar12 = (void *)(*(longlong *)((longlong)this + 0x48) + 0x80);
  pFVar8 = TShaderRefBase<FShadowTileVS,FShaderMapPointerTable>::GetVertexShader
                     ((TShaderRefBase<FShadowTileVS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x10),true);
  pFVar9 = FShadowTileVS::FParameters::FTypeInfo::GetStructMetadata();
  local_138.ShaderContent = *(FShader **)((longlong)this + 0x10);
  local_138.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  ValidateShaderParameters(&local_138,pFVar9,pvVar12);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar8,
             *(FShaderParameterBindings **)((longlong)this + 0x10),pFVar9,pvVar12);
  lVar2 = *(longlong *)this;
  if ((*(byte *)(lVar2 + 0x990) & 0x10) != 0) {
    SetDepthBoundsTest(param_2,*(float *)(lVar2 + 0x6e0) - *(float *)(lVar2 + 0x6e8),
                       *(float *)(lVar2 + 0x6e4),
                       (TMatrix<double> *)(*(longlong *)((longlong)this + 8) + 0x3b0));
  }
  lVar2 = *(longlong *)((longlong)this + 0x48);
  if ((*(longlong *)(lVar2 + 0xa0) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x183,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(lVar2 + 0xa0));
  lVar2 = *(longlong *)((longlong)this + 0x48);
  if ((*(longlong *)(lVar2 + 0xa0) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x183,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = *(FRDGResource **)(lVar2 + 0xa0);
  if ((((ulonglong)this_00[4].Name & 0x80) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x53c,L"Buffer %s was not flagged for indirect draw usage."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FRDGResource::ValidateRHIAccess(this_00);
  pFVar3 = this_00->ResourceRHI;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
    puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar11;
    *(undefined8 **)&param_2->field_0x30 = puVar11 + 1;
    *puVar11 = &___7FRHICommandDrawPrimitiveIndirect__6B_;
    puVar11[1] = 0;
    puVar11[2] = pFVar3;
    *(undefined4 *)(puVar11 + 3) = 0;
  }
  else {
    pIVar10 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_2);
    (**(code **)(pIVar10->_padding_ + 0x1e8))(pIVar10);
  }
  FRHICommandList::SetScissorRect(param_2,false,0,0,0,0);
  return;
}

// operator() @ 144861c50

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection'::__l37::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FParameters *pFVar1;
  longlong lVar2;
  TRefCountPtr<FRHIBlendState> TVar3;
  FRHIPixelShader *pFVar4;
  undefined1 auStackY_168 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_128;
  FGraphicsPipelineStateInitializer local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  FRHICommandList::SetViewport
            (param_2,(float)*(int *)((longlong)this + 0x20),(float)*(int *)((longlong)this + 0x24),
             0.0,(float)*(int *)((longlong)this + 0x28),(float)*(int *)((longlong)this + 0x2c),
             __real_3f800000);
  FRHICommandList::SetScissorRect
            (param_2,true,*(uint *)((longlong)this + 0x20),*(uint *)((longlong)this + 0x24),
             *(uint *)((longlong)this + 0x28),*(uint *)((longlong)this + 0x2c));
  local_128.ShaderContent = *(FShader **)((longlong)this + 0x10);
  local_128.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
  local_118.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_118.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_118.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_118.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_118.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_118.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_118.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_118.BlendState = (FRHIBlendState *)0x0;
  local_118.RasterizerState = (FRHIRasterizerState *)0x0;
  local_118.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_118.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_118.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_118.RenderTargetsEnabled = 0;
  local_118.RenderTargetFormats.Elements[0] = '\0';
  local_118.RenderTargetFormats.Elements[1] = '\0';
  local_118.RenderTargetFormats.Elements[2] = '\0';
  local_118.RenderTargetFormats.Elements[3] = '\0';
  local_118.RenderTargetFormats.Elements[4] = '\0';
  local_118.RenderTargetFormats.Elements[5] = '\0';
  local_118.RenderTargetFormats.Elements[6] = '\0';
  local_118.RenderTargetFormats.Elements[7] = '\0';
  local_118.RenderTargetFlags.Elements[0] = None;
  local_118.RenderTargetFlags.Elements[1] = None;
  local_118.RenderTargetFlags.Elements[2] = None;
  local_118.RenderTargetFlags.Elements[3] = None;
  local_118.RenderTargetFlags.Elements[4] = None;
  local_118.RenderTargetFlags.Elements[5] = None;
  local_118.RenderTargetFlags.Elements[6] = None;
  local_118.RenderTargetFlags.Elements[7] = None;
  local_118.DepthStencilTargetFormat = PF_Unknown;
  local_118.DepthStencilTargetFlag = None;
  local_118.DepthTargetLoadAction = ENoAction;
  local_118.DepthTargetStoreAction = ENoAction;
  local_118.StencilTargetLoadAction = ENoAction;
  local_118.StencilTargetStoreAction = ENoAction;
  local_118.DepthStencilAccess.Value = DepthNop;
  local_118.NumSamples = 0;
  local_118.SubpassHint = None;
  local_118.SubpassIndex = '\0';
  local_118.ConservativeRasterization = Disabled;
  local_118.bDepthBounds = false;
  local_118.MultiViewCount = '\0';
  local_118.bHasFragmentDensityAttachment = false;
  local_118.bAllowVariableRateShading = true;
  local_118.ShadingRate = VRSSR_1x1;
  local_118.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_118.StatePrecachePSOHash = 0;
  FPixelShaderUtils::InitFullscreenPipelineState
            (param_2,*(FGlobalShaderMap **)(*(longlong *)((longlong)this + 8) + 0x26c0),&local_128,
             &local_118);
  TVar3 = TStaticStateRHI<TStaticBlendState<15,0,0,2,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
          ::StaticResource.StateRHI;
  if (*(char *)((longlong)this + 0x40) == '\0') {
    TVar3.Reference =
         FProjectedShadowInfo::GetBlendStateForProjection
                   (*(FProjectedShadowInfo **)this,*(bool *)((longlong)this + 0x30),false);
  }
  local_118._200_8_ =
       CONCAT26(local_118._206_2_,
                CONCAT15((char)(*(uint *)(*(longlong *)this + 0x990) >> 4),local_118._200_5_)) &
       0xffff01ffffffffff;
  local_118.BlendState = TVar3.Reference;
  local_118.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable> *)
                  ((longlong)this + 0x10),true);
  SetGraphicsPipelineState(param_2,&local_118,0,CheckApply,true);
  pFVar1 = *(FParameters **)((longlong)this + 0x38);
  pFVar4 = TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x10),true);
  SetShaderParameters<FRHICommandList,FDistanceFieldShadowingUpsamplePS,FRHIPixelShader>
            (param_2,(TShaderRefBase<FDistanceFieldShadowingUpsamplePS,FShaderMapPointerTable> *)
                     ((longlong)this + 0x10),pFVar4,pFVar1);
  lVar2 = *(longlong *)this;
  if ((*(byte *)(lVar2 + 0x990) & 0x10) != 0) {
    SetDepthBoundsTest(param_2,*(float *)(lVar2 + 0x6e0) - *(float *)(lVar2 + 0x6e8),
                       *(float *)(lVar2 + 0x6e4),
                       (TMatrix<double> *)(*(longlong *)((longlong)this + 8) + 0x3b0));
  }
  FPixelShaderUtils::DrawFullscreenTriangle(param_2,1);
  FRHICommandList::SetScissorRect(param_2,false,0,0,0,0);
  return;
}

// RenderRayTracedDistanceFieldProjection @ 14489a0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTexture * __thiscall
FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection
          (FProjectedShadowInfo *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1,bool param_2,FMinimalSceneTextures *param_3,FViewInfo *param_4,
          TIntRect<int> *param_5)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  TIntPoint<int>_u_0_s_0 TVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  EShaderPlatform EVar15;
  longlong *plVar16;
  DistanceFieldShadowViewGPUData *pDVar17;
  FName *pFVar18;
  TStatId TVar19;
  FScreenPassTexture *pFVar20;
  ForElementType<UE::Math::TPlane<double>_> FVar21;
  FDistanceFieldCulledObjectBufferParameters *pFVar22;
  FLightTileIntersectionParameters *pFVar23;
  FRDGTexture *pFVar24;
  FRDGScope *this_00;
  TIntPoint<int>_u_0 *pTVar25;
  FRDGTexture *pFVar26;
  uint uVar27;
  undefined1 *puVar28;
  ForElementType<UE::Math::TPlane<double>_> FVar29;
  int iVar30;
  int iVar31;
  undefined1 auStackY_6e8 [32];
  FRDGTexture *local_658;
  int iStack_644;
  FName local_630;
  byte local_628;
  FName local_620;
  byte local_618;
  undefined4 local_610;
  undefined4 uStack_60c;
  FMinimalSceneTextures *local_608;
  TIntRect<int>_u_0 local_600;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  TRDGEventScopeGuard<FRDGScope_RHI> local_5d8;
  char local_5c8;
  FViewInfo *local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  ulonglong local_5a8;
  longlong local_5a0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_598;
  char local_588;
  FSourceLocation local_578;
  TVector<double>_u_0 local_558;
  FSourceLocation local_538;
  FName local_518;
  FName local_510;
  FName local_508;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_> local_500;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_> local_4f0;
  TVector4<float>_u_0 local_4d8;
  FName local_4c8;
  TVector<double>_u_0 local_4c0;
  uint uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  uint uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  FDistanceFieldObjectBufferParameters local_468;
  FDistanceFieldObjectBufferParameters local_438;
  undefined1 local_408 [24];
  float local_3f0;
  int local_3ec;
  undefined4 local_3e8;
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined2 local_3d4;
  void *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined1 local_3b8 [24];
  float local_3a0;
  int local_39c;
  undefined4 local_398;
  undefined8 local_394;
  undefined4 local_38c;
  undefined4 local_388;
  undefined2 local_384;
  void *local_378;
  undefined4 local_370;
  undefined4 local_36c;
  TMatrix<double> local_368;
  TMatrix<double> local_2e8;
  undefined1 local_268 [32];
  double local_248;
  double dStack_240;
  undefined1 local_238 [16];
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [32];
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  local_608 = param_3;
  local_5c0 = param_4;
  uVar27 = ((uint)((ulonglong)param_4 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_4 >> 4)) *
           -0x7a143595;
  uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
  uVar27 = uVar27 >> 0x10 ^ uVar27;
  if (*(int *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x8 !=
      *(int *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x34) {
    puVar28 = *(undefined1 **)&(this->CachedDistanceFieldShadowViewGPUData).field_0x40;
    if (puVar28 == (undefined1 *)0x0) {
      puVar28 = &(this->CachedDistanceFieldShadowViewGPUData).field_0x38;
    }
    iVar31 = *(int *)(puVar28 +
                     (ulonglong)
                     (*(int *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x48 - 1U & uVar27
                     ) * 4);
    if (iVar31 != -1) {
      do {
        plVar16 = (longlong *)
                  ((longlong)iVar31 * 0x38 +
                  *(longlong *)&this->CachedDistanceFieldShadowViewGPUData);
        if ((FViewInfo *)*plVar16 == param_4) {
          if (plVar16 != (longlong *)0x0) {
            pDVar17 = (DistanceFieldShadowViewGPUData *)(plVar16 + 1);
            goto LAB_14489a190;
          }
          break;
        }
        iVar31 = (int)plVar16[6];
      } while (iVar31 != -1);
    }
  }
  pDVar17 = TMapBase<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,0>_>
            ::EmplaceByHash<FViewInfo_const_*>
                      ((TMapBase<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData,0>_>
                        *)&this->CachedDistanceFieldShadowViewGPUData,uVar27,&local_5c0);
LAB_14489a190:
  uVar2 = *(ulonglong *)&param_5->field0_0x0;
  uVar3 = *(ulonglong *)((longlong)&param_5->field0_0x0 + 8);
  iVar30 = 2 - (uint)(GFullResolutionDFShadowing != 0);
  uVar7 = (longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
          (longlong)iVar30;
  uVar8 = (longlong)((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) /
          (longlong)iVar30;
  iStack_644 = (int)(uVar2 >> 0x20);
  local_5b8._4_4_ = (int)(uVar3 >> 0x20);
  lVar6 = (longlong)local_5b8._4_4_;
  iVar31 = (int)uVar7 - (int)uVar8;
  local_5b0._4_4_ = (int)(lVar6 / (longlong)iVar30);
  local_5b0._4_4_ = local_5b0._4_4_ - (int)((longlong)iStack_644 / (longlong)iVar30);
  local_5a8 = (longlong)iStack_644 / (longlong)iVar30 << 0x20 | uVar8 & 0xffffffff;
  local_600._12_4_ = local_5b0._4_4_;
  local_600._8_4_ = iVar31;
  local_600._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  if (pDVar17->RayTracedShadowsTexture != (FRDGTexture *)0x0) {
    __return_storage_ptr__->Texture = pDVar17->RayTracedShadowsTexture;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>_u_0)local_600._s_0.Max.field0_0x0;
    pFVar24 = __return_storage_ptr__->Texture;
    if (pFVar24 == (FRDGTexture *)0x0) {
      return __return_storage_ptr__;
    }
    iVar30 = (pFVar24->VisualizeTextureExtent).field0_0x0._s_0.X;
    if (iVar31 < iVar30) {
      iVar31 = iVar30;
    }
    (pFVar24->VisualizeTextureExtent).field0_0x0._s_0.X = iVar31;
    goto LAB_14489b29b;
  }
  if (local_5b0._4_4_ * iVar31 < 1) {
    __return_storage_ptr__->Texture = (FRDGTexture *)0x0;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    return __return_storage_ptr__;
  }
  local_5b8 = uVar3;
  local_5b0 = lVar6 / (longlong)iVar30 << 0x20 | uVar7 & 0xffffffff;
  EVar15 = FSceneView::GetShaderPlatform((FSceneView *)param_4);
  FVar29 = (ForElementType<UE::Math::TPlane<double>_>)0x0;
  if (GDistanceFieldShadowing == 0) {
LAB_14489a2f5:
    bVar14 = false;
  }
  else {
    iVar31 = 3;
    if (GDFShadowQuality < 3) {
      iVar31 = GDFShadowQuality;
    }
    iVar30 = 0;
    if (0 < iVar31) {
      iVar30 = iVar31;
    }
    if (iVar30 < 1) goto LAB_14489a2f5;
    bVar12 = DoesPlatformSupportDistanceFieldShadowing(EVar15);
    bVar14 = true;
    if (!bVar12) goto LAB_14489a2f5;
  }
  EVar15 = FSceneView::GetShaderPlatform((FSceneView *)param_4);
  if (GHeightFieldShadowing == 0) {
LAB_14489a342:
    bVar12 = false;
  }
  else {
    iVar31 = 3;
    if (GHFShadowQuality < 3) {
      iVar31 = GHFShadowQuality;
    }
    iVar30 = 0;
    if (0 < iVar31) {
      iVar30 = iVar31;
    }
    if ((iVar30 < 1) || ((int)param_4->_padding_ < 3)) goto LAB_14489a342;
    bVar13 = DoesPlatformSupportDistanceFieldShadowing(EVar15);
    bVar12 = true;
    if (!bVar13) goto LAB_14489a342;
  }
  dVar11 = __real_3ff0000000000000;
  lVar6 = *(longlong *)(param_4->_padding_ + 0x40);
  if ((bVar14) && ((*(byte *)(param_4->_padding_ + 0x50) & 0x20) != 0)) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_BeginRenderRayTracedDistanceFieldShadows =
           (FThreadSafeStaticStat<_public:_struct_FScreenPassTexture___cdecl_FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection(FRDGBuilder_&,bool,FMinimalSceneTextures_const_&,FViewInfo_const_&,UE::Math::TIntRect<int>_const_&)_::_11_::FStat_STAT_BeginRenderRayTracedDistanceFieldShadows>
            )0x0;
      pFVar18 = ::FName::FName(&local_518,"STAT_BeginRenderRayTracedDistanceFieldShadows");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeginRenderRayTracedDistanceFieldShadows
                 ,*pFVar18,L"STAT_BeginRenderRayTracedDistanceFieldShadows","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    TVar19.StatIdPtr = (TStatIdData *)StatPtr_STAT_BeginRenderRayTracedDistanceFieldShadows;
    if (StatPtr_STAT_BeginRenderRayTracedDistanceFieldShadows ==
        (FThreadSafeStaticStat<_public:_struct_FScreenPassTexture___cdecl_FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection(FRDGBuilder_&,bool,FMinimalSceneTextures_const_&,FViewInfo_const_&,UE::Math::TIntRect<int>_const_&)_::_11_::FStat_STAT_BeginRenderRayTracedDistanceFieldShadows>
         )0x0) {
      pFVar18 = ::FName::FName(&local_4c8,"STAT_BeginRenderRayTracedDistanceFieldShadows");
      TVar19.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_STAT_BeginRenderRayTracedDistanceFieldShadows,*pFVar18,
                      L"STAT_BeginRenderRayTracedDistanceFieldShadows","STATGROUP_Quick",
                      "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_578.Impl._Line = 0x3ae;
    local_578.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldShadowing.cpp"
    ;
    local_578.Impl._Column = 3;
    local_578.Impl._Function =
         "struct FScreenPassTexture __cdecl FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection(class FRDGBuilder &,bool,const struct FMinimalSceneTextures &,const class FViewInfo &,const struct UE::Math::TIntRect<int> &)"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_630,TVar19,CycleStat|ClearEveryFrame,false,&local_578);
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_5c8 = '\0';
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(lVar4 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_498 = 0;
        uStack_494 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_49c);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_BeginRayTracedD;
        ::Desc._padding_ = (longlong)u_BeginRayTracedD;
        ::Desc._padding_._0_4_ = 0x3af;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection'::__l16::Desc::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_500._Myfirst._Val = &::Desc;
      local_5d8.State = (FRDGScopeState *)param_1;
      local_5d8.Scope =
           FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)local_5d8.Scope;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_>_>
                (&((local_5d8.Scope)->Impl).Impl,(FRDGScopeState *)param_1,&local_500);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(local_5d8.Scope,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(local_5d8.Scope,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_5c8 = '\x01';
    }
    if (0 < *(int *)(lVar6 + 0x3f28)) {
      bVar14 = FDistanceFieldSceneData::HasPendingOperations
                         ((FDistanceFieldSceneData *)(lVar6 + 0x3f28));
      if ((bVar14) &&
         (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<3908528330801939379>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldShadowing.cpp"
                              ,0x3b3,"!Scene->DistanceFieldSceneData.HasPendingOperations()"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar9)();
        return pFVar20;
      }
      DistanceField::SetupObjectBufferParameters
                (&local_468,param_1,(FDistanceFieldSceneData *)(lVar6 + 0x3f28));
      if (pDVar17->SDFCulledObjectBufferParameters ==
          (FDistanceFieldCulledObjectBufferParameters *)0x0) {
        iVar31 = 0;
        _local_5e8 = 0;
        _fStack_5e0 = 0;
        local_558._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_558._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_558._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (this->bDirectionalLight == 0) {
          bVar14 = IsWholeScenePointLightShadow(this);
          if (!bVar14) {
            iVar31 = (this->CasterOuterFrustum).Planes.ArrayNum;
            local_558._s_0.X = (this->PreShadowTranslation).field0_0x0._s_0.X;
            local_558._s_0.Y = (this->PreShadowTranslation).field0_0x0._s_0.Y;
            FVar29 = (this->CasterOuterFrustum).Planes.AllocatorInstance.SecondaryData;
            local_558._s_0.Z = (this->PreShadowTranslation).field0_0x0._s_0.Z;
            FVar21 = (ForElementType<UE::Math::TPlane<double>_>)&this->CasterOuterFrustum;
            goto LAB_14489a786;
          }
          fStack_5e4 = (float)((double)param_4->_padding_ +
                              (this->ShadowBounds).Center.field0_0x0._s_0.Y);
          local_5e8 = (float)((double)param_4->_padding_ +
                             (this->ShadowBounds).Center.field0_0x0._s_0.X);
          fStack_5dc = (float)(this->ShadowBounds).W;
          fStack_5e0 = (float)((double)param_4->_padding_ +
                              (this->ShadowBounds).Center.field0_0x0._s_0.Z);
        }
        else {
          iVar31 = (this->CascadeSettings).ShadowBoundsAccurate.Planes.ArrayNum;
          FVar29 = (this->CascadeSettings).ShadowBoundsAccurate.Planes.AllocatorInstance.
                   SecondaryData;
          FVar21 = (ForElementType<UE::Math::TPlane<double>_>)
                   &(this->CascadeSettings).ShadowBoundsAccurate;
LAB_14489a786:
          if (FVar29 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
            FVar29 = FVar21;
          }
        }
        local_368.M[1][0] = ___xmm_3ff00000000000000000000000000000;
        local_368.M[1][1] = _UNK_15061cbc8;
        local_368.M[0][2] = 0.0;
        local_368.M[0][3] = 0.0;
        local_368.M[1][2] = 0.0;
        local_368.M[1][3] = 0.0;
        local_368.M[3][0] = (this->PreShadowTranslation).field0_0x0._s_0.X;
        local_368.M[3][1] = (this->PreShadowTranslation).field0_0x0._s_0.Y;
        local_368.M[2][0] = 0.0;
        local_368.M[2][1] = 0.0;
        local_368.M[3][2] = (this->PreShadowTranslation).field0_0x0._s_0.Z;
        local_368.M[0][0] = ___xmm_00000000000000003ff0000000000000;
        local_368.M[0][1] = _UNK_150689518;
        local_268._0_8_ = (undefined8)(this->TranslatedWorldToClipInnerMatrix).M[0][0];
        local_268._8_8_ = (undefined8)(this->TranslatedWorldToClipInnerMatrix).M[0][1];
        dVar10 = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][3];
        local_368.M[2][2] = ___xmm_00000000000000003ff0000000000000;
        local_368.M[2][3] = _UNK_150689518;
        local_248 = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][0];
        dStack_240 = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][1];
        local_268._24_4_ = SUB84(dVar10,0);
        local_268._16_8_ = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][2];
        local_268._28_4_ = (int)((ulonglong)dVar10 >> 0x20);
        dVar10 = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][3];
        local_228 = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][0];
        dStack_220 = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][1];
        local_238._8_4_ = SUB84(dVar10,0);
        local_238._0_8_ = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][2];
        local_238._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        dVar10 = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][3];
        local_208 = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][0];
        dStack_200 = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][1];
        local_218._8_4_ = SUB84(dVar10,0);
        local_218._0_8_ = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][2];
        local_218._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        dVar10 = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][3];
        local_368.M[3][3] = dVar11;
        local_1f8._8_4_ = SUB84(dVar10,0);
        local_1f8._0_8_ = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][2];
        local_1f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        VectorMatrixMultiply(&local_168,&local_368,(TMatrix<double> *)local_268);
        pFVar22 = FRDGBuilder::AllocObject<FDistanceFieldCulledObjectBufferParameters>(param_1);
        pDVar17->SDFCulledObjectBufferParameters = pFVar22;
        pFVar23 = FRDGBuilder::AllocObject<FLightTileIntersectionParameters>(param_1);
        pDVar17->SDFLightTileIntersectionParameters = pFVar23;
        CullDistanceFieldObjectsForLight
                  (param_1,param_4,this->LightSceneInfo->Proxy,DFPT_SignedDistanceField,&local_168,
                   iVar31,(TPlane<double> *)FVar29,(TVector<double> *)&local_558._s_0,
                   (TVector4<float> *)&local_5e8,(float)(this->ShadowBounds).W,true,false,&local_468
                   ,pDVar17->SDFCulledObjectBufferParameters,pFVar23);
      }
      iVar31 = 2 - (uint)(GFullResolutionDFShadowing != 0);
      pTVar25 = (TIntPoint<int>_u_0 *)(param_4->_padding_ + 0x1c8);
      if (*(char *)(param_4->_padding_ + 200) == '\0') {
        pTVar25 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
      }
      TVar5 = pTVar25->_s_0;
      local_3e8 = 0;
      local_408._8_8_ = FClearValueBinding::None._0_8_;
      local_408._16_8_ = FClearValueBinding::None.Value._4_8_;
      local_610 = (undefined4)
                  ((longlong)
                   ((ulonglong)(uint)(TVar5.X >> 0x1f) << 0x20 | (ulonglong)TVar5 & 0xffffffff) /
                  (longlong)iVar31);
      local_3dc = 0x10001;
      uStack_60c = (undefined4)
                   ((longlong)
                    ((ulonglong)(uint)(TVar5.Y >> 0x1f) << 0x20 | (ulonglong)TVar5 >> 0x20) /
                   (longlong)iVar31);
      local_3f0 = FClearValueBinding::None.Value.Color[3];
      local_3ec = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_3bc = 1;
      local_3e4._4_4_ = uStack_60c;
      local_3e4._0_4_ = local_610;
      local_408._0_8_ = GFastVRamConfig.DistanceFieldShadows | (UAV|ShaderResource);
      local_3d8 = 0xf000101;
      local_3d4 = 0xff00;
      local_3c8 = (void *)0x0;
      local_3c0 = 0;
      pFVar24 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_408,L"RayTracedShadows",None);
      pDVar17->RayTracedShadowsTexture = pFVar24;
      if (local_3c8 != (void *)0x0) {
        FMemory::Free(local_3c8);
      }
      RayTraceShadows(param_1,param_2,local_608,pDVar17->RayTracedShadowsTexture,param_4,param_5,
                      (TIntRect<int> *)&local_600._s_0,(FDistanceFieldSceneData *)(lVar6 + 0x3f28),
                      this,DFPT_SignedDistanceField,false,(FRDGTexture *)0x0,&local_468,
                      pDVar17->SDFCulledObjectBufferParameters,
                      pDVar17->SDFLightTileIntersectionParameters);
    }
    if (local_5c8 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_5d8);
    }
    if ((local_628 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_628 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_628 & 4) != 0) {
      FThreadStats::AddMessage(local_630,CycleScopeEnd);
    }
    local_628 = 0;
  }
  if ((((this->bDirectionalLight != 0) && ((*(byte *)(param_4->_padding_ + 0x50) & 0x20) != 0)) &&
      (GHeightFieldTextureAtlas._464_8_ != 0)) &&
     (((*(longlong *)(lVar6 + 0x3f38) != 0 && (0 < *(int *)(lVar6 + 0x43b8))) && (bVar12)))) {
    local_5a0 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(local_5a0 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1))
    {
      StatPtr_STAT_BeginRenderRayTracedHeightFieldShadows =
           (FThreadSafeStaticStat<_public:_struct_FScreenPassTexture___cdecl_FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection(FRDGBuilder_&,bool,FMinimalSceneTextures_const_&,FViewInfo_const_&,UE::Math::TIntRect<int>_const_&)_::_35_::FStat_STAT_BeginRenderRayTracedHeightFieldShadows>
            )0x0;
      pFVar18 = ::FName::FName(&local_510,"STAT_BeginRenderRayTracedHeightFieldShadows");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeginRenderRayTracedHeightFieldShadows,
                 *pFVar18,L"STAT_BeginRenderRayTracedHeightFieldShadows","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    TVar19.StatIdPtr = (TStatIdData *)StatPtr_STAT_BeginRenderRayTracedHeightFieldShadows;
    if (StatPtr_STAT_BeginRenderRayTracedHeightFieldShadows ==
        (FThreadSafeStaticStat<_public:_struct_FScreenPassTexture___cdecl_FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection(FRDGBuilder_&,bool,FMinimalSceneTextures_const_&,FViewInfo_const_&,UE::Math::TIntRect<int>_const_&)_::_35_::FStat_STAT_BeginRenderRayTracedHeightFieldShadows>
         )0x0) {
      pFVar18 = ::FName::FName(&local_508,"STAT_BeginRenderRayTracedHeightFieldShadows");
      TVar19.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_STAT_BeginRenderRayTracedHeightFieldShadows,*pFVar18,
                      L"STAT_BeginRenderRayTracedHeightFieldShadows","STATGROUP_Quick",
                      "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_538.Impl._Line = 0x40a;
    local_538.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldShadowing.cpp"
    ;
    local_538.Impl._Column = 3;
    local_538.Impl._Function =
         "struct FScreenPassTexture __cdecl FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection(class FRDGBuilder &,bool,const struct FMinimalSceneTextures &,const class FViewInfo &,const struct UE::Math::TIntRect<int> &)"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_620,TVar19,CycleStat|ClearEveryFrame,false,&local_538);
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_588 = '\0';
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(local_5a0 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)
         ) {
        local_478 = 0;
        uStack_474 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_47c);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_BeginRenderRayT;
        ::Desc._padding_ = (longlong)u_BeginRenderRayT;
        ::Desc._padding_._0_4_ = 0x40b;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection'::__l40::<lambda_2>::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_4f0._Myfirst._Val = &::Desc;
      local_598.State = (FRDGScopeState *)param_1;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_00;
      local_598.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_4f0);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_588 = '\x01';
    }
    if (((0 < *(int *)(lVar6 + 0x4498) - *(int *)(lVar6 + 0x44c4)) || (0 < *(int *)(lVar6 + 0x44e8))
        ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Scene->DistanceFieldSceneData.HasPendingHeightFieldOperations()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldShadowing.cpp"
                                  ,0x40d,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      pFVar20 = (FScreenPassTexture *)(*pcVar9)();
      return pFVar20;
    }
    DistanceField::SetupObjectBufferParameters
              (&local_438,param_1,(FDistanceFieldSceneData *)(lVar6 + 0x3f28));
    if (pDVar17->HeightFieldCulledObjectBufferParameters ==
        (FDistanceFieldCulledObjectBufferParameters *)0x0) {
      iVar31 = (this->CascadeSettings).ShadowBoundsAccurate.Planes.ArrayNum;
      FVar29 = (this->CascadeSettings).ShadowBoundsAccurate.Planes.AllocatorInstance.SecondaryData;
      local_4c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_4c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_4c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_4d8._0_8_ = 0;
      local_4d8._8_8_ = 0;
      local_2e8.M[0][2] = 0.0;
      local_2e8.M[0][3] = 0.0;
      local_2e8.M[1][2] = 0.0;
      local_2e8.M[1][3] = 0.0;
      local_2e8.M[3][0] = (this->PreShadowTranslation).field0_0x0._s_0.X;
      local_2e8.M[3][1] = (this->PreShadowTranslation).field0_0x0._s_0.Y;
      local_2e8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
      local_2e8.M[1][1] = _UNK_15061cbc8;
      local_2e8.M[3][2] = (this->PreShadowTranslation).field0_0x0._s_0.Z;
      local_2e8.M[2][0] = 0.0;
      local_2e8.M[2][1] = 0.0;
      local_2e8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
      local_2e8.M[0][1] = _UNK_150689518;
      local_1e8._0_8_ = (undefined8)(this->TranslatedWorldToClipInnerMatrix).M[0][0];
      local_1e8._8_8_ = (undefined8)(this->TranslatedWorldToClipInnerMatrix).M[0][1];
      dVar10 = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][3];
      local_2e8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
      local_2e8.M[2][3] = _UNK_150689518;
      local_1c8 = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][0];
      dStack_1c0 = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][1];
      local_1e8._24_4_ = SUB84(dVar10,0);
      local_1e8._16_8_ = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][2];
      local_1e8._28_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar10 = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][3];
      local_1a8 = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][0];
      dStack_1a0 = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][1];
      local_1b8._8_4_ = SUB84(dVar10,0);
      local_1b8._0_8_ = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][2];
      local_1b8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar10 = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][3];
      local_188 = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][0];
      dStack_180 = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][1];
      local_198._8_4_ = SUB84(dVar10,0);
      local_198._0_8_ = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][2];
      local_198._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      dVar10 = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][3];
      local_2e8.M[3][3] = dVar11;
      local_178._8_4_ = SUB84(dVar10,0);
      local_178._0_8_ = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][2];
      local_178._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      VectorMatrixMultiply(&local_e8,&local_2e8,(TMatrix<double> *)local_1e8);
      pFVar22 = FRDGBuilder::AllocObject<FDistanceFieldCulledObjectBufferParameters>(param_1);
      pDVar17->HeightFieldCulledObjectBufferParameters = pFVar22;
      pFVar23 = FRDGBuilder::AllocObject<FLightTileIntersectionParameters>(param_1);
      if (FVar29 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar29 = (ForElementType<UE::Math::TPlane<double>_>)
                 &(this->CascadeSettings).ShadowBoundsAccurate;
      }
      pDVar17->HeightFieldLightTileIntersectionParameters = pFVar23;
      CullDistanceFieldObjectsForLight
                (param_1,param_4,this->LightSceneInfo->Proxy,DFPT_HeightField,&local_e8,iVar31,
                 (TPlane<double> *)FVar29,(TVector<double> *)&local_4c0._s_0,
                 (TVector4<float> *)&local_4d8._s_0,(float)(this->ShadowBounds).W,true,true,
                 &local_438,pDVar17->HeightFieldCulledObjectBufferParameters,pFVar23);
    }
    pFVar24 = pDVar17->RayTracedShadowsTexture;
    local_658 = (FRDGTexture *)0x0;
    EVar15 = FSceneView::GetShaderPlatform((FSceneView *)param_4);
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar15].bContainsValidPlatformInfo == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid(Platform)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                            ,0x148,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      pFVar20 = (FScreenPassTexture *)(*pcVar9)();
      return pFVar20;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar15].bSupports4ComponentUAVReadWrite == 0) {
      local_658 = pDVar17->RayTracedShadowsTexture;
      pDVar17->RayTracedShadowsTexture = (FRDGTexture *)0x0;
LAB_14489b0b3:
      iVar31 = 2 - (uint)(GFullResolutionDFShadowing != 0);
      if (*(char *)(param_4->_padding_ + 200) == '\0') {
        pTVar25 = &FSceneTexturesConfig::GlobalInstance.Extent.field0_0x0;
      }
      else {
        pTVar25 = (TIntPoint<int>_u_0 *)(param_4->_padding_ + 0x1c8);
      }
      TVar5 = pTVar25->_s_0;
      local_398 = 0;
      local_3b8._8_8_ = FClearValueBinding::None._0_8_;
      local_3b8._16_8_ = FClearValueBinding::None.Value._4_8_;
      local_38c = 0x10001;
      local_394._4_4_ =
           (int)((longlong)((ulonglong)(uint)(TVar5.Y >> 0x1f) << 0x20 | (ulonglong)TVar5 >> 0x20) /
                (longlong)iVar31);
      local_394._0_4_ =
           (int)((longlong)
                 ((ulonglong)(uint)(TVar5.X >> 0x1f) << 0x20 | (ulonglong)TVar5 & 0xffffffff) /
                (longlong)iVar31);
      local_3a0 = FClearValueBinding::None.Value.Color[3];
      local_39c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_36c = 1;
      local_3b8._0_8_ = GFastVRamConfig.DistanceFieldShadows | (UAV|ShaderResource);
      local_388 = 0xf000101;
      local_384 = 0xff00;
      local_378 = (void *)0x0;
      local_370 = 0;
      pFVar26 = FRDGBuilder::CreateTexture
                          (param_1,(FRDGTextureDesc *)local_3b8,L"RayTracedShadows",None);
      pDVar17->RayTracedShadowsTexture = pFVar26;
      if (local_378 != (void *)0x0) {
        FMemory::Free(local_378);
      }
    }
    else if (pDVar17->RayTracedShadowsTexture == (FRDGTexture *)0x0) goto LAB_14489b0b3;
    RayTraceShadows(param_1,param_2,local_608,pDVar17->RayTracedShadowsTexture,param_4,param_5,
                    (TIntRect<int> *)&local_600._s_0,(FDistanceFieldSceneData *)(lVar6 + 0x3f28),
                    this,DFPT_HeightField,pFVar24 != (FRDGTexture *)0x0,local_658,&local_438,
                    pDVar17->HeightFieldCulledObjectBufferParameters,
                    pDVar17->HeightFieldLightTileIntersectionParameters);
    if (local_588 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_598);
    }
    if ((local_618 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_618 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_618 & 4) != 0) {
      FThreadStats::AddMessage(local_620,CycleScopeEnd);
    }
  }
  __return_storage_ptr__->Texture = pDVar17->RayTracedShadowsTexture;
  (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)local_600._s_0.Min.field0_0x0;
  ((TIntPoint<int>_u_0 *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)local_600._s_0.Max.field0_0x0;
  pFVar24 = __return_storage_ptr__->Texture;
  if (pFVar24 == (FRDGTexture *)0x0) {
    return __return_storage_ptr__;
  }
  iVar31 = (pFVar24->VisualizeTextureExtent).field0_0x0._s_0.X;
  iVar30 = local_600._8_4_;
  if (local_600._8_4_ < iVar31) {
    iVar30 = iVar31;
  }
  (pFVar24->VisualizeTextureExtent).field0_0x0._s_0.X = iVar30;
LAB_14489b29b:
  iVar31 = (pFVar24->VisualizeTextureExtent).field0_0x0._s_0.Y;
  iVar30 = *(int *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 0xc);
  if (iVar30 < iVar31) {
    iVar30 = iVar31;
  }
  (pFVar24->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar30;
  return __return_storage_ptr__;
}

// RenderRayTracedDistanceFieldProjection @ 14489b2f0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection
          (FProjectedShadowInfo *this,FRDGBuilder *param_1,FMinimalSceneTextures *param_2,
          FRDGTexture *param_3,FViewInfo *param_4,TIntRect<int> *param_5,bool param_6,bool param_7,
          FTiledShadowRendering *param_8)

{
  int *piVar1;
  FRHIUniformBufferLayout *pFVar2;
  float *pfVar3;
  ETileType EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  FGlobalShaderMap *pFVar9;
  TIntPoint<int>_u_0 TVar10;
  TIntPoint<int>_u_0 TVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  EShaderPlatform EVar18;
  ERDGPassFlags EVar19;
  int iVar20;
  undefined8 *puVar21;
  FShaderParametersMetadata *pFVar22;
  FSceneTextureShaderParameters *pFVar23;
  FShaderType *pFVar24;
  FName FVar25;
  FRDGEventName *pFVar26;
  wchar_t *pwVar27;
  FRDGPass *pFVar28;
  undefined8 *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_2c8;
  undefined8 *local_2b8;
  FRDGBuffer *local_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  FRenderTargetBinding local_2a0;
  FDepthStencilBinding local_288;
  FScreenPassTexture local_270;
  longlong local_258;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  longlong local_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_238;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_228;
  FRDGParameterStruct local_218;
  FRDGParameterStruct local_200;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  FString local_1d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1c8;
  initializer_list<FRDGResource_*> local_1b8;
  FString local_1a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_198;
  initializer_list<FRDGResource_*> local_188;
  FShader *local_178;
  FShaderMapBase *pFStack_170;
  FShader *local_158;
  FShaderMapBase *pFStack_150;
  TIntPoint<int>_u_0 local_148;
  TIntPoint<int>_u_0 local_140;
  FRHIUniformBufferLayout *local_130;
  FShader *local_110;
  FShaderMapBase *pFStack_108;
  TIntPoint<int>_u_0 local_f0;
  TIntPoint<int>_u_0 local_e8;
  FRHIUniformBufferLayout *local_d8;
  FRDGEventName local_c8;
  FRDGEventName local_b0;
  FSceneTextureShaderParameters local_98 [3];
  
  puVar29 = (undefined8 *)0x0;
  if (((*(int *)((longlong)&param_5->field0_0x0 + 0xc) -
       *(int *)((longlong)&param_5->field0_0x0 + 4)) *
       (*(int *)((longlong)&param_5->field0_0x0 + 8) - *(int *)&param_5->field0_0x0) < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScissorRect.Area() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldShadowing.cpp"
                          ,0x46b,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  EVar18 = FSceneView::GetShaderPlatform((FSceneView *)param_4);
  bVar16 = UseShadowIndirectDraw(EVar18);
  if ((!bVar16) || (bVar16 = true, param_8 == (FTiledShadowRendering *)0x0)) {
    bVar16 = false;
  }
  RenderRayTracedDistanceFieldProjection(this,&local_270,param_1,false,param_2,param_4,param_5);
  if ((local_270.Texture != (FRDGTexture *)0x0) &&
     ((local_270.ViewRect.field0_0x0._8_4_ != local_270.ViewRect.field0_0x0._0_4_ ||
      (local_270.ViewRect.field0_0x0._12_4_ != local_270.ViewRect.field0_0x0._4_4_)))) {
    uVar8 = *(undefined8 *)&((local_270.Texture)->Desc).field_0x24;
    puVar21 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1c0,0x10);
    if (puVar21 == (undefined8 *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar17) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else {
      puVar21[2] = 0;
      *puVar21 = &___7__TObject_VFDistanceFieldShadowingUpsample___FRDGAllocator__6B_;
      *(undefined1 *)(puVar21 + 3) = 1;
      puVar21[4] = 0;
      *(undefined1 *)(puVar21 + 5) = 1;
      puVar21[6] = 0;
      *(undefined1 *)(puVar21 + 7) = 1;
      puVar21[8] = 0;
      puVar21[9] = 0;
      puVar21[10] = 0;
      puVar21[0xb] = 0;
      puVar21[0x12] = 0;
      *(undefined1 *)(puVar21 + 0x13) = 1;
      puVar21[0x14] = 0;
      puVar21[0x16] = 0;
      *(undefined4 *)(puVar21 + 0x17) = 4;
      FRenderTargetBindingSlots::FRenderTargetBindingSlots
                ((FRenderTargetBindingSlots *)(puVar21 + 0x18));
      puVar29 = puVar21;
    }
    local_2b8 = puVar29;
    if ((((undefined8 **)param_1->_padding_ <= &local_2b8) &&
        (&local_2b8 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar20 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar20 == *piVar1) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    pFVar2 = (FRHIUniformBufferLayout *)(puVar29 + 2);
    *(int *)&param_1->_padding_ = iVar20 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar20 * 8) = local_2b8;
    if ((param_3 == (FRDGTexture *)0x0) || (bVar17 = true, (param_3->_padding_ & 0x400) == 0)) {
      bVar17 = false;
    }
    local_2a0.ResolveTexture = (FRDGTexture *)0x0;
    local_2a0.MipIndex = '\0';
    local_2a0.LoadAction = !bVar17 + ELoad;
    local_2a0.ArraySlice = -1;
    local_2a0.Texture = param_3;
    bVar17 = FRenderTargetBinding::Validate(&local_2a0);
    if ((!bVar17) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Validate()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x216,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    puVar29[0x18] = local_2a0.Texture;
    puVar29[0x19] = local_2a0.ResolveTexture;
    local_288.ResolveTexture = (FRDGTexture *)0x0;
    puVar29[0x1a] =
         CONCAT44(local_2a0._20_4_,
                  CONCAT22(local_2a0.ArraySlice,CONCAT11(local_2a0.MipIndex,local_2a0.LoadAction)));
    local_288.Texture = (param_2->Depth).Target;
    local_288.DepthLoadAction = ELoad;
    local_288.StencilLoadAction = ELoad;
    local_288.DepthStencilAccess.Value = DepthRead_StencilRead;
    bVar17 = FDepthStencilBinding::Validate(&local_288);
    if ((!bVar17) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Validate()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x289,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uStack_250 = 1;
    puVar29[0x30] = local_288.Texture;
    puVar29[0x31] = local_288.ResolveTexture;
    puVar29[0x32] =
         CONCAT44(local_288.DepthStencilAccess.Value,CONCAT22(local_288._18_2_,local_288._16_2_));
    local_258 = param_4->_padding_;
    pFVar22 = FViewUniformShaderParameters::GetStructMetadata();
    if (((pFVar22->BindingFlags & Shader) == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumHasAllFlags(StructMetadata->GetBindingFlags(), GetBindingFlags())",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0xf5,
                            L"Uniform buffer binding flags don\'t match those supported by the uniform buffer layout \'%s."
                           ), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    puVar29[6] = local_258;
    puVar29[7] = CONCAT71(uStack_24f,uStack_250);
    pFVar23 = FMinimalSceneTextures::GetSceneTextureShaderParameters
                        (param_2,local_98,(Type)param_4->_padding_);
    fVar30 = __real_3f800000;
    fVar32 = (float)(int)local_270.ViewRect.field0_0x0._12_4_ - __real_3f000000;
    fVar31 = (float)(int)local_270.ViewRect.field0_0x0._8_4_ - __real_3f000000;
    uVar13 = *(undefined8 *)&(pFVar23->SceneTextures).field_0x8;
    uVar14 = *(undefined8 *)&pFVar23->MobileSceneTextures;
    uVar15 = *(undefined8 *)&(pFVar23->MobileSceneTextures).field_0x8;
    pFVar2->_padding_ = *(longlong *)&pFVar23->SceneTextures;
    puVar29[3] = uVar13;
    puVar29[8] = local_270.Texture;
    puVar29[4] = uVar14;
    puVar29[5] = uVar15;
    puVar29[9] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                 ::StaticResource.StateRHI.Reference;
    iVar20 = *(int *)((longlong)&param_5->field0_0x0 + 8);
    iVar5 = *(int *)&param_5->field0_0x0;
    iVar6 = *(int *)((longlong)&param_5->field0_0x0 + 0xc);
    iVar7 = *(int *)((longlong)&param_5->field0_0x0 + 4);
    *(TIntPoint<int>_u_0 *)(puVar29 + 10) = (param_5->field0_0x0)._s_0.Min.field0_0x0;
    puVar29[0xb] = CONCAT44(iVar6 - iVar7,iVar20 - iVar5);
    local_2c8 = CONCAT44(fVar32 / (float)(int)((ulonglong)uVar8 >> 0x20),fVar31 / (float)(int)uVar8)
    ;
    puVar29[0xc] = local_2c8;
    pfVar3 = &(this->CascadeSettings).SplitNearFadeRegion;
    *(float *)(puVar29 + 0xf) = fVar30 / (float)(int)(2 - (uint)(GFullResolutionDFShadowing != 0));
    fVar31 = __real_54800000;
    if (this->bDirectionalLight == 0) {
      *(undefined4 *)((longlong)puVar29 + 0x7c) = 0;
    }
    else {
      *(float *)((longlong)puVar29 + 0x7c) = (this->CascadeSettings).SplitNear - *pfVar3;
      fVar31 = (this->CascadeSettings).SplitFar;
    }
    *(float *)(puVar29 + 0x10) = fVar31;
    fVar31 = __real_3727c5ac;
    if ((this->bDirectionalLight == 0) || ((this->CascadeSettings).FadePlaneLength <= 0.0)) {
      *(undefined4 *)(puVar29 + 0xd) = 0;
      fVar32 = 0.0;
    }
    else {
      *(float *)(puVar29 + 0xd) = (this->CascadeSettings).FadePlaneOffset;
      fVar32 = (this->CascadeSettings).FadePlaneLength;
      if (fVar32 <= fVar31) {
        fVar32 = fVar31;
      }
      fVar32 = fVar30 / fVar32;
    }
    *(float *)((longlong)puVar29 + 0x6c) = fVar32;
    if ((this->bDirectionalLight == 0) || (*pfVar3 <= 0.0)) {
      *(undefined4 *)(puVar29 + 0xe) = 0xbf800000;
    }
    else {
      *(float *)(puVar29 + 0xe) = (this->CascadeSettings).SplitNear - *pfVar3;
      fVar32 = *pfVar3;
      if (*pfVar3 <= fVar31) {
        fVar32 = fVar31;
      }
      fVar30 = fVar30 / fVar32;
    }
    *(float *)((longlong)puVar29 + 0x74) = fVar30;
    if (bVar16) {
      uStack_2a8 = 4;
      uStack_240 = 1;
      local_2b0 = param_8->DrawIndirectParametersBuffer;
      puVar29[0x16] = local_2b0;
      puVar29[0x17] = CONCAT44(uStack_2a4,4);
      local_248 = param_4->_padding_;
      pFVar22 = FViewUniformShaderParameters::GetStructMetadata();
      if (((pFVar22->BindingFlags & Shader) == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("EnumHasAllFlags(StructMetadata->GetBindingFlags(), GetBindingFlags())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0xf5,
                              L"Uniform buffer binding flags don\'t match those supported by the uniform buffer layout \'%s."
                             ), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      puVar29[0x12] = local_248;
      puVar29[0x13] = CONCAT71(uStack_23f,uStack_240);
      puVar29[0x14] = param_8->TileListDataBufferSRV;
    }
    bVar17 = GFullResolutionDFShadowing == 0;
    pFVar9 = param_4->ShaderMap;
    pFVar24 = (FShaderType *)FDistanceFieldShadowingUpsamplePS::GetStaticType();
    FGlobalShaderMap::GetShader(pFVar9,&local_238,pFVar24,(uint)bVar17);
    if (local_238.ShaderContent == (FShader *)0x0) {
      FVar25 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1e8);
      ::FName::ToString((FName *)FVar25,&local_1d8);
      FDistanceFieldShadowingUpsamplePS::GetStaticType();
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (bVar17) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    FDistanceFieldShadowingUpsamplePS::GetStaticType();
    local_178 = local_238.ShaderContent;
    pFStack_170 = local_238.ShaderMap;
    pFVar22 = FDistanceFieldShadowingUpsamplePS::FParameters::FTypeInfo::GetStructMetadata();
    local_1c8.ShaderContent = local_238.ShaderContent;
    local_1c8.ShaderMap = local_238.ShaderMap;
    ValidateShaderParameters(&local_1c8,pFVar22,pFVar2);
    local_1b8._First = (FRDGResource **)0x0;
    local_1b8._Last = (FRDGResource **)0x0;
    ClearUnusedGraphResourcesImpl(&(local_238.ShaderContent)->Bindings,pFVar22,pFVar2,&local_1b8);
    if (bVar16) {
      if ((param_8->TileSize != 8) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TiledShadowRendering->TileSize == FShadowTileVS::GetTileSize()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldShadowing.cpp"
                              ,0x4ab,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      EVar4 = param_8->TileType;
      pFVar9 = param_4->ShaderMap;
      pFVar24 = (FShaderType *)FShadowTileVS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar9,&local_228,pFVar24,(uint)(EVar4 != Tile16bits));
      if (local_228.ShaderContent == (FShader *)0x0) {
        FVar25 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1e0);
        ::FName::ToString((FName *)FVar25,&local_1a8);
        FShadowTileVS::GetStaticType();
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (bVar16) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      FShadowTileVS::GetStaticType();
      pFVar22 = FShadowTileVS::FParameters::FTypeInfo::GetStructMetadata();
      local_198.ShaderContent = local_228.ShaderContent;
      local_198.ShaderMap = local_228.ShaderMap;
      ValidateShaderParameters(&local_198,pFVar22,puVar29 + 0x12);
      local_188._First = (FRDGResource **)0x0;
      local_188._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl
                (&(local_228.ShaderContent)->Bindings,pFVar22,puVar29 + 0x12,&local_188);
      TVar10 = (param_5->field0_0x0)._s_0.Min.field0_0x0;
      TVar11 = (param_5->field0_0x0)._s_0.Max.field0_0x0;
      local_110 = local_228.ShaderContent;
      pFStack_108 = local_228.ShaderMap;
      local_f0 = TVar10;
      local_e8 = TVar11;
      local_d8 = pFVar2;
      pFVar26 = FRDGEventName::FRDGEventName(&local_c8,1,L"TiledUpsample");
      local_2b0 = (FRDGBuffer *)pFVar26;
      pFVar22 = FDistanceFieldShadowingUpsample::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar2,pFVar22,pFVar26,Raster);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
      EVar19 = FRDGBuilder::OverridePassFlags(param_1,pwVar27,Raster);
      pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1e0,8);
      local_218.Contents = (uchar *)pFVar2;
      if (((pFVar22->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_218.Layout.Reference = (pFVar22->Layout).Reference;
      if (local_218.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_218.Layout.Reference);
      }
      local_218.Metadata = pFVar22;
      FRDGPass::FRDGPass(pFVar28,(FRDGEventName *)local_2b0,&local_218,EVar19,Async);
      pFVar28->_padding_ =
           (longlong)
           &TRDGLambdaPass<FDistanceFieldShadowingUpsample,`FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection'::`28'::<lambda_1>_>
            ::_vftable_;
      *(FShader **)&pFVar28[1].FullPathIfDebug.Data.ArrayNum = local_110;
      pFVar28[1].Name.EventFormat = (wchar_t *)pFStack_108;
      pFVar28[1]._padding_ = (longlong)this;
      pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
      pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_178;
      *(FShaderMapBase **)&pFVar28[1].Name.FormattedEventName.Data.ArrayNum = pFStack_170;
      pFVar28[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)TVar11;
      pFVar28[1].ParameterStruct.Contents = (uchar *)TVar10;
      *(bool *)&pFVar28[1].ParameterStruct.Metadata = param_6;
      *(FRHIUniformBufferLayout **)&pFVar28[1].Flags = local_d8;
      *(bool *)&pFVar28[1].Workload = param_7;
      *(FRHIUniformBufferLayout **)&pFVar28[1].CrossPipelineProducer = pFVar2;
      FRDGBuilder::ClobberPassOutputs(param_1,pFVar28);
      iVar20 = (param_1->Passes).Array.ArrayNum;
      piVar1 = &(param_1->Passes).Array.ArrayMax;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
      }
      (param_1->Passes).Array.ArrayNum = iVar20 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar20] = pFVar28;
      (pFVar28->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,pFVar28);
    }
    else {
      TVar10 = (param_5->field0_0x0)._s_0.Min.field0_0x0;
      TVar11 = (param_5->field0_0x0)._s_0.Max.field0_0x0;
      local_158 = local_238.ShaderContent;
      pFStack_150 = local_238.ShaderMap;
      local_148 = TVar10;
      local_140 = TVar11;
      local_130 = pFVar2;
      pFVar26 = FRDGEventName::FRDGEventName(&local_b0,1,L"Upsample");
      local_2b0 = (FRDGBuffer *)pFVar26;
      pFVar22 = FDistanceFieldShadowingUpsample::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar2,pFVar22,pFVar26,Raster);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar27 = FRDGEventName::GetTCHAR(pFVar26);
      EVar19 = FRDGBuilder::OverridePassFlags(param_1,pwVar27,Raster);
      pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d0,8);
      local_200.Contents = (uchar *)pFVar2;
      if (((pFVar22->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_200.Layout.Reference = (pFVar22->Layout).Reference;
      if (local_200.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_200.Layout.Reference);
      }
      local_200.Metadata = pFVar22;
      FRDGPass::FRDGPass(pFVar28,(FRDGEventName *)local_2b0,&local_200,EVar19,Async);
      pFVar28->_padding_ =
           (longlong)
           &TRDGLambdaPass<FDistanceFieldShadowingUpsample,`FProjectedShadowInfo::RenderRayTracedDistanceFieldProjection'::`37'::<lambda_2>_>
            ::_vftable_;
      *(FShader **)&pFVar28[1].FullPathIfDebug.Data.ArrayNum = local_158;
      pFVar28[1].Name.EventFormat = (wchar_t *)pFStack_150;
      pFVar28[1]._padding_ = (longlong)this;
      pFVar28[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
      *(TIntPoint<int>_u_0 *)&pFVar28[1].Name.FormattedEventName.Data.ArrayNum = TVar11;
      pFVar28[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)TVar10;
      *(bool *)&pFVar28[1].ParameterStruct.Contents = param_6;
      pFVar28[1].ParameterStruct.Layout.Reference = local_130;
      *(bool *)&pFVar28[1].ParameterStruct.Metadata = param_7;
      *(FRHIUniformBufferLayout **)&pFVar28[1].Flags = pFVar2;
      FRDGBuilder::ClobberPassOutputs(param_1,pFVar28);
      iVar20 = (param_1->Passes).Array.ArrayNum;
      piVar1 = &(param_1->Passes).Array.ArrayMax;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
      }
      (param_1->Passes).Array.ArrayNum = iVar20 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar20] = pFVar28;
      (pFVar28->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,pFVar28);
      local_c8.FormattedEventName.Data.AllocatorInstance.Data =
           local_b0.FormattedEventName.Data.AllocatorInstance.Data;
    }
    if (local_c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 145578b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
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
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
`FProjectedShadowInfo::RenderOnePassPointLightProjection'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  longlong lVar1;
  FRDGResource *this_00;
  FViewInfo *pFVar2;
  FProjectedShadowInfo *pFVar3;
  FGlobalShaderMap *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  uint uVar10;
  FShaderType *pFVar11;
  FName FVar12;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar13;
  FRHIVertexShader *pFVar14;
  FRHIBatchedShaderParameters *pFVar15;
  FRHIPixelShader *pFVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStackY_5f8 [32];
  undefined1 local_5b8 [8];
  FRHIUniformBuffer *local_5b0;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_5a8;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_598;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_588;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_578;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_568;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_558;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_548;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_538;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_528;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_518;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_508;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_4f8;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_4e8;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_4d8;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_4c8;
  TShaderRefBase<TOnePassPointShadowProjectionPS<3,1,0>,FShaderMapPointerTable> local_4b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_4a8;
  TShaderRefBase<TOnePassPointShadowProjectionPS<2,1,0>,FShaderMapPointerTable> local_498;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_488;
  TShaderRefBase<TOnePassPointShadowProjectionPS<1,1,0>,FShaderMapPointerTable> local_478;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_468;
  TShaderRefBase<TOnePassPointShadowProjectionPS<5,0,0>,FShaderMapPointerTable> local_458;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_448;
  TShaderRefBase<TOnePassPointShadowProjectionPS<4,0,0>,FShaderMapPointerTable> local_438;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_428;
  TShaderRefBase<TOnePassPointShadowProjectionPS<3,0,0>,FShaderMapPointerTable> local_418;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_408;
  TShaderRefBase<TOnePassPointShadowProjectionPS<2,0,0>,FShaderMapPointerTable> local_3f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3e8;
  TShaderRefBase<TOnePassPointShadowProjectionPS<1,0,0>,FShaderMapPointerTable> local_3d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3c8;
  TShaderRefBase<TOnePassPointShadowProjectionPS<5,0,1>,FShaderMapPointerTable> local_3b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_3a8;
  TShaderRefBase<TOnePassPointShadowProjectionPS<4,0,1>,FShaderMapPointerTable> local_398;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_388;
  TShaderRefBase<TOnePassPointShadowProjectionPS<3,0,1>,FShaderMapPointerTable> local_378;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_368;
  TShaderRefBase<TOnePassPointShadowProjectionPS<2,0,1>,FShaderMapPointerTable> local_358;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_348;
  TShaderRefBase<TOnePassPointShadowProjectionPS<1,0,1>,FShaderMapPointerTable> local_338;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_328;
  TShaderRefBase<TOnePassPointShadowProjectionPS<5,1,0>,FShaderMapPointerTable> local_318;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_308;
  TShaderRefBase<TOnePassPointShadowProjectionPS<4,1,0>,FShaderMapPointerTable> local_2f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2e8;
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [8];
  undefined1 local_2c0 [8];
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  double local_170;
  double dStack_168;
  double local_160;
  FGraphicsPipelineStateInitializer local_148;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  lVar1 = *(longlong *)((longlong)this + 8);
  FRHICommandList::SetViewport
            (param_2,(float)*(int *)(lVar1 + 0x1c30),(float)*(int *)(lVar1 + 0x1c34),0.0,
             (float)*(int *)(lVar1 + 0x1c38),(float)*(int *)(lVar1 + 0x1c3c),__real_3f800000);
  (**(code **)(**(longlong **)((longlong)this + 0x38) + 0xe8))
            (*(longlong **)((longlong)this + 0x38),param_2);
  local_148.RenderTargetsEnabled = 0;
  local_148.RenderTargetFormats.Elements[0] = '\0';
  local_148.RenderTargetFormats.Elements[1] = '\0';
  local_148.RenderTargetFormats.Elements[2] = '\0';
  local_148.RenderTargetFormats.Elements[3] = '\0';
  local_148.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_148.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_148.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_148.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_148.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_148.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_148.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_148.BlendState = (FRHIBlendState *)0x0;
  local_148.RasterizerState = (FRHIRasterizerState *)0x0;
  local_148.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_148.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_148.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_148.RenderTargetFlags.Elements[0] = None;
  local_148.RenderTargetFlags.Elements[1] = None;
  local_148.RenderTargetFlags.Elements[2] = None;
  local_148.RenderTargetFlags.Elements[3] = None;
  local_148.RenderTargetFlags.Elements[4] = None;
  local_148.RenderTargetFlags.Elements[5] = None;
  local_148.RenderTargetFlags.Elements[6] = None;
  local_148.RenderTargetFlags.Elements[7] = None;
  local_148.RenderTargetFormats.Elements[4] = '\0';
  local_148.RenderTargetFormats.Elements[5] = '\0';
  local_148.RenderTargetFormats.Elements[6] = '\0';
  local_148.RenderTargetFormats.Elements[7] = '\0';
  local_148.DepthStencilTargetFormat = PF_Unknown;
  local_148.DepthStencilTargetFlag = None;
  local_148.DepthTargetLoadAction = ENoAction;
  local_148.DepthTargetStoreAction = ENoAction;
  local_148.StencilTargetLoadAction = ENoAction;
  local_148.StencilTargetStoreAction = ENoAction;
  local_148.DepthStencilAccess.Value = DepthNop;
  local_148.NumSamples = 0;
  local_148.SubpassHint = None;
  local_148.SubpassIndex = '\0';
  local_148.ConservativeRasterization = Disabled;
  local_148.bDepthBounds = false;
  local_148.MultiViewCount = '\0';
  local_148.bHasFragmentDensityAttachment = false;
  local_148.bAllowVariableRateShading = true;
  local_148.ShadingRate = VRSSR_1x1;
  local_148.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_148.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_148);
  local_148.BlendState =
       FProjectedShadowInfo::GetBlendStateForProjection
                 (*(FProjectedShadowInfo **)this,*(bool *)((longlong)this + 0x30),false);
  local_148.PrimitiveType = PT_TriangleList;
  if (*(char *)((longlong)this + 0x31) == '\0') {
    local_148.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_148.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    if (*(char *)(*(longlong *)((longlong)this + 8) + 0x1190) != '\0') {
      local_148.RasterizerState =
           TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI;
    }
  }
  else {
    local_148.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    local_148.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI;
    if (*(char *)(*(longlong *)((longlong)this + 8) + 0x1190) != '\0') {
      local_148.RasterizerState =
           TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI.Reference;
    }
  }
  uVar10 = GetShadowQuality();
  pTVar8 = CVarHairStrandsCullPerObjectShadowCaster.Ref;
  if (*(char *)((longlong)this + 0x40) == '\0') {
    if (*(char *)((longlong)this + 0x32) == '\0') {
      if (uVar10 == 1) {
        pFVar2 = *(FViewInfo **)((longlong)this + 8);
        pFVar3 = *(FProjectedShadowInfo **)this;
        iVar18 = *(int *)((longlong)this + 0x34);
        FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_598,0);
        pFVar4 = pFVar2->ShaderMap;
        pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<1,0,0>::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar4,&local_3e8,pFVar11,0);
        if ((TOnePassPointShadowProjectionPS<1,0,0> *)local_3e8.ShaderContent ==
            (TOnePassPointShadowProjectionPS<1,0,0> *)0x0) {
          FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_270);
          ::FName::ToString((FName *)FVar12,&local_180);
          TOnePassPointShadowProjectionPS<1,0,0>::GetStaticType();
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        TOnePassPointShadowProjectionPS<1,0,0>::GetStaticType();
        local_3d8.ShaderContent = (TOnePassPointShadowProjectionPS<1,0,0> *)local_3e8.ShaderContent;
        local_3d8.ShaderMap = local_3e8.ShaderMap;
        pTVar13 = GetVertexDeclarationFVector4();
        local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
        local_148.BoundShaderState.VertexShaderRHI =
             TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                       (&local_598,true);
        local_148.BoundShaderState.PixelShaderRHI =
             TShaderRefBase<TOnePassPointShadowProjectionPS<1,0,0>,FShaderMapPointerTable>::
             GetPixelShader(&local_3d8,true);
        SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
        pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                  GetVertexShader(&local_598,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        FShadowVolumeBoundProjectionVS::SetParameters
                  (local_598.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
        FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
        pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<1,0,0>,FShaderMapPointerTable>::
                  GetPixelShader(&local_3d8,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        TOnePassPointShadowProjectionPS<1,0,0>::SetParameters
                  ((TOnePassPointShadowProjectionPS<1,0,0> *)local_3e8.ShaderContent,pFVar15,iVar18,
                   pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
      }
      else if (uVar10 == 2) {
        pFVar2 = *(FViewInfo **)((longlong)this + 8);
        pFVar3 = *(FProjectedShadowInfo **)this;
        iVar18 = *(int *)((longlong)this + 0x34);
        FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_4c8,0);
        pFVar4 = pFVar2->ShaderMap;
        pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<2,0,0>::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar4,&local_408,pFVar11,0);
        if ((TOnePassPointShadowProjectionPS<2,0,0> *)local_408.ShaderContent ==
            (TOnePassPointShadowProjectionPS<2,0,0> *)0x0) {
          FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_278);
          ::FName::ToString((FName *)FVar12,&local_190);
          TOnePassPointShadowProjectionPS<2,0,0>::GetStaticType();
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        TOnePassPointShadowProjectionPS<2,0,0>::GetStaticType();
        local_3f8.ShaderContent = (TOnePassPointShadowProjectionPS<2,0,0> *)local_408.ShaderContent;
        local_3f8.ShaderMap = local_408.ShaderMap;
        pTVar13 = GetVertexDeclarationFVector4();
        local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
        local_148.BoundShaderState.VertexShaderRHI =
             TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                       (&local_4c8,true);
        local_148.BoundShaderState.PixelShaderRHI =
             TShaderRefBase<TOnePassPointShadowProjectionPS<2,0,0>,FShaderMapPointerTable>::
             GetPixelShader(&local_3f8,true);
        SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
        pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                  GetVertexShader(&local_4c8,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        FShadowVolumeBoundProjectionVS::SetParameters
                  (local_4c8.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
        FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
        pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<2,0,0>,FShaderMapPointerTable>::
                  GetPixelShader(&local_3f8,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        TOnePassPointShadowProjectionPS<2,0,0>::SetParameters
                  ((TOnePassPointShadowProjectionPS<2,0,0> *)local_408.ShaderContent,pFVar15,iVar18,
                   pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
      }
      else if (uVar10 == 3) {
        pFVar2 = *(FViewInfo **)((longlong)this + 8);
        pFVar3 = *(FProjectedShadowInfo **)this;
        iVar18 = *(int *)((longlong)this + 0x34);
        FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_4d8,0);
        pFVar4 = pFVar2->ShaderMap;
        pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<3,0,0>::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar4,&local_428,pFVar11,0);
        if ((TOnePassPointShadowProjectionPS<3,0,0> *)local_428.ShaderContent ==
            (TOnePassPointShadowProjectionPS<3,0,0> *)0x0) {
          FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_280);
          ::FName::ToString((FName *)FVar12,&local_1a0);
          TOnePassPointShadowProjectionPS<3,0,0>::GetStaticType();
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        TOnePassPointShadowProjectionPS<3,0,0>::GetStaticType();
        local_418.ShaderContent = (TOnePassPointShadowProjectionPS<3,0,0> *)local_428.ShaderContent;
        local_418.ShaderMap = local_428.ShaderMap;
        pTVar13 = GetVertexDeclarationFVector4();
        local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
        local_148.BoundShaderState.VertexShaderRHI =
             TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                       (&local_4d8,true);
        local_148.BoundShaderState.PixelShaderRHI =
             TShaderRefBase<TOnePassPointShadowProjectionPS<3,0,0>,FShaderMapPointerTable>::
             GetPixelShader(&local_418,true);
        SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
        pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                  GetVertexShader(&local_4d8,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        FShadowVolumeBoundProjectionVS::SetParameters
                  (local_4d8.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
        FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
        pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<3,0,0>,FShaderMapPointerTable>::
                  GetPixelShader(&local_418,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        TOnePassPointShadowProjectionPS<3,0,0>::SetParameters
                  ((TOnePassPointShadowProjectionPS<3,0,0> *)local_428.ShaderContent,pFVar15,iVar18,
                   pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
      }
      else if (uVar10 == 4) {
        pFVar2 = *(FViewInfo **)((longlong)this + 8);
        pFVar3 = *(FProjectedShadowInfo **)this;
        iVar18 = *(int *)((longlong)this + 0x34);
        FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_4e8,0);
        pFVar4 = pFVar2->ShaderMap;
        pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<4,0,0>::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar4,&local_448,pFVar11,0);
        if ((TOnePassPointShadowProjectionPS<4,0,0> *)local_448.ShaderContent ==
            (TOnePassPointShadowProjectionPS<4,0,0> *)0x0) {
          FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_288);
          ::FName::ToString((FName *)FVar12,&local_1b0);
          TOnePassPointShadowProjectionPS<4,0,0>::GetStaticType();
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        TOnePassPointShadowProjectionPS<4,0,0>::GetStaticType();
        local_438.ShaderContent = (TOnePassPointShadowProjectionPS<4,0,0> *)local_448.ShaderContent;
        local_438.ShaderMap = local_448.ShaderMap;
        pTVar13 = GetVertexDeclarationFVector4();
        local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
        local_148.BoundShaderState.VertexShaderRHI =
             TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                       (&local_4e8,true);
        local_148.BoundShaderState.PixelShaderRHI =
             TShaderRefBase<TOnePassPointShadowProjectionPS<4,0,0>,FShaderMapPointerTable>::
             GetPixelShader(&local_438,true);
        SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
        pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                  GetVertexShader(&local_4e8,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        FShadowVolumeBoundProjectionVS::SetParameters
                  (local_4e8.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
        FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
        pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<4,0,0>,FShaderMapPointerTable>::
                  GetPixelShader(&local_438,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        TOnePassPointShadowProjectionPS<4,0,0>::SetParameters
                  ((TOnePassPointShadowProjectionPS<4,0,0> *)local_448.ShaderContent,pFVar15,iVar18,
                   pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
      }
      else {
        if (uVar10 != 5) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                             ,0x6a1,L"");
          if (bVar9) goto code_r0x00014557a010;
          goto LAB_14557a898;
        }
        pFVar2 = *(FViewInfo **)((longlong)this + 8);
        pFVar3 = *(FProjectedShadowInfo **)this;
        iVar18 = *(int *)((longlong)this + 0x34);
        FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_4f8,0);
        pFVar4 = pFVar2->ShaderMap;
        pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<5,0,0>::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar4,&local_468,pFVar11,0);
        if ((TOnePassPointShadowProjectionPS<5,0,0> *)local_468.ShaderContent ==
            (TOnePassPointShadowProjectionPS<5,0,0> *)0x0) {
          FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_290);
          ::FName::ToString((FName *)FVar12,&local_1c0);
          TOnePassPointShadowProjectionPS<5,0,0>::GetStaticType();
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Shader.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                             ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        TOnePassPointShadowProjectionPS<5,0,0>::GetStaticType();
        local_458.ShaderContent = (TOnePassPointShadowProjectionPS<5,0,0> *)local_468.ShaderContent;
        local_458.ShaderMap = local_468.ShaderMap;
        pTVar13 = GetVertexDeclarationFVector4();
        local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
        local_148.BoundShaderState.VertexShaderRHI =
             TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                       (&local_4f8,true);
        local_148.BoundShaderState.PixelShaderRHI =
             TShaderRefBase<TOnePassPointShadowProjectionPS<5,0,0>,FShaderMapPointerTable>::
             GetPixelShader(&local_458,true);
        SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
        pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                  GetVertexShader(&local_4f8,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        FShadowVolumeBoundProjectionVS::SetParameters
                  (local_4f8.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
        FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
        pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<5,0,0>,FShaderMapPointerTable>::
                  GetPixelShader(&local_458,true);
        pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
        TOnePassPointShadowProjectionPS<5,0,0>::SetParameters
                  ((TOnePassPointShadowProjectionPS<5,0,0> *)local_468.ShaderContent,pFVar15,iVar18,
                   pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
      }
    }
    else if (uVar10 == 1) {
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_508,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<1,1,0>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_488,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<1,1,0> *)local_488.ShaderContent ==
          (TOnePassPointShadowProjectionPS<1,1,0> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_298);
        ::FName::ToString((FName *)FVar12,&local_1d0);
        TOnePassPointShadowProjectionPS<1,1,0>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<1,1,0>::GetStaticType();
      local_478.ShaderContent = (TOnePassPointShadowProjectionPS<1,1,0> *)local_488.ShaderContent;
      local_478.ShaderMap = local_488.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_508,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<1,1,0>,FShaderMapPointerTable>::
           GetPixelShader(&local_478,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_508,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_508.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<1,1,0>,FShaderMapPointerTable>::
                GetPixelShader(&local_478,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<1,1,0>::SetParameters
                ((TOnePassPointShadowProjectionPS<1,1,0> *)local_488.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
    }
    else if (uVar10 == 2) {
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_518,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<2,1,0>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_4a8,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<2,1,0> *)local_4a8.ShaderContent ==
          (TOnePassPointShadowProjectionPS<2,1,0> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2a0);
        ::FName::ToString((FName *)FVar12,&local_1e0);
        TOnePassPointShadowProjectionPS<2,1,0>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<2,1,0>::GetStaticType();
      local_498.ShaderContent = (TOnePassPointShadowProjectionPS<2,1,0> *)local_4a8.ShaderContent;
      local_498.ShaderMap = local_4a8.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_518,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<2,1,0>,FShaderMapPointerTable>::
           GetPixelShader(&local_498,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_518,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_518.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<2,1,0>,FShaderMapPointerTable>::
                GetPixelShader(&local_498,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<2,1,0>::SetParameters
                ((TOnePassPointShadowProjectionPS<2,1,0> *)local_4a8.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
    }
    else if (uVar10 == 3) {
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_528,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<3,1,0>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_2e8,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<3,1,0> *)local_2e8.ShaderContent ==
          (TOnePassPointShadowProjectionPS<3,1,0> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_268);
        ::FName::ToString((FName *)FVar12,&local_1f0);
        TOnePassPointShadowProjectionPS<3,1,0>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<3,1,0>::GetStaticType();
      local_4b8.ShaderContent = (TOnePassPointShadowProjectionPS<3,1,0> *)local_2e8.ShaderContent;
      local_4b8.ShaderMap = local_2e8.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_528,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<3,1,0>,FShaderMapPointerTable>::
           GetPixelShader(&local_4b8,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_528,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_528.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<3,1,0>,FShaderMapPointerTable>::
                GetPixelShader(&local_4b8,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<3,1,0>::SetParameters
                ((TOnePassPointShadowProjectionPS<3,1,0> *)local_2e8.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
    }
    else if (uVar10 == 4) {
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_548,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<4,1,0>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_308,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<4,1,0> *)local_308.ShaderContent ==
          (TOnePassPointShadowProjectionPS<4,1,0> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2a8);
        ::FName::ToString((FName *)FVar12,&local_200);
        TOnePassPointShadowProjectionPS<4,1,0>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<4,1,0>::GetStaticType();
      local_2f8.ShaderContent = (TOnePassPointShadowProjectionPS<4,1,0> *)local_308.ShaderContent;
      local_2f8.ShaderMap = local_308.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_548,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<4,1,0>,FShaderMapPointerTable>::
           GetPixelShader(&local_2f8,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_548,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_548.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<4,1,0>,FShaderMapPointerTable>::
                GetPixelShader(&local_2f8,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<4,1,0>::SetParameters
                ((TOnePassPointShadowProjectionPS<4,1,0> *)local_308.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
    }
    else {
      if (uVar10 != 5) {
        iVar18 = 0x694;
        goto LAB_145579746;
      }
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_558,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<5,1,0>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_328,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<5,1,0> *)local_328.ShaderContent ==
          (TOnePassPointShadowProjectionPS<5,1,0> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2b0);
        ::FName::ToString((FName *)FVar12,&local_210);
        TOnePassPointShadowProjectionPS<5,1,0>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<5,1,0>::GetStaticType();
      local_318.ShaderContent = (TOnePassPointShadowProjectionPS<5,1,0> *)local_328.ShaderContent;
      local_318.ShaderMap = local_328.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_558,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<5,1,0>,FShaderMapPointerTable>::
           GetPixelShader(&local_318,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_558,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_558.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<5,1,0>,FShaderMapPointerTable>::
                GetPixelShader(&local_318,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<5,1,0>::SetParameters
                ((TOnePassPointShadowProjectionPS<5,1,0> *)local_328.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,(FRHIUniformBuffer *)0x0);
    }
  }
  else {
    lVar1 = *(longlong *)this;
    if ((*(uint *)(lVar1 + 0x990) & 0x800) != 0) {
      if (*(int *)(lVar1 + 0xbe0) < 1) {
        return;
      }
      if ((*(byte *)(*(longlong *)(**(longlong **)(lVar1 + 0xbd8) + 8) + 0x7f) & 4) == 0) {
        return;
      }
    }
    bVar9 = IsInParallelRenderingThread();
    if ((!bVar9) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    dVar7 = __real_3f1a36e2e0000000;
    if (0 < pTVar8->ShadowedValue[1]) {
      lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x2340);
      iVar18 = *(int *)(lVar1 + 0x178);
      lVar17 = *(longlong *)(lVar1 + 0x170);
      lVar19 = (longlong)iVar18 * 0x78 + lVar17;
      while( true ) {
        if (*(int *)(lVar1 + 0x178) != iVar18) {
          local_5b8[0] = 0;
          `TCheckedPointerIterator<FHairStrandsMacroGroupData,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_5b8);
        }
        if (lVar17 == lVar19) {
          return;
        }
        local_170 = *(double *)(lVar17 + 0x20);
        dStack_168 = *(double *)(lVar17 + 0x28);
        local_160 = *(double *)(lVar17 + 0x30);
        dVar20 = local_170 - *(double *)((longlong)this + 0x10);
        dVar22 = dStack_168 - *(double *)((longlong)this + 0x18);
        dVar6 = *(double *)(lVar17 + 0x50) + *(double *)((longlong)this + 0x28) + dVar7;
        dVar21 = local_160 - *(double *)((longlong)this + 0x20);
        if (dVar6 <= 0.0) {
          dVar6 = 0.0;
        }
        if (dVar22 * dVar22 + dVar20 * dVar20 + dVar21 * dVar21 <= dVar6 * dVar6) break;
        lVar17 = lVar17 + 0x78;
      }
    }
    this_00 = *(FRDGResource **)(*(longlong *)((longlong)this + 0x48) + 0x20);
    FRDGResource::ValidateRHIAccess(this_00);
    local_5b0 = (FRHIUniformBuffer *)this_00->ResourceRHI;
    if (uVar10 == 1) {
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_568,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<1,0,1>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_348,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<1,0,1> *)local_348.ShaderContent ==
          (TOnePassPointShadowProjectionPS<1,0,1> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2b8);
        ::FName::ToString((FName *)FVar12,&local_220);
        TOnePassPointShadowProjectionPS<1,0,1>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<1,0,1>::GetStaticType();
      local_338.ShaderContent = (TOnePassPointShadowProjectionPS<1,0,1> *)local_348.ShaderContent;
      local_338.ShaderMap = local_348.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_568,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<1,0,1>,FShaderMapPointerTable>::
           GetPixelShader(&local_338,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_568,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_568.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<1,0,1>,FShaderMapPointerTable>::
                GetPixelShader(&local_338,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<1,0,1>::SetParameters
                ((TOnePassPointShadowProjectionPS<1,0,1> *)local_348.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,local_5b0);
    }
    else if (uVar10 == 2) {
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_578,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<2,0,1>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_368,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<2,0,1> *)local_368.ShaderContent ==
          (TOnePassPointShadowProjectionPS<2,0,1> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2c0);
        ::FName::ToString((FName *)FVar12,&local_230);
        TOnePassPointShadowProjectionPS<2,0,1>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<2,0,1>::GetStaticType();
      local_358.ShaderContent = (TOnePassPointShadowProjectionPS<2,0,1> *)local_368.ShaderContent;
      local_358.ShaderMap = local_368.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_578,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<2,0,1>,FShaderMapPointerTable>::
           GetPixelShader(&local_358,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_578,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_578.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<2,0,1>,FShaderMapPointerTable>::
                GetPixelShader(&local_358,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<2,0,1>::SetParameters
                ((TOnePassPointShadowProjectionPS<2,0,1> *)local_368.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,local_5b0);
    }
    else if (uVar10 == 3) {
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_588,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<3,0,1>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_388,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<3,0,1> *)local_388.ShaderContent ==
          (TOnePassPointShadowProjectionPS<3,0,1> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2c8);
        ::FName::ToString((FName *)FVar12,&local_240);
        TOnePassPointShadowProjectionPS<3,0,1>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<3,0,1>::GetStaticType();
      local_378.ShaderContent = (TOnePassPointShadowProjectionPS<3,0,1> *)local_388.ShaderContent;
      local_378.ShaderMap = local_388.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_588,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<3,0,1>,FShaderMapPointerTable>::
           GetPixelShader(&local_378,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_588,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_588.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<3,0,1>,FShaderMapPointerTable>::
                GetPixelShader(&local_378,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<3,0,1>::SetParameters
                ((TOnePassPointShadowProjectionPS<3,0,1> *)local_388.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,local_5b0);
    }
    else if (uVar10 == 4) {
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_538,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<4,0,1>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_3a8,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<4,0,1> *)local_3a8.ShaderContent ==
          (TOnePassPointShadowProjectionPS<4,0,1> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2d0);
        ::FName::ToString((FName *)FVar12,&local_250);
        TOnePassPointShadowProjectionPS<4,0,1>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<4,0,1>::GetStaticType();
      local_398.ShaderContent = (TOnePassPointShadowProjectionPS<4,0,1> *)local_3a8.ShaderContent;
      local_398.ShaderMap = local_3a8.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_538,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<4,0,1>,FShaderMapPointerTable>::
           GetPixelShader(&local_398,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_538,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_538.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<4,0,1>,FShaderMapPointerTable>::
                GetPixelShader(&local_398,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<4,0,1>::SetParameters
                ((TOnePassPointShadowProjectionPS<4,0,1> *)local_3a8.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,local_5b0);
    }
    else {
      if (uVar10 != 5) {
        iVar18 = 0x687;
LAB_145579746:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                           ,iVar18,L"");
        if (bVar9) {
code_r0x00014557a010:
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        goto LAB_14557a898;
      }
      pFVar2 = *(FViewInfo **)((longlong)this + 8);
      pFVar3 = *(FProjectedShadowInfo **)this;
      iVar18 = *(int *)((longlong)this + 0x34);
      FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(pFVar2->ShaderMap,&local_5a8,0);
      pFVar4 = pFVar2->ShaderMap;
      pFVar11 = (FShaderType *)TOnePassPointShadowProjectionPS<5,0,1>::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar4,&local_3c8,pFVar11,0);
      if ((TOnePassPointShadowProjectionPS<5,0,1> *)local_3c8.ShaderContent ==
          (TOnePassPointShadowProjectionPS<5,0,1> *)0x0) {
        FVar12 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2d8);
        ::FName::ToString((FName *)FVar12,&local_260);
        TOnePassPointShadowProjectionPS<5,0,1>::GetStaticType();
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
        }
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TOnePassPointShadowProjectionPS<5,0,1>::GetStaticType();
      local_3b8.ShaderContent = (TOnePassPointShadowProjectionPS<5,0,1> *)local_3c8.ShaderContent;
      local_3b8.ShaderMap = local_3c8.ShaderMap;
      pTVar13 = GetVertexDeclarationFVector4();
      local_148.BoundShaderState.VertexDeclarationRHI = pTVar13->Reference;
      local_148.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_5a8,true);
      local_148.BoundShaderState.PixelShaderRHI =
           TShaderRefBase<TOnePassPointShadowProjectionPS<5,0,1>,FShaderMapPointerTable>::
           GetPixelShader(&local_3b8,true);
      SetGraphicsPipelineState(param_2,&local_148,0,CheckApply,true);
      pFVar14 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::
                GetVertexShader(&local_5a8,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      FShadowVolumeBoundProjectionVS::SetParameters
                (local_5a8.ShaderContent,pFVar15,(FSceneView *)pFVar2,pFVar3,None);
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar14,pFVar15);
      pFVar16 = TShaderRefBase<TOnePassPointShadowProjectionPS<5,0,1>,FShaderMapPointerTable>::
                GetPixelShader(&local_3b8,true);
      pFVar15 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      TOnePassPointShadowProjectionPS<5,0,1>::SetParameters
                ((TOnePassPointShadowProjectionPS<5,0,1> *)local_3c8.ShaderContent,pFVar15,iVar18,
                 pFVar2,pFVar3,local_5b0);
    }
  }
  FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar16,pFVar15);
LAB_14557a898:
  StencilingGeometry::DrawSphere(param_2,*(uint *)(*(longlong *)((longlong)this + 8) + 0x1bfc));
  FRHICommandList::SetScissorRect(param_2,false,0,0,0,0);
  return;
}

// operator() @ 14557a910

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
`FProjectedShadowInfo::RenderProjection'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FProjectedShadowInfo *this_00;
  FRDGResource *this_01;
  FRHIUniformBuffer *pFVar1;
  
  this_00 = *(FProjectedShadowInfo **)this;
  if ((*(char *)((longlong)this + 0x38) == '\0') ||
     (this_01 = *(FRDGResource **)(*(longlong *)((longlong)this + 0x40) + 0x20),
     this_01 == (FRDGResource *)0x0)) {
    pFVar1 = (FRHIUniformBuffer *)0x0;
  }
  else {
    FRDGResource::ValidateRHIAccess(this_01);
    pFVar1 = (FRHIUniformBuffer *)this_01->ResourceRHI;
  }
  FProjectedShadowInfo::RenderProjectionInternal
            (this_00,param_2,*(int *)((longlong)this + 0x18),*(FViewInfo **)((longlong)this + 0x10),
             *(FLightSceneProxy **)((longlong)this + 0x20),*(FSceneRenderer **)((longlong)this + 8),
             *(bool *)((longlong)this + 0x28),false,
             *(FInstanceCullingDrawParams **)((longlong)this + 0x30),pFVar1);
  return;
}

// operator() @ 14557c0a0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
`FProjectedShadowInfo::CopyCachedShadowMap'::__l18::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  void *pvVar1;
  longlong lVar2;
  TIntPoint<int> TVar3;
  FRHIPixelShader *pFVar4;
  FShaderParametersMetadata *pFVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  FProjectedShadowInfo::SetStateForView(*(FProjectedShadowInfo **)this,param_2,false);
  FRHICommandList::ApplyCachedRenderTargets
            (param_2,(FGraphicsPipelineStateInitializer *)((longlong)this + 0x28));
  SetGraphicsPipelineState
            (param_2,(FGraphicsPipelineStateInitializer *)((longlong)this + 0x28),
             *(uint *)((longlong)this + 0x11c),CheckApply,true);
  pvVar1 = *(void **)((longlong)this + 0x108);
  pFVar4 = TShaderRefBase<FCopyShadowMapsCubePS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FCopyShadowMapsCubePS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x18),true);
  pFVar5 = FCopyShadowMapsCubePS::FParameters::FTypeInfo::GetStructMetadata();
  local_28.ShaderContent = *(FShader **)((longlong)this + 0x18);
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x20);
  ValidateShaderParameters(&local_28,pFVar5,pvVar1);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar4,
             *(FShaderParameterBindings **)((longlong)this + 0x18),pFVar5,pvVar1);
  lVar2 = *(longlong *)this;
  iVar7 = *(int *)(lVar2 + 0x960) * 2;
  local_28.ShaderContent = *(FShader **)((longlong)this + 8);
  iVar6 = *(int *)(lVar2 + 0x95c) + iVar7;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x10);
  iVar7 = *(int *)(lVar2 + 0x958) + iVar7;
  fVar8 = (float)iVar6;
  TVar3.field0_0x0._s_0.Y = iVar6;
  TVar3.field0_0x0._s_0.X = iVar7;
  fVar9 = (float)iVar7;
  DrawRectangle(param_2,0.0,0.0,fVar9,fVar8,0.0,0.0,fVar9,fVar8,TVar3,
                (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)this + 0x110))->_s_0,&local_28,
                EDRF_Default,*(uint *)((longlong)this + 0x118));
  return;
}

// operator() @ 14557c630

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
`FProjectedShadowInfo::CopyCachedShadowMap'::__l32::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  void *pvVar1;
  longlong lVar2;
  TIntPoint<int> TVar3;
  FRHIPixelShader *pFVar4;
  FShaderParametersMetadata *pFVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_28;
  
  FProjectedShadowInfo::SetStateForView(*(FProjectedShadowInfo **)this,param_2,false);
  FRHICommandList::ApplyCachedRenderTargets
            (param_2,(FGraphicsPipelineStateInitializer *)((longlong)this + 0x28));
  SetGraphicsPipelineState
            (param_2,(FGraphicsPipelineStateInitializer *)((longlong)this + 0x28),
             *(uint *)((longlong)this + 0x118),CheckApply,true);
  pvVar1 = *(void **)((longlong)this + 0x108);
  pFVar4 = TShaderRefBase<FCopyShadowMaps2DPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FCopyShadowMaps2DPS,FShaderMapPointerTable> *)
                      ((longlong)this + 0x18),true);
  pFVar5 = FCopyShadowMaps2DPS::FParameters::FTypeInfo::GetStructMetadata();
  local_28.ShaderContent = *(FShader **)((longlong)this + 0x18);
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x20);
  ValidateShaderParameters(&local_28,pFVar5,pvVar1);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar4,
             *(FShaderParameterBindings **)((longlong)this + 0x18),pFVar5,pvVar1);
  lVar2 = *(longlong *)this;
  iVar7 = *(int *)(lVar2 + 0x960) * 2;
  local_28.ShaderContent = *(FShader **)((longlong)this + 8);
  iVar6 = *(int *)(lVar2 + 0x95c) + iVar7;
  local_28.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x10);
  iVar7 = *(int *)(lVar2 + 0x958) + iVar7;
  fVar8 = (float)iVar6;
  TVar3.field0_0x0._s_0.Y = iVar6;
  TVar3.field0_0x0._s_0.X = iVar7;
  fVar9 = (float)iVar7;
  DrawRectangle(param_2,0.0,0.0,fVar9,fVar8,0.0,0.0,fVar9,fVar8,TVar3,
                (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)this + 0x110))->_s_0,&local_28,
                EDRF_Default,1);
  return;
}

// operator() @ 14557ca60

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
`FProjectedShadowInfo::RenderDepth'::__l29::<lambda_3>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FProjectedShadowInfo::SetStateForView
            (*(FProjectedShadowInfo **)this,param_2,*(bool *)((longlong)this + 0x10));
  FParallelMeshDrawCommandPass::Draw
            ((FParallelMeshDrawCommandPass *)(*(longlong *)this + 0xc70),param_2,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 8) + 0x40));
  return;
}

// operator() @ 14557cab0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
`FProjectedShadowInfo::CopyCachedShadowMap'::__l34::<lambda_3>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  TShaderRefBase<FScrollingShadowMaps2DPS,FShaderMapPointerTable> *this_00;
  float fVar1;
  float fVar2;
  FProjectedShadowInfo *this_01;
  void *pvVar3;
  TIntPoint<int> TVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  FRHIPixelShader *pFVar8;
  FShaderParametersMetadata *pFVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b8 [8];
  
  fVar5 = __real_3f000000;
  this_01 = *(FProjectedShadowInfo **)this;
  fVar1 = (this_01->OverlappedUVOnCachedShadowMap).field0_0x0._s_0.Y;
  fVar2 = (this_01->OverlappedUVOnCachedShadowMap).field0_0x0._s_0.X;
  iVar11 = this_01->BorderSize * 2;
  iVar10 = this_01->ResolutionX + iVar11;
  iVar11 = this_01->ResolutionY + iVar11;
  fVar17 = (float)iVar10;
  fVar16 = (float)iVar11;
  fVar12 = ((this_01->OverlappedUVOnCachedShadowMap).field0_0x0._s_0.Z - fVar2) * fVar17 +
           __real_3f000000;
  fVar13 = ((this_01->OverlappedUVOnCachedShadowMap).field0_0x0._s_0.W - fVar1) * fVar16 +
           __real_3f000000;
  iVar6 = (int)(fVar17 * (this_01->OverlappedUVOnCurrentShadowMap).field0_0x0._s_0.X +
               __real_3f000000);
  iVar7 = (int)(fVar16 * (this_01->OverlappedUVOnCurrentShadowMap).field0_0x0._s_0.Y +
               __real_3f000000);
  fVar14 = fVar17 * (this_01->OverlappedUVOnCurrentShadowMap).field0_0x0._s_0.Z + __real_3f000000;
  fVar15 = fVar16 * (this_01->OverlappedUVOnCurrentShadowMap).field0_0x0._s_0.W + __real_3f000000;
  FProjectedShadowInfo::SetStateForView(this_01,param_2,false);
  FRHICommandList::ApplyCachedRenderTargets
            (param_2,(FGraphicsPipelineStateInitializer *)((longlong)this + 0x28));
  SetGraphicsPipelineState
            (param_2,(FGraphicsPipelineStateInitializer *)((longlong)this + 0x28),
             *(uint *)((longlong)this + 0x118),CheckApply,true);
  pvVar3 = *(void **)((longlong)this + 0x108);
  this_00 = (TShaderRefBase<FScrollingShadowMaps2DPS,FShaderMapPointerTable> *)
            ((longlong)this + 0x18);
  pFVar8 = TShaderRefBase<FScrollingShadowMaps2DPS,FShaderMapPointerTable>::GetPixelShader
                     (this_00,true);
  pFVar9 = FScrollingShadowMaps2DPS::FParameters::FTypeInfo::GetStructMetadata();
  local_b8[0].ShaderContent = (FShader *)this_00->ShaderContent;
  local_b8[0].ShaderMap = *(FShaderMapBase **)((longlong)this + 0x20);
  ValidateShaderParameters(local_b8,pFVar9,pvVar3);
  ::SetShaderParameters
            (param_2,(FRHIGraphicsShader *)pFVar8,(FShaderParameterBindings *)this_00->ShaderContent
             ,pFVar9,pvVar3);
  local_b8[0].ShaderContent = *(FShader **)((longlong)this + 8);
  local_b8[0].ShaderMap = *(FShaderMapBase **)((longlong)this + 0x10);
  TVar4.field0_0x0._s_0.Y = iVar11;
  TVar4.field0_0x0._s_0.X = iVar10;
  DrawRectangle(param_2,(float)iVar6,(float)iVar7,(float)((int)fVar14 - iVar6),
                (float)((int)fVar15 - iVar7),
                (float)((longlong)(fVar2 * fVar17 + fVar5) & 0xffffffff),
                (float)((longlong)(fVar1 * fVar16 + fVar5) & 0xffffffff),
                (float)((longlong)fVar12 & 0xffffffff),(float)((longlong)fVar13 & 0xffffffff),TVar4,
                (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)this + 0x110))->_s_0,local_b8,
                EDRF_Default,1);
  return;
}

// operator() @ 14557cdd0

void __thiscall
`FProjectedShadowInfo::RenderDepth'::__l32::<lambda_4>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRHIGPUMask FVar1;
  FRDGResource *this_00;
  
  this_00 = *(FRDGResource **)this;
  FVar1.GPUMask = *(uint *)((longlong)this + 8);
  FRDGResource::ValidateRHIAccess(this_00);
  CopyCachedShadowMapCrossGPU(param_2,(FRHITexture *)this_00->ResourceRHI,FVar1);
  return;
}

// BeginRenderView @ 1455803c0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::BeginRenderView
          (FProjectedShadowInfo *this,FRDGBuilder *param_1,FScene *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((this->DependentView != (FViewInfo *)0x0) && (2 < (int)this->ShadowDepthView->_padding_)) {
    uVar13 = 0;
    uVar14 = 0;
    uVar6 = 1;
    uVar8 = PersistentViewUniformBufferExtensions.Elements._40_4_;
    uVar7 = uVar14;
    if (uVar8 != 0) {
      puVar15 = (uint *)&PersistentViewUniformBufferExtensions.Elements.field_0x10;
      if (PersistentViewUniformBufferExtensions.Elements._32_8_ != 0) {
        puVar15 = (uint *)PersistentViewUniformBufferExtensions.Elements._32_8_;
      }
      uVar7 = *puVar15;
      uVar14 = uVar13;
      while (uVar7 == 0) {
        lVar9 = (longlong)(int)uVar13;
        uVar14 = uVar14 + 0x20;
        uVar13 = uVar13 + 1;
        uVar7 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
        goto LAB_14558048e;
        uVar7 = puVar15[lVar9 + 1];
      }
      uVar6 = -uVar7 & uVar7;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar7 = (uVar14 - 1) + (int)lVar9;
      if ((int)uVar8 < (int)uVar7) {
        uVar7 = uVar8;
      }
    }
LAB_14558048e:
    bVar4 = PersistentViewUniformBufferExtensions.Elements._40_1_;
    uVar12 = uVar8 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar6,uVar13);
    TStack_60.CurrentBitIndex = uVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar8 >> 5;
    TStack_60._28_4_ = uVar7;
    TStack_60.BaseBitIndex = uVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         PersistentViewUniformBufferExtensions.Elements._8_4_ -
                         PersistentViewUniformBufferExtensions.Elements._52_4_);
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &PersistentViewUniformBufferExtensions.Elements.field_0x10;
    uVar13 = uVar8;
    if ((int)uVar8 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = PersistentViewUniformBufferExtensions.Elements._40_4_;
    }
    if (uVar8 != uVar13) {
      lVar9 = 0x154bd4fe0;
      if (PersistentViewUniformBufferExtensions.Elements._32_8_ != 0) {
        lVar9 = PersistentViewUniformBufferExtensions.Elements._32_8_;
      }
      uVar14 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar11 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar12 = uVar12 + 0x20;
        iVar11 = iVar11 + 1;
        uVar8 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1455805b0;
        uVar14 = *(uint *)(lVar9 + 4 + lVar10 * 4);
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar8 = (int)lVar9 + -1 + uVar12;
      if ((int)uVar13 < (int)uVar8) {
        uVar8 = uVar13;
      }
    }
LAB_1455805b0:
    while( true ) {
      if (PersistentViewUniformBufferExtensions.Elements._8_4_ -
          PersistentViewUniformBufferExtensions.Elements._52_4_ != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<IPersistentViewUniformBufferExtension_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar8) &&
         (TStack_60.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)
          &PersistentViewUniformBufferExtensions.Elements.field_0x10)) break;
      plVar2 = *(longlong **)
                (PersistentViewUniformBufferExtensions.Elements._0_8_ +
                (longlong)TStack_60.CurrentBitIndex * 0x10);
      (**(code **)(*plVar2 + 0x10))(plVar2,this->DependentView,1);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// ClearDepth @ 1455853e0

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
FProjectedShadowInfo::ClearDepth(FProjectedShadowInfo *this,FRHICommandList *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  float fVar7;
  bool bVar8;
  FLinearColor_u_0 local_38 [2];
  
  if ((param_1->field_0x29b & 2) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RHICmdList.IsInsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                       ,0x2a0,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = this->ResolutionX;
  iVar6 = this->BorderSize * 2;
  uVar2 = this->ResolutionY;
  uVar3 = this->X;
  uVar4 = this->Y;
  local_38[0] = FLinearColor::White.field0_0x0;
  if (this->bTranslucentShadow != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bTranslucentShadow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                       ,0x2af,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar7 = __real_3f800000;
  FRHICommandList::SetViewport
            (param_1,(float)uVar3,(float)uVar4,0.0,(float)(uVar1 + iVar6 + uVar3),
             (float)(uVar2 + iVar6 + uVar4),__real_3f800000);
  DrawClearQuadMRT(param_1,false,1,(FLinearColor *)&local_38[0]._s_0,true,fVar7,false,0);
  return;
}

// ComputeTransitionSize @ 145586270

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

float __thiscall FProjectedShadowInfo::ComputeTransitionSize(FProjectedShadowInfo *this)

{
  undefined1 *puVar1;
  uchar uVar2;
  code *pcVar3;
  bool bVar4;
  TConsoleVariableData<float> *pTVar5;
  float fVar6;
  
  pTVar5 = CVarCSMShadowDepthBias.Ref;
  if ((char)(this->bWholeSceneShadow << 7) < '\0') {
    uVar2 = this->LightSceneInfo->Proxy->LightType;
    if ((uVar2 == '\x01') || (uVar2 == '\x03')) {
      pTVar5 = CVarShadowTransitionScale.Ref;
      if (this->bDirectionalLight == 0) {
        pTVar5 = CVarSpotLightShadowTransitionScale.Ref;
      }
      bVar4 = IsInParallelRenderingThread();
      if (!bVar4) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar6 = (float)(*pcVar3)();
          return fVar6;
        }
      }
      fVar6 = (__real_3f800000 / pTVar5->ShadowedValue[1]) *
              this->LightSceneInfo->Proxy->ShadowBias * __real_40000000;
      goto LAB_145586453;
    }
    if ((-1 < (this->CascadeSettings).ShadowSplitIndex) && (this->bDirectionalLight != 0)) {
      bVar4 = IsInParallelRenderingThread();
      if (!bVar4) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar6 = (float)(*pcVar3)();
          return fVar6;
        }
      }
      fVar6 = (pTVar5->ShadowedValue[1] / (this->MaxSubjectZ - this->MinSubjectZ)) *
              (float)((this->ShadowBounds).W / (double)this->ResolutionX) *
              this->LightSceneInfo->Proxy->ShadowBias;
      goto LAB_145586453;
    }
  }
  if (this->bPreShadow == 0) {
    pTVar5 = CVarShadowTransitionScale.Ref;
    if (this->bDirectionalLight == 0) {
      pTVar5 = CVarSpotLightShadowTransitionScale.Ref;
    }
    bVar4 = IsInParallelRenderingThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar6 = (float)(*pcVar3)();
        return fVar6;
      }
    }
    fVar6 = (__real_3f800000 / pTVar5->ShadowedValue[1]) *
            this->LightSceneInfo->Proxy->ShadowBias * __real_40000000;
  }
  else {
    fVar6 = 0.0;
  }
LAB_145586453:
  if (fVar6 <= __real_3727c5ac) {
    fVar6 = __real_3727c5ac;
  }
  return fVar6;
}

// CopyCachedShadowMap @ 14558acd0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::CopyCachedShadowMap
          (FProjectedShadowInfo *this,FRDGBuilder *param_1,FViewInfo *param_2,
          FSceneRenderer *param_3,FRenderTargetBindingSlots *param_4,
          FMeshPassProcessorRenderState *param_5)

{
  int *piVar1;
  FRDGBarrierBatchBegin *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FGlobalShaderMap *pFVar5;
  FShaderMapResource *pFVar6;
  code *pcVar7;
  uint uVar8;
  FRDGTexture *pFVar9;
  undefined8 uVar10;
  FProjectedShadowInfo *pFVar11;
  FProjectedShadowInfo *pFVar12;
  FProjectedShadowInfo *pFVar13;
  FProjectedShadowInfo *pFVar14;
  FRDGPass *pFVar15;
  FProjectedShadowInfo **ppFVar16;
  bool bVar17;
  ERDGPassFlags EVar18;
  int iVar19;
  TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *pTVar20;
  FShaderType *pFVar21;
  FName FVar22;
  atomic<FRHIShader_*> aVar23;
  undefined8 *puVar24;
  FRDGEventName *pFVar25;
  FShaderParametersMetadata *pFVar26;
  wchar_t *pwVar27;
  FRDGPass *pFVar28;
  FRDGPass *pFVar29;
  undefined8 *puVar30;
  uint uVar31;
  FProjectedShadowInfo **ppFVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 local_690;
  undefined8 *local_688;
  undefined8 *local_680;
  undefined8 *local_678 [2];
  FRDGTexture *local_668;
  FProjectedShadowInfo *local_660;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_658;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_648;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_638;
  undefined8 local_628;
  atomic<FRHIShader_*> aStack_620;
  FRHIPixelShader *local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  atomic<FRHIShader_*> aStack_600;
  undefined8 local_5f8;
  FRHIBlendState *pFStack_5f0;
  FRHIRasterizerState *local_5e8;
  FRHIDepthStencilState *pFStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined1 local_578;
  undefined7 uStack_577;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined8 uStack_550;
  TShaderRefBase<FScreenVS,FShaderMapPointerTable> local_548;
  TShaderRefBase<FCopyShadowMaps2DPS,FShaderMapPointerTable> local_538;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_528;
  TShaderRefBase<FScreenVS,FShaderMapPointerTable> local_518;
  TShaderRefBase<FScrollingShadowMaps2DPS,FShaderMapPointerTable> local_508;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_4f8;
  TShaderRefBase<FCopyShadowMapsCubePS,FShaderMapPointerTable> local_4e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_4d8;
  FRDGParameterStruct local_4c8;
  FRDGParameterStruct local_4b0;
  FRDGParameterStruct local_498;
  undefined1 local_480 [8];
  undefined1 local_478 [8];
  undefined1 local_470 [8];
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  undefined1 local_3f8 [8];
  FRDGEventName local_3f0;
  FRDGEventName local_3d8;
  FRDGEventName local_3c0;
  FProjectedShadowInfo *local_3a8 [3];
  FShader *pFStack_390;
  FShaderMapBase *pFStack_388;
  undefined8 uStack_380;
  atomic<FRHIShader_*> aStack_378;
  FRHIPixelShader *local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  atomic<FRHIShader_*> aStack_358;
  undefined8 local_350;
  FRHIBlendState *pFStack_348;
  FRHIRasterizerState *local_340;
  FRHIDepthStencilState *pFStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  FRDGBarrierBatchBegin *local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  uint local_28c;
  FProjectedShadowInfo *local_288;
  FScreenVS *pFStack_280;
  FShaderMapBase *pFStack_278;
  FShader *pFStack_270;
  FShaderMapBase *pFStack_268;
  undefined8 local_260;
  atomic<FRHIShader_*> aStack_258;
  FRHIPixelShader *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  atomic<FRHIShader_*> aStack_238;
  undefined8 local_230;
  FRHIBlendState *pFStack_228;
  FRHIRasterizerState *local_220;
  FRHIDepthStencilState *pFStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  FRDGBarrierBatchBegin *local_180;
  undefined8 local_178;
  uint local_170;
  FProjectedShadowInfo *local_168;
  FScreenVS *pFStack_160;
  FShaderMapBase *pFStack_158;
  FShader *pFStack_150;
  FShaderMapBase *pFStack_148;
  undefined8 local_140;
  atomic<FRHIShader_*> aStack_138;
  FRHIPixelShader *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  atomic<FRHIShader_*> aStack_118;
  undefined8 local_110;
  FRHIBlendState *pFStack_108;
  FRHIRasterizerState *local_100;
  FRHIDepthStencilState *pFStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FRDGBarrierBatchBegin *local_60;
  undefined8 local_58;
  uint local_50;
  
  local_660 = this;
  if (((this->CacheMode != SDCM_MovablePrimitivesOnly) && (this->CacheMode != SDCM_CSMScrolling)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("CacheMode == SDCM_MovablePrimitivesOnly || CacheMode == SDCM_CSMScrolling"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                          ,0x353,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar31 = (this->CascadeSettings).ShadowSplitIndex;
  uVar8 = 0;
  if (0 < (int)uVar31) {
    uVar8 = uVar31;
  }
  pTVar20 = TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked((TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
                           *)(*(longlong *)&param_3->field_0x8 + 0x45a8),this->LightSceneInfo->Id);
  uVar31 = 0;
  if ((int)uVar8 < pTVar20->ArrayNum) {
    uVar31 = ~uVar8 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = (pTVar20->AllocatorInstance).Data;
  lVar35 = (longlong)(int)uVar8 * 0x430;
  if ((pFVar3[lVar35 + 0x3dc] != (FScriptContainerElement)0x0) &&
     ((*(longlong *)&pFVar3[lVar35 + 0x3d0].field_0x0 != 0 ||
      (0 < *(int *)(pFVar3 + lVar35 + 0x3c8))))) {
    local_668 = FRDGBuilder::RegisterExternalTexture
                          (param_1,(TRefCountPtr<IPooledRenderTarget> *)(pFVar3 + lVar35 + 0x3d0),
                           None);
    pFVar11 = local_660;
    uStack_610 = 0;
    uVar4 = *(undefined8 *)&(local_668->Desc).field_0x24;
    pFStack_5f0 = param_5->BlendState;
    uVar31 = param_5->StencilRef;
    local_5e8 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                ::StaticResource.StateRHI.Reference;
    pFStack_5e0 = TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                  ::StaticResource.StateRHI.Reference;
    local_628 = GFilterVertexDeclaration._32_8_;
    local_608 = 0;
    aStack_600 = (atomic<FRHIShader_*>)0x0;
    local_5f8 = 0;
    local_5d8 = 0;
    uStack_5d0 = 0;
    local_5c8 = 0;
    uStack_5c0 = 0;
    local_5b8 = 0;
    uStack_5b0 = 0;
    local_5a8 = 0;
    uStack_5a0 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_588 = 0;
    uStack_580 = 0;
    local_578 = 0;
    uStack_570 = 0;
    local_568 = 0;
    uStack_560 = 0;
    local_558 = 1;
    uStack_550 = 0;
    if (this->CacheMode == SDCM_MovablePrimitivesOnly) {
      pFVar5 = param_2->ShaderMap;
      if (local_660->bOnePassPointLightShadow == 0) {
        TShaderMapRef<FScreenVS>::TShaderMapRef<FScreenVS>
                  ((TShaderMapRef<FScreenVS> *)&local_548,pFVar5);
        pFVar5 = param_2->ShaderMap;
        pFVar21 = (FShaderType *)FCopyShadowMaps2DPS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar5,&local_4d8,pFVar21,0);
        if (local_4d8.ShaderContent == (FShader *)0x0) {
          FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_460);
          ::FName::ToString((FName *)FVar22,&local_418);
          FCopyShadowMaps2DPS::GetStaticType();
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_418.Data.AllocatorInstance.Data);
          }
          if (bVar17) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        FCopyShadowMaps2DPS::GetStaticType();
        local_538.ShaderContent = (FCopyShadowMaps2DPS *)local_4d8.ShaderContent;
        local_538.ShaderMap = local_4d8.ShaderMap;
        aStack_620 = (atomic<FRHIShader_*>)
                     TShaderRefBase<FScreenVS,FShaderMapPointerTable>::GetVertexShader
                               (&local_548,true);
        local_618 = TShaderRefBase<FCopyShadowMaps2DPS,FShaderMapPointerTable>::GetPixelShader
                              (&local_538,true);
        puVar30 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,0x10);
        if (puVar30 == (undefined8 *)0x0) {
          puVar30 = (undefined8 *)0x0;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar17) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          *(undefined1 *)(puVar30 + 3) = 1;
          *puVar30 = &___7__TObject_VFParameters_FCopyShadowMaps2DPS___FRDGAllocator__6B_;
          puVar30[2] = 0;
          puVar30[4] = 0;
          puVar30[5] = 0;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(puVar30 + 6));
        }
        local_680 = puVar30;
        if ((((undefined8 **)param_1->_padding_ <= &local_680) &&
            (&local_680 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (int)param_1->_padding_;
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
        }
        pFVar2 = (FRDGBarrierBatchBegin *)(puVar30 + 2);
        *(int *)&param_1->_padding_ = iVar19 + 1;
        lVar33 = 2;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar19 * 8) = local_680;
        lVar35 = 2;
        puVar24 = puVar30 + 6;
        do {
          pFVar9 = (param_4->Output).Elements[0].ResolveTexture;
          *puVar24 = (param_4->Output).Elements[0].Texture;
          puVar24[1] = pFVar9;
          pFVar9 = (param_4->Output).Elements[1].Texture;
          puVar24[2] = *(undefined8 *)&(param_4->Output).Elements[0].LoadAction;
          puVar24[3] = pFVar9;
          uVar10 = *(undefined8 *)&(param_4->Output).Elements[1].LoadAction;
          puVar24[4] = (param_4->Output).Elements[1].ResolveTexture;
          puVar24[5] = uVar10;
          pFVar9 = (param_4->Output).Elements[2].ResolveTexture;
          puVar24[6] = (param_4->Output).Elements[2].Texture;
          puVar24[7] = pFVar9;
          pFVar9 = (param_4->Output).Elements[3].Texture;
          puVar24[8] = *(undefined8 *)&(param_4->Output).Elements[2].LoadAction;
          puVar24[9] = pFVar9;
          uVar10 = *(undefined8 *)&(param_4->Output).Elements[3].LoadAction;
          puVar24[10] = (param_4->Output).Elements[3].ResolveTexture;
          puVar24[0xb] = uVar10;
          pFVar9 = (param_4->Output).Elements[4].ResolveTexture;
          puVar24[0xc] = (param_4->Output).Elements[4].Texture;
          puVar24[0xd] = pFVar9;
          pFVar9 = (param_4->Output).Elements[5].Texture;
          puVar24[0xe] = *(undefined8 *)&(param_4->Output).Elements[4].LoadAction;
          puVar24[0xf] = pFVar9;
          lVar35 = lVar35 + -1;
          puVar24 = puVar24 + 0x10;
          param_4 = (FRenderTargetBindingSlots *)&(param_4->Output).Elements[5].ResolveTexture;
        } while (lVar35 != 0);
        pFStack_280 = local_548.ShaderContent;
        pFStack_278 = local_548.ShaderMap;
        local_288 = pFVar11;
        pFStack_270 = (FShader *)local_538.ShaderContent;
        pFStack_268 = local_538.ShaderMap;
        puVar30[4] = local_668;
        puVar30[5] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                     ::StaticResource.StateRHI.Reference;
        local_260 = local_628;
        aStack_258 = aStack_620;
        local_250 = local_618;
        uStack_248 = uStack_610;
        local_240 = local_608;
        aStack_238 = aStack_600;
        local_230 = local_5f8;
        pFStack_228 = pFStack_5f0;
        local_220 = local_5e8;
        pFStack_218 = pFStack_5e0;
        local_210 = local_5d8;
        uStack_208 = uStack_5d0;
        local_200 = local_5c8;
        uStack_1f8 = uStack_5c0;
        local_1f0 = local_5b8;
        uStack_1e8 = uStack_5b0;
        local_1e0 = local_5a8;
        uStack_1d8 = uStack_5a0;
        local_1d0 = local_598;
        uStack_1c8 = uStack_590;
        local_1b0 = CONCAT71(uStack_577,local_578);
        local_1c0 = local_588;
        uStack_1b8 = uStack_580;
        uStack_1a8 = uStack_570;
        local_190 = CONCAT44(uStack_554,local_558);
        local_1a0 = local_568;
        uStack_198 = uStack_560;
        uStack_188 = uStack_550;
        local_180 = pFVar2;
        local_178 = uVar4;
        local_170 = uVar31;
        pFVar25 = FRDGEventName::FRDGEventName(&local_3d8,1,L"CopyCachedShadowMap");
        pFVar26 = FCopyShadowMaps2DPS::FParameters::FTypeInfo::GetStructMetadata();
        FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar2,pFVar26,pFVar25,Raster);
        FRDGBuilder::FlushAccessModeQueue(param_1);
        pwVar27 = FRDGEventName::GetTCHAR(pFVar25);
        EVar18 = FRDGBuilder::OverridePassFlags(param_1,pwVar27,Raster);
        pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x2a8,8);
        local_4b0.Contents = (uchar *)pFVar2;
        if (((pFVar26->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x17c,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_4b0.Layout.Reference = (pFVar26->Layout).Reference;
        if (local_4b0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_4b0.Layout.Reference);
        }
        local_4b0.Metadata = pFVar26;
        FRDGPass::FRDGPass(pFVar28,pFVar25,&local_4b0,EVar18,Async);
        pFVar28->_padding_ =
             (longlong)
             &TRDGLambdaPass<FCopyShadowMaps2DPS::FParameters,`FProjectedShadowInfo::CopyCachedShadowMap'::`32'::<lambda_2>_>
              ::_vftable_;
        pFVar15 = pFVar28 + 1;
        ppFVar16 = &local_288;
        do {
          ppFVar32 = ppFVar16;
          pFVar29 = pFVar15;
          pFVar11 = ppFVar32[1];
          pFVar12 = ppFVar32[2];
          pFVar13 = ppFVar32[3];
          pFVar29->_padding_ = (longlong)*ppFVar32;
          (pFVar29->FullPathIfDebug).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)pFVar11;
          pFVar11 = ppFVar32[4];
          pFVar14 = ppFVar32[5];
          *(FProjectedShadowInfo **)&(pFVar29->FullPathIfDebug).Data.ArrayNum = pFVar12;
          (pFVar29->Name).EventFormat = (wchar_t *)pFVar13;
          pFVar12 = ppFVar32[6];
          pFVar13 = ppFVar32[7];
          (pFVar29->Name).FormattedEventName.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)pFVar11;
          *(FProjectedShadowInfo **)&(pFVar29->Name).FormattedEventName.Data.ArrayNum = pFVar14;
          pFVar11 = ppFVar32[8];
          pFVar14 = ppFVar32[9];
          (pFVar29->ParameterStruct).Contents = (uchar *)pFVar12;
          (pFVar29->ParameterStruct).Layout.Reference = (FRHIUniformBufferLayout *)pFVar13;
          pFVar12 = ppFVar32[10];
          pFVar13 = ppFVar32[0xb];
          (pFVar29->ParameterStruct).Metadata = (FShaderParametersMetadata *)pFVar11;
          *(FProjectedShadowInfo **)&pFVar29->Flags = pFVar14;
          pFVar11 = ppFVar32[0xc];
          pFVar14 = ppFVar32[0xd];
          *(FProjectedShadowInfo **)&pFVar29->Workload = pFVar12;
          *(FProjectedShadowInfo **)&pFVar29->CrossPipelineProducer = pFVar13;
          pFVar12 = ppFVar32[0xe];
          pFVar13 = ppFVar32[0xf];
          *(FProjectedShadowInfo **)&pFVar29->GraphicsJoinPass = pFVar11;
          *(FProjectedShadowInfo **)&pFVar29->EpilogueBarrierPass = pFVar14;
          (pFVar29->CrossPipelineConsumers).AllocatorInstance.Data =
               (TRDGHandle<FRDGPass,unsigned_int> *)pFVar12;
          *(FProjectedShadowInfo **)&(pFVar29->CrossPipelineConsumers).ArrayNum = pFVar13;
          lVar33 = lVar33 + -1;
          pFVar15 = (FRDGPass *)&pFVar29->Producers;
          ppFVar16 = ppFVar32 + 0x10;
        } while (lVar33 != 0);
        pFVar11 = ppFVar32[0x10];
        pFVar12 = ppFVar32[0x11];
        pFVar28[1].EpilogueBarriersToBeginForGraphics = pFVar2;
        pFVar13 = ppFVar32[0x12];
        pFVar14 = ppFVar32[0x13];
        (pFVar29->Producers).AllocatorInstance.Data = (FRDGPass **)pFVar11;
        *(FProjectedShadowInfo **)&(pFVar29->Producers).ArrayNum = pFVar12;
        (pFVar29->TextureStates).AllocatorInstance.Data = (FTextureState *)pFVar13;
        *(FProjectedShadowInfo **)&(pFVar29->TextureStates).ArrayNum = pFVar14;
        FRDGBuilder::ClobberPassOutputs(param_1,pFVar28);
        iVar19 = (param_1->Passes).Array.ArrayNum;
        piVar1 = &(param_1->Passes).Array.ArrayMax;
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                             (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
        }
        (param_1->Passes).Array.ArrayNum = iVar19 + 1;
        (param_1->Passes).Array.AllocatorInstance.Data[iVar19] = pFVar28;
        (pFVar28->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
        FRDGBuilder::SetupParameterPass(param_1,pFVar28);
        local_3f0.FormattedEventName.Data.AllocatorInstance.Data =
             local_3d8.FormattedEventName.Data.AllocatorInstance.Data;
      }
      else {
        pFVar21 = (FShaderType *)FCopyShadowMapsCubePS::GetStaticType();
        FGlobalShaderMap::GetShader(pFVar5,&local_4f8,pFVar21,0);
        if (local_4f8.ShaderContent == (FShader *)0x0) {
          FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_480);
          ::FName::ToString((FName *)FVar22,&local_458);
          FCopyShadowMapsCubePS::GetStaticType();
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_458.Data.AllocatorInstance.Data);
          }
          if (bVar17) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        FCopyShadowMapsCubePS::GetStaticType();
        local_4e8.ShaderContent = (FCopyShadowMapsCubePS *)local_4f8.ShaderContent;
        local_4e8.ShaderMap = local_4f8.ShaderMap;
        local_618 = TShaderRefBase<FCopyShadowMapsCubePS,FShaderMapPointerTable>::GetPixelShader
                              (&local_4e8,true);
        local_690 = 1;
        bVar17 = RHISupportsGeometryShaders
                           ((FStaticShaderPlatform)
                            GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3->FeatureLevel]);
        if (bVar17) {
          pFVar5 = param_2->ShaderMap;
          pFVar21 = (FShaderType *)TScreenVSForGS<0>::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar5,&local_648,pFVar21,0);
          if (local_648.ShaderContent == (FShader *)0x0) {
            FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_478);
            ::FName::ToString((FName *)FVar22,&local_448);
            TScreenVSForGS<0>::GetStaticType();
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_448.Data.AllocatorInstance.Data);
            }
            if (bVar17) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          TScreenVSForGS<0>::GetStaticType();
          pFVar5 = param_2->ShaderMap;
          pFVar21 = (FShaderType *)FCopyShadowMapsCubeGS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar5,&local_638,pFVar21,0);
          if (local_638.ShaderContent == (FShader *)0x0) {
            FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_470);
            ::FName::ToString((FName *)FVar22,&local_438);
            FCopyShadowMapsCubeGS::GetStaticType();
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_438.Data.AllocatorInstance.Data);
            }
            if (bVar17) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          FCopyShadowMapsCubeGS::GetStaticType();
          aStack_620 = (atomic<FRHIShader_*>)0x0;
          if (local_648.ShaderContent != (FShader *)0x0) {
            pFVar6 = ((local_648.ShaderMap)->Resource).Reference;
            if ((pFVar6 == (FShaderMapResource *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Resource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x426,L""), bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            aStack_620 = (pFVar6->RHIShaders).Ptr[(local_648.ShaderContent)->ResourceIndex];
            if ((aStack_620 == (atomic<FRHIShader_*>)0x0) &&
               (aStack_620 = (atomic<FRHIShader_*>)
                             FShaderMapResource::CreateShaderOrCrash
                                       (pFVar6,(local_648.ShaderContent)->ResourceIndex,true),
               aStack_620 == (atomic<FRHIShader_*>)0x0)) {
              if (4 < (byte)LogShaders._0_1_) {
                if (((local_648.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PointerTable",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                        ,0x9b4,L""), bVar17)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FShader::GetType(local_648.ShaderContent,(local_648.ShaderMap)->PointerTable);
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)
                           &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TScreenVSForGS<0>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                            ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
              }
              aStack_620 = (atomic<FRHIShader_*>)0x0;
            }
          }
          aVar23 = (atomic<FRHIShader_*>)0x0;
          if (local_638.ShaderContent != (FShader *)0x0) {
            pFVar6 = ((local_638.ShaderMap)->Resource).Reference;
            if ((pFVar6 == (FShaderMapResource *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Resource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x426,L""), bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            aVar23 = (pFVar6->RHIShaders).Ptr[(local_638.ShaderContent)->ResourceIndex];
            if ((aVar23 == (atomic<FRHIShader_*>)0x0) &&
               (aVar23 = (atomic<FRHIShader_*>)
                         FShaderMapResource::CreateShaderOrCrash
                                   (pFVar6,(local_638.ShaderContent)->ResourceIndex,true),
               aVar23 == (atomic<FRHIShader_*>)0x0)) {
              if (4 < (byte)LogShaders._0_1_) {
                if (((local_638.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PointerTable",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                        ,0x9b4,L""), bVar17)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FShader::GetType(local_638.ShaderContent,(local_638.ShaderMap)->PointerTable);
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)
                           &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FCopyShadowMapsCubeGS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                            ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
              }
              aStack_600 = (atomic<FRHIShader_*>)0x0;
              aVar23 = aStack_600;
            }
          }
        }
        else {
          bVar17 = RHISupportsVertexShaderLayer((FStaticShaderPlatform)param_3->ShaderPlatform);
          if (((!bVar17) || (GRHIGlobals.SupportsArrayIndexFromAnyShader == false)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(RHISupportsVertexShaderLayer(SceneRenderer->ShaderPlatform) && GRHIGlobals.SupportsArrayIndexFromAnyShader)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                                  ,0x37d,L""), bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = param_2->ShaderMap;
          pFVar21 = (FShaderType *)TScreenVSForGS<1>::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar5,&local_658,pFVar21,0);
          if (local_658.ShaderContent == (FShader *)0x0) {
            FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_468);
            ::FName::ToString((FName *)FVar22,&local_428);
            TScreenVSForGS<1>::GetStaticType();
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_428.Data.AllocatorInstance.Data);
            }
            if (bVar17) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          TScreenVSForGS<1>::GetStaticType();
          aStack_620 = (atomic<FRHIShader_*>)0x0;
          if (local_658.ShaderContent != (FShader *)0x0) {
            pFVar6 = ((local_658.ShaderMap)->Resource).Reference;
            if ((pFVar6 == (FShaderMapResource *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Resource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x426,L""), bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            aStack_620 = (pFVar6->RHIShaders).Ptr[(local_658.ShaderContent)->ResourceIndex];
            if ((aStack_620 == (atomic<FRHIShader_*>)0x0) &&
               (aStack_620 = (atomic<FRHIShader_*>)
                             FShaderMapResource::CreateShaderOrCrash
                                       (pFVar6,(local_658.ShaderContent)->ResourceIndex,true),
               aStack_620 == (atomic<FRHIShader_*>)0x0)) {
              if (4 < (byte)LogShaders._0_1_) {
                if (((local_658.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("PointerTable",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                        ,0x9b4,L""), bVar17)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                FShader::GetType(local_658.ShaderContent,(local_658.ShaderMap)->PointerTable);
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)
                           &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<TScreenVSForGS<1>,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                            ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
              }
              aStack_620 = (atomic<FRHIShader_*>)0x0;
            }
          }
          local_690 = 6;
          aVar23 = aStack_600;
        }
        aStack_600 = aVar23;
        puVar30 = (undefined8 *)0x0;
        puVar24 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,0x10);
        if (puVar24 == (undefined8 *)0x0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar17) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          puVar24[2] = 0;
          *puVar24 = &___7__TObject_VFParameters_FCopyShadowMapsCubePS___FRDGAllocator__6B_;
          *(undefined1 *)(puVar24 + 3) = 1;
          puVar24[4] = 0;
          puVar24[5] = 0;
          FRenderTargetBindingSlots::FRenderTargetBindingSlots
                    ((FRenderTargetBindingSlots *)(puVar24 + 6));
          puVar30 = puVar24;
        }
        local_688 = puVar30;
        if ((((undefined8 **)param_1->_padding_ <= &local_688) &&
            (&local_688 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar19 = (int)param_1->_padding_;
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
        }
        pFVar2 = (FRDGBarrierBatchBegin *)(puVar30 + 2);
        *(int *)&param_1->_padding_ = iVar19 + 1;
        lVar33 = 2;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar19 * 8) = local_688;
        lVar35 = 2;
        puVar24 = puVar30 + 6;
        do {
          pFVar9 = (param_4->Output).Elements[0].ResolveTexture;
          *puVar24 = (param_4->Output).Elements[0].Texture;
          puVar24[1] = pFVar9;
          pFVar9 = (param_4->Output).Elements[1].Texture;
          puVar24[2] = *(undefined8 *)&(param_4->Output).Elements[0].LoadAction;
          puVar24[3] = pFVar9;
          uVar10 = *(undefined8 *)&(param_4->Output).Elements[1].LoadAction;
          puVar24[4] = (param_4->Output).Elements[1].ResolveTexture;
          puVar24[5] = uVar10;
          pFVar9 = (param_4->Output).Elements[2].ResolveTexture;
          puVar24[6] = (param_4->Output).Elements[2].Texture;
          puVar24[7] = pFVar9;
          pFVar9 = (param_4->Output).Elements[3].Texture;
          puVar24[8] = *(undefined8 *)&(param_4->Output).Elements[2].LoadAction;
          puVar24[9] = pFVar9;
          uVar10 = *(undefined8 *)&(param_4->Output).Elements[3].LoadAction;
          puVar24[10] = (param_4->Output).Elements[3].ResolveTexture;
          puVar24[0xb] = uVar10;
          pFVar9 = (param_4->Output).Elements[4].ResolveTexture;
          puVar24[0xc] = (param_4->Output).Elements[4].Texture;
          puVar24[0xd] = pFVar9;
          pFVar9 = (param_4->Output).Elements[5].Texture;
          puVar24[0xe] = *(undefined8 *)&(param_4->Output).Elements[4].LoadAction;
          puVar24[0xf] = pFVar9;
          lVar35 = lVar35 + -1;
          puVar24 = puVar24 + 0x10;
          param_4 = (FRenderTargetBindingSlots *)&(param_4->Output).Elements[5].ResolveTexture;
        } while (lVar35 != 0);
        pFStack_390 = (FShader *)local_4e8.ShaderContent;
        pFStack_388 = local_4e8.ShaderMap;
        puVar30[4] = local_668;
        puVar30[5] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                     ::StaticResource.StateRHI.Reference;
        local_3a8[0] = local_660;
        uStack_380 = local_628;
        aStack_378 = aStack_620;
        local_370 = local_618;
        uStack_368 = uStack_610;
        local_360 = local_608;
        aStack_358 = aStack_600;
        local_350 = local_5f8;
        pFStack_348 = pFStack_5f0;
        local_340 = local_5e8;
        pFStack_338 = pFStack_5e0;
        local_330 = local_5d8;
        uStack_328 = uStack_5d0;
        local_320 = local_5c8;
        uStack_318 = uStack_5c0;
        local_310 = local_5b8;
        uStack_308 = uStack_5b0;
        local_300 = local_5a8;
        uStack_2f8 = uStack_5a0;
        local_2f0 = local_598;
        uStack_2e8 = uStack_590;
        local_2d0 = CONCAT71(uStack_577,local_578);
        local_2e0 = local_588;
        uStack_2d8 = uStack_580;
        uStack_2c8 = uStack_570;
        local_2b0 = CONCAT44(uStack_554,local_558);
        local_2c0 = local_568;
        uStack_2b8 = uStack_560;
        uStack_2a8 = uStack_550;
        local_290 = local_690;
        local_2a0 = pFVar2;
        local_298 = uVar4;
        local_28c = uVar31;
        pFVar25 = FRDGEventName::FRDGEventName(&local_3f0,1,L"CopyCachedShadowMap");
        pFVar26 = FCopyShadowMapsCubePS::FParameters::FTypeInfo::GetStructMetadata();
        FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar2,pFVar26,pFVar25,Raster);
        FRDGBuilder::FlushAccessModeQueue(param_1);
        pwVar27 = FRDGEventName::GetTCHAR(pFVar25);
        EVar18 = FRDGBuilder::OverridePassFlags(param_1,pwVar27,Raster);
        pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x2a8,8);
        local_4c8.Contents = (uchar *)pFVar2;
        if (((pFVar26->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x17c,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_4c8.Layout.Reference = (pFVar26->Layout).Reference;
        if (local_4c8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_4c8.Layout.Reference);
        }
        local_4c8.Metadata = pFVar26;
        FRDGPass::FRDGPass(pFVar28,pFVar25,&local_4c8,EVar18,Async);
        pFVar28->_padding_ =
             (longlong)
             &TRDGLambdaPass<FCopyShadowMapsCubePS::FParameters,`FProjectedShadowInfo::CopyCachedShadowMap'::`18'::<lambda_1>_>
              ::_vftable_;
        pFVar15 = pFVar28 + 1;
        ppFVar16 = local_3a8;
        do {
          ppFVar32 = ppFVar16;
          pFVar29 = pFVar15;
          pFVar11 = ppFVar32[1];
          pFVar12 = ppFVar32[2];
          pFVar13 = ppFVar32[3];
          pFVar29->_padding_ = (longlong)*ppFVar32;
          (pFVar29->FullPathIfDebug).Data.AllocatorInstance.Data =
               (FScriptContainerElement *)pFVar11;
          pFVar11 = ppFVar32[4];
          pFVar14 = ppFVar32[5];
          *(FProjectedShadowInfo **)&(pFVar29->FullPathIfDebug).Data.ArrayNum = pFVar12;
          (pFVar29->Name).EventFormat = (wchar_t *)pFVar13;
          pFVar12 = ppFVar32[6];
          pFVar13 = ppFVar32[7];
          (pFVar29->Name).FormattedEventName.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)pFVar11;
          *(FProjectedShadowInfo **)&(pFVar29->Name).FormattedEventName.Data.ArrayNum = pFVar14;
          pFVar11 = ppFVar32[8];
          pFVar14 = ppFVar32[9];
          (pFVar29->ParameterStruct).Contents = (uchar *)pFVar12;
          (pFVar29->ParameterStruct).Layout.Reference = (FRHIUniformBufferLayout *)pFVar13;
          pFVar12 = ppFVar32[10];
          pFVar13 = ppFVar32[0xb];
          (pFVar29->ParameterStruct).Metadata = (FShaderParametersMetadata *)pFVar11;
          *(FProjectedShadowInfo **)&pFVar29->Flags = pFVar14;
          pFVar11 = ppFVar32[0xc];
          pFVar14 = ppFVar32[0xd];
          *(FProjectedShadowInfo **)&pFVar29->Workload = pFVar12;
          *(FProjectedShadowInfo **)&pFVar29->CrossPipelineProducer = pFVar13;
          pFVar12 = ppFVar32[0xe];
          pFVar13 = ppFVar32[0xf];
          *(FProjectedShadowInfo **)&pFVar29->GraphicsJoinPass = pFVar11;
          *(FProjectedShadowInfo **)&pFVar29->EpilogueBarrierPass = pFVar14;
          (pFVar29->CrossPipelineConsumers).AllocatorInstance.Data =
               (TRDGHandle<FRDGPass,unsigned_int> *)pFVar12;
          *(FProjectedShadowInfo **)&(pFVar29->CrossPipelineConsumers).ArrayNum = pFVar13;
          lVar33 = lVar33 + -1;
          pFVar15 = (FRDGPass *)&pFVar29->Producers;
          ppFVar16 = ppFVar32 + 0x10;
        } while (lVar33 != 0);
        pFVar11 = ppFVar32[0x10];
        pFVar12 = ppFVar32[0x11];
        pFVar28[1].EpilogueBarriersToBeginForGraphics = pFVar2;
        pFVar13 = ppFVar32[0x12];
        pFVar14 = ppFVar32[0x13];
        (pFVar29->Producers).AllocatorInstance.Data = (FRDGPass **)pFVar11;
        *(FProjectedShadowInfo **)&(pFVar29->Producers).ArrayNum = pFVar12;
        (pFVar29->TextureStates).AllocatorInstance.Data = (FTextureState *)pFVar13;
        *(FProjectedShadowInfo **)&(pFVar29->TextureStates).ArrayNum = pFVar14;
        FRDGBuilder::ClobberPassOutputs(param_1,pFVar28);
        iVar19 = (param_1->Passes).Array.ArrayNum;
        piVar1 = &(param_1->Passes).Array.ArrayMax;
        if (iVar19 == *piVar1) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                             (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
        }
        (param_1->Passes).Array.ArrayNum = iVar19 + 1;
        (param_1->Passes).Array.AllocatorInstance.Data[iVar19] = pFVar28;
        (pFVar28->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
        FRDGBuilder::SetupParameterPass(param_1,pFVar28);
      }
    }
    else {
      TShaderMapRef<FScreenVS>::TShaderMapRef<FScreenVS>
                ((TShaderMapRef<FScreenVS> *)&local_518,param_2->ShaderMap);
      pFVar5 = param_2->ShaderMap;
      pFVar21 = (FShaderType *)FScrollingShadowMaps2DPS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar5,&local_528,pFVar21,0);
      if (local_528.ShaderContent == (FShader *)0x0) {
        FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_3f8);
        ::FName::ToString((FName *)FVar22,&local_408);
        FScrollingShadowMaps2DPS::GetStaticType();
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_408.Data.AllocatorInstance.Data);
        }
        if (bVar17) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FScrollingShadowMaps2DPS::GetStaticType();
      local_508.ShaderContent = (FScrollingShadowMaps2DPS *)local_528.ShaderContent;
      local_508.ShaderMap = local_528.ShaderMap;
      aStack_620 = (atomic<FRHIShader_*>)
                   TShaderRefBase<FScreenVS,FShaderMapPointerTable>::GetVertexShader
                             (&local_518,true);
      local_618 = TShaderRefBase<FScrollingShadowMaps2DPS,FShaderMapPointerTable>::GetPixelShader
                            (&local_508,true);
      puVar30 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x140,0x10);
      if (puVar30 == (undefined8 *)0x0) {
        puVar30 = (undefined8 *)0x0;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar17) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        *(undefined1 *)(puVar30 + 3) = 1;
        *puVar30 = &___7__TObject_VFParameters_FScrollingShadowMaps2DPS___FRDGAllocator__6B_;
        *(undefined4 *)((longlong)puVar30 + 0x3c) = 0x3f800000;
        puVar30[2] = 0;
        puVar30[4] = 0;
        puVar30[5] = 0;
        puVar30[6] = 0;
        *(undefined4 *)(puVar30 + 7) = 0;
        FRenderTargetBindingSlots::FRenderTargetBindingSlots
                  ((FRenderTargetBindingSlots *)(puVar30 + 8));
      }
      local_678[0] = puVar30;
      if ((((undefined8 **)param_1->_padding_ <= local_678) &&
          (local_678 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar19 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
      }
      pFVar2 = (FRDGBarrierBatchBegin *)(puVar30 + 2);
      *(int *)&param_1->_padding_ = iVar19 + 1;
      lVar34 = 2;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar19 * 8) = local_678[0];
      lVar33 = 2;
      puVar24 = puVar30 + 8;
      do {
        pFVar9 = (param_4->Output).Elements[0].ResolveTexture;
        *puVar24 = (param_4->Output).Elements[0].Texture;
        puVar24[1] = pFVar9;
        pFVar9 = (param_4->Output).Elements[1].Texture;
        puVar24[2] = *(undefined8 *)&(param_4->Output).Elements[0].LoadAction;
        puVar24[3] = pFVar9;
        uVar10 = *(undefined8 *)&(param_4->Output).Elements[1].LoadAction;
        puVar24[4] = (param_4->Output).Elements[1].ResolveTexture;
        puVar24[5] = uVar10;
        pFVar9 = (param_4->Output).Elements[2].ResolveTexture;
        puVar24[6] = (param_4->Output).Elements[2].Texture;
        puVar24[7] = pFVar9;
        pFVar9 = (param_4->Output).Elements[3].Texture;
        puVar24[8] = *(undefined8 *)&(param_4->Output).Elements[2].LoadAction;
        puVar24[9] = pFVar9;
        uVar10 = *(undefined8 *)&(param_4->Output).Elements[3].LoadAction;
        puVar24[10] = (param_4->Output).Elements[3].ResolveTexture;
        puVar24[0xb] = uVar10;
        pFVar9 = (param_4->Output).Elements[4].ResolveTexture;
        puVar24[0xc] = (param_4->Output).Elements[4].Texture;
        puVar24[0xd] = pFVar9;
        pFVar9 = (param_4->Output).Elements[5].Texture;
        puVar24[0xe] = *(undefined8 *)&(param_4->Output).Elements[4].LoadAction;
        puVar24[0xf] = pFVar9;
        fVar37 = __real_3f800000;
        lVar33 = lVar33 + -1;
        puVar24 = puVar24 + 0x10;
        param_4 = (FRenderTargetBindingSlots *)&(param_4->Output).Elements[5].ResolveTexture;
      } while (lVar33 != 0);
      puVar30[4] = local_668;
      puVar30[5] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                   ::StaticResource.StateRHI.Reference;
      fVar38 = *(float *)(pFVar3 + lVar35 + 0x420) - *(float *)(pFVar3 + lVar35 + 0x424);
      fVar36 = local_660->ShaderDepthBias + fVar37;
      fVar37 = fVar37 / (local_660->MaxSubjectZ - local_660->MinSubjectZ);
      *(float *)(puVar30 + 6) =
           (((*(float *)(pFVar3 + lVar35 + 0x420) + local_660->CSMScrollingZOffset) -
            local_660->MaxSubjectZ) * local_660->InvMaxSubjectDepth - fVar36 * fVar38) * fVar37 +
           fVar36;
      *(float *)((longlong)puVar30 + 0x34) = fVar37 * fVar38;
      puVar30[7] = 0;
      local_168 = local_660;
      pFStack_160 = local_518.ShaderContent;
      pFStack_158 = local_518.ShaderMap;
      pFStack_150 = (FShader *)local_508.ShaderContent;
      pFStack_148 = local_508.ShaderMap;
      local_140 = local_628;
      aStack_138 = aStack_620;
      local_130 = local_618;
      uStack_128 = uStack_610;
      local_120 = local_608;
      aStack_118 = aStack_600;
      local_110 = local_5f8;
      pFStack_108 = pFStack_5f0;
      local_100 = local_5e8;
      pFStack_f8 = pFStack_5e0;
      local_f0 = local_5d8;
      uStack_e8 = uStack_5d0;
      local_e0 = local_5c8;
      uStack_d8 = uStack_5c0;
      local_d0 = local_5b8;
      uStack_c8 = uStack_5b0;
      local_c0 = local_5a8;
      uStack_b8 = uStack_5a0;
      local_b0 = local_598;
      uStack_a8 = uStack_590;
      local_90 = CONCAT71(uStack_577,local_578);
      local_a0 = local_588;
      uStack_98 = uStack_580;
      uStack_88 = uStack_570;
      local_70 = CONCAT44(uStack_554,local_558);
      local_80 = local_568;
      uStack_78 = uStack_560;
      uStack_68 = uStack_550;
      local_60 = pFVar2;
      local_58 = uVar4;
      local_50 = uVar31;
      pFVar25 = FRDGEventName::FRDGEventName
                          (&local_3c0,1,L"ScrollingCachedWholeSceneDirectionalShadowMap");
      pFVar26 = FScrollingShadowMaps2DPS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar2,pFVar26,pFVar25,Raster);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar27 = FRDGEventName::GetTCHAR(pFVar25);
      EVar18 = FRDGBuilder::OverridePassFlags(param_1,pwVar27,Raster);
      pFVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x2a8,8);
      local_498.Contents = (uchar *)pFVar2;
      if (((pFVar26->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_498.Layout.Reference = (pFVar26->Layout).Reference;
      if (local_498.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_498.Layout.Reference);
      }
      local_498.Metadata = pFVar26;
      FRDGPass::FRDGPass(pFVar28,pFVar25,&local_498,EVar18,Async);
      pFVar28->_padding_ =
           (longlong)
           &TRDGLambdaPass<FScrollingShadowMaps2DPS::FParameters,`FProjectedShadowInfo::CopyCachedShadowMap'::`34'::<lambda_3>_>
            ::_vftable_;
      pFVar15 = pFVar28 + 1;
      ppFVar16 = &local_168;
      do {
        ppFVar32 = ppFVar16;
        pFVar29 = pFVar15;
        pFVar11 = ppFVar32[1];
        pFVar12 = ppFVar32[2];
        pFVar13 = ppFVar32[3];
        pFVar29->_padding_ = (longlong)*ppFVar32;
        (pFVar29->FullPathIfDebug).Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar11;
        pFVar11 = ppFVar32[4];
        pFVar14 = ppFVar32[5];
        *(FProjectedShadowInfo **)&(pFVar29->FullPathIfDebug).Data.ArrayNum = pFVar12;
        (pFVar29->Name).EventFormat = (wchar_t *)pFVar13;
        pFVar12 = ppFVar32[6];
        pFVar13 = ppFVar32[7];
        (pFVar29->Name).FormattedEventName.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)pFVar11;
        *(FProjectedShadowInfo **)&(pFVar29->Name).FormattedEventName.Data.ArrayNum = pFVar14;
        pFVar11 = ppFVar32[8];
        pFVar14 = ppFVar32[9];
        (pFVar29->ParameterStruct).Contents = (uchar *)pFVar12;
        (pFVar29->ParameterStruct).Layout.Reference = (FRHIUniformBufferLayout *)pFVar13;
        pFVar12 = ppFVar32[10];
        pFVar13 = ppFVar32[0xb];
        (pFVar29->ParameterStruct).Metadata = (FShaderParametersMetadata *)pFVar11;
        *(FProjectedShadowInfo **)&pFVar29->Flags = pFVar14;
        pFVar11 = ppFVar32[0xc];
        pFVar14 = ppFVar32[0xd];
        *(FProjectedShadowInfo **)&pFVar29->Workload = pFVar12;
        *(FProjectedShadowInfo **)&pFVar29->CrossPipelineProducer = pFVar13;
        pFVar12 = ppFVar32[0xe];
        pFVar13 = ppFVar32[0xf];
        *(FProjectedShadowInfo **)&pFVar29->GraphicsJoinPass = pFVar11;
        *(FProjectedShadowInfo **)&pFVar29->EpilogueBarrierPass = pFVar14;
        (pFVar29->CrossPipelineConsumers).AllocatorInstance.Data =
             (TRDGHandle<FRDGPass,unsigned_int> *)pFVar12;
        *(FProjectedShadowInfo **)&(pFVar29->CrossPipelineConsumers).ArrayNum = pFVar13;
        lVar34 = lVar34 + -1;
        pFVar15 = (FRDGPass *)&pFVar29->Producers;
        ppFVar16 = ppFVar32 + 0x10;
      } while (lVar34 != 0);
      pFVar11 = ppFVar32[0x10];
      pFVar12 = ppFVar32[0x11];
      pFVar28[1].EpilogueBarriersToBeginForGraphics = pFVar2;
      pFVar13 = ppFVar32[0x12];
      pFVar14 = ppFVar32[0x13];
      (pFVar29->Producers).AllocatorInstance.Data = (FRDGPass **)pFVar11;
      *(FProjectedShadowInfo **)&(pFVar29->Producers).ArrayNum = pFVar12;
      (pFVar29->TextureStates).AllocatorInstance.Data = (FTextureState *)pFVar13;
      *(FProjectedShadowInfo **)&(pFVar29->TextureStates).ArrayNum = pFVar14;
      FRDGBuilder::ClobberPassOutputs(param_1,pFVar28);
      iVar19 = (param_1->Passes).Array.ArrayNum;
      piVar1 = &(param_1->Passes).Array.ArrayMax;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
      }
      (param_1->Passes).Array.ArrayNum = iVar19 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar19] = pFVar28;
      (pFVar28->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,pFVar28);
      local_3f0.FormattedEventName.Data.AllocatorInstance.Data =
           local_3c0.FormattedEventName.Data.AllocatorInstance.Data;
    }
    if (local_3f0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_3f0.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FindViewForShadow @ 1455980f0

/* WARNING: Type propagation algorithm not settling */
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

FViewInfo * __thiscall
FProjectedShadowInfo::FindViewForShadow(FProjectedShadowInfo *this,FSceneRenderer *param_1)

{
  FVisibleLightViewInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FViewInfo *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < *(int *)&param_1->field_0x18) {
    do {
      uVar8 = (uint)uVar9;
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&param_1->field_0x18) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FViewInfo *)(*pcVar2)();
        return pFVar7;
      }
      pFVar7 = (FViewInfo *)(uVar10 + *(longlong *)&param_1->field_0x10);
      uVar4 = this->LightSceneInfo->Id;
      uVar5 = 0;
      if ((int)uVar4 < (pFVar7->VisibleLightInfos).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FViewInfo *)(*pcVar2)();
        return pFVar7;
      }
      uVar5 = this->ShadowId;
      pFVar1 = (pFVar7->VisibleLightInfos).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar5 < pFVar1[(int)uVar4].ProjectedShadowViewRelevanceMap.ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FViewInfo *)(*pcVar2)();
        return pFVar7;
      }
      if (pFVar1[(int)uVar4].ProjectedShadowViewRelevanceMap.AllocatorInstance.Data[(int)uVar5].
          bShadowRelevance != 0) {
        if (pFVar7 != (FViewInfo *)0x0) {
          return pFVar7;
        }
        break;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 0x2970;
    } while ((int)(uVar8 + 1) < *(int *)&param_1->field_0x18);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("FoundView",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                     ,0x4e4,L"");
  if (!bVar3) {
    return (FViewInfo *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar7 = (FViewInfo *)(*pcVar2)();
  return pFVar7;
}

// GetBlendStateForProjection @ 145598460

/* WARNING: Type propagation algorithm not settling */
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

FRHIBlendState * __thiscall
FProjectedShadowInfo::GetBlendStateForProjection
          (FProjectedShadowInfo *this,bool param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIBlendState> TVar3;
  TRefCountPtr<FRHIBlendState> TVar4;
  TRefCountPtr<FRHIBlendState> TVar5;
  bool bVar6;
  int iVar7;
  FRHIBlendState *pFVar8;
  TRefCountPtr<FRHIBlendState> TVar9;
  
  if (((this->CascadeSettings).FadePlaneLength <= 0.0) || (this->bRayTracedDistanceField != 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((((char)(this->bWholeSceneShadow << 7) < '\0') &&
      (-1 < (this->CascadeSettings).ShadowSplitIndex)) && (this->bDirectionalLight != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar7 = FLightSceneInfo::GetDynamicShadowMapChannel(this->LightSceneInfo);
  if (param_1) {
    TVar9 = TStaticStateRHI<TStaticBlendState<1,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
            ::StaticResource.StateRHI;
    TVar3 = TStaticStateRHI<TStaticBlendState<2,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
            ::StaticResource.StateRHI;
    TVar4 = TStaticStateRHI<TStaticBlendState<4,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
            ::StaticResource.StateRHI;
    TVar5 = TStaticStateRHI<TStaticBlendState<8,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
            ::StaticResource.StateRHI;
    if (bVar6) {
      TVar9 = TStaticStateRHI<TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource.StateRHI;
      TVar3 = TStaticStateRHI<TStaticBlendState<2,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource.StateRHI;
      TVar4 = TStaticStateRHI<TStaticBlendState<4,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource.StateRHI;
      TVar5 = TStaticStateRHI<TStaticBlendState<8,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource.StateRHI;
    }
    if ((((iVar7 == 0) || (TVar9.Reference = TVar3.Reference, iVar7 == 1)) ||
        ((TVar9.Reference = TVar4.Reference, iVar7 == 2 ||
         (TVar9.Reference = TVar5.Reference, iVar7 == 3)))) &&
       (TVar9.Reference != (FRHIBlendState *)0x0)) {
      return TVar9.Reference;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                       ,0x2f4,
                       L"Only shadows whose stationary lights have a valid ShadowMapChannel can be projected with forward shading"
                      );
    if (!bVar6) {
      return (FRHIBlendState *)0x0;
    }
    pcVar1 = (code *)swi(3);
    pFVar8 = (FRHIBlendState *)(*pcVar1)();
    return pFVar8;
  }
  if (!bVar2) {
    if (!param_2) {
      return TStaticStateRHI<TStaticBlendState<12,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI.Reference;
    }
    return TStaticStateRHI<TStaticBlendState<7,0,0,2,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  }
  if (!bVar6) {
    return TStaticStateRHI<TStaticBlendState<3,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
  }
  return TStaticStateRHI<TStaticBlendState<3,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
}

// GetBlendStateForProjection @ 1455985d0

/* WARNING: Type propagation algorithm not settling */

FRHIBlendState * __cdecl
FProjectedShadowInfo::GetBlendStateForProjection
          (int param_1,bool param_2,bool param_3,bool param_4,bool param_5)

{
  code *pcVar1;
  TRefCountPtr<FRHIBlendState> TVar2;
  TRefCountPtr<FRHIBlendState> TVar3;
  TRefCountPtr<FRHIBlendState> TVar4;
  bool bVar5;
  FRHIBlendState *pFVar6;
  TRefCountPtr<FRHIBlendState> TVar7;
  
  if (!param_4) {
    if (param_2) {
      TVar7.Reference =
           TStaticStateRHI<TStaticBlendState<3,2,1,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      if (param_3) {
        TVar7.Reference =
             TStaticStateRHI<TStaticBlendState<3,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI.Reference;
      }
      return TVar7.Reference;
    }
    TVar7.Reference =
         TStaticStateRHI<TStaticBlendState<12,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    if (param_5) {
      TVar7.Reference =
           TStaticStateRHI<TStaticBlendState<7,0,0,2,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
    }
    return TVar7.Reference;
  }
  TVar7.Reference =
       TStaticStateRHI<TStaticBlendState<1,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  TVar2.Reference =
       TStaticStateRHI<TStaticBlendState<2,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  TVar3.Reference =
       TStaticStateRHI<TStaticBlendState<4,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  TVar4.Reference =
       TStaticStateRHI<TStaticBlendState<8,2,1,1,2,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (param_3) {
    TVar7.Reference =
         TStaticStateRHI<TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    TVar2.Reference =
         TStaticStateRHI<TStaticBlendState<2,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    TVar3.Reference =
         TStaticStateRHI<TStaticBlendState<4,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    TVar4.Reference =
         TStaticStateRHI<TStaticBlendState<8,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
  }
  if (((((param_1 == 0) || (TVar7.Reference = TVar2.Reference, param_1 == 1)) ||
       (TVar7.Reference = TVar3.Reference, param_1 == 2)) ||
      (TVar7.Reference = TVar4.Reference, param_1 == 3)) &&
     (TVar7.Reference != (FRHIBlendState *)0x0)) {
    return TVar7.Reference;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("BlendState",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                     ,0x2f4,
                     L"Only shadows whose stationary lights have a valid ShadowMapChannel can be projected with forward shading"
                    );
  if (!bVar5) {
    return (FRHIBlendState *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar6 = (FRHIBlendState *)(*pcVar1)();
  return pFVar6;
}

// GetClipToShadowBufferUvScaleBias @ 1455986d0

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

TVector4<float> * __thiscall
FProjectedShadowInfo::GetClipToShadowBufferUvScaleBias
          (FProjectedShadowInfo *this,TVector4<float> *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_res8;
  int local_resc;
  
  GetShadowBufferResolution(this);
  uVar1 = this->BorderSize;
  fVar7 = __real_3f800000 / (float)local_res8;
  uVar2 = this->X;
  fVar8 = __real_3f800000 / (float)local_resc;
  fVar5 = (float)this->ResolutionX * __real_3f000000 * fVar7;
  fVar4 = (float)this->ResolutionY * __real_bf000000;
  fVar6 = (float)this->ResolutionY * __real_3f000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4 * fVar8;
  uVar3 = this->Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(uVar2 + uVar1) * fVar7 + fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.W = ((float)(uVar3 + uVar1) + fVar6) * fVar8;
  return __return_storage_ptr__;
}

// GetLODDistanceFactor @ 145599b00

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

float __thiscall FProjectedShadowInfo::GetLODDistanceFactor(FProjectedShadowInfo *this)

{
  if ((this->CascadeSettings).bFarShadowCascade != false) {
    return GFarShadowLODDistanceFactor;
  }
  return (float)(this->CascadeSettings).ShadowSplitIndex * GShadowLODDistanceFactorCascadeScale +
         GShadowLODDistanceFactor;
}

// GetScreenToShadowMatrix @ 14559e3b0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TMatrix<double> * __thiscall
FProjectedShadowInfo::GetScreenToShadowMatrix
          (FProjectedShadowInfo *this,TMatrix<double> *__return_storage_ptr__,FSceneView *param_1,
          uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_3b8 [32];
  int local_398;
  int local_394;
  TMatrix<double> local_388;
  TMatrix<double> local_308;
  TMatrix<double> local_288;
  TMatrix<double> local_208;
  TMatrix<double> local_188;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  GetShadowBufferResolution(this);
  fVar4 = __real_3f800000 / (float)local_398;
  fVar5 = __real_3f800000 / (float)local_394;
  fVar3 = (float)param_4 * __real_3f000000 * fVar4;
  VectorMatrixMultiply
            (&local_308,&(param_1->ViewMatrices).ScreenToClipMatrix,
             &(param_1->ViewMatrices).InvTranslatedViewProjectionMatrix);
  dVar2 = __real_3ff0000000000000;
  local_388.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_388.M[1][1] = _UNK_15061cbc8;
  local_388.M[0][2] = 0.0;
  local_388.M[0][3] = 0.0;
  local_388.M[1][2] = 0.0;
  local_388.M[1][3] = 0.0;
  local_388.M[2][0] = 0.0;
  local_388.M[2][1] = 0.0;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 + 0x10);
  local_388.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_388.M[0][1] = _UNK_150689518;
  local_388.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_388.M[2][3] = _UNK_150689518;
  local_388.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  local_388.M[3][3] = __real_3ff0000000000000;
  local_388.M[3][0] =
       (double)CONCAT44(*(uint *)((longlong)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 +
                                 4) ^ __xmm_80000000000000008000000000000000._4_4_,
                        *(uint *)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 ^
                        (uint)__xmm_80000000000000008000000000000000);
  local_388.M[3][1] =
       (double)CONCAT44(*(uint *)((longlong)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 +
                                 0xc) ^ _UNK_15066df7c,
                        *(uint *)((longlong)&(param_1->ViewMatrices).PreViewTranslation.field0_0x0 +
                                 8) ^ _UNK_15066df78);
  VectorMatrixMultiply(&local_108,&local_308,&local_388);
  local_288.M[0][2] = 0.0;
  local_288.M[0][3] = 0.0;
  local_288.M[1][2] = 0.0;
  local_288.M[1][3] = 0.0;
  local_288.M[3][0] = (this->PreShadowTranslation).field0_0x0._s_0.X;
  local_288.M[3][1] = (this->PreShadowTranslation).field0_0x0._s_0.Y;
  local_288.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_288.M[1][1] = _UNK_15061cbc8;
  local_288.M[3][2] = (this->PreShadowTranslation).field0_0x0._s_0.Z;
  local_288.M[2][0] = 0.0;
  local_288.M[2][1] = 0.0;
  local_308.M[0][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][0];
  local_308.M[0][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][1];
  local_308.M[0][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][2];
  local_308.M[0][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][3];
  local_288.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_288.M[0][1] = _UNK_150689518;
  local_288.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_288.M[2][3] = _UNK_150689518;
  local_308.M[1][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][0];
  local_308.M[1][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][1];
  local_308.M[1][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][2];
  local_308.M[1][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][3];
  local_308.M[2][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][0];
  local_308.M[2][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][1];
  local_288.M[3][3] = dVar2;
  local_308.M[2][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][2];
  local_308.M[2][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][3];
  local_308.M[3][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][0];
  local_308.M[3][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][1];
  local_308.M[3][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][2];
  local_308.M[3][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][3];
  VectorMatrixMultiply(&local_188,&local_288,&local_308);
  local_388.M[0][0] = (double)fVar3;
  local_388.M[0][1] = 0.0;
  local_388.M[0][2] = 0.0;
  local_388.M[0][3] = 0.0;
  local_388.M[1][1] = (double)((float)param_5 * __real_bf000000 * fVar5);
  local_388.M[1][0] = 0.0;
  local_388.M[2][0] = 0.0;
  local_388.M[2][1] = 0.0;
  local_388.M[1][2] = 0.0;
  local_388.M[1][3] = 0.0;
  local_388.M[2][2] = (double)this->InvMaxSubjectDepth;
  local_388.M[2][3] = 0.0;
  local_388.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_388.M[3][3] = _UNK_15061cbc8;
  local_388.M[3][0] = (double)((float)(this->BorderSize + param_2) * fVar4 + fVar3);
  local_388.M[3][1] =
       (double)(((float)(param_3 + this->BorderSize) + (float)param_5 * __real_3f000000) * fVar5);
  VectorMatrixMultiply(&local_208,&local_188,&local_388);
  if ((param_1->bIsMobileMultiViewEnabled != false) || ((param_1->Aspects).bMobileMultiViewEnabled))
  {
    __return_storage_ptr__->M[0][0] = local_208.M[0][0];
    __return_storage_ptr__->M[0][1] = local_208.M[0][1];
    __return_storage_ptr__->M[0][2] = local_208.M[0][2];
    __return_storage_ptr__->M[0][3] = local_208.M[0][3];
    __return_storage_ptr__->M[1][0] = local_208.M[1][0];
    __return_storage_ptr__->M[1][1] = local_208.M[1][1];
    __return_storage_ptr__->M[1][2] = local_208.M[1][2];
    __return_storage_ptr__->M[1][3] = local_208.M[1][3];
    __return_storage_ptr__->M[2][0] = local_208.M[2][0];
    __return_storage_ptr__->M[2][1] = local_208.M[2][1];
    __return_storage_ptr__->M[2][2] = local_208.M[2][2];
    __return_storage_ptr__->M[2][3] = local_208.M[2][3];
    local_308.M[3][0] = local_208.M[3][0];
    local_308.M[3][1] = local_208.M[3][1];
    local_308.M[3][2] = local_208.M[3][2];
    local_308.M[3][3] = local_208.M[3][3];
  }
  else {
    VectorMatrixMultiply(&local_308,&local_108,&local_208);
    __return_storage_ptr__->M[0][0] = local_308.M[0][0];
    __return_storage_ptr__->M[0][1] = local_308.M[0][1];
    __return_storage_ptr__->M[0][2] = local_308.M[0][2];
    __return_storage_ptr__->M[0][3] = local_308.M[0][3];
    __return_storage_ptr__->M[1][0] = local_308.M[1][0];
    __return_storage_ptr__->M[1][1] = local_308.M[1][1];
    __return_storage_ptr__->M[1][2] = local_308.M[1][2];
    __return_storage_ptr__->M[1][3] = local_308.M[1][3];
    __return_storage_ptr__->M[2][0] = local_308.M[2][0];
    __return_storage_ptr__->M[2][1] = local_308.M[2][1];
    __return_storage_ptr__->M[2][2] = local_308.M[2][2];
    __return_storage_ptr__->M[2][3] = local_308.M[2][3];
  }
  __return_storage_ptr__->M[3][0] = local_308.M[3][0];
  __return_storage_ptr__->M[3][1] = local_308.M[3][1];
  __return_storage_ptr__->M[3][2] = local_308.M[3][2];
  __return_storage_ptr__->M[3][3] = local_308.M[3][3];
  return __return_storage_ptr__;
}

// GetShaderReceiverDepthBias @ 14559eff0

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

float __thiscall FProjectedShadowInfo::GetShaderReceiverDepthBias(FProjectedShadowInfo *this)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  TConsoleVariableData<float> *pTVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = __real_3f800000;
  uVar1 = this->LightSceneInfo->Proxy->LightType;
  pTVar4 = CVarCSMShadowReceiverBias.Ref;
  if (uVar1 != '\0') {
    if (uVar1 == '\x01') {
      fVar6 = this->ShaderSlopeDepthBias;
      goto LAB_14559f08e;
    }
    pTVar4 = CVarSpotLightShadowReceiverBias.Ref;
    if ((uVar1 != '\x02') &&
       (pTVar4 = CVarRectLightShadowReceiverBias.Ref, fVar6 = __real_3f800000, uVar1 != '\x03'))
    goto LAB_14559f08e;
  }
  bVar3 = IsInParallelRenderingThread();
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar5 = (float)(*pcVar2)();
    return fVar5;
  }
  fVar6 = pTVar4->ShadowedValue[1];
LAB_14559f08e:
  if (fVar5 <= fVar6) {
    fVar6 = fVar5;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return fVar5 - fVar6;
}

// GetShadowBufferResolution @ 14559f0c0

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

TIntPoint<int> __thiscall
FProjectedShadowInfo::GetShadowBufferResolution(FProjectedShadowInfo *this)

{
  code *pcVar1;
  bool bVar2;
  TIntPoint<int> TVar3;
  longlong lVar4;
  IPooledRenderTarget *pIVar5;
  TIntPoint<int>_u_0 in_RDX;
  
  if ((this->VirtualShadowMapPerLightCacheEntry).Object !=
      (FVirtualShadowMapPerLightCacheEntry *)0x0) {
    *(undefined4 *)in_RDX = 0x4000;
    *(undefined4 *)((longlong)in_RDX + 4) = 0x4000;
    return (TIntPoint<int>)in_RDX;
  }
  pIVar5 = (this->RenderTargets).DepthTarget;
  if (pIVar5 == (IPooledRenderTarget *)0x0) {
    if ((this->RenderTargets).ColorTargets.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColorTargets.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.h"
                         ,0xe3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
        return (TIntPoint<int>)TVar3.field0_0x0;
      }
    }
    if ((this->RenderTargets).ColorTargets.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
        return (TIntPoint<int>)TVar3.field0_0x0;
      }
    }
    pIVar5 = *(this->RenderTargets).ColorTargets.AllocatorInstance.Data;
  }
  lVar4 = (**(code **)(pIVar5->_padding_ + 0x10))();
  *(undefined8 *)in_RDX = *(undefined8 *)(lVar4 + 0x2c);
  return (TIntPoint<int>)in_RDX;
}

// GetShadowDepthRenderingViewMatrices @ 14559f460

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FViewMatrices * __thiscall
FProjectedShadowInfo::GetShadowDepthRenderingViewMatrices
          (FProjectedShadowInfo *this,FViewMatrices *__return_storage_ptr__,int param_1,bool param_2
          )

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FViewMatrices *pFVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStackY_2e8 [32];
  FMinimalInitializer local_2a8;
  TMatrix<double> local_158;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_2a8.ViewRotationMatrix.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_2a8.ViewRotationMatrix.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_2a8.ProjectionMatrix.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_2a8.ProjectionMatrix.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_2a8.ConstrainedViewRect.field0_0x0._0_4_ = this->X;
  local_2a8.ConstrainedViewRect.field0_0x0._4_4_ = this->Y;
  local_2a8.CameraToViewTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_2a8.CameraToViewTarget.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_2a8.ViewRotationMatrix.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_2a8.ViewRotationMatrix.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_2a8.ProjectionMatrix.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_2a8.ProjectionMatrix.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  uVar1 = *(undefined8 *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0x10);
  local_2a8.CameraToViewTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  iVar2 = this->BorderSize * 2;
  local_2a8.ViewRotationMatrix.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_2a8.ViewRotationMatrix.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_2a8.ProjectionMatrix.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_2a8.ProjectionMatrix.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_2a8.ViewOrigin.field0_0x0._0_4_ =
       *(uint *)&(this->PreShadowTranslation).field0_0x0 ^
       (uint)__xmm_80000000000000008000000000000000;
  local_2a8.ViewOrigin.field0_0x0._4_4_ =
       *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 4) ^
       __xmm_80000000000000008000000000000000._4_4_;
  local_2a8.ViewOrigin.field0_0x0._8_4_ =
       *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 8) ^ _UNK_15066df78;
  local_2a8.ViewOrigin.field0_0x0._12_4_ =
       *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0xc) ^ _UNK_15066df7c;
  local_2a8.ViewOrigin.field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  local_2a8.ViewRotationMatrix.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_2a8.ViewRotationMatrix.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_2a8.ConstrainedViewRect.field0_0x0._12_4_ = this->ResolutionY + iVar2 + this->Y;
  local_2a8.ConstrainedViewRect.field0_0x0._8_4_ = this->ResolutionX + iVar2 + this->X;
  local_2a8.ViewRotationMatrix.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_2a8.ViewRotationMatrix.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_2a8.ViewRotationMatrix.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_2a8.ViewRotationMatrix.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_2a8.ViewRotationMatrix.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_2a8.ViewRotationMatrix.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_2a8.ViewRotationMatrix.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_2a8.ViewRotationMatrix.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_2a8.ProjectionMatrix.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_2a8.ProjectionMatrix.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_2a8.ProjectionMatrix.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_2a8.ProjectionMatrix.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_2a8.ProjectionMatrix.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_2a8.ProjectionMatrix.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_2a8.ProjectionMatrix.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_2a8.ProjectionMatrix.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_2a8.ProjectionMatrix.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_2a8.ProjectionMatrix.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_2a8.StereoPass = eSSP_FULL;
  local_2a8.FirstPersonParams.FOVCorrectionFactor = 1.0;
  local_2a8.FirstPersonParams.Scale = 1.0;
  local_2a8.FirstPersonParams.bUseParameters = false;
  local_2a8.FirstPersonParams._9_3_ = 0;
  if (this->bOnePassPointLightShadow != 0) {
    if (5 < (uint)param_1) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3477770809257227747>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                         ,0xa1d,
                         "!bOnePassPointLightShadow || CubeFaceIndex >= 0 && CubeFaceIndex < 6");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FViewMatrices *)(*pcVar4)();
        return pFVar7;
      }
    }
    if ((this->bOnePassPointLightShadow != 0) && ((uint)param_1 < 6)) {
      iVar2 = (this->OnePassShadowViewMatrices).ArrayNum;
      if (param_2) {
        uVar6 = 0;
        if (param_1 < iVar2) {
          uVar6 = (uint)~param_1 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FViewMatrices *)(*pcVar4)();
            return pFVar7;
          }
        }
        local_158.M[0][0] = ___xmm_00000000000000003ff0000000000000;
        local_158.M[0][1] = _UNK_150689518;
        local_158.M[1][0] = ___xmm_3ff00000000000000000000000000000;
        local_158.M[1][1] = _UNK_15061cbc8;
        local_158.M[0][2] = 0.0;
        local_158.M[0][3] = 0.0;
        local_158.M[1][2] = 0.0;
        local_158.M[1][3] = 0.0;
        local_158.M[2][2] = ___xmm_0000000000000000bff0000000000000;
        local_158.M[2][3] = _UNK_15076ad98;
        local_158.M[3][0] = 0.0;
        local_158.M[3][1] = 0.0;
        local_158.M[2][0] = 0.0;
        local_158.M[2][1] = 0.0;
        local_158.M[3][2] = ___xmm_3ff00000000000000000000000000000;
        local_158.M[3][3] = _UNK_15061cbc8;
        VectorMatrixMultiply
                  (&local_d8,
                   (TMatrix<double> *)
                   ((this->OnePassShadowViewMatrices).AllocatorInstance.Data +
                   (longlong)param_1 * 0x80),&local_158);
        local_2a8.ViewRotationMatrix.M[0][0] = local_d8.M[0][0];
        local_2a8.ViewRotationMatrix.M[0][1] = local_d8.M[0][1];
        local_2a8.ViewRotationMatrix.M[0][2] = local_d8.M[0][2];
        local_2a8.ViewRotationMatrix.M[0][3] = local_d8.M[0][3];
        local_2a8.ViewRotationMatrix.M[1][0] = local_d8.M[1][0];
        local_2a8.ViewRotationMatrix.M[1][1] = local_d8.M[1][1];
        local_2a8.ViewRotationMatrix.M[1][2] = local_d8.M[1][2];
        local_2a8.ViewRotationMatrix.M[1][3] = local_d8.M[1][3];
        local_2a8.ViewRotationMatrix.M[2][0] = local_d8.M[2][0];
        local_2a8.ViewRotationMatrix.M[2][1] = local_d8.M[2][1];
        local_2a8.ViewRotationMatrix.M[2][2] = local_d8.M[2][2];
        local_2a8.ViewRotationMatrix.M[2][3] = local_d8.M[2][3];
        local_2a8.ViewRotationMatrix.M[3][0] = local_d8.M[3][0];
        local_2a8.ViewRotationMatrix.M[3][1] = local_d8.M[3][1];
      }
      else {
        uVar6 = 0;
        if (param_1 < iVar2) {
          uVar6 = (uint)~param_1 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FViewMatrices *)(*pcVar4)();
            return pFVar7;
          }
        }
        pFVar3 = (this->OnePassShadowViewMatrices).AllocatorInstance.Data;
        lVar8 = (longlong)param_1 * 0x80;
        local_2a8.ViewRotationMatrix.M[0][0] = *(double *)(pFVar3 + lVar8);
        local_2a8.ViewRotationMatrix.M[0][1] = *(double *)(pFVar3 + lVar8 + 8);
        local_2a8.ViewRotationMatrix.M[0][2] = *(double *)(pFVar3 + lVar8 + 0x10);
        local_2a8.ViewRotationMatrix.M[0][3] = *(double *)(pFVar3 + lVar8 + 0x10 + 8);
        local_2a8.ViewRotationMatrix.M[1][0] = *(double *)(pFVar3 + lVar8 + 0x20);
        local_2a8.ViewRotationMatrix.M[1][1] = *(double *)(pFVar3 + lVar8 + 0x20 + 8);
        local_2a8.ViewRotationMatrix.M[1][2] = *(double *)(pFVar3 + lVar8 + 0x30);
        local_2a8.ViewRotationMatrix.M[1][3] = *(double *)(pFVar3 + lVar8 + 0x30 + 8);
        local_2a8.ViewRotationMatrix.M[2][0] = *(double *)(pFVar3 + lVar8 + 0x40);
        local_2a8.ViewRotationMatrix.M[2][1] = *(double *)(pFVar3 + lVar8 + 0x40 + 8);
        local_2a8.ViewRotationMatrix.M[2][2] = *(double *)(pFVar3 + lVar8 + 0x50);
        local_2a8.ViewRotationMatrix.M[2][3] = *(double *)(pFVar3 + lVar8 + 0x50 + 8);
        local_2a8.ViewRotationMatrix.M[3][0] = *(double *)(pFVar3 + lVar8 + 0x60);
        local_2a8.ViewRotationMatrix.M[3][1] = *(double *)(pFVar3 + lVar8 + 0x60 + 8);
        pFVar3 = pFVar3 + lVar8 + 0x70;
        local_d8.M[3][2]._0_4_ = *(undefined4 *)pFVar3;
        local_d8.M[3][2]._4_4_ = *(undefined4 *)(pFVar3 + 4);
        local_d8.M[3][3]._0_4_ = *(undefined4 *)(pFVar3 + 8);
        local_d8.M[3][3]._4_4_ = *(undefined4 *)(pFVar3 + 0xc);
      }
      local_2a8.ProjectionMatrix.M[0][0] = (this->OnePassShadowFaceProjectionMatrix).M[0][0];
      local_2a8.ProjectionMatrix.M[0][1] = (this->OnePassShadowFaceProjectionMatrix).M[0][1];
      local_2a8.ViewRotationMatrix.M[3][2] =
           (double)CONCAT44(local_d8.M[3][2]._4_4_,local_d8.M[3][2]._0_4_);
      local_2a8.ViewRotationMatrix.M[3][3] =
           (double)CONCAT44(local_d8.M[3][3]._4_4_,local_d8.M[3][3]._0_4_);
      local_2a8.ProjectionMatrix.M[0][2] = (this->OnePassShadowFaceProjectionMatrix).M[0][2];
      local_2a8.ProjectionMatrix.M[0][3] = (this->OnePassShadowFaceProjectionMatrix).M[0][3];
      local_2a8.ProjectionMatrix.M[1][0] = (this->OnePassShadowFaceProjectionMatrix).M[1][0];
      local_2a8.ProjectionMatrix.M[1][1] = (this->OnePassShadowFaceProjectionMatrix).M[1][1];
      local_2a8.ProjectionMatrix.M[1][2] = (this->OnePassShadowFaceProjectionMatrix).M[1][2];
      local_2a8.ProjectionMatrix.M[1][3] = (this->OnePassShadowFaceProjectionMatrix).M[1][3];
      local_2a8.ProjectionMatrix.M[2][0] = (this->OnePassShadowFaceProjectionMatrix).M[2][0];
      local_2a8.ProjectionMatrix.M[2][1] = (this->OnePassShadowFaceProjectionMatrix).M[2][1];
      local_2a8.ProjectionMatrix.M[2][2] = (this->OnePassShadowFaceProjectionMatrix).M[2][2];
      local_2a8.ProjectionMatrix.M[2][3] = (this->OnePassShadowFaceProjectionMatrix).M[2][3];
      local_2a8.ProjectionMatrix.M[3][0] = (this->OnePassShadowFaceProjectionMatrix).M[3][0];
      local_2a8.ProjectionMatrix.M[3][1] = (this->OnePassShadowFaceProjectionMatrix).M[3][1];
      uVar9 = *(undefined4 *)((this->OnePassShadowFaceProjectionMatrix).M[3] + 2);
      uVar10 = *(undefined4 *)((longlong)(this->OnePassShadowFaceProjectionMatrix).M[3] + 0x14);
      uVar11 = *(undefined4 *)((this->OnePassShadowFaceProjectionMatrix).M[3] + 3);
      uVar12 = *(undefined4 *)((longlong)(this->OnePassShadowFaceProjectionMatrix).M[3] + 0x1c);
      goto LAB_14559f8ce;
    }
  }
  local_2a8.ViewRotationMatrix.M[0][0] = (this->TranslatedWorldToView).M[0][0];
  local_2a8.ViewRotationMatrix.M[0][1] = (this->TranslatedWorldToView).M[0][1];
  local_2a8.ViewRotationMatrix.M[0][2] = (this->TranslatedWorldToView).M[0][2];
  local_2a8.ViewRotationMatrix.M[0][3] = (this->TranslatedWorldToView).M[0][3];
  local_2a8.ViewRotationMatrix.M[1][0] = (this->TranslatedWorldToView).M[1][0];
  local_2a8.ViewRotationMatrix.M[1][1] = (this->TranslatedWorldToView).M[1][1];
  local_2a8.ViewRotationMatrix.M[1][2] = (this->TranslatedWorldToView).M[1][2];
  local_2a8.ViewRotationMatrix.M[1][3] = (this->TranslatedWorldToView).M[1][3];
  local_2a8.ViewRotationMatrix.M[2][0] = (this->TranslatedWorldToView).M[2][0];
  local_2a8.ViewRotationMatrix.M[2][1] = (this->TranslatedWorldToView).M[2][1];
  local_2a8.ViewRotationMatrix.M[2][2] = (this->TranslatedWorldToView).M[2][2];
  local_2a8.ViewRotationMatrix.M[2][3] = (this->TranslatedWorldToView).M[2][3];
  local_2a8.ViewRotationMatrix.M[3][0] = (this->TranslatedWorldToView).M[3][0];
  local_2a8.ViewRotationMatrix.M[3][1] = (this->TranslatedWorldToView).M[3][1];
  local_2a8.ViewRotationMatrix.M[3][2] = (this->TranslatedWorldToView).M[3][2];
  local_2a8.ViewRotationMatrix.M[3][3] = (this->TranslatedWorldToView).M[3][3];
  local_2a8.ProjectionMatrix.M[0][0] = (this->ViewToClipOuter).M[0][0];
  local_2a8.ProjectionMatrix.M[0][1] = (this->ViewToClipOuter).M[0][1];
  local_2a8.ProjectionMatrix.M[0][2] = (this->ViewToClipOuter).M[0][2];
  local_2a8.ProjectionMatrix.M[0][3] = (this->ViewToClipOuter).M[0][3];
  local_2a8.ProjectionMatrix.M[1][0] = (this->ViewToClipOuter).M[1][0];
  local_2a8.ProjectionMatrix.M[1][1] = (this->ViewToClipOuter).M[1][1];
  local_2a8.ProjectionMatrix.M[1][2] = (this->ViewToClipOuter).M[1][2];
  local_2a8.ProjectionMatrix.M[1][3] = (this->ViewToClipOuter).M[1][3];
  local_2a8.ProjectionMatrix.M[2][0] = (this->ViewToClipOuter).M[2][0];
  local_2a8.ProjectionMatrix.M[2][1] = (this->ViewToClipOuter).M[2][1];
  local_2a8.ProjectionMatrix.M[2][2] = (this->ViewToClipOuter).M[2][2];
  local_2a8.ProjectionMatrix.M[2][3] = (this->ViewToClipOuter).M[2][3];
  local_2a8.ProjectionMatrix.M[3][0] = (this->ViewToClipOuter).M[3][0];
  local_2a8.ProjectionMatrix.M[3][1] = (this->ViewToClipOuter).M[3][1];
  uVar9 = *(undefined4 *)((this->ViewToClipOuter).M[3] + 2);
  uVar10 = *(undefined4 *)((longlong)(this->ViewToClipOuter).M[3] + 0x14);
  uVar11 = *(undefined4 *)((this->ViewToClipOuter).M[3] + 3);
  uVar12 = *(undefined4 *)((longlong)(this->ViewToClipOuter).M[3] + 0x1c);
LAB_14559f8ce:
  local_2a8.ProjectionMatrix.M[3][2] = (double)CONCAT44(uVar10,uVar9);
  local_2a8.ProjectionMatrix.M[3][3] = (double)CONCAT44(uVar12,uVar11);
  FViewMatrices::FViewMatrices(__return_storage_ptr__,&local_2a8);
  return __return_storage_ptr__;
}

// GetShadowTypeNameForDrawEvent @ 14559fae0

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
FProjectedShadowInfo::GetShadowTypeNameForDrawEvent(FProjectedShadowInfo *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  FName FVar5;
  FName FVar6;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  local_res8 = FVar5;
  if (this->ParentSceneInfo != (FPrimitiveSceneInfo *)0x0) {
    local_res8 = this->ParentSceneInfo->Proxy->OwnerName;
  }
  if ((char)(this->bWholeSceneShadow << 7) < '\0') {
    iVar1 = (this->CascadeSettings).ShadowSplitIndex;
    if (iVar1 < 0) {
      if (this->CacheMode == SDCM_MovablePrimitivesOnly) {
        pFVar3 = ::FString::FString(&local_18,L"WholeScene MovablePrimitives");
        ::FString::operator=(param_1,pFVar3);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
      else if (this->CacheMode == SDCM_StaticPrimitivesOnly) {
        pFVar3 = ::FString::FString(&local_18,L"WholeScene StaticPrimitives");
        ::FString::operator=(param_1,pFVar3);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
      else {
        pFVar3 = ::FString::FString(&local_18,L"WholeScene");
        ::FString::operator=(param_1,pFVar3);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_28,iVar1);
      pFVar3 = ::FString::FString(&local_18,L"WholeScene split");
      ::FString::ConcatFF(&local_58,pFVar3,&local_28);
      if (param_1 != &local_58) {
        pFVar2 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        (param_1->Data).ArrayNum = local_58.Data.ArrayNum;
        (param_1->Data).ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    if (this->bPreShadow == 0) {
      pFVar3 = ::FName::ToString(&local_res8,&local_28);
      pFVar4 = ::FString::FString(&local_18,L"PerObject ");
      ::FString::ConcatFF(&local_38,pFVar4,pFVar3);
      FVar6 = (FName)local_38.Data.AllocatorInstance;
      if (param_1 != &local_38) {
        pFVar2 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
        (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar6 = FVar5;
      }
    }
    else {
      pFVar3 = ::FName::ToString(&local_res8,&local_28);
      pFVar4 = ::FString::FString(&local_18,L"PreShadow ");
      ::FString::ConcatFF(&local_48,pFVar4,pFVar3);
      FVar6 = (FName)local_48.Data.AllocatorInstance;
      if (param_1 != &local_48) {
        pFVar2 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        (param_1->Data).ArrayNum = local_48.Data.ArrayNum;
        (param_1->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar6 = FVar5;
      }
    }
    if (FVar6 != (FName)0x0) {
      FMemory::Free((void *)FVar6);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetWorldToShadowMatrix @ 1455b16f0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TMatrix<double> * __thiscall
FProjectedShadowInfo::GetWorldToShadowMatrix
          (FProjectedShadowInfo *this,TMatrix<double> *__return_storage_ptr__,
          TVector4<float> *param_1,TIntPoint<int> *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_298 [48];
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_298;
  if (param_2 == (TIntPoint<int> *)0x0) {
    param_2 = (TIntPoint<int> *)GetShadowBufferResolution(this);
  }
  local_1e8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_1e8.M[1][1] = _UNK_15061cbc8;
  local_1e8.M[2][0] = 0.0;
  local_1e8.M[2][1] = 0.0;
  local_1e8.M[3][3] = __real_3ff0000000000000;
  local_1e8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_1e8.M[0][1] = _UNK_150689518;
  fVar7 = __real_3f800000 / (float)SUB84((TIntPoint<int>_u_0)*param_2,0);
  local_1e8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_1e8.M[2][3] = _UNK_150689518;
  fVar8 = __real_3f800000 / (float)(int)((ulonglong)*param_2 >> 0x20);
  local_1e8.M[0][2] = 0.0;
  local_1e8.M[0][3] = 0.0;
  local_1e8.M[1][2] = 0.0;
  local_1e8.M[1][3] = 0.0;
  local_1e8.M[3][0] = (this->PreShadowTranslation).field0_0x0._s_0.X;
  local_1e8.M[3][1] = (this->PreShadowTranslation).field0_0x0._s_0.Y;
  uVar1 = this->ResolutionY;
  local_1e8.M[3][2] = (this->PreShadowTranslation).field0_0x0._s_0.Z;
  fVar6 = (float)this->ResolutionX * __real_3f000000 * fVar7;
  local_168.M[0][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][0];
  local_168.M[0][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][1];
  local_168.M[0][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][2];
  local_168.M[0][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][3];
  local_168.M[1][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][0];
  local_168.M[1][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][1];
  local_168.M[1][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][2];
  local_168.M[1][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][3];
  local_168.M[2][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][0];
  local_168.M[2][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][1];
  local_168.M[2][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][2];
  local_168.M[2][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][3];
  local_168.M[3][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][0];
  local_168.M[3][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][1];
  local_168.M[3][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][2];
  local_168.M[3][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][3];
  VectorMatrixMultiply(&local_e8,&local_1e8,&local_168);
  local_268.M[0][0] = (double)fVar6;
  local_268.M[0][2] = 0.0;
  local_268.M[0][3] = 0.0;
  local_268.M[1][1] = (double)((float)uVar1 * __real_bf000000 * fVar8);
  local_268.M[0][1] = 0.0;
  local_268.M[1][2] = 0.0;
  local_268.M[1][3] = 0.0;
  local_268.M[2][0] = 0.0;
  local_268.M[2][1] = 0.0;
  local_268.M[1][0] = 0.0;
  local_268.M[2][2] = (double)this->InvMaxSubjectDepth;
  local_268.M[2][3] = 0.0;
  local_268.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_268.M[3][3] = _UNK_15061cbc8;
  local_268.M[3][0] = (double)((float)(this->X + this->BorderSize) * fVar7 + fVar6);
  local_268.M[3][1] =
       (double)(((float)(this->Y + this->BorderSize) + (float)uVar1 * __real_3f000000) * fVar8);
  VectorMatrixMultiply(__return_storage_ptr__,&local_e8,&local_268);
  uVar1 = this->ResolutionX;
  uVar2 = this->BorderSize;
  uVar3 = this->X;
  uVar4 = this->Y;
  uVar5 = this->ResolutionY;
  (param_1->field0_0x0)._s_0.X = (float)(uVar2 + uVar3) * fVar7;
  (param_1->field0_0x0)._s_0.Y = (float)(uVar4 + uVar2) * fVar8;
  (param_1->field0_0x0)._s_0.Z = (float)(uVar1 + uVar3 + uVar2 * 2) * fVar7;
  (param_1->field0_0x0)._s_0.W = (float)(uVar5 + uVar4 + uVar2 * 2) * fVar8;
  return __return_storage_ptr__;
}

// IsWholeSceneDirectionalShadow @ 1455ba930

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

bool __thiscall FProjectedShadowInfo::IsWholeSceneDirectionalShadow(FProjectedShadowInfo *this)

{
  if ((((char)(this->bWholeSceneShadow << 7) < '\0') &&
      (-1 < (this->CascadeSettings).ShadowSplitIndex)) && (this->bDirectionalLight != 0)) {
    return true;
  }
  return false;
}

// IsWholeScenePointLightShadow @ 1455ba960

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

bool __thiscall FProjectedShadowInfo::IsWholeScenePointLightShadow(FProjectedShadowInfo *this)

{
  uchar uVar1;
  
  if ((this->bWholeSceneShadow != 0) &&
     ((uVar1 = this->LightSceneInfo->Proxy->LightType, uVar1 == '\x01' || (uVar1 == '\x03')))) {
    return true;
  }
  return false;
}

// ModifyViewForShadow @ 1455bb030

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

void __thiscall
FProjectedShadowInfo::ModifyViewForShadow(FProjectedShadowInfo *this,FViewInfo *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  TUniquePtr<FViewUniformShaderParameters,TDefaultDelete<FViewUniformShaderParameters>_> *pTVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  TIntPoint<int>_u_0 TVar8;
  TIntPoint<int>_u_0 TVar9;
  FViewUniformShaderParameters *pFVar10;
  FRHIResource *this_00;
  FRHIResource *pFVar11;
  code *pcVar12;
  int iVar13;
  double dVar14;
  TIntPoint<int>_u_0 TVar15;
  uint uVar16;
  bool bVar17;
  TMatrix<double> *pTVar18;
  FViewUniformShaderParameters *pFVar19;
  FShaderParametersMetadata *pFVar20;
  TRefCountPtr<FRHIUniformBuffer> TVar21;
  float fVar22;
  undefined1 auStackY_398 [32];
  FRHIResource *local_350;
  undefined8 local_348;
  longlong local_340;
  TMatrix<double> local_338;
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TBox<double> local_b8;
  undefined1 local_50;
  ulonglong local_48;
  
  dVar14 = __real_3ff0000000000000;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  uVar4 = this->Y;
  TVar8 = (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  TVar9 = (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  plVar1 = &param_1->_padding_;
  uVar5 = this->X;
  uVar16 = this->Y;
  uVar6 = this->ResolutionX;
  iVar13 = this->BorderSize * 2;
  uVar7 = this->ResolutionY;
  *(int *)&(param_1->ViewRect).field0_0x0 = this->X;
  *(uint *)((longlong)&(param_1->ViewRect).field0_0x0 + 4) = uVar16;
  TVar15._s_0.Y = uVar7 + iVar13 + uVar4;
  TVar15._s_0.X = uVar6 + iVar13 + uVar5;
  (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0 = TVar15;
  if (dVar14 < (double)param_1->_padding_ || dVar14 == (double)param_1->_padding_) {
    param_1->_padding_ = (longlong)((double)param_1->_padding_ - (double)param_1->_padding_);
    param_1->_padding_ = (longlong)((double)param_1->_padding_ - (double)param_1->_padding_);
  }
  else {
    param_1->_padding_ = (longlong)((double)param_1->_padding_ - (double)param_1->_padding_);
    param_1->_padding_ = (longlong)((double)param_1->_padding_ - (double)param_1->_padding_);
  }
  plVar2 = &param_1->_padding_;
  pTVar18 = FViewMatrices::InvertProjectionMatrix(&local_338,(TMatrix<double> *)plVar1);
  dVar14 = pTVar18->M[0][1];
  *plVar2 = (longlong)pTVar18->M[0][0];
  param_1->_padding_ = (longlong)dVar14;
  dVar14 = pTVar18->M[0][3];
  param_1->_padding_ = (longlong)pTVar18->M[0][2];
  param_1->_padding_ = (longlong)dVar14;
  dVar14 = pTVar18->M[1][1];
  param_1->_padding_ = (longlong)pTVar18->M[1][0];
  param_1->_padding_ = (longlong)dVar14;
  dVar14 = pTVar18->M[1][3];
  param_1->_padding_ = (longlong)pTVar18->M[1][2];
  param_1->_padding_ = (longlong)dVar14;
  dVar14 = pTVar18->M[2][1];
  param_1->_padding_ = (longlong)pTVar18->M[2][0];
  param_1->_padding_ = (longlong)dVar14;
  dVar14 = pTVar18->M[2][3];
  param_1->_padding_ = (longlong)pTVar18->M[2][2];
  param_1->_padding_ = (longlong)dVar14;
  dVar14 = pTVar18->M[3][1];
  param_1->_padding_ = (longlong)pTVar18->M[3][0];
  param_1->_padding_ = (longlong)dVar14;
  dVar14 = pTVar18->M[3][3];
  param_1->_padding_ = (longlong)pTVar18->M[3][2];
  param_1->_padding_ = (longlong)dVar14;
  *(TVector2<double>_u_0 *)&param_1->_padding_ =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  VectorMatrixMultiply(&local_2b8,(TMatrix<double> *)&param_1->_padding_,(TMatrix<double> *)plVar1);
  param_1->_padding_ = (longlong)local_2b8.M[0][0];
  param_1->_padding_ = (longlong)local_2b8.M[0][1];
  param_1->_padding_ = (longlong)local_2b8.M[0][2];
  param_1->_padding_ = (longlong)local_2b8.M[0][3];
  param_1->_padding_ = (longlong)local_2b8.M[1][0];
  param_1->_padding_ = (longlong)local_2b8.M[1][1];
  param_1->_padding_ = (longlong)local_2b8.M[1][2];
  param_1->_padding_ = (longlong)local_2b8.M[1][3];
  param_1->_padding_ = (longlong)local_2b8.M[2][0];
  param_1->_padding_ = (longlong)local_2b8.M[2][1];
  param_1->_padding_ = (longlong)local_2b8.M[2][2];
  param_1->_padding_ = (longlong)local_2b8.M[2][3];
  param_1->_padding_ = (longlong)local_2b8.M[3][0];
  param_1->_padding_ = (longlong)local_2b8.M[3][1];
  param_1->_padding_ = (longlong)local_2b8.M[3][2];
  param_1->_padding_ = (longlong)local_2b8.M[3][3];
  VectorMatrixMultiply(&local_238,(TMatrix<double> *)plVar2,(TMatrix<double> *)&param_1->_padding_);
  param_1->_padding_ = (longlong)local_238.M[0][0];
  param_1->_padding_ = (longlong)local_238.M[0][1];
  param_1->_padding_ = (longlong)local_238.M[0][2];
  param_1->_padding_ = (longlong)local_238.M[0][3];
  param_1->_padding_ = (longlong)local_238.M[1][0];
  param_1->_padding_ = (longlong)local_238.M[1][1];
  param_1->_padding_ = (longlong)local_238.M[1][2];
  param_1->_padding_ = (longlong)local_238.M[1][3];
  param_1->_padding_ = (longlong)local_238.M[2][0];
  param_1->_padding_ = (longlong)local_238.M[2][1];
  param_1->_padding_ = (longlong)local_238.M[2][2];
  param_1->_padding_ = (longlong)local_238.M[2][3];
  param_1->_padding_ = (longlong)local_238.M[3][0];
  param_1->_padding_ = (longlong)local_238.M[3][1];
  param_1->_padding_ = (longlong)local_238.M[3][2];
  param_1->_padding_ = (longlong)local_238.M[3][3];
  VectorMatrixMultiply(&local_1b8,(TMatrix<double> *)&param_1->_padding_,(TMatrix<double> *)plVar1);
  param_1->_padding_ = (longlong)local_1b8.M[0][0];
  param_1->_padding_ = (longlong)local_1b8.M[0][1];
  param_1->_padding_ = (longlong)local_1b8.M[0][2];
  param_1->_padding_ = (longlong)local_1b8.M[0][3];
  param_1->_padding_ = (longlong)local_1b8.M[1][0];
  param_1->_padding_ = (longlong)local_1b8.M[1][1];
  param_1->_padding_ = (longlong)local_1b8.M[1][2];
  param_1->_padding_ = (longlong)local_1b8.M[1][3];
  param_1->_padding_ = (longlong)local_1b8.M[2][0];
  param_1->_padding_ = (longlong)local_1b8.M[2][1];
  param_1->_padding_ = (longlong)local_1b8.M[2][2];
  param_1->_padding_ = (longlong)local_1b8.M[2][3];
  param_1->_padding_ = (longlong)local_1b8.M[3][0];
  param_1->_padding_ = (longlong)local_1b8.M[3][1];
  param_1->_padding_ = (longlong)local_1b8.M[3][2];
  param_1->_padding_ = (longlong)local_1b8.M[3][3];
  VectorMatrixMultiply(&local_138,(TMatrix<double> *)plVar2,(TMatrix<double> *)&param_1->_padding_);
  param_1->_padding_ = (longlong)local_138.M[0][0];
  param_1->_padding_ = (longlong)local_138.M[0][1];
  param_1->_padding_ = (longlong)local_138.M[0][2];
  param_1->_padding_ = (longlong)local_138.M[0][3];
  param_1->_padding_ = (longlong)local_138.M[1][0];
  param_1->_padding_ = (longlong)local_138.M[1][1];
  param_1->_padding_ = (longlong)local_138.M[1][2];
  param_1->_padding_ = (longlong)local_138.M[1][3];
  param_1->_padding_ = (longlong)local_138.M[2][0];
  param_1->_padding_ = (longlong)local_138.M[2][1];
  param_1->_padding_ = (longlong)local_138.M[2][2];
  param_1->_padding_ = (longlong)local_138.M[2][3];
  param_1->_padding_ = (longlong)local_138.M[3][0];
  param_1->_padding_ = (longlong)local_138.M[3][1];
  param_1->_padding_ = (longlong)local_138.M[3][2];
  param_1->_padding_ = (longlong)local_138.M[3][3];
  if (((this->CascadeSettings).bFarShadowCascade == false) ||
     (*(uint *)&param_1->_padding_ = (uint)param_1->_padding_ | 2,
     fVar22 = GFarShadowLODDistanceFactor, (this->CascadeSettings).bFarShadowCascade == false)) {
    fVar22 = (float)(this->CascadeSettings).ShadowSplitIndex * GShadowLODDistanceFactorCascadeScale
             + GShadowLODDistanceFactor;
  }
  *(undefined4 *)&param_1->_padding_ = 0;
  *(float *)&param_1->_padding_ = fVar22 * *(float *)&param_1->_padding_;
  pFVar19 = ::operator_new(0x17b0);
  if (pFVar19 == (FViewUniformShaderParameters *)0x0) {
    pFVar19 = (FViewUniformShaderParameters *)0x0;
  }
  else {
    pFVar19 = FViewUniformShaderParameters::FViewUniformShaderParameters(pFVar19);
  }
  pTVar3 = &param_1->CachedViewUniformShaderParameters;
  if (pTVar3 != (TUniquePtr<FViewUniformShaderParameters,TDefaultDelete<FViewUniformShaderParameters>_>
                 *)&local_348) {
    pFVar10 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar19;
    pFVar19 = (FViewUniformShaderParameters *)0x0;
    ::operator_delete(pFVar10,0x17b0);
  }
  ::operator_delete(pFVar19,0x17b0);
  FViewMatrices::HackOverrideViewMatrixForShadows
            ((FViewMatrices *)plVar1,&this->TranslatedWorldToView);
  local_b8.IsValid = '\0';
  local_50 = 0;
  FViewInfo::SetupUniformBufferParameters
            (param_1,(FViewMatrices *)plVar1,&param_1->PrevViewInfo->ViewMatrices,&local_b8,2,
             pTVar3->Ptr);
  pFVar19 = pTVar3->Ptr;
  pFVar20 = FViewUniformShaderParameters::GetStructMetadata();
  if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  TVar21 = RHICreateUniformBuffer
                     (&local_350,(FRHIUniformBufferLayout *)pFVar19,
                      (EUniformBufferUsage)(pFVar20->Layout).Reference,ValidateResources);
  this_00 = (FRHIResource *)(TVar21.Reference)->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
    pFVar20 = FViewUniformShaderParameters::GetStructMetadata();
    if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((FName)(pFVar20->Layout).Reference != this_00[2].OwnerName) {
      pFVar20 = FViewUniformShaderParameters::GetStructMetadata();
      if (((pFVar20->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar17)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar17) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  if (local_350 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_350);
  }
  plVar1 = &param_1->_padding_;
  if (plVar1 != &local_340) {
    pFVar11 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)this_00;
    this_00 = pFVar11;
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0 = TVar8;
  (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0 = TVar9;
  if ((this->bPreShadow != 0) && (GPreshadowsForceLowestLOD != 0)) {
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ | 1;
  }
  return;
}

// RenderDepth @ 1455bd840

/* WARNING: Removing unreachable block (ram,0x0001455be222) */
/* WARNING: Removing unreachable block (ram,0x0001455be24b) */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::RenderDepth
          (FProjectedShadowInfo *this,FRDGBuilder *param_1,FSceneRenderer *param_2,
          FRDGTexture *param_3,bool param_4,bool param_5)

{
  FShadowDepthPassParameters *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  FViewInfo *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  ERDGPassFlags EVar18;
  int iVar19;
  uint uVar20;
  FString *pFVar21;
  FRDGScope *this_00;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowDepthsTime> FVar23;
  FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::RenderDepth(FRDGBuilder_&,FSceneRenderer_const_*,FRDGTexture_*,bool,bool)_::_2_::FStat_STAT_RenderShadowDepth>
  FVar24;
  undefined8 *puVar25;
  FShaderParametersMetadata *pFVar26;
  undefined8 *puVar27;
  TRDGUniformBuffer<FShadowDepthPassUniformParameters> *pTVar28;
  FMobileShadowDepthPassUniformParameters *pFVar29;
  TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters> *this_01;
  FRDGEventName *pFVar30;
  wchar_t *pwVar31;
  FRDGPass *pFVar32;
  FRDGParameterStruct *pFVar33;
  FThreadStats *pFVar34;
  FThreadStatsPool *pFVar35;
  TStatIdData *pTVar36;
  FName FVar37;
  FName FVar38;
  FName FVar39;
  undefined8 uVar40;
  undefined8 *puVar41;
  ulonglong uVar42;
  FShadowDepthPassUniformParameters *pFVar43;
  FRDGUserValidation *local_res18;
  undefined1 local_318 [4];
  int local_314;
  TRDGUniformBuffer<FShadowDepthPassUniformParameters> *local_308;
  EUniformBufferBindingFlags EStack_300;
  undefined7 uStack_2ff;
  undefined8 *local_2f8;
  undefined8 *local_2f0;
  FColor_u_0 local_2e8;
  FColor_u_0 local_2e4;
  FColor_u_0 local_2e0 [2];
  FString local_2d8;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FMemStackBase *local_2b0;
  FString local_2a8;
  FString local_298;
  FName local_288;
  FName local_278;
  FName local_268;
  FDepthStencilBinding local_258;
  LARGE_INTEGER local_240;
  LARGE_INTEGER local_238;
  FString local_230;
  FStatMessage local_220;
  FStatMessage local_210;
  FScriptContainerElement *local_200;
  FScene *local_1f8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1f0;
  char local_1e0;
  FProjectedShadowInfo *local_1d8;
  FShadowDepthPassParameters *pFStack_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  FString local_1c0;
  FString local_1b0;
  FRDGTexture *local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  FMeshPassProcessorRenderState local_188;
  <lambda_2> local_148;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_>
  local_130;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FString local_f0;
  uint uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  FRDGEventName local_c0;
  FRDGEventName local_a8;
  FRDGEventName local_90;
  FRDGParameterStruct local_78;
  FRDGParameterStruct local_60;
  
  bVar10 = false;
  bVar13 = false;
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Data.ArrayNum = 0;
  local_2d8.Data.ArrayMax = 0;
  bVar16 = GetEmitDrawEvents();
  if (bVar16) {
    GetShadowTypeNameForDrawEvent(this,&local_2d8);
    local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.Data.ArrayNum = 0;
    local_2a8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_2a8,this->ResolutionY);
    local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Data.ArrayNum = 0;
    local_298.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_298,this->ResolutionX);
    pFVar21 = ::FString::FString(&local_f0,L" ");
    ::FString::ConcatFF(&local_1b0,pFVar21,&local_298);
    ::FString::ConcatFC(&local_1c0,&local_1b0,L"x");
    ::FString::ConcatFF(&local_230,&local_1c0,&local_2a8);
    iVar19 = local_230.Data.ArrayNum + -1;
    if (local_230.Data.ArrayNum == 0) {
      iVar19 = 0;
    }
    ::FString::AppendChars(&local_2d8,(wchar_t *)local_230.Data.AllocatorInstance.Data,iVar19);
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  cVar4 = *(char *)((longlong)&param_1->_padding_ + 6);
  uVar42 = (ulonglong)_tls_index;
  local_1e0 = '\0';
  if ((cVar4 != '\0') && ((cVar4 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    local_200 = (FScriptContainerElement *)L"";
    if (local_2d8.Data.ArrayNum != 0) {
      local_200 = local_2d8.Data.AllocatorInstance.Data;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar42 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_d0 = 0;
      uStack_cc = 0;
      ::Desc._12_8_ = ZEXT48(uStack_d4);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x448;
      ::Desc._padding_ = (longlong)u__s;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FProjectedShadowInfo::RenderDepth'::__l10::<lambda_1>::operator()<wchar_t_const_*>'
             ::__l3::<lambda_2>::
             operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_130._Myfirst._Val = &::Desc;
    local_130._padding_ = 0x150613404;
    local_1f0.State = (FRDGScopeState *)param_1;
    local_130._padding_ = (longlong)&local_200;
    local_130._padding_ = (longlong)local_318;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_1f0.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_130);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_1e0 = '\x01';
  }
  pTVar36 = &TStatId::TStatId_NAME_None;
  if (this->bWholeSceneShadow == 0) {
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowDepthsTime>)
             &TStatId::TStatId_NAME_None;
  }
  else {
    FVar23 = StatPtr_STAT_RenderWholeSceneShadowDepthsTime;
    if (StatPtr_STAT_RenderWholeSceneShadowDepthsTime ==
        (FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowDepthsTime>)0x0) {
      pFVar22 = ::FName::FName(&local_108,"STAT_RenderWholeSceneShadowDepthsTime");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowDepthsTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RenderWholeSceneShadowDepthsTime,*pFVar22,
                          L"WholeScene Shadow Depths","STATGROUP_ShadowRendering","STATCAT_Advanced"
                          ,L"Shadow Rendering",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar39 = *(FName *)FVar23;
  local_278.ComparisonIndex.Value = 0;
  local_278.Number = 0;
  bVar16 = false;
  bVar9 = false;
  if ((FVar39.ComparisonIndex.Value.Value == 0) && (FVar39.Number == 0)) {
LAB_1455bdbd6:
    bVar13 = bVar9;
    bVar10 = bVar16;
    bVar16 = false;
    FVar39 = local_278;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e8._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar10 = false;
      bVar13 = true;
      bVar16 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c8.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
        local_2c8.Number = FVar39.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c8,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                   ,1099);
        bVar10 = true;
        bVar13 = true;
        bVar16 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1455bdbd6;
    FThreadStats::AddMessage(FVar39,CycleScopeStart);
    bVar16 = true;
  }
  if ((this->bWholeSceneShadow == 0) &&
     (pTVar36 = (TStatIdData *)StatPtr_STAT_RenderPerObjectShadowDepthsTime,
     StatPtr_STAT_RenderPerObjectShadowDepthsTime ==
     (FThreadSafeStaticStat<FStat_STAT_RenderPerObjectShadowDepthsTime>)0x0)) {
    pFVar22 = ::FName::FName(&local_110,"STAT_RenderPerObjectShadowDepthsTime");
    pTVar36 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderPerObjectShadowDepthsTime,
                         *pFVar22,L"PerObject Shadow Depths","STATGROUP_ShadowRendering",
                         "STATCAT_Advanced",L"Shadow Rendering",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar38 = *(FName *)pTVar36;
  bVar9 = false;
  bVar12 = false;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  bVar15 = false;
  bVar8 = false;
  if ((FVar38.ComparisonIndex.Value.Value == 0) && (FVar38.Number == 0)) {
LAB_1455bdd11:
    bVar12 = bVar8;
    bVar9 = bVar15;
    bVar15 = false;
    FVar38 = local_268;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e4._s_0,(char *)*(FName *)((longlong)pTVar36 + 0x10));
      bVar9 = false;
      bVar12 = true;
      bVar15 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2c0.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_2c0.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2c0,(wchar_t *)*(FName *)((longlong)pTVar36 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                   ,0x44c);
        bVar9 = true;
        bVar12 = true;
        bVar15 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1455bdd11;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar15 = true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar42 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RenderShadowDepth ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::RenderDepth(FRDGBuilder_&,FSceneRenderer_const_*,FRDGTexture_*,bool,bool)_::_2_::FStat_STAT_RenderShadowDepth>
         )0x0) {
      pFVar22 = ::FName::FName(&local_f8,"STAT_RenderShadowDepth");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderShadowDepth,*pFVar22,
                 L"STAT_RenderShadowDepth","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar24 = StatPtr_STAT_RenderShadowDepth;
  if (StatPtr_STAT_RenderShadowDepth ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::RenderDepth(FRDGBuilder_&,FSceneRenderer_const_*,FRDGTexture_*,bool,bool)_::_2_::FStat_STAT_RenderShadowDepth>
       )0x0) {
    pFVar22 = ::FName::FName(&local_100,"STAT_RenderShadowDepth");
    FVar24 = (FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::RenderDepth(FRDGBuilder_&,FSceneRenderer_const_*,FRDGTexture_*,bool,bool)_::_2_::FStat_STAT_RenderShadowDepth>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderShadowDepth,*pFVar22,
                          L"STAT_RenderShadowDepth","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar24;
  bVar8 = false;
  bVar11 = false;
  local_288.ComparisonIndex.Value = 0;
  local_288.Number = 0;
  bVar14 = false;
  bVar17 = false;
  if ((FVar37.ComparisonIndex.Value.Value != 0) || (FVar37.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e0[0]._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar8 = false;
      bVar11 = true;
      bVar14 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b8.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_2b8.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b8,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                   ,0x44d);
        bVar8 = true;
        bVar11 = true;
        bVar14 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar37,CycleScopeStart);
      bVar14 = true;
      goto LAB_1455bde68;
    }
  }
  bVar11 = bVar17;
  bVar8 = bVar14;
  bVar14 = false;
  FVar37 = local_288;
LAB_1455bde68:
  local_314 = (int)this->ShadowDepthView->_padding_;
  local_1f8 = *(FScene **)&param_2->field_0x8;
  BeginRenderView(this,param_1,local_1f8);
  local_2b0 = (FMemStackBase *)&param_1->_padding_;
  puVar25 = FMemStackBase::Alloc(local_2b0,0x1b0,0x10);
  if (puVar25 == (undefined8 *)0x0) {
    puVar25 = (undefined8 *)0x0;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar25 + 3) = 1;
    *puVar25 = &___7__TObject_VFShadowDepthPassParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar25 + 5) = 1;
    puVar25[2] = 0;
    puVar25[4] = 0;
    puVar25[6] = 0;
    puVar25[8] = 0;
    puVar25[10] = 0;
    *(undefined1 *)(puVar25 + 7) = 1;
    *(undefined1 *)(puVar25 + 9) = 1;
    *(undefined4 *)(puVar25 + 0xb) = 4;
    puVar25[0xc] = 0;
    *(undefined4 *)(puVar25 + 0xd) = 8;
    puVar25[0x10] = 0;
    *(undefined1 *)(puVar25 + 0x11) = 1;
    puVar25[0x12] = 0;
    *(undefined1 *)(puVar25 + 0x13) = 1;
    puVar25[0x14] = 0;
    *(undefined1 *)(puVar25 + 0x15) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar25 + 0x16));
  }
  local_2f8 = puVar25;
  if ((((undefined8 **)param_1->_padding_ <= &local_2f8) &&
      (&local_2f8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar19 = (int)param_1->_padding_;
  if (iVar19 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar19 + 1;
  pFVar1 = (FShadowDepthPassParameters *)(puVar25 + 2);
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar19 * 8) = local_2f8;
  pFVar5 = this->ShadowDepthView;
  pFVar26 = FViewUniformShaderParameters::GetStructMetadata();
  local_258.DepthLoadAction = ELoad;
  local_258.StencilLoadAction = ENoAction;
  local_258.DepthStencilAccess.Value = DepthWrite;
  local_308 = (TRDGUniformBuffer<FShadowDepthPassUniformParameters> *)pFVar5->_padding_;
  EStack_300 = Static;
  if (pFVar26->BindingFlags != StaticAndShader) {
    EStack_300 = pFVar26->BindingFlags;
  }
  uVar40 = 0;
  *(TRDGUniformBuffer<FShadowDepthPassUniformParameters> **)&pFVar1->View = local_308;
  puVar25[3] = CONCAT71(uStack_2ff,EStack_300);
  local_258.ResolveTexture = (FRDGTexture *)0x0;
  local_258.Texture = param_3;
  bVar17 = FDepthStencilBinding::Validate(&local_258);
  if ((!bVar17) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x289,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar25[0x2e] = local_258.Texture;
  puVar25[0x2f] = local_258.ResolveTexture;
  puVar25[0x30] =
       CONCAT44(local_258.DepthStencilAccess.Value,CONCAT22(local_258._18_2_,local_258._16_2_));
  if ((this->CacheMode == SDCM_MovablePrimitivesOnly) || (this->CacheMode == SDCM_CSMScrolling)) {
    local_188.DepthStencilAccess = DepthRead_StencilRead;
    bVar17 = false;
    local_188.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_188.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_188.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
    local_188.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
    if ((this->bDirectionalLight == 0) && (this->bOnePassPointLightShadow != 0)) {
      bVar17 = true;
    }
    local_188.BlendState =
         TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    local_188.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    if ((this->bVSM == 0) &&
       (local_188.DepthStencilState =
             TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference, !bVar17)) {
      local_188.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<1,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
    }
    local_188.StencilRef = 0;
    CopyCachedShadowMap(this,param_1,this->ShadowDepthView,param_2,
                        (FRenderTargetBindingSlots *)(puVar25 + 0x16),&local_188);
  }
  iVar19 = (param_2->VirtualShadowMapArray).CachedUniformBuffers.ArrayNum;
  if (iVar19 != 0) {
    uVar7 = iVar19 - 1U;
    if (0 < (int)(iVar19 - 1U)) {
      uVar7 = 0;
    }
    uVar20 = 0;
    if ((int)uVar7 < iVar19) {
      uVar20 = ~uVar7 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar40 = *(undefined8 *)
              ((param_2->VirtualShadowMapArray).CachedUniformBuffers.AllocatorInstance.Data +
              (longlong)(int)uVar7 * 8);
  }
  pFVar26 = FVirtualShadowMapUniformParameters::GetStructMetadata();
  EStack_300 = Static;
  if (pFVar26->BindingFlags != StaticAndShader) {
    EStack_300 = pFVar26->BindingFlags;
  }
  puVar41 = (undefined8 *)0x0;
  puVar25[8] = uVar40;
  puVar25[9] = CONCAT71(uStack_2ff,EStack_300);
  local_308 = (TRDGUniformBuffer<FShadowDepthPassUniformParameters> *)uVar40;
  if (local_314 < 3) {
    pFVar29 = FRDGAllocator::Alloc<FMobileShadowDepthPassUniformParameters>
                        ((FRDGAllocator *)&param_1->_padding_);
    SetupShadowDepthPassUniformBuffer(this,param_1,this->ShadowDepthView,pFVar29);
    pFVar26 = FMobileShadowDepthPassUniformParameters::GetStructMetadata();
    FRDGUserValidation::ValidateCreateUniformBuffer(&param_1->UserValidation,pFVar29,pFVar26);
    pFVar26 = FMobileShadowDepthPassUniformParameters::GetStructMetadata();
    pwVar31 = pFVar26->ShaderVariableName;
    this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
    pTVar28 = (TRDGUniformBuffer<FShadowDepthPassUniformParameters> *)
              TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters>::
              TRDGUniformBuffer<FMobileShadowDepthPassUniformParameters>(this_01,pFVar29,pwVar31);
    TRDGHandleRegistry<TRDGHandle<FRDGUniformBuffer,unsigned_int>,0>::Insert
              (&param_1->UniformBuffers,(FRDGUniformBuffer *)pTVar28);
    FRDGUserValidation::ValidateCreateUniformBuffer
              (&param_1->UserValidation,(FRDGUniformBuffer *)pTVar28);
    pFVar26 = FMobileShadowDepthPassUniformParameters::GetStructMetadata();
    EStack_300 = Static;
    if (pFVar26->BindingFlags != StaticAndShader) {
      EStack_300 = pFVar26->BindingFlags;
    }
    puVar25[4] = pTVar28;
    puVar25[5] = CONCAT71(uStack_2ff,EStack_300);
    local_308 = pTVar28;
  }
  else {
    puVar27 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x460,0x10);
    if (puVar27 == (undefined8 *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar17) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      puVar27[2] = 0;
      *puVar27 = &___7__TObject_VFShadowDepthPassUniformParameters___FRDGAllocator__6B_;
      puVar27[3] = 0;
      puVar27[4] = 0;
      puVar27[5] = 0;
      puVar27[6] = 0;
      puVar27[7] = 0;
      puVar27[8] = 0;
      puVar27[9] = 0;
      puVar27[10] = 0;
      puVar27[0xb] = 0;
      puVar27[0xc] = 0;
      puVar27[0xd] = 0;
      puVar27[0xe] = 0;
      puVar27[0xf] = 0;
      puVar27[0x10] = 0;
      puVar27[0x22] = 0;
      *(undefined4 *)(puVar27 + 0x23) = 0;
      *(undefined4 *)((longlong)puVar27 + 0x11c) = 0x3f800000;
      puVar27[0x87] = 0;
      puVar27[0x88] = 0;
      puVar27[0x89] = 0;
      puVar27[0x8a] = 0;
      puVar27[0x8b] = 0;
      puVar41 = puVar27;
    }
    local_2f0 = puVar41;
    if ((((undefined8 **)param_1->_padding_ <= &local_2f0) &&
        (&local_2f0 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar19 = (int)param_1->_padding_;
    if (iVar19 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,
                          (int *)((longlong)&param_1->_padding_ + 4));
    }
    pFVar43 = (FShadowDepthPassUniformParameters *)(puVar41 + 2);
    *(int *)&param_1->_padding_ = iVar19 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar19 * 8) = local_2f0;
    SetupShadowDepthPassUniformBuffer(this,param_1,this->ShadowDepthView,pFVar43);
    pFVar26 = FShadowDepthPassUniformParameters::GetStructMetadata();
    FRDGUserValidation::ValidateCreateUniformBuffer(&param_1->UserValidation,pFVar43,pFVar26);
    pFVar26 = FShadowDepthPassUniformParameters::GetStructMetadata();
    pwVar31 = pFVar26->ShaderVariableName;
    pTVar28 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
    pTVar28 = TRDGUniformBuffer<FShadowDepthPassUniformParameters>::
              TRDGUniformBuffer<FShadowDepthPassUniformParameters>(pTVar28,pFVar43,pwVar31);
    TRDGHandleRegistry<TRDGHandle<FRDGUniformBuffer,unsigned_int>,0>::Insert
              (&param_1->UniformBuffers,(FRDGUniformBuffer *)pTVar28);
    FRDGUserValidation::ValidateCreateUniformBuffer
              (&param_1->UserValidation,(FRDGUniformBuffer *)pTVar28);
    pFVar26 = FShadowDepthPassUniformParameters::GetStructMetadata();
    EStack_300 = Static;
    if (pFVar26->BindingFlags != StaticAndShader) {
      EStack_300 = pFVar26->BindingFlags;
    }
    puVar25[6] = pTVar28;
    puVar25[7] = CONCAT71(uStack_2ff,EStack_300);
    local_308 = pTVar28;
  }
  FParallelMeshDrawCommandPass::BuildRenderingCommands
            (&this->ShadowDepthPass,param_1,&local_1f8->GPUScene,
             (FInstanceCullingDrawParams *)(puVar25 + 10));
  bVar17 = SupportsShadowStencilCulling((FStaticShaderPlatform)param_2->ShaderPlatform);
  if (param_4) {
    local_148.__this = this;
    local_148.PassParameters = pFVar1;
    local_148.bRequiresBorderClamp = !bVar17;
    pFVar30 = FRDGEventName::FRDGEventName(&local_c0,1,L"ShadowDepthPassParallel");
    FRDGBuilder::
    AddDispatchPass<FShadowDepthPassParameters,_FProjectedShadowInfo::RenderDepth_::__l27::<lambda_2>_>
              (param_1,pFVar30,pFVar1,Raster,&local_148);
    if (local_c0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_1d8 = this;
    pFStack_1d0 = pFVar1;
    local_1c8 = !bVar17;
    pFVar30 = FRDGEventName::FRDGEventName(&local_90,1,L"ShadowDepthPass");
    pFVar26 = FShadowDepthPassParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar1,pFVar26,pFVar30,Raster);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pwVar31 = FRDGEventName::GetTCHAR(pFVar30);
    EVar18 = FRDGBuilder::OverridePassFlags(param_1,pwVar31,Raster);
    pFVar32 = FMemStackBase::Alloc(local_2b0,0x1a0,8);
    pFVar33 = FRDGParameterStruct::FRDGParameterStruct<FShadowDepthPassParameters>
                        (&local_78,pFVar1,pFVar26);
    FRDGPass::FRDGPass(pFVar32,pFVar30,pFVar33,EVar18,Async);
    pFVar32[1]._padding_ = (longlong)local_1d8;
    pFVar32[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_1d0;
    pFVar32->_padding_ =
         (longlong)
         &TRDGLambdaPass<FShadowDepthPassParameters,`FProjectedShadowInfo::RenderDepth'::`29'::<lambda_3>_>
          ::_vftable_;
    pFVar32[1].FullPathIfDebug.Data.ArrayNum = (int)CONCAT71(uStack_1c7,local_1c8);
    pFVar32[1].FullPathIfDebug.Data.ArrayMax = (int)((uint7)uStack_1c7 >> 0x18);
    pFVar32[1].Name.EventFormat = (wchar_t *)pFVar1;
    FRDGBuilder::ClobberPassOutputs(param_1,pFVar32);
    TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Insert(&param_1->Passes,pFVar32);
    FRDGBuilder::SetupParameterPass(param_1,pFVar32);
    if (local_90.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  local_res18 = &param_1->UserValidation;
  if (param_5) {
    uStack_198 = *(undefined4 *)(param_1->_padding_ + 0x29c);
    local_1a0 = param_3;
    pFVar30 = FRDGEventName::FRDGEventName(&local_a8,1,L"CopyCachedShadowMapCrossGPU");
    pFVar26 = FShadowDepthPassParameters::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass(local_res18,pFVar1,pFVar26,pFVar30,Raster);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pwVar31 = FRDGEventName::GetTCHAR(pFVar30);
    EVar18 = FRDGBuilder::OverridePassFlags(param_1,pwVar31,Raster);
    pFVar32 = FMemStackBase::Alloc(local_2b0,0x198,8);
    pFVar33 = FRDGParameterStruct::FRDGParameterStruct<FShadowDepthPassParameters>
                        (&local_60,pFVar1,pFVar26);
    FRDGPass::FRDGPass(pFVar32,pFVar30,pFVar33,EVar18,Async);
    pFVar32->_padding_ =
         (longlong)
         &TRDGLambdaPass<FShadowDepthPassParameters,`FProjectedShadowInfo::RenderDepth'::`32'::<lambda_4>_>
          ::_vftable_;
    *(FShadowDepthPassParameters **)&pFVar32[1].FullPathIfDebug.Data.ArrayNum = pFVar1;
    pFVar32[1]._padding_ = (longlong)local_1a0;
    pFVar32[1].FullPathIfDebug.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)CONCAT44(uStack_194,uStack_198);
    FRDGBuilder::ClobberPassOutputs(param_1,pFVar32);
    TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0>::Insert(&param_1->Passes,pFVar32);
    FRDGBuilder::SetupParameterPass(param_1,pFVar32);
    if (local_a8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar14) && (FVar37 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar34 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar34 == (FThreadStats *)0x0) {
      pFVar35 = FThreadStatsPool::Get();
      pFVar34 = FThreadStatsPool::GetFromPool(pFVar35);
    }
    if (pFVar34->bWaitForExplicitFlush < pFVar34->ScopeCount) {
      local_220.NameAndInfo.Index = FVar37.ComparisonIndex.Value;
      local_220.NameAndInfo.Number = FVar37.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_240);
      local_220.StatData.Pad[4] = '\0';
      local_220.StatData.Pad[5] = '\0';
      local_220.StatData.Pad[6] = '\0';
      local_220.StatData.Pad[7] = '\0';
      local_220.StatData.Pad[0] = local_240.s.LowPart._0_1_;
      local_220.StatData.Pad[1] = local_240.s.LowPart._1_1_;
      local_220.StatData.Pad[2] = local_240.s.LowPart._2_1_;
      local_220.StatData.Pad[3] = local_240.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar34,&local_220);
      piVar2 = &pFVar34->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar34,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar34,false,false);
      }
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar16) && (FVar39 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar34 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar34 == (FThreadStats *)0x0) {
      pFVar35 = FThreadStatsPool::Get();
      pFVar34 = FThreadStatsPool::GetFromPool(pFVar35);
    }
    if (pFVar34->bWaitForExplicitFlush < pFVar34->ScopeCount) {
      local_210.NameAndInfo.Index = FVar39.ComparisonIndex.Value;
      local_210.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_238);
      local_210.StatData.Pad[4] = '\0';
      local_210.StatData.Pad[5] = '\0';
      local_210.StatData.Pad[6] = '\0';
      local_210.StatData.Pad[7] = '\0';
      local_210.StatData.Pad[0] = local_238.s.LowPart._0_1_;
      local_210.StatData.Pad[1] = local_238.s.LowPart._1_1_;
      local_210.StatData.Pad[2] = local_238.s.LowPart._2_1_;
      local_210.StatData.Pad[3] = local_238.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar34,&local_210);
      piVar2 = &pFVar34->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar34,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar34,false,false);
      }
    }
  }
  if (local_1e0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1f0);
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  return;
}

// RenderFrustumWireframe @ 1455beba0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::RenderFrustumWireframe
          (FProjectedShadowInfo *this,FPrimitiveDrawInterface *param_1)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FLinearColor *this_00;
  char cVar5;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  longlong local_270;
  FColor_u_0 local_268;
  wchar_t *local_260;
  wchar_t **local_258;
  wchar_t *local_250;
  wchar_t **local_248;
  FLinearColor local_240;
  TMatrix<double> local_228;
  TMatrix<float> local_1a8;
  undefined1 local_168 [32];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_298;
  iVar2 = (this->DynamicSubjectPrimitives).ArrayNum;
  cVar5 = '\0';
  if (iVar2 != 0) {
    if (iVar2 < 1) {
      local_278 = 0;
      local_270 = (longlong)iVar2;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    cVar5 = (char)(*(this->DynamicSubjectPrimitives).AllocatorInstance.Data)->PackedIndex;
  }
  if (this->bWholeSceneShadow == 0 && this->bPreShadow == 0) {
    local_1a8.M[0][0] = (this->InvReceiverInnerMatrix).M[0][0];
    local_1a8.M[0][1] = (this->InvReceiverInnerMatrix).M[0][1];
    local_1a8.M[0][2] = (this->InvReceiverInnerMatrix).M[0][2];
    local_1a8.M[0][3] = (this->InvReceiverInnerMatrix).M[0][3];
    local_1a8.M[1][0] = (this->InvReceiverInnerMatrix).M[1][0];
    local_1a8.M[1][1] = (this->InvReceiverInnerMatrix).M[1][1];
    local_1a8.M[1][2] = (this->InvReceiverInnerMatrix).M[1][2];
    local_1a8.M[1][3] = (this->InvReceiverInnerMatrix).M[1][3];
    local_1a8.M[2][0] = (this->InvReceiverInnerMatrix).M[2][0];
    local_1a8.M[2][1] = (this->InvReceiverInnerMatrix).M[2][1];
    local_1a8.M[2][2] = (this->InvReceiverInnerMatrix).M[2][2];
    local_1a8.M[2][3] = (this->InvReceiverInnerMatrix).M[2][3];
    local_1a8.M[3][0] = (this->InvReceiverInnerMatrix).M[3][0];
    local_1a8.M[3][1] = (this->InvReceiverInnerMatrix).M[3][1];
    local_1a8.M[3][2] = (this->InvReceiverInnerMatrix).M[3][2];
    local_1a8.M[3][3] = (this->InvReceiverInnerMatrix).M[3][3];
  }
  else {
    if ((((float)((uint)(this->TranslatedWorldToClipInnerMatrix).M[0][0] &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
        ((float)((uint)(this->TranslatedWorldToClipInnerMatrix).M[0][1] &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
       ((float)((uint)(this->TranslatedWorldToClipInnerMatrix).M[0][2] &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      if ((((float)((uint)(this->TranslatedWorldToClipInnerMatrix).M[1][0] &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
          ((float)((uint)(this->TranslatedWorldToClipInnerMatrix).M[1][1] &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
         ((float)((uint)(this->TranslatedWorldToClipInnerMatrix).M[1][2] &
                 __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
        if ((((float)((uint)(this->TranslatedWorldToClipInnerMatrix).M[2][0] &
                     __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
            ((float)((uint)(this->TranslatedWorldToClipInnerMatrix).M[2][1] &
                    __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) &&
           ((float)((uint)(this->TranslatedWorldToClipInnerMatrix).M[2][2] &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
          local_260 = 
          L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
          ;
          if (1 < (byte)LogUnrealMath._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`private:_static_void___cdecl_UE::Math::TMatrix<float>::ErrorEnsure(wchar_t_const*___ptr64)'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
          }
          local_258 = &local_260;
          `UE::Math::TMatrix<float>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_258);
        }
      }
    }
    bVar4 = FMath::MatrixInverse(&local_1a8,&this->TranslatedWorldToClipInnerMatrix);
    if (!bVar4) {
      local_250 = 
      L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
      ;
      if (1 < (byte)LogUnrealMath._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_static_void___cdecl_UE::Math::TMatrix<float>::ErrorEnsure(wchar_t_const*___ptr64)'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
      }
      local_248 = &local_250;
      `UE::Math::TMatrix<float>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_248);
    }
  }
  if ((((char)(this->bWholeSceneShadow << 7) < '\0') &&
      (iVar2 = (this->CascadeSettings).ShadowSplitIndex, -1 < iVar2)) &&
     (this->bDirectionalLight != 0)) {
    local_268 = FColor::Red.field0_0x0;
    if (((iVar2 != 0) && (local_268 = FColor::Yellow.field0_0x0, iVar2 != 1)) &&
       ((local_268 = FColor::Green.field0_0x0, iVar2 != 2 &&
        (local_268 = FColor::White.field0_0x0, iVar2 == 3)))) {
      local_268 = FColor::Blue.field0_0x0;
    }
  }
  else {
    this_00 = FLinearColor::MakeFromHSV8
                        (&local_240,(cVar5 + (char)this->LightSceneInfo->Id) * '\x1f','\0',0xff);
    FLinearColor::ToFColorSRGB(this_00);
  }
  local_168._0_8_ = (undefined8)local_1a8.M[0][0];
  local_168._8_8_ = (undefined8)local_1a8.M[0][1];
  local_148 = (double)local_1a8.M[1][0];
  dStack_140 = (double)local_1a8.M[1][1];
  local_128 = (double)local_1a8.M[2][0];
  dStack_120 = (double)local_1a8.M[2][1];
  local_108 = (double)local_1a8.M[3][0];
  dStack_100 = (double)local_1a8.M[3][1];
  local_228.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_228.M[1][1] = _UNK_15061cbc8;
  local_168._24_4_ = SUB84((double)local_1a8.M[0][3],0);
  local_168._16_8_ = (double)local_1a8.M[0][2];
  local_168._28_4_ = (int)((ulonglong)(double)local_1a8.M[0][3] >> 0x20);
  local_228.M[2][0] = 0.0;
  local_228.M[2][1] = 0.0;
  uVar1 = *(undefined8 *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0x10);
  local_138._8_4_ = SUB84((double)local_1a8.M[1][3],0);
  local_138._0_8_ = (double)local_1a8.M[1][2];
  local_138._12_4_ = (int)((ulonglong)(double)local_1a8.M[1][3] >> 0x20);
  local_118._8_4_ = SUB84((double)local_1a8.M[2][3],0);
  local_118._0_8_ = (double)local_1a8.M[2][2];
  local_118._12_4_ = (int)((ulonglong)(double)local_1a8.M[2][3] >> 0x20);
  local_228.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_228.M[0][1] = _UNK_150689518;
  local_f8._8_4_ = SUB84((double)local_1a8.M[3][3],0);
  local_f8._0_8_ = (double)local_1a8.M[3][2];
  local_f8._12_4_ = (int)((ulonglong)(double)local_1a8.M[3][3] >> 0x20);
  local_228.M[0][2] = 0.0;
  local_228.M[0][3] = 0.0;
  local_228.M[1][2] = 0.0;
  local_228.M[1][3] = 0.0;
  local_228.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_228.M[2][3] = _UNK_150689518;
  local_228.M[3][0]._0_4_ =
       *(uint *)&(this->PreShadowTranslation).field0_0x0 ^
       (uint)__xmm_80000000000000008000000000000000;
  local_228.M[3][0]._4_4_ =
       *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 4) ^
       __xmm_80000000000000008000000000000000._4_4_;
  local_228.M[3][1]._0_4_ =
       *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 8) ^ _UNK_15066df78;
  local_228.M[3][1]._4_4_ =
       *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0xc) ^ _UNK_15066df7c;
  local_228.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  local_228.M[3][3] = __real_3ff0000000000000;
  VectorMatrixMultiply(&local_e8,(TMatrix<double> *)local_168,&local_228);
  DrawFrustumWireframe(param_1,&local_e8,(FColor)local_268._s_0,'\0');
  return;
}

// RenderMobileModulatedShadowProjection @ 1455bef40

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
FProjectedShadowInfo::RenderMobileModulatedShadowProjection
          (FProjectedShadowInfo *this,FRHICommandList *param_1,int param_2,FViewInfo *param_3,
          FLightSceneProxy *param_4,FSceneRenderer *param_5)

{
  uint uVar1;
  FVisibleLightViewInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FInstanceCullingDrawParams local_78;
  
  uVar1 = this->LightSceneInfo->Id;
  uVar6 = 0;
  if ((int)uVar1 < (param_3->VisibleLightInfos).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = this->ShadowId;
  pFVar2 = (param_3->VisibleLightInfos).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)uVar6 < pFVar2[(int)uVar1].ProjectedShadowViewRelevanceMap.ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar2[(int)uVar1].ProjectedShadowViewRelevanceMap.AllocatorInstance.Data[(int)uVar6].
      bShadowRelevance != 0) {
    local_78.DrawIndirectArgsBuffer._0_8_ = 0;
    local_78.DrawIndirectArgsBuffer._8_4_ = 4;
    local_78.InstanceIdOffsetBuffer._0_8_ = 0;
    local_78.InstanceIdOffsetBuffer._8_4_ = 8;
    local_78.InstanceCulling._0_8_ = 0;
    local_78.InstanceCulling._8_1_ = 1;
    local_78.Scene._0_8_ = 0;
    local_78.Scene._8_1_ = 1;
    local_78.BatchedPrimitive._0_8_ = 0;
    local_78.BatchedPrimitive._8_1_ = 1;
    RenderProjectionInternal
              (this,param_1,param_2,param_3,param_4,param_5,false,true,&local_78,
               (FRHIUniformBuffer *)0x0);
  }
  return;
}

// RenderOnePassPointLightProjection @ 1455c0270

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::RenderOnePassPointLightProjection
          (FProjectedShadowInfo *this,FRDGBuilder *param_1,FShadowProjectionPassParameters *param_2,
          int param_3,FViewInfo *param_4,FLightSceneProxy *param_5,bool param_6,bool param_7)

{
  int *piVar1;
  undefined1 uVar2;
  FLightSceneProxy *pFVar3;
  FRDGTexture *pFVar4;
  FViewInfo *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FViewInfo *pFVar14;
  FShadowProjectionPassParameters *pFVar15;
  bool bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowProjectionsTime> FVar19;
  FShadowProjectionPassParameters *pFVar20;
  FViewShaderParameters *pFVar21;
  FRDGTexture *pFVar22;
  FRDGEventName *this_00;
  FShaderParametersMetadata *pFVar23;
  wchar_t *pwVar24;
  FRDGPass *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FShadowProjectionPassParameters *pFVar25;
  TRefCountPtr<IPooledRenderTarget> TVar26;
  longlong lVar27;
  FName FVar28;
  ERDGPassFlags EVar29;
  FShadowProjectionPassParameters *pFVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  FColor_u_0 local_res18 [2];
  int local_res20;
  undefined1 in_stack_00000039;
  FName local_1b8;
  TRefCountPtr<IPooledRenderTarget> local_1b0;
  TRefCountPtr<IPooledRenderTarget> local_1a8;
  FName local_1a0;
  LARGE_INTEGER local_190;
  FStatMessage local_188;
  double local_178;
  wchar_t *pwStack_170;
  FScriptContainerElement *local_168;
  double dStack_160;
  FProjectedShadowInfo *local_158;
  FViewInfo *pFStack_150;
  double local_148;
  wchar_t *pwStack_140;
  FScriptContainerElement *local_138;
  double dStack_130;
  undefined1 local_128;
  undefined1 uStack_127;
  byte bStack_126;
  undefined1 uStack_125;
  int iStack_124;
  FLightSceneProxy *pFStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  FShadowProjectionPassParameters *pFStack_110;
  FRDGParameterStruct local_108;
  FName local_f0;
  FRDGTextureAccess local_e8;
  FRDGTextureAccess local_d0;
  FRDGTextureAccess local_b8;
  undefined1 local_a0 [24];
  FViewShaderParameters local_88 [2];
  
  FVar19 = StatPtr_STAT_RenderWholeSceneShadowProjectionsTime;
  local_res20 = param_3;
  if (StatPtr_STAT_RenderWholeSceneShadowProjectionsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowProjectionsTime>)0x0) {
    pFVar18 = ::FName::FName(&local_f0,"STAT_RenderWholeSceneShadowProjectionsTime");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowProjectionsTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RenderWholeSceneShadowProjectionsTime,*pFVar18,
                        L"WholeScene Shadow Projections","STATGROUP_ShadowRendering",
                        "STATCAT_Advanced",L"Shadow Rendering",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar28 = *(FName *)FVar19;
  bVar10 = false;
  bVar12 = false;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  if ((FVar28.ComparisonIndex.Value.Value != 0) || (FVar28.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                   ,0x612);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar11 = true;
      goto LAB_1455c03d1;
    }
  }
  bVar11 = false;
  FVar28 = local_1a0;
LAB_1455c03d1:
  pFVar3 = this->LightSceneInfo->Proxy;
  (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&local_178);
  pFVar4 = (param_2->RenderTargets).Output.Elements[0].Texture;
  local_a0._16_8_ = param_4->_padding_;
  dVar32 = (double)param_4->_padding_ - local_178;
  dVar33 = (double)local_a0._16_8_ - (double)local_168;
  dVar34 = (double)param_4->_padding_ - (double)pwStack_170;
  dVar31 = (double)(*(float *)&param_4->_padding_ + *(float *)&param_4->_padding_) +
           dStack_160 * __real_3ff0ccccc0000000;
  pFVar20 = FRDGBuilder::AllocParameters<FShadowProjectionPassParameters>(param_1);
  pFVar14 = param_4;
  lVar27 = 3;
  pFVar15 = pFVar20;
  do {
    pFVar30 = param_2;
    pFVar25 = pFVar15;
    uVar7 = *(undefined8 *)&(pFVar30->View).View.field_0x8;
    *(undefined8 *)&(pFVar25->View).View = *(undefined8 *)&(pFVar30->View).View;
    *(undefined8 *)&(pFVar25->View).View.field_0x8 = uVar7;
    uVar7 = *(undefined8 *)&(pFVar30->View).InstancedView.field_0x8;
    *(undefined8 *)&(pFVar25->View).InstancedView = *(undefined8 *)&(pFVar30->View).InstancedView;
    *(undefined8 *)&(pFVar25->View).InstancedView.field_0x8 = uVar7;
    uVar7 = *(undefined8 *)&(pFVar30->HairStrands).field_0x8;
    *(undefined8 *)&pFVar25->HairStrands = *(undefined8 *)&pFVar30->HairStrands;
    *(undefined8 *)&(pFVar25->HairStrands).field_0x8 = uVar7;
    uVar7 = *(undefined8 *)&(pFVar30->Substrate).field_0x8;
    *(undefined8 *)&pFVar25->Substrate = *(undefined8 *)&pFVar30->Substrate;
    *(undefined8 *)&(pFVar25->Substrate).field_0x8 = uVar7;
    uVar7 = *(undefined8 *)&(pFVar30->SceneTextures).SceneTextures.field_0x8;
    *(undefined8 *)&(pFVar25->SceneTextures).SceneTextures =
         *(undefined8 *)&(pFVar30->SceneTextures).SceneTextures;
    *(undefined8 *)&(pFVar25->SceneTextures).SceneTextures.field_0x8 = uVar7;
    uVar7 = *(undefined8 *)&(pFVar30->SceneTextures).MobileSceneTextures.field_0x8;
    *(undefined8 *)&(pFVar25->SceneTextures).MobileSceneTextures =
         *(undefined8 *)&(pFVar30->SceneTextures).MobileSceneTextures;
    *(undefined8 *)&(pFVar25->SceneTextures).MobileSceneTextures.field_0x8 = uVar7;
    uVar7 = *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).DrawIndirectArgsBuffer.field_0x8;
    *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).DrawIndirectArgsBuffer =
         *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).DrawIndirectArgsBuffer;
    *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).DrawIndirectArgsBuffer.field_0x8 = uVar7;
    uVar7 = *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).InstanceIdOffsetBuffer.field_0x8;
    *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).InstanceIdOffsetBuffer =
         *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).InstanceIdOffsetBuffer;
    *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).InstanceIdOffsetBuffer.field_0x8 = uVar7;
    lVar27 = lVar27 + -1;
    pFVar15 = (FShadowProjectionPassParameters *)
              &(pFVar25->InstanceCullingDrawParams).InstanceDataByteOffset;
    param_2 = (FShadowProjectionPassParameters *)
              &(pFVar30->InstanceCullingDrawParams).InstanceDataByteOffset;
  } while (lVar27 != 0);
  uVar13 = (pFVar30->InstanceCullingDrawParams).IndirectArgsByteOffset;
  lVar27 = (pFVar30->InstanceCullingDrawParams)._padding_;
  (pFVar25->InstanceCullingDrawParams).InstanceDataByteOffset =
       (pFVar30->InstanceCullingDrawParams).InstanceDataByteOffset;
  (pFVar25->InstanceCullingDrawParams).IndirectArgsByteOffset = uVar13;
  (pFVar25->InstanceCullingDrawParams)._padding_ = lVar27;
  uVar7 = *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).InstanceCulling.field_0x8;
  *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).InstanceCulling =
       *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).InstanceCulling;
  *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).InstanceCulling.field_0x8 = uVar7;
  uVar7 = *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).Scene.field_0x8;
  *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).Scene =
       *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).Scene;
  *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).Scene.field_0x8 = uVar7;
  uVar7 = *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).BatchedPrimitive.field_0x8;
  *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).BatchedPrimitive =
       *(undefined8 *)&(pFVar30->InstanceCullingDrawParams).BatchedPrimitive;
  *(undefined8 *)&(pFVar25->InstanceCullingDrawParams).BatchedPrimitive.field_0x8 = uVar7;
  uVar7 = *(undefined8 *)&(pFVar30->ShadowTexture0).field_0x8;
  *(undefined8 *)&pFVar25->ShadowTexture0 = *(undefined8 *)&pFVar30->ShadowTexture0;
  *(undefined8 *)&(pFVar25->ShadowTexture0).field_0x8 = uVar7;
  uVar7 = *(undefined8 *)&pFVar30->ShadowTexture1;
  *(undefined8 *)&(pFVar25->ShadowTexture0).field_0x10 =
       *(undefined8 *)&(pFVar30->ShadowTexture0).field_0x10;
  *(undefined8 *)&pFVar25->ShadowTexture1 = uVar7;
  uVar7 = *(undefined8 *)&(pFVar30->ShadowTexture1).field_0x10;
  *(undefined8 *)&(pFVar25->ShadowTexture1).field_0x8 =
       *(undefined8 *)&(pFVar30->ShadowTexture1).field_0x8;
  *(undefined8 *)&(pFVar25->ShadowTexture1).field_0x10 = uVar7;
  pFVar21 = FViewInfo::GetShaderParameters(param_4,local_88);
  uVar7 = *(undefined8 *)&(pFVar21->View).field_0x8;
  uVar8 = *(undefined8 *)&pFVar21->InstancedView;
  uVar9 = *(undefined8 *)&(pFVar21->InstancedView).field_0x8;
  *(undefined8 *)&(pFVar20->View).View = *(undefined8 *)&pFVar21->View;
  *(undefined8 *)&(pFVar20->View).View.field_0x8 = uVar7;
  *(undefined8 *)&(pFVar20->View).InstancedView = uVar8;
  *(undefined8 *)&(pFVar20->View).InstancedView.field_0x8 = uVar9;
  if ((pFVar4 == (FRDGTexture *)0x0) || ((pFVar4->_padding_ & 0x400) == 0)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  (pFVar20->RenderTargets).Output.Elements[0].LoadAction = !bVar16 + ELoad;
  bVar16 = FRenderTargetBinding::Validate((FRenderTargetBinding *)&pFVar20->RenderTargets);
  if (!bVar16) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Validate()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                        ,0x256,L"");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (FViewInfo *)(this->RenderTargets).DepthTarget;
  if (pFVar5 == (FViewInfo *)0x0) {
    if ((this->RenderTargets).ColorTargets.ArrayNum < 1) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_1b0.Reference = *(this->RenderTargets).ColorTargets.AllocatorInstance.Data;
    if (local_1b0.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_1b0.Reference)->_padding_ + 0x30))();
    }
    pFVar22 = FRDGBuilder::RegisterExternalTexture(param_1,&local_1b0,None);
    FRDGTextureAccess::FRDGTextureAccess(&local_d0,pFVar22,SRVGraphics);
    *(undefined4 *)&pFVar20->ShadowTexture0 = local_d0.Texture._0_4_;
    *(undefined4 *)&(pFVar20->ShadowTexture0).field_0x4 = local_d0.Texture._4_4_;
    (pFVar20->ShadowTexture0).field_0x8 = local_d0.SubresourceRange.MipIndex;
    (pFVar20->ShadowTexture0).field_0x9 = local_d0.SubresourceRange.PlaneSlice;
    *(ushort *)&(pFVar20->ShadowTexture0).field_0xa = local_d0.SubresourceRange.ArraySlice;
    (pFVar20->ShadowTexture0).field_0xc = local_d0.SubresourceRange.NumMips;
    (pFVar20->ShadowTexture0).field_0xd = local_d0.SubresourceRange.NumPlaneSlices;
    *(ushort *)&(pFVar20->ShadowTexture0).field_0xe = local_d0.SubresourceRange.NumArraySlices;
    *(ERHIAccess *)&(pFVar20->ShadowTexture0).field_0x10 = local_d0.Access;
    *(undefined4 *)&(pFVar20->ShadowTexture0).field_0x14 = local_d0._20_4_;
    if (local_1b0.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_1b0.Reference)->_padding_ + 0x38))();
    }
    if ((this->RenderTargets).ColorTargets.ArrayNum < 2) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_1a8.Reference = (this->RenderTargets).ColorTargets.AllocatorInstance.Data[1];
    if ((FViewInfo *)local_1a8.Reference != (FViewInfo *)0x0) {
      (**(code **)(((FViewInfo *)local_1a8.Reference)->_padding_ + 0x30))();
    }
    pFVar22 = FRDGBuilder::RegisterExternalTexture(param_1,&local_1a8,None);
    FRDGTextureAccess::FRDGTextureAccess(&local_b8,pFVar22,SRVGraphics);
    *(undefined4 *)&pFVar20->ShadowTexture1 = local_b8.Texture._0_4_;
    *(undefined4 *)&(pFVar20->ShadowTexture1).field_0x4 = local_b8.Texture._4_4_;
    (pFVar20->ShadowTexture1).field_0x8 = local_b8.SubresourceRange.MipIndex;
    (pFVar20->ShadowTexture1).field_0x9 = local_b8.SubresourceRange.PlaneSlice;
    *(ushort *)&(pFVar20->ShadowTexture1).field_0xa = local_b8.SubresourceRange.ArraySlice;
    (pFVar20->ShadowTexture1).field_0xc = local_b8.SubresourceRange.NumMips;
    (pFVar20->ShadowTexture1).field_0xd = local_b8.SubresourceRange.NumPlaneSlices;
    *(ushort *)&(pFVar20->ShadowTexture1).field_0xe = local_b8.SubresourceRange.NumArraySlices;
    *(ERHIAccess *)&(pFVar20->ShadowTexture1).field_0x10 = local_b8.Access;
    *(undefined4 *)&(pFVar20->ShadowTexture1).field_0x14 = local_b8._20_4_;
    TVar26.Reference = local_1a8.Reference;
  }
  else {
    param_4 = pFVar5;
    (**(code **)(pFVar5->_padding_ + 0x30))();
    pFVar22 = FRDGBuilder::RegisterExternalTexture
                        (param_1,(TRefCountPtr<IPooledRenderTarget> *)&param_4,None);
    FRDGTextureAccess::FRDGTextureAccess(&local_e8,pFVar22,SRVGraphics);
    *(undefined4 *)&pFVar20->ShadowTexture0 = local_e8.Texture._0_4_;
    *(undefined4 *)&(pFVar20->ShadowTexture0).field_0x4 = local_e8.Texture._4_4_;
    (pFVar20->ShadowTexture0).field_0x8 = local_e8.SubresourceRange.MipIndex;
    (pFVar20->ShadowTexture0).field_0x9 = local_e8.SubresourceRange.PlaneSlice;
    *(ushort *)&(pFVar20->ShadowTexture0).field_0xa = local_e8.SubresourceRange.ArraySlice;
    (pFVar20->ShadowTexture0).field_0xc = local_e8.SubresourceRange.NumMips;
    (pFVar20->ShadowTexture0).field_0xd = local_e8.SubresourceRange.NumPlaneSlices;
    *(ushort *)&(pFVar20->ShadowTexture0).field_0xe = local_e8.SubresourceRange.NumArraySlices;
    *(ERHIAccess *)&(pFVar20->ShadowTexture0).field_0x10 = local_e8.Access;
    *(undefined4 *)&(pFVar20->ShadowTexture0).field_0x14 = local_e8._20_4_;
    TVar26.Reference = (IPooledRenderTarget *)param_4;
  }
  if ((FViewInfo *)TVar26.Reference != (FViewInfo *)0x0) {
    (**(code **)(((FViewInfo *)TVar26.Reference)->_padding_ + 0x38))();
  }
  local_128 = param_6;
  iStack_124 = local_res20;
  pFStack_120 = param_5;
  local_118 = param_7;
  pFStack_150 = pFVar14;
  EVar29 = Raster;
  if (pFVar4 == (FRDGTexture *)0x0) {
    EVar29 = SkipRenderPass|Raster;
  }
  local_148 = local_178;
  pwStack_140 = pwStack_170;
  local_138 = local_168;
  dStack_130 = dStack_160;
  local_158 = this;
  uStack_127 = dVar34 * dVar34 + dVar32 * dVar32 + dVar33 * dVar33 < dVar31 * dVar31;
  bStack_126 = this->LightSceneInfo->Proxy->bTransmission;
  pFStack_110 = pFVar20;
  this_00 = FRDGEventName::FRDGEventName((FRDGEventName *)local_a0,1,L"OnePassPointLightProjection")
  ;
  pFVar23 = FShadowProjectionPassParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar20,pFVar23,this_00,EVar29);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  pwVar24 = FRDGEventName::GetTCHAR(this_00);
  _param_6 = FRDGBuilder::OverridePassFlags(param_1,pwVar24,EVar29);
  this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1d8,8);
  local_108.Contents = (uchar *)pFVar20;
  if ((pFVar23->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsLayoutInitialized()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                        ,0x17c,L"");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_108.Layout.Reference = (pFVar23->Layout).Reference;
  if (local_108.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_108.Layout.Reference);
  }
  local_108.Metadata = pFVar23;
  FRDGPass::FRDGPass(this_01,this_00,&local_108,_param_6,Async);
  this_01->_padding_ =
       (longlong)
       &TRDGLambdaPass<FShadowProjectionPassParameters,`FProjectedShadowInfo::RenderOnePassPointLightProjection'::`2'::<lambda_1>_>
        ::_vftable_;
  this_01[1]._padding_ = (longlong)local_158;
  this_01[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_150;
  *(FShadowProjectionPassParameters **)&this_01[1].Workload = pFVar20;
  *(double *)&this_01[1].FullPathIfDebug.Data.ArrayNum = local_178;
  this_01[1].Name.EventFormat = pwStack_170;
  this_01[1].Name.FormattedEventName.Data.AllocatorInstance.Data = local_168;
  *(double *)&this_01[1].Name.FormattedEventName.Data.ArrayNum = dStack_160;
  this_01[1].ParameterStruct.Contents =
       (uchar *)CONCAT44(iStack_124,
                         CONCAT13(uStack_125,CONCAT12(bStack_126,CONCAT11(uStack_127,local_128))));
  this_01[1].ParameterStruct.Layout.Reference = (FRHIUniformBufferLayout *)pFStack_120;
  this_01[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)CONCAT71(uStack_117,local_118);
  *(FShadowProjectionPassParameters **)&this_01[1].Flags = pFStack_110;
  FRDGBuilder::ClobberPassOutputs(param_1,this_01);
  iVar17 = (param_1->Passes).Array.ArrayNum;
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  if (iVar17 == *piVar1) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar17 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar17] = this_01;
  (this_01->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(param_1,this_01);
  if ((FScriptContainerElement *)local_a0._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a0._8_8_);
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_188.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_188.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_190);
      local_188.StatData.Pad[4] = '\0';
      local_188.StatData.Pad[5] = '\0';
      local_188.StatData.Pad[6] = '\0';
      local_188.StatData.Pad[7] = '\0';
      local_188.StatData.Pad[0] = local_190.s.LowPart._0_1_;
      local_188.StatData.Pad[1] = local_190.s.LowPart._1_1_;
      local_188.StatData.Pad[2] = local_190.s.LowPart._2_1_;
      local_188.StatData.Pad[3] = local_190.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_188);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// RenderProjection @ 1455c0a20

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::RenderProjection
          (FProjectedShadowInfo *this,FRDGBuilder *param_1,FShadowProjectionPassParameters *param_2,
          int param_3,FViewInfo *param_4,FLightSceneProxy *param_5,FSceneRenderer *param_6,
          bool param_7,bool param_8)

{
  int *piVar1;
  double dVar2;
  FVisibleLightViewInfo *pFVar3;
  FHairStrandsViewData *pFVar4;
  IPooledRenderTarget *pIVar5;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar6;
  FSimpleMeshDrawCommandPass *this_00;
  FScene *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TConsoleVariableData<int> *pTVar14;
  FSceneRenderer *pFVar15;
  FShadowProjectionPassParameters *pFVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  ERDGPassFlags EVar20;
  uint uVar21;
  int iVar22;
  FRDGTexture *pFVar23;
  FShadowProjectionPassParameters *pFVar24;
  longlong lVar25;
  FViewShaderParameters *pFVar26;
  FRDGTexture *pFVar27;
  FViewInfo *pFVar28;
  FRDGEventName *this_01;
  FShaderParametersMetadata *pFVar29;
  wchar_t *pwVar30;
  FRDGPass *this_02;
  uint uVar31;
  ulonglong uVar32;
  FShadowProjectionPassParameters *pFVar33;
  TRefCountPtr<IPooledRenderTarget> TVar34;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar35;
  FShadowProjectionPassParameters *pFVar36;
  FViewInfo *this_03;
  uint uVar37;
  FRDGBuilder *pFVar38;
  undefined1 auStackY_3c8 [32];
  undefined1 local_398;
  bool local_397 [3];
  uint local_394;
  uint local_390;
  FViewInfo *local_388;
  FSceneRenderer *local_380;
  FRDGBuilder *local_378;
  FRDGTexture *local_370;
  FString local_368;
  TRefCountPtr<IPooledRenderTarget> local_358;
  TRefCountPtr<IPooledRenderTarget> local_350;
  TRefCountPtr<IPooledRenderTarget> local_348;
  FProjectedShadowInfo *local_340;
  FSceneRenderer *pFStack_338;
  FViewInfo *local_330;
  uint uStack_328;
  undefined4 uStack_324;
  FLightSceneProxy *local_320;
  bool bStack_318;
  undefined7 uStack_317;
  FInstanceCullingDrawParams *local_310;
  bool bStack_308;
  undefined7 uStack_307;
  FShadowProjectionPassParameters *local_300;
  FRDGParameterStruct local_2f8;
  TPlane<double> local_2d8;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  FRDGTextureAccess local_218;
  FRDGTextureAccess local_200;
  FRDGTextureAccess local_1e8;
  FRDGEventName local_1d0;
  undefined1 local_1b8 [32];
  TArray<UE::Math::TVector4<float>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_198;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_380 = param_6;
  uVar37 = this->LightSceneInfo->Id;
  local_388 = param_4;
  uVar31 = 0;
  if ((int)uVar37 < (param_4->VisibleLightInfos).ArrayNum) {
    uVar31 = ~uVar37 >> 0x1f;
  }
  local_394 = param_3;
  local_378 = param_1;
  if ((uVar31 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar3 = (param_4->VisibleLightInfos).AllocatorInstance.Data;
  uVar31 = this->ShadowId;
  uVar21 = 0;
  if ((int)uVar31 < pFVar3[(int)uVar37].ProjectedShadowViewRelevanceMap.ArrayNum) {
    uVar21 = ~uVar31 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (pFVar3[(int)uVar37].ProjectedShadowViewRelevanceMap.AllocatorInstance.Data[(int)uVar31].
      bShadowRelevance == 0) {
    return;
  }
  local_198.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TVector4<float>_>)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 8;
  SetupFrustumForProjection(this,param_4,&local_198,local_397,&local_2d8);
  if ((((((char)(this->bWholeSceneShadow << 7) < '\0') &&
        (-1 < (this->CascadeSettings).ShadowSplitIndex)) && (this->bDirectionalLight != 0)) &&
      ((GRHIGlobals.SupportsDepthBoundsTest != false &&
       (bVar17 = IsInParallelRenderingThread(), !bVar17)))) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar14 = CVarHairStrandsCullPerObjectShadowCaster.Ref;
  if (param_8) {
    if ((this->bPreShadow != 0) &&
       (((this->ReceiverPrimitives).ArrayNum < 1 ||
        ((*(this->ReceiverPrimitives).AllocatorInstance.Data)->Proxy->bCastDeepShadow == '\0'))))
    goto LAB_1455c1613;
    bVar17 = 0 < local_198.ArrayNum;
    if (0 < local_198.ArrayNum) {
      bVar18 = IsInParallelRenderingThread();
      if ((!bVar18) &&
         (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (0 < pTVar14->ShadowedValue[1]) {
        pFVar4 = param_4->HairStrandsViewData;
        local_390 = (pFVar4->MacroGroupDatas).ArrayNum;
        uVar32 = (ulonglong)(int)local_390;
        pFVar27 = (FRDGTexture *)(pFVar4->MacroGroupDatas).AllocatorInstance.Data;
        pFVar23 = (FRDGTexture *)(&pFVar27->_padding_ + uVar32 * 0xf);
        local_370 = pFVar23;
        while( true ) {
          if ((pFVar4->MacroGroupDatas).ArrayNum != (int)uVar32) {
            local_398 = 0;
            `TCheckedPointerIterator<FHairStrandsMacroGroupData,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_398);
            uVar32 = (ulonglong)local_390;
            pFVar23 = local_370;
          }
          if (pFVar27 == pFVar23) break;
          dVar9 = (double)pFVar27->_padding_;
          dVar10 = (double)pFVar27->_padding_;
          local_1b8._16_8_ = pFVar27->_padding_;
          dVar2 = (double)pFVar27->_padding_;
          if (((((double)(float)(local_2d8.W -
                                ((double)local_2d8._padding_ * dVar10 +
                                 (double)local_2d8._padding_ * dVar9 +
                                (double)local_2d8._padding_ * (double)local_1b8._16_8_)) - dVar2 <=
                 0.0) && ((double)(float)(local_2a0 -
                                         (local_2b0 * dVar10 + local_2b8 * dVar9 +
                                         local_2a8 * (double)local_1b8._16_8_)) - dVar2 <= 0.0)) &&
              ((double)(float)(local_280 -
                              (local_290 * dVar10 + local_298 * dVar9 +
                              local_288 * (double)local_1b8._16_8_)) - dVar2 <= 0.0)) &&
             ((((double)(float)(local_260 -
                               (local_270 * dVar10 + local_278 * dVar9 +
                               local_268 * (double)local_1b8._16_8_)) - dVar2 <= 0.0 &&
               ((double)(float)(local_240 -
                               (local_250 * dVar10 + local_258 * dVar9 +
                               local_248 * (double)local_1b8._16_8_)) - dVar2 <= 0.0)) &&
              ((double)(float)(local_220 -
                              (local_230 * dVar10 + local_238 * dVar9 +
                              local_228 * (double)local_1b8._16_8_)) - dVar2 <= 0.0))))
          goto LAB_1455c0ef6;
          bVar17 = false;
          pFVar27 = (FRDGTexture *)&pFVar27->_padding_;
        }
        if (!bVar17) goto LAB_1455c1613;
      }
    }
  }
LAB_1455c0ef6:
  local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Data.ArrayNum = 0;
  local_368.Data.ArrayMax = 0;
  bVar17 = GetEmitDrawEvents();
  if (bVar17) {
    GetShadowTypeNameForDrawEvent(this,&local_368);
  }
  pFVar38 = local_378;
  pFVar27 = (param_2->RenderTargets).Output.Elements[0].Texture;
  local_370 = pFVar27;
  pFVar24 = FRDGBuilder::AllocParameters<FShadowProjectionPassParameters>(local_378);
  lVar25 = 3;
  pFVar16 = pFVar24;
  do {
    pFVar36 = param_2;
    pFVar33 = pFVar16;
    uVar11 = *(undefined8 *)&(pFVar36->View).View.field_0x8;
    *(undefined8 *)&(pFVar33->View).View = *(undefined8 *)&(pFVar36->View).View;
    *(undefined8 *)&(pFVar33->View).View.field_0x8 = uVar11;
    uVar11 = *(undefined8 *)&(pFVar36->View).InstancedView.field_0x8;
    *(undefined8 *)&(pFVar33->View).InstancedView = *(undefined8 *)&(pFVar36->View).InstancedView;
    *(undefined8 *)&(pFVar33->View).InstancedView.field_0x8 = uVar11;
    uVar11 = *(undefined8 *)&(pFVar36->HairStrands).field_0x8;
    *(undefined8 *)&pFVar33->HairStrands = *(undefined8 *)&pFVar36->HairStrands;
    *(undefined8 *)&(pFVar33->HairStrands).field_0x8 = uVar11;
    uVar11 = *(undefined8 *)&(pFVar36->Substrate).field_0x8;
    *(undefined8 *)&pFVar33->Substrate = *(undefined8 *)&pFVar36->Substrate;
    *(undefined8 *)&(pFVar33->Substrate).field_0x8 = uVar11;
    uVar11 = *(undefined8 *)&(pFVar36->SceneTextures).SceneTextures.field_0x8;
    *(undefined8 *)&(pFVar33->SceneTextures).SceneTextures =
         *(undefined8 *)&(pFVar36->SceneTextures).SceneTextures;
    *(undefined8 *)&(pFVar33->SceneTextures).SceneTextures.field_0x8 = uVar11;
    uVar11 = *(undefined8 *)&(pFVar36->SceneTextures).MobileSceneTextures.field_0x8;
    *(undefined8 *)&(pFVar33->SceneTextures).MobileSceneTextures =
         *(undefined8 *)&(pFVar36->SceneTextures).MobileSceneTextures;
    *(undefined8 *)&(pFVar33->SceneTextures).MobileSceneTextures.field_0x8 = uVar11;
    uVar11 = *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).DrawIndirectArgsBuffer.field_0x8;
    *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).DrawIndirectArgsBuffer =
         *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).DrawIndirectArgsBuffer;
    *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).DrawIndirectArgsBuffer.field_0x8 = uVar11;
    uVar11 = *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).InstanceIdOffsetBuffer.field_0x8;
    *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).InstanceIdOffsetBuffer =
         *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).InstanceIdOffsetBuffer;
    *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).InstanceIdOffsetBuffer.field_0x8 = uVar11;
    lVar25 = lVar25 + -1;
    pFVar16 = (FShadowProjectionPassParameters *)
              &(pFVar33->InstanceCullingDrawParams).InstanceDataByteOffset;
    param_2 = (FShadowProjectionPassParameters *)
              &(pFVar36->InstanceCullingDrawParams).InstanceDataByteOffset;
  } while (lVar25 != 0);
  uVar37 = (pFVar36->InstanceCullingDrawParams).IndirectArgsByteOffset;
  lVar25 = (pFVar36->InstanceCullingDrawParams)._padding_;
  (pFVar33->InstanceCullingDrawParams).InstanceDataByteOffset =
       (pFVar36->InstanceCullingDrawParams).InstanceDataByteOffset;
  (pFVar33->InstanceCullingDrawParams).IndirectArgsByteOffset = uVar37;
  (pFVar33->InstanceCullingDrawParams)._padding_ = lVar25;
  uVar11 = *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).InstanceCulling.field_0x8;
  *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).InstanceCulling =
       *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).InstanceCulling;
  *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).InstanceCulling.field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).Scene.field_0x8;
  *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).Scene =
       *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).Scene;
  *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).Scene.field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).BatchedPrimitive.field_0x8;
  *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).BatchedPrimitive =
       *(undefined8 *)&(pFVar36->InstanceCullingDrawParams).BatchedPrimitive;
  *(undefined8 *)&(pFVar33->InstanceCullingDrawParams).BatchedPrimitive.field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&(pFVar36->ShadowTexture0).field_0x8;
  *(undefined8 *)&pFVar33->ShadowTexture0 = *(undefined8 *)&pFVar36->ShadowTexture0;
  *(undefined8 *)&(pFVar33->ShadowTexture0).field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&pFVar36->ShadowTexture1;
  *(undefined8 *)&(pFVar33->ShadowTexture0).field_0x10 =
       *(undefined8 *)&(pFVar36->ShadowTexture0).field_0x10;
  *(undefined8 *)&pFVar33->ShadowTexture1 = uVar11;
  uVar11 = *(undefined8 *)&(pFVar36->ShadowTexture1).field_0x10;
  *(undefined8 *)&(pFVar33->ShadowTexture1).field_0x8 =
       *(undefined8 *)&(pFVar36->ShadowTexture1).field_0x8;
  *(undefined8 *)&(pFVar33->ShadowTexture1).field_0x10 = uVar11;
  pFVar26 = FViewInfo::GetShaderParameters(param_4,(FViewShaderParameters *)local_1b8);
  uVar11 = *(undefined8 *)&(pFVar26->View).field_0x8;
  uVar12 = *(undefined8 *)&pFVar26->InstancedView;
  uVar13 = *(undefined8 *)&(pFVar26->InstancedView).field_0x8;
  *(undefined8 *)&(pFVar24->View).View = *(undefined8 *)&pFVar26->View;
  *(undefined8 *)&(pFVar24->View).View.field_0x8 = uVar11;
  *(undefined8 *)&(pFVar24->View).InstancedView = uVar12;
  *(undefined8 *)&(pFVar24->View).InstancedView.field_0x8 = uVar13;
  if (*(char *)((longlong)&param_4->_padding_ + 5) == '\0') {
    bVar19 = *(byte *)((longlong)&param_4->_padding_ + 2) >> 1 & 1;
  }
  else {
    bVar19 = 2;
  }
  (pFVar24->RenderTargets).MultiViewCount = bVar19;
  if ((pFVar27 == (FRDGTexture *)0x0) || (uVar37 = 1, (pFVar27->_padding_ & 0x400) == 0)) {
    uVar37 = 0;
  }
  (pFVar24->RenderTargets).Output.Elements[0].LoadAction = (uVar37 == 0) + ELoad;
  bVar17 = FRenderTargetBinding::Validate((FRenderTargetBinding *)&pFVar24->RenderTargets);
  if ((!bVar17) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x256,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pIVar5 = (this->RenderTargets).DepthTarget;
  if (pIVar5 == (IPooledRenderTarget *)0x0) {
    if (((this->RenderTargets).ColorTargets.ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_350.Reference = *(this->RenderTargets).ColorTargets.AllocatorInstance.Data;
    if (local_350.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_350.Reference)->_padding_ + 0x30))();
    }
    pFVar27 = FRDGBuilder::RegisterExternalTexture(pFVar38,&local_350,None);
    FRDGTextureAccess::FRDGTextureAccess(&local_200,pFVar27,SRVGraphics);
    *(undefined4 *)&pFVar24->ShadowTexture0 = local_200.Texture._0_4_;
    *(undefined4 *)&(pFVar24->ShadowTexture0).field_0x4 = local_200.Texture._4_4_;
    (pFVar24->ShadowTexture0).field_0x8 = local_200.SubresourceRange.MipIndex;
    (pFVar24->ShadowTexture0).field_0x9 = local_200.SubresourceRange.PlaneSlice;
    *(ushort *)&(pFVar24->ShadowTexture0).field_0xa = local_200.SubresourceRange.ArraySlice;
    (pFVar24->ShadowTexture0).field_0xc = local_200.SubresourceRange.NumMips;
    (pFVar24->ShadowTexture0).field_0xd = local_200.SubresourceRange.NumPlaneSlices;
    *(ushort *)&(pFVar24->ShadowTexture0).field_0xe = local_200.SubresourceRange.NumArraySlices;
    *(ERHIAccess *)&(pFVar24->ShadowTexture0).field_0x10 = local_200.Access;
    *(undefined4 *)&(pFVar24->ShadowTexture0).field_0x14 = local_200._20_4_;
    if (local_350.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_350.Reference)->_padding_ + 0x38))();
    }
    if (((this->RenderTargets).ColorTargets.ArrayNum < 2) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_348.Reference = (this->RenderTargets).ColorTargets.AllocatorInstance.Data[1];
    if (local_348.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_348.Reference)->_padding_ + 0x30))();
    }
    pFVar27 = FRDGBuilder::RegisterExternalTexture(pFVar38,&local_348,None);
    FRDGTextureAccess::FRDGTextureAccess(&local_1e8,pFVar27,SRVGraphics);
    *(undefined4 *)&pFVar24->ShadowTexture1 = local_1e8.Texture._0_4_;
    *(undefined4 *)&(pFVar24->ShadowTexture1).field_0x4 = local_1e8.Texture._4_4_;
    (pFVar24->ShadowTexture1).field_0x8 = local_1e8.SubresourceRange.MipIndex;
    (pFVar24->ShadowTexture1).field_0x9 = local_1e8.SubresourceRange.PlaneSlice;
    *(ushort *)&(pFVar24->ShadowTexture1).field_0xa = local_1e8.SubresourceRange.ArraySlice;
    (pFVar24->ShadowTexture1).field_0xc = local_1e8.SubresourceRange.NumMips;
    (pFVar24->ShadowTexture1).field_0xd = local_1e8.SubresourceRange.NumPlaneSlices;
    *(ushort *)&(pFVar24->ShadowTexture1).field_0xe = local_1e8.SubresourceRange.NumArraySlices;
    *(ERHIAccess *)&(pFVar24->ShadowTexture1).field_0x10 = local_1e8.Access;
    *(undefined4 *)&(pFVar24->ShadowTexture1).field_0x14 = local_1e8._20_4_;
    TVar34.Reference = local_348.Reference;
  }
  else {
    local_358.Reference = pIVar5;
    (**(code **)(pIVar5->_padding_ + 0x30))();
    pFVar27 = FRDGBuilder::RegisterExternalTexture(pFVar38,&local_358,None);
    FRDGTextureAccess::FRDGTextureAccess(&local_218,pFVar27,SRVGraphics);
    *(undefined4 *)&pFVar24->ShadowTexture0 = local_218.Texture._0_4_;
    *(undefined4 *)&(pFVar24->ShadowTexture0).field_0x4 = local_218.Texture._4_4_;
    (pFVar24->ShadowTexture0).field_0x8 = local_218.SubresourceRange.MipIndex;
    (pFVar24->ShadowTexture0).field_0x9 = local_218.SubresourceRange.PlaneSlice;
    *(ushort *)&(pFVar24->ShadowTexture0).field_0xa = local_218.SubresourceRange.ArraySlice;
    (pFVar24->ShadowTexture0).field_0xc = local_218.SubresourceRange.NumMips;
    (pFVar24->ShadowTexture0).field_0xd = local_218.SubresourceRange.NumPlaneSlices;
    *(ushort *)&(pFVar24->ShadowTexture0).field_0xe = local_218.SubresourceRange.NumArraySlices;
    *(ERHIAccess *)&(pFVar24->ShadowTexture0).field_0x10 = local_218.Access;
    *(undefined4 *)&(pFVar24->ShadowTexture0).field_0x14 = local_218._20_4_;
    TVar34.Reference = local_358.Reference;
  }
  if (TVar34.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((TVar34.Reference)->_padding_ + 0x38))();
  }
  if (((*(char *)((longlong)&param_4->_padding_ + 3) == '\0') ||
      (*(char *)((longlong)&param_4->_padding_ + 5) != '\0')) ||
     (bVar17 = IStereoRendering::IsStereoEyeView((FSceneView *)param_4), !bVar17)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if ((int)local_394 < (this->ProjectionStencilingPasses).ArrayNum) {
    uVar37 = ~local_394;
    if (((int)local_394 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar6 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
    lVar25 = (longlong)(int)local_394;
    FVar35 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
    if (FVar6 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
      FVar35 = FVar6;
    }
    pFVar38 = local_378;
    if (*(longlong *)((longlong)FVar35 + lVar25 * 8) == 0) goto LAB_1455c1318;
    uVar31 = 0;
    if ((int)local_394 < (this->ProjectionStencilingPasses).ArrayNum) {
      uVar31 = uVar37 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar15 = local_380;
    this_03 = local_388;
    FVar6 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
    FVar35 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
    if (FVar6 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
      FVar35 = FVar6;
    }
    FSimpleMeshDrawCommandPass::BuildRenderingCommands
              (*(FSimpleMeshDrawCommandPass **)((longlong)FVar35 + lVar25 * 8),local_378,
               (FSceneView *)local_388,*(FScene **)&local_380->field_0x8,
               &pFVar24->InstanceCullingDrawParams);
    pFStack_338 = pFVar15;
  }
  else {
LAB_1455c1318:
    this_03 = local_388;
    pFStack_338 = local_380;
    if ((bVar17) && (this->bPreShadow != 0 || this->bSelfShadowOnly != 0)) {
      if (((int)local_388->_padding_ != 2) &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3477770809257229017>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                              ,0x527,"View->StereoPass == EStereoscopicPass::eSSP_SECONDARY"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((this->ProjectionStencilingPasses).ArrayNum < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar6 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
      FVar35 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
      if (FVar6 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
        FVar35 = FVar6;
      }
      this_00 = *(FSimpleMeshDrawCommandPass **)FVar35;
      if (((this_00->InstanceCullingContext).InstanceCullingMode != Stereo) &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3477770809257229013>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                              ,0x52b,
                              "ProjectionStencilingPass.GetInstanceCullingMode() == EInstanceCullingMode::Stereo"
                             ), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar15 = local_380;
      pFVar7 = *(FScene **)&local_380->field_0x8;
      pFVar28 = FViewInfo::GetPrimaryView(this_03);
      FSimpleMeshDrawCommandPass::BuildRenderingCommands
                (this_00,pFVar38,(FSceneView *)pFVar28,pFVar7,&pFVar24->InstanceCullingDrawParams);
      pFStack_338 = pFVar15;
    }
  }
  uStack_328 = local_394;
  local_320 = param_5;
  bStack_318 = param_7;
  local_310 = &pFVar24->InstanceCullingDrawParams;
  bStack_308 = param_8;
  EVar20 = Raster;
  if (local_370 == (FRDGTexture *)0x0) {
    EVar20 = SkipRenderPass|Raster;
  }
  local_340 = this;
  local_330 = this_03;
  local_300 = pFVar24;
  this_01 = FRDGEventName::FRDGEventName(&local_1d0,L"%s");
  pFVar29 = FShadowProjectionPassParameters::FTypeInfo::GetStructMetadata();
  pFVar38 = local_378;
  FRDGUserValidation::ValidateAddPass(&local_378->UserValidation,pFVar24,pFVar29,this_01,EVar20);
  FRDGBuilder::FlushAccessModeQueue(pFVar38);
  pwVar30 = FRDGEventName::GetTCHAR(this_01);
  EVar20 = FRDGBuilder::OverridePassFlags(pFVar38,pwVar30,EVar20);
  this_02 = FMemStackBase::Alloc((FMemStackBase *)&pFVar38->_padding_,0x1d0,8);
  local_2f8.Contents = (uchar *)pFVar24;
  if (((pFVar29->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_2f8.Layout.Reference = (pFVar29->Layout).Reference;
  if (local_2f8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_2f8.Layout.Reference);
  }
  local_2f8.Metadata = pFVar29;
  FRDGPass::FRDGPass(this_02,this_01,&local_2f8,EVar20,Async);
  this_02->_padding_ =
       (longlong)
       &TRDGLambdaPass<FShadowProjectionPassParameters,`FProjectedShadowInfo::RenderProjection'::`2'::<lambda_1>_>
        ::_vftable_;
  this_02[1]._padding_ = (longlong)local_340;
  this_02[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFStack_338;
  *(FShadowProjectionPassParameters **)&this_02[1].Flags = pFVar24;
  *(FViewInfo **)&this_02[1].FullPathIfDebug.Data.ArrayNum = local_330;
  this_02[1].Name.EventFormat = (wchar_t *)CONCAT44(uStack_324,uStack_328);
  this_02[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)local_320;
  this_02[1].Name.FormattedEventName.Data.ArrayNum = (int)CONCAT71(uStack_317,bStack_318);
  this_02[1].Name.FormattedEventName.Data.ArrayMax = (int)((uint7)uStack_317 >> 0x18);
  this_02[1].ParameterStruct.Contents = (uchar *)local_310;
  this_02[1].ParameterStruct.Layout.Reference =
       (FRHIUniformBufferLayout *)CONCAT71(uStack_307,bStack_308);
  this_02[1].ParameterStruct.Metadata = (FShaderParametersMetadata *)local_300;
  FRDGBuilder::ClobberPassOutputs(pFVar38,this_02);
  iVar22 = (pFVar38->Passes).Array.ArrayNum;
  piVar1 = &(pFVar38->Passes).Array.ArrayMax;
  if (iVar22 == *piVar1) {
    iVar22 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                       (0x808,(ForElementType<FRDGPass_*> *)&pFVar38->Passes,piVar1);
  }
  (pFVar38->Passes).Array.ArrayNum = iVar22 + 1;
  (pFVar38->Passes).Array.AllocatorInstance.Data[iVar22] = this_02;
  (this_02->Handle).Index = (pFVar38->Passes).Array.ArrayNum - 1;
  FRDGBuilder::SetupParameterPass(pFVar38,this_02);
  if (local_1d0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
LAB_1455c1613:
  if (local_198.AllocatorInstance.SecondaryData != (ForElementType<UE::Math::TVector4<float>_>)0x0)
  {
    FMemory::Free((void *)local_198.AllocatorInstance.SecondaryData);
  }
  return;
}

// RenderProjectionInternal @ 1455c16b0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::RenderProjectionInternal
          (FProjectedShadowInfo *this,FRHICommandList *param_1,int param_2,FViewInfo *param_3,
          FLightSceneProxy *param_4,FSceneRenderer *param_5,bool param_6,bool param_7,
          FInstanceCullingDrawParams *param_8,FRHIUniformBuffer *param_9)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  FRHICommandList *this_00;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FStaticShaderPlatform FVar11;
  uint uVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_RenderPerObjectShadowProjectionsTime> FVar15;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  IConsoleManager *pIVar17;
  longlong *plVar18;
  TConsoleVariableData<float> *pTVar19;
  uint uVar20;
  FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowProjectionsTime> *this_03;
  int iVar22;
  FName FVar23;
  int *piVar24;
  FNameEntryId FVar25;
  ForAnyElementType FVar26;
  wchar_t *pwVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStackY_498 [32];
  bool local_436;
  bool local_435;
  undefined1 local_434;
  bool local_433;
  uint local_430;
  uint uStack_42c;
  int local_428;
  FColor_u_0 local_424;
  FRHICommandList *local_420;
  FString local_418;
  FName local_408;
  FName local_400;
  FInstanceCullingDrawParams *local_3f0;
  LARGE_INTEGER local_3e8;
  FString local_3e0;
  FStatMessage local_3d0;
  FString local_3c0;
  FName local_3b0;
  FName local_3a8 [2];
  FGraphicsPipelineStateInitializer local_398;
  TPlane<double> local_2b8 [6];
  FGraphicsPipelineStateInitializer local_1f8;
  TArray<UE::Math::TVector4<float>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_118;
  ulonglong local_78;
  TConsoleVariableData<float> *pTVar21;
  
  fVar29 = __real_3f800000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_433 = param_6;
  local_435 = param_7;
  local_3f0 = param_8;
  local_428 = param_2;
  local_420 = param_1;
  FRHICommandList::SetViewport
            (param_1,(float)*(int *)&(param_3->ViewRect).field0_0x0,
             (float)*(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 4),0.0,
             (float)*(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 8),
             (float)*(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 0xc),__real_3f800000);
  (**(code **)(param_4->_padding_ + 0xe8))(param_4,param_1,param_3,&param_3->ViewRect);
  if (this->bWholeSceneShadow == 0) {
    FVar15 = StatPtr_STAT_RenderPerObjectShadowProjectionsTime;
    if (StatPtr_STAT_RenderPerObjectShadowProjectionsTime ==
        (FThreadSafeStaticStat<FStat_STAT_RenderPerObjectShadowProjectionsTime>)0x0) {
      pFVar14 = ::FName::FName(local_3a8,"STAT_RenderPerObjectShadowProjectionsTime");
      pwVar27 = L"PerObject Shadow Projections";
      this_03 = (FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowProjectionsTime> *)
                &StatPtr_STAT_RenderPerObjectShadowProjectionsTime;
      goto LAB_1455c1870;
    }
  }
  else {
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_RenderPerObjectShadowProjectionsTime>)
             StatPtr_STAT_RenderWholeSceneShadowProjectionsTime;
    if (StatPtr_STAT_RenderWholeSceneShadowProjectionsTime ==
        (FThreadSafeStaticStat<FStat_STAT_RenderWholeSceneShadowProjectionsTime>)0x0) {
      pFVar14 = ::FName::FName(&local_3b0,"STAT_RenderWholeSceneShadowProjectionsTime");
      pwVar27 = L"WholeScene Shadow Projections";
      this_03 = &StatPtr_STAT_RenderWholeSceneShadowProjectionsTime;
LAB_1455c1870:
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_RenderPerObjectShadowProjectionsTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)this_03,*pFVar14,pwVar27,
                          "STATGROUP_ShadowRendering","STATCAT_Advanced",L"Shadow Rendering",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
  }
  FVar23 = *(FName *)FVar15;
  bVar3 = false;
  bVar6 = false;
  local_400.ComparisonIndex.Value = 0;
  local_400.Number = 0;
  bVar8 = false;
  bVar9 = false;
  FVar25 = FVar23.ComparisonIndex.Value;
  uVar20 = FVar23.Number;
  if ((FVar25.Value == 0) && (uVar20 == 0)) {
LAB_1455c193a:
    bVar6 = bVar9;
    bVar3 = bVar8;
    bVar8 = false;
    FVar23 = local_400;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_424.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_424._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar3 = false;
      bVar6 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_408.ComparisonIndex.Value = FVar25.Value;
        local_408.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_408,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                   ,0x549);
        bVar3 = true;
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1455c193a;
    local_430 = FVar25.Value;
    uStack_42c = uVar20;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar8 = true;
  }
  local_1f8.RenderTargetsEnabled = 0;
  local_1f8.RenderTargetFormats.Elements[0] = '\0';
  local_1f8.RenderTargetFormats.Elements[1] = '\0';
  local_1f8.RenderTargetFormats.Elements[2] = '\0';
  local_1f8.RenderTargetFormats.Elements[3] = '\0';
  local_1f8.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_1f8.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_1f8.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_1f8.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_1f8.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_1f8.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_1f8.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_1f8.BlendState = (FRHIBlendState *)0x0;
  local_1f8.RasterizerState = (FRHIRasterizerState *)0x0;
  local_1f8.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_1f8.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_1f8.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_1f8.RenderTargetFlags.Elements[0] = None;
  local_1f8.RenderTargetFlags.Elements[1] = None;
  local_1f8.RenderTargetFlags.Elements[2] = None;
  local_1f8.RenderTargetFlags.Elements[3] = None;
  local_1f8.RenderTargetFlags.Elements[4] = None;
  local_1f8.RenderTargetFlags.Elements[5] = None;
  local_1f8.RenderTargetFlags.Elements[6] = None;
  local_1f8.RenderTargetFlags.Elements[7] = None;
  local_1f8.RenderTargetFormats.Elements[4] = '\0';
  local_1f8.RenderTargetFormats.Elements[5] = '\0';
  local_1f8.RenderTargetFormats.Elements[6] = '\0';
  local_1f8.RenderTargetFormats.Elements[7] = '\0';
  local_1f8.DepthStencilTargetFormat = PF_Unknown;
  local_1f8.DepthStencilTargetFlag = None;
  local_1f8.DepthTargetLoadAction = ENoAction;
  local_1f8.DepthTargetStoreAction = ENoAction;
  local_1f8.StencilTargetLoadAction = ENoAction;
  local_1f8.StencilTargetStoreAction = ENoAction;
  local_1f8.DepthStencilAccess.Value = DepthNop;
  local_1f8.NumSamples = 0;
  local_1f8.SubpassHint = None;
  local_1f8.SubpassIndex = '\0';
  local_1f8.ConservativeRasterization = Disabled;
  local_1f8.bDepthBounds = false;
  local_1f8.MultiViewCount = '\0';
  local_1f8.bHasFragmentDensityAttachment = false;
  local_1f8.bAllowVariableRateShading = true;
  local_1f8.ShadingRate = VRSSR_1x1;
  local_1f8.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_1f8.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_1,&local_1f8);
  local_118.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TVector4<float>_>)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 8;
  SetupFrustumForProjection(this,param_3,&local_118,&local_436,local_2b8);
  pTVar7 = CVarCSMDepthBoundsTest.Ref;
  if (((((char)(this->bWholeSceneShadow << 7) < '\0') &&
       (-1 < (this->CascadeSettings).ShadowSplitIndex)) && (this->bDirectionalLight != 0)) &&
     (GRHIGlobals.SupportsDepthBoundsTest != false)) {
    bVar9 = IsInParallelRenderingThread();
    if ((!bVar9) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar7->ShadowedValue[1] == 0) goto LAB_1455c1aa5;
    bVar10 = false;
    local_430 = 0;
    bVar4 = false;
    bVar5 = false;
    bVar9 = true;
LAB_1455c1cdf:
    uVar20 = *(uint *)&this->field_0x990;
  }
  else {
LAB_1455c1aa5:
    piVar24 = &(this->CascadeSettings).ShadowSplitIndex;
    bVar28 = false;
    bVar9 = false;
    if (param_9 == (FRHIUniformBuffer *)0x0) {
      bVar10 = false;
      FVar11.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_3);
      bVar9 = SupportsShadowStencilCulling(FVar11);
      if (bVar9) {
        if ((this->DependentView != (FViewInfo *)0x0) && (this->DependentView != param_3)) {
          local_434 = 0;
          `FProjectedShadowInfo::UseShadowStencilCulling'::__l2::<lambda_1>::operator()(&local_434);
        }
        bVar9 = MegaLights::IsEnabled((FSceneViewFamily *)param_3->_padding_);
        if (bVar9) {
          local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_418.Data.ArrayNum = 0;
          local_418.Data.ArrayMax = 0;
          FSceneRenderer::GetLightNameForDrawEvent(this->LightSceneInfo->Proxy,&local_418);
          ::FString::PrintfImpl
                    (&local_3e0,
                     L"r.Shadow.StencilCulling is not compatible with MegaLights. Modify \'%s\' to use MegaLights, enable VSM or disable r.Shadow.StencilCulling."
                    );
          FVar26.Data = (FScriptContainerElement *)L"";
          if (local_3e0.Data.ArrayNum != 0) {
            FVar26.Data = local_3e0.Data.AllocatorInstance.Data;
          }
          ::FString::FString(&local_3c0,(wchar_t *)FVar26.Data);
          UEngine::AddOnScreenDebugMessage
                    (GEngine,(ulong64)this->LightSceneInfo->Proxy,fVar29,FColor::Yellow,&local_3c0,
                     true,&UE::Math::TVector2<double>::UnitVector);
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
          }
          if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_418.Data.AllocatorInstance.Data);
          }
          bVar4 = false;
          local_430 = 0;
          bVar5 = false;
          bVar9 = false;
        }
        else {
          bVar5 = true;
          local_430 = 0;
          SetupProjectionStencilMask
                    (this,local_420,param_3,local_428,param_5,&local_118,local_435,local_436,
                     local_3f0);
          bVar4 = true;
          bVar9 = bVar28;
        }
      }
      else {
        bVar4 = false;
        local_430 = 0;
        bVar5 = false;
        bVar9 = bVar28;
      }
      goto LAB_1455c1cdf;
    }
    bVar10 = true;
    if (((((char)(this->bWholeSceneShadow << 7) < '\0') && (-1 < *piVar24)) &&
        (this->bDirectionalLight != 0)) || (local_430 = 1, local_436 != false)) {
      local_430 = 0;
    }
    bVar5 = false;
    DrawClearQuadMRT(local_420,false,1,&FLinearColor::Transparent,false,0.0,true,0);
    uVar20 = *(uint *)&this->field_0x990;
    if (((-1 < (char)(ZPULL(uVar20,7,1) << 7)) || (*piVar24 < 0)) || (this->bDirectionalLight == 0))
    {
      SetupProjectionStencilMaskForHair(this,local_420,param_3);
      bVar4 = false;
      bVar9 = bVar28;
      goto LAB_1455c1cdf;
    }
    bVar4 = false;
  }
  bVar28 = local_435;
  piVar24 = &(this->CascadeSettings).ShadowSplitIndex;
  local_1f8.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  if (((char)param_3->_padding_ == '\0') &&
     (((-1 < (char)uVar20 || (*piVar24 < 0)) || ((uVar20 & 0x10) == 0)))) {
    local_1f8.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
  }
  local_1f8.bDepthBounds = bVar9;
  local_1f8.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (bVar9 == false) {
    if (bVar4) {
      local_1f8.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,0,0,0,0,7,0,0,0,7,7>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
      if (GStencilOptimization != 0) {
        local_1f8.DepthStencilState =
             TStaticStateRHI<TStaticDepthStencilState<0,7,1,5,1,1,1,0,7,1,1,1,7,7>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference;
      }
    }
    else {
      local_1f8.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<0,1,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
      if (bVar10) {
        local_1f8.DepthStencilState =
             TStaticStateRHI<TStaticDepthStencilState<0,1,1,4,0,0,0,1,4,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference;
      }
    }
  }
  local_1f8.BlendState = GetBlendStateForProjection(this,local_433,local_435);
  if ((((char)(this->bWholeSceneShadow << 7) < '\0') && (-1 < *piVar24)) &&
     (this->bDirectionalLight != 0)) {
    local_1f8.PrimitiveType = PT_TriangleStrip;
  }
  else {
    local_1f8.PrimitiveType = PT_TriangleList;
  }
  pTVar21 = (TConsoleVariableData<float> *)0x0;
  uVar12 = GetShadowQuality();
  uVar20 = 0;
  if (1 < uVar12) {
    if (((this->bWholeSceneShadow == 0) ||
        (iVar22 = (this->CascadeSettings).ShadowSplitIndex, iVar22 < 0)) ||
       ((this->bDirectionalLight == 0 || (iVar22 < 1)))) {
      if ((2 < uVar12) && (this->bWholeSceneShadow == 0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          pIVar17 = IConsoleManager::Get();
          plVar18 = (longlong *)
                    (**(code **)((longlong)*pIVar17 + 0xc0))
                              (pIVar17,L"r.Shadow.PreShadowResolutionFactor",1);
          pTVar19 = pTVar21;
          if (plVar18 != (longlong *)0x0) {
            pTVar19 = (TConsoleVariableData<float> *)(**(code **)(*plVar18 + 0x70))(plVar18);
          }
          CVarPreShadowResolutionFactor = pTVar19;
          _Init_thread_footer(&::_TSS0);
        }
        if (this->bPreShadow == 0) {
          iVar22 = 0x200;
        }
        else {
          fVar29 = TConsoleVariableData<float>::GetValueOnRenderThread
                             (CVarPreShadowResolutionFactor);
          iVar22 = (int)(fVar29 * __real_44000000);
        }
        for (uVar13 = this->ResolutionX; (int)uVar13 < iVar22; uVar13 = uVar13 * 2) {
          uVar20 = (int)pTVar21 + 1;
          pTVar21 = (TConsoleVariableData<float> *)(ulonglong)uVar20;
        }
        uVar13 = 5;
        if ((int)(uVar12 - uVar20) < 5) {
          uVar13 = uVar12 - uVar20;
        }
        uVar12 = 3;
        if (3 < (int)uVar13) {
          uVar12 = uVar13;
        }
      }
    }
    else {
      bVar10 = IsInParallelRenderingThread();
      if ((!bVar10) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pTVar16 = GetVertexDeclarationFVector4();
  this_00 = local_420;
  local_398.BoundShaderState.VertexDeclarationRHI = pTVar16->Reference;
  local_398.BoundShaderState.VertexShaderRHI = local_1f8.BoundShaderState.VertexShaderRHI;
  local_398.BoundShaderState.PixelShaderRHI = local_1f8.BoundShaderState.PixelShaderRHI;
  local_398.BoundShaderState.MeshShaderRHI = local_1f8.BoundShaderState.MeshShaderRHI;
  local_398.BoundShaderState.AmplificationShaderRHI =
       local_1f8.BoundShaderState.AmplificationShaderRHI;
  local_398.BoundShaderState.GeometryShaderRHI = local_1f8.BoundShaderState.GeometryShaderRHI;
  local_398.BoundShaderState.WorkGraphMeshShaderRHI =
       local_1f8.BoundShaderState.WorkGraphMeshShaderRHI;
  local_398.BlendState = local_1f8.BlendState;
  local_398.RasterizerState = local_1f8.RasterizerState;
  local_398.DepthStencilState = local_1f8.DepthStencilState;
  local_398.RenderTargetsEnabled = local_1f8.RenderTargetsEnabled;
  local_398.PrimitiveType = local_1f8.PrimitiveType;
  local_398.RenderTargetFormats.Elements[4] = local_1f8.RenderTargetFormats.Elements[4];
  local_398.RenderTargetFormats.Elements[5] = local_1f8.RenderTargetFormats.Elements[5];
  local_398.RenderTargetFormats.Elements[6] = local_1f8.RenderTargetFormats.Elements[6];
  local_398.RenderTargetFormats.Elements[7] = local_1f8.RenderTargetFormats.Elements[7];
  local_398.RenderTargetFormats.Elements[0] = local_1f8.RenderTargetFormats.Elements[0];
  local_398.RenderTargetFormats.Elements[1] = local_1f8.RenderTargetFormats.Elements[1];
  local_398.RenderTargetFormats.Elements[2] = local_1f8.RenderTargetFormats.Elements[2];
  local_398.RenderTargetFormats.Elements[3] = local_1f8.RenderTargetFormats.Elements[3];
  local_398.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       local_1f8.ImmutableSamplerState.ImmutableSamplers.Elements[0];
  local_398.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
       local_1f8.ImmutableSamplerState.ImmutableSamplers.Elements[1];
  local_398.RenderTargetFlags.Elements[0] = local_1f8.RenderTargetFlags.Elements[0];
  local_398.RenderTargetFlags.Elements[1] = local_1f8.RenderTargetFlags.Elements[1];
  local_398.RenderTargetFlags.Elements[2] = local_1f8.RenderTargetFlags.Elements[2];
  local_398.RenderTargetFlags.Elements[3] = local_1f8.RenderTargetFlags.Elements[3];
  local_398.RenderTargetFlags.Elements[4] = local_1f8.RenderTargetFlags.Elements[4];
  local_398.RenderTargetFlags.Elements[5] = local_1f8.RenderTargetFlags.Elements[5];
  local_398._177_7_ = local_1f8._177_7_;
  local_398.DepthStencilTargetFormat = local_1f8.DepthStencilTargetFormat;
  local_398.RenderTargetFlags.Elements[6] = local_1f8.RenderTargetFlags.Elements[6];
  local_398.RenderTargetFlags.Elements[7] = local_1f8.RenderTargetFlags.Elements[7];
  local_398.DepthStencilTargetFlag = local_1f8.DepthStencilTargetFlag;
  local_398._212_4_ = local_1f8._212_4_;
  local_398.bAllowVariableRateShading = local_1f8.bAllowVariableRateShading;
  local_398.ShadingRate = local_1f8.ShadingRate;
  local_398.field25_0xd2 = local_1f8.field25_0xd2;
  local_398.DepthTargetLoadAction = local_1f8.DepthTargetLoadAction;
  local_398.DepthTargetStoreAction = local_1f8.DepthTargetStoreAction;
  local_398.StencilTargetLoadAction = local_1f8.StencilTargetLoadAction;
  local_398.StencilTargetStoreAction = local_1f8.StencilTargetStoreAction;
  local_398.DepthStencilAccess.Value = local_1f8.DepthStencilAccess.Value;
  local_398.NumSamples = local_1f8.NumSamples;
  local_398.SubpassHint = local_1f8.SubpassHint;
  local_398.SubpassIndex = local_1f8.SubpassIndex;
  local_398.ConservativeRasterization = local_1f8.ConservativeRasterization;
  local_398.bDepthBounds = local_1f8.bDepthBounds;
  local_398.MultiViewCount = local_1f8.MultiViewCount;
  local_398.bHasFragmentDensityAttachment = local_1f8.bHasFragmentDensityAttachment;
  local_398.StatePrecachePSOHash = local_1f8.StatePrecachePSOHash;
  local_1f8.BoundShaderState.VertexDeclarationRHI = local_398.BoundShaderState.VertexDeclarationRHI;
  BindShadowProjectionShaders
            (uVar12,local_420,&local_398,local_428,param_3,this,local_430,bVar28,param_9);
  if (bVar9 != false) {
    SetDepthBoundsTest(this_00,(this->CascadeSettings).SplitNear,(this->CascadeSettings).SplitFar,
                       (TMatrix<double> *)&param_3->_padding_);
  }
  if ((*(char *)((longlong)&param_3->_padding_ + 3) != '\0') &&
     (*(char *)((longlong)&param_3->_padding_ + 5) == '\0')) {
    bVar9 = IStereoRendering::IsStereoEyeView((FSceneView *)param_3);
    uVar20 = 1;
    if (bVar9) goto LAB_1455c1fd1;
  }
  uVar20 = *(uint *)((longlong)&param_3->_padding_ + 4);
LAB_1455c1fd1:
  if ((((char)(this->bWholeSceneShadow << 7) < '\0') &&
      (-1 < (this->CascadeSettings).ShadowSplitIndex)) && (this->bDirectionalLight != 0)) {
    FRHICommandList::SetStreamSource(this_00,0,(FRHIBuffer *)GClearVertexBuffer._32_8_,0);
    FRHICommandList::DrawPrimitive(this_00,0,2,uVar20);
  }
  else {
    FRHICommandList::SetStreamSource(this_00,0,(FRHIBuffer *)GFrustumVertexBuffer._32_8_,0);
    FRHICommandList::DrawIndexedPrimitive
              (this_00,(FRHIBuffer *)GCubeIndexBuffer._32_8_,0,0,8,0,0xc,uVar20);
  }
  if ((bVar5) && (GStencilOptimization == 0)) {
    DrawClearQuadMRT(this_00,false,1,&FLinearColor::Transparent,false,0.0,true,0);
  }
  FRHICommandList::SetScissorRect(this_00,false,0,0,0,0);
  if (local_118.AllocatorInstance.SecondaryData != (ForElementType<UE::Math::TVector4<float>_>)0x0)
  {
    FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_3d0.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_3d0.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_3e8);
      local_3d0.StatData.Pad[4] = '\0';
      local_3d0.StatData.Pad[5] = '\0';
      local_3d0.StatData.Pad[6] = '\0';
      local_3d0.StatData.Pad[7] = '\0';
      local_3d0.StatData.Pad[0] = local_3e8.s.LowPart._0_1_;
      local_3d0.StatData.Pad[1] = local_3e8.s.LowPart._1_1_;
      local_3d0.StatData.Pad[2] = local_3e8.s.LowPart._2_1_;
      local_3d0.StatData.Pad[3] = local_3e8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_3d0);
      piVar24 = &this_01->ScopeCount;
      *piVar24 = *piVar24 + -1;
      if (*piVar24 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SetStateForView @ 1455d3e30

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
FProjectedShadowInfo::SetStateForView
          (FProjectedShadowInfo *this,FRHICommandList *param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((this->bAllocated == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bAllocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                         ,0x2bf,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = this->BorderSize * 2;
  FRHICommandList::SetViewport
            (param_1,(float)this->X,(float)this->Y,0.0,(float)(this->ResolutionX + this->X + iVar2),
             (float)(iVar2 + this->Y + this->ResolutionY),__real_3f800000);
  bVar3 = ShouldUseCSMScissorOptim(this);
  if (bVar3) {
    uVar7 = *(int *)((longlong)&(this->ScissorRectOptim).field0_0x0 + 0xc) + this->Y;
    uVar4 = *(int *)((longlong)&(this->ScissorRectOptim).field0_0x0 + 8) + this->X;
    uVar6 = *(int *)((longlong)&(this->ScissorRectOptim).field0_0x0 + 4) + this->Y;
    uVar5 = this->X + *(int *)&(this->ScissorRectOptim).field0_0x0;
  }
  else {
    if (!param_2) {
      return;
    }
    uVar5 = this->BorderSize;
    uVar7 = this->ResolutionY + uVar5 + this->Y;
    uVar6 = uVar5 + this->Y;
    uVar4 = this->ResolutionX + this->X + uVar5;
    uVar5 = this->X + uVar5;
  }
  FRHICommandList::SetScissorRect(param_1,true,uVar5,uVar6,uVar4,uVar7);
  return;
}

// SetupFrustumForProjection @ 1455d4450

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
FProjectedShadowInfo::SetupFrustumForProjection
          (FProjectedShadowInfo *this,FViewInfo *param_1,
          TArray<UE::Math::TVector4<float>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool *param_3,TPlane<double> *param_4)

{
  int *piVar1;
  uint uVar2;
  uchar *puVar3;
  double dVar4;
  ForElementType<UE::Math::TVector4<float>_> FVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  bool bVar37;
  ForElementType<UE::Math::TVector4<float>_> FVar38;
  uint uVar39;
  uint uVar40;
  ulonglong uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  double dStack_4e0;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 local_4a8;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_468;
  TVector<double>_u_0 local_448;
  TVector<double>_u_0 local_428;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3c8;
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2c8;
  double local_2a8;
  double dStack_2a0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_258 [2];
  double local_228;
  TPlane<double> local_218;
  TPlane<double> local_1f8;
  TPlane<double> local_1d8;
  TPlane<double> local_1b8;
  TPlane<double> local_198;
  TPlane<double> local_178;
  double local_148;
  double local_130;
  double local_118;
  double local_100;
  double local_e8;
  
  *param_3 = true;
  if (((-1 < (char)(this->bWholeSceneShadow << 7)) || ((this->CascadeSettings).ShadowSplitIndex < 0)
      ) || (this->bDirectionalLight == 0)) {
    piVar1 = &param_2->ArrayNum;
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<float>_>_>
              (0x10,0x10,8,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    fVar33 = __real_bf800000;
    fVar45 = __real_3f800000;
    uVar40 = 0;
    fVar48 = (float)((double)param_1->_padding_ - (this->PreShadowTranslation).field0_0x0._s_0.X);
    fVar49 = (float)((double)param_1->_padding_ - (this->PreShadowTranslation).field0_0x0._s_0.Y);
    fVar54 = (float)((double)param_1->_padding_ - (this->PreShadowTranslation).field0_0x0._s_0.Z);
    do {
      uVar39 = 0;
      do {
        fVar44 = fVar45;
        if (uVar40 == 0) {
          fVar44 = 0.0;
        }
        fVar42 = fVar45;
        if (uVar39 != 0) {
          fVar42 = fVar33;
        }
        uVar2 = uVar40 + uVar39 * 2;
        uVar41 = (ulonglong)(ushort)uVar2;
        fVar21 = (this->InvReceiverInnerMatrix).M[1][0];
        fVar22 = (this->InvReceiverInnerMatrix).M[1][1];
        fVar23 = (this->InvReceiverInnerMatrix).M[1][2];
        fVar24 = (this->InvReceiverInnerMatrix).M[0][0];
        fVar25 = (this->InvReceiverInnerMatrix).M[0][1];
        fVar26 = (this->InvReceiverInnerMatrix).M[0][2];
        fVar27 = (this->InvReceiverInnerMatrix).M[2][0];
        fVar28 = (this->InvReceiverInnerMatrix).M[2][1];
        fVar29 = (this->InvReceiverInnerMatrix).M[2][2];
        fVar30 = (this->InvReceiverInnerMatrix).M[3][0];
        fVar31 = (this->InvReceiverInnerMatrix).M[3][1];
        fVar32 = (this->InvReceiverInnerMatrix).M[3][2];
        fVar43 = fVar45 / (fVar42 * (this->InvReceiverInnerMatrix).M[1][3] +
                           (this->InvReceiverInnerMatrix).M[0][3] * 1.0 +
                           fVar44 * (this->InvReceiverInnerMatrix).M[2][3] +
                          (this->InvReceiverInnerMatrix).M[3][3] * 1.0);
        if ((*piVar1 <= (int)(uVar2 & 0xffff)) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar37)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar38 = (ForElementType<UE::Math::TVector4<float>_>)param_2;
        if (FVar5 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
          FVar38 = FVar5;
        }
        *(float *)((longlong)FVar38 + uVar41 * 0x10) =
             (fVar42 * fVar21 + fVar24 * 1.0 + fVar44 * fVar27 + fVar30 * 1.0) * fVar43 + fVar48;
        *(float *)((uchar *)((longlong)FVar38 + 4) + uVar41 * 0x10) =
             (fVar42 * fVar22 + fVar25 * 1.0 + fVar44 * fVar28 + fVar31 * 1.0) * fVar43 + fVar49;
        *(float *)((uchar *)((longlong)FVar38 + 8) + uVar41 * 0x10) =
             (fVar42 * fVar23 + fVar26 * 1.0 + fVar44 * fVar29 + fVar32 * 1.0) * fVar43 + fVar54;
        puVar3 = (uchar *)((longlong)FVar38 + 0xc) + uVar41 * 0x10;
        puVar3[0] = '\0';
        puVar3[1] = '\0';
        puVar3[2] = '\0';
        puVar3[3] = '\0';
        fVar44 = fVar45;
        if (uVar40 == 0) {
          fVar44 = 0.0;
        }
        fVar42 = fVar45;
        if (uVar39 != 0) {
          fVar42 = fVar33;
        }
        uVar2 = uVar40 + (uVar39 + 2) * 2;
        uVar41 = (ulonglong)(ushort)uVar2;
        fVar21 = (this->InvReceiverInnerMatrix).M[1][0];
        fVar22 = (this->InvReceiverInnerMatrix).M[1][1];
        fVar23 = (this->InvReceiverInnerMatrix).M[1][2];
        fVar24 = (this->InvReceiverInnerMatrix).M[0][0];
        fVar25 = (this->InvReceiverInnerMatrix).M[0][1];
        fVar26 = (this->InvReceiverInnerMatrix).M[0][2];
        fVar27 = (this->InvReceiverInnerMatrix).M[2][0];
        fVar28 = (this->InvReceiverInnerMatrix).M[2][1];
        fVar29 = (this->InvReceiverInnerMatrix).M[2][2];
        fVar30 = (this->InvReceiverInnerMatrix).M[3][0];
        fVar31 = (this->InvReceiverInnerMatrix).M[3][1];
        fVar32 = (this->InvReceiverInnerMatrix).M[3][2];
        fVar43 = fVar45 / (fVar42 * (this->InvReceiverInnerMatrix).M[1][3] +
                           (this->InvReceiverInnerMatrix).M[0][3] * -1.0 +
                           fVar44 * (this->InvReceiverInnerMatrix).M[2][3] +
                          (this->InvReceiverInnerMatrix).M[3][3] * 1.0);
        if ((*piVar1 <= (int)(uVar2 & 0xffff)) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar37)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar38 = (ForElementType<UE::Math::TVector4<float>_>)param_2;
        if (FVar5 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
          FVar38 = FVar5;
        }
        uVar39 = uVar39 + 1;
        *(float *)((longlong)FVar38 + uVar41 * 0x10) =
             (fVar42 * fVar21 + fVar24 * -1.0 + fVar44 * fVar27 + fVar30 * 1.0) * fVar43 + fVar48;
        *(float *)((uchar *)((longlong)FVar38 + 4) + uVar41 * 0x10) =
             (fVar42 * fVar22 + fVar25 * -1.0 + fVar44 * fVar28 + fVar31 * 1.0) * fVar43 + fVar49;
        *(float *)((uchar *)((longlong)FVar38 + 8) + uVar41 * 0x10) =
             (fVar42 * fVar23 + fVar26 * -1.0 + fVar44 * fVar29 + fVar32 * 1.0) * fVar43 + fVar54;
        puVar3 = (uchar *)((longlong)FVar38 + 0xc) + uVar41 * 0x10;
        puVar3[0] = '\0';
        puVar3[1] = '\0';
        puVar3[2] = '\0';
        puVar3[3] = '\0';
      } while (uVar39 < 2);
      uVar40 = uVar40 + 1;
    } while (uVar40 < 2);
    local_2a8 = (double)param_1->_padding_;
    dStack_2a0 = (double)param_1->_padding_;
    dVar17 = (double)param_1->_padding_;
    dVar16 = (double)param_1->_padding_;
    local_118 = (double)param_1->_padding_;
    dVar4 = (double)param_1->_padding_;
    if ((*piVar1 < 2) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar37)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar38 = (ForElementType<UE::Math::TVector4<float>_>)param_2;
    if (FVar5 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar38 = FVar5;
    }
    dVar8 = (double)*(float *)((longlong)FVar38 + 0x10) - dVar17;
    dVar9 = (double)*(float *)((longlong)FVar38 + 0x14) - dVar16;
    local_100 = (double)*(float *)((longlong)FVar38 + 0x18) - dVar4;
    if ((*piVar1 < 6) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar37)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar38 = (ForElementType<UE::Math::TVector4<float>_>)param_2;
    if (FVar5 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar38 = FVar5;
    }
    dVar10 = (double)*(float *)((longlong)FVar38 + 0x50) - dVar17;
    dVar11 = (double)*(float *)((longlong)FVar38 + 0x54) - dVar16;
    local_e8 = (double)*(float *)((longlong)FVar38 + 0x58) - dVar4;
    if ((*piVar1 < 8) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar37)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar38 = (ForElementType<UE::Math::TVector4<float>_>)param_2;
    if (FVar5 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar38 = FVar5;
    }
    dVar12 = (double)*(float *)((longlong)FVar38 + 0x78) - dVar4;
    dVar19 = (double)*(float *)((longlong)FVar38 + 0x70) - dVar17;
    dVar20 = (double)*(float *)((longlong)FVar38 + 0x74) - dVar16;
    uVar46 = SUB84(dVar20,0);
    uVar47 = (undefined4)((ulonglong)dVar20 >> 0x20);
    if ((*piVar1 < 4) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar37)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*piVar1 < 1) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar37)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar38 = (ForElementType<UE::Math::TVector4<float>_>)param_2;
    if (FVar5 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar38 = FVar5;
    }
    local_228 = (double)*(float *)((longlong)FVar38 + 8) - dVar4;
    dVar20 = (double)*(float *)FVar38 - dVar17;
    dVar18 = (double)*(float *)((longlong)FVar38 + 4) - dVar16;
    uVar50 = SUB84(dVar18,0);
    uVar51 = (undefined4)((ulonglong)dVar18 >> 0x20);
    if ((*piVar1 < 5) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar37)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar38 = (ForElementType<UE::Math::TVector4<float>_>)param_2;
    if (FVar5 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar38 = FVar5;
    }
    dVar18 = (double)*(float *)((longlong)FVar38 + 0x40) - dVar17;
    dVar13 = (double)*(float *)((longlong)FVar38 + 0x44) - dVar16;
    local_148 = (double)*(float *)((longlong)FVar38 + 0x48) - dVar4;
    if ((*piVar1 < 7) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar37)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar38 = (ForElementType<UE::Math::TVector4<float>_>)param_2;
    if (FVar5 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      FVar38 = FVar5;
    }
    dVar14 = (double)*(float *)((longlong)FVar38 + 0x60) - dVar17;
    dVar15 = (double)*(float *)((longlong)FVar38 + 100) - dVar16;
    local_130 = (double)*(float *)((longlong)FVar38 + 0x68) - dVar4;
    if ((*piVar1 < 3) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar37)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    dVar36 = local_e8;
    dVar35 = local_100;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    auVar7._8_4_ = uVar46;
    auVar7._0_8_ = dVar19;
    auVar7._12_4_ = uVar47;
    if (FVar5 != (ForElementType<UE::Math::TVector4<float>_>)0x0) {
      param_2 = (TArray<UE::Math::TVector4<float>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar5;
    }
    local_488._8_4_ = uVar46;
    local_488._0_8_ = dVar19;
    local_488._12_4_ = uVar47;
    dVar16 = (double)*(float *)((longlong)param_2 + 0x24) - dVar16;
    dVar17 = (double)*(float *)((longlong)param_2 + 0x20) - dVar17;
    dVar4 = (double)*(float *)((longlong)param_2 + 0x28) - dVar4;
    local_468._s_0.Z = local_e8;
    local_448._s_0.Z = local_100;
    local_488._s_0.Z = dVar12;
    local_468._0_8_ = dVar10;
    local_468._8_8_ = dVar11;
    local_448._0_8_ = dVar8;
    local_448._8_8_ = dVar9;
    UE::Math::TPlane<double>::TPlane<double>
              (&local_1d8,(TVector<double> *)&local_448._s_0,(TVector<double> *)&local_468._s_0,
               (TVector<double> *)&local_488._s_0);
    dVar34 = local_228;
    uVar52 = SUB84(dVar16,0);
    uVar53 = (undefined4)((ulonglong)dVar16 >> 0x20);
    local_3e8._8_4_ = uVar52;
    local_3e8._0_8_ = dVar17;
    local_3e8._12_4_ = uVar53;
    local_428._s_0.Z = dVar35;
    local_408._8_4_ = uVar50;
    local_408._0_8_ = dVar20;
    local_408._12_4_ = uVar51;
    local_408._s_0.Z = local_228;
    local_3e8._s_0.Z = dVar4;
    local_428._0_8_ = dVar8;
    local_428._8_8_ = dVar9;
    UE::Math::TPlane<double>::TPlane<double>
              (&local_218,(TVector<double> *)&local_3e8._s_0,(TVector<double> *)&local_408._s_0,
               (TVector<double> *)&local_428._s_0);
    dVar16 = local_148;
    local_4c0 = SUB84(dVar18,0);
    uStack_4bc = (undefined4)((ulonglong)dVar18 >> 0x20);
    local_4b8 = SUB84(dVar13,0);
    uVar46 = (undefined4)((ulonglong)dVar13 >> 0x20);
    local_388._0_4_ = local_4c0;
    local_388._4_4_ = uStack_4bc;
    local_388._8_4_ = local_4b8;
    local_3c8._8_4_ = uVar52;
    local_3c8._0_8_ = dVar17;
    local_3c8._12_4_ = uVar53;
    local_3a8._8_4_ = uVar50;
    local_3a8._0_8_ = dVar20;
    local_3a8._12_4_ = uVar51;
    local_3a8._s_0.Z = dVar34;
    local_388._s_0.Z = local_148;
    local_3c8._s_0.Z = dVar4;
    local_388._12_4_ = uVar46;
    UE::Math::TPlane<double>::TPlane<double>
              (&local_1f8,(TVector<double> *)&local_388._s_0,(TVector<double> *)&local_3a8._s_0,
               (TVector<double> *)&local_3c8._s_0);
    dVar8 = local_130;
    local_4a8 = SUB84(dVar15,0);
    uVar47 = (undefined4)((ulonglong)dVar15 >> 0x20);
    local_368._8_4_ = local_4a8;
    local_368._s_0.Z = local_130;
    local_348._0_4_ = local_4c0;
    local_348._4_4_ = uStack_4bc;
    local_348._8_4_ = local_4b8;
    local_348._s_0.Z = dVar16;
    local_328._s_0.Z = dVar36;
    local_368._12_4_ = uVar47;
    local_348._12_4_ = uVar46;
    local_368._s_0.X = dVar14;
    local_328._0_8_ = dVar10;
    local_328._8_8_ = dVar11;
    UE::Math::TPlane<double>::TPlane<double>
              (&local_1b8,(TVector<double> *)&local_328._s_0,(TVector<double> *)&local_348._s_0,
               (TVector<double> *)&local_368._s_0);
    local_308._s_0.Z = dVar36;
    local_2e8._0_4_ = local_4c0;
    local_2e8._4_4_ = uStack_4bc;
    local_2e8._8_4_ = local_4b8;
    local_2e8._s_0.Z = dVar16;
    local_2c8._8_4_ = uVar50;
    local_2c8._0_8_ = dVar20;
    local_2c8._12_4_ = uVar51;
    local_2c8._s_0.Z = dVar34;
    local_2e8._12_4_ = uVar46;
    local_308._0_8_ = dVar10;
    local_308._8_8_ = dVar11;
    UE::Math::TPlane<double>::TPlane<double>
              (&local_198,(TVector<double> *)&local_2c8._s_0,(TVector<double> *)&local_2e8._s_0,
               (TVector<double> *)&local_308._s_0);
    dStack_4e0 = auVar7._8_8_;
    local_278._8_4_ = uVar52;
    local_278._0_8_ = dVar17;
    local_278._12_4_ = uVar53;
    local_298._s_0.Y = dStack_4e0;
    local_258[0]._8_4_ = local_4a8;
    local_258[0]._s_0.Z = dVar8;
    local_298._s_0.X = dVar19;
    local_298._s_0.Z = dVar12;
    local_278._s_0.Z = dVar4;
    local_258[0]._12_4_ = uVar47;
    local_258[0]._0_8_ = dVar14;
    UE::Math::TPlane<double>::TPlane<double>
              (&local_178,(TVector<double> *)&local_258[0]._s_0,(TVector<double> *)&local_278._s_0,
               (TVector<double> *)&local_298._s_0);
    param_4[1]._padding_ = local_218._padding_;
    param_4[1]._padding_ = local_218._padding_;
    param_4[2]._padding_ = local_1f8._padding_;
    param_4[2]._padding_ = local_1f8._padding_;
    param_4->_padding_ = local_1d8._padding_;
    param_4->_padding_ = local_1d8._padding_;
    param_4->_padding_ = local_1d8._padding_;
    param_4->W = local_1d8.W;
    param_4[3]._padding_ = local_1b8._padding_;
    param_4[3]._padding_ = local_1b8._padding_;
    param_4[4]._padding_ = local_198._padding_;
    param_4[4]._padding_ = local_198._padding_;
    param_4[5]._padding_ = local_178._padding_;
    param_4[5]._padding_ = local_178._padding_;
    param_4[1]._padding_ = local_218._padding_;
    param_4[1].W = local_218.W;
    param_4[2]._padding_ = local_1f8._padding_;
    param_4[2].W = local_1f8.W;
    param_4[3]._padding_ = local_1b8._padding_;
    param_4[3].W = local_1b8.W;
    param_4[4]._padding_ = local_198._padding_;
    param_4[4].W = local_198.W;
    param_4[5]._padding_ = local_178._padding_;
    param_4[5].W = local_178.W;
    fVar45 = *(float *)&param_1->_padding_ * __real_c0400000;
    if ((((((float)((dStack_2a0 * (double)local_1d8._padding_ +
                     local_2a8 * (double)local_1d8._padding_ +
                    local_118 * (double)local_1d8._padding_) - local_1d8.W) <= fVar45) ||
          ((float)(((double)local_218._padding_ * dStack_2a0 +
                    local_2a8 * (double)local_218._padding_ +
                   (double)local_218._padding_ * local_118) - local_218.W) <= fVar45)) ||
         ((float)(((double)local_1f8._padding_ * dStack_2a0 +
                   local_2a8 * (double)local_1f8._padding_ + (double)local_1f8._padding_ * local_118
                  ) - local_1f8.W) <= fVar45)) ||
        (((float)(((double)local_1b8._padding_ * dStack_2a0 +
                   local_2a8 * (double)local_1b8._padding_ + (double)local_1b8._padding_ * local_118
                  ) - local_1b8.W) <= fVar45 ||
         ((float)(((double)local_198._padding_ * dStack_2a0 +
                   local_2a8 * (double)local_198._padding_ + (double)local_198._padding_ * local_118
                  ) - local_198.W) <= fVar45)))) ||
       ((float)((local_2a8 * (double)local_178._padding_ + (double)local_178._padding_ * dStack_2a0
                + (double)local_178._padding_ * local_118) - local_178.W) <= fVar45)) {
      bVar37 = false;
    }
    else {
      bVar37 = true;
    }
    *param_3 = bVar37;
  }
  return;
}

// SetupProjectionStencilMask @ 1455d5140

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::SetupProjectionStencilMask
          (FProjectedShadowInfo *this,FRHICommandList *param_1,FViewInfo *param_2,int param_3,
          FSceneRenderer *param_4,
          TArray<UE::Math::TVector4<float>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_5,bool param_6,bool param_7,FInstanceCullingDrawParams *param_8)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FGlobalShaderMap *pFVar9;
  code *pcVar10;
  double dVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  int iVar14;
  int iVar15;
  int iVar16;
  TConsoleVariableData<int> *pTVar17;
  TRefCountPtr<FRHIBlendState> TVar18;
  bool bVar19;
  uint uVar20;
  FShaderType *pFVar21;
  FName FVar22;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar23;
  FRHIVertexShader *pFVar24;
  FShaderParametersMetadata *pFVar25;
  FGlobalShaderType *pFVar26;
  atomic<FRHIShader_*> aVar27;
  FRHIBatchedShaderParameters *pFVar28;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar29;
  FViewInfo *pFVar30;
  FSceneView *pFVar31;
  IRHICommandContext *pIVar32;
  FRHICommandBase *pFVar33;
  uint uVar34;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar35;
  TRefCountPtr<FRHIDepthStencilState> TVar36;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar37;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar38;
  longlong lVar39;
  uint *puVar40;
  uint *puVar41;
  double dVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  float fVar47;
  undefined1 auStackY_428 [32];
  undefined1 local_3c8 [8];
  FShaderMapResource *local_3c0;
  FRHICommandListBase *local_3b8;
  FInstanceCullingDrawParams *local_3b0;
  FViewInfo *local_3a8;
  ForElementType<FSimpleMeshDrawCommandPass_*> local_3a0;
  float local_398;
  float local_394;
  undefined8 local_390;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_388;
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_378;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_368;
  TShaderRefBase<FWholeSceneDirectionalShadowStencilVS,FShaderMapPointerTable> local_358;
  FRHIBreadcrumbScope local_348;
  char local_338;
  undefined1 local_330 [8];
  undefined1 local_328 [8];
  FString local_320;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_308;
  FString local_2f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_> local_2e8;
  uint uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  FGraphicsPipelineStateInitializer local_2b8;
  FGraphicsPipelineStateInitializer local_1d8;
  ulonglong local_f8;
  
  TVar36.Reference =
       TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,6,0,1,7,0,7,0,7,7>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  TVar18.Reference =
       TStaticStateRHI<TStaticBlendState<0,0,0,2,0,0,1,0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_3b0 = param_8;
  lVar39 = (longlong)param_3;
  local_3b8 = (FRHICommandListBase *)param_1;
  local_3a8 = param_2;
  if (this->bPreShadow == 0 && this->bSelfShadowOnly == 0) {
    if ((((char)(this->bWholeSceneShadow << 7) < '\0') &&
        (-1 < (this->CascadeSettings).ShadowSplitIndex)) && (this->bDirectionalLight != 0)) {
      local_1d8.bAllowVariableRateShading = true;
      local_1d8.ShadingRate = VRSSR_1x1;
      local_1d8.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
      local_1d8.RenderTargetsEnabled = 0;
      local_1d8.RenderTargetFormats.Elements[0] = '\0';
      local_1d8.RenderTargetFormats.Elements[1] = '\0';
      local_1d8.RenderTargetFormats.Elements[2] = '\0';
      local_1d8.RenderTargetFormats.Elements[3] = '\0';
      local_1d8.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
      local_1d8.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
      local_1d8.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
      local_1d8.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
      local_1d8.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
      local_1d8.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
      local_1d8.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
      local_1d8.BlendState = (FRHIBlendState *)0x0;
      local_1d8.RasterizerState = (FRHIRasterizerState *)0x0;
      local_1d8.DepthStencilState = (FRHIDepthStencilState *)0x0;
      local_1d8.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
      local_1d8.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
      local_1d8.RenderTargetFormats.Elements[4] = '\0';
      local_1d8.RenderTargetFormats.Elements[5] = '\0';
      local_1d8.RenderTargetFormats.Elements[6] = '\0';
      local_1d8.RenderTargetFormats.Elements[7] = '\0';
      local_1d8.RenderTargetFlags.Elements[0] = None;
      local_1d8.RenderTargetFlags.Elements[1] = None;
      local_1d8.RenderTargetFlags.Elements[2] = None;
      local_1d8.RenderTargetFlags.Elements[3] = None;
      local_1d8.RenderTargetFlags.Elements[4] = None;
      local_1d8.RenderTargetFlags.Elements[5] = None;
      local_1d8.RenderTargetFlags.Elements[6] = None;
      local_1d8.RenderTargetFlags.Elements[7] = None;
      local_1d8.DepthStencilTargetFormat = PF_Unknown;
      local_1d8.DepthStencilTargetFlag = None;
      local_1d8.DepthTargetLoadAction = ENoAction;
      local_1d8.DepthTargetStoreAction = ENoAction;
      local_1d8.StencilTargetLoadAction = ENoAction;
      local_1d8.StencilTargetStoreAction = ENoAction;
      local_1d8.DepthStencilAccess.Value = DepthNop;
      local_1d8.NumSamples = 0;
      local_1d8.SubpassHint = None;
      local_1d8.SubpassIndex = '\0';
      local_1d8.ConservativeRasterization = Disabled;
      local_1d8.bDepthBounds = false;
      local_1d8.MultiViewCount = '\0';
      local_1d8.bHasFragmentDensityAttachment = false;
      local_1d8.StatePrecachePSOHash = 0;
      FRHICommandList::ApplyCachedRenderTargets(param_1,&local_1d8);
      local_1d8.DepthStencilState = TVar36.Reference;
      pFVar9 = param_2->ShaderMap;
      local_1d8.PrimitiveType = PT_TriangleList;
      local_1d8.BlendState = TVar18.Reference;
      local_1d8.RasterizerState =
           TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI.Reference;
      dVar45 = (double)(this->CascadeSettings).SplitNear;
      dVar11 = (double)param_2->_padding_ * 0.0 + (double)param_2->_padding_ * 0.0 +
               dVar45 * (double)param_2->_padding_ +
               __real_3ff0000000000000 * (double)param_2->_padding_;
      dVar45 = (double)param_2->_padding_ * 0.0 + (double)param_2->_padding_ * 0.0 +
               dVar45 * (double)param_2->_padding_ +
               __real_3ff0000000000000 * (double)param_2->_padding_;
      dVar46 = (double)(this->CascadeSettings).SplitFar;
      dVar44 = dVar46 * (double)param_2->_padding_;
      auVar12._4_8_ = dVar44;
      auVar12._0_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar42._0_8_ = auVar12._0_8_ << 0x20;
      auVar42._8_4_ = SUB84(dVar45,0);
      auVar42._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
      dVar46 = (double)param_2->_padding_ * 0.0 + (double)param_2->_padding_ * 0.0 +
               dVar46 * (double)param_2->_padding_ +
               __real_3ff0000000000000 * (double)param_2->_padding_;
      dVar44 = (double)param_2->_padding_ * 0.0 + (double)param_2->_padding_ * 0.0 + dVar44 +
               __real_3ff0000000000000 * (double)param_2->_padding_;
      auVar13._4_8_ = dVar45;
      auVar13._0_4_ = (int)((ulonglong)dVar46 >> 0x20);
      auVar43._0_8_ = auVar13._0_8_ << 0x20;
      auVar43._8_4_ = SUB84(dVar44,0);
      auVar43._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      pFVar21 = (FShaderType *)FWholeSceneDirectionalShadowStencilVS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar9,&local_368,pFVar21,0);
      if (local_368.ShaderContent == (FShader *)0x0) {
        FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_330);
        ::FName::ToString((FName *)FVar22,&local_320);
        FWholeSceneDirectionalShadowStencilVS::GetStaticType();
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_320.Data.AllocatorInstance.Data);
        }
        if (bVar19) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FWholeSceneDirectionalShadowStencilVS::GetStaticType();
      local_358.ShaderContent = (FWholeSceneDirectionalShadowStencilVS *)local_368.ShaderContent;
      local_358.ShaderMap = local_368.ShaderMap;
      pTVar23 = GetVertexDeclarationFVector4();
      local_1d8.BoundShaderState.VertexDeclarationRHI = pTVar23->Reference;
      local_1d8.BoundShaderState.VertexShaderRHI =
           TShaderRefBase<FWholeSceneDirectionalShadowStencilVS,FShaderMapPointerTable>::
           GetVertexShader(&local_358,true);
      SetGraphicsPipelineState(param_1,&local_1d8,0,CheckApply,true);
      local_390 = 0;
      local_398 = (float)(dVar46 / auVar43._8_8_);
      local_394 = (float)(dVar11 / auVar42._8_8_);
      pFVar24 = TShaderRefBase<FWholeSceneDirectionalShadowStencilVS,FShaderMapPointerTable>::
                GetVertexShader(&local_358,true);
      pFVar25 = FWholeSceneDirectionalShadowStencilVS::FParameters::FTypeInfo::GetStructMetadata();
      local_308.ShaderContent = local_368.ShaderContent;
      local_308.ShaderMap = local_368.ShaderMap;
      ValidateShaderParameters(&local_308,pFVar25,&local_398);
      ::SetShaderParameters
                (param_1,(FRHIGraphicsShader *)pFVar24,&(local_368.ShaderContent)->Bindings,pFVar25,
                 &local_398);
      FRHICommandList::SetStreamSource
                (param_1,0,(FRHIBuffer *)GDummyWholeSceneDirectionalShadowStencilVertexBuffer._32_8_
                 ,0);
      FRHICommandList::DrawPrimitive(param_1,0,(0 < (this->CascadeSettings).ShadowSplitIndex) + 1,1)
      ;
      return;
    }
    local_2b8.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    local_2b8.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
    TVar36.Reference =
         TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,6,1,7,0,0,7,7,7>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    if (param_7) {
      TVar36.Reference =
           TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,6,0,1,7,0,7,0,7,7>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
    }
    local_2b8.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
    local_2b8.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
    local_2b8.RenderTargetsEnabled = 0;
    local_2b8.RenderTargetFormats.Elements[0] = '\0';
    local_2b8.RenderTargetFormats.Elements[1] = '\0';
    local_2b8.RenderTargetFormats.Elements[2] = '\0';
    local_2b8.RenderTargetFormats.Elements[3] = '\0';
    local_2b8.RenderTargetFormats.Elements[4] = '\0';
    local_2b8.RenderTargetFormats.Elements[5] = '\0';
    local_2b8.RenderTargetFormats.Elements[6] = '\0';
    local_2b8.RenderTargetFormats.Elements[7] = '\0';
    local_2b8.DepthStencilTargetFormat = PF_Unknown;
    local_2b8.DepthStencilTargetFlag = None;
    local_2b8.DepthTargetLoadAction = ENoAction;
    local_2b8.DepthTargetStoreAction = ENoAction;
    local_2b8.StencilTargetLoadAction = ENoAction;
    local_2b8.StencilTargetStoreAction = ENoAction;
    local_2b8.DepthStencilAccess.Value = DepthNop;
    local_2b8.NumSamples = 0;
    local_2b8.SubpassHint = None;
    local_2b8.SubpassIndex = '\0';
    local_2b8.ConservativeRasterization = Disabled;
    local_2b8.bDepthBounds = false;
    local_2b8.MultiViewCount = '\0';
    local_2b8.bHasFragmentDensityAttachment = false;
    local_2b8.StatePrecachePSOHash = 0;
    local_2b8.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
    local_2b8.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
    local_2b8.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
    local_2b8.BlendState = (FRHIBlendState *)0x0;
    local_2b8.RasterizerState = (FRHIRasterizerState *)0x0;
    local_2b8.DepthStencilState = (FRHIDepthStencilState *)0x0;
    local_2b8.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
    local_2b8.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
    local_2b8.RenderTargetFlags.Elements[0] = None;
    local_2b8.RenderTargetFlags.Elements[1] = None;
    local_2b8.RenderTargetFlags.Elements[2] = None;
    local_2b8.RenderTargetFlags.Elements[3] = None;
    local_2b8.RenderTargetFlags.Elements[4] = None;
    local_2b8.RenderTargetFlags.Elements[5] = None;
    local_2b8.RenderTargetFlags.Elements[6] = None;
    local_2b8.RenderTargetFlags.Elements[7] = None;
    local_2b8.bAllowVariableRateShading = true;
    local_2b8.ShadingRate = VRSSR_1x1;
    local_2b8.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
    FRHICommandList::ApplyCachedRenderTargets(param_1,&local_2b8);
    local_2b8.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    local_2b8.BlendState = TVar18.Reference;
    local_2b8.DepthStencilState = TVar36.Reference;
    FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(param_2->ShaderMap,&local_378,0);
    pTVar23 = GetVertexDeclarationFVector4();
    local_2b8.BoundShaderState.VertexDeclarationRHI = pTVar23->Reference;
    local_2b8.BoundShaderState.VertexShaderRHI =
         TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                   (&local_378,true);
    pTVar17 = CVarShadowStencilCullingArtifactWorkaround.Ref;
    bVar19 = IsInParallelRenderingThread();
    if ((!bVar19) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((pTVar17->ShadowedValue[1] == 0) || (bVar19 = IsRHIDeviceNVIDIA(), !bVar19)) {
      local_2b8.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
      aVar27 = (atomic<FRHIShader_*>)local_2b8.BoundShaderState.PixelShaderRHI;
    }
    else {
      pFVar9 = param_2->ShaderMap;
      pFVar26 = FLateZDummyPS::GetStaticType();
      if (*(int *)&pFVar26->field_0x50 != 1) {
        local_3c8[0] = 0;
        `FGlobalShaderMap::GetShader<FLateZDummyPS>'::__l2::<lambda_1>::operator()(local_3c8);
      }
      pFVar21 = (FShaderType *)FLateZDummyPS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar9,&local_388,pFVar21,0);
      if (local_388.ShaderContent == (FShader *)0x0) {
        FVar22 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_328);
        ::FName::ToString((FName *)FVar22,&local_2f8);
        FLateZDummyPS::GetStaticType();
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        if (bVar19) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      FLateZDummyPS::GetStaticType();
      local_3b8 = (FRHICommandListBase *)local_388.ShaderMap;
      aVar27 = (atomic<FRHIShader_*>)0x0;
      if (local_388.ShaderContent != (FShader *)0x0) {
        local_3c0 = ((local_388.ShaderMap)->Resource).Reference;
        if ((local_3c0 == (FShaderMapResource *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x426,L""), bVar19)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        aVar27 = (local_3c0->RHIShaders).Ptr[(local_388.ShaderContent)->ResourceIndex];
        if ((aVar27 == (atomic<FRHIShader_*>)0x0) &&
           (aVar27 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash
                               (local_3c0,(local_388.ShaderContent)->ResourceIndex,true),
           aVar27 == (atomic<FRHIShader_*>)0x0)) {
          if (4 < (byte)LogShaders._0_1_) {
            local_3c0 = (FShaderMapResource *)
                        CONCAT44(local_3c0._4_4_,(local_388.ShaderContent)->ResourceIndex);
            if ((*(longlong *)((longlong)local_3b8 + 0x18) == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PointerTable",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x9b4,L""), bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FShader::GetType(local_388.ShaderContent,
                             *(FShaderMapPointerTable **)((longlong)local_3b8 + 0x18));
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FLateZDummyPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          aVar27 = (atomic<FRHIShader_*>)0x0;
        }
      }
    }
    local_2b8.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar27;
    local_2b8.PrimitiveType = PT_TriangleList;
    SetGraphicsPipelineState(param_1,&local_2b8,0,CheckApply,true);
    pFVar24 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                        (&local_378,true);
    pFVar28 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
    FShadowVolumeBoundProjectionVS::SetParameters
              (local_378.ShaderContent,pFVar28,(FSceneView *)param_2,this,DrawingFrustum);
    FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar24,pFVar28);
    FRHICommandList::SetStreamSource(param_1,0,(FRHIBuffer *)GFrustumVertexBuffer._32_8_,0);
    if ((*(char *)((longlong)&param_2->_padding_ + 3) != '\0') &&
       (*(char *)((longlong)&param_2->_padding_ + 5) == '\0')) {
      bVar19 = IStereoRendering::IsStereoEyeView((FSceneView *)param_2);
      uVar20 = 1;
      if (bVar19) goto LAB_1455d5890;
    }
    uVar20 = *(uint *)((longlong)&param_2->_padding_ + 4);
LAB_1455d5890:
    FRHICommandList::DrawIndexedPrimitive
              (param_1,(FRHIBuffer *)GCubeIndexBuffer._32_8_,0,0,8,0,0xc,uVar20);
    pTVar17 = CVarEnableModulatedSelfShadow.Ref;
    if (!param_6) {
      return;
    }
    bVar19 = IsInParallelRenderingThread();
    if ((!bVar19) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (pTVar17->ShadowedValue[1] != 0) {
      return;
    }
    if ((this->ProjectionStencilingPasses).ArrayNum <= param_3) {
      return;
    }
    if ((param_3 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar37 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
    FVar38 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
    if (FVar37 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
      FVar38 = FVar37;
    }
    FSimpleMeshDrawCommandPass::SubmitDraw
              (*(FSimpleMeshDrawCommandPass **)((longlong)FVar38 + lVar39 * 8),param_1,local_3b0);
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_2c8 = 0;
    uStack_2c4 = 0;
    ::Desc._12_8_ = ZEXT48(uStack_2cc);
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_ = (longlong)u_EventMaskSubjec;
    ::Desc._padding_ = (longlong)u_Stencil_Mask_Su;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0x3cd;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FProjectedShadowInfo::SetupProjectionStencilMask'::__l10::<lambda_1>::operator()<>'::
           __l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  local_2e8._Myfirst._Val = &::Desc;
  this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar29 = FRHIBreadcrumbAllocator::
            AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_>
                      (this_00,&local_2e8);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_348,(FRHIComputeCommandList *)param_1,pFVar29);
  local_338 = '\x01';
  if (((*(char *)((longlong)&param_2->_padding_ + 3) == '\0') ||
      (*(char *)((longlong)&param_2->_padding_ + 5) != '\0')) ||
     (bVar19 = IStereoRendering::IsStereoEyeView((FSceneView *)param_2), !bVar19)) {
LAB_1455d5e53:
    if ((this->ProjectionStencilingPasses).ArrayNum <= param_3) goto LAB_1455d5f4a;
    if ((param_3 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar37 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
    FVar38 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
    if (FVar37 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
      FVar38 = FVar37;
    }
    if ((*(longlong *)((longlong)FVar38 + lVar39 * 8) == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ProjectionStencilingPasses[ViewIndex] != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                            ,0x403,L""), bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar20 = 0;
    if (param_3 < (this->ProjectionStencilingPasses).ArrayNum) {
      uVar20 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar37 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
    FVar38 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
    if (FVar37 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
      FVar38 = FVar37;
    }
    FSimpleMeshDrawCommandPass::SubmitDraw
              (*(FSimpleMeshDrawCommandPass **)((longlong)FVar38 + lVar39 * 8),param_1,local_3b0);
  }
  else {
    uVar20 = (uint)param_2->_padding_;
    if (((int)uVar20 < 0) || ((this->ProjectionStencilingPasses).ArrayNum <= (int)uVar20))
    goto LAB_1455d5e53;
    FVar37 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
    uVar34 = 0;
    if ((int)uVar20 < (this->ProjectionStencilingPasses).ArrayNum) {
      uVar34 = ~uVar20 >> 0x1f;
    }
    local_3a0 = FVar37;
    if ((uVar34 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar38 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
    FVar35 = FVar37;
    if (FVar38 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
      FVar35 = FVar38;
    }
    if ((*(int *)(*(longlong *)((longlong)FVar35 + (longlong)(int)uVar20 * 8) + 0x54) != 1) &&
       (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3477770809257229354>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                            ,0x3d6,
                            "ProjectionStencilingPasses[View->PrimaryViewIndex]->GetInstanceCullingMode() == EInstanceCullingMode::Stereo"
                           ), bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar30 = FViewInfo::GetPrimaryView(param_2);
    pFVar31 = FSceneView::GetInstancedSceneView((FSceneView *)param_2);
    fVar47 = __real_3f800000;
    if (*(char *)((longlong)&param_2->_padding_ + 4) == '\0') {
      FRHICommandList::SetViewport
                (param_1,(float)*(int *)&(pFVar30->ViewRect).field0_0x0,
                 (float)*(int *)((longlong)&(pFVar30->ViewRect).field0_0x0 + 4),0.0,
                 (float)*(int *)&pFVar31[1].Family,(float)*(int *)((longlong)&pFVar31[1].Family + 4)
                 ,__real_3f800000);
      puVar40 = (uint *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc);
      puVar41 = (uint *)((longlong)&(param_2->ViewRect).field0_0x0 + 8);
      FRHICommandList::SetScissorRect
                (param_1,true,*(uint *)&(param_2->ViewRect).field0_0x0,
                 *(uint *)((longlong)&(param_2->ViewRect).field0_0x0 + 4),*puVar41,*puVar40);
    }
    else {
      iVar2 = *(int *)((longlong)&(pFVar30->ViewRect).field0_0x0 + 8);
      iVar3 = *(int *)((longlong)&(pFVar30->ViewRect).field0_0x0 + 4);
      iVar4 = *(int *)(pFVar31 + 1);
      iVar5 = *(int *)&pFVar31[1].field_0x4;
      iVar6 = *(int *)((longlong)&(pFVar30->ViewRect).field0_0x0 + 0xc);
      iVar7 = *(int *)&pFVar31[1].Family;
      iVar8 = *(int *)((longlong)&pFVar31[1].Family + 4);
      local_3c0 = (FShaderMapResource *)
                  CONCAT44(local_3c0._4_4_,*(undefined4 *)&(pFVar30->ViewRect).field0_0x0);
      bVar19 = IStereoRendering::IsAPrimaryView((FSceneView *)local_3a8);
      param_1 = (FRHICommandList *)local_3b8;
      fVar47 = __real_3f800000;
      iVar14 = (int)local_3c0;
      iVar15 = iVar4;
      iVar16 = iVar5;
      if (!bVar19) {
        iVar14 = iVar2;
        iVar15 = iVar7;
        iVar16 = iVar8;
        iVar6 = iVar3;
      }
      if ((GRHICommandList.bLatchedBypass == false) ||
         ((local_3b8->PersistentState).bImmediate == '\0')) {
        pFVar33 = FMemStackBase::Alloc(&local_3b8->MemManager,0x38,8);
        ((FRHICommandListBase *)param_1)->NumCommands =
             ((FRHICommandListBase *)param_1)->NumCommands + 1;
        *((FRHICommandListBase *)param_1)->CommandLink = pFVar33;
        ((FRHICommandListBase *)param_1)->CommandLink = &pFVar33->Next;
        pFVar33->Next = (FRHICommandBase *)0x0;
        pFVar33->_padding_ = (longlong)&___7FRHICommandSetStereoViewport__6B_;
        *(float *)&pFVar33[1]._padding_ = (float)iVar14;
        *(float *)((longlong)&pFVar33[1]._padding_ + 4) = (float)iVar4;
        *(float *)&pFVar33[1].Next = (float)iVar3;
        *(float *)((longlong)&pFVar33[1].Next + 4) = (float)iVar5;
        *(float *)((longlong)&pFVar33[2]._padding_ + 4) = (float)iVar2;
        *(float *)&pFVar33[2].Next = (float)iVar15;
        *(float *)((longlong)&pFVar33[2].Next + 4) = (float)iVar6;
        *(float *)&pFVar33[3]._padding_ = (float)iVar16;
        *(undefined4 *)&pFVar33[2]._padding_ = 0;
        *(undefined4 *)((longlong)&pFVar33[3]._padding_ + 4) = 0x3f800000;
      }
      else {
        pIVar32 = FRHICommandListBase::GetContext(local_3b8);
        (**(code **)(pIVar32->_padding_ + 0x1a8))(pIVar32);
      }
      puVar40 = (uint *)((longlong)&(local_3a8->ViewRect).field0_0x0 + 0xc);
      puVar41 = (uint *)((longlong)&(local_3a8->ViewRect).field0_0x0 + 8);
      FVar37 = local_3a0;
      param_2 = local_3a8;
    }
    uVar20 = (uint)param_2->_padding_;
    uVar34 = 0;
    if ((int)uVar20 < *(int *)((longlong)FVar37 + 0x48)) {
      uVar34 = ~uVar20 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (*(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar37 + 0x40) !=
        (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
      FVar37 = *(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar37 + 0x40);
    }
    FSimpleMeshDrawCommandPass::SubmitDraw
              (*(FSimpleMeshDrawCommandPass **)((longlong)FVar37 + (longlong)(int)uVar20 * 8),
               param_1,local_3b0);
    FRHICommandList::SetScissorRect(param_1,false,0,0,0,0);
    FRHICommandList::SetViewport
              (param_1,(float)*(int *)&(param_2->ViewRect).field0_0x0,
               (float)*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4),0.0,
               (float)(int)*puVar41,(float)(int)*puVar40,fVar47);
  }
  if (local_338 == '\0') {
    return;
  }
LAB_1455d5f4a:
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_348);
  return;
}

// SetupProjectionStencilMaskForHair @ 1455d6030

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::SetupProjectionStencilMaskForHair
          (FProjectedShadowInfo *this,FRHICommandList *param_1,FViewInfo *param_2)

{
  FGlobalShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  FGlobalShaderType *pFVar3;
  TRefCountPtr<FRHIVertexDeclaration> *pTVar4;
  FRHIVertexShader *pFVar5;
  FRHIBatchedShaderParameters *pFVar6;
  undefined1 auStackY_188 [32];
  undefined1 local_148 [8];
  TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable> local_140;
  FGraphicsPipelineStateInitializer local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((((char)(this->bWholeSceneShadow << 7) < '\0') &&
      (-1 < (this->CascadeSettings).ShadowSplitIndex)) && (this->bDirectionalLight != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsWholeSceneDirectionalShadow()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                       ,0x488,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_128.bAllowVariableRateShading = true;
  local_128.ShadingRate = VRSSR_1x1;
  local_128.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_128.RenderTargetsEnabled = 0;
  local_128.RenderTargetFormats.Elements[0] = '\0';
  local_128.RenderTargetFormats.Elements[1] = '\0';
  local_128.RenderTargetFormats.Elements[2] = '\0';
  local_128.RenderTargetFormats.Elements[3] = '\0';
  local_128.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_128.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_128.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_128.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_128.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_128.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_128.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_128.BlendState = (FRHIBlendState *)0x0;
  local_128.RasterizerState = (FRHIRasterizerState *)0x0;
  local_128.DepthStencilState = (FRHIDepthStencilState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_128.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_128.RenderTargetFormats.Elements[4] = '\0';
  local_128.RenderTargetFormats.Elements[5] = '\0';
  local_128.RenderTargetFormats.Elements[6] = '\0';
  local_128.RenderTargetFormats.Elements[7] = '\0';
  local_128.RenderTargetFlags.Elements[0] = None;
  local_128.RenderTargetFlags.Elements[1] = None;
  local_128.RenderTargetFlags.Elements[2] = None;
  local_128.RenderTargetFlags.Elements[3] = None;
  local_128.RenderTargetFlags.Elements[4] = None;
  local_128.RenderTargetFlags.Elements[5] = None;
  local_128.RenderTargetFlags.Elements[6] = None;
  local_128.RenderTargetFlags.Elements[7] = None;
  local_128.DepthStencilTargetFormat = PF_Unknown;
  local_128.DepthStencilTargetFlag = None;
  local_128.DepthTargetLoadAction = ENoAction;
  local_128.DepthTargetStoreAction = ENoAction;
  local_128.StencilTargetLoadAction = ENoAction;
  local_128.StencilTargetStoreAction = ENoAction;
  local_128.DepthStencilAccess.Value = DepthNop;
  local_128.NumSamples = 0;
  local_128.SubpassHint = None;
  local_128.SubpassIndex = '\0';
  local_128.ConservativeRasterization = Disabled;
  local_128.bDepthBounds = false;
  local_128.MultiViewCount = '\0';
  local_128.bHasFragmentDensityAttachment = false;
  local_128.StatePrecachePSOHash = 0;
  FRHICommandList::ApplyCachedRenderTargets(param_1,&local_128);
  this_00 = param_2->ShaderMap;
  pFVar3 = FShadowVolumeBoundProjectionVS::GetStaticType();
  if (*(int *)&pFVar3->field_0x50 != 1) {
    `FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>'::__l2::<lambda_1>::operator()
              (local_148);
  }
  FGlobalShaderMap::GetShader<FShadowVolumeBoundProjectionVS>(this_00,&local_140,0);
  local_128.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,6,1,7,0,0,6,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.BlendState =
       TStaticStateRHI<TStaticBlendState<1,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.bDepthBounds = false;
  local_128.PrimitiveType = PT_TriangleList;
  pTVar4 = GetVertexDeclarationFVector4();
  local_128.BoundShaderState.VertexDeclarationRHI = pTVar4->Reference;
  local_128.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                 (&local_140,true);
  local_128.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
  SetGraphicsPipelineState(param_1,&local_128,0,CheckApply,true);
  pFVar5 = TShaderRefBase<FShadowVolumeBoundProjectionVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_140,true);
  pFVar6 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FShadowVolumeBoundProjectionVS::SetParameters
            (local_140.ShaderContent,pFVar6,(FSceneView *)param_2,this,DrawingFrustum);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar5,pFVar6);
  FRHICommandList::SetStreamSource(param_1,0,(FRHIBuffer *)GFrustumVertexBuffer._32_8_,0);
  FRHICommandList::DrawIndexedPrimitive(param_1,(FRHIBuffer *)GCubeIndexBuffer._32_8_,0,0,8,0,0xc,1)
  ;
  return;
}

// SetupShadowDepthView @ 1455d6e70

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
FProjectedShadowInfo::SetupShadowDepthView(FProjectedShadowInfo *this,FSceneRenderer *param_1)

{
  code *pcVar1;
  TRangeBound<int> TVar2;
  TRangeBound<int> TVar3;
  bool bVar4;
  FViewInfo *pFVar5;
  uint local_res8;
  uint local_res10;
  
  pFVar5 = FindViewForShadow(this,param_1);
  if (pFVar5 != (FViewInfo *)0x0) {
    bVar4 = IsInParallelRenderingThread();
    if (bVar4) goto LAB_1455d6ec1;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("FoundView && IsInParallelRenderingThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
                     ,0x4eb,L"");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1455d6ec1:
  pFVar5 = FViewInfo::CreateSnapshot(pFVar5);
  local_res10 = local_res10 & 0xffffff00;
  local_res8 = local_res8 & 0xffffff00;
  TVar2.Value = 0;
  TVar2._0_4_ = local_res8;
  TVar3.Value = 0;
  TVar3._0_4_ = local_res10;
  (pFVar5->DynamicPrimitiveCollector).UploadData = (FUploadData *)0x0;
  (pFVar5->DynamicPrimitiveCollector).bCommitted = false;
  (pFVar5->DynamicPrimitiveCollector).PrimitiveIdRange.LowerBound = TVar2;
  (pFVar5->DynamicPrimitiveCollector).PrimitiveIdRange.UpperBound = TVar3;
  (pFVar5->DynamicPrimitiveCollector).GPUSceneDynamicContext = &param_1->GPUSceneDynamicContext;
  ModifyViewForShadow(this,pFVar5);
  this->ShadowDepthView = pFVar5;
  return;
}

// SupportsShadowStencilCulling @ 1455e7750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FProjectedShadowInfo::SupportsShadowStencilCulling(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0)
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (((FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].MaxFeatureLevel == ES3_1) &&
      (FReadOnlyCVARCache::bMobileDeferredShadingValue != false)) &&
     (FReadOnlyCVARCache::bMobileHDR != false)) {
    return false;
  }
  return GShadowStencilCulling != 0;
}

// UpdateShaderDepthBias @ 1455e86c0

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

void __thiscall FProjectedShadowInfo::UpdateShaderDepthBias(FProjectedShadowInfo *this)

{
  undefined1 *puVar1;
  float fVar2;
  uchar uVar3;
  FLightSceneProxy *pFVar4;
  code *pcVar5;
  uint uVar6;
  TConsoleVariableData<float> *pTVar7;
  TConsoleVariableData<float> *pTVar8;
  bool bVar9;
  TConsoleVariableData<float> *pTVar10;
  TConsoleVariableData<float> *pTVar11;
  float fVar12;
  float fVar13;
  
  pTVar8 = CVarRectLightShadowDepthBias.Ref;
  pTVar7 = CVarPointLightShadowDepthBias.Ref;
  pTVar11 = CVarPerObjectDirectionalShadowDepthBias.Ref;
  pTVar10 = CVarCSMShadowDepthBias.Ref;
  if ((char)(this->bWholeSceneShadow << 7) < '\0') {
    uVar3 = this->LightSceneInfo->Proxy->LightType;
    if (uVar3 == '\x01') {
      bVar9 = IsInParallelRenderingThread();
      if (!bVar9) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      fVar13 = pTVar7->ShadowedValue[1];
      pTVar10 = CVarPointLightShadowSlopeScaleDepthBias.Ref;
    }
    else {
      if (uVar3 != '\x03') {
        if (((this->CascadeSettings).ShadowSplitIndex < 0) || (this->bDirectionalLight == 0))
        goto LAB_1455e890d;
        bVar9 = IsInParallelRenderingThread();
        if (!bVar9) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pTVar11 = CVarCSMShadowSlopeScaleDepthBias.Ref;
        fVar13 = pTVar10->ShadowedValue[1] / (this->MaxSubjectZ - this->MinSubjectZ);
        fVar13 = (((float)((this->ShadowBounds).W / (double)this->ResolutionX) * fVar13 - fVar13) *
                  (this->CascadeSettings).CascadeBiasDistribution + fVar13) *
                 this->LightSceneInfo->Proxy->ShadowBias;
        bVar9 = IsInParallelRenderingThread();
        if (!bVar9) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        goto LAB_1455e8b0e;
      }
      bVar9 = IsInParallelRenderingThread();
      if (!bVar9) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      fVar13 = pTVar8->ShadowedValue[1];
      pTVar10 = CVarRectLightShadowSlopeScaleDepthBias.Ref;
    }
    bVar9 = IsInParallelRenderingThread();
    if (!bVar9) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar6 = this->ResolutionY;
    if (this->ResolutionY < this->ResolutionX) {
      uVar6 = this->ResolutionX;
    }
    pFVar4 = this->LightSceneInfo->Proxy;
    fVar2 = pFVar4->ShadowBias;
    fVar12 = pTVar10->ShadowedValue[1] * pFVar4->ShadowSlopeBias;
    fVar13 = ((fVar13 * __real_44000000) / (float)uVar6) * (fVar2 + fVar2);
  }
  else {
LAB_1455e890d:
    if (this->bPreShadow != 0) {
      fVar13 = 0.0;
      fVar12 = 0.0;
      goto LAB_1455e8b26;
    }
    if (this->bDirectionalLight == 0) {
      if (this->bOnePassPointLightShadow != 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3477770809257228413>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowRendering.cpp"
                           ,0x783,"!bOnePassPointLightShadow");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pTVar11 = CVarPerObjectSpotLightShadowDepthBias.Ref;
      pTVar10 = CVarSpotLightShadowDepthBias.Ref;
      if (this->bPerObjectOpaqueShadow == 0) {
        bVar9 = IsInParallelRenderingThread();
        if (!bVar9) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        fVar13 = pTVar10->ShadowedValue[1];
        pTVar11 = CVarSpotLightShadowSlopeScaleDepthBias.Ref;
      }
      else {
        bVar9 = IsInParallelRenderingThread();
        if (!bVar9) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        fVar13 = pTVar11->ShadowedValue[1];
        pTVar11 = CVarPerObjectSpotLightShadowSlopeScaleDepthBias.Ref;
      }
      uVar6 = this->ResolutionY;
      if (this->ResolutionY < this->ResolutionX) {
        uVar6 = this->ResolutionX;
      }
      fVar12 = this->LightSceneInfo->Proxy->ShadowBias;
      fVar13 = ((fVar13 * __real_44000000) /
               ((this->MaxSubjectZ - this->MinSubjectZ) * (float)uVar6)) * (fVar12 + fVar12);
    }
    else {
      bVar9 = IsInParallelRenderingThread();
      if (!bVar9) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar6 = this->ResolutionY;
      if (this->ResolutionY < this->ResolutionX) {
        uVar6 = this->ResolutionX;
      }
      fVar13 = (pTVar11->ShadowedValue[1] / (this->MaxSubjectZ - this->MinSubjectZ)) *
               (float)((this->ShadowBounds).W / (double)uVar6) * __real_3f000000;
      pTVar11 = CVarPerObjectDirectionalShadowSlopeScaleDepthBias.Ref;
    }
    bVar9 = IsInParallelRenderingThread();
    if (!bVar9) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (__real_3dcccccd <= fVar13) {
      fVar13 = __real_3dcccccd;
    }
LAB_1455e8b0e:
    fVar12 = this->LightSceneInfo->Proxy->ShadowSlopeBias * pTVar11->ShadowedValue[1];
  }
LAB_1455e8b26:
  fVar12 = fVar12 * fVar13;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  this->ShaderDepthBias = fVar13;
  this->ShaderSlopeDepthBias = fVar12;
  pTVar10 = CVarShadowMaxSlopeScaleDepthBias.Ref;
  bVar9 = IsInParallelRenderingThread();
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->ShaderMaxSlopeDepthBias = pTVar10->ShadowedValue[1];
  return;
}

// UseShadowStencilCulling @ 1455e8c70

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
FProjectedShadowInfo::UseShadowStencilCulling(FProjectedShadowInfo *this,FViewInfo *param_1)

{
  bool bVar1;
  FStaticShaderPlatform FVar2;
  ForAnyElementType FVar3;
  undefined1 local_res18 [16];
  FString local_38;
  FString local_28;
  FString local_18;
  
  FVar2.Platform = FSceneView::GetShaderPlatform((FSceneView *)param_1);
  bVar1 = SupportsShadowStencilCulling(FVar2);
  if (bVar1) {
    if ((this->DependentView != (FViewInfo *)0x0) && (this->DependentView != param_1)) {
      `FProjectedShadowInfo::UseShadowStencilCulling'::__l2::<lambda_1>::operator()(local_res18);
    }
    bVar1 = MegaLights::IsEnabled((FSceneViewFamily *)param_1->_padding_);
    if (!bVar1) {
      return true;
    }
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FSceneRenderer::GetLightNameForDrawEvent(this->LightSceneInfo->Proxy,&local_38);
    ::FString::PrintfImpl
              (&local_28,
               L"r.Shadow.StencilCulling is not compatible with MegaLights. Modify \'%s\' to use MegaLights, enable VSM or disable r.Shadow.StencilCulling."
              );
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_18,(wchar_t *)FVar3.Data);
    UEngine::AddOnScreenDebugMessage
              (GEngine,(ulong64)this->LightSceneInfo->Proxy,__real_3f800000,FColor::Yellow,&local_18
               ,true,&UE::Math::TVector2<double>::UnitVector);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// FProjectedShadowInfo @ 145609de0

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

FProjectedShadowInfo * __thiscall
FProjectedShadowInfo::FProjectedShadowInfo(FProjectedShadowInfo *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  this->CacheMode = SDCM_Uncached;
  *(undefined ***)this = &___7FProjectedShadowInfo__6B_;
  (this->RenderTargets).ColorTargets.ArrayNum = 0;
  (this->RenderTargets).ColorTargets.ArrayMax = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  this->ShadowDepthView = (FViewInfo *)0x0;
  this->DependentView = (FViewInfo *)0x0;
  this->MaxSubjectZ = 0.0;
  this->MinSubjectZ = 0.0;
  this->ShadowId = -1;
  (this->RenderTargets).ColorTargets.AllocatorInstance.Data = (IPooledRenderTarget **)0x0;
  (this->RenderTargets).DepthTarget = (IPooledRenderTarget *)0x0;
  (this->CasterOuterFrustum).Planes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->PreShadowTranslation).field0_0x0._s_0.X = 0.0;
  (this->PreShadowTranslation).field0_0x0._s_0.Y = 0.0;
  (this->PreShadowTranslation).field0_0x0._s_0.Z = 0.0;
  (this->CasterOuterFrustum).Planes.ArrayNum = 0;
  (this->CasterOuterFrustum).Planes.ArrayMax = 6;
  (this->CasterOuterFrustum).PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->CasterOuterFrustum).PermutedPlanes.ArrayNum = 0;
  (this->CasterOuterFrustum).PermutedPlanes.ArrayMax = 8;
  (this->ReceiverInnerFrustum).Planes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->ReceiverInnerFrustum).Planes.ArrayNum = 0;
  (this->ReceiverInnerFrustum).Planes.ArrayMax = 6;
  (this->ReceiverInnerFrustum).PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->ReceiverInnerFrustum).PermutedPlanes.ArrayNum = 0;
  (this->ReceiverInnerFrustum).PermutedPlanes.ArrayMax = 8;
  (this->CascadeSettings).SplitNear = 0.0;
  (this->CascadeSettings).SplitFar = 8.796093e+12;
  (this->CascadeSettings).SplitNearFadeRegion = 0.0;
  (this->CascadeSettings).SplitFarFadeRegion = 0.0;
  (this->CascadeSettings).FadePlaneOffset = 8.796093e+12;
  (this->CascadeSettings).FadePlaneLength = 0.0;
  (this->CascadeSettings).ShadowBoundsAccurate.Planes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->ShadowBounds).Center.field0_0x0._s_0.X = 0.0;
  (this->ShadowBounds).Center.field0_0x0._s_0.Y = 0.0;
  (this->ShadowBounds).Center.field0_0x0._s_0.Z = 0.0;
  (this->ShadowBounds).W = 0.0;
  (this->CascadeSettings).ShadowBoundsAccurate.Planes.ArrayNum = 0;
  (this->CascadeSettings).ShadowBoundsAccurate.Planes.ArrayMax = 6;
  (this->CascadeSettings).ShadowBoundsAccurate.PermutedPlanes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->CascadeSettings).ShadowBoundsAccurate.PermutedPlanes.ArrayNum = 0;
  (this->CascadeSettings).ShadowBoundsAccurate.PermutedPlanes.ArrayMax = 8;
  (this->CascadeSettings).bFarShadowCascade = false;
  (this->CascadeSettings).ShadowSplitIndex = -1;
  (this->CascadeSettings).CascadeBiasDistribution = 1.0;
  *(undefined8 *)((longlong)&(this->ScissorRectOptim).field0_0x0._s_0.Min.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->ScissorRectOptim).field0_0x0 + 0xc) = 0;
  this->X = 0;
  this->Y = 0;
  this->ResolutionX = 0;
  this->ResolutionY = 0;
  *(undefined8 *)&this->BorderSize = 0;
  this->MaxScreenPercent = 1.0;
  (this->FadeAlphas).AllocatorInstance.SecondaryData = (ForElementType<float>)0x0;
  (this->FadeAlphas).ArrayNum = 0;
  (this->FadeAlphas).ArrayMax = 2;
  (this->VirtualShadowMapPerLightCacheEntry).Object = (FVirtualShadowMapPerLightCacheEntry *)0x0;
  (this->VirtualShadowMapPerLightCacheEntry).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VirtualShadowMapClipmap).Object = (FVirtualShadowMapClipmap *)0x0;
  (this->VirtualShadowMapClipmap).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OnePassShadowViewProjectionMatrices).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OnePassShadowViewProjectionMatrices).ArrayNum = 0;
  (this->OnePassShadowViewProjectionMatrices).ArrayMax = 0;
  (this->OnePassShadowViewMatrices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnePassShadowViewMatrices).ArrayNum = 0;
  (this->OnePassShadowViewMatrices).ArrayMax = 0;
  (this->OverlappedUVOnCachedShadowMap).field0_0x0._s_0.X = -1.0;
  (this->OverlappedUVOnCachedShadowMap).field0_0x0._s_0.Y = -1.0;
  (this->OverlappedUVOnCachedShadowMap).field0_0x0._s_0.Z = -1.0;
  (this->OverlappedUVOnCachedShadowMap).field0_0x0._s_0.W = -1.0;
  (this->OverlappedUVOnCurrentShadowMap).field0_0x0._s_0.X = -1.0;
  (this->OverlappedUVOnCurrentShadowMap).field0_0x0._s_0.Y = -1.0;
  (this->OverlappedUVOnCurrentShadowMap).field0_0x0._s_0.Z = -1.0;
  (this->OverlappedUVOnCurrentShadowMap).field0_0x0._s_0.W = -1.0;
  (this->CSMScrollingExtraCullingPlanes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  puVar2 = &this->field_0x990;
  this->bAllocated = 0;
  this->bVolumetricShadow = 0;
  this->bShouldRenderVSM = 1;
  this->bContainsNaniteSubjects = 0;
  this->bNaniteGeometry = 1;
  this->bHairStrandsDeepShadow = 0;
  this->bTransmission = 0;
  this->bPerObjectOpaqueShadow = 0;
  this->bSelfShadowOnly = 0;
  this->bPreShadow = 0;
  this->bCapsuleShadow = 0;
  this->bRayTracedDistanceField = 0;
  this->bTranslucentShadow = 0;
  this->bWholeSceneShadow = 0;
  this->bVSM = 0;
  this->bOnePassPointLightShadow = 0;
  this->bDirectionalLight = 0;
  this->bDepthsCached = 0;
  this->bAllocatedInPreshadowCache = 0;
  this->bRendered = 0;
  this->MeshSelectionMask = All;
  this->PerObjectShadowFadeStart = 2097152.0;
  this->InvPerObjectShadowFadeLength = 0.0;
  (this->CSMScrollingExtraCullingPlanes).ArrayNum = 0;
  (this->CSMScrollingExtraCullingPlanes).ArrayMax = 4;
  this->ProjectionIndex = 0;
  this->SubjectPrimitiveComponentIndex = -1;
  this->ExplicitNaniteInstanceChunkStartOffset = -1;
  (this->ViewIds).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  this->ExplicitNaniteInstanceChunkEndOffset = -1;
  this->ExplicitNaniteInstanceLastChunkSize = 0;
  (this->ViewIds).ArrayNum = 0;
  (this->ViewIds).ArrayMax = 6;
  this->LightSceneInfo = (FLightSceneInfo *)0x0;
  (this->LightSceneInfoCompact).LightSceneInfo = (FLightSceneInfo *)0x0;
  this->ParentSceneInfo = (FPrimitiveSceneInfo *)0x0;
  (this->DynamicSubjectPrimitives).AllocatorInstance.Data = (FPrimitiveSceneInfo **)0x0;
  (this->DynamicSubjectPrimitives).ArrayNum = 0;
  (this->DynamicSubjectPrimitives).ArrayMax = 0;
  (this->ReceiverPrimitives).AllocatorInstance.Data = (FPrimitiveSceneInfo **)0x0;
  (this->ReceiverPrimitives).ArrayNum = 0;
  (this->ReceiverPrimitives).ArrayMax = 0;
  (this->SubjectTranslucentPrimitives).AllocatorInstance.Data = (FPrimitiveSceneInfo **)0x0;
  (this->SubjectTranslucentPrimitives).ArrayNum = 0;
  (this->SubjectTranslucentPrimitives).ArrayMax = 0;
  (this->SubjectHeterogeneousVolumePrimitives).AllocatorInstance.Data = (FPrimitiveSceneInfo **)0x0;
  (this->SubjectHeterogeneousVolumePrimitives).ArrayNum = 0;
  (this->SubjectHeterogeneousVolumePrimitives).ArrayMax = 0;
  (this->DynamicSubjectMeshElements).AllocatorInstance.Data = (FMeshBatchAndRelevance *)0x0;
  (this->DynamicSubjectMeshElements).ArrayNum = 0;
  (this->DynamicSubjectMeshElements).ArrayMax = 0;
  (this->DynamicSubjectTranslucentMeshElements).AllocatorInstance.Data =
       (FMeshBatchAndRelevance *)0x0;
  (this->DynamicSubjectTranslucentMeshElements).ArrayNum = 0;
  (this->DynamicSubjectTranslucentMeshElements).ArrayMax = 0;
  (this->DynamicSubjectHeterogeneousVolumeMeshElements).AllocatorInstance.Data =
       (FMeshBatchAndRelevance *)0x0;
  (this->DynamicSubjectHeterogeneousVolumeMeshElements).ArrayNum = 0;
  (this->DynamicSubjectHeterogeneousVolumeMeshElements).ArrayMax = 0;
  (this->SubjectMeshCommandBuildRequests).AllocatorInstance.Data = (FStaticMeshBatch **)0x0;
  (this->SubjectMeshCommandBuildRequests).ArrayNum = 0;
  (this->SubjectMeshCommandBuildRequests).ArrayMax = 0;
  (this->SubjectMeshCommandBuildFlags).AllocatorInstance.Data =
       (EMeshDrawCommandCullingPayloadFlags *)0x0;
  (this->SubjectMeshCommandBuildFlags).ArrayNum = 0;
  (this->SubjectMeshCommandBuildFlags).ArrayMax = 0;
  this->NumDynamicSubjectMeshElements = 0;
  this->NumSubjectMeshCommandBuildRequestElements = 0;
  (this->ShadowDepthPassVisibleCommands).AllocatorInstance.Data = (FVisibleMeshDrawCommand *)0x0;
  (this->ShadowDepthPassVisibleCommands).ArrayNum = 0;
  (this->ShadowDepthPassVisibleCommands).ArrayMax = 0;
  FMeshDrawCommandPassSetupTaskContext::FMeshDrawCommandPassSetupTaskContext
            (&(this->ShadowDepthPass).TaskContext);
  (this->ShadowDepthPass).TaskEventRef.Reference = (FBaseGraphTask *)0x0;
  (this->ShadowDepthPass).PassNameForStats.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ShadowDepthPass).PassNameForStats.Data.ArrayNum = 0;
  (this->ShadowDepthPass).PassNameForStats.Data.ArrayMax = 0;
  (this->ShadowDepthPass).bHasInstanceCullingDrawParameters = false;
  (this->ShadowDepthPass).MaxNumDraws = 0;
  (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData =
       (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0;
  (this->ProjectionStencilingPasses).ArrayNum = 0;
  (this->ProjectionStencilingPasses).ArrayMax = 8;
  TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>
            (&(this->DynamicMeshDrawCommandStorage).MeshDrawCommands,0);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              *)&this->GraphicsMinimalPipelineStateSet);
  this->ShaderDepthBias = 0.0;
  this->ShaderSlopeDepthBias = 0.0;
  *(undefined8 *)&this->CachedDistanceFieldShadowViewGPUData = 0;
  *(undefined8 *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x8 = 0;
  *(undefined8 *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x20 = 0;
  this->MaxNonFarCascadeDistance = -1.0;
  *(undefined4 *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x28 = 0;
  *(undefined4 *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x34 = 0;
  *(undefined4 *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x40 = 0;
  *(undefined4 *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x48 = 0;
  return this;
}

// ~FProjectedShadowInfo @ 14560b2e0

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

void __thiscall FProjectedShadowInfo::~FProjectedShadowInfo(FProjectedShadowInfo *this)

{
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  FVisibleMeshDrawCommand *pFVar6;
  EMeshDrawCommandCullingPayloadFlags *pEVar7;
  FStaticMeshBatch **ppFVar8;
  FMeshBatchAndRelevance *pFVar9;
  FPrimitiveSceneInfo **ppFVar10;
  ForElementType<int> FVar11;
  ForElementType<UE::Math::TPlane<double>_> FVar12;
  ForElementType<float> FVar13;
  IPooledRenderTarget **ppIVar14;
  code *pcVar15;
  bool bVar16;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar17;
  undefined1 local_res8 [8];
  
  *(undefined ***)this = &___7FProjectedShadowInfo__6B_;
  FVar17 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
  iVar2 = (this->ProjectionStencilingPasses).ArrayNum;
  if (FVar17 == (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
    FVar17 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
  }
  FVar1 = (ForElementType<FSimpleMeshDrawCommandPass_*>)((longlong)FVar17 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->ProjectionStencilingPasses).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSimpleMeshDrawCommandPass_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar17 == FVar1) break;
    puVar3 = *(undefined8 **)FVar17;
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[0x3b] = &___7FMeshPassDrawListContext__6B_;
      TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::Empty((TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
               *)(puVar3 + 0x37),0);
      if ((void *)puVar3[0x37] != (void *)0x0) {
        FMemory::Free((void *)puVar3[0x37]);
      }
      Experimental::RobinHoodHashTable_Private::
      TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
      ::
      ~TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
                ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
                  *)(puVar3 + 0x28));
      FInstanceCullingContext::~FInstanceCullingContext((FInstanceCullingContext *)(puVar3 + 2));
      if ((void *)*puVar3 != (void *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((void *)*puVar3);
      }
      ::operator_delete(puVar3,0x210);
    }
    FVar17 = (ForElementType<FSimpleMeshDrawCommandPass_*>)((longlong)FVar17 + 8);
  }
  *(undefined4 *)&(this->CachedDistanceFieldShadowViewGPUData).field_0x48 = 0;
  pvVar4 = *(void **)&(this->CachedDistanceFieldShadowViewGPUData).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FViewInfo_const_*,FProjectedShadowInfo::DistanceFieldShadowViewGPUData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedDistanceFieldShadowViewGPUData);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              *)&this->GraphicsMinimalPipelineStateSet);
  TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&this->DynamicMeshDrawCommandStorage,0);
  pFVar5 = (this->DynamicMeshDrawCommandStorage).MeshDrawCommands.Chunks.Array.AllocatorInstance.
           Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FVar17 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
  if (FVar17 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
    FMemory::Free((void *)FVar17);
  }
  FParallelMeshDrawCommandPass::~FParallelMeshDrawCommandPass(&this->ShadowDepthPass);
  pFVar6 = (this->ShadowDepthPassVisibleCommands).AllocatorInstance.Data;
  if (pFVar6 != (FVisibleMeshDrawCommand *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar6);
  }
  pEVar7 = (this->SubjectMeshCommandBuildFlags).AllocatorInstance.Data;
  if (pEVar7 != (EMeshDrawCommandCullingPayloadFlags *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pEVar7);
  }
  ppFVar8 = (this->SubjectMeshCommandBuildRequests).AllocatorInstance.Data;
  if (ppFVar8 != (FStaticMeshBatch **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar8);
  }
  pFVar9 = (this->DynamicSubjectHeterogeneousVolumeMeshElements).AllocatorInstance.Data;
  if (pFVar9 != (FMeshBatchAndRelevance *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar9);
  }
  pFVar9 = (this->DynamicSubjectTranslucentMeshElements).AllocatorInstance.Data;
  if (pFVar9 != (FMeshBatchAndRelevance *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar9);
  }
  pFVar9 = (this->DynamicSubjectMeshElements).AllocatorInstance.Data;
  if (pFVar9 != (FMeshBatchAndRelevance *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar9);
  }
  ppFVar10 = (this->SubjectHeterogeneousVolumePrimitives).AllocatorInstance.Data;
  if (ppFVar10 != (FPrimitiveSceneInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar10);
  }
  ppFVar10 = (this->SubjectTranslucentPrimitives).AllocatorInstance.Data;
  if (ppFVar10 != (FPrimitiveSceneInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar10);
  }
  ppFVar10 = (this->ReceiverPrimitives).AllocatorInstance.Data;
  if (ppFVar10 != (FPrimitiveSceneInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar10);
  }
  ppFVar10 = (this->DynamicSubjectPrimitives).AllocatorInstance.Data;
  if (ppFVar10 != (FPrimitiveSceneInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar10);
  }
  FVar11 = (this->ViewIds).AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  FVar12 = (this->CSMScrollingExtraCullingPlanes).AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  pFVar5 = (this->OnePassShadowViewMatrices).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->OnePassShadowViewProjectionMatrices).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualShadowMapClipmap).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VirtualShadowMapPerLightCacheEntry).SharedReferenceCount.ReferenceController);
  FVar13 = (this->FadeAlphas).AllocatorInstance.SecondaryData;
  if (FVar13 != (ForElementType<float>)0x0) {
    FMemory::Free((void *)FVar13);
  }
  FVar12 = (this->CascadeSettings).ShadowBoundsAccurate.PermutedPlanes.AllocatorInstance.
           SecondaryData;
  if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->CascadeSettings).ShadowBoundsAccurate.Planes.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->ReceiverInnerFrustum).PermutedPlanes.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->ReceiverInnerFrustum).Planes.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->CasterOuterFrustum).PermutedPlanes.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->CasterOuterFrustum).Planes.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  ppIVar14 = (this->RenderTargets).ColorTargets.AllocatorInstance.Data;
  if (ppIVar14 != (IPooledRenderTarget **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppIVar14);
  }
  *(undefined ***)this = &___7FRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("!NumRefs",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                        ,0xff,L"");
    if (bVar16) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
  return;
}

// operator() @ 14560c570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<double> * __thiscall
`FProjectedShadowInfo::ComputeScissorRectOptim'::__l2::<lambda_1>::operator()
          (void *this,TVector4<double> *__return_storage_ptr__,TLine2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  dVar12 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
  dVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
  dVar1 = (param_1->Origin).field0_0x0._s_0.X;
  dVar2 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar3 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar4 = (param_1->Direction).field0_0x0._s_0.X;
  lVar8 = 2;
  local_f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_f0 = _UNK_15061cbc8;
  local_d8 = ___xmm_0000000000000000bff0000000000000;
  uStack_d0 = _UNK_15076ad98;
  local_e0 = (double)*(int *)((longlong)this + 4);
  local_c0 = (double)*(int *)((longlong)this + 4);
  local_100 = 0.0;
  local_e8 = (double)*(int *)this;
  local_c8 = 0;
  local_b8 = ___xmm_bff00000000000000000000000000000;
  uStack_b0 = _UNK_1508ffb28;
  pdVar7 = &local_100;
  fVar15 = __real_47c35000;
  do {
    dVar9 = dVar4 * pdVar7[-2] - dVar3 * pdVar7[-3];
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar9 = (pdVar7[-2] * (pdVar7[-5] - dVar1) - pdVar7[-3] * (pdVar7[-4] - dVar2)) / dVar9;
      dVar14 = dVar9 * dVar3 + dVar2;
      dVar6 = dVar9 * dVar4 + dVar1;
      dVar9 = dVar14 - dVar2;
      dVar5 = dVar6 - dVar1;
      dVar10 = dVar5 * dVar5 + dVar9 * dVar9;
      if (dVar10 <= __real_3e45798ee0000000) {
        dVar9 = 0.0;
        dVar5 = 0.0;
      }
      else {
        dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
        dVar9 = dVar9 * dVar10;
        dVar5 = dVar5 * dVar10;
      }
      if ((0.0 < dVar3 * dVar9 + dVar4 * dVar5) &&
         (fVar11 = (float)SQRT((dVar2 - dVar14) * (dVar2 - dVar14) +
                               (dVar1 - dVar6) * (dVar1 - dVar6)), fVar11 < fVar15)) {
        dVar12 = dVar6;
        dVar13 = dVar14;
        fVar15 = fVar11;
      }
    }
    dVar9 = dVar4 * pdVar7[2] - dVar3 * pdVar7[1];
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar9 = (pdVar7[2] * (pdVar7[-1] - dVar1) - pdVar7[1] * (*pdVar7 - dVar2)) / dVar9;
      dVar14 = dVar9 * dVar3 + dVar2;
      dVar6 = dVar9 * dVar4 + dVar1;
      dVar9 = dVar14 - dVar2;
      dVar5 = dVar6 - dVar1;
      dVar10 = dVar9 * dVar9 + dVar5 * dVar5;
      if (dVar10 <= __real_3e45798ee0000000) {
        dVar9 = 0.0;
        dVar5 = 0.0;
      }
      else {
        dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
        dVar9 = dVar9 * dVar10;
        dVar5 = dVar5 * dVar10;
      }
      if ((0.0 < dVar3 * dVar9 + dVar4 * dVar5) &&
         (fVar11 = (float)SQRT((dVar2 - dVar14) * (dVar2 - dVar14) +
                               (dVar1 - dVar6) * (dVar1 - dVar6)), fVar11 < fVar15)) {
        dVar12 = dVar6;
        dVar13 = dVar14;
        fVar15 = fVar11;
      }
    }
    pdVar7 = pdVar7 + 8;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13;
  return __return_storage_ptr__;
}

// AddCachedMeshDrawCommandsForPass @ 145611840

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
FProjectedShadowInfo::AddCachedMeshDrawCommandsForPass
          (FProjectedShadowInfo *this,FMeshDrawCommandPrimitiveIdInfo *param_1,
          FPrimitiveSceneInfo *param_2,FStaticMeshBatchRelevance *param_3,FStaticMeshBatch *param_4,
          EMeshDrawCommandCullingPayloadFlags param_5,FScene *param_6,Type param_7,
          TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_8,TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                   *param_9,
          TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_10,int *param_11)

{
  <unnamed_type_BasePass> *p<Var1;
  FMeshDrawCommandPrimitiveIdInfo *pFVar2;
  FHashElementId FVar3;
  FScriptContainerElement *pFVar4;
  FVisibleMeshDrawCommand *pFVar5;
  FStaticMeshBatch **ppFVar6;
  EMeshDrawCommandCullingPayloadFlags *pEVar7;
  code *pcVar8;
  FVisibleMeshDrawCommand *pFVar9;
  FScene *pFVar10;
  Type TVar11;
  TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar12;
  TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar13;
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  FStaticMeshBatch *local_88 [2];
  FVisibleMeshDrawCommand local_78;
  
  pFVar10 = param_6;
  iVar17 = *(int *)&param_6->field_0x8;
  bVar15 = UseCachedMeshDrawCommands();
  pTVar14 = param_10;
  TVar11 = param_7;
  if (bVar15) {
    uVar20 = (ulonglong)param_7;
    if (WaterInfoTexturePass < param_7) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShadingPath < EShadingPath::Num && PassType < EMeshPass::Num",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                          ,0x942,L"");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar18 = 0;
    if (2 < iVar17) {
      lVar18 = 0x27;
    }
    if (((FPassProcessorManager::Flags[0][lVar18 + uVar20] & CachedMeshCommands) != None) &&
       (param_3->bSupportsCachingMeshDrawCommands != '\0')) {
      uVar16 = FStaticMeshBatchRelevance::GetStaticMeshCommandInfoIndex(param_3,TVar11);
      if (-1 < (int)uVar16) {
        uVar19 = 0;
        if ((int)uVar16 < (param_2->StaticMeshCommandInfos).ArrayNum) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if (uVar19 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        pFVar4 = (param_2->StaticMeshCommandInfos).AllocatorInstance.Data;
        FVar3.Index = *(int *)(pFVar4 + (longlong)(int)uVar16 * 0x24 + 0xc);
        p<Var1 = (<unnamed_type_BasePass> *)(pFVar4 + (longlong)(int)uVar16 * 0x24);
        if (FVar3.Index < 0) {
          local_78.MeshDrawCommand =
               (FMeshDrawCommand *)
               ((longlong)*(int *)&p<Var1[1].VertexShaderHash * 0x198 +
               *(longlong *)&pFVar10->CachedDrawLists[uVar20].MeshDrawCommands);
        }
        else {
          local_78.MeshDrawCommand =
               (FMeshDrawCommand *)
               Experimental::RobinHoodHashTable_Private::
               TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
               ::GetByElementId((TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
                                 *)(pFVar10->CachedMeshDrawCommandStateBuckets + uVar20),FVar3);
        }
        pTVar12 = param_8;
        local_78.StateBucketId = *(int *)((longlong)&p<Var1[1].PixelShaderHash + 2);
        local_78.SortKey.field0_0x0.Generic = *(FMeshDrawCommandSortKey_u_0 *)p<Var1;
        local_78.PrimitiveIdBufferOffset = -1;
        local_78.PrimitiveIdInfo.DrawPrimitiveId = param_1->DrawPrimitiveId;
        local_78.PrimitiveIdInfo.ScenePrimitiveId = param_1->ScenePrimitiveId;
        local_78.PrimitiveIdInfo._8_4_ = *(undefined4 *)&param_1->field_0x8;
        local_78._64_4_ =
             *(uint *)((longlong)&p<Var1[3].PixelShaderHash + 2) & 0x3f |
             local_78._64_4_ & 0xffffffc0;
        pFVar5 = (param_8->AllocatorInstance).Data;
        local_78.Flags = p<Var1[4].VertexShaderHash;
        local_78.CullingPayload.field0_0x0.PackedData = SUB84(p<Var1[2],0);
        local_78.CullingPayload.DynamicMeshBoundsIndex = SUB84(p<Var1[2],4);
        local_78.CullingPayloadFlags = param_5;
        local_78.RunArray = (uint *)0x0;
        local_78.NumRuns = 0;
        if ((pFVar5 <= &local_78) && (&local_78 < pFVar5 + param_8->ArrayMax)) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar17 = pTVar12->ArrayNum;
        if (iVar17 == pTVar12->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
                             (0x848,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
        }
        pTVar12->ArrayNum = iVar17 + 1;
        pFVar5 = (pTVar12->AllocatorInstance).Data;
        pFVar5[iVar17].MeshDrawCommand = local_78.MeshDrawCommand;
        pFVar5[iVar17].SortKey.field0_0x0.BasePass =
             (<unnamed_type_BasePass>)local_78.SortKey.field0_0x0;
        pFVar2 = &pFVar5[iVar17].PrimitiveIdInfo;
        pFVar2->DrawPrimitiveId = local_78.PrimitiveIdInfo.DrawPrimitiveId;
        pFVar2->ScenePrimitiveId = local_78.PrimitiveIdInfo.ScenePrimitiveId;
        *(ulonglong *)&pFVar2->field_0x8 =
             CONCAT44(local_78.PrimitiveIdBufferOffset,local_78.PrimitiveIdInfo._8_4_);
        *(ulonglong *)&pFVar5[iVar17].StateBucketId =
             CONCAT44(local_78._36_4_,local_78.StateBucketId);
        *(uint **)(&pFVar5[iVar17].StateBucketId + 2) = local_78.RunArray;
        pFVar9 = pFVar5 + iVar17;
        pFVar9->NumRuns = local_78.NumRuns;
        (pFVar9->CullingPayload).field0_0x0 = local_78.CullingPayload.field0_0x0;
        *(ulonglong *)(&pFVar9->NumRuns + 2) =
             CONCAT44(local_78._60_4_,local_78.CullingPayload.DynamicMeshBoundsIndex);
        *(ulonglong *)&pFVar5[iVar17].field_0x40 = CONCAT44(local_78._68_4_,local_78._64_4_);
      }
      goto LAB_145611c10;
    }
  }
  pTVar13 = param_9;
  *param_11 = *param_11 + (uint)param_3->NumElements;
  ppFVar6 = (param_9->AllocatorInstance).Data;
  local_88[0] = param_4;
  if ((ppFVar6 <= local_88) && (local_88 < ppFVar6 + param_9->ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar17 = pTVar13->ArrayNum;
  if (iVar17 == pTVar13->ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
                       (0x808,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
  }
  pTVar13->ArrayNum = iVar17 + 1;
  (pTVar13->AllocatorInstance).Data[iVar17] = local_88[0];
  pEVar7 = (pTVar14->AllocatorInstance).Data;
  if ((pEVar7 <= &param_5) && (&param_5 < pEVar7 + pTVar14->ArrayMax)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar15) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar17 = pTVar14->ArrayNum;
  if (iVar17 == pTVar14->ArrayMax) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
                       (0x101,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
  }
  pTVar14->ArrayNum = iVar17 + 1;
  (pTVar14->AllocatorInstance).Data[iVar17] = param_5;
LAB_145611c10:
  pEVar7 = (pTVar14->AllocatorInstance).Data;
  if (pEVar7 != (EMeshDrawCommandCullingPayloadFlags *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pEVar7);
  }
  return;
}

// AddCachedMeshDrawCommands_AnyThread @ 145611c70

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
FProjectedShadowInfo::AddCachedMeshDrawCommands_AnyThread
          (FProjectedShadowInfo *this,FScene *param_1,FStaticMeshBatchRelevance *param_2,int param_3
          ,int *param_4,FAddSubjectPrimitiveResult *param_5,FAddSubjectPrimitiveStats *param_6,
          FAddSubjectPrimitiveOverflowedIndices *param_7)

{
  int *piVar1;
  short *psVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  Type TVar8;
  bool bVar9;
  int iVar10;
  EShadowDepthType EVar11;
  longlong lVar12;
  short sVar13;
  short local_18 [8];
  
  if (this->bDirectionalLight == 0) {
    EVar11 = Point;
    if (this->bOnePassPointLightShadow != 0) {
      EVar11 = OnePassPoint;
    }
  }
  else {
    EVar11 = Directional;
  }
  TVar8 = GetShadowMeshPassType(EVar11 | this->bVSM);
  iVar10 = *(int *)&param_1->field_0x8;
  bVar9 = UseCachedMeshDrawCommands_AnyThread();
  if (bVar9) {
    if ((WaterInfoTexturePass < TVar8) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShadingPath < EShadingPath::Num && PassType < EMeshPass::Num",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                           ,0x942,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar12 = 0;
    if (2 < iVar10) {
      lVar12 = 0x27;
    }
    if (((FPassProcessorManager::Flags[0][lVar12 + (ulonglong)TVar8] & CachedMeshCommands) != None)
       && (param_2->bSupportsCachingMeshDrawCommands != '\0')) {
      iVar10 = FStaticMeshBatchRelevance::GetStaticMeshCommandInfoIndex(param_2,TVar8);
      if (iVar10 < 0) {
        return;
      }
      param_6->NumCachedMDCCopies = param_6->NumCachedMDCCopies + 1;
      iVar5 = *param_4;
      *param_4 = iVar5 + 1;
      if (((iVar5 < 0) || (0xfffe < iVar10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumAcceptedStaticMeshes >= 0 && MDCIdx < ((uint16) 0xffff)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                             ,0x60f,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      sVar13 = (short)iVar10;
      if (iVar5 < 2) {
        *(short *)((longlong)&param_5->field0_0x0 + (longlong)iVar5 * 2 + 4) = sVar13 + 1;
        if ((*(byte *)&param_5->field0_0x0 & 2) != 0) {
          uVar4 = *(undefined2 *)((longlong)&param_5->field0_0x0 + 6);
          *(undefined2 *)((longlong)&param_5->field0_0x0 + 6) =
               *(undefined2 *)((longlong)&param_5->field0_0x0 + 4);
          *(undefined2 *)((longlong)&param_5->field0_0x0 + 4) = uVar4;
          *(uint *)&param_5->field0_0x0 = *(uint *)&param_5->field0_0x0 | 1;
          return;
        }
      }
      else {
        if (iVar5 == 2) {
          FAddSubjectPrimitiveResult::HandleOverflow(param_5,param_7);
        }
        if (((*(byte *)&param_5->field0_0x0 & 4) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("bOverflowed",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                               ,0x620,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_7->MDCIndices).AllocatorInstance.Data;
        local_18[0] = sVar13;
        if (((pFVar6 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             pFVar6 + (longlong)(param_7->MDCIndices).ArrayMax * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (param_7->MDCIndices).ArrayNum;
        piVar1 = &(param_7->MDCIndices).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,(ForAnyElementType *)param_7,piVar1);
        }
        (param_7->MDCIndices).ArrayNum = iVar10 + 1;
        *(short *)((param_7->MDCIndices).AllocatorInstance.Data + (longlong)iVar10 * 2) =
             local_18[0];
        psVar2 = (short *)((longlong)&param_5->field0_0x0 + 4);
        *psVar2 = *psVar2 + 1;
      }
      *(uint *)&param_5->field0_0x0 = *(uint *)&param_5->field0_0x0 | 1;
      return;
    }
  }
  param_6->NumMDCBuildRequests = param_6->NumMDCBuildRequests + 1;
  iVar10 = *param_4;
  *param_4 = iVar10 + 1;
  FAddSubjectPrimitiveResult::AcceptMesh(param_5,iVar10,param_3,param_7);
  return;
}

// AddReceiverPrimitive @ 1456137a0

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
FProjectedShadowInfo::AddReceiverPrimitive(FProjectedShadowInfo *this,FPrimitiveSceneInfo *param_1)

{
  int *piVar1;
  TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  FPrimitiveSceneInfo **ppFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPrimitiveSceneInfo *local_res10 [3];
  
  pTVar2 = &this->ReceiverPrimitives;
  ppFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((ppFVar3 <= local_res10) && (local_res10 < ppFVar3 + (this->ReceiverPrimitives).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ReceiverPrimitives).ArrayNum;
  piVar1 = &(this->ReceiverPrimitives).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ReceiverPrimitives).ArrayNum = iVar6 + 1;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_res10[0];
  return;
}

// AddSubjectPrimitive @ 145613b00

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
FProjectedShadowInfo::AddSubjectPrimitive
          (FProjectedShadowInfo *this,FPrimitiveSceneInfo *param_1,
          TArrayView<FViewInfo,int> *param_2,bool param_3,bool param_4)

{
  int *piVar1;
  TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  FPrimitiveSceneProxy *pFVar7;
  FViewInfo *pFVar8;
  longlong lVar9;
  longlong lVar10;
  FPrimitiveSceneProxy *pFVar11;
  FPrimitiveSceneInfo **ppFVar12;
  code *pcVar13;
  double dVar14;
  undefined1 auVar15 [12];
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined1 uVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  FViewMatrices *pFVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  int iVar29;
  FPrimitiveSceneInfo **ppFVar30;
  byte *pbVar31;
  byte bVar32;
  byte *pbVar33;
  byte bVar34;
  longlong lVar35;
  double dVar36;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  double dVar38;
  FPrimitiveSceneInfo *local_res10;
  byte local_c8;
  undefined8 local_a8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_78 [32];
  double local_58;
  
  local_res10 = param_1;
  if ((this->bRayTracedDistanceField != 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bRayTracedDistanceField",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                          ,0x7b4,L""), bVar20)) {
    pcVar13 = (code *)swi(3);
    uVar21 = (*pcVar13)();
    return (bool)uVar21;
  }
  ppFVar30 = (this->ReceiverPrimitives).AllocatorInstance.Data;
  bVar20 = false;
  ppFVar12 = ppFVar30 + (this->ReceiverPrimitives).ArrayNum;
  for (; ppFVar30 != ppFVar12; ppFVar30 = ppFVar30 + 1) {
    if (*ppFVar30 == local_res10) {
      return false;
    }
  }
  pFVar7 = local_res10->Proxy;
  if ((this->CascadeSettings).bFarShadowCascade == false) {
    if ((((GEnableNonNaniteVSM != 0) && (this->bVSM != 0)) &&
        (bVar22 = IsWholeSceneDirectionalShadow(this), bVar22)) &&
       (0.0 < this->MaxNonFarCascadeDistance)) {
      if ((this->DependentView == (FViewInfo *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("DependentView",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                              ,0x864,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        uVar21 = (*pcVar13)();
        return (bool)uVar21;
      }
      pFVar26 = FSceneView::GetShadowViewMatrices((FSceneView *)this->DependentView);
      auVar5 = *(undefined1 (*) [16])&(pFVar26->ViewOrigin).field0_0x0;
      local_58 = (pFVar26->ViewOrigin).field0_0x0._s_0.Z;
      pFVar8 = this->DependentView;
      auVar15._4_8_ = extraout_XMM0_Qb;
      auVar15._0_4_ = auVar5._4_4_;
      auVar37._0_8_ = auVar15._0_8_ << 0x20;
      auVar37._8_4_ = auVar5._8_4_;
      auVar37._12_4_ = auVar5._12_4_;
      if ((double)this->MaxNonFarCascadeDistance <
          (double)(float)(((pFVar7->Bounds).Origin.field0_0x0._s_0.Y - auVar37._8_8_) *
                          (double)pFVar8->_padding_ +
                          ((pFVar7->Bounds).Origin.field0_0x0._s_0.X - auVar5._0_8_) *
                          (double)pFVar8->_padding_ +
                         ((pFVar7->Bounds).Origin.field0_0x0._s_0.Z - local_58) *
                         (double)pFVar8->_padding_) - (pFVar7->Bounds).SphereRadius)
      goto LAB_145613cab;
    }
  }
  else {
LAB_145613cab:
    if (pFVar7->bCastFarShadow == '\0') {
      return false;
    }
  }
  pFVar7 = local_res10->Proxy;
  bVar22 = IsWholeSceneDirectionalShadow(this);
  if (bVar22) {
    local_88 = SUB84(this->DependentView,0);
    uStack_84 = (undefined4)((ulonglong)this->DependentView >> 0x20);
    iVar25 = 1;
  }
  else {
    if ((param_2->ArrayNum == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                            ,0x7c9,
                            L"bWholeSceneShadow=%s, CascadeSettings.ShadowSplitIndex=%d, bDirectionalLight=%s"
                           ), bVar22)) {
      pcVar13 = (code *)swi(3);
      uVar21 = (*pcVar13)();
      return (bool)uVar21;
    }
    local_88 = *(undefined4 *)&param_2->DataPtr;
    uStack_84 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    iVar25 = param_2->ArrayNum;
  }
  dVar4 = __real_3ff0000000000000;
  pbVar31 = (byte *)CONCAT44(uStack_84,local_88);
  local_a8 = (byte *)CONCAT44(uStack_84,local_88);
  bVar18 = false;
  bVar17 = false;
  uVar6 = local_res10->PackedIndex;
  lVar35 = (longlong)(int)uVar6;
  bVar19 = false;
  local_c8 = 0;
  bVar22 = false;
  pbVar27 = pbVar31 + (longlong)iVar25 * 0x2970;
  bVar34 = 0;
  if (pbVar31 == pbVar27) goto LAB_1456144ef;
  pbVar31 = pbVar31 + 0xed8;
  bVar18 = false;
  bVar19 = false;
  do {
    uVar23 = 0;
    if ((int)uVar6 < *(int *)(pbVar31 + 0xe40)) {
      uVar23 = ~uVar6 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar13 = (code *)swi(3);
      uVar21 = (*pcVar13)();
      return (bool)uVar21;
    }
    lVar9 = *(longlong *)(pbVar31 + 0xe38);
    uVar23 = *(uint *)(lVar9 + 8 + lVar35 * 0x10);
    if ((uVar23 >> 0x10 & 1) == 0) {
      if (dVar4 < *(double *)(pbVar31 + -0xab0) || dVar4 == *(double *)(pbVar31 + -0xab0)) {
LAB_145613f13:
        lVar10 = *(longlong *)(pbVar31 + 0xd68);
        if ((((lVar10 == 0) || ((int)uVar6 < 0)) || (*(int *)(lVar10 + 0xef8) <= (int)uVar6)) ||
           (bVar20 = FHLODVisibilityState::IsNodeForcedHidden
                               ((FHLODVisibilityState *)(lVar10 + 0xe80),uVar6), !bVar20)) {
          if (*(int *)(pbVar31 + 0x1c) == -1) {
LAB_145614046:
            pFVar11 = local_res10->Proxy;
            uVar23 = (pFVar11->PrimitiveComponentId).PrimIDValue;
            if (*(int *)(pbVar31 + -0x38) != *(int *)(pbVar31 + -0xc)) {
              pbVar33 = *(byte **)pbVar31;
              if (pbVar33 == (byte *)0x0) {
                pbVar33 = pbVar31 + -8;
              }
              iVar29 = *(int *)(pbVar33 + (ulonglong)(*(int *)(pbVar31 + 8) - 1U & uVar23) * 4);
              if (iVar29 != -1) {
                do {
                  if (*(uint *)(*(longlong *)(pbVar31 + -0x40) + (longlong)iVar29 * 0xc) == uVar23)
                  goto LAB_145613fb2;
                  iVar29 = *(int *)(*(longlong *)(pbVar31 + -0x40) + 4 + (longlong)iVar29 * 0xc);
                } while (iVar29 != -1);
              }
            }
            puVar28 = (undefined8 *)
                      (**(code **)(pFVar11->_padding_ + 0xd0))(pFVar11,local_78,pbVar31 + -0xed8);
            uVar16 = puVar28[1];
            puVar3 = (undefined8 *)(lVar9 + lVar35 * 0x10);
            *puVar3 = *puVar28;
            puVar3[1] = uVar16;
            uVar23 = *(uint *)(lVar9 + 8 + lVar35 * 0x10);
            goto LAB_1456140bd;
          }
          uVar23 = (local_res10->Proxy->PrimitiveComponentId).PrimIDValue;
          if (*(int *)(pbVar31 + 0x18) != *(int *)(pbVar31 + 0x44)) {
            pbVar33 = *(byte **)(pbVar31 + 0x50);
            if (pbVar33 == (byte *)0x0) {
              pbVar33 = pbVar31 + 0x48;
            }
            iVar29 = *(int *)(pbVar33 + (ulonglong)(*(int *)(pbVar31 + 0x58) - 1U & uVar23) * 4);
            if (iVar29 != -1) {
              do {
                if (*(uint *)(*(longlong *)(pbVar31 + 0x10) + (longlong)iVar29 * 0xc) == uVar23)
                goto LAB_145614046;
                iVar29 = *(int *)(*(longlong *)(pbVar31 + 0x10) + 4 + (longlong)iVar29 * 0xc);
              } while (iVar29 != -1);
            }
          }
        }
      }
      else {
        pFVar26 = FSceneView::GetShadowViewMatrices((FSceneView *)(pbVar31 + -0xed8));
        dVar38 = (pFVar7->Bounds).Origin.field0_0x0._s_0.Y - (pFVar26->ViewOrigin).field0_0x0._s_0.Y
        ;
        dVar14 = (pFVar7->Bounds).Origin.field0_0x0._s_0.X - (pFVar26->ViewOrigin).field0_0x0._s_0.X
        ;
        dVar36 = (pFVar7->Bounds).Origin.field0_0x0._s_0.Z - (pFVar26->ViewOrigin).field0_0x0._s_0.Z
        ;
        bVar20 = FViewInfo::IsDistanceCulled
                           ((FViewInfo *)(pbVar31 + -0xed8),
                            (float)(dVar38 * dVar38 + dVar14 * dVar14 + dVar36 * dVar36),
                            pFVar7->MinDrawDistance,pFVar7->MaxDrawDistance,local_res10);
        if (!bVar20) goto LAB_145613f13;
      }
    }
    else {
LAB_1456140bd:
      bVar34 = *(byte *)(lVar9 + 4 + lVar35 * 0x10);
      bVar17 = (bool)(bVar17 | (bVar34 & 0xc) != 0);
      bVar32 = *(byte *)(lVar9 + 5 + lVar35 * 0x10);
      if ((((bVar32 & 4) == 0) && (-1 < (char)bVar34)) && ((bVar32 & 3) == 0)) {
        bVar34 = 0;
      }
      else {
        bVar34 = 1;
      }
      bVar18 = (bool)(bVar18 | bVar34);
      bVar34 = (byte)(uVar23 >> 3);
      bVar32 = ~bVar34;
      if (!param_4) {
        bVar32 = bVar34;
      }
      local_c8 = local_c8 | bVar32 & 1;
      if ((bVar22) || (bVar22 = false, (uVar23 & 2) != 0)) {
        bVar22 = true;
      }
      if (((*(byte *)(lVar9 + 7 + lVar35 * 0x10) & 1) == 0) ||
         (local_res10->Proxy->bIsHeterogeneousVolume == '\0')) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
    }
LAB_145613fb2:
    pbVar33 = pbVar31 + 0x1a98;
    pbVar31 = pbVar31 + 0x2970;
  } while (pbVar33 != pbVar27);
  if (local_c8 != 0) {
    if ((iVar25 < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar20)) {
      pcVar13 = (code *)swi(3);
      uVar21 = (*pcVar13)();
      return (bool)uVar21;
    }
    FPrimitiveSceneInfo::UpdateComponentLastRenderTime
              (local_res10,(float)*(double *)(*(longlong *)(local_a8 + 8) + 0x90),false);
  }
  bVar34 = local_c8;
  if ((bVar17) && (local_c8 != 0)) {
    bVar32 = 0;
    uVar23 = 0;
    if (((local_res10->StaticMeshes).ArrayNum < 1) || (local_a8 == pbVar27)) {
LAB_145614390:
      if ((!bVar22) || ((this->MeshSelectionMask & (byte)(~pFVar7->field_0x81 | 0xbf) >> 6) == 0))
      goto LAB_1456144e7;
      pTVar2 = &this->DynamicSubjectPrimitives;
      ppFVar12 = (pTVar2->AllocatorInstance).Data;
      if (((ppFVar12 <= &local_res10) &&
          (&local_res10 < ppFVar12 + (this->DynamicSubjectPrimitives).ArrayMax)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar13 = (code *)swi(3);
        uVar21 = (*pcVar13)();
        return (bool)uVar21;
      }
      iVar25 = (this->DynamicSubjectPrimitives).ArrayNum;
      piVar1 = &(this->DynamicSubjectPrimitives).ArrayMax;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->DynamicSubjectPrimitives).ArrayNum = iVar25 + 1;
      (pTVar2->AllocatorInstance).Data[iVar25] = local_res10;
      if (param_3) {
        pFVar8 = this->DependentView;
        uVar24 = this->LightSceneInfo->Id;
        if ((int)uVar24 < (pFVar8->VisibleLightInfos).ArrayNum) {
          uVar23 = ~uVar24 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          uVar21 = (*pcVar13)();
          return (bool)uVar21;
        }
        FMobileCSMSubjectPrimitives::AddSubjectPrimitive
                  (&(pFVar8->VisibleLightInfos).AllocatorInstance.Data[(int)uVar24].
                    MobileCSMSubjectPrimitives,local_res10,uVar6);
        bVar20 = true;
        goto LAB_1456144ef;
      }
    }
    else {
      pbVar31 = local_a8 + 0x24b8;
      do {
        if ((((*pbVar31 & 2) == 0) &&
            ((pbVar31[-0x12c1] == 0 || (*(int *)(pbVar31 + -0x16e8) != 2)))) &&
           ((-1 < (char)(this->bWholeSceneShadow << 7) ||
            (((this->CacheMode == SDCM_StaticPrimitivesOnly || (this->bVSM != 0)) ||
             (pFVar26 = FSceneView::GetShadowViewMatrices((FSceneView *)(pbVar31 + -0x24b8)),
             dVar14 = (pFVar7->Bounds).Origin.field0_0x0._s_0.X -
                      (pFVar26->ViewOrigin).field0_0x0._s_0.X,
             dVar38 = (pFVar7->Bounds).Origin.field0_0x0._s_0.Y -
                      (pFVar26->ViewOrigin).field0_0x0._s_0.Y,
             dVar36 = (pFVar7->Bounds).Origin.field0_0x0._s_0.Z -
                      (pFVar26->ViewOrigin).field0_0x0._s_0.Z, dVar4 = (pFVar7->Bounds).SphereRadius
             , (double)((float)(dVar38 * dVar38 + dVar14 * dVar14 + dVar36 * dVar36) *
                        GMinScreenRadiusForShadowCaster * GMinScreenRadiusForShadowCaster *
                       *(float *)(pbVar31 + -0x12f0) * *(float *)(pbVar31 + -0x12f0)) <
               dVar4 * dVar4)))))) {
          uVar24 = uVar23;
          if ((int)uVar6 < *(int *)(pbVar31 + -0x7a0)) {
            uVar24 = ~uVar6 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar13 = (code *)swi(3);
            uVar21 = (*pcVar13)();
            return (bool)uVar21;
          }
          if ((*(byte *)(*(longlong *)(pbVar31 + -0x7a8) + 8 + lVar35 * 0x10) & 1) != 0) {
            bVar20 = ShouldDrawStaticMeshes(this,(FViewInfo *)(pbVar31 + -0x24b8),local_res10);
            bVar32 = bVar32 | bVar20;
          }
        }
        pbVar33 = pbVar31 + 0x4b8;
        pbVar31 = pbVar31 + 0x2970;
      } while (pbVar33 != pbVar27);
      if (bVar32 == 0) goto LAB_145614390;
      if (param_3) {
        pFVar8 = this->DependentView;
        uVar24 = this->LightSceneInfo->Id;
        if ((int)uVar24 < (pFVar8->VisibleLightInfos).ArrayNum) {
          uVar23 = ~uVar24 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          uVar21 = (*pcVar13)();
          return (bool)uVar21;
        }
        FMobileCSMSubjectPrimitives::AddSubjectPrimitive
                  (&(pFVar8->VisibleLightInfos).AllocatorInstance.Data[(int)uVar24].
                    MobileCSMSubjectPrimitives,local_res10,uVar6);
      }
    }
    bVar20 = true;
  }
  else {
LAB_1456144e7:
    bVar20 = false;
  }
LAB_1456144ef:
  if (((this->bTranslucentShadow != 0) && (bVar18)) && (bVar34 != 0)) {
    pTVar2 = &this->SubjectTranslucentPrimitives;
    ppFVar12 = (pTVar2->AllocatorInstance).Data;
    if (((ppFVar12 <= &local_res10) &&
        (&local_res10 < ppFVar12 + (this->SubjectTranslucentPrimitives).ArrayMax)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar13 = (code *)swi(3);
      uVar21 = (*pcVar13)();
      return (bool)uVar21;
    }
    iVar25 = (this->SubjectTranslucentPrimitives).ArrayNum;
    piVar1 = &(this->SubjectTranslucentPrimitives).ArrayMax;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    bVar20 = true;
    (this->SubjectTranslucentPrimitives).ArrayNum = iVar25 + 1;
    (pTVar2->AllocatorInstance).Data[iVar25] = local_res10;
  }
  if ((this->bVolumetricShadow != 0) && (bVar19)) {
    pTVar2 = &this->SubjectHeterogeneousVolumePrimitives;
    ppFVar12 = (pTVar2->AllocatorInstance).Data;
    if ((ppFVar12 <= &local_res10) &&
       ((&local_res10 < ppFVar12 + (this->SubjectHeterogeneousVolumePrimitives).ArrayMax &&
        (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar20)))) {
      pcVar13 = (code *)swi(3);
      uVar21 = (*pcVar13)();
      return (bool)uVar21;
    }
    iVar25 = (this->SubjectHeterogeneousVolumePrimitives).ArrayNum;
    piVar1 = &(this->SubjectHeterogeneousVolumePrimitives).ArrayMax;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->SubjectHeterogeneousVolumePrimitives).ArrayNum = iVar25 + 1;
    (pTVar2->AllocatorInstance).Data[iVar25] = local_res10;
    bVar20 = true;
  }
  return bVar20;
}

// AddSubjectPrimitive_AnyThread @ 145614690

/* WARNING: Type propagation algorithm not settling */
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

ulong64 __thiscall
FProjectedShadowInfo::AddSubjectPrimitive_AnyThread
          (FProjectedShadowInfo *this,FPrimitiveSceneInfoCompact *param_1,
          TArrayView<FViewInfo,int> *param_2,Type param_3,FAddSubjectPrimitiveStats *param_4,
          FAddSubjectPrimitiveOverflowedIndices *param_5)

{
  FPrimitiveSceneInfo **ppFVar1;
  float fVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  FPrimitiveSceneInfo *this_00;
  FSceneViewState *pFVar6;
  FPrimitiveSceneProxy *pFVar7;
  code *pcVar8;
  double dVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  ulong64 uVar13;
  FViewMatrices *pFVar14;
  FViewInfo *pFVar15;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *pTVar16
  ;
  longlong *plVar17;
  int iVar18;
  FPrimitiveSceneInfo **ppFVar19;
  ForElementType<FSetElementId> FVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  bool local_res8 [8];
  bool local_res20 [8];
  FAddSubjectPrimitiveResult_u_0 local_c0;
  FPrimitiveViewRelevance *local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_80;
  undefined1 local_78 [32];
  double local_58;
  
  if ((this->bRayTracedDistanceField != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bRayTracedDistanceField",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                          ,0x879,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return uVar13;
  }
  local_c0.Qword = 0;
  if (((int)param_3 < 3) &&
     (bVar11 = FLightSceneInfo::ShouldRecordShadowSubjectsForMobile(this->LightSceneInfo), bVar11))
  {
    local_c0.Qword._0_4_ = 0x600;
    param_4->NumDeferredPrimitives = param_4->NumDeferredPrimitives + 1;
    return local_c0.Qword;
  }
  ppFVar19 = (this->ReceiverPrimitives).AllocatorInstance.Data;
  this_00 = param_1->PrimitiveSceneInfo;
  ppFVar1 = ppFVar19 + (this->ReceiverPrimitives).ArrayNum;
  for (; ppFVar19 != ppFVar1; ppFVar19 = ppFVar19 + 1) {
    if (*ppFVar19 == this_00) {
      return local_c0.Qword;
    }
  }
  local_b0 = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  dStack_a8 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  local_a0 = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  dVar9 = (double)(param_1->Bounds).SphereRadius;
  local_80 = dVar9;
  if ((this->CascadeSettings).bFarShadowCascade == false) {
    if ((((GEnableNonNaniteVSM != 0) && (this->bVSM != 0)) &&
        (bVar11 = IsWholeSceneDirectionalShadow(this), bVar11)) &&
       (0.0 < this->MaxNonFarCascadeDistance)) {
      if ((this->DependentView == (FViewInfo *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("DependentView",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                              ,0x864,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return uVar13;
      }
      pFVar14 = FSceneView::GetShadowViewMatrices((FSceneView *)this->DependentView);
      local_58 = (pFVar14->ViewOrigin).field0_0x0._s_0.Z;
      pFVar15 = this->DependentView;
      if ((double)this->MaxNonFarCascadeDistance <
          (double)(float)((dStack_a8 - (pFVar14->ViewOrigin).field0_0x0._s_0.Y) *
                          (double)pFVar15->_padding_ +
                          (local_b0 - (pFVar14->ViewOrigin).field0_0x0._s_0.X) *
                          (double)pFVar15->_padding_ +
                         (local_a0 - local_58) * (double)pFVar15->_padding_) - dVar9)
      goto LAB_145614889;
    }
  }
  else {
LAB_145614889:
    if (param_1->Proxy->bCastFarShadow == '\0') {
      return local_c0.Qword;
    }
  }
  bVar11 = IsWholeSceneDirectionalShadow(this);
  if (bVar11) {
    pFVar15 = this->DependentView;
  }
  else {
    if ((param_2->ArrayNum == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewArray.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                            ,0x89e,
                            L"bWholeSceneShadow=%s, CascadeSettings.ShadowSplitIndex=%d, bDirectionalLight=%s"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return uVar13;
    }
    if (1 < param_2->ArrayNum) {
      local_c0.Qword = local_c0.Qword | 0x200;
      param_4->NumDeferredPrimitives = param_4->NumDeferredPrimitives + 1;
      return local_c0.Qword;
    }
    pFVar15 = TArrayView<FViewInfo,int>::operator[](param_2,0);
  }
  uVar5 = this_00->PackedIndex;
  local_res20[0] = false;
  uVar21 = 0;
  if ((int)uVar5 < (pFVar15->PrimitiveViewRelevanceMap).ArrayNum) {
    uVar21 = ~uVar5 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return uVar13;
  }
  local_b8 = (pFVar15->PrimitiveViewRelevanceMap).AllocatorInstance.Data;
  uVar21 = *(uint *)&local_b8[(int)uVar5].field_0x8;
  if (ZPULL(uVar21,0x10,1) == 0) {
    if ((double)pFVar15->_padding_ <= __real_3ff0000000000000 &&
        __real_3ff0000000000000 != (double)pFVar15->_padding_) {
      pFVar14 = FSceneView::GetShadowViewMatrices((FSceneView *)pFVar15);
      dVar23 = (param_1->Bounds).Origin.field0_0x0._s_0.Y - (pFVar14->ViewOrigin).field0_0x0._s_0.Y;
      dVar22 = (param_1->Bounds).Origin.field0_0x0._s_0.X - (pFVar14->ViewOrigin).field0_0x0._s_0.X;
      dVar9 = (param_1->Bounds).Origin.field0_0x0._s_0.Z - (pFVar14->ViewOrigin).field0_0x0._s_0.Z;
      bVar11 = FViewInfo::IsDistanceCulled_AnyThread
                         (pFVar15,(float)(dVar23 * dVar23 + dVar22 * dVar22 + dVar9 * dVar9),
                          param_1->MinDrawDistance,param_1->MaxDrawDistance,this_00,local_res20,
                          local_res8);
      if (bVar11) {
        return 0;
      }
      if (local_res20[0] != false) {
        local_c0.Qword =
             CONCAT44(local_c0._s_1.field14_0x4,
                      (local_res8[0] & 1) << 8 | local_c0.Qword._0_4_ & 0xfffffeff) | 0x80;
      }
    }
    pFVar6 = pFVar15->ViewState;
    if ((((pFVar6 != (FSceneViewState *)0x0) && (-1 < (int)uVar5)) &&
        ((int)uVar5 < (pFVar6->HLODVisibilityState).ForcedHiddenPrimitiveMap.NumBits)) &&
       (bVar11 = FHLODVisibilityState::IsNodeForcedHidden(&pFVar6->HLODVisibilityState,uVar5),
       bVar11)) {
      return 0;
    }
    if (*(int *)((longlong)&pFVar15->_padding_ + 4) != -1) {
      pTVar16 = TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                ::operator->((TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
                              *)&pFVar15->_padding_);
      uVar21 = (param_1->Proxy->PrimitiveComponentId).PrimIDValue;
      if (*(int *)&(pTVar16->Elements).field_0x8 == *(int *)&(pTVar16->Elements).field_0x34) {
        return 0;
      }
      FVar20 = (pTVar16->Hash).SecondaryData;
      if (FVar20 == (ForElementType<FSetElementId>)0x0) {
        FVar20 = (ForElementType<FSetElementId>)&pTVar16->Hash;
      }
      iVar18 = *(int *)((longlong)FVar20 + (ulonglong)(pTVar16->HashSize - 1U & uVar21) * 4);
      if (iVar18 == -1) {
        return 0;
      }
      while (*(uint *)(*(longlong *)&pTVar16->Elements + (longlong)iVar18 * 0xc) != uVar21) {
        iVar18 = *(int *)(*(longlong *)&pTVar16->Elements + 4 + (longlong)iVar18 * 0xc);
        if (iVar18 == -1) {
          return 0;
        }
      }
    }
    pFVar7 = param_1->Proxy;
    uVar21 = (pFVar7->PrimitiveComponentId).PrimIDValue;
    if ((int)pFVar15->_padding_ != *(int *)((longlong)&pFVar15->_padding_ + 4)) {
      plVar17 = (longlong *)pFVar15->_padding_;
      if ((longlong *)pFVar15->_padding_ == (longlong *)0x0) {
        plVar17 = &pFVar15->_padding_;
      }
      iVar18 = *(int *)((longlong)plVar17 + (ulonglong)((int)pFVar15->_padding_ - 1U & uVar21) * 4);
      if (iVar18 != -1) {
        do {
          if (*(uint *)(pFVar15->_padding_ + (longlong)iVar18 * 0xc) == uVar21) {
            return 0;
          }
          iVar18 = *(int *)(pFVar15->_padding_ + 4 + (longlong)iVar18 * 0xc);
        } while (iVar18 != -1);
      }
    }
    plVar17 = (longlong *)(**(code **)(pFVar7->_padding_ + 0xd0))(pFVar7,local_78);
    lVar10 = plVar17[1];
    local_b8[(int)uVar5]._padding_ = *plVar17;
    *(longlong *)&local_b8[(int)uVar5].field_0x8 = lVar10;
    uVar21 = *(uint *)&local_b8[(int)uVar5].field_0x8;
  }
  bVar4 = *(byte *)((longlong)&local_b8[(int)uVar5]._padding_ + 4);
  if ((((local_b8[(int)uVar5]._padding_ & 0x40000000000) != 0) || ((char)bVar4 < '\0')) ||
     (local_res8[0] = false, (local_b8[(int)uVar5]._padding_ & 0x30000000000) != 0)) {
    local_res8[0] = true;
  }
  if (((local_b8[(int)uVar5]._padding_ & 0x100000000000000) == 0) ||
     (this_00->Proxy->bIsHeterogeneousVolume == '\0')) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((uVar21 >> 3 & 1) == 0) {
    return 0;
  }
  FPrimitiveSceneInfo::UpdateComponentLastRenderTime
            (this_00,(float)*(double *)(pFVar15->_padding_ + 0x90),false);
  if ((bVar4 & 0xc) != 0) {
    if (0 < (this_00->StaticMeshes).ArrayNum) {
      if ((this->bWholeSceneShadow != 0) &&
         (pFVar14 = FSceneView::GetShadowViewMatrices((FSceneView *)pFVar15),
         dVar22 = (param_1->Bounds).Origin.field0_0x0._s_0.X -
                  (pFVar14->ViewOrigin).field0_0x0._s_0.X,
         dVar23 = (param_1->Bounds).Origin.field0_0x0._s_0.Y -
                  (pFVar14->ViewOrigin).field0_0x0._s_0.Y,
         dVar9 = (param_1->Bounds).Origin.field0_0x0._s_0.Z -
                 (pFVar14->ViewOrigin).field0_0x0._s_0.Z, fVar2 = (param_1->Bounds).SphereRadius,
         fVar2 * fVar2 <=
         (float)(dVar23 * dVar23 + dVar22 * dVar22 + dVar9 * dVar9) *
         GMinScreenRadiusForShadowCaster * GMinScreenRadiusForShadowCaster *
         *(float *)&pFVar15->_padding_ * *(float *)&pFVar15->_padding_)) {
        return 0;
      }
      if (((uVar21 & 1) != 0) &&
         (bVar12 = ShouldDrawStaticMeshes_AnyThread
                             (this,pFVar15,param_1,local_res20[0],
                              (FAddSubjectPrimitiveResult *)&local_c0._s_1,param_4,param_5), bVar12)
         ) goto LAB_145614d29;
    }
    if (((uVar21 >> 1 & 1) != 0) &&
       ((this->MeshSelectionMask & (~(param_1->PrimitiveFlagsCompact).bSupportsGPUScene & 1) + VSM)
        != 0)) {
      local_c0.Qword = local_c0.Qword | 8;
      param_4->NumDynamicSubs = param_4->NumDynamicSubs + 1;
    }
  }
LAB_145614d29:
  if ((this->bTranslucentShadow != 0) && (local_res8[0] != false)) {
    local_c0.Qword = local_c0.Qword | 0x10;
    param_4->NumTranslucentSubs = param_4->NumTranslucentSubs + 1;
  }
  if (this->bVolumetricShadow != 0) {
    if (bVar11) {
      local_c0.Qword = local_c0.Qword | 0x20;
      param_4->NumHeterogeneousVolumeSubs = param_4->NumHeterogeneousVolumeSubs + 1;
      return local_c0.Qword;
    }
    return local_c0.Qword;
  }
  return local_c0.Qword;
}

// ClearTransientArrays @ 145621150

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

void __thiscall FProjectedShadowInfo::ClearTransientArrays(FProjectedShadowInfo *this)

{
  int *piVar1;
  undefined1 *puVar2;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar7;
  undefined1 local_res8 [8];
  
  this->NumDynamicSubjectMeshElements = 0;
  this->NumSubjectMeshCommandBuildRequestElements = 0;
  piVar1 = &(this->SubjectTranslucentPrimitives).ArrayMax;
  (this->SubjectTranslucentPrimitives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
              (8,8,0,&(this->SubjectTranslucentPrimitives).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SubjectHeterogeneousVolumePrimitives).ArrayMax;
  (this->SubjectHeterogeneousVolumePrimitives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
              (8,8,0,&(this->SubjectHeterogeneousVolumePrimitives).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DynamicSubjectPrimitives).ArrayMax;
  (this->DynamicSubjectPrimitives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
              (8,8,0,&(this->DynamicSubjectPrimitives).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->ReceiverPrimitives).ArrayMax;
  (this->ReceiverPrimitives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
              (8,8,0,&(this->ReceiverPrimitives).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DynamicSubjectMeshElements).ArrayMax;
  (this->DynamicSubjectMeshElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
              (0x18,8,0,&(this->DynamicSubjectMeshElements).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DynamicSubjectTranslucentMeshElements).ArrayMax;
  (this->DynamicSubjectTranslucentMeshElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
              (0x18,8,0,&(this->DynamicSubjectTranslucentMeshElements).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DynamicSubjectHeterogeneousVolumeMeshElements).ArrayMax;
  (this->DynamicSubjectHeterogeneousVolumeMeshElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
              (0x18,8,0,&(this->DynamicSubjectHeterogeneousVolumeMeshElements).AllocatorInstance,0,
               piVar1);
  }
  piVar1 = &(this->ShadowDepthPassVisibleCommands).ArrayMax;
  (this->ShadowDepthPassVisibleCommands).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
              (0x48,8,0,&(this->ShadowDepthPassVisibleCommands).AllocatorInstance,0,piVar1);
  }
  FParallelMeshDrawCommandPass::Cleanup(&this->ShadowDepthPass);
  piVar1 = &(this->SubjectMeshCommandBuildRequests).ArrayMax;
  (this->SubjectMeshCommandBuildRequests).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
              (8,8,0,&(this->SubjectMeshCommandBuildRequests).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SubjectMeshCommandBuildFlags).ArrayMax;
  (this->SubjectMeshCommandBuildFlags).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
              (1,1,0,&(this->SubjectMeshCommandBuildFlags).AllocatorInstance,0,piVar1);
  }
  FVar7 = (this->ProjectionStencilingPasses).AllocatorInstance.SecondaryData;
  iVar5 = (this->ProjectionStencilingPasses).ArrayNum;
  if (FVar7 == (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
    FVar7 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
  }
  FVar3 = (ForElementType<FSimpleMeshDrawCommandPass_*>)((longlong)FVar7 + (longlong)iVar5 * 8);
  while( true ) {
    if ((this->ProjectionStencilingPasses).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FSimpleMeshDrawCommandPass_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7 == FVar3) break;
    puVar4 = *(undefined8 **)FVar7;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[0x3b] = &___7FMeshPassDrawListContext__6B_;
      TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
      ::Empty((TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
               *)(puVar4 + 0x37),0);
      if ((void *)puVar4[0x37] != (void *)0x0) {
        FMemory::Free((void *)puVar4[0x37]);
      }
      Experimental::RobinHoodHashTable_Private::
      TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
      ::
      ~TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
                ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
                  *)(puVar4 + 0x28));
      FInstanceCullingContext::~FInstanceCullingContext((FInstanceCullingContext *)(puVar4 + 2));
      if ((void *)*puVar4 != (void *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((void *)*puVar4);
      }
      ::operator_delete(puVar4,0x210);
    }
    FVar7 = (ForElementType<FSimpleMeshDrawCommandPass_*>)((longlong)FVar7 + 8);
  }
  (this->ProjectionStencilingPasses).ArrayNum = 0;
  if ((this->ProjectionStencilingPasses).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSimpleMeshDrawCommandPass_*>_>
              (8,8,0,&(this->ProjectionStencilingPasses).AllocatorInstance,0,
               &(this->ProjectionStencilingPasses).ArrayMax);
  }
  TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&this->DynamicMeshDrawCommandStorage,0);
  (this->DynamicMeshDrawCommandStorage).MeshDrawCommands.NumElements = 0;
  puVar2 = &(this->GraphicsMinimalPipelineStateSet).field_0x54;
  *(undefined4 *)&(this->GraphicsMinimalPipelineStateSet).field_0x50 = 0;
  if (*(int *)&(this->GraphicsMinimalPipelineStateSet).field_0x54 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,1,(ForElementType<unsigned_int> *)
                     &(this->GraphicsMinimalPipelineStateSet).field_0x40,0,(int *)puVar2);
  }
  iVar5 = *(int *)&(this->GraphicsMinimalPipelineStateSet).field_0x50;
  if (iVar5 == *(int *)puVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)
                             &(this->GraphicsMinimalPipelineStateSet).field_0x40,(int *)puVar2);
  }
  puVar2 = &(this->GraphicsMinimalPipelineStateSet).field_0x58;
  *(int *)&(this->GraphicsMinimalPipelineStateSet).field_0x50 = iVar5 + 1;
  puVar6 = &(this->GraphicsMinimalPipelineStateSet).field_0x6c;
  *(undefined4 *)&(this->GraphicsMinimalPipelineStateSet).field_0x68 = 0;
  if (*(int *)puVar6 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,(ForElementType<Experimental::FHashType> *)puVar2,0,(int *)puVar6);
  }
  iVar5 = *(int *)&(this->GraphicsMinimalPipelineStateSet).field_0x68;
  if (iVar5 == *(int *)&(this->GraphicsMinimalPipelineStateSet).field_0x6c) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,(ForElementType<Experimental::FHashType> *)puVar2,(int *)puVar6);
  }
  *(int *)&(this->GraphicsMinimalPipelineStateSet).field_0x68 = iVar5 + 1;
  puVar6 = *(undefined1 **)&(this->GraphicsMinimalPipelineStateSet).field_0x60;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = puVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>(puVar6 + (longlong)iVar5 * 4,1);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)&this->GraphicsMinimalPipelineStateSet);
  *(undefined8 *)&(this->GraphicsMinimalPipelineStateSet).field_0x70 = 0;
  return;
}

// ComputeScissorRectOptim @ 145621b30

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FProjectedShadowInfo::ComputeScissorRectOptim(FProjectedShadowInfo *this)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  FViewInfo *pFVar5;
  undefined1 auVar6 [16];
  int iVar7;
  double *pdVar8;
  TVector4<double> *pTVar9;
  int iVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_528 [32];
  TIntPoint<int>_u_0 local_508;
  undefined8 local_4f8;
  undefined8 local_4e8;
  undefined8 local_4e0;
  TVector2<double>_u_0 local_4d8;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double local_4b0;
  TVector4<double>_u_0 local_4a8;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  double local_408;
  TMatrix<double> local_3f8;
  TMatrix<double> local_378;
  TMatrix<double> local_2f8;
  TMatrix<double> local_278;
  TMatrix<double> local_1f8;
  double local_178 [7];
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_528;
  pFVar5 = this->DependentView;
  iVar10 = 0;
  fVar2 = (this->CascadeSettings).SplitFar;
  (this->ScissorRectOptim).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  local_508 = *(TIntPoint<int>_u_0 *)&this->ResolutionX;
  (this->ScissorRectOptim).field0_0x0._s_0.Max.field0_0x0 = local_508;
  local_488 = (double)pFVar5->_padding_;
  dStack_480 = (double)pFVar5->_padding_;
  local_4f8 = (double)pFVar5->_padding_;
  dVar18 = (double)pFVar5->_padding_;
  dVar25 = (double)pFVar5->_padding_;
  dVar17 = atan(__real_3ff0000000000000 / (double)pFVar5->_padding_);
  fVar15 = tanf((float)dVar17);
  dVar17 = atan(__real_3ff0000000000000 / (double)pFVar5->_padding_);
  fVar16 = tanf((float)dVar17);
  dVar24 = _UNK_15061cbc8;
  dVar29 = ___xmm_3ff00000000000000000000000000000;
  dVar19 = __real_3ff0000000000000;
  local_4b0 = (double)(float)((uint)(fVar15 * fVar2) ^ __xmm_80000000800000008000000080000000);
  local_4e8 = (double)((float)dVar18 + __real_3f800000);
  dVar34 = (double)(fVar16 * fVar2);
  dVar17 = (double)(fVar15 * fVar2);
  dVar32 = (double)(__real_3f800000 - (float)dVar18);
  dVar31 = (double)(float)((uint)(fVar16 * fVar2) ^ __xmm_80000000800000008000000080000000);
  dVar18 = (double)((float)dVar25 + __real_3f800000);
  local_4b8 = dVar31 * (double)pFVar5->_padding_ * dVar18;
  local_428 = dVar31 * (double)pFVar5->_padding_ * dVar18;
  local_508 = (TIntPoint<int>_u_0)(dVar31 * (double)pFVar5->_padding_ * dVar18);
  dVar18 = (double)(__real_3f800000 - (float)dVar25);
  dVar31 = dVar34 * (double)pFVar5->_padding_ * dVar18;
  dVar25 = dVar34 * (double)pFVar5->_padding_ * dVar18;
  dVar33 = (double)fVar2;
  local_418 = dVar33 * (double)pFVar5->_padding_ + local_488;
  dVar18 = dVar34 * (double)pFVar5->_padding_ * dVar18;
  local_478 = dVar17 * (double)pFVar5->_padding_ * dVar32 + local_418;
  local_410 = dVar33 * (double)pFVar5->_padding_ + dStack_480;
  local_408 = dVar33 * (double)pFVar5->_padding_ + local_4f8;
  local_4c8 = local_4f8;
  local_4a8._s_0.X = dStack_480;
  local_4a8._s_0.Y = dStack_480;
  local_460 = local_478 + local_4b8;
  local_478 = local_478 + dVar31;
  dStack_470 = dVar17 * (double)pFVar5->_padding_ * dVar32 + local_410;
  local_468 = dVar17 * (double)pFVar5->_padding_ * dVar32 + local_408;
  local_458 = dStack_470 + local_428;
  dStack_470 = dStack_470 + dVar18;
  local_450 = local_468 + (double)local_508;
  local_468 = local_468 + dVar25;
  local_440 = local_4b0 * (double)pFVar5->_padding_ * local_4e8 + local_410;
  local_448 = local_4b0 * (double)pFVar5->_padding_ * local_4e8 + local_418;
  local_438 = local_4b0 * (double)pFVar5->_padding_ * local_4e8 + local_408;
  local_428 = local_440 + local_428;
  local_440 = local_440 + dVar18;
  local_430 = local_448 + local_4b8;
  local_448 = local_448 + dVar31;
  local_420 = local_438 + (double)local_508;
  local_438 = local_438 + dVar25;
  local_378.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_378.M[0][1] = _UNK_150689518;
  local_378.M[0][2] = 0.0;
  local_378.M[0][3] = 0.0;
  uVar35 = SUB84(__real_3ff0000000000000,0);
  uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_378.M[1][2] = 0.0;
  local_378.M[1][3] = 0.0;
  local_378.M[3][0] = (this->PreShadowTranslation).field0_0x0._s_0.X;
  local_378.M[3][1] = (this->PreShadowTranslation).field0_0x0._s_0.Y;
  local_378.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_378.M[2][3] = _UNK_150689518;
  local_378.M[3][2] = (this->PreShadowTranslation).field0_0x0._s_0.Z;
  local_378.M[2][0] = 0.0;
  local_378.M[2][1] = 0.0;
  local_278.M[0][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][0];
  local_278.M[0][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][1];
  local_278.M[0][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][2];
  local_278.M[0][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[0][3];
  local_278.M[1][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][0];
  local_278.M[1][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][1];
  local_278.M[1][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][2];
  local_278.M[1][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[1][3];
  local_278.M[2][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][0];
  local_278.M[2][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][1];
  local_278.M[2][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][2];
  local_278.M[2][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[2][3];
  local_278.M[3][0] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][0];
  local_278.M[3][1] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][1];
  local_278.M[3][2] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][2];
  local_278.M[3][3] = (double)(this->TranslatedWorldToClipInnerMatrix).M[3][3];
  local_378.M[3][3] = __real_3ff0000000000000;
  local_378.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_378.M[1][1] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_1f8,&local_378,&local_278);
  local_2f8.M[0][0] = ___xmm_00000000000000003fe0000000000000;
  local_2f8.M[0][1] = _UNK_150978bb8;
  iVar13 = this->BorderSize * 2;
  local_2f8.M[0][2] = 0.0;
  local_2f8.M[0][3] = 0.0;
  local_2f8.M[1][2] = 0.0;
  local_2f8.M[1][3] = 0.0;
  local_2f8.M[2][2] = (double)this->InvMaxSubjectDepth;
  local_2f8.M[1][0] = ___xmm_bfe00000000000000000000000000000;
  local_2f8.M[1][1] = _UNK_150e374c8;
  local_2f8.M[2][0] = 0.0;
  local_2f8.M[2][1] = 0.0;
  local_2f8.M[2][3] = 0.0;
  local_2f8.M[3][2] = dVar29;
  local_2f8.M[3][3] = dVar24;
  local_2f8.M[3][0] =
       (double)(__real_3f800000 / (float)(this->ResolutionX + iVar13) + __real_3f000000);
  local_2f8.M[3][1] =
       (double)(__real_3f800000 / (float)(this->ResolutionY + iVar13) + __real_3f000000);
  VectorMatrixMultiply(&local_3f8,&local_1f8,&local_2f8);
  dVar25 = local_4f8;
  dVar18 = __real_3e45798ee0000000;
  iVar13 = this->BorderSize * 2;
  pdVar8 = local_178 + 2;
  iVar14 = this->ResolutionX + iVar13;
  iVar13 = this->ResolutionY + iVar13;
  pdVar11 = &dStack_470;
  lVar12 = 5;
  dVar17 = (double)iVar13;
  local_178[0] = 0.0;
  local_178[1] = 0.0;
  local_178[2] = dVar29;
  local_178[3] = dVar24;
  local_178[4] = 0.0;
  local_178[5] = 0.0;
  local_178[6] = dVar29;
  dStack_140 = dVar24;
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_128 = dVar29;
  dStack_120 = dVar24;
  local_118 = 0.0;
  dStack_110 = 0.0;
  local_108 = dVar29;
  dStack_100 = dVar24;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_e8 = dVar29;
  dStack_e0 = dVar24;
  local_d8 = ZEXT816(0);
  local_c8 = dVar29;
  dStack_c0 = dVar24;
  dVar34 = (double)iVar14;
  do {
    auVar21 = *(undefined1 (*) [16])(pdVar11 + -1);
    dVar24 = auVar21._0_8_;
    dVar31 = auVar21._8_8_;
    dVar29 = pdVar11[1];
    pdVar11 = pdVar11 + 3;
    auVar20._8_4_ = auVar21._0_4_;
    auVar20._0_8_ = dVar24;
    auVar20._12_4_ = auVar21._4_4_;
    auVar30._8_4_ = auVar21._8_4_;
    auVar30._0_8_ = dVar31;
    auVar30._12_4_ = auVar21._12_4_;
    auVar26._8_4_ = SUB84(dVar29,0);
    auVar26._0_8_ = dVar29;
    auVar26._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    auVar21._8_4_ = uVar35;
    auVar21._0_8_ = dVar19;
    auVar21._12_4_ = uVar36;
    pdVar8[-2] = dVar31 * local_3f8.M[1][0] + dVar24 * local_3f8.M[0][0] +
                 dVar29 * local_3f8.M[2][0] + dVar19 * local_3f8.M[3][0];
    pdVar8[-1] = auVar30._8_8_ * local_3f8.M[1][1] + auVar20._8_8_ * local_3f8.M[0][1] +
                 auVar26._8_8_ * local_3f8.M[2][1] + auVar21._8_8_ * local_3f8.M[3][1];
    *pdVar8 = dVar31 * local_3f8.M[1][2] + dVar24 * local_3f8.M[0][2] + dVar29 * local_3f8.M[2][2] +
              dVar19 * local_3f8.M[3][2];
    pdVar8[1] = dVar31 * local_3f8.M[1][3] + dVar24 * local_3f8.M[0][3] + dVar29 * local_3f8.M[2][3]
                + dVar19 * local_3f8.M[3][3];
    dVar29 = dVar19 / pdVar8[1];
    auVar27._8_4_ = SUB84(dVar29,0);
    auVar27._0_8_ = dVar29;
    auVar27._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    pdVar8[-2] = dVar29 * pdVar8[-2];
    pdVar8[-1] = auVar27._8_8_ * pdVar8[-1];
    *pdVar8 = *pdVar8 * dVar29;
    pdVar8[1] = pdVar8[1] * dVar29;
    pdVar8[-2] = dVar34 * pdVar8[-2];
    pdVar8[-1] = dVar17 * pdVar8[-1];
    pdVar8 = pdVar8 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  auVar28._8_4_ = SUB84(local_4f8,0);
  auVar28._0_8_ = local_4f8;
  auVar28._12_4_ = (int)((ulonglong)local_4f8 >> 0x20);
  auVar22._8_4_ = SUB84(local_488,0);
  auVar22._0_8_ = local_488;
  auVar22._12_4_ = (int)((ulonglong)local_488 >> 0x20);
  local_4f8 = (double)CONCAT44(iVar13,iVar14);
  auVar23._8_4_ = uVar35;
  auVar23._0_8_ = dVar19;
  auVar23._12_4_ = uVar36;
  dVar29 = dVar19 / dStack_e0;
  local_c8 = (local_4a8._s_0.X * local_3f8.M[1][2] + local_488 * local_3f8.M[0][2] +
              dVar25 * local_3f8.M[2][2] + dVar19 * local_3f8.M[3][2]) * dVar29;
  dStack_c0 = (local_4a8._s_0.X * local_3f8.M[1][3] + local_488 * local_3f8.M[0][3] +
               dVar25 * local_3f8.M[2][3] + dVar19 * local_3f8.M[3][3]) * dVar29;
  dVar25 = dVar29 * (local_4a8._s_0.X * local_3f8.M[1][0] + local_488 * local_3f8.M[0][0] +
                     dVar25 * local_3f8.M[2][0] + dVar19 * local_3f8.M[3][0]);
  dVar29 = dVar29 * (local_4a8._s_0.X * local_3f8.M[1][1] + auVar22._8_8_ * local_3f8.M[0][1] +
                     auVar28._8_8_ * local_3f8.M[2][1] + auVar23._8_8_ * local_3f8.M[3][1]);
  auVar6._8_4_ = SUB84(dVar29,0);
  auVar6._0_8_ = dVar25;
  auVar6._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  local_d8._8_8_ = auVar6._8_8_;
  dVar25 = dVar25 * dVar34;
  dVar29 = (double)local_d8._8_8_ * dVar17;
  local_d8._8_8_ = dVar29;
  local_d8._0_8_ = dVar25;
  if ((((0.0 <= dVar25) && (dVar25 <= dVar34)) && (0.0 <= dVar29)) && (dVar29 <= dVar17)) {
    local_4c8 = local_178[0] - dVar25;
    dStack_4c0 = local_178[1] - dVar29;
    dVar24 = local_4c8 * local_4c8 + dStack_4c0 * dStack_4c0;
    if (dVar24 <= __real_3e45798ee0000000) {
      local_4c8 = 0.0;
      dStack_4c0 = 0.0;
    }
    else {
      local_508 = (TIntPoint<int>_u_0)(dVar19 / SQRT(dVar24));
      local_4c8 = (double)local_508 * local_4c8;
      dStack_4c0 = (double)local_508 * dStack_4c0;
    }
    local_4d8._s_0.X = dVar25;
    local_4d8._s_0.Y = dVar29;
    pTVar9 = `FProjectedShadowInfo::ComputeScissorRectOptim'::__l2::<lambda_1>::operator()
                       (&local_4f8,(TVector4<double> *)&local_4a8._s_0,
                        (TLine2<double> *)&local_4d8._s_0);
    local_4c8 = local_178[4] - dVar25;
    dStack_4c0 = local_178[5] - dVar29;
    local_178[0] = (pTVar9->field0_0x0)._s_0.X;
    local_178[1] = (pTVar9->field0_0x0)._s_0.Y;
    local_178[2] = (pTVar9->field0_0x0)._s_0.Z;
    local_178[3] = (pTVar9->field0_0x0)._s_0.W;
    dVar24 = dStack_4c0 * dStack_4c0 + local_4c8 * local_4c8;
    if (dVar24 <= dVar18) {
      local_4c8 = 0.0;
      dStack_4c0 = 0.0;
    }
    else {
      local_508 = (TIntPoint<int>_u_0)(dVar19 / SQRT(dVar24));
      local_4c8 = (double)local_508 * local_4c8;
      dStack_4c0 = (double)local_508 * dStack_4c0;
    }
    local_4d8._s_0.X = dVar25;
    local_4d8._s_0.Y = dVar29;
    pTVar9 = `FProjectedShadowInfo::ComputeScissorRectOptim'::__l2::<lambda_1>::operator()
                       (&local_4f8,(TVector4<double> *)&local_4a8._s_0,
                        (TLine2<double> *)&local_4d8._s_0);
    local_4c8 = local_138 - dVar25;
    dStack_4c0 = dStack_130 - dVar29;
    local_178[4] = (pTVar9->field0_0x0)._s_0.X;
    local_178[5] = (pTVar9->field0_0x0)._s_0.Y;
    local_178[6] = (pTVar9->field0_0x0)._s_0.Z;
    dStack_140 = (pTVar9->field0_0x0)._s_0.W;
    dVar24 = dStack_4c0 * dStack_4c0 + local_4c8 * local_4c8;
    if (dVar24 <= dVar18) {
      local_4c8 = 0.0;
      dStack_4c0 = 0.0;
    }
    else {
      local_508 = (TIntPoint<int>_u_0)(dVar19 / SQRT(dVar24));
      local_4c8 = (double)local_508 * local_4c8;
      dStack_4c0 = (double)local_508 * dStack_4c0;
    }
    local_4d8._s_0.X = dVar25;
    local_4d8._s_0.Y = dVar29;
    pTVar9 = `FProjectedShadowInfo::ComputeScissorRectOptim'::__l2::<lambda_1>::operator()
                       (&local_4f8,(TVector4<double> *)&local_4a8._s_0,
                        (TLine2<double> *)&local_4d8._s_0);
    local_4c8 = local_118 - dVar25;
    dStack_4c0 = dStack_110 - dVar29;
    local_138 = (pTVar9->field0_0x0)._s_0.X;
    dStack_130 = (pTVar9->field0_0x0)._s_0.Y;
    local_128 = (pTVar9->field0_0x0)._s_0.Z;
    dStack_120 = (pTVar9->field0_0x0)._s_0.W;
    dVar24 = dStack_4c0 * dStack_4c0 + local_4c8 * local_4c8;
    if (dVar24 <= dVar18) {
      local_4c8 = 0.0;
      dStack_4c0 = 0.0;
    }
    else {
      local_508 = (TIntPoint<int>_u_0)(dVar19 / SQRT(dVar24));
      local_4c8 = (double)local_508 * local_4c8;
      dStack_4c0 = (double)local_508 * dStack_4c0;
    }
    local_4d8._s_0.X = dVar25;
    local_4d8._s_0.Y = dVar29;
    pTVar9 = `FProjectedShadowInfo::ComputeScissorRectOptim'::__l2::<lambda_1>::operator()
                       (&local_4f8,(TVector4<double> *)&local_4a8._s_0,
                        (TLine2<double> *)&local_4d8._s_0);
    local_4c8 = local_f8 - dVar25;
    dStack_4c0 = dStack_f0 - dVar29;
    local_118 = (pTVar9->field0_0x0)._s_0.X;
    dStack_110 = (pTVar9->field0_0x0)._s_0.Y;
    local_108 = (pTVar9->field0_0x0)._s_0.Z;
    dStack_100 = (pTVar9->field0_0x0)._s_0.W;
    dVar24 = dStack_4c0 * dStack_4c0 + local_4c8 * local_4c8;
    if (dVar24 <= dVar18) {
      local_4c8 = 0.0;
      dStack_4c0 = 0.0;
    }
    else {
      local_508 = (TIntPoint<int>_u_0)(dVar19 / SQRT(dVar24));
      local_4c8 = (double)local_508 * local_4c8;
      dStack_4c0 = (double)local_508 * dStack_4c0;
    }
    local_4d8._s_0.X = dVar25;
    local_4d8._s_0.Y = dVar29;
    pTVar9 = `FProjectedShadowInfo::ComputeScissorRectOptim'::__l2::<lambda_1>::operator()
                       (&local_4f8,(TVector4<double> *)&local_4a8._s_0,
                        (TLine2<double> *)&local_4d8._s_0);
    lVar12 = 2;
    local_508._s_0.Y = iVar14;
    local_508._s_0.X = iVar14;
    pdVar11 = local_178 + 5;
    local_f8 = (pTVar9->field0_0x0)._s_0.X;
    dStack_f0 = (pTVar9->field0_0x0)._s_0.Y;
    local_4e8 = (double)local_508;
    local_4e0 = 0;
    local_4e0._4_4_ = 0;
    local_e8 = (pTVar9->field0_0x0)._s_0.Z;
    dStack_e0 = (pTVar9->field0_0x0)._s_0.W;
    iVar13 = iVar14;
    iVar7 = local_4e0._4_4_;
    do {
      dVar18 = pdVar11[-5];
      if (dVar18 < (double)iVar13) {
        dVar25 = dVar18;
        if (dVar34 <= dVar18) {
          dVar25 = dVar34;
        }
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
        }
        iVar13 = (int)dVar25;
        local_4e8 = (double)CONCAT44(local_4e8._4_4_,iVar13);
      }
      dVar25 = pdVar11[-4];
      if (dVar25 < (double)iVar14) {
        dVar19 = dVar25;
        if (dVar17 <= dVar25) {
          dVar19 = dVar17;
        }
        if (dVar19 <= 0.0) {
          dVar19 = 0.0;
        }
        iVar14 = (int)dVar19;
        local_4e8 = (double)CONCAT44(iVar14,(undefined4)local_4e8);
      }
      if ((double)iVar10 < dVar18) {
        if (dVar34 <= dVar18) {
          dVar18 = dVar34;
        }
        if (dVar18 <= 0.0) {
          dVar18 = 0.0;
        }
        iVar10 = (int)dVar18;
        local_4e0 = CONCAT44(local_4e0._4_4_,iVar10);
      }
      if ((double)iVar7 < dVar25) {
        if (dVar17 <= dVar25) {
          dVar25 = dVar17;
        }
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
        }
        iVar7 = (int)dVar25;
        local_4e0 = CONCAT44(iVar7,(undefined4)local_4e0);
      }
      dVar18 = pdVar11[-1];
      if (dVar18 < (double)iVar13) {
        dVar25 = dVar18;
        if (dVar34 <= dVar18) {
          dVar25 = dVar34;
        }
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
        }
        iVar13 = (int)dVar25;
        local_4e8 = (double)CONCAT44(local_4e8._4_4_,iVar13);
      }
      dVar25 = *pdVar11;
      if (dVar25 < (double)iVar14) {
        dVar19 = dVar25;
        if (dVar17 <= dVar25) {
          dVar19 = dVar17;
        }
        if (dVar19 <= 0.0) {
          dVar19 = 0.0;
        }
        iVar14 = (int)dVar19;
        local_4e8 = (double)CONCAT44(iVar14,(undefined4)local_4e8);
      }
      if ((double)iVar10 < dVar18) {
        if (dVar34 <= dVar18) {
          dVar18 = dVar34;
        }
        if (dVar18 <= 0.0) {
          dVar18 = 0.0;
        }
        iVar10 = (int)dVar18;
        local_4e0 = CONCAT44(local_4e0._4_4_,iVar10);
      }
      if ((double)iVar7 < dVar25) {
        if (dVar17 <= dVar25) {
          dVar25 = dVar17;
        }
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
        }
        iVar7 = (int)dVar25;
        local_4e0 = CONCAT44(iVar7,(undefined4)local_4e0);
      }
      dVar18 = pdVar11[3];
      if (dVar18 < (double)iVar13) {
        dVar25 = dVar18;
        if (dVar34 <= dVar18) {
          dVar25 = dVar34;
        }
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
        }
        iVar13 = (int)dVar25;
        local_4e8 = (double)CONCAT44(local_4e8._4_4_,iVar13);
      }
      dVar25 = pdVar11[4];
      if (dVar25 < (double)iVar14) {
        dVar19 = dVar25;
        if (dVar17 <= dVar25) {
          dVar19 = dVar17;
        }
        if (dVar19 <= 0.0) {
          dVar19 = 0.0;
        }
        iVar14 = (int)dVar19;
        local_4e8 = (double)CONCAT44(iVar14,(undefined4)local_4e8);
      }
      if ((double)iVar10 < dVar18) {
        if (dVar34 <= dVar18) {
          dVar18 = dVar34;
        }
        if (dVar18 <= 0.0) {
          dVar18 = 0.0;
        }
        iVar10 = (int)dVar18;
        local_4e0 = CONCAT44(local_4e0._4_4_,iVar10);
      }
      if ((double)iVar7 < dVar25) {
        if (dVar17 <= dVar25) {
          dVar25 = dVar17;
        }
        if (dVar25 <= 0.0) {
          dVar25 = 0.0;
        }
        iVar7 = (int)dVar25;
        local_4e0 = CONCAT44(iVar7,(undefined4)local_4e0);
      }
      pdVar11 = pdVar11 + 0xc;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(double *)&(this->ScissorRectOptim).field0_0x0 = local_4e8;
    *(undefined8 *)((longlong)&(this->ScissorRectOptim).field0_0x0 + 8) = local_4e0;
    uVar3 = this->X;
    uVar4 = this->Y;
    piVar1 = (int *)((longlong)&(this->ScissorRectOptim).field0_0x0 + 4);
    *piVar1 = *piVar1 + uVar4;
    piVar1 = (int *)((longlong)&(this->ScissorRectOptim).field0_0x0 + 8);
    *piVar1 = *piVar1 + uVar3;
    piVar1 = (int *)((longlong)&(this->ScissorRectOptim).field0_0x0 + 0xc);
    *piVar1 = *piVar1 + uVar4;
    *(uint *)&(this->ScissorRectOptim).field0_0x0 = iVar13 + uVar3;
  }
  return;
}

// FinalizeAddSubjectPrimitive @ 145631520

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::FinalizeAddSubjectPrimitive
          (FProjectedShadowInfo *this,FDynamicShadowsTaskData *param_1,
          FAddSubjectPrimitiveOp *param_2,TArrayView<FViewInfo,int> *param_3,
          FFinalizeAddSubjectPrimitiveContext *param_4)

{
  TArray<FCachedMeshDrawCommandInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar4;
  TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar5;
  TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar6;
  <unnamed_type_Generic> *p<Var7;
  FVisibleMeshDrawCommand *pFVar8;
  FScriptContainerElement FVar9;
  ushort uVar10;
  FHashElementId FVar11;
  FScriptContainerElement *pFVar12;
  <unnamed_type_Generic> <Var13;
  FStaticMeshBatch **ppFVar14;
  EMeshDrawCommandCullingPayloadFlags *pEVar15;
  FPrimitiveSceneInfo **ppFVar16;
  code *pcVar17;
  uint uVar18;
  uint uVar19;
  FPrimitiveSceneInfo *pFVar20;
  FPrimitiveSceneInfo *pFVar21;
  bool bVar22;
  Type TVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *pTVar27;
  FVirtualShadowMapClipmap *pFVar28;
  FViewInfo *this_00;
  TTuple<FMeshDrawCommand_const_,FMeshDrawCommandCount> *pTVar29;
  EMeshDrawCommandCullingPayloadFlags EVar30;
  EShadowDepthType EVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulonglong uVar35;
  ushort *puVar36;
  byte bVar37;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  longlong lVar40;
  EMeshDrawCommandCullingPayloadFlags local_98 [8];
  FPrimitiveSceneInfo *local_90;
  ushort *local_88;
  uint local_80;
  int local_7c;
  ushort *local_78;
  FStaticMeshBatch *local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  TArrayView<FViewInfo,int> local_48;
  
  local_90 = param_2->PrimitiveSceneInfo;
  if ((this->CacheMode != SDCM_Uncached) && (bVar22 = IsWholeSceneDirectionalShadow(this), bVar22))
  {
    uVar25 = (this->CascadeSettings).ShadowSplitIndex;
    pTVar27 = TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
              ::FindChecked((TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
                             *)&local_90->Scene->CachedShadowMaps,this->LightSceneInfo->Id);
    uVar34 = 0;
    if ((int)uVar25 < pTVar27->ArrayNum) {
      uVar34 = ~uVar25 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar12 = (pTVar27->AllocatorInstance).Data;
    if (this->CacheMode == SDCM_StaticPrimitivesOnly) {
      iVar26 = (local_90->PersistentIndex).Index;
      if (((iVar26 < 0) || (*(int *)(pFVar12 + (longlong)(int)uVar25 * 0x430 + 0x3f8) <= iVar26)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar22)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pFVar38 = pFVar12 + (longlong)(int)uVar25 * 0x430 + 0x3e0;
      if (*(FScriptContainerElement **)(pFVar12 + (longlong)(int)uVar25 * 0x430 + 0x3f0) !=
          (FScriptContainerElement *)0x0) {
        pFVar38 = *(FScriptContainerElement **)(pFVar12 + (longlong)(int)uVar25 * 0x430 + 0x3f0);
      }
      *(uint *)(pFVar38 + (longlong)((int)(iVar26 + (iVar26 >> 0x1f & 0x1fU)) >> 5) * 4) =
           *(uint *)(pFVar38 + (longlong)((int)(iVar26 + (iVar26 >> 0x1f & 0x1fU)) >> 5) * 4) |
           1 << ((byte)iVar26 & 0x1f);
    }
    else if (((local_90->Proxy->Mobility).Value != '\x02') &&
            (local_90->Proxy->bGoodCandidateForCachedShadowmap != '\0')) {
      LOCK();
      *(int *)(pFVar12 + (longlong)(int)uVar25 * 0x430 + 0x428) =
           *(int *)(pFVar12 + (longlong)(int)uVar25 * 0x430 + 0x428) + 1;
      UNLOCK();
    }
  }
  uVar25 = *(uint *)&(param_2->Result).field0_0x0;
  if ((uVar25 >> 9 & 1) == 0) {
    pFVar28 = (this->VirtualShadowMapClipmap).Object;
    if (pFVar28 != (FVirtualShadowMapClipmap *)0x0) {
      FVirtualShadowMapClipmap::OnPrimitiveRendered(pFVar28,local_90);
    }
    if ((*(byte *)&(param_2->Result).field0_0x0 & 0x80) != 0) {
      bVar22 = IsWholeSceneDirectionalShadow(this);
      if (bVar22) {
        this_00 = this->DependentView;
      }
      else {
        this_00 = TArrayView<FViewInfo,int>::operator[](param_3,0);
      }
      bVar22 = FViewInfo::UpdatePrimitiveFadingState
                         (this_00,local_90,
                          (bool)((byte)((uint)*(undefined4 *)&(param_2->Result).field0_0x0 >> 8) & 1
                                ));
      if (bVar22) {
        if ((*(byte *)&(param_2->Result).field0_0x0 & 4) == 0) {
          return;
        }
        param_4->OverflowedMDCIndices =
             param_4->OverflowedMDCIndices +
             *(ushort *)((longlong)&(param_2->Result).field0_0x0 + 4);
        param_4->OverflowedMeshIndices =
             param_4->OverflowedMeshIndices +
             *(ushort *)((longlong)&(param_2->Result).field0_0x0 + 6);
        return;
      }
    }
    uVar25 = *(uint *)&(param_2->Result).field0_0x0;
    local_7c = -1;
    if ((uVar25 & 1) != 0) {
      if (((uVar25 & 8) != 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Result.bDynamicSubjectPrimitive",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                              ,0x970,L""), bVar22)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      uVar25 = *(uint *)&(param_2->Result).field0_0x0;
      puVar36 = (ushort *)((longlong)&(param_2->Result).field0_0x0 + 4);
      local_80 = 0xffffffff;
      uVar34 = 0xffffffff;
      if ((uVar25 & 4) == 0) {
        local_78 = puVar36;
        if (*(short *)((longlong)&(param_2->Result).field0_0x0 + 6) == 0) {
          uVar35 = 1;
        }
        else {
          uVar35 = (ulonglong)(2 - ((uVar25 & 2) != 0));
        }
      }
      else {
        uVar10 = *puVar36;
        uVar35 = (ulonglong)uVar10;
        puVar36 = param_4->OverflowedMDCIndices;
        local_78 = puVar36;
        if ((uVar10 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumMDCs > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                                ,0x643,L""), bVar22)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        local_80 = 0;
        param_4->OverflowedMDCIndices = param_4->OverflowedMDCIndices + uVar35;
        uVar34 = 0;
      }
      EVar31 = this->bVSM;
      if (this->bDirectionalLight == 0) {
        if (this->bOnePassPointLightShadow == 0) {
          EVar31 = EVar31 | Point;
        }
        else {
          EVar31 = EVar31 | OnePassPoint;
        }
      }
      else {
        EVar31 = EVar31 | Directional;
      }
      TVar23 = GetShadowMeshPassType(EVar31);
      local_60 = uVar35;
      if ((int)uVar35 != 0) {
        local_68 = (ulonglong)TVar23;
        local_58 = 0;
        do {
          uVar34 = puVar36[local_58] + uVar34;
          pTVar1 = &local_90->StaticMeshCommandInfos;
          uVar25 = 0;
          if ((int)uVar34 < (local_90->StaticMeshCommandInfos).ArrayNum) {
            uVar25 = ~uVar34 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          FVar11.Index = *(int *)(pFVar12 + (longlong)(int)uVar34 * 0x24 + 0xc);
          p<Var7 = (<unnamed_type_Generic> *)(pFVar12 + (longlong)(int)uVar34 * 0x24);
          if (FVar11.Index < 0) {
            pTVar29 = (TTuple<FMeshDrawCommand_const_,FMeshDrawCommandCount> *)
                      ((longlong)(int)p<Var7[1].VertexShaderHash * 0x198 +
                      *(longlong *)&local_90->Scene->CachedDrawLists[local_68].MeshDrawCommands);
          }
          else {
            pTVar29 = Experimental::RobinHoodHashTable_Private::
                      TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
                      ::GetByElementId((TRobinHoodHashTable<FMeshDrawCommand,FMeshDrawCommandCount,MeshDrawCommandKeyFuncs,TSizedDefaultAllocator<32>_>
                                        *)(local_90->Scene->CachedMeshDrawCommandStateBuckets +
                                          local_68),FVar11);
          }
          uVar25 = *(uint *)&(param_2->Result).field0_0x0;
          uVar34 = p<Var7[2].VertexShaderHash & 0xf;
          if (((uVar25 >> 0xb & 1) == 0) || (uVar34 == (uVar25 >> 0x13 & 0x7f))) {
            bVar24 = 0;
            if ((uVar25 >> 0xb & 1) != 0) goto LAB_14563194f;
LAB_145631959:
            bVar37 = 0;
          }
          else {
            bVar24 = 1;
LAB_14563194f:
            if (uVar34 == (uVar25 >> 0xc & 0x7f)) goto LAB_145631959;
            bVar37 = 2;
          }
          iVar26 = (local_90->PersistentIndex).Index;
          uVar25 = local_90->InstanceSceneDataOffset;
          uVar34 = (this->ShadowDepthPassVisibleCommands).ArrayNum;
          local_88 = (ushort *)CONCAT44(local_88._4_4_,local_90->PackedIndex);
          if (uVar34 == (this->ShadowDepthPassVisibleCommands).ArrayMax) {
            uVar34 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
                               (0x848,&(this->ShadowDepthPassVisibleCommands).AllocatorInstance,
                                &(this->ShadowDepthPassVisibleCommands).ArrayMax);
          }
          (this->ShadowDepthPassVisibleCommands).ArrayNum = uVar34 + 1;
          uVar32 = 0;
          if ((int)uVar34 < (int)(uVar34 + 1)) {
            uVar32 = ~uVar34 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          uVar32 = p<Var7[4].VertexShaderHash;
          uVar18 = p<Var7[2].VertexShaderHash;
          uVar19 = p<Var7[2].PixelShaderHash;
          <Var13 = *p<Var7;
          uVar33 = (int)(p<Var7[3].PixelShaderHash << 0x1d) >> 0x1d;
          uVar39 = (int)((p<Var7[3].PixelShaderHash & 0xfffffff8) << 0x1a) >> 0x1a;
          pFVar8 = (this->ShadowDepthPassVisibleCommands).AllocatorInstance.Data + (int)uVar34;
          uVar34 = p<Var7[1].PixelShaderHash;
          pFVar8->MeshDrawCommand = (FMeshDrawCommand *)pTVar29;
          (pFVar8->PrimitiveIdInfo).DrawPrimitiveId = iVar26;
          (pFVar8->PrimitiveIdInfo).ScenePrimitiveId = (int)local_88;
          puVar3 = &(pFVar8->PrimitiveIdInfo).field_0x8;
          (pFVar8->PrimitiveIdInfo).InstanceSceneDataOffset = uVar25;
          (pFVar8->PrimitiveIdInfo).bIsDynamicPrimitive = 0;
          uVar25 = *(uint *)&pFVar8->field_0x40;
          pFVar8->CullingPayloadFlags = Default;
          pFVar8->field_0x3c = pFVar8->field_0x3c | bVar37 | bVar24;
          pFVar8->StateBucketId = uVar34;
          pFVar8->PrimitiveIdBufferOffset = -1;
          (pFVar8->SortKey).field0_0x0.Generic = <Var13;
          (pFVar8->CullingPayload).field0_0x0 = (FMeshDrawCommandCullingPayload_u_0)uVar18;
          (pFVar8->CullingPayload).DynamicMeshBoundsIndex = uVar19;
          pFVar8->RunArray = (uint *)0x0;
          *(uint *)&pFVar8->field_0x40 =
               (uVar33 ^ uVar25) & 0xffffffc0 ^ (uVar39 ^ uVar33) & 0xffffffc7 ^ uVar39;
          pFVar8->NumRuns = 0;
          pFVar8->field_0x44 = pFVar8->field_0x44 ^ (pFVar8->Flags ^ (byte)uVar32) & 0x3f;
          local_58 = local_58 + 1;
          puVar36 = local_78;
          uVar34 = local_80;
        } while (local_58 < (longlong)local_60);
      }
    }
    iVar26 = -1;
    uVar25 = *(uint *)&(param_2->Result).field0_0x0;
    if ((uVar25 & 2) != 0) {
      if (((uVar25 & 8) != 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Result.bDynamicSubjectPrimitive",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                              ,0x992,L""), bVar22)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      uVar25 = *(uint *)&(param_2->Result).field0_0x0;
      if ((uVar25 & 4) == 0) {
        local_88 = (ushort *)((longlong)&(param_2->Result).field0_0x0 + 4);
        if ((uVar25 & 1) == 0) {
          uVar35 = (ulonglong)((*(short *)((longlong)&(param_2->Result).field0_0x0 + 6) != 0) + 1);
        }
        else {
          local_88 = (ushort *)((longlong)&(param_2->Result).field0_0x0 + 6);
          uVar35 = 1;
        }
      }
      else {
        uVar10 = *(ushort *)((longlong)&(param_2->Result).field0_0x0 + 6);
        uVar35 = (ulonglong)uVar10;
        local_88 = param_4->OverflowedMeshIndices;
        if ((uVar10 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumMeshes > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                                ,0x657,L""), bVar22)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        local_7c = 0;
        iVar26 = 0;
        param_4->OverflowedMeshIndices = param_4->OverflowedMeshIndices + uVar35;
      }
      local_60 = uVar35;
      if ((int)uVar35 != 0) {
        pTVar4 = &this->SubjectMeshCommandBuildFlags;
        local_78 = (ushort *)0x0;
        pTVar5 = &this->SubjectMeshCommandBuildRequests;
        do {
          pFVar20 = local_90;
          uVar34 = iVar26 + (uint)local_88[(longlong)local_78];
          uVar25 = 0;
          if ((int)uVar34 < (local_90->StaticMeshRelevances).ArrayNum) {
            uVar25 = ~uVar34 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pFVar21 = local_90;
          pFVar12 = (pFVar20->StaticMeshRelevances).AllocatorInstance.Data;
          lVar40 = (longlong)(int)uVar34;
          uVar25 = 0;
          if ((int)uVar34 < (local_90->StaticMeshes).ArrayNum) {
            uVar25 = ~uVar34 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          local_70 = (FStaticMeshBatch *)
                     ((pFVar21->StaticMeshes).AllocatorInstance.Data + lVar40 * 0xf0);
          this->NumSubjectMeshCommandBuildRequestElements =
               this->NumSubjectMeshCommandBuildRequestElements +
               (uint)*(ushort *)(pFVar12 + lVar40 * 0x18 + 0x10);
          ppFVar14 = (pTVar5->AllocatorInstance).Data;
          if (((ppFVar14 <= &local_70) &&
              (&local_70 < ppFVar14 + (this->SubjectMeshCommandBuildRequests).ArrayMax)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          iVar26 = (this->SubjectMeshCommandBuildRequests).ArrayNum;
          if (iVar26 == (this->SubjectMeshCommandBuildRequests).ArrayMax) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
                               (0x808,&pTVar5->AllocatorInstance,
                                &(this->SubjectMeshCommandBuildRequests).ArrayMax);
          }
          (this->SubjectMeshCommandBuildRequests).ArrayNum = iVar26 + 1;
          (pTVar5->AllocatorInstance).Data[iVar26] = local_70;
          uVar25 = *(uint *)&(param_2->Result).field0_0x0;
          FVar9 = pFVar12[lVar40 * 0x18 + 0x14];
          if (((byte)FVar9 & 0x10) == 0) {
            bVar24 = (byte)FVar9 & 0xf;
          }
          else {
            bVar24 = 0xff;
          }
          if (((uVar25 >> 0xb & 1) == 0) || ((int)(char)bVar24 == (uVar25 >> 0x13 & 0x7f))) {
            EVar30 = Default;
            if ((uVar25 >> 0xb & 1) != 0) goto LAB_145631d39;
LAB_145631d46:
            local_98[0] = Default;
          }
          else {
            EVar30 = MinScreenSizeCull;
LAB_145631d39:
            if ((int)(char)bVar24 == (uVar25 >> 0xc & 0x7f)) goto LAB_145631d46;
            local_98[0] = MaxScreenSizeCull;
          }
          local_98[0] = local_98[0] | EVar30;
          pEVar15 = (pTVar4->AllocatorInstance).Data;
          if (((pEVar15 <= local_98) &&
              (local_98 < pEVar15 + (this->SubjectMeshCommandBuildFlags).ArrayMax)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          iVar26 = (this->SubjectMeshCommandBuildFlags).ArrayNum;
          piVar2 = &(this->SubjectMeshCommandBuildFlags).ArrayMax;
          if (iVar26 == *piVar2) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
                               (0x101,&pTVar4->AllocatorInstance,piVar2);
          }
          (this->SubjectMeshCommandBuildFlags).ArrayNum = iVar26 + 1;
          (pTVar4->AllocatorInstance).Data[iVar26] = local_98[0];
          local_78 = (ushort *)((longlong)local_78 + 1);
          iVar26 = local_7c;
        } while ((longlong)local_78 < (longlong)local_60);
      }
    }
    if ((*(byte *)&(param_2->Result).field0_0x0 & 8) != 0) {
      pTVar6 = &this->DynamicSubjectPrimitives;
      ppFVar16 = (pTVar6->AllocatorInstance).Data;
      if (((ppFVar16 <= &local_90) &&
          (&local_90 < ppFVar16 + (this->DynamicSubjectPrimitives).ArrayMax)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar26 = (this->DynamicSubjectPrimitives).ArrayNum;
      piVar2 = &(this->DynamicSubjectPrimitives).ArrayMax;
      if (iVar26 == *piVar2) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                           (0x808,&pTVar6->AllocatorInstance,piVar2);
      }
      (this->DynamicSubjectPrimitives).ArrayNum = iVar26 + 1;
      (pTVar6->AllocatorInstance).Data[iVar26] = local_90;
    }
    if ((*(byte *)&(param_2->Result).field0_0x0 & 0x10) != 0) {
      pTVar6 = &this->SubjectTranslucentPrimitives;
      ppFVar16 = (pTVar6->AllocatorInstance).Data;
      if (((ppFVar16 <= &local_90) &&
          (&local_90 < ppFVar16 + (this->SubjectTranslucentPrimitives).ArrayMax)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar26 = (this->SubjectTranslucentPrimitives).ArrayNum;
      piVar2 = &(this->SubjectTranslucentPrimitives).ArrayMax;
      if (iVar26 == *piVar2) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                           (0x808,&pTVar6->AllocatorInstance,piVar2);
      }
      (this->SubjectTranslucentPrimitives).ArrayNum = iVar26 + 1;
      (pTVar6->AllocatorInstance).Data[iVar26] = local_90;
    }
    if ((*(byte *)&(param_2->Result).field0_0x0 & 0x20) != 0) {
      pTVar6 = &this->SubjectHeterogeneousVolumePrimitives;
      ppFVar16 = (pTVar6->AllocatorInstance).Data;
      if (((ppFVar16 <= &local_90) &&
          (&local_90 < ppFVar16 + (this->SubjectHeterogeneousVolumePrimitives).ArrayMax)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar26 = (this->SubjectHeterogeneousVolumePrimitives).ArrayNum;
      piVar2 = &(this->SubjectHeterogeneousVolumePrimitives).ArrayMax;
      if (iVar26 == *piVar2) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                           (0x808,&pTVar6->AllocatorInstance,piVar2);
      }
      (this->SubjectHeterogeneousVolumePrimitives).ArrayNum = iVar26 + 1;
      (pTVar6->AllocatorInstance).Data[iVar26] = local_90;
    }
  }
  else {
    local_48.DataPtr = param_3->DataPtr;
    local_48.ArrayNum = param_3->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
    bVar22 = AddSubjectPrimitive(this,local_90,&local_48,(bool)((byte)(uVar25 >> 10) & 1),false);
    if ((bVar22) && ((this->VirtualShadowMapClipmap).Object != (FVirtualShadowMapClipmap *)0x0)) {
      pFVar28 = TSharedPtr<FVirtualShadowMapClipmap,1>::operator->(&this->VirtualShadowMapClipmap);
      FVirtualShadowMapClipmap::OnPrimitiveRendered(pFVar28,local_90);
    }
  }
  return;
}

// GatherDynamicHeterogeneousVolumeMeshElementsArray @ 1456337e0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FProjectedShadowInfo::GatherDynamicHeterogeneousVolumeMeshElementsArray
          (FProjectedShadowInfo *this,FSceneRenderer *param_1,FMeshElementCollector *param_2,
          TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_4,
          FSceneViewFamily *param_5,
          TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_6,int *param_7,EGatherDynamicMeshElementsPass param_8)

{
  undefined8 *puVar1;
  TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar2;
  TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
  longlong *plVar4;
  FMeshBatchAndRelevance *pFVar5;
  longlong lVar6;
  FMeshBatchAndRelevance *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar15;
  TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar16;
  uint uVar17;
  uint uVar18;
  longlong local_60;
  longlong local_58;
  FMeshBatchAndRelevance local_48;
  
  bVar9 = GatherDynamicMeshElementsArray
                    (this,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar17 = 0;
  if (0 < param_4->ArrayNum) {
    local_58 = 0;
    local_60 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar17 < (param_2->NumMeshBatchElementsPerView).ArrayNum) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      pTVar2 = (TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(param_2->NumMeshBatchElementsPerView).AllocatorInstance.SecondaryData.Data;
      pTVar15 = &param_2->NumMeshBatchElementsPerView;
      if (pTVar2 != (TArray<int,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar15 = pTVar2;
      }
      uVar12 = *(uint *)((pTVar15->AllocatorInstance).InlineData + local_58);
      uVar18 = 0;
      if (uVar12 != 0) {
        do {
          uVar13 = 0;
          if ((int)uVar17 < (param_2->MeshBatches).ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          pTVar3 = (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)(param_2->MeshBatches).AllocatorInstance.SecondaryData.Data;
          pTVar16 = &param_2->MeshBatches;
          if (pTVar3 != (TArray<TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         *)0x0) {
            pTVar16 = pTVar3;
          }
          plVar4 = *(longlong **)((pTVar16->AllocatorInstance).InlineData + local_60);
          uVar13 = 0;
          if ((int)uVar18 < (int)plVar4[1]) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          pFVar5 = (param_6->AllocatorInstance).Data;
          lVar6 = *plVar4;
          puVar1 = (undefined8 *)(lVar6 + (longlong)(int)uVar18 * 0x18);
          local_48.Mesh = (FMeshBatch *)*puVar1;
          local_48.PrimitiveSceneProxy = (FPrimitiveSceneProxy *)puVar1[1];
          local_48._16_8_ = *(undefined8 *)(lVar6 + 0x10 + (longlong)(int)uVar18 * 0x18);
          if (((pFVar5 <= &local_48) && (&local_48 < pFVar5 + param_6->ArrayMax)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          iVar14 = param_6->ArrayNum;
          if (iVar14 == param_6->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
                               (0x818,&param_6->AllocatorInstance,&param_6->ArrayMax);
          }
          param_6->ArrayNum = iVar14 + 1;
          uVar18 = uVar18 + 1;
          pFVar7 = (param_6->AllocatorInstance).Data;
          pFVar5 = pFVar7 + iVar14;
          pFVar5->Mesh = local_48.Mesh;
          pFVar5->PrimitiveSceneProxy = local_48.PrimitiveSceneProxy;
          *(undefined8 *)&pFVar7[iVar14].field_0x10 = local_48._16_8_;
        } while (uVar18 < uVar12);
      }
      local_60 = local_60 + 8;
      uVar17 = uVar17 + 1;
      local_58 = local_58 + 4;
      *param_7 = *param_7 + uVar12;
    } while ((int)uVar17 < param_4->ArrayNum);
  }
  return bVar9;
}

// GatherDynamicMeshElements @ 145633b00

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FProjectedShadowInfo::GatherDynamicMeshElements
          (FProjectedShadowInfo *this,FMeshElementCollector *param_1,FSceneRenderer *param_2,
          FVisibleLightInfo *param_3,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_4
          ,EGatherDynamicMeshElementsPass param_5)

{
  int *piVar1;
  longlong *plVar2;
  FViewFamilyInfo *pFVar3;
  FViewInfo *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_bool___cdecl_FProjectedShadowInfo::GatherDynamicMeshElements(FMeshElementCollector_&,FSceneRenderer_&,FVisibleLightInfo_&,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_&,FProjectedShadowInfo::EGatherDynamicMeshElementsPass)_::_2_::FStat_STAT_Shadow_GatherDynamicMeshElements>
  FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  byte bVar17;
  bool bVar18;
  FColor_u_0 local_res8 [2];
  FMeshElementCollector *local_res10;
  FSceneRenderer *local_res18;
  uint local_88;
  uint uStack_84;
  int local_80 [2];
  FName local_78;
  FName local_70;
  LARGE_INTEGER local_60;
  FStatMessage local_58;
  FName local_48;
  FName local_40;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Shadow_GatherDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_FProjectedShadowInfo::GatherDynamicMeshElements(FMeshElementCollector_&,FSceneRenderer_&,FVisibleLightInfo_&,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_&,FProjectedShadowInfo::EGatherDynamicMeshElementsPass)_::_2_::FStat_STAT_Shadow_GatherDynamicMeshElements>
         )0x0) {
      pFVar12 = ::FName::FName(&local_48,"STAT_Shadow_GatherDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shadow_GatherDynamicMeshElements,
                 *pFVar12,L"STAT_Shadow_GatherDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_Shadow_GatherDynamicMeshElements;
  if (StatPtr_STAT_Shadow_GatherDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FProjectedShadowInfo::GatherDynamicMeshElements(FMeshElementCollector_&,FSceneRenderer_&,FVisibleLightInfo_&,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_&,FProjectedShadowInfo::EGatherDynamicMeshElementsPass)_::_2_::FStat_STAT_Shadow_GatherDynamicMeshElements>
       )0x0) {
    pFVar12 = ::FName::FName(&local_40,"STAT_Shadow_GatherDynamicMeshElements");
    FVar13 = (FThreadSafeStaticStat<_public:_bool___cdecl_FProjectedShadowInfo::GatherDynamicMeshElements(FMeshElementCollector_&,FSceneRenderer_&,FVisibleLightInfo_&,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_&,FProjectedShadowInfo::EGatherDynamicMeshElementsPass)_::_2_::FStat_STAT_Shadow_GatherDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Shadow_GatherDynamicMeshElements,*pFVar12,
                          L"STAT_Shadow_GatherDynamicMeshElements","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar7 = false;
  bVar9 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar15.Value;
        local_78.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                   ,0xab3);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar15.Value;
      uStack_84 = uVar14;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar8 = true;
      goto LAB_145633c7f;
    }
  }
  bVar8 = false;
  FVar16 = local_70;
LAB_145633c7f:
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2740,"FProjectedShadowInfo::GatherDynamicMeshElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
               ,0xab4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2740);
  }
  if ((this->ShadowDepthView == (FViewInfo *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShadowDepthView",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                          ,0xab6,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  bVar10 = true;
  if ((((0 < (this->DynamicSubjectPrimitives).ArrayNum) || (0 < (this->ReceiverPrimitives).ArrayNum)
       ) || (0 < (this->SubjectTranslucentPrimitives).ArrayNum)) ||
     (0 < (this->SubjectHeterogeneousVolumePrimitives).ArrayNum)) {
    pFVar4 = this->ShadowDepthView;
    if ((param_4->ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    *(FViewInfo **)(param_4->AllocatorInstance).Data = pFVar4;
    if ((this->bPreShadow != 0) && (GPreshadowsForceLowestLOD != 0)) {
      *(undefined4 *)&this->ShadowDepthView->_padding_ = 1;
    }
    if ((this->CascadeSettings).bFarShadowCascade != false) {
      plVar2 = &this->ShadowDepthView->_padding_;
      *(uint *)plVar2 = (uint)*plVar2 | 2;
    }
    pFVar3 = &param_2->ViewFamily;
    bVar10 = IsWholeSceneDirectionalShadow(this);
    pFVar4 = this->ShadowDepthView;
    if (bVar10) {
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
      this->ShadowDepthView->_padding_ = (longlong)&(this->CascadeSettings).ShadowBoundsAccurate;
      bVar10 = GatherDynamicMeshElementsArray
                         (this,local_res10,&this->DynamicSubjectPrimitives,param_4,
                          (FSceneViewFamily *)pFVar3,&this->DynamicSubjectMeshElements,
                          &this->NumDynamicSubjectMeshElements,param_5);
      pFVar4 = this->ShadowDepthView;
      dVar6 = (this->PreShadowTranslation).field0_0x0._s_0.Y;
      pFVar4->_padding_ = (longlong)(this->PreShadowTranslation).field0_0x0._s_0.X;
      pFVar4->_padding_ = (longlong)dVar6;
      pFVar4->_padding_ = (longlong)(this->PreShadowTranslation).field0_0x0._s_0.Z;
    }
    else {
      dVar6 = (this->PreShadowTranslation).field0_0x0._s_0.Y;
      pFVar4->_padding_ = (longlong)(this->PreShadowTranslation).field0_0x0._s_0.X;
      pFVar4->_padding_ = (longlong)dVar6;
      pFVar4->_padding_ = (longlong)(this->PreShadowTranslation).field0_0x0._s_0.Z;
      this->ShadowDepthView->_padding_ = (longlong)&this->CasterOuterFrustum;
      bVar10 = GatherDynamicMeshElementsArray
                         (this,local_res10,&this->DynamicSubjectPrimitives,param_4,
                          (FSceneViewFamily *)pFVar3,&this->DynamicSubjectMeshElements,
                          &this->NumDynamicSubjectMeshElements,param_5);
    }
    local_res8[0]._s_0.B = bVar10;
    FMeshElementCollector::ClearViewMeshArrays(local_res10);
    local_80[0] = 0;
    *(undefined4 *)&this->ShadowDepthView->_padding_ = 0;
    this->ShadowDepthView->_padding_ = (longlong)&this->CasterOuterFrustum;
    bVar10 = GatherDynamicMeshElementsArray
                       (this,local_res10,&this->SubjectTranslucentPrimitives,param_4,
                        (FSceneViewFamily *)pFVar3,&this->DynamicSubjectTranslucentMeshElements,
                        local_80,param_5);
    bVar17 = bVar10 & local_res8[0]._s_0.B;
    FMeshElementCollector::ClearViewMeshArrays(local_res10);
    local_88 = 0;
    bVar10 = GatherDynamicHeterogeneousVolumeMeshElementsArray
                       (this,local_res18,local_res10,&this->SubjectHeterogeneousVolumePrimitives,
                        param_4,(FSceneViewFamily *)pFVar3,
                        &this->DynamicSubjectHeterogeneousVolumeMeshElements,(int *)&local_88,
                        param_5);
    bVar10 = (bool)(bVar10 & bVar17);
    FMeshElementCollector::ClearViewMeshArrays(local_res10);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_60);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return bVar10;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar10;
}

// GatherDynamicMeshElementsArray @ 145634140

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FProjectedShadowInfo::GatherDynamicMeshElementsArray
          (FProjectedShadowInfo *this,FMeshElementCollector *param_1,
          TArray<FPrimitiveSceneInfo_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_2,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FSceneViewFamily *param_4,
          TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_5,int *param_6,EGatherDynamicMeshElementsPass param_7)

{
  int iVar1;
  FViewInfo *pFVar2;
  FPrimitiveSceneInfo *pFVar3;
  FPrimitiveSceneProxy *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  longlong lVar14;
  bool local_1b8;
  undefined1 local_1b0 [24];
  FSimpleElementCollector local_198;
  
  FSimpleElementCollector::FSimpleElementCollector(&local_198);
  lVar14 = 0;
  FMeshElementCollector::AddViewMeshArrays
            (param_1,(FSceneView *)this->ShadowDepthView,param_5,&local_198,
             &this->ShadowDepthView->DynamicPrimitiveCollector,(FSimpleElementCollector *)0x0);
  uVar10 = param_2->ArrayNum;
  uVar12 = 0;
  local_1b8 = true;
  bVar13 = true;
  if (uVar10 != 0) {
    do {
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2814,"DynamicPrimitive",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                   ,0xafe);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2814);
      }
      lVar11 = (longlong)param_2->ArrayNum;
      uVar8 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar14 = lVar11, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar2 = this->ShadowDepthView;
      iVar1 = (pFVar2->PrimitiveViewRelevanceMap).ArrayNum;
      lVar11 = (longlong)iVar1;
      pFVar3 = (param_2->AllocatorInstance).Data[(int)uVar12];
      uVar8 = pFVar3->PackedIndex;
      pFVar4 = pFVar3->Proxy;
      uVar9 = 0;
      if ((int)uVar8 < iVar1) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         lVar14 = lVar11, bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar8 = *(uint *)&(pFVar2->PrimitiveViewRelevanceMap).AllocatorInstance.Data[(int)uVar8].
                        field_0x8;
      if (ZPULL(uVar8,0x10,1) == 0) {
        lVar11 = (**(code **)(pFVar4->_padding_ + 0xd0))(pFVar4,local_1b0,this->ShadowDepthView);
        uVar8 = *(uint *)(lVar11 + 8);
      }
      if (((uVar8 & 8) != 0) && ((uVar8 & 2) != 0)) {
        if ((param_7 == All) || ((param_7 == Serial) != pFVar4->bSupportsParallelGDME)) {
          FMeshElementCollector::SetPrimitive(param_1,pFVar4,&pFVar3->DefaultDynamicHitProxyId);
          (**(code **)(pFVar4->_padding_ + 0xa8))(pFVar4,param_3,param_4,1,param_1,lVar14);
        }
        else {
          local_1b8 = false;
        }
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar12 = uVar12 + 1;
      bVar13 = local_1b8;
    } while (uVar12 < uVar10);
  }
  uVar10 = FMeshElementCollector::GetMeshElementCount(param_1,0);
  *param_6 = *param_6 + uVar10;
  FSimpleElementCollector::~FSimpleElementCollector(&local_198);
  return bVar13;
}

// HasSubjectPrims @ 145638d40

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

bool __thiscall FProjectedShadowInfo::HasSubjectPrims(FProjectedShadowInfo *this)

{
  if (((((this->DynamicSubjectPrimitives).ArrayNum < 1) &&
       ((this->SubjectTranslucentPrimitives).ArrayNum < 1)) &&
      ((this->SubjectHeterogeneousVolumePrimitives).ArrayNum < 1)) &&
     ((((this->ShadowDepthPass).MaxNumDraws < 1 &&
       ((this->SubjectMeshCommandBuildRequests).ArrayNum < 1)) &&
      (((this->ShadowDepthPassVisibleCommands).ArrayNum < 1 &&
       (this->bNaniteGeometry != 1 || this->bContainsNaniteSubjects != 1)))))) {
    return false;
  }
  return true;
}

// PresizeSubjectPrimitiveArrays @ 14563d540

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
FProjectedShadowInfo::PresizeSubjectPrimitiveArrays
          (FProjectedShadowInfo *this,FAddSubjectPrimitiveStats *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (this->ShadowDepthPassVisibleCommands).ArrayNum;
  uVar2 = iVar1 + param_1->NumDeferredPrimitives * 2 + param_1->NumCachedMDCCopies;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if ((this->ShadowDepthPassVisibleCommands).ArrayMax < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
              (0x48,8,uVar2,&(this->ShadowDepthPassVisibleCommands).AllocatorInstance,iVar1,
               &(this->ShadowDepthPassVisibleCommands).ArrayMax);
  }
  iVar1 = (this->SubjectMeshCommandBuildRequests).ArrayNum;
  uVar2 = param_1->NumMDCBuildRequests + iVar1;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if ((this->SubjectMeshCommandBuildRequests).ArrayMax < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
              (8,8,uVar2,&(this->SubjectMeshCommandBuildRequests).AllocatorInstance,iVar1,
               &(this->SubjectMeshCommandBuildRequests).ArrayMax);
  }
  iVar1 = (this->SubjectMeshCommandBuildFlags).ArrayNum;
  uVar2 = param_1->NumMDCBuildRequests + iVar1;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if ((this->SubjectMeshCommandBuildFlags).ArrayMax < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
              (1,1,uVar2,&(this->SubjectMeshCommandBuildFlags).AllocatorInstance,iVar1,
               &(this->SubjectMeshCommandBuildFlags).ArrayMax);
  }
  iVar1 = (this->DynamicSubjectPrimitives).ArrayNum;
  uVar2 = param_1->NumDynamicSubs + iVar1 + param_1->NumDeferredPrimitives;
  if (-1 < (int)uVar2) {
    if ((this->DynamicSubjectPrimitives).ArrayMax < (int)uVar2) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                (8,8,uVar2,&(this->DynamicSubjectPrimitives).AllocatorInstance,iVar1,
                 &(this->DynamicSubjectPrimitives).ArrayMax);
    }
    iVar1 = (this->SubjectTranslucentPrimitives).ArrayNum;
    uVar2 = param_1->NumTranslucentSubs + iVar1;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((this->SubjectTranslucentPrimitives).ArrayMax < (int)uVar2) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                (8,8,uVar2,&(this->SubjectTranslucentPrimitives).AllocatorInstance,iVar1,
                 &(this->SubjectTranslucentPrimitives).ArrayMax);
    }
    iVar1 = (this->SubjectHeterogeneousVolumePrimitives).ArrayNum;
    uVar2 = param_1->NumHeterogeneousVolumeSubs + iVar1;
    if (-1 < (int)uVar2) {
      if ((this->SubjectHeterogeneousVolumePrimitives).ArrayMax < (int)uVar2) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveSceneInfo_const_*>_>
                  (8,8,uVar2,&(this->SubjectHeterogeneousVolumePrimitives).AllocatorInstance,iVar1,
                   &(this->SubjectHeterogeneousVolumePrimitives).ArrayMax);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// SetupClipmapProjection @ 145643550

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::SetupClipmapProjection
          (FProjectedShadowInfo *this,FLightSceneInfo *param_1,FViewInfo *param_2,
          TSharedPtr<FVirtualShadowMapClipmap,1> *param_3,float param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  byte bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FVirtualShadowMapClipmap *pFVar6;
  FLightSceneProxy *pFVar7;
  FViewInfo *pFVar8;
  code *pcVar9;
  TReferenceControllerBase<1> *pTVar10;
  double dVar11;
  TConsoleVariableData<int> *pTVar12;
  bool bVar13;
  ForElementType<FVirtualShadowMapClipmap::FLevelData> FVar14;
  double *pdVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_5b8 [32];
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  longlong local_558;
  undefined1 local_548 [32];
  TMatrix<double> local_528;
  TMatrix<double> local_4a8;
  FLightSceneInfoCompact local_428;
  TMatrix<double> local_3e8;
  TMatrix<double> local_368;
  TMatrix<double> local_2e8;
  FConvexVolume local_268;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  pTVar5 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar6 = param_3->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (this->VirtualShadowMapClipmap).SharedReferenceCount.ReferenceController;
  (this->VirtualShadowMapClipmap).Object = pFVar6;
  (this->VirtualShadowMapClipmap).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  this->LightSceneInfo = param_1;
  FLightSceneInfoCompact::Init(&local_428,param_1);
  this->bDirectionalLight = 1;
  this->bWholeSceneShadow = 1;
  uVar17 = *(uint *)&this->field_0x990;
  (this->LightSceneInfoCompact).BoundingSphereVector.XY.m128d_f64[0] =
       local_428.BoundingSphereVector.XY.m128d_f64[0];
  (this->LightSceneInfoCompact).BoundingSphereVector.XY.m128d_f64[1] =
       local_428.BoundingSphereVector.XY.m128d_f64[1];
  this->DependentView = param_2;
  (this->LightSceneInfoCompact).BoundingSphereVector.ZW.m128d_f64[0] =
       local_428.BoundingSphereVector.ZW.m128d_f64[0];
  (this->LightSceneInfoCompact).BoundingSphereVector.ZW.m128d_f64[1] =
       local_428.BoundingSphereVector.ZW.m128d_f64[1];
  this->ResolutionX = 0x4000;
  *(undefined8 *)&(this->LightSceneInfoCompact).Color.field0_0x0 = local_428.Color.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(this->LightSceneInfoCompact).Color.field0_0x0 + 8) =
       local_428.Color.field0_0x0._8_8_;
  this->ResolutionY = 0x4000;
  (this->LightSceneInfoCompact).LightSceneInfo = local_428.LightSceneInfo;
  *(undefined4 *)&(this->LightSceneInfoCompact).field_0x38 = local_428._56_4_;
  (this->LightSceneInfoCompact).MegaLightsShadowMethod =
       (TEnumAsByte<EMegaLightsShadowMethod::Type>)local_428.MegaLightsShadowMethod.Value;
  (this->LightSceneInfoCompact).CastRaytracedShadow =
       (TEnumAsByte<ECastRayTracedShadow::Type>)local_428.CastRaytracedShadow.Value;
  *(undefined2 *)&(this->LightSceneInfoCompact).field_0x3e = local_428._62_2_;
  bVar4 = param_1->Proxy->field_0x1d9;
  this->MaxNonFarCascadeDistance = param_4;
  this->BorderSize = 0;
  this->MeshSelectionMask = VSM;
  *(uint *)&this->field_0x990 = ((uint)bVar4 << 0x13 ^ uVar17) & 0x80000 ^ uVar17 | 0x40;
  if (((this->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar6 = (this->VirtualShadowMapClipmap).Object;
  uVar17 = (pFVar6->LevelData).ArrayNum - 1;
  if ((pFVar6 == (FVirtualShadowMapClipmap *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar6 = (this->VirtualShadowMapClipmap).Object;
  local_4a8.M[0][0] = (pFVar6->WorldToLightViewRotationMatrix).M[0][0];
  local_4a8.M[0][1] = (pFVar6->WorldToLightViewRotationMatrix).M[0][1];
  local_4a8.M[0][2] = (pFVar6->WorldToLightViewRotationMatrix).M[0][2];
  local_4a8.M[0][3] = (pFVar6->WorldToLightViewRotationMatrix).M[0][3];
  local_4a8.M[1][0] = (pFVar6->WorldToLightViewRotationMatrix).M[1][0];
  local_4a8.M[1][1] = (pFVar6->WorldToLightViewRotationMatrix).M[1][1];
  local_4a8.M[1][2] = (pFVar6->WorldToLightViewRotationMatrix).M[1][2];
  local_4a8.M[1][3] = (pFVar6->WorldToLightViewRotationMatrix).M[1][3];
  local_4a8.M[2][0] = (pFVar6->WorldToLightViewRotationMatrix).M[2][0];
  local_4a8.M[2][1] = (pFVar6->WorldToLightViewRotationMatrix).M[2][1];
  local_4a8.M[2][2] = (pFVar6->WorldToLightViewRotationMatrix).M[2][2];
  local_4a8.M[2][3] = (pFVar6->WorldToLightViewRotationMatrix).M[2][3];
  local_4a8.M[3][0] = (pFVar6->WorldToLightViewRotationMatrix).M[3][0];
  local_4a8.M[3][1] = (pFVar6->WorldToLightViewRotationMatrix).M[3][1];
  local_4a8.M[3][2] = (pFVar6->WorldToLightViewRotationMatrix).M[3][2];
  local_4a8.M[3][3] = (pFVar6->WorldToLightViewRotationMatrix).M[3][3];
  if ((pFVar6 == (FVirtualShadowMapClipmap *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar6 = (this->VirtualShadowMapClipmap).Object;
  uVar18 = 0;
  if ((int)uVar17 < (pFVar6->LevelData).ArrayNum) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar14 = (pFVar6->LevelData).AllocatorInstance.SecondaryData;
  lVar16 = (longlong)(int)uVar17 * 0xc0;
  if (FVar14 == (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
    FVar14 = (ForElementType<FVirtualShadowMapClipmap::FLevelData>)&pFVar6->LevelData;
  }
  local_528.M[0][0] = *(double *)((longlong)FVar14 + lVar16);
  local_528.M[0][1] = ((double *)((longlong)FVar14 + lVar16))[1];
  local_528.M[0][2] = *(double *)((uchar *)((longlong)FVar14 + 0x10) + lVar16);
  local_528.M[0][3] = *(double *)((uchar *)((longlong)FVar14 + 0x10) + lVar16 + 8);
  local_528.M[1][0] = *(double *)((uchar *)((longlong)FVar14 + 0x20) + lVar16);
  local_528.M[1][1] = *(double *)((uchar *)((longlong)FVar14 + 0x20) + lVar16 + 8);
  local_528.M[1][2] = *(double *)((uchar *)((longlong)FVar14 + 0x30) + lVar16);
  local_528.M[1][3] = *(double *)((uchar *)((longlong)FVar14 + 0x30) + lVar16 + 8);
  local_528.M[2][0] = *(double *)((uchar *)((longlong)FVar14 + 0x40) + lVar16);
  local_528.M[2][1] = *(double *)((uchar *)((longlong)FVar14 + 0x40) + lVar16 + 8);
  local_528.M[2][2] = *(double *)((uchar *)((longlong)FVar14 + 0x50) + lVar16);
  local_528.M[2][3] = *(double *)((uchar *)((longlong)FVar14 + 0x50) + lVar16 + 8);
  local_528.M[3][0] = *(double *)((uchar *)((longlong)FVar14 + 0x60) + lVar16);
  local_528.M[3][1] = *(double *)((uchar *)((longlong)FVar14 + 0x60) + lVar16 + 8);
  local_528.M[3][2] = *(double *)((uchar *)((longlong)FVar14 + 0x70) + lVar16);
  local_528.M[3][3] = *(double *)((uchar *)((longlong)FVar14 + 0x70) + lVar16 + 8);
  if (((this->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar6 = (this->VirtualShadowMapClipmap).Object;
  uVar18 = 0;
  if ((int)uVar17 < (pFVar6->LevelData).ArrayNum) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar14 = (pFVar6->LevelData).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<FVirtualShadowMapClipmap::FLevelData>)0x0) {
    FVar14 = (ForElementType<FVirtualShadowMapClipmap::FLevelData>)&pFVar6->LevelData;
  }
  uVar3 = *(undefined8 *)((longlong)FVar14 + 0x80 + lVar16);
  puVar2 = (uint *)((longlong)FVar14 + 0x88 + lVar16);
  uVar17 = *puVar2;
  uVar18 = puVar2[1];
  uVar19 = puVar2[2];
  uVar20 = puVar2[3];
  (this->PreShadowTranslation).field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000);
  uVar18 = uVar18 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar19 = uVar19 ^ _UNK_15066df78;
  uVar20 = uVar20 ^ _UNK_15066df7c;
  *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 8) =
       uVar17 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0xc) = uVar18;
  *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0x10) = uVar19;
  *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0x14) = uVar20;
  VectorMatrixMultiply(&local_2e8,&local_4a8,&local_528);
  GetViewFrustumBounds(&this->CasterOuterFrustum,&local_2e8,true);
  FConvexVolume::operator=(&this->ReceiverInnerFrustum,&this->CasterOuterFrustum);
  pTVar12 = CVarClipmapUseConservativeCulling.Ref;
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (pTVar12->ShadowedValue[1] == 0) {
    pFVar7 = param_1->Proxy;
    pcVar9 = *(code **)(pFVar7->_padding_ + 0xd8);
    if (((this->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVirtualShadowMapClipmap::GetMaxRadius((this->VirtualShadowMapClipmap).Object);
    pFVar8 = this->DependentView;
    local_568 = (undefined4)pFVar8->_padding_;
    uStack_564 = *(undefined4 *)((longlong)&pFVar8->_padding_ + 4);
    uStack_560 = (undefined4)pFVar8->_padding_;
    uStack_55c = *(undefined4 *)((longlong)&pFVar8->_padding_ + 4);
    local_558 = pFVar8->_padding_;
    pdVar15 = (double *)(*pcVar9)(pFVar7,local_548,pFVar8,&local_568);
    dVar11 = pdVar15[1];
    (this->ShadowBounds).Center.field0_0x0._s_0.X = *pdVar15;
    (this->ShadowBounds).Center.field0_0x0._s_0.Y = dVar11;
    dVar11 = pdVar15[3];
    (this->ShadowBounds).Center.field0_0x0._s_0.Z = pdVar15[2];
    (this->ShadowBounds).W = dVar11;
  }
  else {
    if (((this->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar6 = (this->VirtualShadowMapClipmap).Object;
    dVar11 = (pFVar6->BoundingSphere).Center.field0_0x0._s_0.Y;
    (this->ShadowBounds).Center.field0_0x0._s_0.X =
         (pFVar6->BoundingSphere).Center.field0_0x0._s_0.X;
    (this->ShadowBounds).Center.field0_0x0._s_0.Y = dVar11;
    dVar11 = (pFVar6->BoundingSphere).W;
    (this->ShadowBounds).Center.field0_0x0._s_0.Z =
         (pFVar6->BoundingSphere).Center.field0_0x0._s_0.Z;
    (this->ShadowBounds).W = dVar11;
    if ((pFVar6 == (FVirtualShadowMapClipmap *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FConvexVolume::FConvexVolume
              (&local_268,&((this->VirtualShadowMapClipmap).Object)->ViewFrustumBounds);
    FConvexVolume::operator=(&(this->CascadeSettings).ShadowBoundsAccurate,&local_268);
    if (local_268.PermutedPlanes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_268.PermutedPlanes.AllocatorInstance.SecondaryData);
    }
    if (local_268.Planes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_268.Planes.AllocatorInstance.SecondaryData);
    }
  }
  (this->ViewToClipInner).M[0][0] = local_528.M[0][0];
  (this->ViewToClipInner).M[0][1] = local_528.M[0][1];
  (this->CascadeSettings).ShadowSplitIndex = 1000;
  (this->ViewToClipOuter).M[0][0] = local_528.M[0][0];
  (this->ViewToClipOuter).M[0][1] = local_528.M[0][1];
  (this->ViewToClipInner).M[0][2] = local_528.M[0][2];
  (this->ViewToClipInner).M[0][3] = local_528.M[0][3];
  (this->ViewToClipOuter).M[0][2] = local_528.M[0][2];
  (this->ViewToClipOuter).M[0][3] = local_528.M[0][3];
  (this->ViewToClipInner).M[1][0] = local_528.M[1][0];
  (this->ViewToClipInner).M[1][1] = local_528.M[1][1];
  (this->ViewToClipOuter).M[1][0] = local_528.M[1][0];
  (this->ViewToClipOuter).M[1][1] = local_528.M[1][1];
  (this->ViewToClipInner).M[1][2] = local_528.M[1][2];
  (this->ViewToClipInner).M[1][3] = local_528.M[1][3];
  (this->ViewToClipOuter).M[1][2] = local_528.M[1][2];
  (this->ViewToClipOuter).M[1][3] = local_528.M[1][3];
  (this->ViewToClipInner).M[2][0] = local_528.M[2][0];
  (this->ViewToClipInner).M[2][1] = local_528.M[2][1];
  (this->ViewToClipOuter).M[2][0] = local_528.M[2][0];
  (this->ViewToClipOuter).M[2][1] = local_528.M[2][1];
  (this->ViewToClipInner).M[2][2] = local_528.M[2][2];
  (this->ViewToClipInner).M[2][3] = local_528.M[2][3];
  (this->ViewToClipInner).M[3][0] = local_528.M[3][0];
  (this->ViewToClipInner).M[3][1] = local_528.M[3][1];
  (this->ViewToClipInner).M[3][2] = local_528.M[3][2];
  (this->ViewToClipInner).M[3][3] = local_528.M[3][3];
  (this->ViewToClipOuter).M[2][2] = local_528.M[2][2];
  (this->ViewToClipOuter).M[2][3] = local_528.M[2][3];
  (this->ViewToClipOuter).M[3][0] = local_528.M[3][0];
  (this->ViewToClipOuter).M[3][1] = local_528.M[3][1];
  (this->ViewToClipOuter).M[3][2] = local_528.M[3][2];
  (this->ViewToClipOuter).M[3][3] = local_528.M[3][3];
  (this->TranslatedWorldToView).M[0][0] = local_4a8.M[0][0];
  (this->TranslatedWorldToView).M[0][1] = local_4a8.M[0][1];
  (this->TranslatedWorldToView).M[0][2] = local_4a8.M[0][2];
  (this->TranslatedWorldToView).M[0][3] = local_4a8.M[0][3];
  (this->TranslatedWorldToView).M[1][0] = local_4a8.M[1][0];
  (this->TranslatedWorldToView).M[1][1] = local_4a8.M[1][1];
  (this->TranslatedWorldToView).M[1][2] = local_4a8.M[1][2];
  (this->TranslatedWorldToView).M[1][3] = local_4a8.M[1][3];
  (this->TranslatedWorldToView).M[2][0] = local_4a8.M[2][0];
  (this->TranslatedWorldToView).M[2][1] = local_4a8.M[2][1];
  (this->TranslatedWorldToView).M[2][2] = local_4a8.M[2][2];
  (this->TranslatedWorldToView).M[2][3] = local_4a8.M[2][3];
  (this->TranslatedWorldToView).M[3][0] = local_4a8.M[3][0];
  (this->TranslatedWorldToView).M[3][1] = local_4a8.M[3][1];
  (this->TranslatedWorldToView).M[3][2] = local_4a8.M[3][2];
  (this->TranslatedWorldToView).M[3][3] = local_4a8.M[3][3];
  VectorMatrixMultiply(&local_3e8,&this->TranslatedWorldToView,&this->ViewToClipInner);
  (this->TranslatedWorldToClipInnerMatrix).M[0][0] = (float)local_3e8.M[0][0];
  (this->TranslatedWorldToClipInnerMatrix).M[0][1] = (float)local_3e8.M[0][1];
  (this->TranslatedWorldToClipInnerMatrix).M[0][2] = (float)local_3e8.M[0][2];
  (this->TranslatedWorldToClipInnerMatrix).M[0][3] = (float)local_3e8.M[0][3];
  (this->TranslatedWorldToClipInnerMatrix).M[1][0] = (float)local_3e8.M[1][0];
  (this->TranslatedWorldToClipInnerMatrix).M[1][1] = (float)local_3e8.M[1][1];
  (this->TranslatedWorldToClipInnerMatrix).M[1][2] = (float)local_3e8.M[1][2];
  (this->TranslatedWorldToClipInnerMatrix).M[1][3] = (float)local_3e8.M[1][3];
  (this->TranslatedWorldToClipInnerMatrix).M[2][0] = (float)local_3e8.M[2][0];
  (this->TranslatedWorldToClipInnerMatrix).M[2][1] = (float)local_3e8.M[2][1];
  (this->TranslatedWorldToClipInnerMatrix).M[2][2] = (float)local_3e8.M[2][2];
  (this->TranslatedWorldToClipInnerMatrix).M[2][3] = (float)local_3e8.M[2][3];
  (this->TranslatedWorldToClipInnerMatrix).M[3][0] = (float)local_3e8.M[3][0];
  (this->TranslatedWorldToClipInnerMatrix).M[3][1] = (float)local_3e8.M[3][1];
  (this->TranslatedWorldToClipInnerMatrix).M[3][2] = (float)local_3e8.M[3][2];
  (this->TranslatedWorldToClipInnerMatrix).M[3][3] = (float)local_3e8.M[3][3];
  VectorMatrixMultiply(&local_368,&this->TranslatedWorldToView,&this->ViewToClipOuter);
  (this->TranslatedWorldToClipOuterMatrix).M[0][0] = (float)local_368.M[0][0];
  (this->TranslatedWorldToClipOuterMatrix).M[0][1] = (float)local_368.M[0][1];
  (this->TranslatedWorldToClipOuterMatrix).M[0][2] = (float)local_368.M[0][2];
  (this->TranslatedWorldToClipOuterMatrix).M[0][3] = (float)local_368.M[0][3];
  (this->TranslatedWorldToClipOuterMatrix).M[1][0] = (float)local_368.M[1][0];
  (this->TranslatedWorldToClipOuterMatrix).M[1][1] = (float)local_368.M[1][1];
  (this->TranslatedWorldToClipOuterMatrix).M[1][2] = (float)local_368.M[1][2];
  (this->TranslatedWorldToClipOuterMatrix).M[1][3] = (float)local_368.M[1][3];
  (this->TranslatedWorldToClipOuterMatrix).M[2][0] = (float)local_368.M[2][0];
  (this->TranslatedWorldToClipOuterMatrix).M[2][1] = (float)local_368.M[2][1];
  (this->TranslatedWorldToClipOuterMatrix).M[2][2] = (float)local_368.M[2][2];
  (this->TranslatedWorldToClipOuterMatrix).M[2][3] = (float)local_368.M[2][3];
  (this->TranslatedWorldToClipOuterMatrix).M[3][0] = (float)local_368.M[3][0];
  (this->TranslatedWorldToClipOuterMatrix).M[3][1] = (float)local_368.M[3][1];
  (this->TranslatedWorldToClipOuterMatrix).M[3][2] = (float)local_368.M[3][2];
  (this->TranslatedWorldToClipOuterMatrix).M[3][3] = (float)local_368.M[3][3];
  return;
}

// SetupMeshDrawCommandsForProjectionStenciling @ 145643e50

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
FProjectedShadowInfo::SetupMeshDrawCommandsForProjectionStenciling
          (FProjectedShadowInfo *this,FSceneRenderer *param_1,FInstanceCullingManager *param_2)

{
  Type TVar1;
  FLightSceneProxy *pFVar2;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
  FMeshBatchAndRelevance *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::SetupMeshDrawCommandsForProjectionStenciling(FSceneRenderer_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_SetupMeshDrawCommandsForShadowDepth>
  FVar13;
  FSimpleMeshDrawCommandPass *this_00;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar14;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar15;
  IConsoleManager *pIVar16;
  longlong *plVar17;
  TConsoleVariableData<int> *pTVar18;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ForElementType<FSimpleMeshDrawCommandPass_*> FVar23;
  int *piVar24;
  FMeshBatch *pFVar25;
  longlong lVar26;
  longlong lVar27;
  FName FVar28;
  uint uVar29;
  FViewInfo *pFVar30;
  longlong lVar31;
  FViewInfo *this_01;
  uint local_1c4;
  uint local_1c0;
  FSimpleMeshDrawCommandPass *local_1b8;
  undefined8 local_1b0;
  FColor_u_0 local_1a8 [2];
  FName local_1a0;
  longlong local_198;
  longlong local_190;
  FName local_188;
  FName local_180;
  FInt32Range local_170;
  FViewInfo *local_160;
  longlong *local_158;
  undefined4 *local_150;
  longlong local_148;
  ForElementType<FSimpleMeshDrawCommandPass_*> local_140;
  int *local_138;
  FMeshPassProcessorRenderState local_128;
  FName local_e8;
  FName local_e0;
  FDepthPassMeshProcessor local_d8;
  
  piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar24 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::SetupMeshDrawCommandsForProjectionStenciling(FSceneRenderer_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_SetupMeshDrawCommandsForShadowDepth>
         )0x0) {
      pFVar12 = ::FName::FName(&local_e8,"STAT_SetupMeshDrawCommandsForShadowDepth");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth,
                 *pFVar12,L"STAT_SetupMeshDrawCommandsForShadowDepth","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth;
  if (StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::SetupMeshDrawCommandsForProjectionStenciling(FSceneRenderer_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_SetupMeshDrawCommandsForShadowDepth>
       )0x0) {
    pFVar12 = ::FName::FName(&local_e0,"STAT_SetupMeshDrawCommandsForShadowDepth");
    FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::SetupMeshDrawCommandsForProjectionStenciling(FSceneRenderer_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_SetupMeshDrawCommandsForShadowDepth>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth,*pFVar12,
                          L"STAT_SetupMeshDrawCommandsForShadowDepth","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar13;
  bVar7 = false;
  bVar6 = false;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_145643feb:
    bVar7 = bVar9;
    bVar6 = bVar8;
    bVar8 = false;
    local_188 = local_180;
    FVar28 = local_180;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_1a0.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                   ,0xa32);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145643feb;
    local_188 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar8 = true;
  }
  TVar1 = param_1->FeatureLevel;
  if ((*piVar24 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar16 = IConsoleManager::Get();
    plVar17 = (longlong *)
              (**(code **)((longlong)*pIVar16 + 0xc0))
                        (pIVar16,L"r.Shadow.EnableModulatedSelfShadow",1);
    pTVar18 = (TConsoleVariableData<int> *)0x0;
    if (plVar17 != (longlong *)0x0) {
      pTVar18 = (TConsoleVariableData<int> *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    EnableModulatedSelfShadowCVar = pTVar18;
    _Init_thread_footer(&::_TSS1);
  }
  pTVar18 = EnableModulatedSelfShadowCVar;
  if ((this->bSelfShadowOnly == 0) && ((int)TVar1 < 3)) {
    bVar9 = IsInParallelRenderingThread();
    if ((!bVar9) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((pTVar18->ShadowedValue[1] == 0) &&
        (pFVar2 = this->LightSceneInfo->Proxy, pFVar2 != (FLightSceneProxy *)0x0)) &&
       (pFVar2->bCastModulatedShadows != '\0')) {
      bVar9 = true;
      goto LAB_14564407d;
    }
  }
  bVar9 = false;
LAB_14564407d:
  if ((this->bPreShadow != 0 || this->bSelfShadowOnly != 0) || (bVar9)) {
    uVar21 = *(uint *)&param_1->field_0x18;
    FVar23 = (ForElementType<FSimpleMeshDrawCommandPass_*>)&this->ProjectionStencilingPasses;
    local_140 = FVar23;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    piVar24 = &(this->ProjectionStencilingPasses).ArrayMax;
    (this->ProjectionStencilingPasses).ArrayNum = 0;
    local_138 = piVar24;
    if (*piVar24 != uVar21) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSimpleMeshDrawCommandPass_*>_>
                (8,8,uVar21,(ForElementType<FSimpleMeshDrawCommandPass_*> *)FVar23,0,piVar24);
    }
    local_1c0 = 0;
    if (0 < *(int *)&param_1->field_0x18) {
      local_190 = 0;
      do {
        lVar27 = local_190;
        uVar21 = 0;
        if ((int)local_1c0 < *(int *)&param_1->field_0x18) {
          uVar21 = ~local_1c0 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar30 = (FViewInfo *)(*(longlong *)&param_1->field_0x10 + lVar27);
        local_160 = pFVar30;
        if ((pFVar30->bHasNoVisiblePrimitive == 0) &&
           ((*(bool *)((longlong)&pFVar30->_padding_ + 7) == false ||
            (*(EStereoscopicPass *)&pFVar30->_padding_ != eSSP_SECONDARY)))) {
          this_00 = ::operator_new(0x210);
          if (this_00 == (FSimpleMeshDrawCommandPass *)0x0) {
            local_1b8 = (FSimpleMeshDrawCommandPass *)0x0;
          }
          else {
            local_1b8 = FSimpleMeshDrawCommandPass::FSimpleMeshDrawCommandPass
                                  (this_00,(FSceneView *)pFVar30,param_2,true);
          }
          FVar15 = *(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar23 + 0x40);
          FVar14 = FVar23;
          if (FVar15 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
            FVar14 = FVar15;
          }
          if ((ulonglong)FVar14 <= &local_1b8) {
            FVar14 = FVar23;
            if (FVar15 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
              FVar14 = FVar15;
            }
            if ((&local_1b8 <
                 (FSimpleMeshDrawCommandPass **)((longlong)FVar14 + (longlong)*piVar24 * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar11 = *(int *)((longlong)FVar23 + 0x48);
          if (iVar11 == *piVar24) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSimpleMeshDrawCommandPass_*>_>
                               (0x808,(ForElementType<FSimpleMeshDrawCommandPass_*> *)FVar23,piVar24
                               );
          }
          *(int *)((longlong)FVar23 + 0x48) = iVar11 + 1;
          FVar15 = FVar23;
          if (*(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar23 + 0x40) !=
              (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
            FVar15 = *(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar23 + 0x40);
          }
          *(FSimpleMeshDrawCommandPass **)((longlong)FVar15 + (longlong)iVar11 * 8) = local_1b8;
          uVar20 = *(int *)((longlong)FVar23 + 0x48) - 1;
          uVar21 = 0;
          if ((int)uVar20 < *(int *)((longlong)FVar23 + 0x48)) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar15 = FVar23;
          if (*(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar23 + 0x40) !=
              (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
            FVar15 = *(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar23 + 0x40);
          }
          lVar27 = *(longlong *)
                    ((longlong)FVar15 + -8 + (longlong)*(int *)((longlong)FVar23 + 0x48) * 8);
          local_128.BlendState =
               TStaticStateRHI<TStaticBlendState<0,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference;
          local_128.DepthStencilState = (FRHIDepthStencilState *)0x0;
          local_128.DepthStencilAccess = DepthRead_StencilRead;
          local_128.ViewUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_128.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_128.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_128.NaniteUniformBuffer = (FRHIUniformBuffer *)0x0;
          local_128.StencilRef = 0;
          if (bVar9) {
            if ((this->bPreShadow != 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("bPreShadow == false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                                    ,0xa4b,L"The mobile renderer does not support preshadows."),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_128.StencilRef = 0;
            local_128.DepthStencilState =
                 TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,1,7,0,0,2,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI.Reference;
          }
          else {
            local_128.StencilRef = 1;
            local_128.DepthStencilState =
                 TStaticStateRHI<TStaticDepthStencilState<0,3,1,7,0,0,2,0,7,0,0,0,7,7>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI.Reference;
          }
          FDepthPassMeshProcessor::FDepthPassMeshProcessor
                    (&local_d8,DepthPass,*(FScene **)&param_1->field_0x8,
                     *(Type *)&(*(FScene **)&param_1->field_0x8)->field_0x8,(FSceneView *)pFVar30,
                     &local_128,false,DDM_AllOccluders,false,false,
                     (FMeshPassDrawListContext *)(lVar27 + 0x1d8),true,false);
          local_198 = 0;
          plVar17 = (longlong *)
                    ((longlong)((this->TranslatedWorldToView).M + -3) +
                    (((ulonglong)(*(uint *)&this->field_0x990 & 0x800) | 0x5e400) >> 7));
          local_1c4 = 0;
          local_148 = (longlong)(int)plVar17[1];
          local_158 = plVar17;
          if (0 < local_148) {
            do {
              lVar27 = local_198;
              uVar21 = 0;
              if ((int)local_1c4 < (int)plVar17[1]) {
                uVar21 = ~local_1c4 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar26 = *(longlong *)(*plVar17 + lVar27 * 8);
              uVar21 = *(uint *)(lVar26 + 0x188);
              if ((((int)uVar21 < 0) || ((pFVar30->PrimitiveVisibilityMap).NumBits <= (int)uVar21))
                 && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index>=0 && Index<NumBits",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                         ,0x5c6,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pTVar3 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)(pFVar30->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
              pTVar19 = &pFVar30->PrimitiveVisibilityMap;
              if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)0x0) {
                pTVar19 = pTVar3;
              }
              uVar20 = uVar21 & 0x1f;
              if ((int)uVar21 < 0) {
                uVar21 = uVar21 + 0x1f;
              }
              this_01 = pFVar30;
              if ((*(uint *)((pTVar19->AllocatorInstance).InlineData +
                            (longlong)((int)uVar21 >> 5) * 4) >> uVar20 & 1) != 0) {
                uVar21 = *(uint *)(lVar26 + 0x188);
                uVar20 = 0;
                if ((int)uVar21 < (pFVar30->PrimitiveViewRelevanceMap).ArrayNum) {
                  uVar20 = ~uVar21 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_150 = (undefined4 *)
                            &(pFVar30->PrimitiveViewRelevanceMap).AllocatorInstance.Data
                             [(int)uVar21].field_0x8;
                if ((ZPULL(*local_150,0,1) == 1 && ZPULL(*local_150,7,1) == 1) &&
                   (uVar21 = 0, 0 < *(int *)(lVar26 + 0x48))) {
                  lVar31 = 0;
                  do {
                    uVar20 = 0;
                    if ((int)uVar21 < *(int *)(lVar26 + 0x48)) {
                      uVar20 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pFVar25 = (FMeshBatch *)(*(longlong *)(lVar26 + 0x40) + lVar31);
                    uVar20 = *(uint *)(pFVar25[1].Elements.AllocatorInstance.InlineData + 8);
                    if ((((int)uVar20 < 0) ||
                        ((pFVar30->StaticMeshVisibilityMap).NumBits <= (int)uVar20)) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index>=0 && Index<NumBits",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                            ,0x5c6,L""), bVar10)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pTVar3 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                              *)(pFVar30->StaticMeshVisibilityMap).AllocatorInstance.SecondaryData.
                                Data;
                    pTVar19 = &pFVar30->StaticMeshVisibilityMap;
                    if (pTVar3 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                                   *)0x0) {
                      pTVar19 = pTVar3;
                    }
                    uVar29 = uVar20 & 0x1f;
                    if ((int)uVar20 < 0) {
                      uVar20 = uVar20 + 0x1f;
                    }
                    if ((*(uint *)((pTVar19->AllocatorInstance).InlineData +
                                  (longlong)((int)uVar20 >> 5) * 4) >> uVar29 & 1) != 0) {
                      FDepthPassMeshProcessor::AddMeshBatch
                                (&local_d8,pFVar25,0xffffffff,
                                 *(FPrimitiveSceneProxy **)
                                  (*(longlong *)pFVar25[1].Elements.AllocatorInstance.InlineData + 8
                                  ),-1);
                    }
                    uVar21 = uVar21 + 1;
                    lVar31 = lVar31 + 0xf0;
                    plVar17 = local_158;
                    lVar27 = local_198;
                    this_01 = local_160;
                  } while ((int)uVar21 < *(int *)(lVar26 + 0x48));
                }
                if (((byte)*local_150 & 0x82) == 0x82) {
                  FViewInfo::GetDynamicMeshElementRange
                            (this_01,&local_170,*(uint *)(lVar26 + 0x188));
                  if ((local_170._0_1_ == '\x02') &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Type != ERangeBoundTypes::Open",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                          ,99,L""), bVar10)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  uVar22 = (ulonglong)(int)local_170._4_4_;
                  lVar26 = uVar22 * 0x18;
                  while( true ) {
                    if ((local_170._8_1_ == '\x02') &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Type != ERangeBoundTypes::Open",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                            ,99,L""), bVar10)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    uVar21 = (uint)uVar22;
                    if ((int)local_170._12_4_ <= (int)uVar21) break;
                    uVar20 = 0;
                    if ((int)uVar21 < (this_01->DynamicMeshElements).ArrayNum) {
                      uVar20 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar20 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pFVar4 = (this_01->DynamicMeshElements).AllocatorInstance.Data;
                    FDepthPassMeshProcessor::AddMeshBatch
                              (&local_d8,*(FMeshBatch **)((longlong)&pFVar4->Mesh + lVar26),
                               0xffffffffffffffff,
                               *(FPrimitiveSceneProxy **)
                                ((longlong)&pFVar4->PrimitiveSceneProxy + lVar26),-1);
                    uVar22 = (ulonglong)(uVar21 + 1);
                    lVar26 = lVar26 + 0x18;
                  }
                }
              }
              local_1c4 = local_1c4 + 1;
              local_198 = lVar27 + 1;
              pFVar30 = this_01;
            } while (local_198 < local_148);
          }
          if (((this->bPreShadow == 0 && this->bSelfShadowOnly == 1) && (!bVar9)) &&
             (uVar21 = 0, 0 < (this->SubjectMeshCommandBuildRequests).ArrayNum)) {
            lVar27 = 0;
            do {
              uVar20 = 0;
              if ((int)uVar21 < (this->SubjectMeshCommandBuildRequests).ArrayNum) {
                uVar20 = ~uVar21 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar25 = *(FMeshBatch **)
                         (lVar27 + (longlong)
                                   (this->SubjectMeshCommandBuildRequests).AllocatorInstance.Data);
              FDepthPassMeshProcessor::AddMeshBatch
                        (&local_d8,pFVar25,0xffffffff,
                         *(FPrimitiveSceneProxy **)
                          (*(longlong *)pFVar25[1].Elements.AllocatorInstance.InlineData + 8),-1);
              uVar21 = uVar21 + 1;
              lVar27 = lVar27 + 8;
            } while ((int)uVar21 < (this->SubjectMeshCommandBuildRequests).ArrayNum);
          }
          local_d8._padding_ = (longlong)&___7IPSOCollector__6B_;
          FVar23 = local_140;
          piVar24 = local_138;
          lVar27 = local_190;
        }
        else {
          FVar15 = *(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar23 + 0x40);
          local_1b0 = 0;
          FVar14 = FVar23;
          if (FVar15 != (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
            FVar14 = FVar15;
          }
          if ((ulonglong)FVar14 <= &local_1b0) {
            if (FVar15 == (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
              FVar15 = FVar23;
            }
            if ((&local_1b0 < (undefined8 *)((longlong)FVar15 + (longlong)*piVar24 * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar11 = *(int *)((longlong)FVar23 + 0x48);
          if (iVar11 == *piVar24) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSimpleMeshDrawCommandPass_*>_>
                               (0x808,(ForElementType<FSimpleMeshDrawCommandPass_*> *)FVar23,piVar24
                               );
          }
          *(int *)((longlong)FVar23 + 0x48) = iVar11 + 1;
          FVar15 = *(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar23 + 0x40);
          if (*(ForElementType<FSimpleMeshDrawCommandPass_*> *)((longlong)FVar23 + 0x40) ==
              (ForElementType<FSimpleMeshDrawCommandPass_*>)0x0) {
            FVar15 = FVar23;
          }
          *(undefined8 *)((longlong)FVar15 + (longlong)iVar11 * 8) = local_1b0;
        }
        local_1c0 = local_1c0 + 1;
        local_190 = lVar27 + 0x2970;
        FVar28 = local_188;
      } while ((int)local_1c0 < *(int *)&param_1->field_0x18);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return;
}

// SetupMeshDrawCommandsForShadowDepth @ 145644aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

void __thiscall
FProjectedShadowInfo::SetupMeshDrawCommandsForShadowDepth
          (FProjectedShadowInfo *this,FSceneRenderer *param_1,FInstanceCullingManager *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  FMutex *this_00;
  undefined8 *puVar3;
  uchar *puVar4;
  atomic<unsigned_char> aVar5;
  int iVar6;
  int iVar7;
  FVirtualShadowMapClipmap *this_01;
  FParallelMeshDrawCommandPass **ppFVar8;
  code *pcVar9;
  TIntPoint<int>_u_0 TVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  FSceneRenderer *pFVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::SetupMeshDrawCommandsForShadowDepth(FSceneRenderer_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_SetupMeshDrawCommandsForShadowDepth>
  FVar22;
  FShadowDepthPassMeshProcessor *this_02;
  FVirtualShadowMapPerLightCacheEntry *pFVar23;
  FViewMatrices *pFVar24;
  ForElementType<int> FVar25;
  ForElementType<int> FVar26;
  FInstanceCullingContext *pFVar27;
  uint uVar28;
  EShadowDepthType EVar29;
  ForElementType<int> FVar30;
  FNameEntryId FVar31;
  int iVar32;
  size_t _Size;
  TArray<FParallelMeshDrawCommandPass_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar33;
  FName FVar34;
  longlong lVar35;
  uint uVar36;
  float fVar37;
  undefined1 auStackY_6418 [32];
  int local_6394;
  int local_6390 [2];
  uint local_6388;
  uint uStack_6384;
  FParallelMeshDrawCommandPass *local_6380;
  FName local_6378;
  FColor_u_0 local_6370 [2];
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_6368;
  FName local_6358;
  uint local_6350;
  uint uStack_634c;
  FInstanceCullingManager *local_6348;
  FShadowDepthPassMeshProcessor *local_6340;
  TRefCountPtr<IPooledRenderTarget> local_6338;
  uint local_6330;
  uint uStack_632c;
  uint local_6328;
  uint uStack_6324;
  FString local_6320;
  int local_6310;
  int iStack_630c;
  int local_6308;
  int iStack_6304;
  int local_6300;
  int iStack_62fc;
  int local_62f8;
  int iStack_62f4;
  FName local_62f0;
  FSceneRenderer *local_62e0;
  FString local_62d8;
  ForElementType<int> local_62c8;
  int iStack_62c0;
  undefined4 uStack_62bc;
  FName local_62b8;
  FName local_62b0;
  TArrayView<int_const_,int> local_62a8;
  FPackedViewParams local_6298;
  FPackedViewParams local_50d8;
  FInstanceCullingContext local_3f18;
  FPackedViewParams local_3de8;
  FPackedViewParams local_2c28;
  FViewMatrices local_1a68;
  FViewMatrices local_11e8;
  FViewMatrices local_968;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_6418;
  uVar36 = 2;
  local_6348 = param_2;
  local_62e0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::SetupMeshDrawCommandsForShadowDepth(FSceneRenderer_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_SetupMeshDrawCommandsForShadowDepth>
         )0x0) {
      pFVar21 = ::FName::FName(&local_62b0,"STAT_SetupMeshDrawCommandsForShadowDepth");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth,
                 *pFVar21,L"STAT_SetupMeshDrawCommandsForShadowDepth","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar22 = StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth;
  if (StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::SetupMeshDrawCommandsForShadowDepth(FSceneRenderer_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_SetupMeshDrawCommandsForShadowDepth>
       )0x0) {
    pFVar21 = ::FName::FName(&local_62b8,"STAT_SetupMeshDrawCommandsForShadowDepth");
    FVar22 = (FThreadSafeStaticStat<_public:_void___cdecl_FProjectedShadowInfo::SetupMeshDrawCommandsForShadowDepth(FSceneRenderer_&,FInstanceCullingManager_&)_::_2_::FStat_STAT_SetupMeshDrawCommandsForShadowDepth>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SetupMeshDrawCommandsForShadowDepth,*pFVar21,
                          L"STAT_SetupMeshDrawCommandsForShadowDepth","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar11 = false;
  bVar12 = false;
  local_62f0.ComparisonIndex.Value = 0;
  local_62f0.Number = 0;
  FVar34 = *(FName *)FVar22;
  bVar18 = false;
  bVar19 = false;
  FVar31 = FVar34.ComparisonIndex.Value;
  uVar28 = FVar34.Number;
  if ((FVar31.Value == 0) && (uVar28 == 0)) {
LAB_145644c9c:
    bVar12 = bVar19;
    bVar11 = bVar18;
    bVar18 = false;
    local_6378 = local_62f0;
    FVar34 = local_62f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_6370[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_6370[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar18 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_6358.ComparisonIndex.Value = FVar31.Value;
        local_6358.Number = uVar28;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_6358,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                   ,0x9c6);
        bVar11 = true;
        bVar12 = true;
        bVar18 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145644c9c;
    local_6388 = FVar31.Value;
    uStack_6384 = uVar28;
    local_6378 = FVar34;
    FThreadStats::AddMessage(FVar34,CycleScopeStart);
    bVar18 = true;
  }
  this_02 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x80,8);
  if (this_02 == (FShadowDepthPassMeshProcessor *)0x0) {
    local_6340 = (FShadowDepthPassMeshProcessor *)0x0;
  }
  else {
    EVar29 = this->bVSM;
    if (this->bDirectionalLight == 0) {
      if (this->bOnePassPointLightShadow == 0) {
        EVar29 = EVar29 | Point;
      }
      else {
        EVar29 = EVar29 | OnePassPoint;
      }
    }
    else {
      EVar29 = EVar29 | Directional;
    }
    local_6340 = FShadowDepthPassMeshProcessor::FShadowDepthPassMeshProcessor
                           (this_02,*(FScene **)&param_1->field_0x8,
                            *(Type *)&(*(FScene **)&param_1->field_0x8)->field_0x8,
                            (FSceneView *)this->ShadowDepthView,EVar29,
                            (FMeshPassDrawListContext *)0x0);
  }
  if (param_1->bDumpMeshDrawCommandInstancingStats != false) {
    local_6320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6320.Data.ArrayNum = 0;
    local_6320.Data.ArrayMax = 0;
    GetShadowTypeNameForDrawEvent(this,&local_6320);
    ::FString::ConcatCF(&local_62d8,L"ShadowDepth ",&local_6320);
    FParallelMeshDrawCommandPass::SetDumpInstancingStats(&this->ShadowDepthPass,&local_62d8);
    if (local_62d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_62d8.Data.AllocatorInstance.Data);
    }
    if (local_6320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6320.Data.AllocatorInstance.Data);
    }
  }
  (this->ViewIds).ArrayNum = 0;
  if ((this->ViewIds).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,0,&(this->ViewIds).AllocatorInstance,0,&(this->ViewIds).ArrayMax);
  }
  FViewMatrices::FViewMatrices(&local_6298.ViewMatrices);
  FViewMatrices::FViewMatrices(&local_6298.PrevViewMatrices);
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  fVar13 = __real_3f800000;
  local_6298.TargetMipCount = 1;
  fVar37 = 0.0;
  local_6350 = this->ResolutionX;
  uStack_634c = this->ResolutionY;
  TVar10._0_4_ = this->ResolutionX;
  TVar10._4_4_ = this->ResolutionY;
  local_6298.MinBoundsRadius = 0.0;
  local_6298.LODScaleFactor = __real_3f800000;
  local_6298.ViewLODDistanceFactor = __real_3f800000;
  local_6298.RangeBasedCullingDistance = 0.0;
  local_6298.CullingViewScreenMultipleSq = 0.0;
  local_6298.CullingViewMinRadiusTestFactorSq = 0.0;
  local_6298.MaxPixelsPerEdgeMultipler = __real_3f800000;
  local_6298.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_6298.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_6298.StreamingPriorityCategory = 0;
  local_6298.Flags = 2;
  local_6298.TargetLayerIndex = -1;
  local_6298.PrevTargetLayerIndex = -1;
  local_6298.TargetMipLevel = 0;
  local_6298.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_6298.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_6298.bUseCullingViewOverrides = false;
  local_6298.CullingViewOrigin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_6298.CullingViewOrigin.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_6298.InstanceOcclusionQueryMask = 0;
  local_6298.CullingViewOrigin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_6298.GlobalClippingPlane._padding_ = 0;
  local_6298.GlobalClippingPlane._padding_ = 0;
  local_6298.GlobalClippingPlane._padding_ = 0;
  local_6298.GlobalClippingPlane.W = 0.0;
  local_6298.LightingChannelMask = 7;
  local_6298.bUseLightingChannelMask = false;
  local_6298.bUseCurrentPreTranslationForHZB = false;
  local_6298.SceneRendererPrimaryViewId = -1;
  local_6298.DynamicDepthCullRange.field0_0x0._s_0.X = 0.0;
  local_6298.DynamicDepthCullRange.field0_0x0._s_0.Y = 3.4028235e+38;
  local_6298.RasterContextSize.field0_0x0 = TVar10;
  if (this->bPerObjectOpaqueShadow == 0) {
    if ((this->VirtualShadowMapPerLightCacheEntry).Object ==
        (FVirtualShadowMapPerLightCacheEntry *)0x0) {
      if (this->CacheMode == SDCM_StaticPrimitivesOnly) goto LAB_145644f29;
    }
    else {
      pFVar23 = TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>::operator->
                          (&this->VirtualShadowMapPerLightCacheEntry);
      if (pFVar23->bIsUncached == false) goto LAB_145644f29;
    }
    uVar36 = 0x22;
    local_6298.MinBoundsRadius = GMinScreenRadiusForShadowCaster;
    local_6298.Flags = 0x22;
    fVar37 = GMinScreenRadiusForShadowCaster;
  }
LAB_145644f29:
  if (this->bOnePassPointLightShadow == 0) {
    if ((this->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) {
      Nanite::FPackedViewParams::FPackedViewParams(&local_3de8,&local_6298);
      pFVar24 = GetShadowDepthRenderingViewMatrices(this,&local_968,-1,false);
      memcpy(&local_3de8,pFVar24,0x880);
      memcpy(&local_3de8.PrevViewMatrices,&local_3de8,0x880);
      uVar36 = this->BorderSize;
      local_6300 = uVar36 + this->X;
      iStack_62fc = this->Y + uVar36;
      local_62f8 = this->ResolutionX + uVar36 + this->X;
      iStack_62f4 = this->ResolutionY + this->Y + uVar36;
      local_3de8.ViewRect.field0_0x0._4_4_ = iStack_62fc;
      local_3de8.ViewRect.field0_0x0._0_4_ = local_6300;
      local_3de8.ViewRect.field0_0x0._12_4_ = iStack_62f4;
      local_3de8.ViewRect.field0_0x0._8_4_ = local_62f8;
      bVar19 = IsWholeSceneDirectionalShadow(this);
      if (bVar19) {
        local_3de8.Flags = local_3de8.Flags & 0xfffffffd;
      }
      Nanite::SetCullingViewOverrides(this->ShadowDepthView,&local_3de8);
      FVar30 = (ForElementType<int>)&this->ViewIds;
      local_6390[0] = FInstanceCullingManager::RegisterView(param_2,&local_3de8);
      FVar26 = (this->ViewIds).AllocatorInstance.SecondaryData;
      FVar25 = FVar26;
      if (FVar26 == (ForElementType<int>)0x0) {
        FVar25 = FVar30;
      }
      if ((ulonglong)FVar25 <= local_6390) {
        if (FVar26 == (ForElementType<int>)0x0) {
          FVar26 = FVar30;
        }
        if ((local_6390 < (int *)((longlong)FVar26 + (longlong)(this->ViewIds).ArrayMax * 4)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar20 = (this->ViewIds).ArrayNum;
      if (iVar20 == (this->ViewIds).ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,(ForElementType<int> *)FVar30,&(this->ViewIds).ArrayMax);
      }
      (this->ViewIds).ArrayNum = iVar20 + 1;
      FVar26 = (this->ViewIds).AllocatorInstance.SecondaryData;
      iVar32 = local_6390[0];
      if (FVar26 != (ForElementType<int>)0x0) {
        FVar30 = FVar26;
      }
    }
    else {
      Nanite::FPackedViewParams::FPackedViewParams(&local_2c28,&local_6298);
      if (((this->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_01 = (this->VirtualShadowMapClipmap).Object;
      if ((this_01 == (FVirtualShadowMapClipmap *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar24 = FVirtualShadowMapClipmap::GetViewMatrices
                          (this_01,&local_11e8,
                           (((this->VirtualShadowMapClipmap).Object)->LevelData).ArrayNum + -1);
      memcpy(&local_2c28,pFVar24,0x880);
      memcpy(&local_2c28.PrevViewMatrices,&local_2c28,0x880);
      uVar36 = this->BorderSize;
      local_6310 = uVar36 + this->X;
      iStack_630c = this->Y + uVar36;
      local_6308 = this->ResolutionX + uVar36 + this->X;
      iStack_6304 = this->ResolutionY + this->Y + uVar36;
      local_2c28.ViewRect.field0_0x0._4_4_ = iStack_630c;
      local_2c28.ViewRect.field0_0x0._0_4_ = local_6310;
      local_2c28.ViewRect.field0_0x0._12_4_ = iStack_6304;
      local_2c28.ViewRect.field0_0x0._8_4_ = local_6308;
      Nanite::SetCullingViewOverrides(this->ShadowDepthView,&local_2c28);
      FVar30 = (ForElementType<int>)&this->ViewIds;
      local_6394 = FInstanceCullingManager::RegisterView(param_2,&local_2c28);
      FVar26 = (this->ViewIds).AllocatorInstance.SecondaryData;
      FVar25 = FVar26;
      if (FVar26 == (ForElementType<int>)0x0) {
        FVar25 = FVar30;
      }
      if ((ulonglong)FVar25 <= &local_6394) {
        if (FVar26 == (ForElementType<int>)0x0) {
          FVar26 = FVar30;
        }
        if ((&local_6394 < (int *)((longlong)FVar26 + (longlong)(this->ViewIds).ArrayMax * 4)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar20 = (this->ViewIds).ArrayNum;
      if (iVar20 == (this->ViewIds).ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,(ForElementType<int> *)FVar30,&(this->ViewIds).ArrayMax);
      }
      (this->ViewIds).ArrayNum = iVar20 + 1;
      FVar26 = (this->ViewIds).AllocatorInstance.SecondaryData;
      iVar32 = local_6394;
      if (FVar26 != (ForElementType<int>)0x0) {
        FVar30 = FVar26;
      }
    }
    *(int *)((longlong)FVar30 + (longlong)iVar20 * 4) = iVar32;
  }
  else {
    iVar20 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                       (4,4,6,&(this->ViewIds).AllocatorInstance,&(this->ViewIds).ArrayNum,
                        &(this->ViewIds).ArrayMax);
    FVar30 = (this->ViewIds).AllocatorInstance.SecondaryData;
    if (FVar30 == (ForElementType<int>)0x0) {
      FVar30 = (ForElementType<int>)&this->ViewIds;
    }
    iVar32 = 0;
    lVar35 = 0;
    puVar3 = (undefined8 *)((longlong)FVar30 + (longlong)iVar20 * 4);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar4 = (uchar *)((longlong)FVar30 + 0x10) + (longlong)iVar20 * 4;
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4[4] = '\0';
    puVar4[5] = '\0';
    puVar4[6] = '\0';
    puVar4[7] = '\0';
    do {
      local_6330 = this->X;
      uStack_632c = this->Y;
      local_6328 = this->ResolutionX;
      uStack_6324 = this->ResolutionY;
      memcpy(&local_50d8,&local_6298,0x880);
      local_50d8.StreamingPriorityCategory = local_6298.StreamingPriorityCategory;
      local_50d8.TargetLayerIndex = local_6298.TargetLayerIndex;
      local_50d8.PrevTargetLayerIndex = local_6298.PrevTargetLayerIndex;
      local_50d8.TargetMipLevel = local_6298.TargetMipLevel;
      local_50d8.TargetMipCount = local_6298.TargetMipCount;
      local_50d8.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
           local_6298.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0;
      local_50d8.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 =
           local_6298.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0;
      local_50d8.bUseCullingViewOverrides = local_6298.bUseCullingViewOverrides;
      local_50d8.InstanceOcclusionQueryMask = local_6298.InstanceOcclusionQueryMask;
      local_50d8.LightingChannelMask = local_6298.LightingChannelMask;
      local_50d8.bUseLightingChannelMask = local_6298.bUseLightingChannelMask;
      local_50d8.bUseCurrentPreTranslationForHZB = local_6298.bUseCurrentPreTranslationForHZB;
      local_50d8.SceneRendererPrimaryViewId = local_6298.SceneRendererPrimaryViewId;
      local_50d8.DynamicDepthCullRange.field0_0x0._s_0.Y =
           local_6298.DynamicDepthCullRange.field0_0x0._s_0.Y;
      local_50d8.DynamicDepthCullRange.field0_0x0._s_0.X =
           local_6298.DynamicDepthCullRange.field0_0x0._s_0.X;
      local_50d8.LODScaleFactor = fVar13;
      local_50d8.ViewLODDistanceFactor = fVar13;
      local_50d8.RangeBasedCullingDistance = 0.0;
      local_50d8.MaxPixelsPerEdgeMultipler = local_6298.MaxPixelsPerEdgeMultipler;
      local_50d8.CullingViewScreenMultipleSq = 0.0;
      local_50d8.CullingViewMinRadiusTestFactorSq = 0.0;
      local_50d8.CullingViewOrigin.field0_0x0._s_0.X = (double)uVar14;
      local_50d8.CullingViewOrigin.field0_0x0._s_0.Y = (double)uVar15;
      local_50d8.CullingViewOrigin.field0_0x0._s_0.Z = (double)uVar16;
      local_50d8.GlobalClippingPlane._padding_ = 0;
      local_50d8.GlobalClippingPlane._padding_ = 0;
      local_50d8.GlobalClippingPlane._padding_ = 0;
      local_50d8.GlobalClippingPlane.W = 0.0;
      local_50d8.RasterContextSize.field0_0x0 = TVar10;
      local_50d8.MinBoundsRadius = fVar37;
      local_50d8.Flags = uVar36;
      pFVar24 = GetShadowDepthRenderingViewMatrices(this,&local_1a68,iVar32,false);
      memcpy(&local_50d8,pFVar24,0x880);
      memcpy(&local_50d8.PrevViewMatrices,&local_50d8,0x880);
      local_50d8.ViewRect.field0_0x0._4_4_ = uStack_632c;
      local_50d8.ViewRect.field0_0x0._0_4_ = local_6330;
      local_50d8.ViewRect.field0_0x0._12_4_ = uStack_6324;
      local_50d8.ViewRect.field0_0x0._8_4_ = local_6328;
      Nanite::SetCullingViewOverrides(this->ShadowDepthView,&local_50d8);
      local_6388 = FInstanceCullingManager::RegisterView(local_6348,&local_50d8);
      if (((this->ViewIds).ArrayNum <= iVar32) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar30 = (this->ViewIds).AllocatorInstance.SecondaryData;
      FVar26 = (ForElementType<int>)&this->ViewIds;
      if (FVar30 != (ForElementType<int>)0x0) {
        FVar26 = FVar30;
      }
      iVar32 = iVar32 + 1;
      *(uint *)((longlong)FVar26 + lVar35) = local_6388;
      lVar35 = lVar35 + 4;
      FVar34 = local_6378;
    } while (iVar32 < 6);
  }
  pFVar23 = (this->VirtualShadowMapPerLightCacheEntry).Object;
  if ((this->bOnePassPointLightShadow == 0) ||
     (pFVar23 != (FVirtualShadowMapPerLightCacheEntry *)0x0)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  local_6368.AllocatorInstance.Data = (EMeshDrawCommandCullingPayloadFlags *)0x0;
  local_6368.ArrayNum = (this->SubjectMeshCommandBuildFlags).ArrayNum;
  _Size = (size_t)local_6368.ArrayNum;
  iVar20 = 1;
  if (bVar19) {
    iVar20 = 6;
  }
  local_6378 = (FName)(this->SubjectMeshCommandBuildFlags).AllocatorInstance.Data;
  iVar32 = this->NumSubjectMeshCommandBuildRequestElements;
  if (local_6368.ArrayNum == 0) {
    local_6368.ArrayMax = 0;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
              (1,1,local_6368.ArrayNum,0,&local_6368.AllocatorInstance,local_6368.ArrayNum,
               &local_6368.ArrayMax);
    memcpy(local_6368.AllocatorInstance.Data,(void *)local_6378,_Size);
  }
  iVar6 = this->NumDynamicSubjectMeshElements;
  local_62c8 = (this->ViewIds).AllocatorInstance.SecondaryData;
  iVar7 = (this->ViewIds).ArrayNum;
  local_6338.Reference = (IPooledRenderTarget *)0x0;
  if (local_62c8 == (ForElementType<int>)0x0) {
    local_62c8 = (ForElementType<int>)&this->ViewIds;
  }
  if ((iVar7 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar17 = local_62e0;
  local_62a8._12_4_ = uStack_62bc;
  local_62a8.ArrayNum = iVar7;
  local_62a8.DataPtr = (int *)local_62c8;
  iStack_62c0 = iVar7;
  pFVar27 = FInstanceCullingContext::FInstanceCullingContext
                      (&local_3f18,L"ShadowDepth",local_62e0->ShaderPlatform,local_6348,&local_62a8,
                       &local_6338,Normal,NoInstanceOrderPreservation,
                       (uint)(pFVar23 == (FVirtualShadowMapPerLightCacheEntry *)0x0));
  FParallelMeshDrawCommandPass::DispatchPassSetup
            (&this->ShadowDepthPass,*(FScene **)&pFVar17->field_0x8,this->ShadowDepthView,pFVar27,
             Num,DepthNop,(FMeshPassProcessor *)local_6340,&this->DynamicSubjectMeshElements,
             (TArray<FMeshPassMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              *)0x0,iVar20 * iVar6,&this->SubjectMeshCommandBuildRequests,&local_6368,
             iVar20 * iVar32,&this->ShadowDepthPassVisibleCommands,(FMeshPassProcessor *)0x0,
             (TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              *)0x0);
  FInstanceCullingContext::~FInstanceCullingContext(&local_3f18);
  if (local_6338.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_6338.Reference)->_padding_ + 0x38))();
  }
  this_00 = &pFVar17->DispatchedShadowDepthPassesMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  LOCK();
  bVar19 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar19) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar19) {
    UE::FMutex::LockSlow(this_00);
  }
  pTVar33 = &pFVar17->DispatchedShadowDepthPasses;
  local_6380 = &this->ShadowDepthPass;
  ppFVar8 = (pTVar33->AllocatorInstance).Data;
  if (((ppFVar8 <= &local_6380) &&
      (&local_6380 < ppFVar8 + (pFVar17->DispatchedShadowDepthPasses).ArrayMax)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar20 = (pFVar17->DispatchedShadowDepthPasses).ArrayNum;
  piVar1 = &(pFVar17->DispatchedShadowDepthPasses).ArrayMax;
  if (iVar20 == *piVar1) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FParallelMeshDrawCommandPass_*>_>
                       (0x808,&pTVar33->AllocatorInstance,piVar1);
  }
  (pFVar17->DispatchedShadowDepthPasses).ArrayNum = iVar20 + 1;
  (pTVar33->AllocatorInstance).Data[iVar20] = local_6380;
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar5 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
}

// SetupPerObjectProjection @ 145645a10

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FProjectedShadowInfo::SetupPerObjectProjection
          (FProjectedShadowInfo *this,FLightSceneInfo *param_1,FPrimitiveSceneInfo *param_2,
          FPerObjectProjectedShadowInitializer *param_3,bool param_4,uint param_5,uint param_6,
          uint param_7,float param_8,bool param_9)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  bool bVar25;
  undefined1 uVar26;
  FStaticShaderPlatform FVar27;
  ForElementType<UE::Math::TVector<double>_> FVar28;
  TMatrix<double> *pTVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  double dVar36;
  undefined8 uVar37;
  double dVar38;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  uint uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStackY_d98 [32];
  TVector2<double>_u_0 local_d38;
  double local_d28;
  double local_d20;
  double dStack_d18;
  double local_d10;
  TVector2<double>_u_0 local_d08;
  TVector<double>_u_0 local_cf8;
  TVector<double>_u_0 local_ce0;
  TVector<double>_u_0 local_cc8;
  double local_cb0;
  double local_ca8;
  double local_ca0;
  undefined1 local_c98;
  TMatrix<double> local_a88;
  TVector<double>_u_0 local_a08;
  double local_9f0;
  double local_9e8;
  double local_9e0;
  undefined1 local_9d8;
  TMatrix<double> local_9c8;
  TMatrix<double> local_948;
  TArray<UE::Math::TVector<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_8c8;
  TArray<FBoxEdge,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_> local_7f8;
  TMatrix<double> local_7b8;
  TMatrix<double> local_738;
  TMatrix<double> local_6b8;
  FLightSceneInfoCompact local_638;
  TMatrix<double> local_5f8;
  TMatrix<double> local_578;
  TMatrix<double> local_4f8;
  TMatrix<double> local_478;
  TMatrix<double> local_3f8;
  TMatrix<double> local_378;
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  TBox<double> local_278;
  TArray<UE::Math::TVector<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_240;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_d98;
  if ((param_2 == (FPrimitiveSceneInfo *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("InParentSceneInfo",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                          ,0x346,L""), bVar25)) {
    pcVar3 = (code *)swi(3);
    uVar26 = (*pcVar3)();
    return (bool)uVar26;
  }
  this->LightSceneInfo = param_1;
  FLightSceneInfoCompact::Init(&local_638,param_1);
  uVar31 = 0;
  (this->LightSceneInfoCompact).BoundingSphereVector.XY.m128d_f64[0] =
       local_638.BoundingSphereVector.XY.m128d_f64[0];
  (this->LightSceneInfoCompact).BoundingSphereVector.XY.m128d_f64[1] =
       local_638.BoundingSphereVector.XY.m128d_f64[1];
  this->ParentSceneInfo = param_2;
  (this->LightSceneInfoCompact).BoundingSphereVector.ZW.m128d_f64[0] =
       local_638.BoundingSphereVector.ZW.m128d_f64[0];
  (this->LightSceneInfoCompact).BoundingSphereVector.ZW.m128d_f64[1] =
       local_638.BoundingSphereVector.ZW.m128d_f64[1];
  *(undefined8 *)&(this->LightSceneInfoCompact).Color.field0_0x0 = local_638.Color.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(this->LightSceneInfoCompact).Color.field0_0x0 + 8) =
       local_638.Color.field0_0x0._8_8_;
  (this->LightSceneInfoCompact).LightSceneInfo = local_638.LightSceneInfo;
  *(undefined4 *)&(this->LightSceneInfoCompact).field_0x38 = local_638._56_4_;
  (this->LightSceneInfoCompact).MegaLightsShadowMethod =
       (TEnumAsByte<EMegaLightsShadowMethod::Type>)local_638.MegaLightsShadowMethod.Value;
  (this->LightSceneInfoCompact).CastRaytracedShadow =
       (TEnumAsByte<ECastRayTracedShadow::Type>)local_638.CastRaytracedShadow.Value;
  *(undefined2 *)&(this->LightSceneInfoCompact).field_0x3e = local_638._62_2_;
  dVar38 = *(double *)&param_3->field_0x8;
  (this->PreShadowTranslation).field0_0x0._s_0.X = *(double *)param_3;
  (this->PreShadowTranslation).field0_0x0._s_0.Y = dVar38;
  (this->PreShadowTranslation).field0_0x0._s_0.Z = *(double *)&param_3->field_0x10;
  dVar2 = *(double *)&param_3->field_0xb8;
  dVar36 = *(double *)&param_3->field_0x8;
  dVar38 = *(double *)&param_3->field_0xe0;
  dVar5 = *(double *)&param_3->field_0xc0 - *(double *)&param_3->field_0x10;
  (this->ShadowBounds).Center.field0_0x0._s_0.X =
       *(double *)&param_3->field_0xb0 - *(double *)param_3;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar2 - dVar36;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->ShadowBounds).Center.field0_0x0 + 8) = auVar4;
  (this->ShadowBounds).W = dVar38;
  this->BorderSize = param_7;
  this->MaxScreenPercent = param_8;
  this->ResolutionX = param_5;
  if (param_1->Proxy->LightType == '\0') {
    uVar31 = 0x10;
  }
  *(uint *)&this->field_0x990 = uVar31 | *(uint *)&this->field_0x990 & 0xffffffef;
  FVar27.Platform =
       FSceneInterface::GetShaderPlatform((FSceneInterface *)this->LightSceneInfo->Scene);
  if (((((param_2->Proxy->bCastCapsuleDirectShadow == '\0') || (param_4)) ||
       (GCapsuleDirectShadows == 0)) || (GCapsuleShadows == 0)) ||
     (((bVar25 = IsMobilePlatform(FVar27), bVar25 &&
       (bVar25 = IsMobileCapsuleShadowsEnabled(FVar27), !bVar25)) ||
      ((bVar25 = IsMobilePlatform(FVar27), bVar25 &&
       (bVar25 = IsMobileCapsuleDirectShadowsEnabled(FVar27), !bVar25)))))) {
    uVar31 = 0;
  }
  else {
    uVar31 = 0x400;
  }
  this->bCapsuleShadow = 0;
  uVar50 = *(uint *)&this->field_0x990;
  uVar30 = ((uint)param_4 << 3 | (uint)param_9) << 8;
  *(uint *)&this->field_0x990 = uVar30 | uVar31 | uVar50 & 0xfffff6ff;
  uVar33 = ((byte)param_2->Proxy->field_0x7f & 0xffffff80) << 5;
  *(uint *)&this->field_0x990 = uVar33 | uVar30 | uVar31 | uVar50 & 0xffffe6ff;
  uVar31 = ((byte)param_1->Proxy->field_0x1d8 & 0xffffff80) << 7 |
           uVar33 | uVar30 | uVar31 | uVar50 & 0xffffa6ff;
  *(uint *)&this->field_0x990 = uVar31;
  uVar31 = ((uint)(byte)param_1->Proxy->field_0x1d9 << 0xe ^ uVar31) & 0x8000 ^ uVar31;
  *(uint *)&this->field_0x990 = uVar31;
  uVar31 = ((uint)(byte)param_1->Proxy->field_0x1d9 << 0x13 ^ uVar31) & 0x80000 ^ uVar31;
  *(uint *)&this->field_0x990 = uVar31;
  if (((uVar31 >> 9 & 1) != 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bRayTracedDistanceField",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                          ,0x35a,L""), bVar25)) {
    pcVar3 = (code *)swi(3);
    uVar26 = (*pcVar3)();
    return (bool)uVar26;
  }
  uVar34 = 0;
  local_cc8._s_0.X = *(double *)&param_3->field_0xb0 - *(double *)&param_3->field_0xc8;
  local_cb0 = *(double *)&param_3->field_0xc8 + *(double *)&param_3->field_0xb0;
  local_cc8._s_0.Y = *(double *)&param_3->field_0xb8 - *(double *)&param_3->field_0xd0;
  local_ca8 = *(double *)&param_3->field_0xd0 + *(double *)&param_3->field_0xb8;
  local_cc8._s_0.Z = *(double *)&param_3->field_0xc0 - *(double *)&param_3->field_0xd8;
  local_ca0 = *(double *)&param_3->field_0xd8 + *(double *)&param_3->field_0xc0;
  local_240.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 8;
  local_7f8.AllocatorInstance.SecondaryData = (ForElementType<FBoxEdge>)0x0;
  local_7f8.ArrayNum = 0;
  local_7f8.ArrayMax = 0xc;
  local_c98 = 1;
  GetBoundingBoxVertices((TBox<double> *)&local_cc8._s_0,&local_240,&local_7f8);
  dVar5 = __real_3ee4f8b580000000;
  dVar38 = __real_3ff0000000000000;
  uVar51 = 0;
  uVar52 = 0;
  local_cf8._s_0.Z = 0.0;
  local_8c8.AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
  local_8c8.ArrayNum = 0;
  local_8c8.ArrayMax = 8;
  local_cf8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_cf8._s_0.Y = _UNK_150689518;
  uVar35 = uVar34;
  if (0 < local_240.ArrayNum) {
    do {
      uVar50 = (uint)uVar34;
      uVar31 = 0;
      if ((int)uVar50 < local_240.ArrayNum) {
        uVar31 = ~uVar50 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        uVar26 = (*pcVar3)();
        return (bool)uVar26;
      }
      FVar28 = (ForElementType<UE::Math::TVector<double>_>)&local_240;
      if (local_240.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar28 = local_240.AllocatorInstance.SecondaryData;
      }
      dVar7 = *(double *)(uVar35 + (longlong)FVar28);
      dVar8 = ((double *)(uVar35 + (longlong)FVar28))[1];
      dVar2 = *(double *)(uVar35 + 0x10 + (longlong)FVar28);
      dVar6 = dVar8 * *(double *)&param_3->field_0x40 + *(double *)&param_3->field_0x20 * dVar7 +
              dVar2 * *(double *)&param_3->field_0x60 + *(double *)&param_3->field_0x80 * dVar38;
      dVar36 = dVar6 * *(double *)&param_3->field_0x100 + *(double *)&param_3->field_0x108;
      if (dVar36 < dVar5) goto LAB_145646dc6;
      dVar36 = dVar38 / dVar36;
      FVar28 = (ForElementType<UE::Math::TVector<double>_>)&local_8c8;
      if (local_8c8.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar28 = local_8c8.AllocatorInstance.SecondaryData;
      }
      local_d20 = dVar6 * dVar36;
      dStack_d18 = (dVar8 * *(double *)&param_3->field_0x48 +
                    *(double *)&param_3->field_0x28 * dVar7 +
                    dVar2 * *(double *)&param_3->field_0x68 +
                   *(double *)&param_3->field_0x88 * dVar38) * dVar36;
      local_d10 = (dVar8 * *(double *)&param_3->field_0x50 + dVar7 * *(double *)&param_3->field_0x30
                   + dVar2 * *(double *)&param_3->field_0x70 +
                  dVar38 * *(double *)&param_3->field_0x90) * dVar36;
      if ((ulonglong)FVar28 <= &local_d20) {
        FVar28 = (ForElementType<UE::Math::TVector<double>_>)&local_8c8;
        if (local_8c8.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar28 = local_8c8.AllocatorInstance.SecondaryData;
        }
        if ((&local_d20 < (double *)((longlong)FVar28 + (longlong)local_8c8.ArrayMax * 0x18)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar3 = (code *)swi(3);
          uVar26 = (*pcVar3)();
          return (bool)uVar26;
        }
      }
      if (local_8c8.ArrayNum == local_8c8.ArrayMax) {
        local_8c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                       (0x818,&local_8c8.AllocatorInstance,&local_8c8.ArrayMax);
      }
      lVar32 = (longlong)local_8c8.ArrayNum;
      FVar28 = (ForElementType<UE::Math::TVector<double>_>)&local_8c8;
      if (local_8c8.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar28 = local_8c8.AllocatorInstance.SecondaryData;
      }
      local_8c8.ArrayNum = local_8c8.ArrayNum + 1;
      uVar34 = (ulonglong)(uVar50 + 1);
      uVar35 = uVar35 + 0x18;
      pdVar1 = (double *)((longlong)FVar28 + lVar32 * 0x18);
      *pdVar1 = local_d20;
      pdVar1[1] = dStack_d18;
      *(double *)((uchar *)((longlong)FVar28 + 0x10) + lVar32 * 0x18) = local_d10;
    } while ((int)(uVar50 + 1) < local_240.ArrayNum);
    uVar51 = SUB84(local_cf8._s_0.Z,0);
    uVar52 = (undefined4)((ulonglong)local_cf8._16_8_ >> 0x20);
  }
  bVar25 = GetBestShadowTransform
                     ((TVector<double> *)&local_cf8._s_0,&local_8c8,&local_7f8,
                      (TVector<double> *)&local_ce0._s_0,(TVector2<double> *)&local_d38._s_0,
                      (TVector2<double> *)&local_d08._s_0);
  dVar2 = _UNK_15061cbc8;
  dVar5 = ___xmm_3ff00000000000000000000000000000;
  if (bVar25) {
    dVar6 = local_ce0._s_0.Z * local_cf8._s_0.Y - local_ce0._s_0.Y * (double)CONCAT44(uVar52,uVar51)
    ;
    dVar7 = local_ce0._s_0.X * (double)CONCAT44(uVar52,uVar51) - local_ce0._s_0.Z * local_cf8._s_0.X
    ;
    dVar8 = local_ce0._s_0.Y * local_cf8._s_0.X - local_ce0._s_0.X * local_cf8._s_0.Y;
    dVar36 = dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8;
    local_5f8.M[0][1] = dVar6;
    local_5f8.M[1][1] = dVar7;
    local_5f8.M[2][1] = dVar8;
    if ((dVar36 != dVar38) &&
       (local_5f8.M[0][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       local_5f8.M[1][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       local_5f8.M[2][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar36)) {
      local_d28 = dVar38 / SQRT(dVar36);
      local_5f8.M[0][1] = dVar6 * local_d28;
      local_5f8.M[1][1] = dVar7 * local_d28;
      local_5f8.M[2][1] = dVar8 * local_d28;
    }
    local_5f8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_5f8.M[3][3] = _UNK_15061cbc8;
    local_5f8.M[0][0] = local_ce0._s_0.X;
    local_5f8.M[0][2] = local_cf8._s_0.X;
    local_5f8.M[0][3] = 0.0;
    local_5f8.M[1][0] = local_ce0._s_0.Y;
    local_5f8.M[1][2] = local_cf8._s_0.Y;
    local_5f8.M[1][3] = 0.0;
    local_5f8.M[2][0] = local_ce0._s_0.Z;
    local_5f8.M[2][2] = (double)CONCAT44(uVar52,uVar51);
    local_5f8.M[2][3] = 0.0;
    local_5f8.M[3][0] = 0.0;
    local_5f8.M[3][1] = 0.0;
    VectorMatrixMultiply(&local_578,(TMatrix<double> *)&param_3->field_0x20,&local_5f8);
    (this->TranslatedWorldToView).M[0][0] = local_578.M[0][0];
    (this->TranslatedWorldToView).M[0][1] = local_578.M[0][1];
    local_9d8 = 1;
    (this->TranslatedWorldToView).M[0][2] = local_578.M[0][2];
    (this->TranslatedWorldToView).M[0][3] = local_578.M[0][3];
    (this->TranslatedWorldToView).M[1][0] = local_578.M[1][0];
    (this->TranslatedWorldToView).M[1][1] = local_578.M[1][1];
    (this->TranslatedWorldToView).M[1][2] = local_578.M[1][2];
    (this->TranslatedWorldToView).M[1][3] = local_578.M[1][3];
    (this->TranslatedWorldToView).M[2][0] = local_578.M[2][0];
    (this->TranslatedWorldToView).M[2][1] = local_578.M[2][1];
    (this->TranslatedWorldToView).M[2][2] = local_578.M[2][2];
    (this->TranslatedWorldToView).M[2][3] = local_578.M[2][3];
    (this->TranslatedWorldToView).M[3][0] = local_578.M[3][0];
    (this->TranslatedWorldToView).M[3][1] = local_578.M[3][1];
    (this->TranslatedWorldToView).M[3][2] = local_578.M[3][2];
    (this->TranslatedWorldToView).M[3][3] = local_578.M[3][3];
    local_a08._s_0.X = *(double *)&param_3->field_0xb0 - *(double *)&param_3->field_0xc8;
    local_9f0 = *(double *)&param_3->field_0xc8 + *(double *)&param_3->field_0xb0;
    local_a08._s_0.Y = *(double *)&param_3->field_0xb8 - *(double *)&param_3->field_0xd0;
    local_9e8 = *(double *)&param_3->field_0xd0 + *(double *)&param_3->field_0xb8;
    local_a08._s_0.Z = *(double *)&param_3->field_0xc0 - *(double *)&param_3->field_0xd8;
    local_9e0 = *(double *)&param_3->field_0xd8 + *(double *)&param_3->field_0xc0;
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_a08._s_0,&local_278,&this->TranslatedWorldToView);
    uVar37 = (double)*(float *)&param_3->field_0x110;
    if ((double)*(float *)&param_3->field_0x110 <= local_278.Min.field0_0x0._s_0.Z) {
      uVar37 = local_278.Min.field0_0x0._s_0.Z;
    }
    fVar47 = (float)(double)uVar37;
    this->MinSubjectZ = fVar47;
    fVar48 = fVar47 + *(float *)&param_3->field_0x114;
    fVar47 = fVar47 + __real_3f800000;
    if (__real_54800000 <= fVar48) {
      fVar48 = __real_54800000;
    }
    if (fVar48 <= fVar47) {
      fVar48 = fVar47;
    }
    fVar46 = (float)local_278.Max.field0_0x0._s_0.Z;
    if ((float)local_278.Max.field0_0x0._s_0.Z <= fVar47) {
      fVar46 = fVar47;
    }
    this->MaxSubjectZ = fVar46;
    dVar36 = dVar38 / (local_d08._s_0.Y - local_d38._s_0.Y);
    uVar31 = (uint)((float)param_5 / (float)(dVar36 * (local_d08._s_0.X - local_d38._s_0.X)));
    if (uVar31 < param_6) {
      param_6 = uVar31;
    }
    uVar31 = 1;
    if (1 < param_6) {
      uVar31 = param_6;
    }
    uVar50 = this->ResolutionX;
    this->ResolutionY = uVar31;
    uVar33 = __xmm_80000000000000008000000000000000._4_4_;
    uVar30 = (uint)__xmm_80000000000000008000000000000000;
    if ((uVar50 == 0) || (uVar31 == 0)) {
LAB_145646dc6:
      bVar25 = false;
    }
    else {
      local_7b8.M[0][1] = 0.0;
      local_7b8.M[1][0] = 0.0;
      iVar15 = this->BorderSize * 2;
      local_a88.M[1][0] = 0.0;
      local_a88.M[1][2] = 0.0;
      local_a88.M[0][0] = dVar38 / (local_d08._s_0.X - local_d38._s_0.X);
      dVar6 = (local_d08._s_0.X + local_d38._s_0.X) * local_a88.M[0][0];
      local_7b8.M[0][2] = 0.0;
      local_7b8.M[0][3] = 0.0;
      local_7b8.M[0][0] = (double)((float)uVar50 / (float)(uVar50 + iVar15));
      dVar7 = (local_d08._s_0.Y + local_d38._s_0.Y) * dVar36;
      local_a88.M[2][0] =
           (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_a88.M[2][1] =
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_a88.M[2][2]._0_4_ = 0;
      local_a88.M[2][2]._4_4_ = 0;
      local_7b8.M[1][2] = 0.0;
      local_7b8.M[1][3] = 0.0;
      local_7b8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
      local_7b8.M[2][3] = _UNK_150689518;
      local_7b8.M[3][0] = 0.0;
      local_7b8.M[3][1] = 0.0;
      local_7b8.M[1][1] = (double)((float)uVar31 / (float)(uVar31 + iVar15));
      local_a88.M[0][0] = local_a88.M[0][0] + local_a88.M[0][0];
      local_a88.M[3][2] = dVar38;
      local_7b8.M[2][0] = 0.0;
      local_7b8.M[2][1] = 0.0;
      local_a88.M[1][1] = dVar36 + dVar36;
      local_7b8.M[3][2] = dVar5;
      local_7b8.M[3][3] = dVar2;
      local_a88.M[0][1] = 0.0;
      local_a88.M[0][2] = 0.0;
      local_a88.M[0][3] = *(double *)&param_3->field_0xf0;
      local_a88.M[1][3] = *(double *)&param_3->field_0xf8;
      local_a88.M[2][3]._0_4_ = (undefined4)*(undefined8 *)&param_3->field_0x100;
      local_a88.M[2][3]._4_4_ =
           (undefined4)((ulonglong)*(undefined8 *)&param_3->field_0x100 >> 0x20);
      local_a88.M[3][3] = *(double *)&param_3->field_0x108;
      local_a88.M[3][0] = 0.0;
      local_a88.M[3][1] = 0.0;
      VectorMatrixMultiply(&local_948,&local_a88,&local_7b8);
      pTVar29 = &this->ViewToClipInner;
      fVar47 = this->MaxSubjectZ;
      local_d38._s_0.X = (double)fVar47;
      uVar51 = (undefined4)((ulonglong)local_a88.M[3][2] >> 0x20);
      uVar52 = (undefined4)((ulonglong)local_a88.M[3][3] >> 0x20);
      if (this->bPreShadow == 0) {
        auVar11._4_8_ = extraout_XMM0_Qb;
        auVar11._0_4_ = local_a88.M[2][2]._4_4_;
        auVar41._0_8_ = auVar11._0_8_ << 0x20;
        auVar41._8_4_ = local_a88.M[2][3]._0_4_;
        auVar41._12_4_ = local_a88.M[2][3]._4_4_;
        dVar5 = (double)this->MinSubjectZ;
        local_6b8.M[1][2] = local_a88.M[1][2];
        local_6b8.M[1][3] = local_a88.M[1][3];
        local_d28 = dVar5 * auVar41._8_8_ + local_a88.M[3][3];
        local_d08._s_0.X = dVar38 / (double)(fVar47 - this->MinSubjectZ);
        pTVar29->M[0][0] = local_a88.M[0][0];
        (this->ViewToClipInner).M[0][1] = local_a88.M[0][1];
        (this->ViewToClipInner).M[0][2] = local_a88.M[0][2];
        (this->ViewToClipInner).M[0][3] = local_a88.M[0][3];
        (this->ViewToClipInner).M[1][0] = local_a88.M[1][0];
        (this->ViewToClipInner).M[1][1] = local_a88.M[1][1];
        auVar12._4_8_ = local_a88.M[1][1];
        auVar12._0_4_ = local_a88.M[2][2]._4_4_;
        auVar42._0_8_ = auVar12._0_8_ << 0x20;
        auVar42._8_4_ = local_a88.M[2][3]._0_4_;
        auVar42._12_4_ = local_a88.M[2][3]._4_4_;
        (this->ViewToClipInner).M[1][2] = local_a88.M[1][2];
        (this->ViewToClipInner).M[1][3] = local_a88.M[1][3];
        uVar31 = SUB84(local_d08._s_0.X * local_d28,0) ^ uVar30;
        uVar50 = (uint)((ulonglong)(local_d08._s_0.X * local_d28) >> 0x20) ^ uVar33;
        dVar38 = local_d38._s_0.X * (double)CONCAT44(uVar50,uVar31);
        (this->ViewToClipInner).M[2][0] = local_a88.M[2][0];
        (this->ViewToClipInner).M[2][1] = local_a88.M[2][1];
        (this->ViewToClipInner).M[2][2] = (double)CONCAT44(uVar50,uVar31);
        (this->ViewToClipInner).M[2][3] = auVar42._8_8_;
        local_6b8.M[2][0] = local_a88.M[2][0];
        local_6b8.M[2][1] = local_a88.M[2][1];
        auVar13._4_8_ = auVar42._8_8_;
        auVar13._0_4_ = uVar51;
        auVar43._0_8_ = auVar13._0_8_ << 0x20;
        auVar43._8_4_ = SUB84(local_a88.M[3][3],0);
        auVar43._12_4_ = uVar52;
        local_6b8.M[2][3]._0_4_ = local_a88.M[2][3]._0_4_;
        local_6b8.M[2][3]._4_4_ = local_a88.M[2][3]._4_4_;
        (this->ViewToClipOuter).M[0][0] = local_948.M[0][0];
        (this->ViewToClipOuter).M[0][1] = local_948.M[0][1];
        (this->ViewToClipOuter).M[0][2] = local_948.M[0][2];
        (this->ViewToClipOuter).M[0][3] = local_948.M[0][3];
        (this->ViewToClipOuter).M[1][0] = local_948.M[1][0];
        (this->ViewToClipOuter).M[1][1] = local_948.M[1][1];
        (this->ViewToClipOuter).M[1][2] = local_948.M[1][2];
        (this->ViewToClipOuter).M[1][3] = local_948.M[1][3];
        (this->ViewToClipOuter).M[2][0] = local_948.M[2][0];
        (this->ViewToClipOuter).M[2][1] = local_948.M[2][1];
        (this->ViewToClipInner).M[3][0] = local_a88.M[3][0];
        (this->ViewToClipInner).M[3][1] = local_a88.M[3][1];
        (this->ViewToClipInner).M[3][2] =
             (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^ uVar33,SUB84(dVar38,0) ^ uVar30);
        (this->ViewToClipInner).M[3][3] = auVar43._8_8_;
        auVar14._4_8_ = auVar43._8_8_;
        auVar14._0_4_ = local_948.M[2][2]._4_4_;
        auVar44._0_8_ = auVar14._0_8_ << 0x20;
        auVar44._8_4_ = local_948.M[2][3]._0_4_;
        auVar44._12_4_ = local_948.M[2][3]._4_4_;
        local_6b8.M[3][0] = local_a88.M[3][0];
        local_6b8.M[3][1] = local_a88.M[3][1];
        local_6b8.M[0][0] = local_a88.M[0][0];
        local_6b8.M[0][1] = local_a88.M[0][1];
        local_6b8.M[0][2] = local_a88.M[0][2];
        local_6b8.M[0][3] = local_a88.M[0][3];
        local_6b8.M[1][0] = local_a88.M[1][0];
        local_6b8.M[1][1] = local_a88.M[1][1];
        dVar38 = (dVar5 * auVar44._8_8_ + local_948.M[3][3]) * local_d08._s_0.X;
        uVar31 = SUB84(dVar38,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar50 = (uint)((ulonglong)dVar38 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        dVar38 = local_d38._s_0.X * (double)CONCAT44(uVar50,uVar31);
        *(uint *)((this->ViewToClipOuter).M[2] + 2) = uVar31;
        *(uint *)((longlong)(this->ViewToClipOuter).M[2] + 0x14) = uVar50;
        *(undefined4 *)((this->ViewToClipOuter).M[2] + 3) = local_948.M[2][3]._0_4_;
        *(undefined4 *)((longlong)(this->ViewToClipOuter).M[2] + 0x1c) = local_948.M[2][3]._4_4_;
        (this->ViewToClipOuter).M[3][0] = local_948.M[3][0];
        (this->ViewToClipOuter).M[3][1] = local_948.M[3][1];
        uVar31 = (uint)((ulonglong)dVar38 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        *(uint *)((this->ViewToClipOuter).M[3] + 2) =
             SUB84(dVar38,0) ^ (uint)__xmm_80000000000000008000000000000000;
        *(uint *)((longlong)(this->ViewToClipOuter).M[3] + 0x14) = uVar31;
        *(int *)((this->ViewToClipOuter).M[3] + 3) = local_948.M[3][3]._0_4_;
        *(int *)((longlong)(this->ViewToClipOuter).M[3] + 0x1c) = local_948.M[3][3]._4_4_;
        dVar38 = local_d28 / (double)(fVar48 - this->MinSubjectZ);
        uVar31 = SUB84(dVar38,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar50 = (uint)((ulonglong)dVar38 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        dVar38 = (double)fVar48 * (double)CONCAT44(uVar50,uVar31);
        local_6b8.M[2][2] = (double)CONCAT44(uVar50,uVar31);
        local_6b8.M[3][2]._4_4_ =
             (uint)((ulonglong)dVar38 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        local_6b8.M[3][2]._0_4_ = SUB84(dVar38,0) ^ (uint)__xmm_80000000000000008000000000000000;
        local_6b8.M[3][3] = local_a88.M[3][3];
        VectorMatrixMultiply(&local_478,&this->TranslatedWorldToView,&local_6b8);
        fVar47 = __real_3f800000;
        local_9c8.M[0][0] = local_478.M[0][0];
        local_9c8.M[0][1] = local_478.M[0][1];
        local_9c8.M[0][2] = local_478.M[0][2];
        local_9c8.M[0][3] = local_478.M[0][3];
        local_9c8.M[1][0] = local_478.M[1][0];
        local_9c8.M[1][1] = local_478.M[1][1];
        local_9c8.M[1][2] = local_478.M[1][2];
        local_9c8.M[1][3] = local_478.M[1][3];
        local_9c8.M[2][0] = local_478.M[2][0];
        local_9c8.M[2][1] = local_478.M[2][1];
        local_9c8.M[2][2] = local_478.M[2][2];
        local_9c8.M[2][3] = local_478.M[2][3];
        local_9c8.M[3][0] = local_478.M[3][0];
        local_9c8.M[3][1] = local_478.M[3][1];
        local_9c8.M[3][2] = local_478.M[3][2];
        local_9c8.M[3][3] = local_478.M[3][3];
        if (this->bDirectionalLight == 0) {
          fVar47 = this->MinSubjectZ;
        }
        else {
          fVar46 = this->MaxSubjectZ;
          if (fVar46 < fVar48) {
            fVar49 = fVar46 - this->MinSubjectZ;
            fVar45 = fVar48 - fVar46;
            if (fVar49 <= fVar48 - fVar46) {
              fVar45 = fVar49;
            }
            fVar46 = fVar45;
            if (fVar45 <= __real_358637bd) {
              fVar46 = __real_358637bd;
            }
            this->PerObjectShadowFadeStart = ((fVar48 - this->MinSubjectZ) - fVar45) / fVar49;
            this->InvPerObjectShadowFadeLength = fVar49 / fVar46;
          }
        }
      }
      else {
        fVar48 = *(float *)&param_3->field_0x110;
        auVar24._4_4_ = local_a88.M[2][2]._4_4_;
        auVar24._0_4_ = local_a88.M[2][2]._0_4_;
        auVar24._8_4_ = local_a88.M[2][3]._0_4_;
        auVar24._12_4_ = local_a88.M[2][3]._4_4_;
        pTVar29->M[0][0] = local_a88.M[0][0];
        (this->ViewToClipInner).M[0][1] = local_a88.M[0][1];
        (this->ViewToClipInner).M[0][2] = local_a88.M[0][2];
        (this->ViewToClipInner).M[0][3] = local_a88.M[0][3];
        (this->ViewToClipInner).M[1][0] = local_a88.M[1][0];
        (this->ViewToClipInner).M[1][1] = local_a88.M[1][1];
        (this->ViewToClipInner).M[1][2] = local_a88.M[1][2];
        (this->ViewToClipInner).M[1][3] = local_a88.M[1][3];
        (this->ViewToClipInner).M[2][0] = local_a88.M[2][0];
        *(undefined4 *)((this->ViewToClipInner).M[2] + 1) = local_a88.M[2][1]._0_4_;
        *(undefined4 *)((longlong)(this->ViewToClipInner).M[2] + 0xc) = local_a88.M[2][1]._4_4_;
        local_738.M[2][3] = auVar24._8_8_;
        dVar38 = ((double)fVar48 * local_738.M[2][3] + local_a88.M[3][3]) /
                 (double)(fVar47 - fVar48);
        uVar31 = SUB84(dVar38,0) ^ uVar30;
        uVar50 = (uint)((ulonglong)dVar38 >> 0x20) ^ uVar33;
        dVar38 = local_d38._s_0.X * (double)CONCAT44(uVar50,uVar31);
        *(uint *)((this->ViewToClipInner).M[2] + 2) = uVar31;
        *(uint *)((longlong)(this->ViewToClipInner).M[2] + 0x14) = uVar50;
        *(undefined4 *)((this->ViewToClipInner).M[2] + 3) = local_a88.M[2][3]._0_4_;
        *(undefined4 *)((longlong)(this->ViewToClipInner).M[2] + 0x1c) = local_a88.M[2][3]._4_4_;
        (this->ViewToClipInner).M[3][0] = local_a88.M[3][0];
        (this->ViewToClipInner).M[3][1] = local_a88.M[3][1];
        auVar9._4_8_ = local_a88.M[3][1];
        auVar9._0_4_ = uVar51;
        auVar39._0_8_ = auVar9._0_8_ << 0x20;
        auVar39._8_4_ = SUB84(local_a88.M[3][3],0);
        auVar39._12_4_ = uVar52;
        (this->ViewToClipInner).M[3][2] =
             (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) ^ uVar33,SUB84(dVar38,0) ^ uVar30);
        (this->ViewToClipInner).M[3][3] = auVar39._8_8_;
        fVar48 = *(float *)&param_3->field_0x110;
        auVar10._4_8_ = auVar39._8_8_;
        auVar10._0_4_ = local_948.M[2][2]._4_4_;
        auVar40._0_8_ = auVar10._0_8_ << 0x20;
        auVar40._8_4_ = local_948.M[2][3]._0_4_;
        auVar40._12_4_ = local_948.M[2][3]._4_4_;
        (this->ViewToClipOuter).M[0][0] = local_948.M[0][0];
        (this->ViewToClipOuter).M[0][1] = local_948.M[0][1];
        (this->ViewToClipOuter).M[0][2] = local_948.M[0][2];
        (this->ViewToClipOuter).M[0][3] = local_948.M[0][3];
        (this->ViewToClipOuter).M[1][0] = local_948.M[1][0];
        (this->ViewToClipOuter).M[1][1] = local_948.M[1][1];
        (this->ViewToClipOuter).M[1][2] = local_948.M[1][2];
        (this->ViewToClipOuter).M[1][3] = local_948.M[1][3];
        uVar50 = __xmm_80000000000000008000000000000000._4_4_;
        uVar31 = (uint)__xmm_80000000000000008000000000000000;
        fVar47 = this->MaxSubjectZ;
        (this->ViewToClipOuter).M[2][0] = local_948.M[2][0];
        (this->ViewToClipOuter).M[2][1] = local_948.M[2][1];
        dVar38 = ((double)fVar48 * auVar40._8_8_ + local_948.M[3][3]) / (double)(fVar47 - fVar48);
        local_738.M[0][0] = local_a88.M[0][0];
        local_738.M[0][1] = local_a88.M[0][1];
        uVar30 = SUB84(dVar38,0) ^ uVar31;
        uVar33 = (uint)((ulonglong)dVar38 >> 0x20) ^ uVar50;
        dVar38 = local_d38._s_0.X * (double)CONCAT44(uVar33,uVar30);
        local_738.M[0][2] = local_a88.M[0][2];
        local_738.M[0][3] = local_a88.M[0][3];
        *(uint *)((this->ViewToClipOuter).M[2] + 2) = uVar30;
        *(uint *)((longlong)(this->ViewToClipOuter).M[2] + 0x14) = uVar33;
        *(undefined4 *)((this->ViewToClipOuter).M[2] + 3) = local_948.M[2][3]._0_4_;
        *(undefined4 *)((longlong)(this->ViewToClipOuter).M[2] + 0x1c) = local_948.M[2][3]._4_4_;
        local_738.M[1][0] = local_a88.M[1][0];
        local_738.M[1][1] = local_a88.M[1][1];
        fVar48 = this->MinSubjectZ;
        (this->ViewToClipOuter).M[3][0] = local_948.M[3][0];
        (this->ViewToClipOuter).M[3][1] = local_948.M[3][1];
        *(uint *)((this->ViewToClipOuter).M[3] + 2) = SUB84(dVar38,0) ^ uVar31;
        *(uint *)((longlong)(this->ViewToClipOuter).M[3] + 0x14) =
             (uint)((ulonglong)dVar38 >> 0x20) ^ uVar50;
        *(int *)((this->ViewToClipOuter).M[3] + 3) = local_948.M[3][3]._0_4_;
        *(int *)((longlong)(this->ViewToClipOuter).M[3] + 0x1c) = local_948.M[3][3]._4_4_;
        local_738.M[1][2] = local_a88.M[1][2];
        local_738.M[1][3] = local_a88.M[1][3];
        local_738.M[2][0] = local_a88.M[2][0];
        local_738.M[2][1] = local_a88.M[2][1];
        local_738.M[3][0] = local_a88.M[3][0];
        local_738.M[3][1] = local_a88.M[3][1];
        dVar38 = ((double)fVar48 * local_738.M[2][3] + local_a88.M[3][3]) /
                 (double)(this->MaxSubjectZ - fVar48);
        local_738.M[2][2]._0_4_ = SUB84(dVar38,0) ^ uVar31;
        local_738.M[2][2]._4_4_ = (uint)((ulonglong)dVar38 >> 0x20) ^ uVar50;
        dVar38 = local_d38._s_0.X *
                 (double)CONCAT44(local_738.M[2][2]._4_4_,local_738.M[2][2]._0_4_);
        local_738.M[3][2]._4_4_ = (uint)((ulonglong)dVar38 >> 0x20) ^ uVar50;
        local_738.M[3][2]._0_4_ = SUB84(dVar38,0) ^ uVar31;
        local_738.M[3][3] = local_a88.M[3][3];
        VectorMatrixMultiply(&local_4f8,&this->TranslatedWorldToView,&local_738);
        local_9c8.M[0][0] = local_4f8.M[0][0];
        local_9c8.M[0][1] = local_4f8.M[0][1];
        local_9c8.M[0][2] = local_4f8.M[0][2];
        local_9c8.M[0][3] = local_4f8.M[0][3];
        local_9c8.M[1][0] = local_4f8.M[1][0];
        local_9c8.M[1][1] = local_4f8.M[1][1];
        local_9c8.M[1][2] = local_4f8.M[1][2];
        local_9c8.M[1][3] = local_4f8.M[1][3];
        local_9c8.M[2][0] = local_4f8.M[2][0];
        local_9c8.M[2][1] = local_4f8.M[2][1];
        local_9c8.M[2][2] = local_4f8.M[2][2];
        local_9c8.M[2][3] = local_4f8.M[2][3];
        local_9c8.M[3][0] = local_4f8.M[3][0];
        local_9c8.M[3][1] = local_4f8.M[3][1];
        local_9c8.M[3][2] = local_4f8.M[3][2];
        local_9c8.M[3][3] = local_4f8.M[3][3];
        fVar47 = __real_3f800000;
        if (this->bDirectionalLight == 0) {
          fVar47 = *(float *)&param_3->field_0x110;
        }
      }
      VectorMatrixMultiply(&local_3f8,&this->TranslatedWorldToView,pTVar29);
      (this->TranslatedWorldToClipInnerMatrix).M[0][0] = (float)local_3f8.M[0][0];
      (this->TranslatedWorldToClipInnerMatrix).M[0][1] = (float)local_3f8.M[0][1];
      (this->TranslatedWorldToClipInnerMatrix).M[0][2] = (float)local_3f8.M[0][2];
      (this->TranslatedWorldToClipInnerMatrix).M[0][3] = (float)local_3f8.M[0][3];
      (this->TranslatedWorldToClipInnerMatrix).M[1][0] = (float)local_3f8.M[1][0];
      (this->TranslatedWorldToClipInnerMatrix).M[1][1] = (float)local_3f8.M[1][1];
      (this->TranslatedWorldToClipInnerMatrix).M[1][2] = (float)local_3f8.M[1][2];
      (this->TranslatedWorldToClipInnerMatrix).M[1][3] = (float)local_3f8.M[1][3];
      (this->TranslatedWorldToClipInnerMatrix).M[2][0] = (float)local_3f8.M[2][0];
      (this->TranslatedWorldToClipInnerMatrix).M[2][1] = (float)local_3f8.M[2][1];
      (this->TranslatedWorldToClipInnerMatrix).M[2][2] = (float)local_3f8.M[2][2];
      (this->TranslatedWorldToClipInnerMatrix).M[2][3] = (float)local_3f8.M[2][3];
      (this->TranslatedWorldToClipInnerMatrix).M[3][0] = (float)local_3f8.M[3][0];
      (this->TranslatedWorldToClipInnerMatrix).M[3][1] = (float)local_3f8.M[3][1];
      (this->TranslatedWorldToClipInnerMatrix).M[3][2] = (float)local_3f8.M[3][2];
      (this->TranslatedWorldToClipInnerMatrix).M[3][3] = (float)local_3f8.M[3][3];
      VectorMatrixMultiply(&local_378,&this->TranslatedWorldToView,&this->ViewToClipOuter);
      (this->TranslatedWorldToClipOuterMatrix).M[0][0] = (float)local_378.M[0][0];
      (this->TranslatedWorldToClipOuterMatrix).M[0][1] = (float)local_378.M[0][1];
      (this->TranslatedWorldToClipOuterMatrix).M[0][2] = (float)local_378.M[0][2];
      (this->TranslatedWorldToClipOuterMatrix).M[0][3] = (float)local_378.M[0][3];
      (this->TranslatedWorldToClipOuterMatrix).M[1][0] = (float)local_378.M[1][0];
      (this->TranslatedWorldToClipOuterMatrix).M[1][1] = (float)local_378.M[1][1];
      (this->TranslatedWorldToClipOuterMatrix).M[1][2] = (float)local_378.M[1][2];
      (this->TranslatedWorldToClipOuterMatrix).M[1][3] = (float)local_378.M[1][3];
      (this->TranslatedWorldToClipOuterMatrix).M[2][0] = (float)local_378.M[2][0];
      (this->TranslatedWorldToClipOuterMatrix).M[2][1] = (float)local_378.M[2][1];
      (this->TranslatedWorldToClipOuterMatrix).M[2][2] = (float)local_378.M[2][2];
      (this->TranslatedWorldToClipOuterMatrix).M[2][3] = (float)local_378.M[2][3];
      (this->TranslatedWorldToClipOuterMatrix).M[3][0] = (float)local_378.M[3][0];
      (this->TranslatedWorldToClipOuterMatrix).M[3][1] = (float)local_378.M[3][1];
      (this->TranslatedWorldToClipOuterMatrix).M[3][2] = (float)local_378.M[3][2];
      (this->TranslatedWorldToClipOuterMatrix).M[3][3] = (float)local_378.M[3][3];
      this->InvMaxSubjectDepth = __real_3f800000 / fVar47;
      this->MinPreSubjectZ = *(float *)&param_3->field_0x110;
      dVar38 = (double)(this->TranslatedWorldToClipOuterMatrix).M[0][1];
      local_2e8 = (double)(this->TranslatedWorldToClipOuterMatrix).M[0][2];
      dStack_2e0 = (double)(this->TranslatedWorldToClipOuterMatrix).M[0][3];
      local_2f8._8_4_ = SUB84(dVar38,0);
      local_2f8._0_8_ = (double)(this->TranslatedWorldToClipOuterMatrix).M[0][0];
      local_2f8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      dVar38 = (double)(this->TranslatedWorldToClipOuterMatrix).M[1][1];
      local_2c8 = (double)(this->TranslatedWorldToClipOuterMatrix).M[1][2];
      dStack_2c0 = (double)(this->TranslatedWorldToClipOuterMatrix).M[1][3];
      local_2d8._8_4_ = SUB84(dVar38,0);
      local_2d8._0_8_ = (double)(this->TranslatedWorldToClipOuterMatrix).M[1][0];
      local_2d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      dVar38 = (double)(this->TranslatedWorldToClipOuterMatrix).M[2][1];
      local_2a8 = (double)(this->TranslatedWorldToClipOuterMatrix).M[2][2];
      dStack_2a0 = (double)(this->TranslatedWorldToClipOuterMatrix).M[2][3];
      local_2b8._8_4_ = SUB84(dVar38,0);
      local_2b8._0_8_ = (double)(this->TranslatedWorldToClipOuterMatrix).M[2][0];
      local_2b8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      dVar38 = (double)(this->TranslatedWorldToClipOuterMatrix).M[3][1];
      local_288 = (double)(this->TranslatedWorldToClipOuterMatrix).M[3][2];
      dStack_280 = (double)(this->TranslatedWorldToClipOuterMatrix).M[3][3];
      local_298._8_4_ = SUB84(dVar38,0);
      local_298._0_8_ = (double)(this->TranslatedWorldToClipOuterMatrix).M[3][0];
      local_298._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      GetViewFrustumBounds(&this->CasterOuterFrustum,(TMatrix<double> *)local_2f8,true);
      GetViewFrustumBounds(&this->ReceiverInnerFrustum,&local_9c8,true);
      pTVar29 = UE::Math::TMatrix<double>::InverseFast(&local_9c8,&local_168);
      dVar38 = pTVar29->M[1][0];
      dVar5 = pTVar29->M[1][1];
      dVar2 = pTVar29->M[1][2];
      dVar36 = pTVar29->M[1][3];
      dVar6 = pTVar29->M[2][0];
      dVar7 = pTVar29->M[2][1];
      dVar8 = pTVar29->M[2][2];
      dVar16 = pTVar29->M[2][3];
      dVar17 = pTVar29->M[3][2];
      dVar18 = pTVar29->M[3][3];
      dVar19 = pTVar29->M[3][0];
      dVar20 = pTVar29->M[3][1];
      dVar21 = pTVar29->M[0][2];
      dVar22 = pTVar29->M[0][3];
      dVar23 = pTVar29->M[0][1];
      (this->InvReceiverInnerMatrix).M[0][0] = (float)pTVar29->M[0][0];
      (this->InvReceiverInnerMatrix).M[0][1] = (float)dVar23;
      (this->InvReceiverInnerMatrix).M[0][2] = (float)dVar21;
      (this->InvReceiverInnerMatrix).M[0][3] = (float)dVar22;
      (this->InvReceiverInnerMatrix).M[1][0] = (float)dVar38;
      (this->InvReceiverInnerMatrix).M[1][1] = (float)dVar5;
      (this->InvReceiverInnerMatrix).M[1][2] = (float)dVar2;
      (this->InvReceiverInnerMatrix).M[1][3] = (float)dVar36;
      (this->InvReceiverInnerMatrix).M[2][0] = (float)dVar6;
      (this->InvReceiverInnerMatrix).M[2][1] = (float)dVar7;
      (this->InvReceiverInnerMatrix).M[2][2] = (float)dVar8;
      (this->InvReceiverInnerMatrix).M[2][3] = (float)dVar16;
      (this->InvReceiverInnerMatrix).M[3][0] = (float)dVar19;
      (this->InvReceiverInnerMatrix).M[3][1] = (float)dVar20;
      (this->InvReceiverInnerMatrix).M[3][2] = (float)dVar17;
      (this->InvReceiverInnerMatrix).M[3][3] = (float)dVar18;
      UpdateShaderDepthBias(this);
      bVar25 = true;
    }
  }
  else {
    bVar25 = false;
  }
  if (local_8c8.AllocatorInstance.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0)
  {
    FMemory::Free((void *)local_8c8.AllocatorInstance.SecondaryData);
  }
  if (local_7f8.AllocatorInstance.SecondaryData != (ForElementType<FBoxEdge>)0x0) {
    FMemory::Free((void *)local_7f8.AllocatorInstance.SecondaryData);
  }
  if (local_240.AllocatorInstance.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0)
  {
    FMemory::Free((void *)local_240.AllocatorInstance.SecondaryData);
  }
  return bVar25;
}

// SetupWholeSceneProjection @ 145646eb0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::SetupWholeSceneProjection
          (FProjectedShadowInfo *this,FLightSceneInfo *param_1,FViewInfo *param_2,
          FWholeSceneProjectedShadowInitializer *param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uint param_8)

{
  int *piVar1;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  FConvexVolume *pFVar4;
  undefined1 *puVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FLightSceneProxy *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<UE::Math::TPlane<double>_> FVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  uint uVar33;
  double dVar34;
  double dVar35;
  TConsoleVariableData<bool> *pTVar36;
  bool bVar37;
  byte bVar38;
  int iVar39;
  TMatrix<double> *pTVar40;
  double *pdVar41;
  TLookFromMatrix<double> *pTVar42;
  ForElementType<UE::Math::TPlane<double>_> FVar43;
  uint uVar44;
  longlong lVar45;
  longlong lVar46;
  TVector<double> *pTVar47;
  longlong lVar48;
  uint uVar49;
  uint uVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  undefined4 uVar60;
  undefined1 auStackY_d88 [32];
  double local_d18;
  double dStack_d10;
  double local_d08;
  double dStack_d00;
  TVector<double>_u_0 local_cf8;
  undefined1 local_ce0 [40];
  TMatrix<double> local_cb8;
  TMatrix<double> local_c38;
  TMatrix<double> local_bb8;
  TMatrix<double> local_b38;
  TMatrix<double> local_ab8;
  TMatrix<double> local_a38;
  TMatrix<double> local_9b8;
  TMatrix<double> local_938;
  TMatrix<double> local_8b8;
  TMatrix<double> local_838;
  FLightSceneInfoCompact local_7b8;
  TMatrix<double> local_778;
  TMatrix<double> local_6f8;
  TMatrix<double> local_678;
  TMatrix<double> local_5f8;
  TMatrix<double> local_578;
  TMatrix<double> local_4f8;
  TMatrix<double> local_478;
  TMatrix<double> local_3f8;
  TMatrix<double> local_378;
  TMatrix<double> local_2f8;
  TMatrix<double> local_278;
  TMatrix<double> local_1f8;
  TLookFromMatrix<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_d88;
  this->LightSceneInfo = param_1;
  FLightSceneInfoCompact::Init(&local_7b8,param_1);
  (this->LightSceneInfoCompact).BoundingSphereVector.XY.m128d_f64[0] =
       local_7b8.BoundingSphereVector.XY.m128d_f64[0];
  (this->LightSceneInfoCompact).BoundingSphereVector.XY.m128d_f64[1] =
       local_7b8.BoundingSphereVector.XY.m128d_f64[1];
  this->DependentView = param_2;
  (this->LightSceneInfoCompact).BoundingSphereVector.ZW.m128d_f64[0] =
       local_7b8.BoundingSphereVector.ZW.m128d_f64[0];
  (this->LightSceneInfoCompact).BoundingSphereVector.ZW.m128d_f64[1] =
       local_7b8.BoundingSphereVector.ZW.m128d_f64[1];
  *(undefined8 *)&(this->LightSceneInfoCompact).Color.field0_0x0 = local_7b8.Color.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(this->LightSceneInfoCompact).Color.field0_0x0 + 8) =
       local_7b8.Color.field0_0x0._8_8_;
  (this->LightSceneInfoCompact).LightSceneInfo = local_7b8.LightSceneInfo;
  *(undefined4 *)&(this->LightSceneInfoCompact).field_0x38 = local_7b8._56_4_;
  (this->LightSceneInfoCompact).MegaLightsShadowMethod =
       (TEnumAsByte<EMegaLightsShadowMethod::Type>)local_7b8.MegaLightsShadowMethod.Value;
  (this->LightSceneInfoCompact).CastRaytracedShadow =
       (TEnumAsByte<ECastRayTracedShadow::Type>)local_7b8.CastRaytracedShadow.Value;
  *(undefined2 *)&(this->LightSceneInfoCompact).field_0x3e = local_7b8._62_2_;
  dVar19 = *(double *)&param_3->field_0x8;
  (this->PreShadowTranslation).field0_0x0._s_0.X = *(double *)param_3;
  (this->PreShadowTranslation).field0_0x0._s_0.Y = dVar19;
  (this->PreShadowTranslation).field0_0x0._s_0.Z = *(double *)&param_3->field_0x10;
  FShadowCascadeSettings::operator=(&this->CascadeSettings,&param_3->CascadeSettings);
  lVar48 = 0;
  uVar44 = 0;
  this->ResolutionX = param_4;
  this->ResolutionY = param_5;
  if (param_1->Proxy->LightType == '\0') {
    uVar44 = 0x10;
  }
  uVar44 = uVar44 | *(uint *)&this->field_0x990 & 0xffffffef;
  *(uint *)&this->field_0x990 = uVar44;
  uVar44 = ((uint)param_3->bOnePassPointLightShadow << 5 ^ uVar44) & 0x20 ^ uVar44;
  *(uint *)&this->field_0x990 = uVar44;
  uVar44 = ((uint)param_3->bRayTracedDistanceField << 9 ^ uVar44) & 0x200 ^ uVar44;
  *(uint *)&this->field_0x990 = uVar44 | 0x80;
  uVar44 = ((byte)param_1->Proxy->field_0x1d8 & 0xffffff80) << 7 | uVar44 & 0xffffbfff | 0x80;
  *(uint *)&this->field_0x990 = uVar44;
  uVar44 = ((uint)(byte)param_1->Proxy->field_0x1d9 << 0xe ^ uVar44) & 0x8000 ^ uVar44;
  *(uint *)&this->field_0x990 = uVar44;
  dVar35 = _UNK_150689518;
  dVar34 = ___xmm_00000000000000003ff0000000000000;
  dVar32 = _UNK_15061cbc8;
  dVar31 = ___xmm_3ff00000000000000000000000000000;
  bVar38 = param_1->Proxy->field_0x1d9;
  dVar19 = 0.0;
  this->BorderSize = param_8;
  *(uint *)&this->field_0x990 = ((uint)bVar38 << 0x13 ^ uVar44) & 0x80000 ^ uVar44;
  local_938.M[0][1] = 0.0;
  local_938.M[1][0] = 0.0;
  local_bb8.M[0][1] = 0.0;
  local_bb8.M[1][0] = 0.0;
  local_938.M[0][0] = (double)((float)param_4 / (float)(param_8 * 2 + param_4));
  local_938.M[0][2] = 0.0;
  local_938.M[0][3] = 0.0;
  local_938.M[2][2] = dVar34;
  local_938.M[2][3] = dVar35;
  local_938.M[3][2] = dVar31;
  local_938.M[3][3] = dVar32;
  local_bb8.M[2][2] = dVar34;
  local_bb8.M[2][3] = dVar35;
  local_938.M[1][2] = 0.0;
  local_938.M[1][3] = 0.0;
  local_938.M[3][0] = 0.0;
  local_938.M[3][1] = 0.0;
  local_bb8.M[0][0] = *(double *)&param_3->field_0xa0;
  local_938.M[1][1] = (double)((float)param_5 / (float)(param_8 * 2 + param_5));
  local_bb8.M[1][1] = *(double *)&param_3->field_0xa8;
  local_938.M[2][0] = 0.0;
  local_938.M[2][1] = 0.0;
  local_bb8.M[0][2] = 0.0;
  local_bb8.M[0][3] = 0.0;
  local_bb8.M[1][2] = 0.0;
  local_bb8.M[1][3] = 0.0;
  local_bb8.M[2][0] = 0.0;
  local_bb8.M[2][1] = 0.0;
  local_bb8.M[3][0] = 0.0;
  local_bb8.M[3][1] = 0.0;
  local_bb8.M[3][2] = dVar31;
  local_bb8.M[3][3] = dVar32;
  VectorMatrixMultiply(&local_378,&local_938,&local_bb8);
  if ((((*(double *)&param_3->field_0x80 != 0.0) || (*(double *)&param_3->field_0x88 != 0.0)) ||
      (*(double *)&param_3->field_0x90 != 0.0)) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("Initializer.WorldToLight.M[3][0] == 0.0f && Initializer.WorldToLight.M[3][1] == 0.0f && Initializer.WorldToLight.M[3][2] == 0.0f"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                          ,0x3ef,L"WorldToLight has translation"), bVar37)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_778.M[2][0] = ___xmm_0000000000000000bff0000000000000;
  local_778.M[2][1] = _UNK_15076ad98;
  local_778.M[0][0] = 0.0;
  local_778.M[0][1] = 0.0;
  local_778.M[3][0] = 0.0;
  local_778.M[3][1] = 0.0;
  local_778.M[0][2] = dVar34;
  local_778.M[0][3] = dVar35;
  local_778.M[1][0] = dVar31;
  local_778.M[1][1] = dVar32;
  local_778.M[1][2] = 0.0;
  local_778.M[1][3] = 0.0;
  local_778.M[2][2] = 0.0;
  local_778.M[2][3] = 0.0;
  local_778.M[3][2] = dVar31;
  local_778.M[3][3] = dVar32;
  VectorMatrixMultiply(&local_6f8,(TMatrix<double> *)&param_3->field_0x20,&local_778);
  dVar20 = __real_3ff0000000000000;
  uVar60 = SUB84(__real_3ff0000000000000,0);
  uVar30 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  (this->TranslatedWorldToView).M[0][0] = local_6f8.M[0][0];
  (this->TranslatedWorldToView).M[0][1] = local_6f8.M[0][1];
  (this->TranslatedWorldToView).M[0][2] = local_6f8.M[0][2];
  (this->TranslatedWorldToView).M[0][3] = local_6f8.M[0][3];
  (this->TranslatedWorldToView).M[1][0] = local_6f8.M[1][0];
  (this->TranslatedWorldToView).M[1][1] = local_6f8.M[1][1];
  (this->TranslatedWorldToView).M[1][2] = local_6f8.M[1][2];
  (this->TranslatedWorldToView).M[1][3] = local_6f8.M[1][3];
  (this->TranslatedWorldToView).M[2][0] = local_6f8.M[2][0];
  (this->TranslatedWorldToView).M[2][1] = local_6f8.M[2][1];
  (this->TranslatedWorldToView).M[2][2] = local_6f8.M[2][2];
  (this->TranslatedWorldToView).M[2][3] = local_6f8.M[2][3];
  (this->TranslatedWorldToView).M[3][0] = local_6f8.M[3][0];
  (this->TranslatedWorldToView).M[3][1] = local_6f8.M[3][1];
  (this->TranslatedWorldToView).M[3][2] = local_6f8.M[3][2];
  (this->TranslatedWorldToView).M[3][3] = local_6f8.M[3][3];
  fVar55 = (float)(*(double *)&param_3->field_0xb8 * (this->TranslatedWorldToView).M[1][2] +
                   *(double *)&param_3->field_0xb0 * (this->TranslatedWorldToView).M[0][2] +
                   *(double *)&param_3->field_0xc0 * (this->TranslatedWorldToView).M[2][2] +
                   dVar20 * (this->TranslatedWorldToView).M[3][2] + *(double *)&param_3->field_0xe0)
  ;
  this->MaxSubjectZ = fVar55;
  dVar51 = (double)fVar55 - (*(double *)&param_3->field_0xe0 + *(double *)&param_3->field_0xe0);
  if (dVar51 <= (double)*(float *)&param_3->field_0x110) {
    dVar51 = (double)*(float *)&param_3->field_0x110;
  }
  this->MinSubjectZ = (float)dVar51;
  fVar6 = *(float *)&param_3->field_0x114;
  if (fVar55 <= *(float *)&param_3->field_0x114) {
    fVar6 = fVar55;
  }
  this->MaxSubjectZ = fVar6;
  VectorMatrixMultiply(&local_8b8,&this->TranslatedWorldToView,&local_bb8);
  dVar51 = __real_4020000000000000;
  uVar33 = __xmm_80000000000000008000000000000000._4_4_;
  uVar44 = (uint)__xmm_80000000000000008000000000000000;
  bVar38 = (byte)*(undefined4 *)&this->field_0x990;
  if (ZPULL(*(undefined4 *)&this->field_0x990,4,1) != 0) {
    fVar55 = this->MaxSubjectZ;
    if (this->MaxSubjectZ <= __real_459c4000) {
      fVar55 = __real_459c4000;
    }
    fVar6 = this->MinSubjectZ;
    if (__real_c59c4000 <= this->MinSubjectZ) {
      fVar6 = __real_c59c4000;
    }
    this->MaxSubjectZ = fVar55;
    this->MinSubjectZ = fVar6;
    uVar7 = *(undefined8 *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 8);
    uVar8 = *(undefined8 *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0x10);
    uVar49 = (uint)uVar7 ^ uVar44;
    uVar50 = (uint)((ulonglong)uVar7 >> 0x20) ^ uVar33;
    uVar56 = (uint)uVar8 ^ uVar44;
    uVar57 = (uint)((ulonglong)uVar8 >> 0x20) ^ uVar33;
    uVar7 = *(undefined8 *)&(this->PreShadowTranslation).field0_0x0;
    uVar58 = (uint)uVar7 ^ uVar44;
    uVar59 = (uint)((ulonglong)uVar7 >> 0x20) ^ uVar33;
    dVar14 = (double)CONCAT44(uVar57,uVar56);
    dVar15 = (double)CONCAT44(uVar59,uVar58);
    auVar52._8_4_ = uVar56;
    auVar52._0_8_ = dVar14;
    auVar52._12_4_ = uVar57;
    dVar18 = (double)CONCAT44(uVar50,uVar49);
    dVar16 = dVar18 * local_8b8.M[1][0] + dVar15 * local_8b8.M[0][0] + dVar14 * local_8b8.M[2][0] +
             dVar20 * local_8b8.M[3][0];
    dVar17 = (double)CONCAT44(uVar50,uVar49) * local_8b8.M[1][1] +
             (double)CONCAT44(uVar59,uVar58) * local_8b8.M[0][1] + auVar52._8_8_ * local_8b8.M[2][1]
             + dVar20 * local_8b8.M[3][1];
    dVar18 = dVar18 * local_8b8.M[1][2] + dVar15 * local_8b8.M[0][2] + dVar14 * local_8b8.M[2][2] +
             dVar20 * local_8b8.M[3][2];
    dVar14 = FGenericPlatformMath::Fmod(dVar16,dVar51 / (double)param_6);
    dVar51 = FGenericPlatformMath::Fmod(dVar17,dVar51 / (double)param_7);
    pTVar40 = UE::Math::TMatrix<double>::InverseFast(&local_8b8,&local_1f8);
    dVar17 = dVar17 - (double)(float)dVar51;
    dVar16 = dVar16 - (double)(float)dVar14;
    auVar53._8_4_ = SUB84(dVar18,0);
    auVar53._0_8_ = dVar18;
    auVar53._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar54._8_4_ = uVar60;
    auVar54._0_8_ = dVar20;
    auVar54._12_4_ = (int)uVar30;
    dVar14 = dVar17 * pTVar40->M[1][0] + dVar16 * pTVar40->M[0][0] + dVar18 * pTVar40->M[2][0] +
             dVar20 * pTVar40->M[3][0];
    dVar15 = dVar17 * pTVar40->M[1][1] + dVar16 * pTVar40->M[0][1] +
             auVar53._8_8_ * pTVar40->M[2][1] + auVar54._8_8_ * pTVar40->M[3][1];
    dVar51 = pTVar40->M[1][2] * dVar17 + pTVar40->M[0][2] * dVar16 + pTVar40->M[2][2] * dVar18 +
             pTVar40->M[3][2] * dVar20;
    (this->PreShadowTranslation).field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar33,SUB84(dVar14,0) ^ uVar44);
    (this->PreShadowTranslation).field0_0x0._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar33,SUB84(dVar15,0) ^ uVar44);
    (this->PreShadowTranslation).field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) ^ uVar33,SUB84(dVar51,0) ^ uVar44);
    bVar38 = (byte)*(undefined4 *)&this->field_0x990;
  }
  if (((this->CascadeSettings).ShadowSplitIndex < 0) || ((bVar38 & 0x10) == 0)) {
    uVar7 = *(undefined8 *)&(this->PreShadowTranslation).field0_0x0;
    uVar49 = *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 8);
    uVar50 = *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0xc);
    uVar56 = *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0x10);
    uVar57 = *(uint *)((longlong)&(this->PreShadowTranslation).field0_0x0 + 0x14);
    dVar51 = *(double *)&param_3->field_0xe0;
    (this->ShadowBounds).Center.field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar7 >> 0x20) ^ uVar33,(uint)uVar7 ^ uVar44);
    uVar50 = uVar50 ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar56 = uVar56 ^ _UNK_15066df78;
    uVar57 = uVar57 ^ _UNK_15066df7c;
    *(uint *)((longlong)&(this->ShadowBounds).Center.field0_0x0 + 8) =
         uVar49 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&(this->ShadowBounds).Center.field0_0x0 + 0xc) = uVar50;
    *(uint *)((longlong)&(this->ShadowBounds).Center.field0_0x0 + 0x10) = uVar56;
    *(uint *)((longlong)&(this->ShadowBounds).Center.field0_0x0 + 0x14) = uVar57;
    (this->ShadowBounds).W = dVar51;
  }
  else {
    pFVar9 = param_1->Proxy;
    pcVar13 = *(code **)(pFVar9->_padding_ + 0xd0);
    FLightSceneInfo::IsPrecomputedLightingValid(param_1);
    iVar39 = -1;
    if (this->bRayTracedDistanceField == 0) {
      iVar39 = (this->CascadeSettings).ShadowSplitIndex;
    }
    pdVar41 = (double *)(*pcVar13)(pFVar9,local_ce0,param_2,iVar39);
    dVar51 = pdVar41[1];
    (this->ShadowBounds).Center.field0_0x0._s_0.X = *pdVar41;
    (this->ShadowBounds).Center.field0_0x0._s_0.Y = dVar51;
    dVar51 = pdVar41[3];
    (this->ShadowBounds).Center.field0_0x0._s_0.Z = pdVar41[2];
    (this->ShadowBounds).W = dVar51;
  }
  if ((this->MaxSubjectZ <= this->MinSubjectZ) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxSubjectZ > MinSubjectZ",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                          ,0x429,L"MaxSubjectZ %f MinSubjectZ %f SubjectBounds.SphereRadius %f"),
     bVar37)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  dVar51 = (double)this->MinSubjectZ;
  local_c38.M[0][2] = 0.0;
  fVar55 = this->MinSubjectZ + *(float *)&param_3->field_0x114;
  this->MinPreSubjectZ = *(float *)&param_3->field_0x110;
  local_c38.M[2][3] = *(double *)&param_3->field_0x100;
  local_c38.M[3][3] = *(double *)&param_3->field_0x108;
  if (__real_54800000 <= fVar55) {
    fVar55 = __real_54800000;
  }
  local_c38.M[1][2] = 0.0;
  local_c38.M[3][2] = dVar20 / ((double)this->MaxSubjectZ - dVar51);
  local_c38.M[0][3] = *(double *)&param_3->field_0xf0;
  dVar14 = dVar51 * local_c38.M[2][3] + local_c38.M[3][3];
  local_c38.M[1][3] = *(double *)&param_3->field_0xf8;
  local_c38.M[0][0] = dVar34;
  local_c38.M[0][1] = dVar35;
  dVar51 = local_c38.M[3][2] * dVar14;
  local_c38.M[1][0] = dVar31;
  local_c38.M[1][1] = dVar32;
  local_c38.M[2][0] = 0.0;
  local_c38.M[2][1] = 0.0;
  local_c38.M[2][2] =
       (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) ^ uVar33,SUB84(dVar51,0) ^ uVar44);
  local_c38.M[3][2] = (double)this->MaxSubjectZ * dVar14 * local_c38.M[3][2];
  local_c38.M[3][0] = 0.0;
  local_c38.M[3][1] = 0.0;
  VectorMatrixMultiply(&local_678,&local_bb8,&local_c38);
  fVar6 = this->MaxSubjectZ;
  (this->ViewToClipInner).M[0][0] = local_678.M[0][0];
  (this->ViewToClipInner).M[0][1] = local_678.M[0][1];
  (this->ViewToClipInner).M[0][2] = local_678.M[0][2];
  (this->ViewToClipInner).M[0][3] = local_678.M[0][3];
  (this->ViewToClipInner).M[1][0] = local_678.M[1][0];
  (this->ViewToClipInner).M[1][1] = local_678.M[1][1];
  (this->ViewToClipInner).M[1][2] = local_678.M[1][2];
  (this->ViewToClipInner).M[1][3] = local_678.M[1][3];
  (this->ViewToClipInner).M[2][0] = local_678.M[2][0];
  (this->ViewToClipInner).M[2][1] = local_678.M[2][1];
  (this->ViewToClipInner).M[2][2] = local_678.M[2][2];
  (this->ViewToClipInner).M[2][3] = local_678.M[2][3];
  (this->ViewToClipInner).M[3][0] = local_678.M[3][0];
  (this->ViewToClipInner).M[3][1] = local_678.M[3][1];
  (this->ViewToClipInner).M[3][2] = local_678.M[3][2];
  (this->ViewToClipInner).M[3][3] = local_678.M[3][3];
  local_b38.M[2][3] = *(double *)&param_3->field_0x100;
  local_b38.M[3][3] = *(double *)&param_3->field_0x108;
  local_b38.M[0][2] = 0.0;
  local_b38.M[1][2] = 0.0;
  local_b38.M[0][0] = dVar34;
  local_b38.M[0][1] = dVar35;
  local_b38.M[1][0] = dVar31;
  local_b38.M[1][1] = dVar32;
  dVar14 = (double)this->MinSubjectZ * local_b38.M[2][3] + local_b38.M[3][3];
  local_b38.M[3][2] = dVar20 / ((double)fVar6 - (double)this->MinSubjectZ);
  local_b38.M[0][3] = *(double *)&param_3->field_0xf0;
  local_b38.M[1][3] = *(double *)&param_3->field_0xf8;
  dVar51 = local_b38.M[3][2] * dVar14;
  local_b38.M[3][2] = (double)fVar6 * dVar14 * local_b38.M[3][2];
  local_b38.M[2][2] =
       (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) ^ uVar33,SUB84(dVar51,0) ^ uVar44);
  local_b38.M[3][0] = 0.0;
  local_b38.M[3][1] = 0.0;
  local_b38.M[2][0] = 0.0;
  local_b38.M[2][1] = 0.0;
  VectorMatrixMultiply(&local_5f8,&local_378,&local_b38);
  (this->ViewToClipOuter).M[0][0] = local_5f8.M[0][0];
  (this->ViewToClipOuter).M[0][1] = local_5f8.M[0][1];
  (this->ViewToClipOuter).M[0][2] = local_5f8.M[0][2];
  (this->ViewToClipOuter).M[0][3] = local_5f8.M[0][3];
  (this->ViewToClipOuter).M[1][0] = local_5f8.M[1][0];
  (this->ViewToClipOuter).M[1][1] = local_5f8.M[1][1];
  (this->ViewToClipOuter).M[1][2] = local_5f8.M[1][2];
  (this->ViewToClipOuter).M[1][3] = local_5f8.M[1][3];
  (this->ViewToClipOuter).M[2][0] = local_5f8.M[2][0];
  (this->ViewToClipOuter).M[2][1] = local_5f8.M[2][1];
  (this->ViewToClipOuter).M[2][2] = local_5f8.M[2][2];
  (this->ViewToClipOuter).M[2][3] = local_5f8.M[2][3];
  (this->ViewToClipOuter).M[3][0] = local_5f8.M[3][0];
  (this->ViewToClipOuter).M[3][1] = local_5f8.M[3][1];
  (this->ViewToClipOuter).M[3][2] = local_5f8.M[3][2];
  (this->ViewToClipOuter).M[3][3] = local_5f8.M[3][3];
  VectorMatrixMultiply(&local_578,&this->TranslatedWorldToView,&this->ViewToClipInner);
  *(ulonglong *)(this->TranslatedWorldToClipInnerMatrix).M[0] =
       CONCAT44((float)local_578.M[0][1],(float)local_578.M[0][0]);
  *(ulonglong *)((this->TranslatedWorldToClipInnerMatrix).M[0] + 2) =
       CONCAT44((float)local_578.M[0][3],(float)local_578.M[0][2]);
  (this->TranslatedWorldToClipInnerMatrix).M[1][0] = (float)local_578.M[1][0];
  (this->TranslatedWorldToClipInnerMatrix).M[1][1] = (float)local_578.M[1][1];
  (this->TranslatedWorldToClipInnerMatrix).M[1][2] = (float)local_578.M[1][2];
  (this->TranslatedWorldToClipInnerMatrix).M[1][3] = (float)local_578.M[1][3];
  (this->TranslatedWorldToClipInnerMatrix).M[2][0] = (float)local_578.M[2][0];
  (this->TranslatedWorldToClipInnerMatrix).M[2][1] = (float)local_578.M[2][1];
  (this->TranslatedWorldToClipInnerMatrix).M[2][2] = (float)local_578.M[2][2];
  (this->TranslatedWorldToClipInnerMatrix).M[2][3] = (float)local_578.M[2][3];
  (this->TranslatedWorldToClipInnerMatrix).M[3][0] = (float)local_578.M[3][0];
  (this->TranslatedWorldToClipInnerMatrix).M[3][1] = (float)local_578.M[3][1];
  (this->TranslatedWorldToClipInnerMatrix).M[3][2] = (float)local_578.M[3][2];
  (this->TranslatedWorldToClipInnerMatrix).M[3][3] = (float)local_578.M[3][3];
  VectorMatrixMultiply(&local_4f8,&this->TranslatedWorldToView,&this->ViewToClipOuter);
  *(ulonglong *)(this->TranslatedWorldToClipOuterMatrix).M[0] =
       CONCAT44((float)local_4f8.M[0][1],(float)local_4f8.M[0][0]);
  *(ulonglong *)((this->TranslatedWorldToClipOuterMatrix).M[0] + 2) =
       CONCAT44((float)local_4f8.M[0][3],(float)local_4f8.M[0][2]);
  (this->TranslatedWorldToClipOuterMatrix).M[1][0] = (float)local_4f8.M[1][0];
  (this->TranslatedWorldToClipOuterMatrix).M[1][1] = (float)local_4f8.M[1][1];
  (this->TranslatedWorldToClipOuterMatrix).M[1][2] = (float)local_4f8.M[1][2];
  (this->TranslatedWorldToClipOuterMatrix).M[1][3] = (float)local_4f8.M[1][3];
  (this->TranslatedWorldToClipOuterMatrix).M[2][0] = (float)local_4f8.M[2][0];
  (this->TranslatedWorldToClipOuterMatrix).M[2][1] = (float)local_4f8.M[2][1];
  (this->TranslatedWorldToClipOuterMatrix).M[2][2] = (float)local_4f8.M[2][2];
  (this->TranslatedWorldToClipOuterMatrix).M[2][3] = (float)local_4f8.M[2][3];
  (this->TranslatedWorldToClipOuterMatrix).M[3][0] = (float)local_4f8.M[3][0];
  (this->TranslatedWorldToClipOuterMatrix).M[3][1] = (float)local_4f8.M[3][1];
  (this->TranslatedWorldToClipOuterMatrix).M[3][2] = (float)local_4f8.M[3][2];
  (this->TranslatedWorldToClipOuterMatrix).M[3][3] = (float)local_4f8.M[3][3];
  fVar6 = __real_3f800000;
  if (this->bDirectionalLight == 0) {
    fVar6 = this->MinSubjectZ;
  }
  this->InvMaxSubjectDepth = __real_3f800000 / fVar6;
  VectorMatrixMultiply(&local_2f8,&local_8b8,&local_938);
  local_ab8.M[2][3] = *(double *)&param_3->field_0x100;
  local_ab8.M[3][3] = *(double *)&param_3->field_0x108;
  local_ab8.M[0][2] = 0.0;
  local_ab8.M[1][2] = 0.0;
  local_ab8.M[3][2] = dVar20 / ((double)this->MaxSubjectZ - (double)*(float *)&param_3->field_0x110)
  ;
  local_ab8.M[0][3] = *(double *)&param_3->field_0xf0;
  dVar14 = (double)*(float *)&param_3->field_0x110 * local_ab8.M[2][3] + local_ab8.M[3][3];
  local_ab8.M[1][3] = *(double *)&param_3->field_0xf8;
  local_ab8.M[0][0] = dVar34;
  local_ab8.M[0][1] = dVar35;
  dVar51 = local_ab8.M[3][2] * dVar14;
  local_ab8.M[1][0] = dVar31;
  local_ab8.M[1][1] = dVar32;
  local_ab8.M[2][0] = 0.0;
  local_ab8.M[2][1] = 0.0;
  local_ab8.M[2][2] =
       (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) ^ uVar33,SUB84(dVar51,0) ^ uVar44);
  local_ab8.M[3][2] = (double)this->MaxSubjectZ * dVar14 * local_ab8.M[3][2];
  local_ab8.M[3][0] = 0.0;
  local_ab8.M[3][1] = 0.0;
  VectorMatrixMultiply(&local_278,&local_2f8,&local_ab8);
  local_a38.M[2][3] = *(double *)&param_3->field_0x100;
  local_a38.M[3][3] = *(double *)&param_3->field_0x108;
  local_a38.M[0][2] = 0.0;
  local_a38.M[1][2] = 0.0;
  local_a38.M[0][0] = dVar34;
  local_a38.M[0][1] = dVar35;
  local_a38.M[3][2] = dVar20 / ((double)fVar55 - (double)this->MinSubjectZ);
  local_a38.M[0][3] = *(double *)&param_3->field_0xf0;
  dVar14 = (double)this->MinSubjectZ * local_a38.M[2][3] + local_a38.M[3][3];
  local_a38.M[1][3] = *(double *)&param_3->field_0xf8;
  local_a38.M[1][0] = dVar31;
  local_a38.M[1][1] = dVar32;
  dVar51 = local_a38.M[3][2] * dVar14;
  local_a38.M[2][0] = 0.0;
  local_a38.M[2][1] = 0.0;
  local_a38.M[2][2] =
       (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) ^ uVar33,SUB84(dVar51,0) ^ uVar44);
  local_a38.M[3][2] = (double)fVar55 * dVar14 * local_a38.M[3][2];
  local_a38.M[3][0] = 0.0;
  local_a38.M[3][1] = 0.0;
  VectorMatrixMultiply(&local_3f8,&local_8b8,&local_a38);
  GetViewFrustumBounds(&this->CasterOuterFrustum,&local_278,true);
  GetViewFrustumBounds(&this->ReceiverInnerFrustum,&local_3f8,true);
  pTVar40 = UE::Math::TMatrix<double>::Inverse(&local_3f8,&local_cb8);
  dVar51 = pTVar40->M[1][2];
  dVar14 = pTVar40->M[1][3];
  dVar15 = pTVar40->M[1][0];
  dVar17 = pTVar40->M[1][1];
  dVar16 = pTVar40->M[2][2];
  dVar18 = pTVar40->M[2][3];
  dVar21 = pTVar40->M[2][0];
  dVar22 = pTVar40->M[2][1];
  dVar23 = pTVar40->M[3][2];
  dVar24 = pTVar40->M[3][3];
  dVar25 = pTVar40->M[3][0];
  dVar26 = pTVar40->M[3][1];
  dVar27 = pTVar40->M[0][2];
  dVar28 = pTVar40->M[0][3];
  dVar29 = pTVar40->M[0][1];
  (this->InvReceiverInnerMatrix).M[0][0] = (float)pTVar40->M[0][0];
  (this->InvReceiverInnerMatrix).M[0][1] = (float)dVar29;
  (this->InvReceiverInnerMatrix).M[0][2] = (float)dVar27;
  (this->InvReceiverInnerMatrix).M[0][3] = (float)dVar28;
  (this->InvReceiverInnerMatrix).M[1][0] = (float)dVar15;
  (this->InvReceiverInnerMatrix).M[1][1] = (float)dVar17;
  (this->InvReceiverInnerMatrix).M[1][2] = (float)dVar51;
  (this->InvReceiverInnerMatrix).M[1][3] = (float)dVar14;
  (this->InvReceiverInnerMatrix).M[2][0] = (float)dVar21;
  (this->InvReceiverInnerMatrix).M[2][1] = (float)dVar22;
  (this->InvReceiverInnerMatrix).M[2][2] = (float)dVar16;
  (this->InvReceiverInnerMatrix).M[2][3] = (float)dVar18;
  (this->InvReceiverInnerMatrix).M[3][0] = (float)dVar25;
  (this->InvReceiverInnerMatrix).M[3][1] = (float)dVar26;
  (this->InvReceiverInnerMatrix).M[3][2] = (float)dVar23;
  (this->InvReceiverInnerMatrix).M[3][3] = (float)dVar24;
  UpdateShaderDepthBias(this);
  if (param_3->bOnePassPointLightShadow != false) {
    pFVar9 = this->LightSceneInfo->Proxy;
    fVar55 = (float)(**(code **)(pFVar9->_padding_ + 0x18))();
    dVar51 = (double)fVar55;
    if (dVar51 != dVar20) {
      dVar19 = dVar20 / (dVar20 - dVar51);
      dVar20 = dVar51 / (dVar51 - dVar20);
    }
    (this->OnePassShadowFaceProjectionMatrix).M[0][0] = 0.9999999562886109;
    (this->OnePassShadowFaceProjectionMatrix).M[0][1] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[0][2] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[0][3] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[1][0] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[1][1] = 0.9999999562886109;
    (this->OnePassShadowFaceProjectionMatrix).M[1][2] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[1][3] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[2][0] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[2][1] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[2][2] = dVar19;
    (this->OnePassShadowFaceProjectionMatrix).M[2][3] = 1.0;
    piVar1 = &(this->OnePassShadowViewMatrices).ArrayMax;
    (this->OnePassShadowFaceProjectionMatrix).M[3][0] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[3][1] = 0.0;
    (this->OnePassShadowFaceProjectionMatrix).M[3][2] = dVar20;
    (this->OnePassShadowFaceProjectionMatrix).M[3][3] = 0.0;
    local_cf8._s_0.X = (double)*(undefined8 *)&param_3->field_0x80;
    local_cf8._s_0.Y = (double)*(undefined8 *)&param_3->field_0x88;
    local_cf8._s_0.Z = (double)*(undefined8 *)&param_3->field_0x90;
    (this->OnePassShadowViewMatrices).ArrayNum = 0;
    if (*piVar1 != 6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,6,&(this->OnePassShadowViewMatrices).AllocatorInstance,0,piVar1);
    }
    pTVar2 = &this->OnePassShadowViewProjectionMatrices;
    piVar1 = &(this->OnePassShadowViewProjectionMatrices).ArrayMax;
    (this->OnePassShadowViewProjectionMatrices).ArrayNum = 0;
    if (*piVar1 != 6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,6,&pTVar2->AllocatorInstance,0,piVar1);
    }
    local_478.M[1][0] = ___xmm_bff00000000000000000000000000000;
    local_478.M[1][1] = _UNK_1508ffb28;
    piVar1 = &(this->CasterOuterFrustum).Planes.ArrayMax;
    local_478.M[0][0] = dVar34;
    local_478.M[0][1] = dVar35;
    local_478.M[0][2] = 0.0;
    local_478.M[0][3] = 0.0;
    local_478.M[2][0] = 0.0;
    local_478.M[2][1] = 0.0;
    local_478.M[1][2] = 0.0;
    local_478.M[1][3] = 0.0;
    local_478.M[2][2] = dVar34;
    local_478.M[2][3] = dVar35;
    local_478.M[3][0] = 0.0;
    local_478.M[3][1] = 0.0;
    local_478.M[3][2] = dVar31;
    local_478.M[3][3] = dVar32;
    (this->CasterOuterFrustum).Planes.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                (0x20,0x10,0,(ForElementType<UE::Math::TPlane<double>_> *)&this->CasterOuterFrustum,
                 0,piVar1);
    }
    pTVar3 = &this->OnePassShadowViewMatrices;
    pFVar4 = &this->CasterOuterFrustum;
    pTVar47 = CubeDirections;
    lVar46 = 6;
    do {
      pTVar42 = UE::Math::TLookFromMatrix<double>::TLookFromMatrix<double>
                          (&local_178,(TVector<double> *)&local_cf8._s_0,
                           (TVector<double> *)((longlong)&CubeDirections[0].field0_0x0 + lVar48),
                           (TVector<double> *)((longlong)&UpVectors[0].field0_0x0 + lVar48));
      VectorMatrixMultiply(&local_9b8,(TMatrix<double> *)pTVar42,&local_478);
      pFVar10 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_9b8) &&
          ((FScriptContainerElement *)&local_9b8 <
           pFVar10 + (longlong)(this->OnePassShadowViewMatrices).ArrayMax * 0x80)) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar37)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar39 = (this->OnePassShadowViewMatrices).ArrayNum;
      if (iVar39 == (this->OnePassShadowViewMatrices).ArrayMax) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1080,&pTVar3->AllocatorInstance,
                            &(this->OnePassShadowViewMatrices).ArrayMax);
      }
      (this->OnePassShadowViewMatrices).ArrayNum = iVar39 + 1;
      pFVar10 = (pTVar3->AllocatorInstance).Data;
      lVar45 = (longlong)iVar39 * 0x80;
      *(double *)(pFVar10 + lVar45) = local_9b8.M[0][0];
      *(double *)(pFVar10 + lVar45 + 8) = local_9b8.M[0][1];
      *(double *)(pFVar10 + lVar45 + 0x10) = local_9b8.M[0][2];
      *(double *)(pFVar10 + lVar45 + 0x10 + 8) = local_9b8.M[0][3];
      *(double *)(pFVar10 + lVar45 + 0x20) = local_9b8.M[1][0];
      *(double *)(pFVar10 + lVar45 + 0x20 + 8) = local_9b8.M[1][1];
      *(double *)(pFVar10 + lVar45 + 0x30) = local_9b8.M[1][2];
      *(double *)(pFVar10 + lVar45 + 0x30 + 8) = local_9b8.M[1][3];
      *(double *)(pFVar10 + lVar45 + 0x40) = local_9b8.M[2][0];
      *(double *)(pFVar10 + lVar45 + 0x40 + 8) = local_9b8.M[2][1];
      *(double *)(pFVar10 + lVar45 + 0x50) = local_9b8.M[2][2];
      *(double *)(pFVar10 + lVar45 + 0x50 + 8) = local_9b8.M[2][3];
      *(double *)(pFVar10 + lVar45 + 0x60) = local_9b8.M[3][0];
      *(double *)(pFVar10 + lVar45 + 0x60 + 8) = local_9b8.M[3][1];
      *(double *)(pFVar10 + lVar45 + 0x70) = local_9b8.M[3][2];
      *(double *)(pFVar10 + lVar45 + 0x70 + 8) = local_9b8.M[3][3];
      VectorMatrixMultiply(&local_838,&local_9b8,&this->OnePassShadowFaceProjectionMatrix);
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_838) &&
          ((FScriptContainerElement *)&local_838 <
           pFVar10 + (longlong)(this->OnePassShadowViewProjectionMatrices).ArrayMax * 0x80)) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar37)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar39 = (this->OnePassShadowViewProjectionMatrices).ArrayNum;
      if (iVar39 == (this->OnePassShadowViewProjectionMatrices).ArrayMax) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1080,&pTVar2->AllocatorInstance,
                            &(this->OnePassShadowViewProjectionMatrices).ArrayMax);
      }
      (this->OnePassShadowViewProjectionMatrices).ArrayNum = iVar39 + 1;
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      lVar45 = (longlong)iVar39 * 0x80;
      *(double *)(pFVar11 + lVar45) = local_838.M[0][0];
      *(double *)(pFVar11 + lVar45 + 8) = local_838.M[0][1];
      *(double *)(pFVar11 + lVar45 + 0x10) = local_838.M[0][2];
      *(double *)(pFVar11 + lVar45 + 0x10 + 8) = local_838.M[0][3];
      *(double *)(pFVar11 + lVar45 + 0x20) = local_838.M[1][0];
      *(double *)(pFVar11 + lVar45 + 0x20 + 8) = local_838.M[1][1];
      *(double *)(pFVar11 + lVar45 + 0x30) = local_838.M[1][2];
      *(double *)(pFVar11 + lVar45 + 0x30 + 8) = local_838.M[1][3];
      *(double *)(pFVar11 + lVar45 + 0x40) = local_838.M[2][0];
      *(double *)(pFVar11 + lVar45 + 0x40 + 8) = local_838.M[2][1];
      *(double *)(pFVar11 + lVar45 + 0x50) = local_838.M[2][2];
      *(double *)(pFVar11 + lVar45 + 0x50 + 8) = local_838.M[2][3];
      pFVar10 = pFVar11 + lVar45 + 0x60;
      *(undefined4 *)pFVar10 = local_838.M[3][0]._0_4_;
      *(undefined4 *)(pFVar10 + 4) = local_838.M[3][0]._4_4_;
      *(undefined4 *)(pFVar10 + 8) = local_838.M[3][1]._0_4_;
      *(undefined4 *)(pFVar10 + 0xc) = local_838.M[3][1]._4_4_;
      *(double *)(pFVar11 + lVar45 + 0x70) = local_838.M[3][2];
      *(double *)(pFVar11 + lVar45 + 0x70 + 8) = local_838.M[3][3];
      fVar55 = (float)(**(code **)(pFVar9->_padding_ + 0x18))();
      FVar12 = (this->CasterOuterFrustum).Planes.AllocatorInstance.SecondaryData;
      local_d18 = (pTVar47->field0_0x0)._s_0.X;
      dStack_d10 = (pTVar47->field0_0x0)._s_0.Y;
      dStack_d00 = (double)fVar55;
      FVar43 = (ForElementType<UE::Math::TPlane<double>_>)pFVar4;
      if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar43 = FVar12;
      }
      local_d08 = (pTVar47->field0_0x0)._s_0.Z;
      if ((ulonglong)FVar43 <= &local_d18) {
        FVar43 = (ForElementType<UE::Math::TPlane<double>_>)pFVar4;
        if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar43 = FVar12;
        }
        if ((&local_d18 <
             (double *)
             ((longlong)(this->CasterOuterFrustum).Planes.ArrayMax * 0x20 + (longlong)FVar43)) &&
           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar37)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      iVar39 = (this->CasterOuterFrustum).Planes.ArrayNum;
      if (iVar39 == (this->CasterOuterFrustum).Planes.ArrayMax) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                           (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)pFVar4,
                            &(this->CasterOuterFrustum).Planes.ArrayMax);
      }
      (this->CasterOuterFrustum).Planes.ArrayNum = iVar39 + 1;
      FVar12 = (this->CasterOuterFrustum).Planes.AllocatorInstance.SecondaryData;
      FVar43 = (ForElementType<UE::Math::TPlane<double>_>)pFVar4;
      if (FVar12 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar43 = FVar12;
      }
      lVar48 = lVar48 + 0x18;
      pTVar47 = pTVar47 + 1;
      pdVar41 = (double *)((longlong)iVar39 * 0x20 + (longlong)FVar43);
      *pdVar41 = local_d18;
      pdVar41[1] = dStack_d10;
      pdVar41 = (double *)((longlong)iVar39 * 0x20 + 0x10 + (longlong)FVar43);
      *pdVar41 = local_d08;
      pdVar41[1] = dStack_d00;
      lVar46 = lVar46 + -1;
    } while (lVar46 != 0);
    FConvexVolume::Init(&this->CasterOuterFrustum);
  }
  pTVar36 = CVarCSMScissorOptim.Ref;
  bVar37 = IsInParallelRenderingThread();
  if ((!bVar37) &&
     (bVar37 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar37)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((pTVar36->ShadowedValue[1] != false) &&
     (this->bDirectionalLight == 1 &&
      (this->bOnePassPointLightShadow == 0 &&
      (this->bWholeSceneShadow == 1 && this->bRayTracedDistanceField == 0)))) {
    ComputeScissorRectOptim(this);
  }
  return;
}

// ShouldDrawStaticMeshes @ 1456484e0

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
FProjectedShadowInfo::ShouldDrawStaticMeshes
          (FProjectedShadowInfo *this,FViewInfo *param_1,FPrimitiveSceneInfo *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar3;
  FScriptContainerElement FVar4;
  FPrimitiveSceneProxy *pFVar5;
  EMeshDrawCommandCullingPayloadFlags *pEVar6;
  FScriptContainerElement *pFVar7;
  FStaticMeshBatch **ppFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  Type TVar12;
  EMeshDrawCommandCullingPayloadFlags EVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined6 extraout_var;
  byte bVar18;
  FLODMask FVar19;
  EShadowDepthType EVar20;
  size_t _Size;
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar21;
  uint uVar22;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar23;
  FStaticMeshBatch *pFVar24;
  FStaticMeshBatchRelevance *pFVar25;
  longlong lVar26;
  byte bVar27;
  longlong lVar28;
  float fVar29;
  float in_XMM3_Da;
  float fVar30;
  bool local_res18;
  byte local_res20;
  char local_res21;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar31;
  undefined8 in_stack_fffffffffffffee8;
  EMeshDrawCommandCullingPayloadFlags local_f8 [8];
  longlong local_f0;
  FStaticMeshBatch *local_e8;
  undefined1 local_e0 [8];
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_d8;
  longlong local_c8;
  longlong local_c0;
  FMeshDrawCommandPrimitiveIdInfo local_b8;
  FStaticMeshBatch *local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_80;
  
  uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  local_b8.ScenePrimitiveId = param_2->PackedIndex;
  local_b8.DrawPrimitiveId = (param_2->PersistentIndex).Index;
  local_b8.bIsDynamicPrimitive = 0;
  local_b8.InstanceSceneDataOffset = param_2->InstanceSceneDataOffset;
  local_res18 = false;
  local_f0 = CONCAT44(local_f0._4_4_,local_b8.ScenePrimitiveId);
  if (*(int *)(param_1->_padding_ + 0x50) < 0) {
    iVar15 = GetCVarForceLODShadow();
    if (iVar15 == -1) {
      uVar16 = GetCVarForceLOD();
    }
    else {
      uVar16 = GetCVarForceLODShadow();
    }
  }
  else {
    uVar16 = 0xffffffff;
  }
  pFVar5 = param_2->Proxy;
  fVar29 = GetLODDistanceFactor(this);
  fVar30 = __real_3f800000;
  if (fVar29 == __real_3f800000) {
    fVar30 = 0.0;
  }
  uVar17 = param_2->PackedIndex;
  uVar22 = 0;
  if ((int)uVar17 < (param_1->PrimitivesLODMask).ArrayNum) {
    uVar22 = ~uVar17 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  FVar19 = (param_1->PrimitivesLODMask).AllocatorInstance.Data[(int)uVar17];
  if (((uVar16 < 0x80000000) ||
      (((param_1->PrimitivesLODMask).AllocatorInstance.Data + (int)uVar17)->bIsValid == 0)) ||
     (fVar30 != 0.0)) {
    local_e0._4_4_ = 0;
    (**(code **)(param_2->Proxy->_padding_ + 0x208))(param_2->Proxy,&local_res20,param_1);
    if (local_res21 == '\x01') {
      FVar19 = (FLODMask)((local_res20 & 0x7f | 0x80) << 7 | (ushort)(local_res20 & 0x7f));
    }
    else {
      GetCachedScalabilityCVars();
      local_98 = (pFVar5->Bounds).Origin.field0_0x0._s_0.X;
      dStack_90 = (pFVar5->Bounds).Origin.field0_0x0._s_0.Y;
      local_80 = __real_3ff0000000000000;
      local_88 = (pFVar5->Bounds).Origin.field0_0x0._s_0.Z;
      FVar19 = ComputeLODForMeshes((TArray<FStaticMeshBatchRelevance,TSizedDefaultAllocator<32>_> *)
                                   local_e0,(FSceneView *)&param_2->StaticMeshRelevances,
                                   (TVector4<double> *)param_1,in_XMM3_Da,
                                   (float)(pFVar5->Bounds).SphereRadius,
                                   (int)param_2->GpuLodInstanceRadius,
                                   (float *)CONCAT44(uVar31,uVar16),(char)local_e0 + '\x04',
                                   (float)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffee8 >> 8)
                                                   ,local_res20));
      FVar19 = *(FLODMask *)CONCAT62(extraout_var,FVar19);
    }
    if (fVar30 == 0.0) {
      uVar16 = 0;
      if ((int)uVar17 < (param_1->PrimitivesLODMask).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        uVar11 = (*pcVar9)();
        return (bool)uVar11;
      }
      (param_1->PrimitivesLODMask).AllocatorInstance.Data[(int)uVar17] = FVar19;
    }
  }
  if ((this->bPreShadow != 0) && (GPreshadowsForceLowestLOD != 0)) {
    uVar16 = 0;
    bVar27 = 0x81;
    if (0 < (param_2->StaticMeshRelevances).ArrayNum) {
      lVar28 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar16 < (param_2->StaticMeshRelevances).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar4 = (param_2->StaticMeshRelevances).AllocatorInstance.Data[lVar28 + 0x14];
        if (((byte)FVar4 & 0x10) == 0) {
          bVar18 = (byte)FVar4 & 0xf;
        }
        else {
          bVar18 = 0xff;
        }
        if ((char)bVar27 < (char)bVar18) {
          bVar27 = bVar18;
        }
        uVar16 = uVar16 + 1;
        lVar28 = lVar28 + 0x18;
      } while ((int)uVar16 < (param_2->StaticMeshRelevances).ArrayNum);
      if (bVar27 != 0x81) {
        FVar19 = (FLODMask)((bVar27 & 0x7f | 0x80) << 7 | (ushort)(bVar27 & 0x7f));
      }
    }
  }
  if (((this->CascadeSettings).bFarShadowCascade != false) &&
     (((FVar19.bIsValid == 0 || (!(BADTYPE)FVar19.bIsRange)) ||
      (((FVar19.LODIndex1 ^ FVar19.LODIndex0) & 0x7f) == 0)))) {
    bVar27 = FVar19.LODIndex0 + (char)GFarShadowStaticMeshLODBias;
    uVar16 = (param_2->StaticMeshRelevances).ArrayNum - 1;
    if (-1 < (int)uVar16) {
      lVar28 = (longlong)(int)uVar16 * 0x18;
      do {
        uVar17 = 0;
        if ((int)uVar16 < (param_2->StaticMeshRelevances).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        FVar4 = (param_2->StaticMeshRelevances).AllocatorInstance.Data[lVar28 + 0x14];
        if (((byte)FVar4 & 0x10) == 0) {
          bVar18 = (byte)FVar4 & 0xf;
        }
        else {
          bVar18 = 0xff;
        }
        if (bVar27 == bVar18) {
          uVar14 = (ushort)(bVar27 & 0x7f);
          FVar19 = (FLODMask)((uVar14 | 0x80) << 7 | uVar14);
          break;
        }
        lVar28 = lVar28 + -0x18;
        uVar16 = uVar16 - 1;
      } while (-1 < (int)uVar16);
    }
  }
  if (this->bDirectionalLight == 0) {
    EVar20 = Point;
    if (this->bOnePassPointLightShadow != 0) {
      EVar20 = OnePassPoint;
    }
  }
  else {
    EVar20 = Directional;
  }
  uVar16 = (uint)local_f0;
  EVar20 = EVar20 | this->bVSM;
  if ((((int)(uint)local_f0 < 0) ||
      ((param_1->PotentiallyFadingPrimitiveMap).NumBits <= (int)(uint)local_f0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    uVar11 = (*pcVar9)();
    return (bool)uVar11;
  }
  pTVar23 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(param_1->PotentiallyFadingPrimitiveMap).AllocatorInstance.SecondaryData.Data;
  if (pTVar23 ==
      (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar23 = &param_1->PotentiallyFadingPrimitiveMap;
  }
  if (((*(uint *)((pTVar23->AllocatorInstance).InlineData +
                 (longlong)((int)(uVar16 + ((int)uVar16 >> 0x1f & 0x1fU)) >> 5) * 4) >>
        (uVar16 & 0x1f) & 1) == 0) && (bVar10 = UseCachedMeshDrawCommands(EVar20), bVar10)) {
    TVar12 = GetShadowMeshPassType(EVar20);
    uVar16 = 0;
    if (0 < (param_2->StaticMeshRelevances).ArrayNum) {
      local_f0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      do {
        lVar26 = local_c0;
        lVar28 = local_c8;
        uVar17 = 0;
        if ((int)uVar16 < (param_2->StaticMeshRelevances).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        pFVar25 = (FStaticMeshBatchRelevance *)
                  ((param_2->StaticMeshRelevances).AllocatorInstance.Data + lVar28);
        uVar17 = 0;
        if ((int)uVar16 < (param_2->StaticMeshes).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        local_a8 = (FStaticMeshBatch *)((param_2->StaticMeshes).AllocatorInstance.Data + lVar26);
        if ((pFVar25->CastShadow != 0) ||
           ((this->bSelfShadowOnly != 0 && (pFVar25->bUseForDepthPass != '\0')))) {
          if (pFVar25->bInvalidLODIndex == '\0') {
            bVar27 = pFVar25->UnsignedLODIndex;
          }
          else {
            bVar27 = 0xff;
          }
          if (FVar19.bIsValid != 0) {
            uVar22 = (uint)(char)bVar27;
            uVar17 = FVar19.LODIndex0;
            if ((BADTYPE)FVar19.bIsRange) {
              if (((int)uVar17 <= (int)uVar22) && ((int)uVar22 <= (int)FVar19.LODIndex1))
              goto LAB_145648b03;
            }
            else if ((uVar17 == uVar22) || (FVar19.LODIndex1 == uVar22)) {
LAB_145648b03:
              local_res18 = true;
              if ((this->MeshSelectionMask & SM - ((char)pFVar25->field_0x16 >> 7)) != 0) {
                if (pFVar25->bInvalidLODIndex == '\0') {
                  bVar27 = pFVar25->UnsignedLODIndex;
                }
                else {
                  bVar27 = 0xff;
                }
                EVar13 = GetCullingPayloadFlags(FVar19,bVar27);
                local_d8.ArrayNum = (this->SubjectMeshCommandBuildFlags).ArrayNum;
                _Size = (size_t)local_d8.ArrayNum;
                local_d8.AllocatorInstance.Data = (EMeshDrawCommandCullingPayloadFlags *)0x0;
                pEVar6 = (this->SubjectMeshCommandBuildFlags).AllocatorInstance.Data;
                if (local_d8.ArrayNum == 0) {
                  local_d8.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
                            (1,1,local_d8.ArrayNum,0,&local_d8.AllocatorInstance,local_d8.ArrayNum,
                             &local_d8.ArrayMax);
                  memcpy(local_d8.AllocatorInstance.Data,pEVar6,_Size);
                }
                AddCachedMeshDrawCommandsForPass
                          (this,&local_b8,param_2,pFVar25,local_a8,EVar13,param_2->Scene,TVar12,
                           &this->ShadowDepthPassVisibleCommands,
                           &this->SubjectMeshCommandBuildRequests,&local_d8,
                           &this->NumSubjectMeshCommandBuildRequestElements);
                lVar28 = local_c8;
                lVar26 = local_c0;
              }
            }
          }
        }
        local_c8 = lVar28 + 0x18;
        local_f0 = local_f0 + 1;
        local_c0 = lVar26 + 0xf0;
        uVar16 = uVar16 + 1;
        if ((param_2->StaticMeshRelevances).ArrayNum <= (int)uVar16) {
          return local_res18;
        }
      } while( true );
    }
  }
  else {
    uVar16 = 0;
    if (0 < (param_2->StaticMeshRelevances).ArrayNum) {
      lVar26 = 0;
      lVar28 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar16 < (param_2->StaticMeshRelevances).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        pFVar7 = (param_2->StaticMeshRelevances).AllocatorInstance.Data;
        uVar17 = 0;
        if ((int)uVar16 < (param_2->StaticMeshes).ArrayNum) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        pFVar24 = (FStaticMeshBatch *)((param_2->StaticMeshes).AllocatorInstance.Data + lVar26);
        if ((((byte)pFVar7[lVar28 + 0x15] & 1) != 0) ||
           ((this->bSelfShadowOnly != 0 && (((byte)pFVar7[lVar28 + 0x15] & 4) != 0)))) {
          if (((byte)pFVar7[lVar28 + 0x14] & 0x10) == 0) {
            bVar27 = (byte)pFVar7[lVar28 + 0x14] & 0xf;
          }
          else {
            bVar27 = 0xff;
          }
          if (FVar19.bIsValid != 0) {
            uVar22 = (uint)(char)bVar27;
            uVar17 = FVar19.LODIndex0;
            if ((BADTYPE)FVar19.bIsRange) {
              if (((int)uVar17 <= (int)uVar22) && ((int)uVar22 <= (int)FVar19.LODIndex1))
              goto LAB_145648d80;
            }
            else if ((uVar17 == uVar22) || (FVar19.LODIndex1 == uVar22)) {
LAB_145648d80:
              local_res18 = true;
              if ((this->MeshSelectionMask & SM - ((char)pFVar7[lVar28 + 0x16] >> 7)) != 0) {
                pTVar3 = &this->SubjectMeshCommandBuildRequests;
                this->NumSubjectMeshCommandBuildRequestElements =
                     this->NumSubjectMeshCommandBuildRequestElements +
                     (uint)*(ushort *)(pFVar7 + lVar28 + 0x10);
                ppFVar8 = (pTVar3->AllocatorInstance).Data;
                local_e8 = pFVar24;
                if (((ppFVar8 <= &local_e8) &&
                    (&local_e8 < ppFVar8 + (this->SubjectMeshCommandBuildRequests).ArrayMax)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  uVar11 = (*pcVar9)();
                  return (bool)uVar11;
                }
                iVar15 = (this->SubjectMeshCommandBuildRequests).ArrayNum;
                piVar1 = &(this->SubjectMeshCommandBuildRequests).ArrayMax;
                if (iVar15 == *piVar1) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
                                     (0x808,&pTVar3->AllocatorInstance,piVar1);
                }
                (this->SubjectMeshCommandBuildRequests).ArrayNum = iVar15 + 1;
                pTVar21 = &this->SubjectMeshCommandBuildFlags;
                (pTVar3->AllocatorInstance).Data[iVar15] = local_e8;
                if (((byte)pFVar7[lVar28 + 0x14] & 0x10) == 0) {
                  bVar27 = (byte)pFVar7[lVar28 + 0x14] & 0xf;
                }
                else {
                  bVar27 = 0xff;
                }
                local_f8[0] = GetCullingPayloadFlags(FVar19,bVar27);
                pEVar6 = (pTVar21->AllocatorInstance).Data;
                if (((pEVar6 <= local_f8) &&
                    (local_f8 < pEVar6 + (this->SubjectMeshCommandBuildFlags).ArrayMax)) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar10)) {
                  pcVar9 = (code *)swi(3);
                  uVar11 = (*pcVar9)();
                  return (bool)uVar11;
                }
                iVar15 = (this->SubjectMeshCommandBuildFlags).ArrayNum;
                piVar1 = &(this->SubjectMeshCommandBuildFlags).ArrayMax;
                if (iVar15 == *piVar1) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
                                     (0x101,&pTVar21->AllocatorInstance,piVar1);
                }
                (this->SubjectMeshCommandBuildFlags).ArrayNum = iVar15 + 1;
                (pTVar21->AllocatorInstance).Data[iVar15] = local_f8[0];
              }
            }
          }
        }
        uVar16 = uVar16 + 1;
        lVar28 = lVar28 + 0x18;
        lVar26 = lVar26 + 0xf0;
        if ((param_2->StaticMeshRelevances).ArrayNum <= (int)uVar16) {
          return local_res18;
        }
      } while( true );
    }
  }
  return false;
}

// ShouldDrawStaticMeshes_AnyThread @ 145648f70

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
FProjectedShadowInfo::ShouldDrawStaticMeshes_AnyThread
          (FProjectedShadowInfo *this,FViewInfo *param_1,FPrimitiveSceneInfoCompact *param_2,
          bool param_3,FAddSubjectPrimitiveResult *param_4,FAddSubjectPrimitiveStats *param_5,
          FAddSubjectPrimitiveOverflowedIndices *param_6)

{
  int *piVar1;
  short *psVar2;
  undefined1 *puVar3;
  float fVar4;
  FScriptContainerElement FVar5;
  undefined4 uVar6;
  FPrimitiveSceneInfo *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  FPrimitiveSceneInfo *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined6 extraout_var;
  byte bVar17;
  uint uVar18;
  longlong lVar19;
  FLODMask FVar20;
  short sVar21;
  EShadowDepthType EVar22;
  byte bVar23;
  longlong lVar24;
  FStaticMeshBatchRelevance *pFVar25;
  float fVar26;
  float in_XMM3_Da;
  float fVar27;
  bool local_res10;
  byte local_res18;
  char local_res19;
  char local_res20;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar28;
  undefined8 in_stack_fffffffffffffee8;
  short local_108;
  ushort local_106;
  uint local_104;
  FPrimitiveSceneInfo *local_100;
  TArray<FStaticMeshBatchRelevance,TSizedDefaultAllocator<32>_> local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_98;
  
  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  local_res10 = false;
  local_res20 = param_3;
  IsWholeSceneDirectionalShadow(this);
  pFVar7 = param_2->PrimitiveSceneInfo;
  if (this->bDirectionalLight == 0) {
    EVar22 = Point;
    if (this->bOnePassPointLightShadow != 0) {
      EVar22 = OnePassPoint;
    }
  }
  else {
    EVar22 = Directional;
  }
  local_100 = pFVar7;
  if (*(int *)(param_1->_padding_ + 0x50) < 0) {
    iVar14 = GetCVarForceLODShadow_AnyThread();
    if (iVar14 == -1) {
      uVar15 = GetCVarForceLOD_AnyThread();
    }
    else {
      uVar15 = GetCVarForceLODShadow_AnyThread();
    }
  }
  else {
    uVar15 = 0xffffffff;
  }
  fVar4 = (param_2->Bounds).SphereRadius;
  local_c8 = (param_2->Bounds).Origin.field0_0x0._s_0.X;
  dStack_c0 = (param_2->Bounds).Origin.field0_0x0._s_0.Y;
  local_b8 = (param_2->Bounds).Origin.field0_0x0._s_0.Z;
  local_98 = (double)fVar4;
  fVar26 = GetLODDistanceFactor(this);
  fVar27 = __real_3f800000;
  if (fVar26 == __real_3f800000) {
    fVar27 = 0.0;
  }
  uVar18 = pFVar7->PackedIndex;
  uVar16 = 0;
  if ((int)uVar18 < (param_1->PrimitivesLODMask).ArrayNum) {
    uVar16 = ~uVar18 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  pFVar7 = local_100;
  FVar20 = (param_1->PrimitivesLODMask).AllocatorInstance.Data[(int)uVar18];
  if (((uVar15 < 0x80000000) ||
      (((param_1->PrimitivesLODMask).AllocatorInstance.Data + (int)uVar18)->bIsValid == 0)) ||
     (fVar27 != 0.0)) {
    local_f8.AllocatorInstance.Data._4_4_ = 0;
    (**(code **)(local_100->Proxy->_padding_ + 0x208))(local_100->Proxy,&local_res18,param_1);
    if (local_res19 == '\x01') {
      FVar20 = (FLODMask)((local_res18 & 0x7f | 0x80) << 7 | (ushort)(local_res18 & 0x7f));
    }
    else {
      GetCachedScalabilityCVars();
      local_e8 = local_c8;
      dStack_e0 = dStack_c0;
      local_d0 = __real_3ff0000000000000;
      local_d8 = local_b8;
      FVar20 = ComputeLODForMeshes(&local_f8,(FSceneView *)&pFVar7->StaticMeshRelevances,
                                   (TVector4<double> *)param_1,in_XMM3_Da,fVar4,
                                   (int)pFVar7->GpuLodInstanceRadius,
                                   (float *)CONCAT44(uVar28,uVar15),(char)&local_f8 + '\x04',
                                   (float)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffee8 >> 8)
                                                   ,local_res18));
      FVar20 = *(FLODMask *)CONCAT62(extraout_var,FVar20);
    }
    if (fVar27 == 0.0) {
      uVar15 = 0;
      if ((int)uVar18 < (param_1->PrimitivesLODMask).ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      (param_1->PrimitivesLODMask).AllocatorInstance.Data[(int)uVar18] = FVar20;
    }
  }
  pFVar7 = local_100;
  if ((this->bPreShadow != 0) && (GPreshadowsForceLowestLOD != 0)) {
    uVar15 = 0;
    bVar23 = 0x81;
    if (0 < (local_100->StaticMeshRelevances).ArrayNum) {
      lVar24 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar15 < (pFVar7->StaticMeshRelevances).ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar5 = (pFVar7->StaticMeshRelevances).AllocatorInstance.Data[lVar24 + 0x14];
        if (((byte)FVar5 & 0x10) == 0) {
          bVar17 = (byte)FVar5 & 0xf;
        }
        else {
          bVar17 = 0xff;
        }
        if ((char)bVar23 < (char)bVar17) {
          bVar23 = bVar17;
        }
        uVar15 = uVar15 + 1;
        lVar24 = lVar24 + 0x18;
      } while ((int)uVar15 < (pFVar7->StaticMeshRelevances).ArrayNum);
      if (bVar23 != 0x81) {
        FVar20 = (FLODMask)((bVar23 & 0x7f | 0x80) << 7 | (ushort)(bVar23 & 0x7f));
      }
    }
  }
  if (((this->CascadeSettings).bFarShadowCascade != false) &&
     (((FVar20.bIsValid == 0 || (!(BADTYPE)FVar20.bIsRange)) ||
      (((FVar20.LODIndex1 ^ FVar20.LODIndex0) & 0x7f) == 0)))) {
    bVar23 = FVar20.LODIndex0 + (char)GFarShadowStaticMeshLODBias;
    uVar15 = (pFVar7->StaticMeshRelevances).ArrayNum - 1;
    if (-1 < (int)uVar15) {
      lVar24 = (longlong)(int)uVar15 * 0x18;
      do {
        uVar18 = 0;
        if ((int)uVar15 < (pFVar7->StaticMeshRelevances).ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar5 = (pFVar7->StaticMeshRelevances).AllocatorInstance.Data[lVar24 + 0x14];
        if (((byte)FVar5 & 0x10) == 0) {
          bVar17 = (byte)FVar5 & 0xf;
        }
        else {
          bVar17 = 0xff;
        }
        if (bVar23 == bVar17) {
          uVar13 = (ushort)(bVar23 & 0x7f);
          FVar20 = (FLODMask)((uVar13 | 0x80) << 7 | uVar13);
          break;
        }
        lVar24 = lVar24 + -0x18;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
  }
  local_106 = FVar20.bIsValid;
  if (((FVar20.bIsValid == 0) || (!(BADTYPE)FVar20.bIsRange)) ||
     (((FVar20.LODIndex1 ^ FVar20.LODIndex0) & 0x7f) == 0)) {
    uVar18 = 0;
    uVar15 = *(uint *)&param_4->field0_0x0 & 0xfffff7ff;
  }
  else {
    uVar18 = (uint)(ushort)FVar20;
    uVar15 = *(uint *)&param_4->field0_0x0 | 0x800;
  }
  local_104 = (uint)(ushort)FVar20;
  uVar15 = (uVar18 << 0xc ^ uVar15) & 0x7f000 ^ uVar15;
  uVar18 = 0;
  if ((uVar15 >> 0xb & 1) != 0) {
    uVar18 = (uint)((ushort)FVar20 >> 7);
  }
  *(uint *)&param_4->field0_0x0 = (uVar18 << 0x13 ^ uVar15) & 0x3f80000 ^ uVar15;
  if ((local_res20 == '\0') &&
     (bVar11 = UseCachedMeshDrawCommands(EVar22 | this->bVSM), pFVar10 = local_100, bVar11)) {
    uVar15 = 0;
    local_f8.ArrayNum = 0;
    if (0 < (pFVar7->StaticMeshRelevances).ArrayNum) {
      lVar24 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar15 < (pFVar10->StaticMeshRelevances).ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        pFVar25 = (FStaticMeshBatchRelevance *)
                  ((pFVar10->StaticMeshRelevances).AllocatorInstance.Data + lVar24);
        uVar18 = 0;
        if ((int)uVar15 < (pFVar10->StaticMeshes).ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if ((pFVar25->CastShadow != 0) ||
           ((this->bSelfShadowOnly != 0 && (pFVar25->bUseForDepthPass != '\0')))) {
          if (pFVar25->bInvalidLODIndex == '\0') {
            bVar23 = pFVar25->UnsignedLODIndex;
          }
          else {
            bVar23 = 0xff;
          }
          if ((char)local_106 != '\0') {
            uVar18 = (uint)(char)bVar23;
            if ((BADTYPE)FVar20.bIsRange) {
              if (((int)(local_104 & 0x7f) <= (int)uVar18) &&
                 ((int)uVar18 <= (int)(local_104 >> 7 & 0x7f))) goto LAB_145649577;
            }
            else if (((local_104 & 0x7f) == uVar18) || ((local_104 >> 7 & 0x7f) == uVar18)) {
LAB_145649577:
              local_res10 = true;
              if ((this->MeshSelectionMask & SM - ((char)pFVar25->field_0x16 >> 7)) != 0) {
                AddCachedMeshDrawCommands_AnyThread
                          (this,pFVar10->Scene,pFVar25,uVar15,&local_f8.ArrayNum,param_4,param_5,
                           param_6);
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
        lVar24 = lVar24 + 0x18;
        if ((pFVar10->StaticMeshRelevances).ArrayNum <= (int)uVar15) {
          return local_res10;
        }
      } while( true );
    }
  }
  else {
    uVar15 = 0;
    if (0 < (pFVar7->StaticMeshRelevances).ArrayNum) {
      lVar24 = 0;
      do {
        uVar18 = 0;
        if ((int)uVar15 < (pFVar7->StaticMeshRelevances).ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        pFVar8 = (pFVar7->StaticMeshRelevances).AllocatorInstance.Data;
        lVar19 = (longlong)(int)uVar15;
        uVar18 = 0;
        if ((int)uVar15 < (pFVar7->StaticMeshes).ArrayNum) {
          uVar18 = ~uVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if ((((byte)pFVar8[lVar19 * 0x18 + 0x15] & 1) != 0) ||
           ((this->bSelfShadowOnly != 0 && (((byte)pFVar8[lVar19 * 0x18 + 0x15] & 4) != 0)))) {
          if (((byte)pFVar8[lVar19 * 0x18 + 0x14] & 0x10) == 0) {
            bVar23 = (byte)pFVar8[lVar19 * 0x18 + 0x14] & 0xf;
          }
          else {
            bVar23 = 0xff;
          }
          if ((char)local_106 != '\0') {
            uVar18 = (uint)(char)bVar23;
            if ((BADTYPE)FVar20.bIsRange) {
              if (((int)(local_104 & 0x7f) <= (int)uVar18) &&
                 ((int)uVar18 <= (int)(local_104 >> 7 & 0x7f))) goto LAB_14564971c;
            }
            else if (((local_104 & 0x7f) == uVar18) || ((local_104 >> 7 & 0x7f) == uVar18)) {
LAB_14564971c:
              local_res10 = true;
              if ((this->MeshSelectionMask & SM - ((char)pFVar8[lVar19 * 0x18 + 0x16] >> 7)) != 0) {
                if ((0xfffe < (int)uVar15) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("MeshIndex < ((uint16) 0xffff)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                                        ,0x7a6,L""), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                param_5->NumMDCBuildRequests = param_5->NumMDCBuildRequests + 1;
                if (((lVar24 < 0) || (0xfffe < (int)uVar15)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NumAcceptedStaticMeshes >= 0 && MeshIdx < ((uint16) 0xffff)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                                        ,0x629,L""), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                sVar21 = (short)uVar15;
                if (lVar24 < 2) {
                  *(short *)((longlong)&param_4->field0_0x0 + lVar24 * 2 + 4) = sVar21 + 1;
                }
                else {
                  if (lVar24 == 2) {
                    FAddSubjectPrimitiveResult::HandleOverflow(param_4,param_6);
                  }
                  if (((*(byte *)&param_4->field0_0x0 & 4) == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("bOverflowed",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                                          ,0x634,L""), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    uVar12 = (*pcVar9)();
                    return (bool)uVar12;
                  }
                  pFVar8 = (param_6->MeshIndices).AllocatorInstance.Data;
                  local_108 = sVar21;
                  if (((pFVar8 <= (FScriptContainerElement *)&local_108) &&
                      ((FScriptContainerElement *)&local_108 <
                       pFVar8 + (longlong)(param_6->MeshIndices).ArrayMax * 2)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    uVar12 = (*pcVar9)();
                    return (bool)uVar12;
                  }
                  iVar14 = (param_6->MeshIndices).ArrayNum;
                  piVar1 = &(param_6->MeshIndices).ArrayMax;
                  if (iVar14 == *piVar1) {
                    iVar14 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x202,&(param_6->MeshIndices).AllocatorInstance,piVar1);
                  }
                  (param_6->MeshIndices).ArrayNum = iVar14 + 1;
                  *(short *)((param_6->MeshIndices).AllocatorInstance.Data + (longlong)iVar14 * 2) =
                       local_108;
                  psVar2 = (short *)((longlong)&param_4->field0_0x0 + 6);
                  *psVar2 = *psVar2 + 1;
                }
                *(uint *)&param_4->field0_0x0 = *(uint *)&param_4->field0_0x0 | 2;
                lVar24 = lVar24 + 1;
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
        if ((pFVar7->StaticMeshRelevances).ArrayNum <= (int)uVar15) {
          return local_res10;
        }
      } while( true );
    }
  }
  return false;
}

// ShouldUseCSMScissorOptim @ 145649c40

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

bool __thiscall FProjectedShadowInfo::ShouldUseCSMScissorOptim(FProjectedShadowInfo *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pTVar3 = CVarCSMScissorOptim.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  if ((pTVar3->ShadowedValue[1] != false) &&
     (this->bDirectionalLight == 1 &&
      (this->bOnePassPointLightShadow == 0 &&
      (this->bWholeSceneShadow == 1 && this->bRayTracedDistanceField == 0)))) {
    return true;
  }
  return false;
}

// SubjectsVisible @ 14564a770

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

bool __thiscall FProjectedShadowInfo::SubjectsVisible(FProjectedShadowInfo *this,FViewInfo *param_1)

{
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->DynamicSubjectPrimitives).ArrayNum) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->DynamicSubjectPrimitives).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = *(uint *)(*(longlong *)
                         (lVar9 + (longlong)(this->DynamicSubjectPrimitives).AllocatorInstance.Data)
                       + 0x188);
      if ((((int)uVar7 < 0) || ((param_1->PrimitiveVisibilityMap).NumBits <= (int)uVar7)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pTVar1 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)(param_1->PrimitiveVisibilityMap).AllocatorInstance.SecondaryData.Data;
      pTVar5 = &param_1->PrimitiveVisibilityMap;
      if (pTVar1 != (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar5 = pTVar1;
      }
      uVar6 = uVar7 & 0x1f;
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 0x1f;
      }
      if ((*(uint *)((pTVar5->AllocatorInstance).InlineData + (longlong)((int)uVar7 >> 5) * 4) >>
           uVar6 & 1) != 0) {
        return true;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->DynamicSubjectPrimitives).ArrayNum);
  }
  return false;
}

// operator() @ 145751ff0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
`FProjectedShadowInfo::RenderTranslucencyDepths'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  FLinearColor_u_0 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  fVar3 = __real_3f800000;
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x960) * 2;
  FRHICommandList::SetViewport
            (param_2,(float)*(uint *)(lVar2 + 0x950),(float)*(uint *)(lVar2 + 0x954),0.0,
             (float)(*(int *)(lVar2 + 0x958) + *(uint *)(lVar2 + 0x950) + iVar1),
             (float)(*(int *)(lVar2 + 0x95c) + iVar1 + *(uint *)(lVar2 + 0x954)),__real_3f800000);
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  local_28 = 0;
  uStack_20 = 0;
  DrawClearQuadMRT(param_2,true,2,(FLinearColor *)&local_38._s_0,false,fVar3,false,0);
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x960);
  FRHICommandList::SetViewport
            (param_2,(float)(uint)(*(int *)(lVar2 + 0x950) + iVar1),
             (float)(uint)(iVar1 + *(int *)(lVar2 + 0x954)),0.0,
             (float)(uint)(*(int *)(lVar2 + 0x958) + *(int *)(lVar2 + 0x950) + iVar1),
             (float)(uint)(*(int *)(lVar2 + 0x95c) + iVar1 + *(int *)(lVar2 + 0x954)),fVar3);
  FSimpleMeshDrawCommandPass::SubmitDraw
            (*(FSimpleMeshDrawCommandPass **)((longlong)this + 8),param_2,
             (FInstanceCullingDrawParams *)(*(longlong *)((longlong)this + 0x10) + 0x20));
  return;
}

// RenderTranslucencyDepths @ 145784fc0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FProjectedShadowInfo::RenderTranslucencyDepths
          (FProjectedShadowInfo *this,FRDGBuilder *param_1,FSceneRenderer *param_2,
          FRenderTargetBindingSlots *param_3,FInstanceCullingManager *param_4)

{
  int *piVar1;
  FViewInfo *pFVar2;
  wchar_t *pwVar3;
  FMeshBatchAndRelevance *pFVar4;
  FPrimitiveSceneInfo *this_00;
  code *pcVar5;
  FName FVar6;
  FRDGTexture *pFVar7;
  bool bVar8;
  FRenderTargetBindingSlots *pFVar9;
  uchar uVar10;
  short sVar11;
  undefined4 uVar12;
  ERenderTargetLoadAction EVar13;
  FRDGBuilder *pFVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_RenderPerObjectShadowDepthsTime> FVar21;
  FTranslucencyDepthPassUniformParameters *pFVar22;
  FShaderParametersMetadata *pFVar23;
  TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> *pTVar24;
  undefined8 *puVar25;
  longlong lVar26;
  FRDGEventName *pFVar27;
  FSceneTextures *pFVar28;
  FMeshBatch *pFVar29;
  FName FVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  FSimpleMeshDrawCommandPass *this_01;
  float fVar34;
  undefined1 auStackY_2d8 [32];
  char local_277;
  schar local_276 [2];
  FColor_u_0 local_274;
  FName local_270;
  undefined8 *local_268;
  undefined8 *local_260;
  FRDGBuilder *local_258;
  FSceneRenderer *local_250;
  FSimpleMeshDrawCommandPass *local_248;
  FString local_240;
  FName local_230;
  TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> *local_228;
  EUniformBufferBindingFlags EStack_220;
  undefined7 uStack_21f;
  FName local_218;
  TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> *local_208;
  FProjectedShadowInfo *local_200;
  <lambda_1> local_1f8;
  FRHIBlendState *local_1d8;
  FRHIDepthStencilState *pFStack_1d0;
  Type local_1c8;
  undefined4 uStack_1c4;
  FRHIUniformBuffer *pFStack_1c0;
  FRHIUniformBuffer *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FName local_198;
  FRDGEventName local_190;
  FTranslucencyDepthPassMeshProcessor local_178;
  undefined1 local_e8 [16];
  TMatrix<float> local_d8;
  TMatrix<float> local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_248 = (FSimpleMeshDrawCommandPass *)param_4;
  local_258 = param_1;
  local_250 = param_2;
  local_200 = this;
  bVar16 = IsInRenderingThread();
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentLighting.cpp"
                          ,0x29d,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar33 = 2;
  FVar21 = StatPtr_STAT_RenderPerObjectShadowDepthsTime;
  if (StatPtr_STAT_RenderPerObjectShadowDepthsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RenderPerObjectShadowDepthsTime>)0x0) {
    pFVar20 = ::FName::FName(&local_198,"STAT_RenderPerObjectShadowDepthsTime");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_RenderPerObjectShadowDepthsTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RenderPerObjectShadowDepthsTime,
                        *pFVar20,L"PerObject Shadow Depths","STATGROUP_ShadowRendering",
                        "STATCAT_Advanced",L"Shadow Rendering",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  bVar16 = false;
  bVar8 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  FVar30 = *(FName *)FVar21;
  bVar15 = false;
  bVar17 = false;
  if ((FVar30.ComparisonIndex.Value.Value != 0) || (FVar30.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_274.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_274._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar16 = false;
      bVar8 = true;
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_230.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_230.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_230,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentLighting.cpp"
                   ,0x29f);
        bVar16 = true;
        bVar8 = true;
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_270 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar15 = true;
      goto LAB_14578517e;
    }
  }
  bVar8 = bVar17;
  bVar16 = bVar15;
  bVar15 = false;
  FVar30 = local_218;
LAB_14578517e:
  BeginRenderView(this,param_1,*(FScene **)&local_250->field_0x8);
  pFVar22 = FRDGAllocator::Alloc<FTranslucencyDepthPassUniformParameters>
                      ((FRDGAllocator *)&param_1->_padding_);
  pFVar2 = this->ShadowDepthView;
  if ((*(char *)(pFVar2->_padding_ + 200) == '\0') ||
     (pFVar28 = *(FSceneTextures **)(pFVar2->_padding_ + 800), (char)pFVar28->_padding_ == '\0')) {
    pFVar28 = (FSceneTextures *)0x0;
  }
  SetupSceneTextureUniformParameters
            (param_1,pFVar28,(Type)pFVar2->_padding_,None,&pFVar22->SceneTextures);
  local_d8.M[1][0] = ___xmm_00000000000000003f80000000000000;
  local_d8.M[1][1] = _UNK_150689504;
  local_d8.M[1][2] = _UNK_150689508;
  local_d8.M[1][3] = _UNK_15068950c;
  local_d8.M[0][0] = ___xmm_0000000000000000000000003f800000;
  local_d8.M[0][1] = _UNK_1506894f4;
  local_d8.M[0][2] = _UNK_1506894f8;
  local_d8.M[0][3] = _UNK_1506894fc;
  local_d8.M[2][0] = ___xmm_000000003f8000000000000000000000;
  local_d8.M[2][1] = _UNK_150689534;
  local_d8.M[2][2] = _UNK_150689538;
  local_d8.M[2][3] = _UNK_15068953c;
  local_d8.M[3][3] = 1.0;
  local_d8.M[3][0] =
       (float)((this->PreShadowTranslation).field0_0x0._s_0.X - (double)pFVar2->_padding_);
  local_d8.M[3][1] =
       (float)((this->PreShadowTranslation).field0_0x0._s_0.Y - (double)pFVar2->_padding_);
  local_d8.M[3][2] =
       (float)((this->PreShadowTranslation).field0_0x0._s_0.Z - (double)pFVar2->_padding_);
  VectorMatrixMultiply(&local_98,&local_d8,&this->TranslatedWorldToClipInnerMatrix);
  *(undefined8 *)(pFVar22->ProjectionMatrix).M[0] = local_98.M[0]._0_8_;
  *(undefined8 *)((pFVar22->ProjectionMatrix).M[0] + 2) = local_98.M[0]._8_8_;
  *(undefined8 *)(pFVar22->ProjectionMatrix).M[1] = local_98.M[1]._0_8_;
  *(undefined8 *)((pFVar22->ProjectionMatrix).M[1] + 2) = local_98.M[1]._8_8_;
  *(undefined8 *)(pFVar22->ProjectionMatrix).M[2] = local_98.M[2]._0_8_;
  *(undefined8 *)((pFVar22->ProjectionMatrix).M[2] + 2) = local_98.M[2]._8_8_;
  *(undefined8 *)(pFVar22->ProjectionMatrix).M[3] = local_98.M[3]._0_8_;
  *(undefined8 *)((pFVar22->ProjectionMatrix).M[3] + 2) = local_98.M[3]._8_8_;
  bVar17 = IsWholeSceneDirectionalShadow(this);
  fVar34 = __real_3f800000;
  if ((!bVar17) && (this->bDirectionalLight != 1 || this->bPreShadow != 1)) {
    fVar34 = 0.0;
  }
  pFVar22->bClampToNearPlane = fVar34;
  pFVar22->InvMaxSubjectDepth = this->InvMaxSubjectDepth;
  SetupTranslucentSelfShadowUniformParameters(this,&pFVar22->TranslucentSelfShadow);
  pFVar23 = FTranslucencyDepthPassUniformParameters::GetStructMetadata();
  FRDGUserValidation::ValidateCreateUniformBuffer(&param_1->UserValidation,pFVar22,pFVar23);
  pFVar23 = FTranslucencyDepthPassUniformParameters::GetStructMetadata();
  pwVar3 = pFVar23->ShaderVariableName;
  pTVar24 = FMemStackBase::Alloc((FMemStackBase *)&local_258->_padding_,0x50,8);
  pTVar24 = TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters>::
            TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters>(pTVar24,pFVar22,pwVar3);
  iVar18 = (param_1->UniformBuffers).Array.ArrayNum;
  piVar1 = &(param_1->UniformBuffers).Array.ArrayMax;
  local_208 = pTVar24;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
                       (0x808,(ForElementType<FRDGUniformBuffer_*> *)&param_1->UniformBuffers,piVar1
                       );
  }
  pFVar14 = local_258;
  (param_1->UniformBuffers).Array.ArrayNum = iVar18 + 1;
  (param_1->UniformBuffers).Array.AllocatorInstance.Data[iVar18] = (FRDGUniformBuffer *)pTVar24;
  *(int *)&pTVar24->_padding_ = (param_1->UniformBuffers).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUniformBuffer
            (&local_258->UserValidation,(FRDGUniformBuffer *)pTVar24);
  puVar25 = FMemStackBase::Alloc((FMemStackBase *)&pFVar14->_padding_,400,0x10);
  if (puVar25 == (undefined8 *)0x0) {
    puVar25 = (undefined8 *)0x0;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar25 + 3) = 1;
    *puVar25 = &___7__TObject_VFTranslucencyDepthPassParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar25 + 5) = 1;
    puVar25[2] = 0;
    puVar25[4] = 0;
    puVar25[6] = 0;
    *(undefined4 *)(puVar25 + 7) = 4;
    puVar25[8] = 0;
    *(undefined4 *)(puVar25 + 9) = 8;
    puVar25[0xc] = 0;
    *(undefined1 *)(puVar25 + 0xd) = 1;
    puVar25[0xe] = 0;
    *(undefined1 *)(puVar25 + 0xf) = 1;
    puVar25[0x10] = 0;
    *(undefined1 *)(puVar25 + 0x11) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar25 + 0x12));
  }
  local_268 = puVar25;
  if ((((undefined8 **)pFVar14->_padding_ <= &local_268) &&
      (&local_268 < (undefined8 **)pFVar14->_padding_ + *(int *)((longlong)&pFVar14->_padding_ + 4))
      ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = (int)pFVar14->_padding_;
  if (iVar18 == *(int *)((longlong)&pFVar14->_padding_ + 4)) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar14->_padding_,
                        (int *)((longlong)&pFVar14->_padding_ + 4));
  }
  local_270 = (FName)(puVar25 + 2);
  *(int *)&pFVar14->_padding_ = iVar18 + 1;
  *(undefined8 **)(pFVar14->_padding_ + (longlong)iVar18 * 8) = local_268;
  pFVar2 = this->ShadowDepthView;
  pFVar23 = FViewUniformShaderParameters::GetStructMetadata();
  FVar6 = local_270;
  local_228 = (TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> *)pFVar2->_padding_;
  EStack_220 = Static;
  if (pFVar23->BindingFlags != StaticAndShader) {
    EStack_220 = pFVar23->BindingFlags;
  }
  *(TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> **)
   (TUniformBufferBinding<FViewUniformShaderParameters> *)local_270 = local_228;
  *(ulonglong *)&((TUniformBufferBinding<FViewUniformShaderParameters> *)local_270)->field_0x8 =
       CONCAT71(uStack_21f,EStack_220);
  pFVar23 = FTranslucencyDepthPassUniformParameters::GetStructMetadata();
  EStack_220 = Static;
  if (pFVar23->BindingFlags != StaticAndShader) {
    EStack_220 = pFVar23->BindingFlags;
  }
  local_228 = local_208;
  *(TRDGUniformBuffer<FTranslucencyDepthPassUniformParameters> **)((longlong)FVar6 + 0x10) =
       local_208;
  *(ulonglong *)
   &((TRDGUniformBufferBinding<FTranslucencyDepthPassUniformParameters> *)((longlong)FVar6 + 0x10))
    ->field_0x8 = CONCAT71(uStack_21f,EStack_220);
  do {
    pFVar7 = (param_3->Output).Elements[0].ResolveTexture;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[0].Texture =
         (param_3->Output).Elements[0].Texture;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[0].ResolveTexture =
         pFVar7;
    uVar10 = (param_3->Output).Elements[0].MipIndex;
    sVar11 = (param_3->Output).Elements[0].ArraySlice;
    uVar12 = *(undefined4 *)&(param_3->Output).Elements[0].field_0x14;
    pFVar7 = (param_3->Output).Elements[1].Texture;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[0].LoadAction =
         (param_3->Output).Elements[0].LoadAction;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[0].MipIndex =
         uVar10;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[0].ArraySlice =
         sVar11;
    *(undefined4 *)
     &(((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[0].field_0x14 =
         uVar12;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[1].Texture = pFVar7
    ;
    EVar13 = (param_3->Output).Elements[1].LoadAction;
    uVar10 = (param_3->Output).Elements[1].MipIndex;
    sVar11 = (param_3->Output).Elements[1].ArraySlice;
    uVar12 = *(undefined4 *)&(param_3->Output).Elements[1].field_0x14;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[1].ResolveTexture =
         (param_3->Output).Elements[1].ResolveTexture;
    pFVar9 = &((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets;
    (pFVar9->Output).Elements[1].LoadAction = EVar13;
    (pFVar9->Output).Elements[1].MipIndex = uVar10;
    (pFVar9->Output).Elements[1].ArraySlice = sVar11;
    *(undefined4 *)&(pFVar9->Output).Elements[1].field_0x14 = uVar12;
    pFVar7 = (param_3->Output).Elements[2].ResolveTexture;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[2].Texture =
         (param_3->Output).Elements[2].Texture;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[2].ResolveTexture =
         pFVar7;
    uVar10 = (param_3->Output).Elements[2].MipIndex;
    sVar11 = (param_3->Output).Elements[2].ArraySlice;
    uVar12 = *(undefined4 *)&(param_3->Output).Elements[2].field_0x14;
    pFVar7 = (param_3->Output).Elements[3].Texture;
    pFVar9 = &((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets;
    (pFVar9->Output).Elements[2].LoadAction = (param_3->Output).Elements[2].LoadAction;
    (pFVar9->Output).Elements[2].MipIndex = uVar10;
    (pFVar9->Output).Elements[2].ArraySlice = sVar11;
    *(undefined4 *)&(pFVar9->Output).Elements[2].field_0x14 = uVar12;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[3].Texture = pFVar7
    ;
    EVar13 = (param_3->Output).Elements[3].LoadAction;
    uVar10 = (param_3->Output).Elements[3].MipIndex;
    sVar11 = (param_3->Output).Elements[3].ArraySlice;
    uVar12 = *(undefined4 *)&(param_3->Output).Elements[3].field_0x14;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[3].ResolveTexture =
         (param_3->Output).Elements[3].ResolveTexture;
    pFVar9 = &((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets;
    (pFVar9->Output).Elements[3].LoadAction = EVar13;
    (pFVar9->Output).Elements[3].MipIndex = uVar10;
    (pFVar9->Output).Elements[3].ArraySlice = sVar11;
    *(undefined4 *)&(pFVar9->Output).Elements[3].field_0x14 = uVar12;
    pFVar7 = (param_3->Output).Elements[4].ResolveTexture;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[4].Texture =
         (param_3->Output).Elements[4].Texture;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[4].ResolveTexture =
         pFVar7;
    uVar10 = (param_3->Output).Elements[4].MipIndex;
    sVar11 = (param_3->Output).Elements[4].ArraySlice;
    uVar12 = *(undefined4 *)&(param_3->Output).Elements[4].field_0x14;
    pFVar7 = (param_3->Output).Elements[5].Texture;
    pFVar9 = &((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets;
    (pFVar9->Output).Elements[4].LoadAction = (param_3->Output).Elements[4].LoadAction;
    (pFVar9->Output).Elements[4].MipIndex = uVar10;
    (pFVar9->Output).Elements[4].ArraySlice = sVar11;
    *(undefined4 *)&(pFVar9->Output).Elements[4].field_0x14 = uVar12;
    (((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets).Output.Elements[5].Texture = pFVar7
    ;
    lVar33 = lVar33 + -1;
    param_3 = (FRenderTargetBindingSlots *)&(param_3->Output).Elements[5].ResolveTexture;
    FVar6 = (FName)&((FTranslucencyDepthPassParameters *)FVar6)->RenderTargets;
  } while (lVar33 != 0);
  pFVar2 = this->ShadowDepthView;
  puVar25 = FMemStackBase::Alloc((FMemStackBase *)&local_258->_padding_,0x220,0x10);
  if (puVar25 == (undefined8 *)0x0) {
    puVar25 = (undefined8 *)0x0;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    *puVar25 = &___7__TObject_VFSimpleMeshDrawCommandPass___FRDGAllocator__6B_;
    FSimpleMeshDrawCommandPass::FSimpleMeshDrawCommandPass
              ((FSimpleMeshDrawCommandPass *)(puVar25 + 2),(FSceneView *)pFVar2,
               (FInstanceCullingManager *)local_248,false);
  }
  local_260 = puVar25;
  if ((((undefined8 **)pFVar14->_padding_ <= &local_260) &&
      (&local_260 < (undefined8 **)pFVar14->_padding_ + *(int *)((longlong)&pFVar14->_padding_ + 4))
      ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = (int)pFVar14->_padding_;
  if (iVar18 == *(int *)((longlong)&pFVar14->_padding_ + 4)) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar14->_padding_,
                        (int *)((longlong)&pFVar14->_padding_ + 4));
  }
  *(int *)&pFVar14->_padding_ = iVar18 + 1;
  local_1c8 = DepthRead_StencilRead;
  pFStack_1c0 = (FRHIUniformBuffer *)0x0;
  *(undefined8 **)(pFVar14->_padding_ + (longlong)iVar18 * 8) = local_260;
  pFStack_1d0 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                ::StaticResource.StateRHI.Reference;
  local_1d8 = TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,15,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
              ::StaticResource.StateRHI.Reference;
  local_1a8 = (FRHIUniformBuffer *)0x0;
  uStack_1a0 = 0;
  local_248 = (FSimpleMeshDrawCommandPass *)(puVar25 + 2);
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)&local_178,Num,*(FScene **)&local_250->field_0x8,
             *(Type *)&(*(FScene **)&local_250->field_0x8)->field_0x8,
             (FSceneView *)this->ShadowDepthView,(FMeshPassDrawListContext *)(puVar25 + 0x3d));
  local_178.PassDrawRenderState._20_4_ = uStack_1c4;
  local_178.PassDrawRenderState.DepthStencilAccess = local_1c8;
  uVar31 = 0;
  local_178._padding_ = (longlong)&___7FTranslucencyDepthPassMeshProcessor__6B_;
  local_178.bDirectionalLight = this->bDirectionalLight;
  local_178.PassDrawRenderState.BlendState = local_1d8;
  local_178.PassDrawRenderState.DepthStencilState = pFStack_1d0;
  local_178.PassDrawRenderState._60_4_ = uStack_19c;
  local_178.PassDrawRenderState.StencilRef = uStack_1a0;
  local_178.PassDrawRenderState.ViewUniformBuffer = pFStack_1c0;
  local_178.PassDrawRenderState.InstancedViewUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_178.PassDrawRenderState.PassUniformBuffer = (FRHIUniformBuffer *)0x0;
  local_178.PassDrawRenderState.NaniteUniformBuffer = local_1a8;
  local_178.ShadowInfo = this;
  if (0 < (this->DynamicSubjectTranslucentMeshElements).ArrayNum) {
    lVar33 = 0;
    do {
      uVar32 = 0;
      if ((int)uVar31 < (this->DynamicSubjectTranslucentMeshElements).ArrayNum) {
        uVar32 = ~uVar31 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->DynamicSubjectTranslucentMeshElements).AllocatorInstance.Data;
      FTranslucencyDepthPassMeshProcessor::AddMeshBatch
                (&local_178,*(FMeshBatch **)((longlong)&pFVar4->Mesh + lVar33),0xffffffffffffffff,
                 *(FPrimitiveSceneProxy **)((longlong)&pFVar4->PrimitiveSceneProxy + lVar33),-1);
      uVar31 = uVar31 + 1;
      lVar33 = lVar33 + 0x18;
    } while ((int)uVar31 < (this->DynamicSubjectTranslucentMeshElements).ArrayNum);
  }
  uVar31 = 0;
  this_01 = (FSimpleMeshDrawCommandPass *)(puVar25 + 2);
  if (0 < (this->SubjectTranslucentPrimitives).ArrayNum) {
    lVar33 = 0;
    do {
      uVar32 = 0;
      if ((int)uVar31 < (this->SubjectTranslucentPrimitives).ArrayNum) {
        uVar32 = ~uVar31 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = this->ShadowDepthView;
      this_00 = *(FPrimitiveSceneInfo **)
                 ((longlong)(this->SubjectTranslucentPrimitives).AllocatorInstance.Data + lVar33);
      uVar32 = this_00->PackedIndex;
      uVar19 = 0;
      if ((int)uVar32 < (pFVar2->PrimitiveViewRelevanceMap).ArrayNum) {
        uVar19 = ~uVar32 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar32 = *(uint *)&(pFVar2->PrimitiveViewRelevanceMap).AllocatorInstance.Data[(int)uVar32].
                         field_0x8;
      if (ZPULL(uVar32,0x10,1) == 0) {
        lVar26 = (**(code **)(this_00->Proxy->_padding_ + 0xd0))
                           (this_00->Proxy,local_e8,this->ShadowDepthView);
        uVar32 = *(uint *)(lVar26 + 8);
      }
      if (((uVar32 & 4) != 0) && ((uVar32 & 1) != 0)) {
        FPrimitiveSceneInfo::GetStaticMeshesLODRange(this_00,&local_277,local_276);
        uVar32 = 0;
        if (0 < (this_00->StaticMeshes).ArrayNum) {
          lVar26 = 0;
          do {
            uVar19 = 0;
            if ((int)uVar32 < (this_00->StaticMeshes).ArrayNum) {
              uVar19 = ~uVar32 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar29 = (FMeshBatch *)((this_00->StaticMeshes).AllocatorInstance.Data + lVar26);
            if (pFVar29->LODIndex == local_277) {
              FTranslucencyDepthPassMeshProcessor::AddMeshBatch
                        (&local_178,pFVar29,0xffffffff,
                         *(FPrimitiveSceneProxy **)
                          (*(longlong *)pFVar29[1].Elements.AllocatorInstance.InlineData + 8),
                         *(int *)(pFVar29[1].Elements.AllocatorInstance.InlineData + 8));
            }
            uVar32 = uVar32 + 1;
            lVar26 = lVar26 + 0xf0;
            this = local_200;
          } while ((int)uVar32 < (this_00->StaticMeshes).ArrayNum);
        }
      }
      uVar31 = uVar31 + 1;
      lVar33 = lVar33 + 8;
      this_01 = local_248;
    } while ((int)uVar31 < (this->SubjectTranslucentPrimitives).ArrayNum);
  }
  pFVar14 = local_258;
  FVar6 = local_270;
  FSimpleMeshDrawCommandPass::BuildRenderingCommands
            (this_01,local_258,(FSceneView *)this->ShadowDepthView,
             (FGPUScene *)(*(longlong *)&local_250->field_0x8 + 0x3500),
             (FInstanceCullingDrawParams *)((longlong)local_270 + 0x20));
  local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.Data.ArrayNum = 0;
  local_240.Data.ArrayMax = 0;
  bVar17 = GetEmitDrawEvents();
  if (bVar17) {
    GetShadowTypeNameForDrawEvent(this,&local_240);
  }
  local_1f8.PassParameters = (FTranslucencyDepthPassParameters *)FVar6;
  local_1f8.__this = this;
  local_1f8.SimpleMeshDrawCommandPass = this_01;
  pFVar27 = FRDGEventName::FRDGEventName(&local_190,L"%s");
  FRDGBuilder::
  AddPass<FTranslucencyDepthPassParameters,_FProjectedShadowInfo::RenderTranslucencyDepths_::__l2::<lambda_1>_>
            (pFVar14,pFVar27,(FTranslucencyDepthPassParameters *)FVar6,Raster,&local_1f8);
  if (local_190.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  local_178._padding_ = (longlong)&___7IPSOCollector__6B_;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  return;
}

// operator() @ 1504d1110

bool __thiscall
`FProjectedShadowInfo::UseShadowStencilCulling'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3477770809257229653>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3477770809257229653>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


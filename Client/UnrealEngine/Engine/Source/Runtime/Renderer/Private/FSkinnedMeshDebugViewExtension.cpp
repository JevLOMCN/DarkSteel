// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FSkinnedMeshDebugViewExtension @ 145665e50

FSkinnedMeshDebugViewExtension * __thiscall
FSkinnedMeshDebugViewExtension::FSkinnedMeshDebugViewExtension
          (FSkinnedMeshDebugViewExtension *this,FAutoRegister *param_1)

{
  <lambda_1> local_res8 [32];
  
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  *(undefined ***)this = &___7FSkinnedMeshDebugViewExtension__6B_;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FSkinnedMeshDebugViewExtension::FSkinnedMeshDebugViewExtension_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEnginePreExit,local_res8);
  return this;
}

// operator() @ 14566a140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
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

void __thiscall
`FSkinnedMeshDebugViewExtension::RenderSkeletons'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  int iVar1;
  FShaderMapResource *pFVar2;
  longlong lVar3;
  FShader *pFVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  atomic<FRHIShader_*> aVar8;
  FShaderParametersMetadata *pFVar9;
  IRHICommandContext *pIVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  void *pvVar13;
  int *piVar14;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [4];
  int local_174;
  int local_170;
  void *local_168;
  uint local_160;
  int *local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_150;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_140;
  FGraphicsPipelineStateInitializer local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
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
  FRHICommandList::ApplyCachedRenderTargets(param_2,&local_128);
  FRHICommandList::SetViewport
            (param_2,(float)*(int *)((longlong)this + 0x28),(float)*(int *)((longlong)this + 0x2c),
             0.0,(float)*(int *)((longlong)this + 0x30),(float)*(int *)((longlong)this + 0x34),
             __real_3f800000);
  local_128.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_128.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GEmptyVertexDeclaration._32_8_;
  local_128.PrimitiveType = PT_LineList;
  local_128.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FSkinnedMeshDrawLineVS,FShaderMapPointerTable>::GetVertexShader(this,true);
  local_128.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FSkinnedMeshDrawLinePS,FShaderMapPointerTable>::GetPixelShader
                 ((TShaderRefBase<FSkinnedMeshDrawLinePS,FShaderMapPointerTable> *)
                  ((longlong)this + 0x10),true);
  SetGraphicsPipelineState(param_2,&local_128,0,CheckApply,true);
  local_160 = *(uint *)((longlong)this + 0x40);
  uVar12 = (ulonglong)(int)local_160;
  piVar14 = *(int **)((longlong)this + 0x38);
  local_158 = piVar14 + uVar12 * 3;
  while( true ) {
    piVar6 = local_158;
    aVar8 = (atomic<FRHIShader_*>)0x0;
    if (*(int *)((longlong)this + 0x40) != (int)uVar12) {
      local_178[0] = 0;
      `TCheckedPointerIterator<FSkinnedMeshPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_178);
    }
    if (piVar14 == piVar6) break;
    local_174 = piVar14[1];
    local_170 = piVar14[2];
    if (*piVar14 == -1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Primitive.Index.Index != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinnedMeshDebugView.cpp"
                         ,0xde,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(int *)(*(longlong *)((longlong)this + 0x20) + 0x20) = *piVar14;
    pvVar13 = *(void **)((longlong)this + 0x20);
    local_168 = pvVar13;
    if (*(longlong *)this != 0) {
      pFVar2 = *(FShaderMapResource **)(*(longlong *)((longlong)this + 8) + 8);
      if (pFVar2 == (FShaderMapResource *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      aVar8 = (pFVar2->RHIShaders).Ptr[*(int *)(*(longlong *)this + 0xd4)];
      if (aVar8 == (atomic<FRHIShader_*>)0x0) {
        aVar8 = (atomic<FRHIShader_*>)
                FShaderMapResource::CreateShaderOrCrash
                          (pFVar2,*(int *)(*(longlong *)this + 0xd4),true);
        if (aVar8 == (atomic<FRHIShader_*>)0x0) {
          if (4 < (byte)LogShaders._0_1_) {
            lVar3 = *(longlong *)((longlong)this + 8);
            pFVar4 = *(FShader **)this;
            if (*(longlong *)(lVar3 + 0x18) == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L"");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            FShader::GetType(pFVar4,*(FShaderMapPointerTable **)(lVar3 + 0x18));
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSkinnedMeshDrawLineVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
            pvVar13 = local_168;
          }
          aVar8 = (atomic<FRHIShader_*>)0x0;
        }
      }
    }
    pFVar9 = FSkinnedMeshDrawLineVS::FParameters::FTypeInfo::GetStructMetadata();
    local_150.ShaderContent = *(FShader **)this;
    local_150.ShaderMap = *(FShaderMapBase **)((longlong)this + 8);
    ValidateShaderParameters(&local_150,pFVar9,pvVar13);
    ::SetShaderParameters
              (param_2,(FRHIGraphicsShader *)aVar8,*(FShaderParameterBindings **)this,pFVar9,pvVar13
              );
    aVar8 = (atomic<FRHIShader_*>)0x0;
    pvVar13 = (void *)(*(longlong *)((longlong)this + 0x20) + 0x30);
    if (*(longlong *)((longlong)this + 0x10) != 0) {
      pFVar2 = *(FShaderMapResource **)(*(longlong *)((longlong)this + 0x18) + 8);
      if (pFVar2 == (FShaderMapResource *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0xd4);
      aVar8 = (pFVar2->RHIShaders).Ptr[iVar1];
      if (aVar8 == (atomic<FRHIShader_*>)0x0) {
        aVar8 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(pFVar2,iVar1,true);
        if (aVar8 == (atomic<FRHIShader_*>)0x0) {
          if (4 < (byte)LogShaders._0_1_) {
            pFVar4 = *(FShader **)((longlong)this + 0x10);
            lVar3 = *(longlong *)((longlong)this + 0x18);
            local_168 = (void *)CONCAT44(local_168._4_4_,pFVar4->ResourceIndex);
            if (*(longlong *)(lVar3 + 0x18) == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L"");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            FShader::GetType(pFVar4,*(FShaderMapPointerTable **)(lVar3 + 0x18));
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FSkinnedMeshDrawLinePS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          aVar8 = (atomic<FRHIShader_*>)0x0;
        }
      }
    }
    pFVar9 = FSkinnedMeshDrawLinePS::FParameters::FTypeInfo::GetStructMetadata();
    local_140.ShaderContent = *(FShader **)((longlong)this + 0x10);
    local_140.ShaderMap = *(FShaderMapBase **)((longlong)this + 0x18);
    ValidateShaderParameters(&local_140,pFVar9,pvVar13);
    ::SetShaderParameters
              (param_2,(FRHIGraphicsShader *)aVar8,
               *(FShaderParameterBindings **)((longlong)this + 0x10),pFVar9,pvVar13);
    if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
      puVar11 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x20,8);
      *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
      uVar12 = (ulonglong)local_160;
      piVar14 = piVar14 + 3;
      **(undefined8 **)&param_2->field_0x30 = puVar11;
      *(undefined8 **)&param_2->field_0x30 = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &___7FRHICommandDrawPrimitive__6B_;
      *(int *)((longlong)puVar11 + 0x14) = local_174;
      *(int *)(puVar11 + 3) = local_170;
      *(undefined4 *)(puVar11 + 2) = 0;
    }
    else {
      pIVar10 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_2);
      (**(code **)(pIVar10->_padding_ + 0x1e0))(pIVar10,0,local_174,local_170);
      uVar12 = (ulonglong)local_160;
      piVar14 = piVar14 + 3;
    }
  }
  return;
}

// PostProcessPass_RenderThread @ 14568f5b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTexture * __thiscall
FSkinnedMeshDebugViewExtension::PostProcessPass_RenderThread
          (FSkinnedMeshDebugViewExtension *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1,FSceneView *param_2,FPostProcessMaterialInputs *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FScreenPassTexture *pFVar9;
  int iVar10;
  int iVar11;
  FRDGTexture *pFVar12;
  FScreenPassRenderTarget local_50;
  
  lVar8 = 0x98;
  if ((param_3->bUserSceneTexturesSet).Elements[0] == false) {
    lVar8 = 0x20;
  }
  lVar3 = *(longlong *)((longlong)(param_3->Textures).Elements + lVar8 + -0x20);
  lVar4 = *(longlong *)((longlong)((param_3->Textures).Elements + -1) + lVar8);
  lVar8 = *(longlong *)((longlong)(param_3->Textures).Elements + lVar8 + -0x10);
  iVar11 = (int)lVar8;
  iVar10 = (int)((ulonglong)lVar8 >> 0x20);
  if ((lVar3 == 0) || ((iVar11 == (int)lVar4 && (iVar10 == (int)((ulonglong)lVar4 >> 0x20))))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneColorSlice.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinnedMeshDebugView.cpp"
                       ,0x6e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FScreenPassTexture *)(*pcVar5)();
      return pFVar9;
    }
    if (lVar3 == 0) {
      pFVar12 = (FRDGTexture *)0x0;
      goto LAB_14568f6f4;
    }
  }
  pFVar12 = *(FRDGTexture **)(lVar3 + 0x40);
  if (pFVar12 != (FRDGTexture *)0x0) {
    cVar1 = (pFVar12->Desc).field_0x32;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      if ((*(short *)(lVar3 + 0x34) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScreenTexture.TextureSRV->Desc.FirstArraySlice == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                             ,0x6b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FScreenPassTexture *)(*pcVar5)();
        return pFVar9;
      }
      if ((*(short *)(lVar3 + 0x36) != 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ScreenTexture.TextureSRV->Desc.NumArraySlices == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                             ,0x6c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FScreenPassTexture *)(*pcVar5)();
        return pFVar9;
      }
    }
    iVar2 = (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar7 = iVar11;
    if (iVar11 < iVar2) {
      iVar7 = iVar2;
    }
    iVar2 = (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.Y;
    (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.X = iVar7;
    iVar7 = iVar10;
    if (iVar10 < iVar2) {
      iVar7 = iVar2;
    }
    (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar7;
  }
LAB_14568f6f4:
  local_50._padding_ = (param_3->OverrideOutput)._padding_;
  local_50._padding_ = (param_3->OverrideOutput)._padding_;
  local_50._padding_ = (param_3->OverrideOutput)._padding_;
  local_50.LoadAction = (param_3->OverrideOutput).LoadAction;
  if ((((FRDGTexture *)local_50._padding_ == (FRDGTexture *)0x0) ||
      (((int)local_50._padding_ == (int)local_50._padding_ &&
       ((int)((ulonglong)local_50._padding_ >> 0x20) == (int)((ulonglong)local_50._padding_ >> 0x20)
       )))) && (local_50.LoadAction = -(param_2->bHMDHiddenAreaMaskActive != false) & EClear,
               local_50._padding_ = (longlong)pFVar12, local_50._padding_ = lVar4,
               local_50._padding_ = lVar8, pFVar12 != (FRDGTexture *)0x0)) {
    iVar2 = (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.X;
    if (iVar11 < iVar2) {
      iVar11 = iVar2;
    }
    (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.X = iVar11;
    iVar11 = (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.Y;
    if (iVar10 < iVar11) {
      iVar10 = iVar11;
    }
    (pFVar12->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar10;
  }
  RenderSkeletons(this,param_1,param_2,&local_50);
  __return_storage_ptr__->Texture = (FRDGTexture *)local_50._padding_;
  *(longlong *)&(__return_storage_ptr__->ViewRect).field0_0x0 = local_50._padding_;
  *(longlong *)((longlong)&(__return_storage_ptr__->ViewRect).field0_0x0 + 8) = local_50._padding_;
  return __return_storage_ptr__;
}

// RenderSkeletons @ 145698320

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSkinnedMeshDebugViewExtension::RenderSkeletons
          (FSkinnedMeshDebugViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2,
          FScreenPassRenderTarget *param_3)

{
  int *piVar1;
  FSkinnedMeshDrawLineParameters *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FSceneInterface *pFVar5;
  FSkinningSceneExtension *this_00;
  FSceneViewFamily *pFVar6;
  TIntPoint<int>_u_0 TVar7;
  TIntPoint<int>_u_0 TVar8;
  ISceneRenderer *pIVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  FGlobalShaderMap *this_01;
  FShaderType *pFVar15;
  FName FVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  FShaderParametersMetadata *pFVar19;
  FRDGEventName *pFVar20;
  code *pcVar21;
  EUniformBufferBindingFlags EVar22;
  ForAnyElementType FVar23;
  undefined1 local_158 [8];
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined8 *local_140;
  TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> local_138;
  FRenderTargetBinding local_128;
  FShaderMapBase *local_108;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_100;
  FShaderMapBase *local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  FShader *local_c8;
  FShaderMapBase *local_c0;
  FShader *local_b8;
  FShaderMapBase *local_b0;
  FSkinnedMeshDrawLineParameters *local_a8;
  TIntRect<int>_u_0 local_a0;
  ForAnyElementType local_90;
  int local_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  FRDGEventName local_50;
  
  if (param_2->Family == (FSceneViewFamily *)0x0) {
    return;
  }
  pFVar5 = param_2->Family->Scene;
  if (pFVar5 == (FSceneInterface *)0x0) {
    return;
  }
  lVar13 = (**(code **)(pFVar5->_padding_ + 0x420))();
  if (lVar13 == 0) {
    return;
  }
  if ((int)FSkinningSceneExtension::ExtensionRegistration._8_4_ < 0) {
    return;
  }
  if (*(int *)(lVar13 + 0x4d28) <= (int)FSkinningSceneExtension::ExtensionRegistration._8_4_) {
    return;
  }
  lVar14 = *(longlong *)(lVar13 + 0x4d20);
  if (*(longlong *)(lVar13 + 0x4d20) == 0) {
    lVar14 = lVar13 + 0x4d10;
  }
  if ((*(uint *)(lVar14 + (longlong)
                          ((int)(FSkinningSceneExtension::ExtensionRegistration._8_4_ +
                                ((int)FSkinningSceneExtension::ExtensionRegistration._8_4_ >> 0x1f &
                                0x1fU)) >> 5) * 4) >>
       (FSkinningSceneExtension::ExtensionRegistration._8_4_ & 0x1f) & 1) == 0) {
    return;
  }
  this_00 = *(FSkinningSceneExtension **)
             (*(longlong *)(lVar13 + 0x4d00) +
             (longlong)(int)FSkinningSceneExtension::ExtensionRegistration._8_4_ * 8);
  if (this_00 == (FSkinningSceneExtension *)0x0) {
    return;
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  FSkinningSceneExtension::GetSkinnedPrimitives(this_00,&local_138);
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  if (local_138.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_138._8_8_ & 0xffffffff);
  }
  if (0 < local_138.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_138.ArrayNum,&local_150,0,(int *)((longlong)&local_148 + 4));
  }
  iVar12 = local_138.ArrayNum;
  pFVar3 = local_138.AllocatorInstance.Data + (longlong)local_138.ArrayNum * 8;
  FVar23.Data = local_138.AllocatorInstance.Data;
  while( true ) {
    if (local_138.ArrayNum != iVar12) {
      local_158[0] = 0;
      `TCheckedPointerIterator<FPrimitiveSceneInfo_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_158);
    }
    if (FVar23.Data == pFVar3) break;
    lVar13 = *(longlong *)FVar23.Data;
    if ((((lVar13 != 0) && (*(int *)(lVar13 + 0x18c) != -1)) &&
        (*(longlong **)(lVar13 + 8) != (longlong *)0x0)) &&
       ((lVar14 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x180))(), lVar14 != 0 &&
        ((*(byte *)(lVar14 + 0x3e) & 4) == 0)))) {
      iVar11 = (int)local_148;
      if ((int)local_148 == local_148._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_150,(int *)((longlong)&local_148 + 4));
      }
      local_148 = CONCAT44(local_148._4_4_,iVar11 + 1);
      pFVar4 = local_150.Data + (longlong)iVar11 * 0xc;
      DefaultConstructItems<FSkinnedMeshPrimitive,int>(pFVar4,1);
      *(undefined4 *)pFVar4 = *(undefined4 *)(lVar13 + 0x18c);
      *(uint *)(pFVar4 + 4) = (uint)*(ushort *)(lVar14 + 0x38);
      *(undefined4 *)(pFVar4 + 8) = *(undefined4 *)(lVar13 + 0x228);
    }
    FVar23.Data = FVar23.Data + 8;
  }
  if ((int)local_148 == 0) goto LAB_1456989a3;
  this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_2->FeatureLevel]
                              );
  pFVar15 = (FShaderType *)FSkinnedMeshDrawLineVS::GetStaticType();
  FGlobalShaderMap::GetShader(this_01,&local_e8,pFVar15,0);
  if (local_e8.ShaderContent == (FShader *)0x0) {
    FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_80);
    ::FName::ToString((FName *)FVar16,&local_70);
    FSkinnedMeshDrawLineVS::GetStaticType();
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
  }
  FSkinnedMeshDrawLineVS::GetStaticType();
  local_f0 = local_e8.ShaderMap;
  pFVar15 = (FShaderType *)FSkinnedMeshDrawLinePS::GetStaticType();
  FGlobalShaderMap::GetShader(this_01,&local_d8,pFVar15,0);
  if (local_d8.ShaderContent == (FShader *)0x0) {
    FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_78);
    ::FName::ToString((FName *)FVar16,&local_60);
    FSkinnedMeshDrawLinePS::GetStaticType();
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (bVar10) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
  }
  FSkinnedMeshDrawLinePS::GetStaticType();
  local_108 = local_d8.ShaderMap;
  if ((local_e8.ShaderContent == (FShader *)0x0) || (local_d8.ShaderContent == (FShader *)0x0))
  goto LAB_1456989a3;
  pFVar6 = param_2->Family;
  TVar7 = (TIntPoint<int>_u_0)param_3->_padding_;
  TVar8 = (TIntPoint<int>_u_0)param_3->_padding_;
  if (pFVar6 == (FSceneViewFamily *)0x0) {
LAB_145698700:
    uVar17 = 0;
  }
  else {
    if ((pFVar6->SceneRenderer == (ISceneRenderer *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SceneRenderer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                            ,0xa7b,L""), bVar10)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    pIVar9 = pFVar6->SceneRenderer;
    if (pIVar9 == (ISceneRenderer *)0x0) goto LAB_145698700;
    uVar17 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,param_1);
  }
  puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x140,0x10);
  if (puVar18 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar10) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
  }
  else {
    *(undefined1 *)(puVar18 + 3) = 1;
    *puVar18 = &___7__TObject_VFSkinnedMeshDrawLineParameters___FRDGAllocator__6B_;
    *(undefined1 *)(puVar18 + 5) = 1;
    puVar18[2] = 0;
    puVar18[4] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar18 + 8))
    ;
  }
  local_140 = puVar18;
  if ((((undefined8 **)param_1->_padding_ <= &local_140) &&
      (&local_140 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  iVar12 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar12 + 1;
  pFVar2 = (FSkinnedMeshDrawLineParameters *)(puVar18 + 2);
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar12 * 8) = local_140;
  pFVar19 = FViewUniformShaderParameters::GetStructMetadata();
  EVar22 = Static;
  if (pFVar19->BindingFlags != StaticAndShader) {
    EVar22 = pFVar19->BindingFlags;
  }
  local_128.ResolveTexture = (FRDGTexture *)CONCAT71(local_128.ResolveTexture._1_7_,EVar22);
  local_128.Texture = *(FRDGTexture **)&param_2->ViewUniformBuffer;
  *(FRDGTexture **)&(pFVar2->VSParameters).View = local_128.Texture;
  puVar18[3] = local_128.ResolveTexture;
  pFVar19 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EVar22 = Static;
  if (pFVar19->BindingFlags != StaticAndShader) {
    EVar22 = pFVar19->BindingFlags;
  }
  local_128.ResolveTexture = (FRDGTexture *)CONCAT71(local_128.ResolveTexture._1_7_,EVar22);
  puVar18[4] = uVar17;
  puVar18[5] = local_128.ResolveTexture;
  local_128.Texture = (FRDGTexture *)param_3->_padding_;
  local_128.LoadAction = param_3->LoadAction;
  local_128.ArraySlice = -1;
  local_128.ResolveTexture = (FRDGTexture *)0x0;
  local_128.MipIndex = '\0';
  bVar10 = FRenderTargetBinding::Validate(&local_128);
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar10)) {
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  puVar18[8] = local_128.Texture;
  puVar18[9] = local_128.ResolveTexture;
  local_c0 = local_f0;
  puVar18[10] = CONCAT44(local_128._20_4_,
                         CONCAT22(local_128.ArraySlice,
                                  CONCAT11(local_128.MipIndex,local_128.LoadAction)));
  local_b0 = local_108;
  local_90.Data = local_150.Data;
  local_88 = (int)local_148;
  local_b8 = local_d8.ShaderContent;
  local_84 = local_148._4_4_;
  local_148 = 0;
  local_c8 = local_e8.ShaderContent;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_a8 = pFVar2;
  local_a0._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar7;
  local_a0._s_0.Max.field0_0x0 = (TIntPoint<int>)TVar8;
  pFVar20 = FRDGEventName::FRDGEventName(&local_50,1,L"RenderSkinnedMeshDebug");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDrawLineParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDrawLineParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDrawLineParameters::FTypeInfo::GetStructMetadata(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pcVar21 = FSkinnedMeshDrawLineParameters::zzAppendMemberGetPrev;
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    do {
      pcVar21 = (code *)(*pcVar21)((ulonglong)param_2 & 0xff,&local_100);
    } while (pcVar21 != (code *)0x0);
    AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
              ((FMember *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
    FShaderParametersMetadata::FShaderParametersMetadata
              (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDrawLineParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
               L"FSkinnedMeshDrawLineParameters",L"FSkinnedMeshDrawLineParameters",(wchar_t *)0x0,
               (wchar_t *)0x0,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinnedMeshDebugView.cpp"
               ,0x4d,0x130,&local_100,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
    if ((FMember *)local_100.AllocatorInstance.Data != (FMember *)0x0) {
      FMemory::Free(local_100.AllocatorInstance.Data);
    }
    atexit(`FSkinnedMeshDrawLineParameters::FTypeInfo::GetStructMetadata'::__l2::
           _dynamic_atexit_destructor_for__StaticStructMetadata__);
    _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDrawLineParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FRDGBuilder::
  AddPassInternal<FSkinnedMeshDrawLineParameters,_FSkinnedMeshDebugViewExtension::RenderSkeletons_::__l2::<lambda_1>_>
            (param_1,pFVar20,
             &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSkinnedMeshDrawLineParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata,pFVar2,Raster,(<lambda_1> *)&local_c8);
  if (local_50.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
LAB_1456989a3:
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  return;
}

// SubscribeToPostProcessingPass @ 1456a3f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkinnedMeshDebugViewExtension::SubscribeToPostProcessingPass
          (FSkinnedMeshDebugViewExtension *this,EPostProcessingPass param_1,FSceneView *param_2,
          TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3,bool param_4)

{
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *pTVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  pTVar3 = CVarSkinnedMeshDebugDraw.Ref;
  if (param_1 != VisualizeDepthOfField) {
    return;
  }
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar6 = 1;
    if (!bVar4) goto LAB_1456a3fe2;
  }
  lVar6 = 0;
LAB_1456a3fe2:
  if (pTVar3->ShadowedValue[lVar6] != false) {
    uStack_70 = 0;
    local_78 = PostProcessPass_RenderThread;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_50;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFSkinnedMeshDebugViewExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar7[3] = this;
      puVar7[4] = local_78;
      puVar7[5] = CONCAT44(uStack_6c,uStack_70);
      if (((this == (FSkinnedMeshDebugViewExtension *)0x0) || (puVar7[4] == 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    pTVar1 = (param_3->AllocatorInstance).Data;
    if (((pTVar1 <= (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                     *)local_58) &&
        ((TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
          *)local_58 < pTVar1 + param_3->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>_>
                        (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar5 + 1;
    pTVar1 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pTVar1 + iVar5) = 0;
    *(undefined8 *)&pTVar1[iVar5].field_0x8 = 0;
    *(undefined4 *)&pTVar1[iVar5].field_0x10 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
    if (*(void **)&pTVar1[iVar5].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar1[iVar5].field_0x8);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar1[iVar5].field_0x8 = local_50.DelegateAllocator;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar1[iVar5].field_0x10 = local_50.DelegateSize;
    local_50.DelegateSize = 0;
    if (local_68 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
                 (FDestructionSentinel *)&local_78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}


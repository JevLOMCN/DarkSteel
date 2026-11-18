// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FTranslucencyComposition @ 145195900

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FTranslucencyComposition * __thiscall
FTranslucencyComposition::FTranslucencyComposition(FTranslucencyComposition *this)

{
  (this->SceneColor).TextureSRV = (FRDGTextureSRV *)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneDepth).Texture = (FRDGTexture *)0x0;
  (this->SceneDepth).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneDepth).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->Operation = UpscaleOnly;
  this->bApplyModulateOnly = false;
  (this->OutputViewport).Extent.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->OutputViewport).Rect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->OutputViewport).Rect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->OutputPixelFormat = PF_Unknown;
  (this->LensDistortionLUT).DistortingDisplacementTexture = (FRDGTexture *)0x0;
  (this->LensDistortionLUT).UndistortingDisplacementTexture = (FRDGTexture *)0x0;
  (this->LensDistortionLUT).ResolutionFraction = 1.0;
  (this->LensDistortionLUT).DistortionOverscan = 1.0;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.X = 0x20;
  (this->LensDistortionLUT).DistortionGridDimensions.field0_0x0._s_0.Y = 0x14;
  return this;
}

// AddPass @ 145757660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FScreenPassTexture * __thiscall
FTranslucencyComposition::AddPass
          (FTranslucencyComposition *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FTranslucencyPassResources *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  char cVar7;
  Type TVar8;
  EOperation EVar9;
  TIntPoint<int>_u_0 TVar10;
  TIntPoint<int>_u_0 TVar11;
  TIntPoint<int>_u_0_s_0 TVar12;
  code *pcVar13;
  TVector2<float>_u_0 TVar14;
  float fVar15;
  TRefCountPtr<FRHISamplerState> TVar16;
  FViewInfo *pFVar17;
  bool bVar18;
  int iVar19;
  FScreenPassTexture *pFVar20;
  FScreenPassTextureViewport *pFVar21;
  FRDGScope *this_00;
  undefined8 *puVar22;
  FScreenTransform *pFVar23;
  FScreenTransform *pFVar24;
  FRDGTextureSRV *pFVar25;
  FRDGTexture *pFVar26;
  FShaderParametersMetadata *pFVar27;
  FRDGTexture *pFVar28;
  FShaderType *pFVar29;
  FName this_01;
  FRDGEventName *pFVar30;
  int iVar31;
  int iVar32;
  undefined4 uVar33;
  int iVar34;
  wchar_t *pwVar35;
  FRDGTexture *pFVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_498 [32];
  byte local_438;
  bool local_437;
  FRDGTexture *local_430;
  undefined1 local_428 [8];
  TIntPoint<int>_u_0 local_420;
  TIntRect<int>_u_0 local_418;
  FRDGTexture *local_408;
  wchar_t *local_400;
  TIntPoint<int>_u_0_s_0 local_3f8;
  float local_3f0;
  float fStack_3ec;
  undefined8 *local_3e8;
  FViewInfo *local_3e0;
  undefined8 local_3d8;
  TVector2<float>_u_0 local_3d0;
  float local_3c8;
  float local_3c4;
  FScreenPassTexture *local_3c0;
  FRDGTexture *local_3b8;
  EUniformBufferBindingFlags EStack_3b0;
  undefined7 uStack_3af;
  FRDGTextureSRVDesc local_3a8;
  TIntPoint<int>_u_0 local_390;
  TIntRect<int>_u_0 local_388;
  float local_378;
  float fStack_374;
  float local_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float local_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float local_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float local_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  int local_320;
  int iStack_31c;
  int local_318;
  int iStack_314;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  float local_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float local_2e0;
  float fStack_2dc;
  FRenderTargetBinding local_2d8;
  FRenderTargetBinding local_2c0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2a8;
  char local_298;
  TIntRect<int>_u_0 local_290;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_278;
  FRDGScopeState *local_268;
  FRDGScope *local_260;
  TIntRect<int>_u_0 local_258;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_>
  local_248;
  undefined1 local_228 [8];
  FString local_220;
  TShaderRefBase<FComposeSeparateTranslucencyPS,FShaderMapPointerTable> local_208;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  FRDGEventName local_1d8;
  FScreenTransform local_1c0;
  FScreenTransform local_1b0;
  FScreenTransform local_1a0;
  FScreenTransform local_190;
  FScreenTransform local_180;
  FScreenTransform local_170;
  FScreenTransform local_160;
  FScreenTransform local_150;
  FScreenPassTextureViewport local_140;
  undefined1 local_128 [24];
  float local_110;
  int local_10c;
  undefined4 local_108;
  TIntPoint<int>_u_0_s_0 local_104;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  void *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [24];
  float local_c0;
  int local_bc;
  undefined4 local_b8;
  TIntPoint<int>_u_0_s_0 local_b4;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  EPixelFormat local_a5;
  undefined2 local_a4;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_498;
  piVar3 = (int *)((longlong)&(param_3->ViewRect).field0_0x0 + 0xc);
  piVar1 = (int *)((longlong)&(param_3->ViewRect).field0_0x0 + 4);
  local_3e0 = param_2;
  local_3c0 = __return_storage_ptr__;
  if (((*(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 8) -
        *(int *)&(param_3->ViewRect).field0_0x0 < 1) || (*piVar3 - *piVar1 < 1)) &&
     (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8044027287852547512>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                          ,0x248,"TranslucencyTextures.IsValid()"), bVar18)) {
    pcVar13 = (code *)swi(3);
    pFVar20 = (FScreenPassTexture *)(*pcVar13)();
    return pFVar20;
  }
  if ((*(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 8) -
       *(int *)&(param_3->ViewRect).field0_0x0 < 1) || (*piVar3 - *piVar1 < 1)) {
LAB_145758abb:
    FScreenPassTexture::FScreenPassTexture(local_3c0,&this->SceneColor);
    pFVar20 = local_3c0;
  }
  else {
    if ((param_3->Pass == TPT_MAX) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8044027287852547506>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                            ,0x24e,"TranslucencyTextures.Pass != ETranslucencyPass::TPT_MAX"),
       bVar18)) {
      pcVar13 = (code *)swi(3);
      pFVar20 = (FScreenPassTexture *)(*pcVar13)();
      return pFVar20;
    }
    if (((param_3->ColorModulateTexture).Target == (FRDGTexture *)0x0) ||
       ((param_3->ColorModulateTexture).Resolve == (FRDGTexture *)0x0)) {
      local_3b8 = FSystemTextures::GetWhiteDummy((FSystemTextures *)&GSystemTextures,param_1);
    }
    else {
      local_3b8 = (param_3->ColorModulateTexture).Resolve;
    }
    if (((param_3->ColorTexture).Target == (FRDGTexture *)0x0) ||
       ((param_3->ColorTexture).Resolve == (FRDGTexture *)0x0)) {
      local_430 = FSystemTextures::GetBlackAlphaOneDummy
                            ((FSystemTextures *)&GSystemTextures,param_1);
    }
    else {
      local_430 = (param_3->ColorTexture).Resolve;
    }
    local_388._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)___xmm_00000001000000010000000000000000;
    local_330 = 1;
    uStack_32c = 1;
    local_390 = (TIntPoint<int>_u_0)&DAT_100000001;
    local_3d8 = (this->SceneColor).TextureSRV;
    local_388._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)_UNK_150df0138;
    if ((local_3d8 != (FRDGTextureSRV *)0x0) &&
       ((*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 8) !=
         *(int *)&(this->SceneColor).ViewRect.field0_0x0 ||
        (*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 0xc) !=
         *(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 4))))) {
      TVar10 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(this->SceneColor).ViewRect.field0_0x0;
      TVar11 = (TIntPoint<int>_u_0)
               *(TIntPoint<int>_u_0 *)
                &((TIntPoint<int>_u_0 *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 8))->
                 _s_0;
      if ((TVar11._s_0.X == TVar10._s_0.X) &&
         ((TVar11._s_0.Y == TVar10._s_0.Y &&
          (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("InTexture.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                               ,0xb2,L""), bVar18)))) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      local_390 = *(TIntPoint<int>_u_0 *)&(((local_3d8->Desc).Texture)->Desc).field_0x24;
      local_388._0_8_ = TVar10;
      local_388._8_8_ = TVar11;
    }
    local_418._s_0.Max.field0_0x0 = (TIntPoint<int>)_UNK_150df0138;
    local_418._s_0.Min.field0_0x0 = (TIntPoint<int>)___xmm_00000001000000010000000000000000;
    local_328 = 1;
    uStack_324 = 1;
    local_420 = (TIntPoint<int>_u_0)&DAT_100000001;
    if (((param_3->ColorTexture).Target == (FRDGTexture *)0x0) ||
       ((param_3->ColorTexture).Resolve == (FRDGTexture *)0x0)) {
      TVar10 = (TIntPoint<int>_u_0)&DAT_100000001;
      if (((param_3->ColorModulateTexture).Target != (FRDGTexture *)0x0) &&
         (TVar10 = local_420, (param_3->ColorModulateTexture).Resolve != (FRDGTexture *)0x0)) {
        local_258._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_3->ViewRect).field0_0x0._s_0.Min.field0_0x0;
        local_258._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_3->ViewRect).field0_0x0._s_0.Max.field0_0x0;
        local_420 = (TIntPoint<int>_u_0)&DAT_100000001;
        pFVar21 = FScreenPassTextureViewport::FScreenPassTextureViewport
                            (&local_140,(param_3->ColorModulateTexture).Resolve,
                             (TIntRect<int> *)&local_258._s_0);
        local_418._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(pFVar21->Rect).field0_0x0._s_0.Min.field0_0x0;
        local_418._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(pFVar21->Rect).field0_0x0._s_0.Max.field0_0x0;
        TVar10._s_0 = *(TIntPoint<int>_u_0_s_0 *)&(pFVar21->Extent).field0_0x0;
      }
    }
    else {
      local_3f8 = *(TIntPoint<int>_u_0_s_0 *)&(param_3->ViewRect).field0_0x0;
      TVar11 = (TIntPoint<int>_u_0)
               *(TIntPoint<int>_u_0 *)
                &((TIntPoint<int>_u_0 *)((longlong)&(param_3->ViewRect).field0_0x0 + 8))->_s_0;
      pFVar26 = (param_3->ColorTexture).Resolve;
      if (pFVar26 == (FRDGTexture *)0x0) {
LAB_1457578d4:
        local_420 = (TIntPoint<int>_u_0)&DAT_100000001;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InTexture.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                            ,0xab,L"");
        if (bVar18) {
          pcVar13 = (code *)swi(3);
          pFVar20 = (FScreenPassTexture *)(*pcVar13)();
          return pFVar20;
        }
      }
      else {
        iVar19 = (pFVar26->VisualizeTextureExtent).field0_0x0._s_0.X;
        iVar34 = TVar11._s_0.X;
        iVar31 = iVar34;
        if (iVar34 < iVar19) {
          iVar31 = iVar19;
        }
        iVar19 = (pFVar26->VisualizeTextureExtent).field0_0x0._s_0.Y;
        (pFVar26->VisualizeTextureExtent).field0_0x0._s_0.X = iVar31;
        iVar32 = TVar11._s_0.Y;
        iVar31 = iVar32;
        if (iVar32 < iVar19) {
          iVar31 = iVar19;
        }
        (pFVar26->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar31;
        if ((iVar34 == local_3f8.X) && (iVar32 == local_3f8.Y)) goto LAB_1457578d4;
      }
      local_418._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_3f8;
      TVar10 = *(TIntPoint<int>_u_0 *)&(pFVar26->Desc).field_0x24;
      local_418._8_8_ = TVar11;
    }
    local_420 = TVar10;
    TVar8 = param_3->Pass;
    if (this->bApplyModulateOnly != false) {
      if (TVar8 == TPT_TranslucencyAfterMotionBlur) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bApplyModulateOnly",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                            ,0x266,L"");
        if (bVar18) {
          pcVar13 = (code *)swi(3);
          pFVar20 = (FScreenPassTexture *)(*pcVar13)();
          return pFVar20;
        }
      }
      else {
        if (((param_3->ColorModulateTexture).Target == (FRDGTexture *)0x0) ||
           ((param_3->ColorModulateTexture).Resolve == (FRDGTexture *)0x0)) goto LAB_145758abb;
        local_430 = FRDGBuilder::RegisterExternalTexture
                              (param_1,(TRefCountPtr<IPooledRenderTarget> *)
                                       &GSystemTextures.field_0x30,None);
      }
    }
    local_437 = IsPrimitiveAlphaHoldoutEnabled(local_3e0);
    EVar9 = this->Operation;
    local_400 = (wchar_t *)0x0;
    local_3f8 = (TIntPoint<int>_u_0_s_0)0x0;
    local_408 = (FRDGTexture *)0x0;
    if (EVar9 == UpscaleOnly) {
      if ((((this->SceneColor).TextureSRV != (FRDGTextureSRV *)0x0) &&
          ((*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 8) !=
            *(int *)&(this->SceneColor).ViewRect.field0_0x0 ||
           (*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 0xc) !=
            *(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 4))))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("!SceneColor.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                              ,0x279,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      local_400 = L"UpscaleTranslucency";
      local_104 = (this->OutputViewport).Extent.field0_0x0._s_0;
      local_320 = local_104.X;
      iStack_31c = local_104.Y;
      local_110 = FClearValueBinding::Black.Value.Color[3];
      local_10c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_108 = 0;
      local_e8 = (void *)0x0;
      local_e0 = 0;
      pwVar35 = L"PostDOFTranslucency.SceneColor";
      if (TVar8 == TPT_TranslucencyAfterMotionBlur) {
        pwVar35 = L"PostMotionBlurTranslucency.SceneColor";
      }
      local_128._0_8_ = 9;
      local_fc = 0x10001;
      local_128._8_8_ = FClearValueBinding::Black._0_8_;
      local_128._16_8_ = FClearValueBinding::Black.Value._4_8_;
      local_f8 = 0xa000101;
      local_f4 = 0xff00;
      local_dc = 1;
      local_408 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_128,pwVar35,None);
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
    }
    else if (EVar9 == ComposeToExistingSceneColor) {
      if ((((this->SceneColor).TextureSRV == (FRDGTextureSRV *)0x0) ||
          ((*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 8) ==
            *(int *)&(this->SceneColor).ViewRect.field0_0x0 &&
           (*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 0xc) ==
            *(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 4))))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("SceneColor.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                              ,0x28c,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      if ((((param_3->ColorModulateTexture).Target != (FRDGTexture *)0x0) &&
          ((param_3->ColorModulateTexture).Resolve != (FRDGTexture *)0x0)) &&
         (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8044027287852547443>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                              ,0x28d,"!TranslucencyTextures.ColorModulateTexture.IsValid()"), bVar18
         )) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      local_400 = L"ComposeTranslucencyToExistingColor";
      local_3f8 = (TIntPoint<int>_u_0_s_0)
                  TStaticStateRHI<TStaticBlendState<7,0,1,4,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                  ::StaticResource.StateRHI.Reference;
      if (((*(byte *)&((((this->SceneColor).TextureSRV)->Desc).Texture)->Desc & 1) == 0) &&
         (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8044027287852547438>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                              ,0x292,
                              "SceneColor.TextureSRV->Desc.Texture->Desc.Flags & ETextureCreateFlags::RenderTargetable"
                             ), bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      local_408 = (((this->SceneColor).TextureSRV)->Desc).Texture;
    }
    else if (EVar9 == ComposeToNewSceneColor) {
      if ((((this->SceneColor).TextureSRV == (FRDGTextureSRV *)0x0) ||
          ((*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 8) ==
            *(int *)&(this->SceneColor).ViewRect.field0_0x0 &&
           (*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 0xc) ==
            *(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 4))))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("SceneColor.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                              ,0x297,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      local_a5 = this->OutputPixelFormat;
      local_400 = L"ComposeTranslucencyToNewSceneColor";
      if (local_a5 == PF_Unknown) {
        local_a5 = (((((this->SceneColor).TextureSRV)->Desc).Texture)->Desc).field_0x33;
      }
      local_b4 = (this->OutputViewport).Extent.field0_0x0._s_0;
      local_318 = local_b4.X;
      iStack_314 = local_b4.Y;
      local_c0 = FClearValueBinding::Black.Value.Color[3];
      local_bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_b8 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      pwVar35 = L"PostDOFTranslucency.SceneColor";
      if (TVar8 == TPT_TranslucencyAfterMotionBlur) {
        pwVar35 = L"PostMotionBlurTranslucency.SceneColor";
      }
      local_d8._0_8_ = 9;
      local_ac = 0x10001;
      local_d8._8_8_ = FClearValueBinding::Black._0_8_;
      local_d8._16_8_ = FClearValueBinding::Black.Value._4_8_;
      local_a8 = 0x101;
      local_a6 = 0;
      local_a4 = 0xff00;
      local_8c = 1;
      local_408 = FRDGBuilder::CreateTexture(param_1,(FRDGTextureDesc *)local_d8,pwVar35,None);
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
    }
    else if (EVar9 == ComposeToSceneColorAlpha) {
      if ((((this->SceneColor).TextureSRV == (FRDGTextureSRV *)0x0) ||
          ((*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 8) ==
            *(int *)&(this->SceneColor).ViewRect.field0_0x0 &&
           (*(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 0xc) ==
            *(int *)((longlong)&(this->SceneColor).ViewRect.field0_0x0 + 4))))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("SceneColor.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                              ,0x2a7,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      pFVar26 = FRDGBuilder::CreateTexture
                          (param_1,&local_430->Desc,L"Translucency.Holdout.Resolved",None);
      local_290._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(param_3->ViewRect).field0_0x0._s_0.Min.field0_0x0;
      local_290._s_0.Max.field0_0x0 =
           (TIntPoint<int>)(param_3->ViewRect).field0_0x0._s_0.Max.field0_0x0;
      AddCopyBackgroundVisibilityPass
                (param_1,local_3e0,local_430,pFVar26,(TIntRect<int> *)&local_290._s_0,ToSceneColor);
      local_400 = L"ComposeToSceneColorAlpha";
      local_3f8 = (TIntPoint<int>_u_0_s_0)
                  TStaticStateRHI<TStaticBlendState<15,0,0,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                  ::StaticResource.StateRHI.Reference;
      if (((*(byte *)&((((this->SceneColor).TextureSRV)->Desc).Texture)->Desc & 1) == 0) &&
         (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_8044027287852547404>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                              ,0x2b4,
                              "SceneColor.TextureSRV->Desc.Texture->Desc.Flags & ETextureCreateFlags::RenderTargetable"
                             ), bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      local_437 = false;
      local_408 = (((this->SceneColor).TextureSRV)->Desc).Texture;
      local_430 = pFVar26;
    }
    else {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Unimplemented function called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\TranslucentRendering.cpp"
                          ,0x2ba,L"");
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
    }
    cVar7 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_298 = '\0';
    if ((cVar7 != '\0') && ((cVar7 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x2bd;
        local_1e8 = 0x54bd8820;
        uStack_1e4 = 1;
        ::Desc._padding_._0_4_ = 0x54bd8820;
        ::Desc._padding_._4_4_ = uStack_1ec;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u__s;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FTranslucencyComposition::AddPass'::__l89::<lambda_1>::
               operator()<wchar_t_const_*_&>'::__l3::<lambda_2>::
               operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>'
               ::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_248._Myfirst._Val = &::Desc;
      local_248._padding_ = 0x150613404;
      local_2a8.State = (FRDGScopeState *)param_1;
      local_248._padding_ = (longlong)&local_400;
      local_248._padding_ = (longlong)local_428;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_00;
      local_2a8.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&>_>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_248);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_298 = '\x01';
    }
    uVar33 = 1;
    DynamicRenderScaling::FRDGScope::FRDGScope
              ((FRDGScope *)&local_268,(FRDGScopeState *)param_1,&GDynamicTranslucencyResolution);
    fVar15 = __real_3f000000;
    iVar31 = *(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 8) -
             *(int *)&(param_3->ViewRect).field0_0x0;
    fVar38 = __real_3f800000 / (float)local_420._s_0.X;
    iVar19 = *(int *)((longlong)&(this->OutputViewport).Rect.field0_0x0 + 8) -
             *(int *)&(this->OutputViewport).Rect.field0_0x0;
    fVar37 = __real_3f800000 / (float)local_420._s_0.Y;
    local_3d8 = (FRDGTextureSRV *)CONCAT44(fVar37,fVar38);
    if ((((((iVar19 == iVar31) &&
           (*(int *)((longlong)&(this->OutputViewport).Rect.field0_0x0 + 0xc) -
            *(int *)((longlong)&(this->OutputViewport).Rect.field0_0x0 + 4) ==
            *(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 0xc) -
            *(int *)((longlong)&(param_3->ViewRect).field0_0x0 + 4))) ||
          ((param_3->DepthTexture).Target == (FRDGTexture *)0x0)) ||
         (((param_3->DepthTexture).Resolve == (FRDGTexture *)0x0 ||
          ((this->SceneDepth).Texture == (FRDGTexture *)0x0)))) ||
        ((*(int *)((longlong)&(this->SceneDepth).ViewRect.field0_0x0 + 8) ==
          *(int *)&(this->SceneDepth).ViewRect.field0_0x0 &&
         (*(int *)((longlong)&(this->SceneDepth).ViewRect.field0_0x0 + 0xc) ==
          *(int *)((longlong)&(this->SceneDepth).ViewRect.field0_0x0 + 4))))) ||
       ((__real_322bcc77 <
         (float)((uint)((float)iVar31 / (float)iVar19 - __real_3f000000) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) ||
        (local_438 = 1, GSeparateTranslucencyUpsampleMode < 1)))) {
      local_438 = 0;
    }
    FScreenTransform::SvPositionToViewportUV
              ((FScreenTransform *)&local_3d0._s_0,&(this->OutputViewport).Rect);
    puVar22 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x200,0x10);
    if (puVar22 == (undefined8 *)0x0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
    }
    else {
      *(undefined1 *)(puVar22 + 0x1f) = 1;
      *puVar22 = &___7__TObject_VFParameters_FComposeSeparateTranslucencyPS___FRDGAllocator__6B_;
      puVar22[0xe] = 0;
      puVar22[0xf] = 0;
      puVar22[0x10] = 0;
      puVar22[0x11] = 0;
      puVar22[0x12] = 0;
      puVar22[0x13] = 0;
      puVar22[0x14] = 0;
      puVar22[0x15] = 0;
      puVar22[0x16] = 0;
      puVar22[0x17] = 0;
      puVar22[0x18] = 0;
      puVar22[0x19] = 0;
      puVar22[0x1a] = 0;
      puVar22[0x1b] = 0;
      puVar22[0x1c] = 0;
      puVar22[0x1d] = 0;
      puVar22[0x1e] = 0;
      FRenderTargetBindingSlots::FRenderTargetBindingSlots
                ((FRenderTargetBindingSlots *)(puVar22 + 0x20));
    }
    local_3e8 = puVar22;
    if ((((undefined8 **)param_1->_padding_ <= &local_3e8) &&
        (&local_3e8 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar13 = (code *)swi(3);
      pFVar20 = (FScreenPassTexture *)(*pcVar13)();
      return pFVar20;
    }
    iVar19 = (int)param_1->_padding_;
    piVar3 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar19 == *piVar3) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar3);
    }
    *(int *)&param_1->_padding_ = iVar19 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar19 * 8) = local_3e8;
    pFVar23 = FScreenTransform::ChangeTextureBasisFromTo
                        (&local_180,(TIntPoint<int> *)&local_390._s_0,
                         (TIntRect<int> *)&local_388._s_0,TexelPosition,TextureUV);
    pFVar24 = FScreenTransform::ChangeTextureBasisFromTo
                        (&local_170,(TIntPoint<int> *)&local_390._s_0,
                         (TIntRect<int> *)&local_388._s_0,ViewportUV,TexelPosition);
    fVar4 = (pFVar23->Scale).field0_0x0._s_0.X;
    fVar5 = (pFVar23->Scale).field0_0x0._s_0.Y;
    local_2f0 = fVar4 * (pFVar24->Scale).field0_0x0._s_0.X;
    local_2e8 = fVar4 * (pFVar24->Bias).field0_0x0._s_0.X + (pFVar23->Bias).field0_0x0._s_0.X;
    fStack_2ec = fVar5 * (pFVar24->Scale).field0_0x0._s_0.Y;
    fStack_2e4 = fVar5 * (pFVar24->Bias).field0_0x0._s_0.Y + (pFVar23->Bias).field0_0x0._s_0.Y;
    local_310 = CONCAT44(fStack_2ec,local_2f0);
    local_308 = CONCAT44(fStack_2e4,local_2e8);
    local_378 = local_3c8 * local_2f0 + local_2e8;
    fStack_374 = local_3c4 * fStack_2ec + fStack_2e4;
    local_2e0 = local_3d0._s_0.X * local_2f0;
    fStack_2dc = local_3d0._s_0.Y * fStack_2ec;
    TVar14._s_0.Y = fStack_2dc;
    TVar14._s_0.X = local_2e0;
    (((FParameters *)(puVar22 + 2))->ScreenPosToSceneColorUV).Scale.field0_0x0 = TVar14;
    puVar22[3] = CONCAT44(fStack_374,local_378);
    pFVar23 = FScreenTransform::ChangeTextureBasisFromTo
                        (&local_150,(TIntPoint<int> *)&local_420._s_0,
                         (TIntRect<int> *)&local_418._s_0,TexelPosition,TextureUV);
    pFVar24 = FScreenTransform::ChangeTextureBasisFromTo
                        (&local_1c0,(TIntPoint<int> *)&local_420._s_0,
                         (TIntRect<int> *)&local_418._s_0,ViewportUV,TexelPosition);
    local_370 = (pFVar23->Scale).field0_0x0._s_0.X;
    fStack_36c = (pFVar23->Scale).field0_0x0._s_0.Y;
    local_368 = local_370 * (pFVar24->Bias).field0_0x0._s_0.X + (pFVar23->Bias).field0_0x0._s_0.X;
    local_370 = local_370 * (pFVar24->Scale).field0_0x0._s_0.X;
    fStack_364 = fStack_36c * (pFVar24->Bias).field0_0x0._s_0.Y + (pFVar23->Bias).field0_0x0._s_0.Y;
    fStack_36c = fStack_36c * (pFVar24->Scale).field0_0x0._s_0.Y;
    local_300 = CONCAT44(fStack_36c,local_370);
    local_2f8 = CONCAT44(fStack_364,local_368);
    local_360 = local_370 * local_3d0._s_0.X;
    fStack_35c = fStack_36c * local_3d0._s_0.Y;
    local_358 = local_370 * local_3c8 + local_368;
    fStack_354 = fStack_36c * local_3c4 + fStack_364;
    puVar22[4] = CONCAT44(fStack_35c,local_360);
    puVar22[5] = CONCAT44(fStack_354,local_358);
    pFVar23 = FScreenTransform::ChangeTextureBasisFromTo
                        (&local_1b0,(TIntPoint<int> *)&local_420._s_0,
                         (TIntRect<int> *)&local_418._s_0,TexelPosition,ViewportUV);
    pFVar24 = FScreenTransform::ChangeTextureBasisFromTo
                        (&local_160,(TIntPoint<int> *)&local_420._s_0,
                         (TIntRect<int> *)&local_418._s_0,TextureUV,TexelPosition);
    fVar4 = (pFVar23->Scale).field0_0x0._s_0.X;
    fVar5 = (pFVar23->Scale).field0_0x0._s_0.Y;
    local_350 = fVar4 * (pFVar24->Scale).field0_0x0._s_0.X;
    fStack_34c = fVar5 * (pFVar24->Scale).field0_0x0._s_0.Y;
    local_348 = fVar4 * (pFVar24->Bias).field0_0x0._s_0.X + (pFVar23->Bias).field0_0x0._s_0.X;
    fStack_344 = fVar5 * (pFVar24->Bias).field0_0x0._s_0.Y + (pFVar23->Bias).field0_0x0._s_0.Y;
    puVar22[6] = CONCAT44(fStack_34c,local_350);
    puVar22[7] = CONCAT44(fStack_344,local_348);
    pFVar23 = FScreenTransform::ChangeTextureBasisFromTo
                        (&local_1a0,(TIntPoint<int> *)&local_420._s_0,
                         (TIntRect<int> *)&local_418._s_0,TexelPosition,TextureUV);
    pFVar24 = FScreenTransform::ChangeTextureBasisFromTo
                        (&local_190,(TIntPoint<int> *)&local_420._s_0,
                         (TIntRect<int> *)&local_418._s_0,ViewportUV,TexelPosition);
    local_340 = (pFVar23->Scale).field0_0x0._s_0.X;
    fStack_33c = (pFVar23->Scale).field0_0x0._s_0.Y;
    local_338 = local_340 * (pFVar24->Bias).field0_0x0._s_0.X + (pFVar23->Bias).field0_0x0._s_0.X;
    local_340 = local_340 * (pFVar24->Scale).field0_0x0._s_0.X;
    fStack_334 = fStack_33c * (pFVar24->Bias).field0_0x0._s_0.Y + (pFVar23->Bias).field0_0x0._s_0.Y;
    fStack_33c = fStack_33c * (pFVar24->Scale).field0_0x0._s_0.Y;
    puVar22[8] = CONCAT44(fStack_33c,local_340);
    puVar22[9] = CONCAT44(fStack_334,local_338);
    puVar22[10] = CONCAT44(((float)local_418._4_4_ + fVar15) * fVar37,
                           ((float)local_418._0_4_ + fVar15) * fVar38);
    local_3f0 = ((float)local_418._8_4_ - fVar15) * fVar38;
    fStack_3ec = ((float)local_418._12_4_ - fVar15) * fVar37;
    puVar22[0xb] = CONCAT44(fStack_3ec,local_3f0);
    puVar22[0xc] = local_3d8;
    if (this->Operation == ComposeToNewSceneColor) {
      pFVar25 = (this->SceneColor).TextureSRV;
    }
    else {
      local_3a8.Texture =
           FRDGBuilder::RegisterExternalTexture
                     (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x30,None)
      ;
      local_3a8._padding_._0_2_ = 0;
      local_3a8._padding_._3_1_ = 0;
      local_3a8._padding_._4_4_ = 0;
      local_3a8._padding_._0_1_ = 0;
      local_3a8._padding_._2_1_ = 0;
      local_3a8._padding_._2_1_ = ((local_3a8.Texture)->Desc).field_0x30;
      cVar7 = ((local_3a8.Texture)->Desc).field_0x32;
      if ((cVar7 == '\x01') || (cVar7 == '\x04')) {
        local_3a8._padding_._4_4_ = (uint)*(ushort *)&((local_3a8.Texture)->Desc).field_0x2e << 0x10
        ;
      }
      pFVar25 = FRDGBuilder::CreateSRV(param_1,&local_3a8);
    }
    puVar22[0xe] = pFVar25;
    TVar16 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI;
    puVar22[0x10] = local_430;
    puVar22[0xf] = TVar16.Reference;
    TVar16 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI;
    puVar22[0x12] = local_3b8;
    puVar22[0x11] = TVar16.Reference;
    TVar16 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI;
    puVar22[0x14] = local_430;
    puVar22[0x13] = TVar16.Reference;
    TVar16 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI;
    puVar22[0x16] = local_3b8;
    puVar22[0x15] = TVar16.Reference;
    puVar22[0x17] =
         TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    pFVar26 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,param_1);
    puVar22[0x1c] = pFVar26;
    puVar22[0x1d] =
         TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    if (((this->LensDistortionLUT).DistortingDisplacementTexture == (FRDGTexture *)0x0) ||
       ((this->LensDistortionLUT).UndistortingDisplacementTexture == (FRDGTexture *)0x0)) {
      uVar33 = 0;
    }
    *(uint *)((longlong)puVar22 + 0x6c) = (uint)local_437;
    *(undefined4 *)(puVar22 + 0xd) = uVar33;
    if (((this->LensDistortionLUT).DistortingDisplacementTexture != (FRDGTexture *)0x0) &&
       ((this->LensDistortionLUT).UndistortingDisplacementTexture != (FRDGTexture *)0x0)) {
      puVar22[0x1c] = (this->LensDistortionLUT).UndistortingDisplacementTexture;
    }
    pFVar27 = FViewUniformShaderParameters::GetStructMetadata();
    pFVar17 = local_3e0;
    pFVar26 = local_408;
    local_3b8 = (FRDGTexture *)local_3e0->_padding_;
    EStack_3b0 = Static;
    if (pFVar27->BindingFlags != StaticAndShader) {
      EStack_3b0 = pFVar27->BindingFlags;
    }
    puVar22[0x1e] = local_3b8;
    puVar22[0x1f] = CONCAT71(uStack_3af,EStack_3b0);
    if ((this->Operation == ComposeToExistingSceneColor) ||
       (this->Operation == ComposeToSceneColorAlpha)) {
      local_2d8.Texture = local_408;
      local_2d8.ResolveTexture = (FRDGTexture *)0x0;
      local_2d8.LoadAction = ELoad;
      local_2d8.MipIndex = '\0';
      local_2d8.ArraySlice = -1;
      bVar18 = FRenderTargetBinding::Validate(&local_2d8);
      if ((!bVar18) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x216,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      uVar6 = CONCAT44(local_2d8._20_4_,local_2d8._16_4_);
      pFVar28 = local_2d8.Texture;
      pFVar36 = local_2d8.ResolveTexture;
    }
    else {
      local_2c0.Texture = local_408;
      local_2c0.ResolveTexture = (FRDGTexture *)0x0;
      local_2c0.LoadAction = ENoAction;
      local_2c0.MipIndex = '\0';
      local_2c0.ArraySlice = -1;
      bVar18 = FRenderTargetBinding::Validate(&local_2c0);
      if ((!bVar18) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x216,L""), bVar18)) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
      uVar6 = CONCAT44(local_2c0._20_4_,local_2c0._16_4_);
      pFVar28 = local_2c0.Texture;
      pFVar36 = local_2c0.ResolveTexture;
    }
    puVar22[0x20] = pFVar28;
    puVar22[0x21] = pFVar36;
    puVar22[0x22] = uVar6;
    if (local_438 != 0) {
      if (((param_3->DepthTexture).Target == (FRDGTexture *)0x0) ||
         ((param_3->DepthTexture).Resolve == (FRDGTexture *)0x0)) {
        pFVar28 = FSystemTextures::GetMaxFP16Depth((FSystemTextures *)&GSystemTextures,param_1);
      }
      else {
        pFVar28 = (param_3->DepthTexture).Resolve;
      }
      puVar22[0x18] = pFVar28;
      puVar22[0x19] =
           TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      puVar22[0x1a] = (this->SceneDepth).Texture;
      puVar22[0x1b] =
           TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
    }
    local_3b8 = (FRDGTexture *)pFVar17->ShaderMap;
    pFVar29 = (FShaderType *)FComposeSeparateTranslucencyPS::GetStaticType();
    FGlobalShaderMap::GetShader((FGlobalShaderMap *)local_3b8,&local_278,pFVar29,(uint)local_438);
    if (local_278.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_228);
      ::FName::ToString((FName *)this_01,&local_220);
      FComposeSeparateTranslucencyPS::GetStaticType();
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if (bVar18) {
        pcVar13 = (code *)swi(3);
        pFVar20 = (FScreenPassTexture *)(*pcVar13)();
        return pFVar20;
      }
    }
    FComposeSeparateTranslucencyPS::GetStaticType();
    local_208.ShaderContent = (FComposeSeparateTranslucencyPS *)local_278.ShaderContent;
    local_208.ShaderMap = local_278.ShaderMap;
    pFVar30 = FRDGEventName::FRDGEventName(&local_1d8,L"%s(%s%s%s) %dx%d -> %dx%d");
    FPixelShaderUtils::AddFullscreenPass<FComposeSeparateTranslucencyPS>
              (param_1,local_3e0->ShaderMap,pFVar30,&local_208,(FParameters *)(puVar22 + 2),
               &(this->OutputViewport).Rect,(FRHIBlendState *)local_3f8,(FRHIRasterizerState *)0x0,
               (FRHIDepthStencilState *)0x0,0,None);
    if (local_1d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1d8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    TVar10 = (this->OutputViewport).Rect.field0_0x0._s_0.Min.field0_0x0;
    TVar12 = (this->OutputViewport).Rect.field0_0x0._s_0.Max.field0_0x0._s_0;
    local_3c0->Texture = pFVar26;
    (local_3c0->ViewRect).field0_0x0._s_0.Min.field0_0x0 = TVar10;
    (local_3c0->ViewRect).field0_0x0._s_0.Max.field0_0x0._s_0 = TVar12;
    pFVar26 = local_3c0->Texture;
    if (pFVar26 != (FRDGTexture *)0x0) {
      iVar19 = (pFVar26->VisualizeTextureExtent).field0_0x0._s_0.X;
      iVar31 = TVar12.X;
      if (iVar31 < iVar19) {
        iVar31 = iVar19;
      }
      iVar19 = (pFVar26->VisualizeTextureExtent).field0_0x0._s_0.Y;
      (pFVar26->VisualizeTextureExtent).field0_0x0._s_0.X = iVar31;
      iVar31 = *(int *)((longlong)&(local_3c0->ViewRect).field0_0x0 + 0xc);
      if (iVar31 < iVar19) {
        iVar31 = iVar19;
      }
      (pFVar26->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar31;
    }
    if (local_260 != (FRDGScope *)0x0) {
      if ((local_268->ScopeState).bImmediate != false) {
        FRDGScope::EndGPU(local_260,(FRHIComputeCommandList *)local_268->RHICmdList);
        FRDGScope::EndCPU(local_260,(FRHIComputeCommandList *)local_268->RHICmdList,false);
      }
      FRDGScope::ImmediateEnd(local_260,local_268);
      puVar2 = &(local_268->ScopeState).Mask;
      *puVar2 = *puVar2 & 0xfffffffd;
      (local_268->ScopeState).Current = ((local_268->ScopeState).Current)->Parent;
    }
    pFVar20 = local_3c0;
    if (local_298 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2a8);
    }
  }
  return pFVar20;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 4

// FMergePassProxy @ 14ea75ff0

FMergePassProxy * __thiscall
UE::CompositeCore::FMergePassProxy::FMergePassProxy
          (FMergePassProxy *this,
          TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>
          *param_1,ECompositeCoreMergeOp param_2,wchar_t *param_3,ELensDistortionHandling param_4)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayMax;
  iVar2 = param_1->ArrayNum;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->_padding_ = (longlong)pFVar3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar1;
  *(int *)&this->_padding_ = iVar2;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FMergePassProxy_CompositeCore_UE__6B_;
  this->bUseLensDistortion = param_4;
  this->MergeOp = param_2;
  this->ParentName = param_3;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// Add @ 14ea78e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FPassTexture * __thiscall
UE::CompositeCore::FMergePassProxy::Add
          (FMergePassProxy *this,FPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,
          FSceneView *param_2,FPassInputArray *param_3,FPassContext *param_4)

{
  int *piVar1;
  EEncoding EVar2;
  FScriptContainerElement *pFVar3;
  TIntPoint<int>_u_0 TVar4;
  TIntPoint<int>_u_0 TVar5;
  code *pcVar6;
  TVector2<float>_u_0 TVar7;
  FResourceMetadata FVar8;
  float fVar9;
  TRefCountPtr<FRHISamplerState> TVar10;
  TConsoleVariableData<int> *pTVar11;
  FSceneViewFamily *pFVar12;
  FGlobalShaderMap *pFVar13;
  bool bVar14;
  EPassLocation EVar15;
  ERenderTargetLoadAction EVar16;
  bool bVar17;
  int iVar18;
  FPassTexture *pFVar19;
  FRDGScope *this_00;
  FRDGTexture *pFVar20;
  undefined8 *puVar21;
  FShaderParametersMetadata *pFVar22;
  FScreenPassTextureViewportParameters *pFVar23;
  FShaderType *pFVar24;
  FName this_01;
  FRDGEventName *pFVar25;
  int iVar26;
  uint uVar27;
  EUniformBufferBindingFlags EVar28;
  ulonglong uVar29;
  char cVar30;
  bool *pbVar31;
  float fVar32;
  undefined1 auStackY_488 [32];
  byte local_428;
  undefined1 local_420;
  undefined1 uStack_41d;
  EEncoding EStack_41c;
  undefined8 uStack_410;
  int iStack_400;
  float fStack_3fc;
  undefined1 local_3f8 [4];
  int local_3f4;
  FRDGTexture *local_3f0;
  TIntRect<int>_u_0 local_3e8;
  ERenderTargetLoadAction local_3d8;
  undefined8 *local_3d0;
  TIntPoint<int>_u_0 local_3c8;
  int local_3c0 [2];
  FSceneViewFamily *local_3b8;
  undefined4 local_3b0;
  float fStack_3ac;
  FMergePassProxy *local_3a8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_3a0;
  char local_390;
  FRenderTargetBinding local_388;
  FLensDistortionLUT *local_370;
  FGlobalShaderMap *local_368;
  FPassTexture *local_360;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_358;
  TIntPoint<int>_u_0 local_348;
  undefined8 local_340;
  undefined8 local_338;
  TIntPoint<int>_u_0 local_330;
  undefined8 local_328;
  undefined8 local_320;
  TIntPoint<int>_u_0 local_318;
  TIntPoint<int>_u_0 local_310;
  TIntPoint<int>_u_0 local_308;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>_>
  local_300;
  undefined1 local_2d0 [8];
  FString local_2c8;
  TShaderRefBase<FCompositeCoreMergeShader,FShaderMapPointerTable> local_2b8;
  FRHITextureDesc local_2a8;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  FRDGEventName local_238;
  FScreenPassTextureViewportParameters local_218;
  FScreenPassTextureViewportParameters local_1a8;
  FScreenPassTextureViewportParameters local_138;
  FRHITextureDesc local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_488;
  iVar18 = (int)this->_padding_;
  if (iVar18 < 1) {
    iVar18 = 1;
  }
  local_3a8 = this;
  local_360 = __return_storage_ptr__;
  if (((param_3->Inputs).ArrayNum < iVar18) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ValidateInputs(Inputs)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\Passes\\CompositeCorePassMergeProxy.cpp"
                          ,0x81,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FPassTexture *)(*pcVar6)();
    return pFVar19;
  }
  cVar30 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_390 = '\0';
  if ((cVar30 != '\0') && ((cVar30 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (((param_3->Inputs).ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FPassTexture *)(*pcVar6)();
      return pFVar19;
    }
    pFVar3 = (param_3->Inputs).AllocatorInstance.Data;
    local_3c0[0] = *(int *)(pFVar3 + 0x14) - *(int *)(pFVar3 + 0xc);
    if (((param_3->Inputs).ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FPassTexture *)(*pcVar6)();
      return pFVar19;
    }
    pFVar3 = (param_3->Inputs).AllocatorInstance.Data;
    local_3f4 = *(int *)(pFVar3 + 0x10) - *(int *)(pFVar3 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x86;
      local_248 = 0x54dc4370;
      uStack_244 = 1;
      ::Desc._padding_._0_4_ = 0x54dc4370;
      ::Desc._padding_._4_4_ = uStack_24c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_CompositeCore_M;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::CompositeCore::FMergePassProxy::Add'::__l14::<lambda_1>::
             operator()<wchar_t_const_*_const_&,int,int>'::__l3::<lambda_2>::
             operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_300._Myfirst._Val = &::Desc;
    local_300._padding_ = 0x152ff2b30;
    local_300._padding_ = (longlong)local_3c0;
    local_300._padding_ = (longlong)&local_3f4;
    local_300._padding_ = (longlong)&this->ParentName;
    local_300._padding_ = (longlong)local_3f8;
    if (local_390 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_3a0);
    }
    local_3a0.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    uVar29 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
    local_3a0.Scope = this_00;
    if ((3 < uVar29) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FPassTexture *)(*pcVar6)();
      return pFVar19;
    }
    (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
      ::__l2::Destructors[uVar29])(&this_00->Impl);
    FRDGScope_RHI::
    FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>
              ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)param_1,&local_300);
    (this_00->Impl).Impl.TypeIndex = '\x02';
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_390 = '\x01';
    this = local_3a8;
  }
  if (6 < (byte)LogCompositeCore._0_1_) {
    Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogCompositeCore);
  }
  local_368 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                 [(int)param_2->FeatureLevel]);
  local_3b8 = param_2->Family;
  local_420 = 0;
  EStack_41c = Linear;
  local_370 = LensDistortion::GetLUTUnsafe(param_2);
  if ((((this->bUseLensDistortion == Disabled) ||
       (local_370->DistortingDisplacementTexture == (FRDGTexture *)0x0)) ||
      (local_370->UndistortingDisplacementTexture == (FRDGTexture *)0x0)) ||
     (param_4->Location < SSRInput)) {
    local_428 = 0;
LAB_14ea7913b:
    pFVar19 = FPassInputArray::operator[](param_3,0);
    cVar30 = (pFVar19->Metadata).bDistorted;
  }
  else {
    local_428 = 1;
    if (param_4->bOutputSceneColor == false) goto LAB_14ea7913b;
    EVar15 = LensDistortion::GetPassLocationUnsafe(param_2);
    if ((param_4->Location < ReplacingTonemapper) || (EVar15 != TSR)) {
      cVar30 = '\0';
    }
    else {
      cVar30 = '\x01';
    }
  }
  fVar9 = __real_3f800000;
  pbVar31 = &param_4->bOutputSceneColor;
  if ((*pbVar31 != false) && (local_420 = 1, MotionBlur < param_4->Location)) {
    if ((local_3b8->EngineShowFlags).PostProcessing == 1 &&
        (local_3b8->EngineShowFlags).Tonemapper == 1) {
      if (local_3b8->SceneCaptureSource == SCS_FinalColorLDR) {
        EStack_41c = sRGB;
      }
    }
    else {
      EStack_41c = Gamma;
    }
  }
  fVar32 = __real_3f800000;
  if (param_2->State != (FSceneViewStateInterface *)0x0) {
    fVar32 = (float)(**(code **)(param_2->State->_padding_ + 0xd0))();
  }
  local_3f0 = (FRDGTexture *)(param_3->OverrideOutput)._padding_;
  local_3e8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_3->OverrideOutput)._padding_;
  local_3e8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_3->OverrideOutput)._padding_;
  local_3d8 = (param_3->OverrideOutput).LoadAction;
  if ((local_3f0 == (FRDGTexture *)0x0) ||
     ((local_3e8._8_4_ == local_3e8._0_4_ && (local_3e8._12_4_ == local_3e8._4_4_)))) {
    pFVar19 = FPassInputArray::operator[](param_3,0);
    FRHITextureDesc::FRHITextureDesc
              (&local_c8,(FRHITextureDesc *)&((pFVar19->Texture).Texture)->Desc);
    FRHITextureDesc::FRHITextureDesc(&local_2a8,&local_c8);
    local_2a8.Format = FSceneTexturesConfig::GlobalInstance.ColorFormat;
    local_3c8._s_0.Y =
         *(int *)((longlong)&(param_4->OutputViewRect).field0_0x0 + 0xc) -
         *(int *)((longlong)&(param_4->OutputViewRect).field0_0x0 + 4);
    local_3c8._s_0.X =
         *(int *)((longlong)&(param_4->OutputViewRect).field0_0x0 + 8) -
         *(int *)&(param_4->OutputViewRect).field0_0x0;
    local_2a8.Extent.field0_0x0 = local_3c8;
    TVar4 = (param_4->OutputViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_2a8.Depth = 1;
    TVar5 = (TIntPoint<int>_u_0)
            *(TIntPoint<int>_u_0 *)
             &((TIntPoint<int>_u_0 *)((longlong)&(param_4->OutputViewRect).field0_0x0 + 8))->_s_0;
    EVar16 = -(param_2->bHMDHiddenAreaMaskActive != false) & EClear;
    local_2a8.NumMips = '\x01';
    local_2a8.Flags = UAV|ShaderResource|RenderTargetable;
    pFVar20 = FRDGBuilder::CreateTexture
                        (param_1,(FRDGTextureDesc *)&local_2a8,L"CompositeCoreMergeOutput",None);
    if (pFVar20 != (FRDGTexture *)0x0) {
      iVar18 = (pFVar20->VisualizeTextureExtent).field0_0x0._s_0.X;
      iVar26 = TVar5._s_0.X;
      if (TVar5._s_0.X < iVar18) {
        iVar26 = iVar18;
      }
      (pFVar20->VisualizeTextureExtent).field0_0x0._s_0.X = iVar26;
      iVar18 = (pFVar20->VisualizeTextureExtent).field0_0x0._s_0.Y;
      iVar26 = TVar5._s_0.Y;
      if (TVar5._s_0.Y < iVar18) {
        iVar26 = iVar18;
      }
      (pFVar20->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar26;
    }
    if (local_2a8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_2a8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    local_3f0 = pFVar20;
    local_3e8._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar4;
    local_3e8._8_8_ = TVar5;
    local_3d8 = EVar16;
    if (local_c8.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_c8.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  puVar21 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x2f0,0x10);
  if (puVar21 == (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FPassTexture *)(*pcVar6)();
      return pFVar19;
    }
  }
  else {
    *(undefined1 *)(puVar21 + 3) = 1;
    *puVar21 = &___7__TObject_VFParameters_FCompositeCoreMergeShader___FRDGAllocator__6B_;
    puVar21[2] = 0;
    puVar21[0x2e] = 0;
    puVar21[0x2f] = 0;
    puVar21[0x32] = 0;
    puVar21[0x33] = 0;
    puVar21[0x36] = 0;
    puVar21[0x37] = 0;
    puVar21[0x38] = 0;
    puVar21[0x39] = 0;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots
              ((FRenderTargetBindingSlots *)(puVar21 + 0x3e));
  }
  local_3d0 = puVar21;
  if ((((undefined8 **)param_1->_padding_ <= &local_3d0) &&
      (&local_3d0 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FPassTexture *)(*pcVar6)();
    return pFVar19;
  }
  iVar18 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar18 == *piVar1) {
    iVar18 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar18 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar18 * 8) = local_3d0;
  local_3c8 = (TIntPoint<int>_u_0)(puVar21 + 2);
  pFVar22 = FViewUniformShaderParameters::GetStructMetadata();
  EVar28 = Static;
  if (pFVar22->BindingFlags != StaticAndShader) {
    EVar28 = pFVar22->BindingFlags;
  }
  uStack_410 = CONCAT71(uStack_410._1_7_,EVar28);
  *(TUniformBufferRef<FViewUniformShaderParameters> *)&((FParameters *)(puVar21 + 2))->View =
       param_2->ViewUniformBuffer;
  puVar21[3] = uStack_410;
  pFVar19 = FPassInputArray::operator[](param_3,0);
  pFVar20 = (pFVar19->Texture).Texture;
  local_340 = *(undefined8 *)&(pFVar19->Texture).ViewRect.field0_0x0;
  local_338 = *(undefined8 *)((longlong)&(pFVar19->Texture).ViewRect.field0_0x0 + 8);
  if (((pFVar20 == (FRDGTexture *)0x0) ||
      (((int)local_338 == (int)local_340 &&
       ((int)((ulonglong)local_338 >> 0x20) == (int)((ulonglong)local_340 >> 0x20))))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0xab,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FPassTexture *)(*pcVar6)();
    return pFVar19;
  }
  local_348 = *(TIntPoint<int>_u_0 *)&(pFVar20->Desc).field_0x24;
  pFVar23 = GetScreenPassTextureViewportParameters
                      (&local_218,(FScreenPassTextureViewport *)&local_348._s_0);
  TVar7 = (pFVar23->ExtentInverse).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 4) = (pFVar23->Extent).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 5) = TVar7;
  TVar7 = (pFVar23->ScreenPosToViewportBias).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 6) = (pFVar23->ScreenPosToViewportScale).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 7) = TVar7;
  TVar4 = (pFVar23->ViewportMax).field0_0x0;
  *(TIntPoint<int>_u_0 *)(puVar21 + 8) = (pFVar23->ViewportMin).field0_0x0;
  *(TIntPoint<int>_u_0 *)(puVar21 + 9) = TVar4;
  TVar7 = (pFVar23->ViewportSizeInverse).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 10) = (pFVar23->ViewportSize).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0xb) = TVar7;
  TVar7 = (pFVar23->UVViewportMax).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0xc) = (pFVar23->UVViewportMin).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0xd) = TVar7;
  TVar7 = (pFVar23->UVViewportSizeInverse).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0xe) = (pFVar23->UVViewportSize).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0xf) = TVar7;
  TVar7 = (pFVar23->UVViewportBilinearMax).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x10) = (pFVar23->UVViewportBilinearMin).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x11) = TVar7;
  pFVar19 = FPassInputArray::operator[](param_3,1);
  pFVar20 = (pFVar19->Texture).Texture;
  local_328 = *(undefined8 *)&(pFVar19->Texture).ViewRect.field0_0x0;
  local_320 = *(undefined8 *)((longlong)&(pFVar19->Texture).ViewRect.field0_0x0 + 8);
  if (((pFVar20 == (FRDGTexture *)0x0) ||
      (((int)local_320 == (int)local_328 &&
       ((int)((ulonglong)local_320 >> 0x20) == (int)((ulonglong)local_328 >> 0x20))))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0xab,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FPassTexture *)(*pcVar6)();
    return pFVar19;
  }
  local_330 = *(TIntPoint<int>_u_0 *)&(pFVar20->Desc).field_0x24;
  pFVar23 = GetScreenPassTextureViewportParameters
                      (&local_1a8,(FScreenPassTextureViewport *)&local_330._s_0);
  local_308 = (TIntPoint<int>_u_0)local_3e8._s_0.Max.field0_0x0;
  local_310 = (TIntPoint<int>_u_0)local_3e8._s_0.Min.field0_0x0;
  pFVar20 = local_3f0;
  TVar7 = (pFVar23->ExtentInverse).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x12) = (pFVar23->Extent).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x13) = TVar7;
  TVar7 = (pFVar23->ScreenPosToViewportBias).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x14) = (pFVar23->ScreenPosToViewportScale).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x15) = TVar7;
  TVar4 = (pFVar23->ViewportMax).field0_0x0;
  *(TIntPoint<int>_u_0 *)(puVar21 + 0x16) = (pFVar23->ViewportMin).field0_0x0;
  *(TIntPoint<int>_u_0 *)(puVar21 + 0x17) = TVar4;
  TVar7 = (pFVar23->ViewportSizeInverse).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x18) = (pFVar23->ViewportSize).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x19) = TVar7;
  TVar7 = (pFVar23->UVViewportMax).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x1a) = (pFVar23->UVViewportMin).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x1b) = TVar7;
  TVar7 = (pFVar23->UVViewportSizeInverse).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x1c) = (pFVar23->UVViewportSize).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x1d) = TVar7;
  TVar7 = (pFVar23->UVViewportBilinearMax).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x1e) = (pFVar23->UVViewportBilinearMin).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x1f) = TVar7;
  if (((local_3f0 == (FRDGTexture *)0x0) ||
      ((local_3e8._8_4_ == local_3e8._0_4_ && (local_3e8._12_4_ == local_3e8._4_4_)))) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InTexture.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\ScreenPass.inl"
                          ,0xab,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FPassTexture *)(*pcVar6)();
    return pFVar19;
  }
  local_318 = *(TIntPoint<int>_u_0 *)&(pFVar20->Desc).field_0x24;
  pFVar23 = GetScreenPassTextureViewportParameters
                      (&local_138,(FScreenPassTextureViewport *)&local_318._s_0);
  TVar7 = (pFVar23->ExtentInverse).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x20) = (pFVar23->Extent).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x21) = TVar7;
  TVar7 = (pFVar23->ScreenPosToViewportBias).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x22) = (pFVar23->ScreenPosToViewportScale).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x23) = TVar7;
  TVar4 = (pFVar23->ViewportMax).field0_0x0;
  *(TIntPoint<int>_u_0 *)(puVar21 + 0x24) = (pFVar23->ViewportMin).field0_0x0;
  *(TIntPoint<int>_u_0 *)(puVar21 + 0x25) = TVar4;
  TVar7 = (pFVar23->ViewportSizeInverse).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x26) = (pFVar23->ViewportSize).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x27) = TVar7;
  TVar7 = (pFVar23->UVViewportMax).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x28) = (pFVar23->UVViewportMin).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x29) = TVar7;
  TVar7 = (pFVar23->UVViewportSizeInverse).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x2a) = (pFVar23->UVViewportSize).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x2b) = TVar7;
  TVar7 = (pFVar23->UVViewportBilinearMax).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x2c) = (pFVar23->UVViewportBilinearMin).field0_0x0;
  *(TVector2<float>_u_0 *)(puVar21 + 0x2d) = TVar7;
  pFVar19 = FPassInputArray::operator[](param_3,0);
  pTVar11 = CVarCompositeCoreApplyPreExposure.Ref;
  TVar10 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
  fStack_3fc = 1.0;
  pFVar20 = (pFVar19->Texture).Texture;
  bVar14 = (pFVar19->Metadata).bInvertedAlpha;
  EVar2 = (pFVar19->Metadata).Encoding;
  bVar17 = IsInParallelRenderingThread();
  if ((!bVar17) &&
     (bVar17 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar17)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FPassTexture *)(*pcVar6)();
    return pFVar19;
  }
  if (((pTVar11->ShadowedValue[1] != 0) && (*pbVar31 != false)) &&
     ((pFVar19->Metadata).bPreExposed == false)) {
    fStack_3fc = fVar32;
  }
  iStack_400 = 0;
  if ((local_428 != 0) && (bVar17 = (pFVar19->Metadata).bDistorted, bVar17 != (bool)cVar30)) {
    iStack_400 = 2 - (uint)(bVar17 != false);
  }
  puVar21[0x2e] = pFVar20;
  puVar21[0x2f] = TVar10.Reference;
  puVar21[0x30] = CONCAT44(EVar2,(uint)bVar14);
  puVar21[0x31] = CONCAT44(fStack_3fc,iStack_400);
  pFVar19 = FPassInputArray::operator[](param_3,1);
  pTVar11 = CVarCompositeCoreApplyPreExposure.Ref;
  TVar10 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI;
  fStack_3fc = 1.0;
  pFVar20 = (pFVar19->Texture).Texture;
  EVar2 = (pFVar19->Metadata).Encoding;
  uVar27 = (uint)(pFVar19->Metadata).bInvertedAlpha;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FPassTexture *)(*pcVar6)();
    return pFVar19;
  }
  if (((pTVar11->ShadowedValue[1] != 0) && (*pbVar31 != false)) &&
     ((pFVar19->Metadata).bPreExposed == false)) {
    fStack_3fc = fVar32;
  }
  if ((local_428 == 0) || (bVar14 = (pFVar19->Metadata).bDistorted, bVar14 == (bool)cVar30)) {
    puVar21[0x32] = pFVar20;
    puVar21[0x33] = TVar10.Reference;
    puVar21[0x34] = CONCAT44(EVar2,uVar27);
    puVar21[0x35] = (ulonglong)(uint)fStack_3fc << 0x20;
    if (local_428 == 0) {
      pFVar20 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,param_1);
      puVar21[0x38] = pFVar20;
      pFVar20 = FSystemTextures::GetBlackDummy((FSystemTextures *)&GSystemTextures,param_1);
      puVar21[0x36] = pFVar20;
      goto LAB_14ea798d3;
    }
  }
  else {
    puVar21[0x32] = pFVar20;
    puVar21[0x33] = TVar10.Reference;
    puVar21[0x34] = CONCAT44(EVar2,uVar27);
    puVar21[0x35] = CONCAT44(fStack_3fc,2 - (uint)(bVar14 != false));
  }
  puVar21[0x36] = local_370->DistortingDisplacementTexture;
  puVar21[0x38] = local_370->UndistortingDisplacementTexture;
LAB_14ea798d3:
  pFVar12 = local_3b8;
  puVar21[0x39] =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  puVar21[0x37] =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  fVar32 = (float)(**(code **)(local_3b8->RenderTarget->_padding_ + 0x30))();
  local_3b0 = (**(code **)(pFVar12->RenderTarget->_padding_ + 0x30))();
  puVar21[0x3a] = CONCAT44(fVar9 / fVar32,local_3b0);
  local_388.ResolveTexture = (FRDGTexture *)0x0;
  local_388.MipIndex = '\0';
  *(uint *)(puVar21 + 0x3b) = (uint)local_3a8->MergeOp;
  *(EEncoding *)((longlong)puVar21 + 0x1dc) = EStack_41c;
  *(uint *)(puVar21 + 0x3c) = (uint)*pbVar31;
  local_388.Texture = local_3f0;
  local_388.LoadAction = local_3d8;
  local_388.ArraySlice = -1;
  fStack_3ac = fVar9 / fVar32;
  bVar14 = FRenderTargetBinding::Validate(&local_388);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar19 = (FPassTexture *)(*pcVar6)();
    return pFVar19;
  }
  puVar21[0x3e] = local_388.Texture;
  puVar21[0x3f] = local_388.ResolveTexture;
  puVar21[0x40] =
       CONCAT44(local_388._20_4_,
                CONCAT22(local_388.ArraySlice,CONCAT11(local_388.MipIndex,local_388.LoadAction)));
  pFVar24 = (FShaderType *)FCompositeCoreMergeShader::GetStaticType();
  pFVar13 = local_368;
  FGlobalShaderMap::GetShader(local_368,&local_358,pFVar24,(uint)local_428);
  if (local_358.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2d0);
    ::FName::ToString((FName *)this_01,&local_2c8);
    FCompositeCoreMergeShader::GetStaticType();
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      pFVar19 = (FPassTexture *)(*pcVar6)();
      return pFVar19;
    }
  }
  FCompositeCoreMergeShader::GetStaticType();
  local_2b8.ShaderContent = (FCompositeCoreMergeShader *)local_358.ShaderContent;
  local_2b8.ShaderMap = local_358.ShaderMap;
  pFVar25 = FRDGEventName::FRDGEventName(&local_238,L"CompositeCore.Merge (%dx%d) PS");
  FPixelShaderUtils::AddFullscreenPass<FCompositeCoreMergeShader>
            (param_1,pFVar13,pFVar25,&local_2b8,(FParameters *)local_3c8,
             (TIntRect<int> *)&local_3e8._s_0,(FRHIBlendState *)0x0,(FRHIRasterizerState *)0x0,
             (FRHIDepthStencilState *)0x0,0,None);
  if (local_238.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.FormattedEventName.Data.AllocatorInstance.Data);
  }
  pFVar19 = local_360;
  (local_360->Texture).Texture = local_3f0;
  (local_360->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)local_3e8._s_0.Min.field0_0x0;
  (local_360->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)local_3e8._s_0.Max.field0_0x0;
  FVar8.bDistorted = (bool)cVar30;
  FVar8.bInvertedAlpha = (bool)local_420;
  FVar8.bPreExposed = false;
  FVar8._3_1_ = uStack_41d;
  FVar8.Encoding = EStack_41c;
  local_360->Metadata = FVar8;
  if (local_390 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_3a0);
  }
  return pFVar19;
}

// GetTypeName @ 14ea7ff00

FName * __thiscall UE::CompositeCore::FMergePassProxy::GetTypeName(FMergePassProxy *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FMergePassProxy");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
              ::__l2::Name;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
          ::__l2::Name;
}

// GetTypeNameStatic @ 14ea7ff10

FName * __cdecl UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FMergePassProxy");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
              ::__l2::Name;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FMergePassProxy::GetTypeNameStatic(void)'
          ::__l2::Name;
}


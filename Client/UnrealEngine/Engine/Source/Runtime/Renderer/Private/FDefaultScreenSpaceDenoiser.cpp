// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 12

// DenoiseAmbientOcclusion @ 145531000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FAmbientOcclusionOutputs * __thiscall
FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion
          (FDefaultScreenSpaceDenoiser *this,FAmbientOcclusionOutputs *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FAmbientOcclusionInputs *param_5,
          FAmbientOcclusionRayTracingConfig param_6)

{
  char cVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<float> *pTVar5;
  undefined8 uVar6;
  bool bVar7;
  FRDGScope *this_00;
  FAmbientOcclusionOutputs *pFVar8;
  int iVar9;
  undefined1 auStackY_398 [32];
  TRDGEventScopeGuard<FRDGScope_RHI> local_348;
  char local_338;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_> local_330;
  undefined8 uStack_320;
  TArrayView<FViewInfo_const_,int> local_308;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  ESignalProcessing local_2e8;
  int iStack_2e4;
  float fStack_2e0;
  int iStack_2dc;
  float local_2d8;
  float fStack_2d4;
  undefined4 uStack_2d0;
  int iStack_2cc;
  int local_2c8;
  float fStack_2c4;
  undefined4 uStack_2c0;
  int iStack_2bc;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  FLightSceneInfo *local_2a8;
  FLightSceneInfo *pFStack_2a0;
  FLightSceneInfo *local_298;
  FRDGTexture *pFStack_290;
  FRDGTexture *local_288;
  TIntRect<int>_u_0 *pTStack_280;
  undefined8 uStack_278;
  TIntRect<int>_u_0 *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  FViewInfo *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  FRDGTexture *local_248;
  FRDGTexture *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  FRDGTexture *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  FViewInfoPooledRenderTargets local_208;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_1a8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_188;
  FSSDConstantPixelDensitySettings local_168;
  FScreenSpaceDenoiserHistory *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  TRHIBreadcrumbDesc<24> *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  TIntRect<int>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_338 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0xae2;
        local_1b8 = 0x54bd61a0;
        uStack_1b4 = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x54bd61a0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = uStack_1bc;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseAmbientO;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseAmbientO;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion'::__l7::Desc::operator()<>'::
               __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    local_330._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FAmbientOcclusionOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseAmbientOcclusion(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    local_348.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_348.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_330);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_338 = '\x01';
  }
  local_208.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_208);
  pTVar3 = CVarAOReconstructionSampleCount.Ref;
  local_238 = 0;
  uStack_230 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_248 = param_5->Mask;
  local_240 = param_5->RayHitDistance;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_2d8 = param_6.ResolutionFraction;
  iStack_2e4 = 1;
  fStack_2e0 = 1.0;
  fStack_2d4 = 1.0;
  uStack_2d0 = CONCAT31(uStack_2d0._1_3_,1);
  pFStack_290 = (FRDGTexture *)0x0;
  local_288 = (FRDGTexture *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_2e8 = AmbientOcclusion;
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FAmbientOcclusionOutputs *)(*pcVar2)();
      return pFVar8;
    }
  }
  pTVar4 = CVarAOPreConvolutionCount.Ref;
  iVar9 = 0x38;
  if (pTVar3->ShadowedValue[1] < 0x38) {
    iVar9 = pTVar3->ShadowedValue[1];
  }
  iStack_2cc = 1;
  if (1 < iVar9) {
    iStack_2cc = iVar9;
  }
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FAmbientOcclusionOutputs *)(*pcVar2)();
      return pFVar8;
    }
  }
  pTVar5 = CVarAOKernelSpreadFactor.Ref;
  local_2c8 = pTVar4->ShadowedValue[1];
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FAmbientOcclusionOutputs *)(*pcVar2)();
      return pFVar8;
    }
  }
  pTVar3 = CVarAOTemporalAccumulation.Ref;
  fStack_2c4 = pTVar5->ShadowedValue[1];
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FAmbientOcclusionOutputs *)(*pcVar2)();
      return pFVar8;
    }
  }
  pTVar4 = CVarAOHistoryConvolutionSampleCount.Ref;
  uStack_2c0 = CONCAT31(uStack_2c0._1_3_,pTVar3->ShadowedValue[1] != 0);
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FAmbientOcclusionOutputs *)(*pcVar2)();
      return pFVar8;
    }
  }
  pTVar5 = CVarAOHistoryConvolutionKernelSpreadFactor.Ref;
  iStack_2bc = pTVar4->ShadowedValue[1];
  bVar7 = IsInParallelRenderingThread();
  if (!bVar7) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FAmbientOcclusionOutputs *)(*pcVar2)();
      return pFVar8;
    }
  }
  local_168.HistoryConvolutionKernelSpreadFactor = pTVar5->ShadowedValue[1];
  iStack_2dc = (int)param_6.RayCountPerPixel;
  uStack_260 = 1;
  uStack_250 = 1;
  pTStack_280 = &local_a8;
  uStack_278._4_4_ = uStack_25c;
  uStack_278._0_4_ = 1;
  local_1a8.Elements[0] = &(param_2->ViewState->PrevFrameViewInfo).AmbientOcclusionHistory;
  if (param_2->ViewState == (FSceneViewState *)0x0) {
    local_1a8.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
  }
  local_218 = 0;
  uStack_210 = 0;
  local_228 = (FRDGTexture *)0x0;
  uStack_220 = 0;
  local_330._padding_ = (longlong)&param_3->AmbientOcclusionHistory;
  uStack_2f8 = (undefined4)uStack_d8;
  uStack_2f4 = (undefined4)((ulonglong)uStack_d8 >> 0x20);
  uStack_2f0 = (undefined4)local_d0;
  uStack_2ec = (undefined4)((ulonglong)local_d0 >> 0x20);
  local_330._Myfirst._Val = local_c0;
  uStack_320 = uStack_b8;
  uVar6 = uStack_320;
  local_1a8.Elements[2]._0_4_ = uStack_2f8;
  local_1a8.Elements[2]._4_4_ = uStack_2f4;
  uStack_320._0_4_ = (undefined4)uStack_b8;
  uStack_320._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
  local_1a8.Elements[1] = local_e0;
  local_188.Elements[3]._0_4_ = (undefined4)local_b0;
  local_188.Elements[3]._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
  local_188.Elements[2]._0_4_ = (undefined4)uStack_320;
  local_188.Elements[2]._4_4_ = uStack_320._4_4_;
  local_168.DenoisingResolutionFraction = fStack_2d4;
  local_168.InputResolutionFraction = local_2d8;
  local_168.ReconstructionSamples = iStack_2cc;
  local_168._24_4_ = uStack_2d0;
  local_188.Elements[1] = (FScreenSpaceDenoiserHistory *)local_c0;
  local_168.SignalBatchSize = iStack_2e4;
  local_168.SignalProcessing = local_2e8;
  local_168.MaxInputSPP = iStack_2dc;
  local_168.HarmonicPeriode = fStack_2e0;
  local_168.KernelSpreadFactor = fStack_2c4;
  local_168.PreConvolutionCount = local_2c8;
  local_168.HistoryConvolutionSampleCount = iStack_2bc;
  local_168._40_4_ = uStack_2c0;
  local_168._52_4_ = uStack_2b4;
  local_168.LightSceneInfo.Elements[0]._0_4_ = uStack_2b0;
  local_168.LightSceneInfo.Elements[0]._4_4_ = uStack_2ac;
  local_168.LightSceneInfo.Elements[1] = local_2a8;
  local_168.LightSceneInfo.Elements[2] = pFStack_2a0;
  local_168.LightSceneInfo.Elements[3] = local_298;
  local_168.CompressedDepthTexture = pFStack_290;
  local_308._12_4_ = uStack_24c;
  local_308.ArrayNum = 1;
  local_168.CompressedShadingModelTexture = local_288;
  uStack_320 = uVar6;
  local_308.DataPtr = param_2;
  local_268 = pTStack_280;
  local_258 = param_2;
  local_1a8.Elements[3]._0_4_ = uStack_2f0;
  local_1a8.Elements[3]._4_4_ = uStack_2ec;
  local_188.Elements[0] = (FScreenSpaceDenoiserHistory *)local_330._padding_;
  local_168.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_280;
  local_168.ViewSettingsArray._8_8_ = uStack_278;
  DenoiseSignalAtConstantPixelDensity
            (param_1,&local_308,param_4,&local_208,(FSSDSignalTextures *)&local_248,&local_168,
             &local_188,&local_1a8,(FSSDSignalTextures *)&local_228);
  __return_storage_ptr__->AmbientOcclusionMask = local_228;
  if (local_208.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  if (local_338 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_348);
  }
  return __return_storage_ptr__;
}

// DenoiseDiffuseIndirect @ 145531600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FSSDSignalTextures * __thiscall
FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect
          (FDefaultScreenSpaceDenoiser *this,FSSDSignalTextures *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FDiffuseIndirectInputs *param_5,
          FAmbientOcclusionRayTracingConfig param_6)

{
  char cVar1;
  FSceneViewState *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<float> *pTVar6;
  undefined8 uVar7;
  bool bVar8;
  FRDGScope *this_00;
  FSSDSignalTextures *pFVar9;
  int iVar10;
  undefined1 auStackY_378 [32];
  TRDGEventScopeGuard<FRDGScope_RHI> local_328;
  char local_318;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_> local_310;
  undefined8 uStack_300;
  TArrayView<FViewInfo_const_,int> local_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ESignalProcessing local_2c8;
  int iStack_2c4;
  float fStack_2c0;
  int iStack_2bc;
  float local_2b8;
  float fStack_2b4;
  undefined4 uStack_2b0;
  int iStack_2ac;
  int local_2a8;
  float fStack_2a4;
  undefined4 uStack_2a0;
  int iStack_29c;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  FLightSceneInfo *local_288;
  FLightSceneInfo *pFStack_280;
  FLightSceneInfo *local_278;
  FRDGTexture *pFStack_270;
  FRDGTexture *local_268;
  TIntRect<int>_u_0 *pTStack_260;
  undefined8 uStack_258;
  TIntRect<int>_u_0 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  FViewInfo *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  FRDGTexture *local_228;
  FRDGTexture *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  FViewInfoPooledRenderTargets local_208;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_1a8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_188;
  FSSDConstantPixelDensitySettings local_168;
  FScreenSpaceDenoiserHistory *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  TRHIBreadcrumbDesc<23> *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  TIntRect<int>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_318 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0xb14;
        local_1b8 = 0x54bd6210;
        uStack_1b4 = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x54bd6210;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = uStack_1bc;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseDiffuseI;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseDiffuseI;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect'::__l7::Desc::operator()<>'::
               __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    local_310._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    local_328.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_328.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_310);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_318 = '\x01';
  }
  local_208.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_208);
  pTVar4 = CVarGIReconstructionSampleCount.Ref;
  local_218 = 0;
  uStack_210 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_228 = param_5->Color;
  local_220 = param_5->RayHitDistance;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_2b8 = param_6.ResolutionFraction;
  iStack_2c4 = 1;
  fStack_2c0 = 1.0;
  fStack_2b4 = 1.0;
  uStack_2b0 = CONCAT31(uStack_2b0._1_3_,1);
  fStack_2a4 = 8.0;
  pFStack_270 = (FRDGTexture *)0x0;
  local_268 = (FRDGTexture *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_2c8 = DiffuseAndAmbientOcclusion;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSSDSignalTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  pTVar5 = CVarGIPreConvolutionCount.Ref;
  iVar10 = 0x38;
  if (pTVar4->ShadowedValue[1] < 0x38) {
    iVar10 = pTVar4->ShadowedValue[1];
  }
  iStack_2ac = 1;
  if (1 < iVar10) {
    iStack_2ac = iVar10;
  }
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSSDSignalTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  pTVar4 = CVarGITemporalAccumulation.Ref;
  local_2a8 = pTVar5->ShadowedValue[1];
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSSDSignalTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  pTVar5 = CVarGIHistoryConvolutionSampleCount.Ref;
  uStack_2a0 = CONCAT31(uStack_2a0._1_3_,pTVar4->ShadowedValue[1] != 0);
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSSDSignalTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  pTVar6 = CVarGIHistoryConvolutionKernelSpreadFactor.Ref;
  iStack_29c = pTVar5->ShadowedValue[1];
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSSDSignalTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  pFVar2 = param_2->ViewState;
  iStack_2bc = (int)param_6.RayCountPerPixel;
  *(undefined8 *)&__return_storage_ptr__->Textures = 0;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x10 = 0;
  uStack_240 = 1;
  uStack_230 = 1;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x18 = 0;
  local_168.HistoryConvolutionKernelSpreadFactor = pTVar6->ShadowedValue[1];
  pTStack_260 = &local_a8;
  uStack_2d8 = (undefined4)uStack_d8;
  uStack_2d4 = (undefined4)((ulonglong)uStack_d8 >> 0x20);
  local_1a8.Elements[0] = &(pFVar2->PrevFrameViewInfo).DiffuseIndirectHistory;
  if (pFVar2 == (FSceneViewState *)0x0) {
    local_1a8.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
  }
  uStack_258._4_4_ = uStack_23c;
  uStack_258._0_4_ = 1;
  uStack_2d0 = (undefined4)local_d0;
  uStack_2cc = (undefined4)((ulonglong)local_d0 >> 0x20);
  local_310._padding_ = (longlong)&param_3->DiffuseIndirectHistory;
  local_310._Myfirst._Val = local_c0;
  uStack_300 = uStack_b8;
  uVar7 = uStack_300;
  local_1a8.Elements[2]._0_4_ = uStack_2d8;
  local_1a8.Elements[2]._4_4_ = uStack_2d4;
  uStack_300._0_4_ = (undefined4)uStack_b8;
  uStack_300._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
  local_1a8.Elements[1] = local_e0;
  local_188.Elements[3]._0_4_ = (undefined4)local_b0;
  local_188.Elements[3]._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
  local_188.Elements[2]._0_4_ = (undefined4)uStack_300;
  local_188.Elements[2]._4_4_ = uStack_300._4_4_;
  local_168.DenoisingResolutionFraction = fStack_2b4;
  local_168.InputResolutionFraction = local_2b8;
  local_168.ReconstructionSamples = iStack_2ac;
  local_168._24_4_ = uStack_2b0;
  local_188.Elements[1] = (FScreenSpaceDenoiserHistory *)local_c0;
  local_168.SignalBatchSize = iStack_2c4;
  local_168.SignalProcessing = local_2c8;
  local_168.MaxInputSPP = iStack_2bc;
  local_168.HarmonicPeriode = fStack_2c0;
  local_168.KernelSpreadFactor = fStack_2a4;
  local_168.PreConvolutionCount = local_2a8;
  local_168.HistoryConvolutionSampleCount = iStack_29c;
  local_168._40_4_ = uStack_2a0;
  local_168._52_4_ = uStack_294;
  local_168.LightSceneInfo.Elements[0]._0_4_ = uStack_290;
  local_168.LightSceneInfo.Elements[0]._4_4_ = uStack_28c;
  local_168.LightSceneInfo.Elements[1] = local_288;
  local_168.LightSceneInfo.Elements[2] = pFStack_280;
  local_168.LightSceneInfo.Elements[3] = local_278;
  local_168.CompressedDepthTexture = pFStack_270;
  local_2e8._12_4_ = uStack_22c;
  local_2e8.ArrayNum = 1;
  local_168.CompressedShadingModelTexture = local_268;
  uStack_300 = uVar7;
  local_2e8.DataPtr = param_2;
  local_248 = pTStack_260;
  local_238 = param_2;
  local_1a8.Elements[3]._0_4_ = uStack_2d0;
  local_1a8.Elements[3]._4_4_ = uStack_2cc;
  local_188.Elements[0] = (FScreenSpaceDenoiserHistory *)local_310._padding_;
  local_168.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_260;
  local_168.ViewSettingsArray._8_8_ = uStack_258;
  DenoiseSignalAtConstantPixelDensity
            (param_1,&local_2e8,param_4,&local_208,(FSSDSignalTextures *)&local_228,&local_168,
             &local_188,&local_1a8,__return_storage_ptr__);
  if (local_208.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  if (local_318 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_328);
  }
  return __return_storage_ptr__;
}

// DenoiseDiffuseIndirectHarmonic @ 145531ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FSSDSignalTextures * __thiscall
FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic
          (FDefaultScreenSpaceDenoiser *this,FSSDSignalTextures *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FDiffuseIndirectHarmonic *param_5,
          FCommonParameters *param_6)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  undefined8 uVar7;
  bool bVar8;
  FRDGScope *this_00;
  FSSDSignalTextures *pFVar9;
  undefined1 auStackY_388 [32];
  TRDGEventScopeGuard<FRDGScope_RHI> local_338;
  char local_328;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_> local_320;
  undefined8 uStack_310;
  TArrayView<FViewInfo_const_,int> local_2f8;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  ESignalProcessing local_2d8;
  int iStack_2d4;
  float fStack_2d0;
  int iStack_2cc;
  float local_2c8;
  bool bStack_2c0;
  undefined3 uStack_2bf;
  int iStack_2bc;
  int local_2b8;
  float fStack_2b4;
  undefined4 uStack_2b0;
  int iStack_2ac;
  float local_2a8;
  undefined4 uStack_2a4;
  FLightSceneInfo *pFStack_2a0;
  FLightSceneInfo *local_298;
  FLightSceneInfo *pFStack_290;
  FLightSceneInfo *local_288;
  FRDGTexture *pFStack_280;
  FRDGTexture *local_278;
  TIntRect<int>_u_0 *pTStack_270;
  undefined8 uStack_268;
  TIntRect<int>_u_0 *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  FViewInfo *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  FViewInfoPooledRenderTargets local_238;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_1d8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_1b8;
  FSSDSignalTextures local_198;
  FSSDConstantPixelDensitySettings local_178;
  FScreenSpaceDenoiserHistory *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  TRHIBreadcrumbDesc<31> *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  TIntRect<int>_u_0 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_388;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_328 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0xb54;
        local_1e8 = 0x54bd6210;
        uStack_1e4 = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x54bd6210;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = uStack_1ec;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseDiffuseI;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseDiffuseI;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic'::__l7::Desc::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    local_320._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseDiffuseIndirectHarmonic(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectHarmonic_const&___ptr64,HybridIndirectLighting::FCommonParameters_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    local_338.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_338.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_320);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_328 = '\x01';
  }
  local_238.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_238.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_238.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_238.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_238);
  pTVar5 = CVarGIReconstructionSampleCount.Ref;
  fVar4 = __real_3f800000;
  local_198.Textures._16_8_ = 0;
  local_198.Textures._24_8_ = 0;
  local_198.Textures._0_8_ = *(undefined8 *)&param_5->SphericalHarmonic;
  local_198.Textures._8_8_ = *(undefined8 *)&(param_5->SphericalHarmonic).field_0x8;
  local_b8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_b8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  iStack_2d4 = 1;
  fStack_2d0 = 1.0;
  bStack_2c0 = true;
  local_2c8 = __real_3f800000 / (float)param_6->DownscaleFactor;
  local_2b8 = 0;
  fStack_2b4 = 8.0;
  iStack_2ac = 1;
  local_2a8 = 1.0;
  pFStack_280 = (FRDGTexture *)0x0;
  local_278 = (FRDGTexture *)0x0;
  local_2d8 = DiffuseSphericalHarmonic;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSSDSignalTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  pTVar6 = CVarGITemporalAccumulation.Ref;
  iStack_2bc = pTVar5->ShadowedValue[1];
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FSSDSignalTextures *)(*pcVar3)();
      return pFVar9;
    }
  }
  iStack_2cc = param_6->RayCountPerPixel;
  iVar2 = param_6->DownscaleFactor;
  uStack_2b0 = CONCAT31(uStack_2b0._1_3_,pTVar6->ShadowedValue[1] != 0);
  pTStack_270 = &local_b8;
  local_1d8.Elements[0] = &(param_2->ViewState->PrevFrameViewInfo).DiffuseIndirectHistory;
  if (param_2->ViewState == (FSceneViewState *)0x0) {
    local_1d8.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
  }
  local_320._padding_ = (longlong)&param_3->DiffuseIndirectHistory;
  *(undefined8 *)&__return_storage_ptr__->Textures = 0;
  local_178.DenoisingResolutionFraction = fVar4 / (float)iVar2;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x10 = 0;
  uStack_250 = 1;
  uStack_240 = 1;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x18 = 0;
  uStack_268._4_4_ = uStack_24c;
  uStack_268._0_4_ = 1;
  uStack_2e8 = (undefined4)uStack_e8;
  uStack_2e4 = (undefined4)((ulonglong)uStack_e8 >> 0x20);
  uStack_2e0 = (undefined4)local_e0;
  uStack_2dc = (undefined4)((ulonglong)local_e0 >> 0x20);
  local_1d8.Elements[2]._0_4_ = uStack_2e8;
  local_1d8.Elements[2]._4_4_ = uStack_2e4;
  local_320._Myfirst._Val = local_d0;
  uStack_310 = uStack_c8;
  uVar7 = uStack_310;
  uStack_310._0_4_ = (undefined4)uStack_c8;
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_c8 >> 0x20);
  local_1d8.Elements[1] = local_f0;
  local_1b8.Elements[3]._0_4_ = (undefined4)local_c0;
  local_1b8.Elements[3]._4_4_ = (undefined4)((ulonglong)local_c0 >> 0x20);
  local_1b8.Elements[2]._0_4_ = (undefined4)uStack_310;
  local_1b8.Elements[2]._4_4_ = uStack_310._4_4_;
  local_1b8.Elements[1] = (FScreenSpaceDenoiserHistory *)local_d0;
  local_178.SignalBatchSize = iStack_2d4;
  local_178.SignalProcessing = local_2d8;
  local_178.MaxInputSPP = iStack_2cc;
  local_178.HarmonicPeriode = fStack_2d0;
  local_178.InputResolutionFraction = local_2c8;
  local_178.bEnableReconstruction = bStack_2c0;
  local_178._25_3_ = uStack_2bf;
  local_178.ReconstructionSamples = iStack_2bc;
  local_178._52_4_ = uStack_2a4;
  local_178.HistoryConvolutionKernelSpreadFactor = local_2a8;
  local_178.KernelSpreadFactor = fStack_2b4;
  local_178.PreConvolutionCount = local_2b8;
  local_178.HistoryConvolutionSampleCount = iStack_2ac;
  local_178._40_4_ = uStack_2b0;
  local_178.LightSceneInfo.Elements[0] = pFStack_2a0;
  local_178.LightSceneInfo.Elements[3] = local_288;
  local_178.CompressedDepthTexture = pFStack_280;
  local_2f8._12_4_ = uStack_23c;
  local_2f8.ArrayNum = 1;
  local_178.LightSceneInfo.Elements[1] = local_298;
  local_178.LightSceneInfo.Elements[2] = pFStack_290;
  local_178.CompressedShadingModelTexture = local_278;
  uStack_310 = uVar7;
  local_2f8.DataPtr = param_2;
  local_258 = pTStack_270;
  local_248 = param_2;
  local_1d8.Elements[3]._0_4_ = uStack_2e0;
  local_1d8.Elements[3]._4_4_ = uStack_2dc;
  local_1b8.Elements[0] = (FScreenSpaceDenoiserHistory *)local_320._padding_;
  local_178.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_270;
  local_178.ViewSettingsArray._8_8_ = uStack_268;
  DenoiseSignalAtConstantPixelDensity
            (param_1,&local_2f8,param_4,&local_238,&local_198,&local_178,&local_1b8,&local_1d8,
             __return_storage_ptr__);
  if (local_238.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_238.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_238.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_238.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_238.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_238.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_238.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_238.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  if (local_328 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_338);
  }
  return __return_storage_ptr__;
}

// DenoisePolychromaticPenumbraHarmonics @ 145532410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FPolychromaticPenumbraOutputs * __thiscall
FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics
          (FDefaultScreenSpaceDenoiser *this,FPolychromaticPenumbraOutputs *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FPolychromaticPenumbraHarmonics *param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  FGlobalShaderMap *this_00;
  code *pcVar4;
  FRDGTextureSRV *pFVar5;
  FRDGTexture *pFVar6;
  undefined8 uVar7;
  float fVar8;
  TConsoleVariableData<int> *pTVar9;
  FSceneTextureParameters *pFVar10;
  FParameters *pFVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  FRDGScope *this_01;
  undefined8 *puVar16;
  FPolychromaticPenumbraOutputs *pFVar17;
  FShaderParametersMetadata *pFVar18;
  FSSDSignalUAVs *pFVar19;
  FRDGTextureUAV *pFVar20;
  FShaderType *pFVar21;
  FName this_02;
  FRDGEventName *pFVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  undefined8 *puVar26;
  int iVar27;
  undefined1 auStackY_a18 [32];
  undefined8 *local_9c8;
  FSceneTextureParameters *local_9c0;
  FRDGTextureUAVDesc local_9b8;
  FScreenSpaceDenoiserHistory *pFStack_9a0;
  int local_998;
  int iStack_994;
  undefined4 local_990;
  undefined4 uStack_98c;
  FParameters *local_988;
  EUniformBufferBindingFlags EStack_980;
  undefined7 uStack_97f;
  undefined1 local_978 [16];
  FScreenSpaceDenoiserHistory *pFStack_968;
  FScreenSpaceDenoiserHistory *pFStack_960;
  TIntVector3<int>_u_0 local_958;
  FScreenSpaceDenoiserHistory *local_948;
  FRDGTexture *pFStack_940;
  FScreenSpaceDenoiserHistory *pFStack_938;
  FRDGTexture *pFStack_930;
  FScreenSpaceDenoiserHistory *local_928;
  FScreenSpaceDenoiserHistory *pFStack_920;
  FScreenSpaceDenoiserHistory *local_918;
  undefined8 uStack_910;
  FRDGTexture *local_908;
  FPolychromaticPenumbraOutputs *local_900;
  TRDGEventScopeGuard<FRDGScope_RHI> local_8f8;
  char local_8e8;
  FRDGTexture *local_8d8;
  FRDGTexture *local_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  float fStack_8b0;
  undefined4 uStack_8ac;
  undefined4 local_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  int iStack_89c;
  undefined4 local_898;
  undefined4 uStack_894;
  uint uStack_890;
  undefined4 uStack_88c;
  undefined4 local_888;
  undefined4 uStack_884;
  FLightSceneInfo *pFStack_880;
  FLightSceneInfo *local_878;
  FLightSceneInfo *pFStack_870;
  FLightSceneInfo *local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  TIntRect<int>_u_0 *pTStack_850;
  undefined8 uStack_848;
  ESignalProcessing local_838;
  int iStack_834;
  float fStack_830;
  int iStack_82c;
  float local_828;
  float fStack_824;
  uint uStack_820;
  int iStack_81c;
  int iStack_818;
  float fStack_814;
  undefined4 uStack_810;
  int iStack_80c;
  float local_808;
  undefined4 uStack_804;
  FLightSceneInfo *pFStack_800;
  FLightSceneInfo *local_7f8;
  FLightSceneInfo *pFStack_7f0;
  FLightSceneInfo *local_7e8;
  FRDGTexture *pFStack_7e0;
  FRDGTexture *local_7d8;
  TIntRect<int>_u_0 *pTStack_7d0;
  undefined8 uStack_7c8;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 local_798;
  undefined4 uStack_794;
  uint uStack_790;
  undefined4 uStack_78c;
  undefined4 local_788;
  undefined4 uStack_784;
  FLightSceneInfo *pFStack_780;
  FLightSceneInfo *local_778;
  FLightSceneInfo *pFStack_770;
  FLightSceneInfo *local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  TIntRect<int>_u_0 *pTStack_750;
  undefined8 uStack_748;
  TIntRect<int>_u_0 *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  TIntRect<int>_u_0 *local_728;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  FViewInfo *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  TIntRect<int>_u_0 *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  FViewInfo *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_6e8;
  FViewInfo *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  FSSDSignalTextures local_6c8;
  FRDGTexture *local_6a8;
  FRDGTexture *pFStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined1 local_688 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<38>_const_*,std::tuple<>_> local_680;
  TArrayView<FViewInfo_const_,int> local_668;
  FString local_658;
  FViewInfoPooledRenderTargets local_648;
  FViewInfoPooledRenderTargets local_608;
  FViewInfoPooledRenderTargets local_5c8;
  TArrayView<FViewInfo_const_,int> local_588;
  TShaderRefBase<_anonymous_namespace_::FSSDComposeHarmonicsCS,FShaderMapPointerTable> local_578;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_548;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_528;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_508;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_4e8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_4c8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_4a8;
  FRDGEventName local_488;
  FSSDConstantPixelDensitySettings local_468;
  FSSDConstantPixelDensitySettings local_3e8;
  undefined1 *local_368 [7];
  FLightSceneInfo *pFStack_330;
  FLightSceneInfo *local_328;
  FLightSceneInfo *pFStack_320;
  FLightSceneInfo *local_318;
  FRDGTexture *pFStack_310;
  FRDGTexture *local_308;
  TIntRect<int>_u_0 *pTStack_300;
  undefined8 local_2f8;
  FScreenSpaceDenoiserHistory *local_2e0;
  FRDGTexture *pFStack_2d8;
  FScreenSpaceDenoiserHistory *local_2d0;
  FScreenSpaceDenoiserHistory *local_2c0;
  FScreenSpaceDenoiserHistory *pFStack_2b8;
  FScreenSpaceDenoiserHistory *local_2b0;
  FScreenSpaceDenoiserHistory *local_2a0;
  FRDGTexture *pFStack_298;
  FScreenSpaceDenoiserHistory *local_290;
  FScreenSpaceDenoiserHistory *local_280;
  FScreenSpaceDenoiserHistory *pFStack_278;
  FScreenSpaceDenoiserHistory *local_270;
  FScreenSpaceDenoiserHistory *local_260;
  FScreenSpaceDenoiserHistory *pFStack_258;
  FScreenSpaceDenoiserHistory *local_250;
  FScreenSpaceDenoiserHistory *local_240;
  FScreenSpaceDenoiserHistory *pFStack_238;
  FScreenSpaceDenoiserHistory *local_230;
  FSSDSignalUAVs local_228;
  undefined1 local_208 [24];
  float local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined2 local_1d4;
  void *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8 [24];
  float local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  void *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  TIntRect<int>_u_0 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  TIntRect<int>_u_0 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  TIntRect<int>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a18;
  puVar26 = (undefined8 *)0x0;
  local_9c0 = param_4;
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_8e8 = '\0';
  local_900 = __return_storage_ptr__;
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x9c4;
      local_558 = 0x54bd6130;
      uStack_554 = 1;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x54bd6130;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = uStack_55c;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 1;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)u_DenoisePolychro;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)u_DenoisePolychro;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs,4000);
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceGpuSpecId = 0;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics'::__l7::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_680._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FPolychromaticPenumbraOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoisePolychromaticPenumbraHarmonics(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FPolychromaticPenumbraHarmonics_const&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    local_8f8.State = (FRDGScopeState *)param_1;
    this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_01;
    local_8f8.Scope = this_01;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<38>_const_*,std::tuple<>_>_>
              (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_680);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_8e8 = '\x01';
  }
  local_908 = FRDGBuilder::RegisterExternalTexture
                        (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x28,
                         None);
  FRDGBuilder::RegisterExternalTexture
            (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x20,None);
  puVar16 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x230,0x10);
  if (puVar16 == (undefined8 *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pFVar17 = (FPolychromaticPenumbraOutputs *)(*pcVar4)();
      return pFVar17;
    }
  }
  else {
    lVar23 = 4;
    *puVar16 = &FRDGAllocator::TObject<FSSDComposeHarmonicsCS::FParameters>::_vftable_;
    puVar26 = puVar16;
    do {
      puVar26[2] = 0;
      puVar26[3] = 0;
      puVar26[4] = 0;
      puVar26[5] = 0;
      lVar23 = lVar23 + -1;
      puVar26 = puVar26 + 4;
    } while (lVar23 != 0);
    puVar16[0x12] = 0;
    puVar16[0x13] = 0;
    puVar16[0x14] = 0;
    puVar16[0x15] = 0;
    _anon_457E29A6::FSSDCommonParameters::FSSDCommonParameters
              ((FSSDCommonParameters *)(puVar16 + 0x16));
    puVar16[0x40] = 0;
    puVar16[0x41] = 0;
    puVar16[0x42] = 0;
    puVar16[0x43] = 0;
    puVar16[0x44] = 0;
    puVar26 = puVar16;
  }
  local_9c8 = puVar26;
  if ((((undefined8 **)param_1->_padding_ <= &local_9c8) &&
      (&local_9c8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
    pcVar4 = (code *)swi(3);
    pFVar17 = (FPolychromaticPenumbraOutputs *)(*pcVar4)();
    return pFVar17;
  }
  iVar13 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  local_988 = (FParameters *)(puVar26 + 2);
  puVar16 = (undefined8 *)&(param_5->Diffuse).Harmonics.field_0x8;
  *(int *)&param_1->_padding_ = iVar13 + 1;
  uVar24 = 2;
  uVar14 = 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar13 * 8) = local_9c8;
  *(undefined8 *)&(local_988->SignalHarmonics).Elements[0].Textures =
       *(undefined8 *)&(param_5->Diffuse).Harmonics;
  puVar26[3] = *puVar16;
  puVar26[4] = *(undefined8 *)&(param_5->Specular).Harmonics;
  puVar26[5] = *(undefined8 *)&(param_5->Specular).Harmonics.field_0x8;
  puVar26 = puVar26 + 6;
  do {
    local_648.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
    local_648.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
    local_648.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
    local_648.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
    SetupSceneViewInfoPooledRenderTargets(param_2,&local_648);
    local_168._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_168._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
    local_158 = 0;
    uStack_150 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_928 = (FScreenSpaceDenoiserHistory *)0x0;
    pFStack_920 = (FScreenSpaceDenoiserHistory *)0x0;
    local_9b8._padding_ = 0;
    iStack_89c = uVar24 * uVar24;
    local_9b8._padding_ = (longlong)local_2e0;
    local_978._0_8_ = (FViewInfo *)0x0;
    pTStack_850 = &local_168;
    local_978._8_8_ = local_2c0;
    local_6c8.Textures._0_8_ = *puVar16;
    uVar14 = uVar14 + 1;
    local_148 = 0;
    uStack_140 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_918 = (FScreenSpaceDenoiserHistory *)0x0;
    uStack_910 = 0;
    local_6c8.Textures._8_8_ =
         *(undefined8 *)(&(param_5->Diffuse).Harmonics.field_0x0 + (ulonglong)uVar14 * 8);
    local_548.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
    local_548.Elements[1] = local_2e0;
    local_6c8.Textures._16_8_ = puVar16[6];
    local_528.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
    local_528.Elements[1] = local_2c0;
    local_9b8.Texture = pFStack_2d8;
    pFStack_9a0 = local_2d0;
    local_548.Elements[2] = (FScreenSpaceDenoiserHistory *)pFStack_2d8;
    local_548.Elements[3] = local_2d0;
    fStack_8b0 = (float)(int)uVar24;
    uStack_720 = 1;
    local_6c8.Textures._24_8_ =
         *(undefined8 *)(&(param_5->Specular).Harmonics.field_0x0 + (ulonglong)uVar14 * 8);
    uStack_848._4_4_ = uStack_71c;
    uStack_848._0_4_ = 1;
    local_8a8 = 0x3f800000;
    uStack_8a4 = 0x3f800000;
    uStack_8a0 = CONCAT31(uStack_8a0._1_3_,1);
    local_898 = 0;
    uStack_894 = 0x41000000;
    uStack_88c = 1;
    local_888 = 0x3f800000;
    uStack_860 = 0;
    local_858 = 0;
    uStack_890 = uStack_890 & 0xffffff00;
    uStack_710 = 1;
    pFStack_968 = pFStack_2b8;
    pFStack_960 = local_2b0;
    local_528.Elements[2] = pFStack_2b8;
    local_528.Elements[3] = local_2b0;
    local_3e8.PreConvolutionCount = 0;
    local_3e8.KernelSpreadFactor = 8.0;
    local_3e8.HistoryConvolutionSampleCount = 1;
    local_3e8._40_4_ = uStack_890;
    local_8b8 = 1;
    uStack_8b4 = 1;
    uStack_8ac = 1;
    local_3e8.SignalProcessing = PolychromaticPenumbraHarmonic;
    local_3e8.SignalBatchSize = 1;
    local_3e8.MaxInputSPP = 1;
    local_3e8.InputResolutionFraction = 1.0;
    local_3e8.DenoisingResolutionFraction = 1.0;
    local_3e8.ReconstructionSamples = iStack_89c;
    local_3e8._24_4_ = uStack_8a0;
    local_3e8._52_4_ = uStack_884;
    local_3e8.HistoryConvolutionKernelSpreadFactor = 1.0;
    local_3e8.LightSceneInfo.Elements[1] = local_878;
    local_3e8.LightSceneInfo.Elements[2] = pFStack_870;
    local_3e8.LightSceneInfo.Elements[0] = pFStack_880;
    local_3e8.CompressedShadingModelTexture = (FRDGTexture *)0x0;
    local_668._12_4_ = uStack_70c;
    local_668.ArrayNum = 1;
    local_3e8.LightSceneInfo.Elements[3] = local_868;
    local_3e8.CompressedDepthTexture = (FRDGTexture *)0x0;
    local_728 = pTStack_850;
    local_718 = param_2;
    local_668.DataPtr = param_2;
    local_3e8.HarmonicPeriode = fStack_8b0;
    local_3e8.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_850;
    local_3e8.ViewSettingsArray._8_8_ = uStack_848;
    DenoiseSignalAtConstantPixelDensity
              (param_1,&local_668,local_9c0,&local_648,&local_6c8,&local_3e8,&local_528,&local_548,
               (FSSDSignalTextures *)&local_928);
    *puVar26 = local_928;
    puVar26[1] = pFStack_920;
    puVar26[2] = local_918;
    puVar26[3] = uStack_910;
    if (local_648.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_648.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
    }
    if (local_648.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_648.PrevGBufferB.Reference)->_padding_ + 0x38))();
    }
    if (local_648.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_648.PrevGBufferA.Reference)->_padding_ + 0x38))();
    }
    if (local_648.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_648.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
    }
    uVar24 = uVar24 << 1 | (uint)((int)uVar24 < 0);
    puVar16 = puVar16 + 1;
    puVar26 = puVar26 + 4;
  } while ((int)uVar14 < 4);
  local_608.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_608.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_608.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_608.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_608);
  pFVar11 = local_988;
  pFVar10 = local_9c0;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  local_9b8._padding_ = (longlong)local_2a0;
  pTStack_750 = &local_a8;
  local_948 = *(FScreenSpaceDenoiserHistory **)&(param_5->Diffuse).Harmonics;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_9b8._padding_ = 0;
  uStack_7b4 = 1;
  local_9b8.Texture = pFStack_298;
  pFStack_9a0 = local_290;
  uStack_7ac = 1;
  local_508.Elements[2] = (FScreenSpaceDenoiserHistory *)pFStack_298;
  local_508.Elements[3] = local_290;
  local_7a8 = 0x3f800000;
  local_508.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
  local_508.Elements[1] = local_2a0;
  uStack_7a4 = 0x3f800000;
  local_4e8.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
  local_4e8.Elements[1] = local_280;
  pFStack_968 = pFStack_278;
  pFStack_960 = local_270;
  uStack_7a0 = CONCAT31(uStack_7a0._1_3_,1);
  local_4e8.Elements[2] = pFStack_278;
  local_4e8.Elements[3] = local_270;
  local_7b8 = 1;
  uStack_7b0 = 0x41000000;
  local_368[0] = &DAT_100000001;
  local_368[1]._0_4_ = 8.0;
  local_368[1]._4_4_ = 1;
  uStack_79c = 0x40;
  local_368[2]._0_4_ = 1.0;
  local_368[2]._4_4_ = 1.0;
  local_368[3]._4_4_ = 0x40;
  local_368[3]._0_4_ = uStack_7a0;
  local_798 = 0;
  uStack_794 = 0x41000000;
  uStack_78c = 1;
  local_788 = 0x3f800000;
  local_368[6]._4_4_ = uStack_784;
  local_368[6]._0_4_ = 1.0;
  uStack_790 = uStack_790 & 0xffffff00;
  local_368[4]._0_4_ = 0;
  local_368[4]._4_4_ = 8.0;
  local_368[5]._4_4_ = 1;
  local_368[5]._0_4_ = uStack_790;
  uStack_700 = 1;
  uStack_748._4_4_ = uStack_6fc;
  uStack_748._0_4_ = 1;
  uStack_760 = 0;
  pFStack_938 = *(FScreenSpaceDenoiserHistory **)&(param_5->Specular).Harmonics;
  pFStack_330 = pFStack_780;
  local_328 = local_778;
  pFStack_320 = pFStack_770;
  local_758 = 0;
  pFStack_940 = local_908;
  pFStack_930 = local_908;
  uStack_6f0 = 1;
  local_318 = local_768;
  pFStack_310 = (FRDGTexture *)0x0;
  local_978._12_4_ = uStack_6ec;
  local_978._8_4_ = 1;
  local_308 = (FRDGTexture *)0x0;
  local_978._0_8_ = param_2;
  local_708 = pTStack_750;
  local_6f8 = param_2;
  pTStack_300 = pTStack_750;
  local_2f8 = uStack_748;
  DenoiseSignalAtConstantPixelDensity
            (param_1,(TArrayView<FViewInfo_const_,int> *)local_978,local_9c0,&local_608,
             (FSSDSignalTextures *)&local_948,(FSSDConstantPixelDensitySettings *)local_368,
             &local_4e8,&local_508,&local_988->SignalIntegrand);
  if (local_608.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_608.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_608.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_608.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_608.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_608.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_608.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_608.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  local_1f0 = FClearValueBinding::Black.Value.Color[3];
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_1e4 = *(undefined8 *)&(pFVar10->SceneDepthTexture->Desc).field_0x24;
  local_1ec = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1bc = 1;
  iVar27 = SUB84(local_1e4,4);
  iVar25 = (int)local_1e4;
  local_208._0_8_ = 0x20008;
  local_208._8_8_ = FClearValueBinding::Black._0_8_;
  local_208._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_1e8 = 0;
  local_1dc = 0x10001;
  local_1d8 = 0xa000101;
  local_1d4 = 0xff00;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_998 = iVar25;
  iStack_994 = iVar27;
  local_8d8 = FRDGBuilder::CreateTexture
                        (param_1,(FRDGTextureDesc *)local_208,L"PolychromaticPenumbraComposition0",
                         None);
  local_8d0 = FRDGBuilder::CreateTexture
                        (param_1,(FRDGTextureDesc *)local_208,L"PolychromaticPenumbraComposition1",
                         None);
  iVar13 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8);
  iVar15 = (local_8d8->VisualizeTextureExtent).field0_0x0._s_0.X;
  if (iVar13 < iVar15) {
    iVar13 = iVar15;
  }
  iVar15 = (local_8d8->VisualizeTextureExtent).field0_0x0._s_0.Y;
  (local_8d8->VisualizeTextureExtent).field0_0x0._s_0.X = iVar13;
  iVar13 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc);
  if (iVar13 < iVar15) {
    iVar13 = iVar15;
  }
  (local_8d8->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar13;
  iVar13 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8);
  iVar15 = (local_8d0->VisualizeTextureExtent).field0_0x0._s_0.X;
  if (iVar13 < iVar15) {
    iVar13 = iVar15;
  }
  iVar15 = (local_8d0->VisualizeTextureExtent).field0_0x0._s_0.Y;
  (local_8d0->VisualizeTextureExtent).field0_0x0._s_0.X = iVar13;
  iVar13 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc);
  if (iVar13 < iVar15) {
    iVar13 = iVar15;
  }
  (local_8d0->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar13;
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  pFVar18 = FViewUniformShaderParameters::GetStructMetadata();
  fVar8 = __real_3f000000;
  local_988 = (FParameters *)param_2->_padding_;
  EStack_980 = Static;
  if (pFVar18->BindingFlags != StaticAndShader) {
    EStack_980 = pFVar18->BindingFlags;
  }
  *(FParameters **)&(pFVar11->CommonParameters).ViewUniformBuffer = local_988;
  *(ulonglong *)&(pFVar11->CommonParameters).ViewUniformBuffer.field_0x8 =
       CONCAT71(uStack_97f,EStack_980);
  pFVar5 = local_9c0->SceneStencilTexture;
  (pFVar11->CommonParameters).SceneTextures.SceneDepthTexture = local_9c0->SceneDepthTexture;
  (pFVar11->CommonParameters).SceneTextures.SceneStencilTexture = pFVar5;
  pFVar6 = local_9c0->GBufferBTexture;
  (pFVar11->CommonParameters).SceneTextures.GBufferATexture = local_9c0->GBufferATexture;
  (pFVar11->CommonParameters).SceneTextures.GBufferBTexture = pFVar6;
  pFVar6 = local_9c0->GBufferDTexture;
  (pFVar11->CommonParameters).SceneTextures.GBufferCTexture = local_9c0->GBufferCTexture;
  (pFVar11->CommonParameters).SceneTextures.GBufferDTexture = pFVar6;
  pFVar6 = local_9c0->GBufferFTexture;
  (pFVar11->CommonParameters).SceneTextures.GBufferETexture = local_9c0->GBufferETexture;
  (pFVar11->CommonParameters).SceneTextures.GBufferFTexture = pFVar6;
  pFVar6 = local_9c0->GBufferSGGXTexture;
  (pFVar11->CommonParameters).SceneTextures.GBufferVelocityTexture =
       local_9c0->GBufferVelocityTexture;
  (pFVar11->CommonParameters).SceneTextures.GBufferSGGXTexture = pFVar6;
  (pFVar11->CommonParameters).ViewportMin.field0_0x0 =
       (param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (pFVar11->CommonParameters).ViewportMax.field0_0x0 =
       (param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  iVar13 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4);
  iVar15 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8);
  iVar3 = *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc);
  (pFVar11->CommonParameters).PublicCommonParameters.DenoiserBufferBilinearUVMinMax.field0_0x0._s_0.
  X = ((float)*(int *)&(param_2->ViewRect).field0_0x0 + fVar8) / (float)iVar25;
  (pFVar11->CommonParameters).PublicCommonParameters.DenoiserBufferBilinearUVMinMax.field0_0x0._s_0.
  Y = ((float)iVar13 + fVar8) / (float)iVar27;
  (pFVar11->CommonParameters).PublicCommonParameters.DenoiserBufferBilinearUVMinMax.field0_0x0._s_0.
  Z = ((float)iVar15 - fVar8) / (float)iVar25;
  (pFVar11->CommonParameters).PublicCommonParameters.DenoiserBufferBilinearUVMinMax.field0_0x0._s_0.
  W = ((float)iVar3 - fVar8) / (float)iVar27;
  pFVar19 = ::`anonymous_namespace'::CreateMultiplexedUAVs
                      (&local_228,param_1,(FSSDSignalTextures *)&local_8d8,0);
  pFVar10 = local_9c0;
  local_1b8._0_8_ = 0x20008;
  uVar7 = *(undefined8 *)&(pFVar19->UAVs).field_0x8;
  *(undefined8 *)&(pFVar11->SignalOutput).UAVs = *(undefined8 *)&pFVar19->UAVs;
  *(undefined8 *)&(pFVar11->SignalOutput).UAVs.field_0x8 = uVar7;
  uVar7 = *(undefined8 *)&(pFVar19->UAVs).field_0x18;
  *(undefined8 *)&(pFVar11->SignalOutput).UAVs.field_0x10 =
       *(undefined8 *)&(pFVar19->UAVs).field_0x10;
  *(undefined8 *)&(pFVar11->SignalOutput).UAVs.field_0x18 = uVar7;
  local_194 = *(undefined8 *)&(local_9c0->SceneDepthTexture->Desc).field_0x24;
  local_990 = (undefined4)local_194;
  uStack_98c = SUB84(local_194,4);
  local_1a0 = FClearValueBinding::Black.Value.Color[3];
  local_19c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_1b8._8_8_ = FClearValueBinding::Black._0_8_;
  local_1b8._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_198 = 0;
  local_18c = 0x10001;
  local_188 = 0xa000101;
  local_184 = 0xff00;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_16c = 1;
  local_9b8.Texture =
       FRDGBuilder::CreateTexture
                 (param_1,(FRDGTextureDesc *)local_1b8,L"DebugHarmonicComposition",None);
  local_9b8._padding_._0_7_ = (uint7)(byte)((local_9b8.Texture)->Desc).field_0x34;
  local_9b8._padding_ = local_9b8._padding_ & 0xffffffffffffff00;
  pFVar20 = FRDGBuilder::CreateUAV(param_1,&local_9b8,None);
  pFVar11->DebugOutput = pFVar20;
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  this_00 = param_2->ShaderMap;
  pFVar21 = (FShaderType *)_anon_457E29A6::FSSDComposeHarmonicsCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_6e8,pFVar21,0);
  if (local_6e8.ShaderContent == (FShader *)0x0) {
    this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_688);
    ::FName::ToString((FName *)this_02,&local_658);
    _anon_457E29A6::FSSDComposeHarmonicsCS::GetStaticType();
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pFVar17 = (FPolychromaticPenumbraOutputs *)(*pcVar4)();
      return pFVar17;
    }
  }
  _anon_457E29A6::FSSDComposeHarmonicsCS::GetStaticType();
  iVar13 = (*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 8) -
           *(int *)&(param_2->ViewRect).field0_0x0) + 7;
  local_578.ShaderContent = (FSSDComposeHarmonicsCS *)local_6e8.ShaderContent;
  local_578.ShaderMap = local_6e8.ShaderMap;
  iVar15 = (*(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 0xc) -
           *(int *)((longlong)&(param_2->ViewRect).field0_0x0 + 4)) + 7;
  pFVar22 = FRDGEventName::FRDGEventName(&local_488,1,L"SSD ComposeHarmonics");
  pFVar18 = _anon_457E29A6::FSSDComposeHarmonicsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_958._s_0.Z = 1;
  local_958._s_0.X = (int)((iVar13 >> 0x1f & 7U) + iVar13) >> 3;
  local_958._s_0.Y = (int)((iVar15 >> 0x1f & 7U) + iVar15) >> 3;
  FComputeShaderUtils::AddPass<_anonymous_namespace_::FSSDComposeHarmonicsCS>
            (param_1,pFVar22,Compute,&local_578,pFVar18,pFVar11,(TIntVector3<int> *)&local_958._s_0)
  ;
  if (local_488.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.FormattedEventName.Data.AllocatorInstance.Data);
  }
  pFVar17 = local_900;
  local_5c8.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_5c8.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_5c8.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_5c8.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  local_900->Diffuse = (FRDGTexture *)0x0;
  local_900->Specular = (FRDGTexture *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_5c8);
  pTVar9 = CVarShadowTemporalAccumulation.Ref;
  local_108._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0
  ;
  local_108._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0
  ;
  iStack_834 = 1;
  fStack_830 = 1.0;
  iStack_82c = 1;
  local_828 = 1.0;
  fStack_824 = 1.0;
  iStack_81c = 1;
  iStack_818 = 0;
  fStack_814 = 8.0;
  iStack_80c = 1;
  local_808 = 1.0;
  pFStack_7e0 = (FRDGTexture *)0x0;
  local_7d8 = (FRDGTexture *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_838 = PolychromaticPenumbraHarmonic;
  uStack_820 = uStack_820 & 0xffffff00;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar4 = (code *)swi(3);
    pFVar17 = (FPolychromaticPenumbraOutputs *)(*pcVar4)();
    return pFVar17;
  }
  pTStack_7d0 = &local_108;
  local_6a8 = (FRDGTexture *)0x0;
  pFStack_6a0 = (FRDGTexture *)0x0;
  uStack_730 = 1;
  local_698 = 0;
  uStack_690 = 0;
  uStack_810 = CONCAT31(uStack_810._1_3_,pTVar9->ShadowedValue[1] != 0);
  uStack_7c8._4_4_ = uStack_72c;
  uStack_7c8._0_4_ = 1;
  pFStack_940 = (FRDGTexture *)local_260;
  pFStack_938 = pFStack_258;
  local_948 = &(param_2->ViewState->PrevFrameViewInfo).PolychromaticPenumbraHarmonicsHistory;
  if (param_2->ViewState == (FSceneViewState *)0x0) {
    local_948 = (FScreenSpaceDenoiserHistory *)0x0;
  }
  uStack_6d0 = 1;
  pFStack_920 = local_240;
  local_918 = pFStack_238;
  local_928 = &param_3->PolychromaticPenumbraHarmonicsHistory;
  local_4c8.Elements[2] = pFStack_258;
  local_4c8.Elements[3] = local_250;
  local_4c8.Elements[1] = local_260;
  local_4a8.Elements[1] = local_240;
  local_468.SignalBatchSize = iStack_834;
  local_468.SignalProcessing = local_838;
  local_468.MaxInputSPP = iStack_82c;
  local_468.HarmonicPeriode = fStack_830;
  local_4a8.Elements[2] = pFStack_238;
  local_4a8.Elements[3] = local_230;
  local_468.DenoisingResolutionFraction = fStack_824;
  local_468.InputResolutionFraction = local_828;
  local_468.ReconstructionSamples = iStack_81c;
  local_468._24_4_ = uStack_820;
  local_468.KernelSpreadFactor = fStack_814;
  local_468.PreConvolutionCount = iStack_818;
  local_468.HistoryConvolutionSampleCount = iStack_80c;
  local_468._40_4_ = uStack_810;
  local_468._52_4_ = uStack_804;
  local_468.HistoryConvolutionKernelSpreadFactor = local_808;
  local_468.LightSceneInfo.Elements[0] = pFStack_800;
  local_468.LightSceneInfo.Elements[1] = local_7f8;
  local_468.LightSceneInfo.Elements[2] = pFStack_7f0;
  local_468.LightSceneInfo.Elements[3] = local_7e8;
  local_468.CompressedDepthTexture = pFStack_7e0;
  local_588._12_4_ = uStack_6cc;
  local_588.ArrayNum = 1;
  local_468.CompressedShadingModelTexture = local_7d8;
  local_738 = pTStack_7d0;
  local_6d8 = param_2;
  local_588.DataPtr = param_2;
  local_4c8.Elements[0] = local_948;
  local_4a8.Elements[0] = local_928;
  local_468.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_7d0;
  local_468.ViewSettingsArray._8_8_ = uStack_7c8;
  DenoiseSignalAtConstantPixelDensity
            (param_1,&local_588,pFVar10,&local_5c8,(FSSDSignalTextures *)&local_8d8,&local_468,
             &local_4a8,&local_4c8,(FSSDSignalTextures *)&local_6a8);
  pFVar17->Diffuse = local_6a8;
  pFVar17->Specular = pFStack_6a0;
  if (local_5c8.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_5c8.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_5c8.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_5c8.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_5c8.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_5c8.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_5c8.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_5c8.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  if (local_8e8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_8f8);
  }
  return pFVar17;
}

// DenoiseReflections @ 1455335d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FReflectionsOutputs * __thiscall
FDefaultScreenSpaceDenoiser::DenoiseReflections
          (FDefaultScreenSpaceDenoiser *this,FReflectionsOutputs *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FReflectionsInputs *param_5,
          FReflectionsRayTracingConfig param_6)

{
  char cVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  undefined8 uVar5;
  bool bVar6;
  FRDGScope *this_00;
  FReflectionsOutputs *pFVar7;
  undefined1 auStackY_398 [32];
  TRDGEventScopeGuard<FRDGScope_RHI> local_348;
  char local_338;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_> local_330;
  undefined8 uStack_320;
  TArrayView<FViewInfo_const_,int> local_308;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  ESignalProcessing local_2e8;
  int iStack_2e4;
  float fStack_2e0;
  int iStack_2dc;
  float local_2d8;
  float fStack_2d4;
  undefined4 uStack_2d0;
  int iStack_2cc;
  int local_2c8;
  float fStack_2c4;
  undefined4 uStack_2c0;
  int iStack_2bc;
  float local_2b8;
  undefined4 uStack_2b4;
  FLightSceneInfo *pFStack_2b0;
  FLightSceneInfo *local_2a8;
  FLightSceneInfo *pFStack_2a0;
  FLightSceneInfo *local_298;
  FRDGTexture *pFStack_290;
  FRDGTexture *local_288;
  TIntRect<int>_u_0 *pTStack_280;
  undefined8 uStack_278;
  TIntRect<int>_u_0 *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  FViewInfo *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  FRDGTexture *local_248;
  FRDGTexture *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  FRDGTexture *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  FViewInfoPooledRenderTargets local_208;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_1a8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_188;
  FSSDConstantPixelDensitySettings local_168;
  FScreenSpaceDenoiserHistory *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  TRHIBreadcrumbDesc<19> *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  TIntRect<int>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_338 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0xa83;
        local_1b8 = 0x54bd60c0;
        uStack_1b4 = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x54bd60c0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = uStack_1bc;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseReflecti;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseReflecti;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FDefaultScreenSpaceDenoiser::DenoiseReflections'::__l7::Desc::operator()<>'::__l3
               ::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    local_330._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    local_348.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_348.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_330);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_338 = '\x01';
  }
  local_208.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_208);
  pTVar3 = CVarReflectionReconstructionSampleCount.Ref;
  local_238 = 0;
  uStack_230 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_248 = param_5->Color;
  local_240 = param_5->RayHitDistance;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_2d8 = param_6.ResolutionFraction;
  iStack_2e4 = 1;
  fStack_2e0 = 1.0;
  fStack_2d4 = 1.0;
  uStack_2d0 = CONCAT31(uStack_2d0._1_3_,1);
  fStack_2c4 = 8.0;
  iStack_2bc = 1;
  local_2b8 = 1.0;
  pFStack_290 = (FRDGTexture *)0x0;
  local_288 = (FRDGTexture *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_2e8 = Reflections;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReflectionsOutputs *)(*pcVar2)();
      return pFVar7;
    }
  }
  pTVar4 = CVarReflectionPreConvolutionCount.Ref;
  iStack_2cc = pTVar3->ShadowedValue[1];
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReflectionsOutputs *)(*pcVar2)();
      return pFVar7;
    }
  }
  pTVar3 = CVarReflectionTemporalAccumulation.Ref;
  local_2c8 = pTVar4->ShadowedValue[1];
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReflectionsOutputs *)(*pcVar2)();
      return pFVar7;
    }
  }
  uStack_2c0 = CONCAT31(uStack_2c0._1_3_,pTVar3->ShadowedValue[1] != 0);
  iStack_2dc = param_6.RayCountPerPixel;
  local_228 = (FRDGTexture *)0x0;
  uStack_220 = 0;
  pTStack_280 = &local_a8;
  local_218 = 0;
  uStack_210 = 0;
  local_1a8.Elements[0] = &(param_2->ViewState->PrevFrameViewInfo).ReflectionsHistory;
  if (param_2->ViewState == (FSceneViewState *)0x0) {
    local_1a8.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
  }
  uStack_260 = 1;
  uStack_2f8 = (undefined4)uStack_d8;
  uStack_2f4 = (undefined4)((ulonglong)uStack_d8 >> 0x20);
  uStack_278._4_4_ = uStack_25c;
  uStack_278._0_4_ = 1;
  local_330._padding_ = (longlong)&param_3->ReflectionsHistory;
  uStack_2f0 = (undefined4)local_d0;
  uStack_2ec = (undefined4)((ulonglong)local_d0 >> 0x20);
  local_330._Myfirst._Val = local_c0;
  uStack_320 = uStack_b8;
  uVar5 = uStack_320;
  local_1a8.Elements[2]._0_4_ = uStack_2f8;
  local_1a8.Elements[2]._4_4_ = uStack_2f4;
  uStack_320._0_4_ = (undefined4)uStack_b8;
  uStack_320._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
  local_1a8.Elements[1] = local_e0;
  local_188.Elements[3]._0_4_ = (undefined4)local_b0;
  local_188.Elements[3]._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
  local_188.Elements[1] = (FScreenSpaceDenoiserHistory *)local_c0;
  local_168.SignalBatchSize = iStack_2e4;
  local_168.SignalProcessing = local_2e8;
  local_168.MaxInputSPP = param_6.RayCountPerPixel;
  local_168.HarmonicPeriode = fStack_2e0;
  local_188.Elements[2]._0_4_ = (undefined4)uStack_320;
  local_188.Elements[2]._4_4_ = uStack_320._4_4_;
  local_168.DenoisingResolutionFraction = fStack_2d4;
  local_168.InputResolutionFraction = local_2d8;
  local_168.ReconstructionSamples = iStack_2cc;
  local_168._24_4_ = uStack_2d0;
  local_168.KernelSpreadFactor = fStack_2c4;
  local_168.PreConvolutionCount = local_2c8;
  local_168.HistoryConvolutionSampleCount = iStack_2bc;
  local_168._40_4_ = uStack_2c0;
  local_168._52_4_ = uStack_2b4;
  local_168.HistoryConvolutionKernelSpreadFactor = local_2b8;
  local_168.LightSceneInfo.Elements[0] = pFStack_2b0;
  uStack_250 = 1;
  local_168.LightSceneInfo.Elements[1] = local_2a8;
  local_168.LightSceneInfo.Elements[2] = pFStack_2a0;
  local_168.LightSceneInfo.Elements[3] = local_298;
  local_168.CompressedDepthTexture = pFStack_290;
  local_308._12_4_ = uStack_24c;
  local_308.ArrayNum = 1;
  local_168.CompressedShadingModelTexture = local_288;
  uStack_320 = uVar5;
  local_308.DataPtr = param_2;
  local_268 = pTStack_280;
  local_258 = param_2;
  local_1a8.Elements[3]._0_4_ = uStack_2f0;
  local_1a8.Elements[3]._4_4_ = uStack_2ec;
  local_188.Elements[0] = (FScreenSpaceDenoiserHistory *)local_330._padding_;
  local_168.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_280;
  local_168.ViewSettingsArray._8_8_ = uStack_278;
  DenoiseSignalAtConstantPixelDensity
            (param_1,&local_308,param_4,&local_208,(FSSDSignalTextures *)&local_248,&local_168,
             &local_188,&local_1a8,(FSSDSignalTextures *)&local_228);
  __return_storage_ptr__->Color = local_228;
  if (local_208.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  if (local_338 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_348);
  }
  return __return_storage_ptr__;
}

// DenoiseScreenSpaceDiffuseIndirect @ 145533b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FSSDSignalTextures * __thiscall
FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect
          (FDefaultScreenSpaceDenoiser *this,FSSDSignalTextures *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FDiffuseIndirectInputs *param_5,
          FAmbientOcclusionRayTracingConfig param_6)

{
  char cVar1;
  int iVar2;
  FSceneViewState *pFVar3;
  code *pcVar4;
  bool bVar5;
  TConsoleVariableData<int> *pTVar6;
  undefined8 uVar7;
  bool bVar8;
  FRDGScope *this_00;
  FSSDSignalTextures *pFVar9;
  undefined1 auStackY_378 [32];
  TRDGEventScopeGuard<FRDGScope_RHI> local_328;
  undefined1 local_318;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_> local_310;
  undefined8 uStack_300;
  TArrayView<FViewInfo_const_,int> local_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  ESignalProcessing local_2c8;
  int iStack_2c4;
  float fStack_2c0;
  int iStack_2bc;
  float local_2b8;
  float fStack_2b4;
  undefined4 uStack_2b0;
  int iStack_2ac;
  int local_2a8;
  float fStack_2a4;
  undefined4 uStack_2a0;
  int iStack_29c;
  float local_298;
  undefined4 uStack_294;
  FLightSceneInfo *pFStack_290;
  FLightSceneInfo *local_288;
  FLightSceneInfo *pFStack_280;
  FLightSceneInfo *local_278;
  FRDGTexture *pFStack_270;
  FRDGTexture *local_268;
  TIntRect<int>_u_0 *pTStack_260;
  undefined8 uStack_258;
  TIntRect<int>_u_0 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  FViewInfo *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  FRDGTexture *local_228;
  FRDGTexture *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  FViewInfoPooledRenderTargets local_208;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_1a8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_188;
  FSSDConstantPixelDensitySettings local_168;
  FScreenSpaceDenoiserHistory *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  TRHIBreadcrumbDesc<34> *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  TIntRect<int>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_378;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar5 = false;
  local_318 = 0;
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0xb86;
        local_1b8 = 0x54bd6210;
        uStack_1b4 = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x54bd6210;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = uStack_1bc;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseScreenSp;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseScreenSp;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect'::__l7::Desc::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    local_310._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_FSSDSignalTextures___cdecl_FDefaultScreenSpaceDenoiser::DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FDiffuseIndirectInputs_const&___ptr64,IScreenSpaceDenoiser::FAmbientOcclusionRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    local_328.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_328.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_310);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar5 = true;
    local_318 = 1;
  }
  local_208.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_208);
  pTVar6 = CVarGITemporalAccumulation.Ref;
  local_218 = 0;
  uStack_210 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_228 = param_5->Color;
  local_220 = param_5->AmbientOcclusionMask;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_2b8 = param_6.ResolutionFraction;
  fStack_2b4 = param_6.ResolutionFraction;
  iStack_2c4 = 1;
  fStack_2c0 = 1.0;
  uStack_2b0 = CONCAT31(uStack_2b0._1_3_,1);
  local_2a8 = 0;
  fStack_2a4 = 8.0;
  iStack_29c = 1;
  local_298 = 1.0;
  pFStack_270 = (FRDGTexture *)0x0;
  local_268 = (FRDGTexture *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_2c8 = ScreenSpaceDiffuseIndirect;
  iStack_2ac = 8;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FSSDSignalTextures *)(*pcVar4)();
      return pFVar9;
    }
  }
  pFVar3 = param_2->ViewState;
  iVar2 = pTVar6->ShadowedValue[1];
  iStack_2bc = (int)param_6.RayCountPerPixel;
  *(undefined8 *)&__return_storage_ptr__->Textures = 0;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x10 = 0;
  uStack_240 = 1;
  uStack_230 = 1;
  *(undefined8 *)&(__return_storage_ptr__->Textures).field_0x18 = 0;
  uStack_2a0 = CONCAT31(uStack_2a0._1_3_,iVar2 != 0);
  pTStack_260 = &local_a8;
  local_1a8.Elements[0] = &(pFVar3->PrevFrameViewInfo).DiffuseIndirectHistory;
  if (pFVar3 == (FSceneViewState *)0x0) {
    local_1a8.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
  }
  uStack_2d8 = (undefined4)uStack_d8;
  uStack_2d4 = (undefined4)((ulonglong)uStack_d8 >> 0x20);
  uStack_258._4_4_ = uStack_23c;
  uStack_258._0_4_ = 1;
  uStack_2d0 = (undefined4)local_d0;
  uStack_2cc = (undefined4)((ulonglong)local_d0 >> 0x20);
  local_310._padding_ = (longlong)&param_3->DiffuseIndirectHistory;
  local_310._Myfirst._Val = local_c0;
  uStack_300 = uStack_b8;
  uVar7 = uStack_300;
  local_1a8.Elements[2]._0_4_ = uStack_2d8;
  local_1a8.Elements[2]._4_4_ = uStack_2d4;
  uStack_300._0_4_ = (undefined4)uStack_b8;
  uStack_300._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
  local_1a8.Elements[1] = local_e0;
  local_188.Elements[3]._0_4_ = (undefined4)local_b0;
  local_188.Elements[3]._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
  local_188.Elements[1] = (FScreenSpaceDenoiserHistory *)local_c0;
  local_168.SignalBatchSize = iStack_2c4;
  local_168.SignalProcessing = local_2c8;
  local_168.MaxInputSPP = iStack_2bc;
  local_168.HarmonicPeriode = fStack_2c0;
  local_188.Elements[2]._0_4_ = (undefined4)uStack_300;
  local_188.Elements[2]._4_4_ = uStack_300._4_4_;
  local_168.DenoisingResolutionFraction = fStack_2b4;
  local_168.InputResolutionFraction = local_2b8;
  local_168.ReconstructionSamples = iStack_2ac;
  local_168._24_4_ = uStack_2b0;
  local_168.KernelSpreadFactor = fStack_2a4;
  local_168.PreConvolutionCount = local_2a8;
  local_168.HistoryConvolutionSampleCount = iStack_29c;
  local_168._40_4_ = uStack_2a0;
  local_168._52_4_ = uStack_294;
  local_168.HistoryConvolutionKernelSpreadFactor = local_298;
  local_168.LightSceneInfo.Elements[0] = pFStack_290;
  local_168.LightSceneInfo.Elements[1] = local_288;
  local_168.LightSceneInfo.Elements[2] = pFStack_280;
  local_168.LightSceneInfo.Elements[3] = local_278;
  local_168.CompressedDepthTexture = pFStack_270;
  local_2e8._12_4_ = uStack_22c;
  local_2e8.ArrayNum = 1;
  local_168.CompressedShadingModelTexture = local_268;
  uStack_300 = uVar7;
  local_2e8.DataPtr = param_2;
  local_248 = pTStack_260;
  local_238 = param_2;
  local_1a8.Elements[3]._0_4_ = uStack_2d0;
  local_1a8.Elements[3]._4_4_ = uStack_2cc;
  local_188.Elements[0] = (FScreenSpaceDenoiserHistory *)local_310._padding_;
  local_168.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_260;
  local_168.ViewSettingsArray._8_8_ = uStack_258;
  DenoiseSignalAtConstantPixelDensity
            (param_1,&local_2e8,param_4,&local_208,(FSSDSignalTextures *)&local_228,&local_168,
             &local_188,&local_1a8,__return_storage_ptr__);
  if (local_208.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  if (bVar5) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_328);
  }
  return __return_storage_ptr__;
}

// DenoiseShadowVisibilityMasks @ 145533fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks
          (FDefaultScreenSpaceDenoiser *this,FRDGBuilder *param_1,FViewInfo *param_2,
          FPreviousViewInfo *param_3,FSceneTextureParameters *param_4,
          TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295> *param_5,
          int param_6,
          TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295> *param_7)

{
  longlong lVar1;
  byte bVar2;
  undefined1 uVar3;
  FLightSceneProxy *pFVar4;
  FLightSceneInfo *pFVar5;
  undefined1 *puVar6;
  FSceneViewState *pFVar7;
  code *pcVar8;
  int *piVar9;
  TConsoleVariableData<int> *pTVar10;
  TConsoleVariableData<int> *pTVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  char cVar15;
  FRDGScope *this_00;
  ulonglong *puVar16;
  ulonglong *puVar17;
  int iVar18;
  uint uVar19;
  FShadowRayTracingConfig *pFVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined1 *puVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  int iVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  ulonglong *puVar30;
  TIntRect<int>_u_0 *pTVar31;
  FShadowVisibilityParameters *pFVar32;
  undefined1 auStackY_3e8 [32];
  ULightComponent *local_398;
  ulonglong *local_390;
  TIntPoint<int>_u_0 local_388;
  TIntPoint<int>_u_0 TStack_380;
  TPairInitializer<ULightComponent_const_*_&,FScreenSpaceDenoiserHistory_*_&> local_378;
  FPreviousViewInfo *local_368;
  FShadowVisibilityOutputs *local_360;
  longlong local_358;
  FSceneTextureParameters *local_350;
  FRDGBuilder *local_348;
  TRDGEventScopeGuard<FRDGScope_RHI> local_340;
  char local_330;
  ESignalProcessing local_328;
  int iStack_324;
  float fStack_320;
  int iStack_31c;
  float local_318;
  float fStack_314;
  undefined4 uStack_310;
  int iStack_30c;
  int local_308;
  float fStack_304;
  undefined4 uStack_300;
  int iStack_2fc;
  float local_2f8;
  undefined4 uStack_2f4;
  FLightSceneInfo *apFStack_2f0 [4];
  FRDGTexture *pFStack_2d0;
  FRDGTexture *local_2c8;
  TIntRect<int>_u_0 *pTStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  ULightComponent **local_288;
  ulonglong **local_280;
  TIntRect<int>_u_0 *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  FViewInfo *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_> local_238;
  TArrayView<FViewInfo_const_,int> local_228;
  FSSDSignalTextures local_218;
  FSSDSignalTextures local_1f8;
  FViewInfoPooledRenderTargets local_1d8;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_178;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_158;
  FSSDConstantPixelDensitySettings local_138;
  TIntRect<int>_u_0 local_b8;
  TIntPoint<int>_u_0_s_0 local_a8;
  TIntRect<int>_u_0 TStack_a0;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  puVar25 = (ulonglong *)0x0;
  local_350 = param_4;
  cVar15 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_378.Value = (FScreenSpaceDenoiserHistory **)param_5;
  local_360 = param_7->Elements;
  local_330 = '\0';
  local_368 = param_3;
  local_348 = param_1;
  if ((cVar15 != '\0') && ((cVar15 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_188 = 0x54bd6130;
      uStack_184 = 1;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x54bd6130;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = uStack_18c;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 1;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)u_DenoiseShadowVi;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)u_DenoiseShadowVi;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x955;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                  ::__l2::Desc.Cs,4000);
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceGpuSpecId = 0;
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks'::__l7::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    local_238._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FDefaultScreenSpaceDenoiser::DenoiseShadowVisibilityMasks(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityParameters,4,4294967295>_const&___ptr64,int,TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    local_340.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_340.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_238);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_330 = '\x01';
  }
  local_1d8.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_1d8.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_1d8.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_1d8.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_1d8);
  pTVar10 = CVarShadowReconstructionSampleCount.Ref;
  local_218.Textures._0_8_ = 0;
  local_218.Textures._8_8_ = 0;
  iVar27 = 1;
  local_218.Textures._16_8_ = 0;
  local_218.Textures._24_8_ = 0;
  local_2c8 = (FRDGTexture *)0x0;
  pTStack_2c0 = (TIntRect<int>_u_0 *)0x0;
  local_b8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_b8._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_a8.X = 0;
  local_a8.Y = 0;
  TStack_a0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  TStack_a0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  fStack_320 = 1.0;
  iStack_31c = 1;
  fStack_314 = 1.0;
  uStack_310 = CONCAT31(uStack_310._1_3_,1);
  fStack_304 = 8.0;
  local_2f8 = 1.0;
  pFStack_2d0 = (FRDGTexture *)0x0;
  local_2b8 = (ulonglong)local_2b8._4_4_ << 0x20;
  local_328 = ShadowVisibilityMask;
  local_318 = 1.0;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar11 = CVarShadowPreConvolutionCount.Ref;
  iVar18 = 0x38;
  if (pTVar10->ShadowedValue[1] < 0x38) {
    iVar18 = pTVar10->ShadowedValue[1];
  }
  iStack_30c = 1;
  if (1 < iVar18) {
    iStack_30c = iVar18;
  }
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar10 = CVarShadowTemporalAccumulation.Ref;
  local_308 = pTVar11->ShadowedValue[1];
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar11 = CVarShadowHistoryConvolutionSampleCount.Ref;
  uStack_300 = CONCAT31(uStack_300._1_3_,pTVar10->ShadowedValue[1] != 0);
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_358 = (longlong)param_6;
  iStack_2fc = pTVar11->ShadowedValue[1];
  iStack_324 = param_6;
  if (0 < param_6) {
    pFVar20 = &param_5->Elements[0].RayTracingConfig;
    lVar23 = local_358;
    do {
      piVar9 = &pFVar20->RayCountPerPixel;
      pFVar20 = pFVar20 + 8;
      iVar18 = *piVar9;
      if (*piVar9 < iVar27) {
        iVar18 = iVar27;
      }
      iVar27 = iVar18;
      lVar23 = lVar23 + -1;
      iStack_31c = iVar27;
    } while (lVar23 != 0);
  }
  local_258._0_4_ = 0;
  local_258._4_4_ = 0;
  uStack_250._0_4_ = 0;
  uStack_250._4_4_ = 0;
  local_248._0_4_ = 0;
  local_248._4_4_ = 0;
  uStack_240._0_4_ = 0;
  uStack_240._4_4_ = 0;
  local_2a8._0_4_ = 0;
  local_2a8._4_4_ = 0;
  uStack_2a0._0_4_ = 0;
  uStack_2a0._4_4_ = 0;
  local_298._0_4_ = 0;
  local_298._4_4_ = 0;
  uStack_290._0_4_ = 0;
  uStack_290._4_4_ = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  if (0 < param_6) {
    pTVar31 = &TStack_a0;
    puVar26 = puVar25;
    puVar30 = puVar25;
    pFVar32 = (FShadowVisibilityParameters *)local_378.Value;
    do {
      local_388 = (TIntPoint<int>_u_0)0x0;
      TStack_380 = (TIntPoint<int>_u_0)0x0;
      pFVar4 = ((FShadowVisibilityParameters *)&pFVar32->LightSceneInfo)->LightSceneInfo->Proxy;
      cVar15 = (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,&local_388,param_2,&param_2->ViewRect)
      ;
      if (cVar15 == '\0') {
        local_388 = *(TIntPoint<int>_u_0 *)&(param_2->ViewRect).field0_0x0;
        TStack_380 = (TIntPoint<int>_u_0)
                     *(TIntPoint<int>_u_0 *)
                      &((TIntPoint<int>_u_0 *)((longlong)&(param_2->ViewRect).field0_0x0 + 8))->_s_0
        ;
      }
      uVar12 = local_388;
      uVar13 = TStack_380;
      if ((int)puVar30 != 0) {
        uVar28 = local_388._s_0.X;
        if ((int)local_b8._0_4_ < local_388._s_0.X) {
          uVar28 = local_b8._0_4_;
        }
        uVar29 = local_388._s_0.Y;
        if ((int)local_b8._4_4_ < local_388._s_0.Y) {
          uVar29 = local_b8._4_4_;
        }
        local_b8._4_4_ = uVar29;
        local_b8._0_4_ = uVar28;
        uVar28 = TStack_380._s_0.X;
        if (TStack_380._s_0.X < (int)local_b8._8_4_) {
          uVar28 = local_b8._8_4_;
        }
        uVar29 = TStack_380._s_0.Y;
        if (TStack_380._s_0.Y < (int)local_b8._12_4_) {
          uVar29 = local_b8._12_4_;
        }
        local_b8._12_4_ = uVar29;
        local_b8._8_4_ = uVar28;
        uVar12 = local_b8._s_0.Min.field0_0x0;
        uVar13 = local_b8._s_0.Max.field0_0x0;
      }
      local_b8._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar13;
      local_b8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)uVar12;
      pTVar31->MinMax[-1].field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)local_388;
      *(TIntPoint<int>_u_0 *)pTVar31 = (TIntPoint<int>_u_0_s_0)TStack_380;
      bVar2 = pFVar4->LightType;
      if ((bVar2 != 1) &&
         ((((bVar2 & 0xfc) != 0 || (bVar2 == 1)) &&
          (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_525878754954704501>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScreenSpaceDenoise.cpp"
                               ,0x98b,
                               "IsSupportedLightType(ELightComponentType(Proxy->GetLightType()))"),
          bVar14)))) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = ((FShadowVisibilityParameters *)&pFVar32->LightSceneInfo)->LightSceneInfo;
      *(FRDGTexture **)(&local_218.Textures.field_0x0 + (longlong)puVar26) =
           (pFVar32->InputTextures).Mask;
      pFVar4 = pFVar5->Proxy;
      *(FLightSceneInfo **)((longlong)apFStack_2f0 + (longlong)puVar26) = pFVar5;
      local_398 = pFVar4->LightComponent;
      uVar19 = ((uint)((ulonglong)local_398 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_398 >> 4)) *
               -0x7a143595;
      uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
      puVar16 = puVar25;
      if (*(int *)&(local_368->ShadowHistories).field_0x8 !=
          *(int *)&(local_368->ShadowHistories).field_0x34) {
        puVar6 = *(undefined1 **)&(local_368->ShadowHistories).field_0x40;
        puVar24 = &(local_368->ShadowHistories).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar24 = puVar6;
        }
        iVar27 = *(int *)(puVar24 +
                         (ulonglong)
                         (*(int *)&(local_368->ShadowHistories).field_0x48 - 1U &
                         (uVar19 >> 0x10 ^ uVar19)) * 4);
        if (iVar27 != -1) {
          do {
            puVar21 = (ulonglong *)
                      ((longlong)iVar27 * 0x20 + *(longlong *)&local_368->ShadowHistories);
            if ((ULightComponent *)*puVar21 == local_398) {
              puVar17 = puVar21 + 1;
              if (puVar21 == (ulonglong *)0x0) {
                puVar17 = puVar25;
              }
              if (puVar17 != (ulonglong *)0x0) {
                puVar16 = (ulonglong *)*puVar17;
              }
              break;
            }
            iVar27 = (int)puVar21[3];
          } while (iVar27 != -1);
        }
      }
      *(ulonglong **)((longlong)&local_258 + (longlong)puVar26) = puVar16;
      *(undefined8 *)((longlong)&local_2a8 + (longlong)puVar26) = 0;
      if (param_2->bStatePrevViewInfoIsReadOnly == 0) {
        if ((param_2->ViewState == (FSceneViewState *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("View.ViewState",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ScreenSpaceDenoise.cpp"
                                ,0x998,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = param_2->ViewState;
        uVar19 = ((uint)((ulonglong)local_398 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_398 >> 4))
                 * -0x7a143595;
        uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
        if (*(int *)&(pFVar7->PrevFrameViewInfo).ShadowHistories.field_0x8 !=
            *(int *)&(pFVar7->PrevFrameViewInfo).ShadowHistories.field_0x34) {
          puVar6 = *(undefined1 **)&(pFVar7->PrevFrameViewInfo).ShadowHistories.field_0x40;
          puVar24 = &(pFVar7->PrevFrameViewInfo).ShadowHistories.field_0x38;
          if (puVar6 != (undefined1 *)0x0) {
            puVar24 = puVar6;
          }
          iVar27 = *(int *)(puVar24 +
                           (ulonglong)
                           (*(int *)&(pFVar7->PrevFrameViewInfo).ShadowHistories.field_0x48 - 1U &
                           (uVar19 >> 0x10 ^ uVar19)) * 4);
          if (iVar27 != -1) {
            do {
              plVar22 = (longlong *)
                        ((longlong)iVar27 * 0x20 +
                        *(longlong *)&(pFVar7->PrevFrameViewInfo).ShadowHistories);
              if ((ULightComponent *)*plVar22 == local_398) {
                puVar16 = (ulonglong *)(plVar22 + 1);
                if (plVar22 == (longlong *)0x0) {
                  puVar16 = puVar25;
                }
                if (puVar16 != (ulonglong *)0x0) {
                  puVar16 = (ulonglong *)*puVar16;
                  goto LAB_145534675;
                }
                break;
              }
              iVar27 = (int)plVar22[3];
            } while (iVar27 != -1);
          }
        }
        puVar16 = ::operator_new(0x40);
        local_390 = puVar25;
        if (puVar16 != (ulonglong *)0x0) {
          puVar16[2] = 0;
          *(undefined4 *)(puVar16 + 3) = 0;
          *(undefined4 *)((longlong)puVar16 + 0x1c) = 1;
          puVar16[4] = 0;
          puVar16[5] = 0;
          puVar16[6] = 0;
          puVar16[7] = 0;
          local_390 = puVar16;
        }
        local_288 = &local_398;
        local_280 = &local_390;
        TSet<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<ULightComponent_const_*_&,FScreenSpaceDenoiserHistory_*_&>_>
                  ((TSet<TTuple<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>_>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,TSharedPtr<FScreenSpaceDenoiserHistory,1>,0>,FDefaultSetAllocator>
                    *)&(param_2->ViewState->PrevFrameViewInfo).ShadowHistories,&local_378,
                   (bool *)&local_288);
        puVar16 = local_390;
LAB_145534675:
        *(ulonglong **)((longlong)&local_2a8 + (longlong)puVar26) = puVar16;
      }
      uVar19 = (int)puVar30 + 1;
      puVar30 = (ulonglong *)(ulonglong)uVar19;
      pFVar32 = pFVar32 + 1;
      pTVar31 = (TIntRect<int>_u_0 *)(pTVar31->MinMax + 2);
      puVar26 = puVar26 + 1;
    } while ((int)uVar19 < param_6);
    param_7 = (TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295> *)local_360
    ;
  }
  lVar23 = local_358;
  pTStack_2c0 = &local_b8;
  local_b8._s_0.Min.field0_0x0 =
       (TIntPoint<int>)((ulonglong)local_b8._s_0.Min.field0_0x0 & 0xfffffffefffffffe);
  local_1f8.Textures._0_8_ = 0;
  local_1f8.Textures._8_8_ = 0;
  local_138.SignalBatchSize = iStack_324;
  local_138.SignalProcessing = local_328;
  local_138.MaxInputSPP = iStack_31c;
  local_138.HarmonicPeriode = fStack_320;
  local_1f8.Textures._16_8_ = 0;
  local_1f8.Textures._24_8_ = 0;
  local_138.DenoisingResolutionFraction = fStack_314;
  local_138.InputResolutionFraction = local_318;
  local_138.ReconstructionSamples = iStack_30c;
  local_138._24_4_ = uStack_310;
  local_138.KernelSpreadFactor = fStack_304;
  local_138.PreConvolutionCount = local_308;
  local_138.HistoryConvolutionSampleCount = iStack_2fc;
  local_138._40_4_ = uStack_300;
  local_138._52_4_ = uStack_2f4;
  local_138.HistoryConvolutionKernelSpreadFactor = local_2f8;
  local_138.LightSceneInfo.Elements[0] = apFStack_2f0[0];
  local_138.LightSceneInfo.Elements[1] = apFStack_2f0[1];
  local_138.LightSceneInfo.Elements[2] = apFStack_2f0[2];
  local_138.LightSceneInfo.Elements[3] = apFStack_2f0[3];
  local_138.CompressedDepthTexture = pFStack_2d0;
  uStack_270 = 1;
  local_2b8._4_4_ = uStack_26c;
  local_2b8._0_4_ = 1;
  uStack_260 = 1;
  local_228._12_4_ = uStack_25c;
  local_228.ArrayNum = 1;
  local_138.CompressedShadingModelTexture = local_2c8;
  local_278 = pTStack_2c0;
  local_268 = param_2;
  local_228.DataPtr = param_2;
  local_178.Elements[0]._0_4_ = (undefined4)local_2a8;
  local_178.Elements[0]._4_4_ = local_2a8._4_4_;
  local_178.Elements[1]._0_4_ = (undefined4)uStack_2a0;
  local_178.Elements[1]._4_4_ = uStack_2a0._4_4_;
  local_178.Elements[2]._0_4_ = (undefined4)local_298;
  local_178.Elements[2]._4_4_ = local_298._4_4_;
  local_178.Elements[3]._0_4_ = (undefined4)uStack_290;
  local_178.Elements[3]._4_4_ = uStack_290._4_4_;
  local_158.Elements[0]._0_4_ = (undefined4)local_258;
  local_158.Elements[0]._4_4_ = local_258._4_4_;
  local_158.Elements[1]._0_4_ = (undefined4)uStack_250;
  local_158.Elements[1]._4_4_ = uStack_250._4_4_;
  local_158.Elements[2]._0_4_ = (undefined4)local_248;
  local_158.Elements[2]._4_4_ = local_248._4_4_;
  local_158.Elements[3]._0_4_ = (undefined4)uStack_240;
  local_158.Elements[3]._4_4_ = uStack_240._4_4_;
  local_138.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_2c0;
  local_138.ViewSettingsArray._8_8_ = local_2b8;
  DenoiseSignalAtConstantPixelDensity
            (local_348,&local_228,local_350,&local_1d8,&local_218,&local_138,&local_158,&local_178,
             &local_1f8);
  if (0 < lVar23) {
    do {
      lVar1 = (longlong)puVar25 * 8;
      puVar25 = (ulonglong *)((longlong)puVar25 + 1);
      ((FShadowVisibilityOutputs *)&param_7->Elements[0].Mask)->Mask =
           *(FRDGTexture **)(&local_1f8.Textures.field_0x0 + lVar1);
      param_7 = (TStaticArray<IScreenSpaceDenoiser::FShadowVisibilityOutputs,4,4294967295> *)
                ((longlong)param_7 + 0x10);
    } while ((longlong)puVar25 < lVar23);
  }
  if (local_1d8.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1d8.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_1d8.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1d8.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_1d8.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1d8.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_1d8.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1d8.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  if (local_330 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_340);
  }
  return;
}

// DenoiseSkyLight @ 14553a260

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

FDiffuseIndirectOutputs * __thiscall
FDefaultScreenSpaceDenoiser::DenoiseSkyLight
          (FDefaultScreenSpaceDenoiser *this,FDiffuseIndirectOutputs *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FDiffuseIndirectInputs *param_5,
          FAmbientOcclusionRayTracingConfig param_6)

{
  TArrayView<FViewInfo_const_,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = param_2;
  IScreenSpaceDenoiser::DenoiseSkyLight
            (__return_storage_ptr__,param_1,&local_18,param_3,param_4,param_5,param_6);
  return __return_storage_ptr__;
}

// DenoiseWaterReflections @ 14553ab00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FReflectionsOutputs * __thiscall
FDefaultScreenSpaceDenoiser::DenoiseWaterReflections
          (FDefaultScreenSpaceDenoiser *this,FReflectionsOutputs *__return_storage_ptr__,
          FRDGBuilder *param_1,FViewInfo *param_2,FPreviousViewInfo *param_3,
          FSceneTextureParameters *param_4,FReflectionsInputs *param_5,
          FReflectionsRayTracingConfig param_6)

{
  char cVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  undefined8 uVar5;
  bool bVar6;
  FRDGScope *this_00;
  FReflectionsOutputs *pFVar7;
  undefined1 auStackY_398 [32];
  TRDGEventScopeGuard<FRDGScope_RHI> local_348;
  char local_338;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_> local_330;
  undefined8 uStack_320;
  TArrayView<FViewInfo_const_,int> local_308;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  ESignalProcessing local_2e8;
  int iStack_2e4;
  float fStack_2e0;
  int iStack_2dc;
  float local_2d8;
  float fStack_2d4;
  undefined4 uStack_2d0;
  int iStack_2cc;
  int local_2c8;
  float fStack_2c4;
  undefined4 uStack_2c0;
  int iStack_2bc;
  float local_2b8;
  undefined4 uStack_2b4;
  FLightSceneInfo *pFStack_2b0;
  FLightSceneInfo *local_2a8;
  FLightSceneInfo *pFStack_2a0;
  FLightSceneInfo *local_298;
  FRDGTexture *pFStack_290;
  FRDGTexture *local_288;
  TIntRect<int>_u_0 *pTStack_280;
  undefined8 uStack_278;
  TIntRect<int>_u_0 *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  FViewInfo *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  FRDGTexture *local_248;
  FRDGTexture *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  FRDGTexture *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  FViewInfoPooledRenderTargets local_208;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_1a8;
  TStaticArray<FScreenSpaceDenoiserHistory_*,4,4294967295> local_188;
  FSSDConstantPixelDensitySettings local_168;
  FScreenSpaceDenoiserHistory *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  TRHIBreadcrumbDesc<24> *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  TIntRect<int>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_398;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_338 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0xab2;
        local_1b8 = 0x54bd60c0;
        uStack_1b4 = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x54bd60c0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = uStack_1bc;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 1;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseWaterRef;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_DenoiseWaterRef;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FDefaultScreenSpaceDenoiser::DenoiseWaterReflections'::__l7::Desc::operator()<>'::
               __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    local_330._Myfirst._Val =
         &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_class_IScreenSpaceDenoiser::FReflectionsOutputs___cdecl_FDefaultScreenSpaceDenoiser::DenoiseWaterReflections(FRDGBuilder&___ptr64,FViewInfo_const&___ptr64,FPreviousViewInfo*___ptr64,FSceneTextureParameters_const&___ptr64,IScreenSpaceDenoiser::FReflectionsInputs_const&___ptr64,IScreenSpaceDenoiser::FReflectionsRayTracingConfig)const___ptr64'::`7'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc;
    local_348.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_348.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_330);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_338 = '\x01';
  }
  local_208.PrevDepthBuffer.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferA.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevGBufferB.Reference = (IPooledRenderTarget *)0x0;
  local_208.PrevCompressedDepthViewNormal.Reference = (IPooledRenderTarget *)0x0;
  SetupSceneViewInfoPooledRenderTargets(param_2,&local_208);
  pTVar3 = CVarReflectionReconstructionSampleCount.Ref;
  local_238 = 0;
  uStack_230 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_248 = param_5->Color;
  local_240 = param_5->RayHitDistance;
  local_a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  local_a8._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_2->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_2d8 = param_6.ResolutionFraction;
  iStack_2e4 = 1;
  fStack_2e0 = 1.0;
  fStack_2d4 = 1.0;
  uStack_2d0 = CONCAT31(uStack_2d0._1_3_,1);
  fStack_2c4 = 8.0;
  iStack_2bc = 1;
  local_2b8 = 1.0;
  pFStack_290 = (FRDGTexture *)0x0;
  local_288 = (FRDGTexture *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_2e8 = Reflections;
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReflectionsOutputs *)(*pcVar2)();
      return pFVar7;
    }
  }
  pTVar4 = CVarReflectionPreConvolutionCount.Ref;
  iStack_2cc = pTVar3->ShadowedValue[1];
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReflectionsOutputs *)(*pcVar2)();
      return pFVar7;
    }
  }
  pTVar3 = CVarReflectionTemporalAccumulation.Ref;
  local_2c8 = pTVar4->ShadowedValue[1];
  bVar6 = IsInParallelRenderingThread();
  if (!bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReflectionsOutputs *)(*pcVar2)();
      return pFVar7;
    }
  }
  uStack_2c0 = CONCAT31(uStack_2c0._1_3_,pTVar3->ShadowedValue[1] != 0);
  iStack_2dc = param_6.RayCountPerPixel;
  local_228 = (FRDGTexture *)0x0;
  uStack_220 = 0;
  pTStack_280 = &local_a8;
  local_218 = 0;
  uStack_210 = 0;
  local_1a8.Elements[0] = &(param_2->ViewState->PrevFrameViewInfo).WaterReflectionsHistory;
  if (param_2->ViewState == (FSceneViewState *)0x0) {
    local_1a8.Elements[0] = (FScreenSpaceDenoiserHistory *)0x0;
  }
  uStack_260 = 1;
  uStack_2f8 = (undefined4)uStack_d8;
  uStack_2f4 = (undefined4)((ulonglong)uStack_d8 >> 0x20);
  uStack_278._4_4_ = uStack_25c;
  uStack_278._0_4_ = 1;
  local_330._padding_ = (longlong)&param_3->WaterReflectionsHistory;
  uStack_2f0 = (undefined4)local_d0;
  uStack_2ec = (undefined4)((ulonglong)local_d0 >> 0x20);
  local_330._Myfirst._Val = local_c0;
  uStack_320 = uStack_b8;
  uVar5 = uStack_320;
  local_1a8.Elements[2]._0_4_ = uStack_2f8;
  local_1a8.Elements[2]._4_4_ = uStack_2f4;
  uStack_320._0_4_ = (undefined4)uStack_b8;
  uStack_320._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
  local_1a8.Elements[1] = local_e0;
  local_188.Elements[3]._0_4_ = (undefined4)local_b0;
  local_188.Elements[3]._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
  local_188.Elements[1] = (FScreenSpaceDenoiserHistory *)local_c0;
  local_168.SignalBatchSize = iStack_2e4;
  local_168.SignalProcessing = local_2e8;
  local_168.MaxInputSPP = param_6.RayCountPerPixel;
  local_168.HarmonicPeriode = fStack_2e0;
  local_188.Elements[2]._0_4_ = (undefined4)uStack_320;
  local_188.Elements[2]._4_4_ = uStack_320._4_4_;
  local_168.DenoisingResolutionFraction = fStack_2d4;
  local_168.InputResolutionFraction = local_2d8;
  local_168.ReconstructionSamples = iStack_2cc;
  local_168._24_4_ = uStack_2d0;
  local_168.KernelSpreadFactor = fStack_2c4;
  local_168.PreConvolutionCount = local_2c8;
  local_168.HistoryConvolutionSampleCount = iStack_2bc;
  local_168._40_4_ = uStack_2c0;
  local_168._52_4_ = uStack_2b4;
  local_168.HistoryConvolutionKernelSpreadFactor = local_2b8;
  local_168.LightSceneInfo.Elements[0] = pFStack_2b0;
  uStack_250 = 1;
  local_168.LightSceneInfo.Elements[1] = local_2a8;
  local_168.LightSceneInfo.Elements[2] = pFStack_2a0;
  local_168.LightSceneInfo.Elements[3] = local_298;
  local_168.CompressedDepthTexture = pFStack_290;
  local_308._12_4_ = uStack_24c;
  local_308.ArrayNum = 1;
  local_168.CompressedShadingModelTexture = local_288;
  uStack_320 = uVar5;
  local_308.DataPtr = param_2;
  local_268 = pTStack_280;
  local_258 = param_2;
  local_1a8.Elements[3]._0_4_ = uStack_2f0;
  local_1a8.Elements[3]._4_4_ = uStack_2ec;
  local_188.Elements[0] = (FScreenSpaceDenoiserHistory *)local_330._padding_;
  local_168.ViewSettingsArray.DataPtr = (FSSDConstantPixelDensityViewSettings *)pTStack_280;
  local_168.ViewSettingsArray._8_8_ = uStack_278;
  DenoiseSignalAtConstantPixelDensity
            (param_1,&local_308,param_4,&local_208,(FSSDSignalTextures *)&local_248,&local_168,
             &local_188,&local_1a8,(FSSDSignalTextures *)&local_228);
  __return_storage_ptr__->Color = local_228;
  if (local_208.PrevCompressedDepthViewNormal.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevCompressedDepthViewNormal.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferB.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferB.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevGBufferA.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevGBufferA.Reference)->_padding_ + 0x38))();
  }
  if (local_208.PrevDepthBuffer.Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_208.PrevDepthBuffer.Reference)->_padding_ + 0x38))();
  }
  if (local_338 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_348);
  }
  return __return_storage_ptr__;
}

// GetDebugName @ 145543cb0

wchar_t * __thiscall FDefaultScreenSpaceDenoiser::GetDebugName(FDefaultScreenSpaceDenoiser *this)

{
  return L"ScreenSpaceDenoiser";
}

// GetShadowRequirements @ 145544550

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

EShadowRequirements __thiscall
FDefaultScreenSpaceDenoiser::GetShadowRequirements
          (FDefaultScreenSpaceDenoiser *this,FViewInfo *param_1,FLightSceneInfo *param_2,
          FShadowRayTracingConfig *param_3)

{
  return PenumbraAndClosestOccluder;
}

// SupportsScreenSpaceDiffuseIndirectDenoiser @ 145553520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FDefaultScreenSpaceDenoiser::SupportsScreenSpaceDiffuseIndirectDenoiser
          (FDefaultScreenSpaceDenoiser *this,EShaderPlatform param_1)

{
  bool bVar1;
  
  bVar1 = ::`anonymous_namespace'::ShouldCompileSignalPipeline(ScreenSpaceDiffuseIndirect,param_1);
  return bVar1;
}


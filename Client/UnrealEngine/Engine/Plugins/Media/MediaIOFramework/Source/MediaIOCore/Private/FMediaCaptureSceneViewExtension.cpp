// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 6

// GetPriority @ 14d7acc40

int __thiscall FMediaCaptureSceneViewExtension::GetPriority(FMediaCaptureSceneViewExtension *this)

{
  return this->Priority;
}

// IsActiveThisFrame_Internal @ 14d7b1560

bool __thiscall
FMediaCaptureSceneViewExtension::IsActiveThisFrame_Internal
          (FMediaCaptureSceneViewExtension *this,FSceneViewExtensionContext *param_1)

{
  return true;
}

// PostProcessCallback_RenderThread @ 14d7b6250

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

FScreenPassTexture * __thiscall
FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread
          (FMediaCaptureSceneViewExtension *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1,FSceneView *param_2,FPostProcessMaterialInputs *param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  FScreenPassTexture *pFVar6;
  FRDGScope *this_00;
  UMediaCapture *this_01;
  undefined8 *puVar7;
  bool bVar8;
  FScreenPassTexture local_c8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_b0;
  undefined1 local_a0;
  TIntRect<int> local_98;
  FScreenPassTextureSlice local_88;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27>_const_*,std::tuple<>_> local_70;
  FScreenPassTexture local_60;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId112,"MediaCaptureExtensionCallback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureSceneViewExtension.h"
               ,0x70);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId112);
  }
  local_60.Texture = (FRDGTexture *)0x0;
  local_60.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_60.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  lVar5 = 0x98;
  if ((param_3->bUserSceneTexturesSet).Elements[0] == false) {
    lVar5 = 0x20;
  }
  puVar7 = (undefined8 *)((longlong)(param_3->Textures).Elements + lVar5 + -0x20);
  local_88.TextureSRV = (FRDGTextureSRV *)*puVar7;
  local_88.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(puVar7 + 1);
  local_88.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(puVar7 + 2);
  FScreenPassTexture::CopyFromSlice(&local_c8,param_1,&local_88,&local_60);
  if (((local_c8.Texture == (FRDGTexture *)0x0) ||
      ((local_c8.ViewRect.field0_0x0._8_4_ == local_c8.ViewRect.field0_0x0._0_4_ &&
       (local_c8.ViewRect.field0_0x0._12_4_ == local_c8.ViewRect.field0_0x0._4_4_)))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneColor.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureSceneViewExtension.h"
                         ,0x73,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FScreenPassTexture *)(*pcVar2)();
    return pFVar6;
  }
  if (local_c8.Texture != (FRDGTexture *)0x0) {
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    bVar3 = false;
    local_a0 = 0;
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x77;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_38 = 0;
        uStack_34 = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._12_8_ = ZEXT48(uStack_3c);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_MediaCaptureSce;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_MediaCaptureSce;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread'::__l17::Desc::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_70._Myfirst._Val =
           &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'::`17'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
            ::__l2::Desc;
      local_b0.State = (FRDGScopeState *)param_1;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_00;
      local_b0.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_70);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar3 = true;
      local_a0 = 1;
    }
    bVar4 = FWeakObjectPtr::IsValid(&(this->WeakCapture).WeakPtr);
    if (bVar4) {
      this_01 = (UMediaCapture *)FWeakObjectPtr::Get(&(this->WeakCapture).WeakPtr);
      bVar4 = UMediaCapture::TryCaptureImmediate_RenderThread
                        (this_01,param_1,local_c8.Texture,&local_98);
      if ((!bVar4) &&
         (::FString::operator=(&this->LastErrorMessage,L"Failed to capture resource."),
         6 < (byte)LogMediaIOCore._0_1_)) {
        UE::Logging::Private::BasicLog<7>
                  (&`public:_struct_FScreenPassTexture___cdecl_FMediaCaptureSceneViewExtension::PostProcessCallback_RenderThread(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,FPostProcessMaterialInputs_const&___ptr64)___ptr64'
                    ::__l24::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
    }
    if (bVar3) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_b0);
    }
  }
  FPostProcessMaterialInputs::ReturnUntouchedSceneColorForPostProcessing
            (param_3,__return_storage_ptr__,param_1);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// PostRenderView_RenderThread @ 14d7b6580

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FMediaCaptureSceneViewExtension::PostRenderView_RenderThread
          (FMediaCaptureSceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  char cVar1;
  FRHIResource *this_00;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  FRDGScope *this_01;
  UMediaCapture *this_02;
  bool bVar7;
  FCaptureFrameArgs local_78;
  TRDGEventScopeGuard<FRDGScope_RHI> local_40;
  undefined1 local_30;
  
  if ((this->CapturePhase == PostRender) &&
     (this->CurrentRenderTarget == param_2->Family->RenderTarget)) {
    bVar7 = -1 < CpuChannel->Enabled;
    if (bVar7) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId97,"MediaCaptureExtensionCallback",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureSceneViewExtension.h"
                 ,0x61);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId97);
    }
    puVar6 = (undefined8 *)(**(code **)(param_2->Family->RenderTarget->_padding_ + 0x10))();
    this_00 = (FRHIResource *)*puVar6;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    bVar4 = false;
    local_30 = 0;
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_78.ResourceToCapture.Reference._0_4_ = 0;
        local_78.ResourceToCapture.Reference._4_4_ = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._12_8_ = ZEXT48((uint)local_78.MediaCapture.field0_0x0._4_4_);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_MediaCaptureSce;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_MediaCaptureSce;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x65;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FMediaCaptureSceneViewExtension::PostRenderView_RenderThread'::__l10::Desc::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::PostRenderView_RenderThread(FRDGBuilder&___ptr64,FSceneView&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_78.MediaCapture.field0_0x0._0_4_ = 0x5536b740;
      local_78.MediaCapture.field0_0x0._4_4_ = 1;
      local_40.State = (FRDGScopeState *)param_1;
      this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_01;
      local_40.Scope = this_01;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27>_const_*,std::tuple<>_>_>
                (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,
                 (tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27>_const_*,std::tuple<>_>
                  *)&local_78);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
      }
      bVar4 = true;
      local_30 = 1;
    }
    bVar5 = FWeakObjectPtr::IsValid(&(this->WeakCapture).WeakPtr);
    if (bVar5) {
      this_02 = (UMediaCapture *)FWeakObjectPtr::Get(&(this->WeakCapture).WeakPtr);
      TVar2 = (param_2->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0;
      TVar3 = (param_2->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0;
      local_78.ResourceToCapture.Reference._0_4_ = 0;
      local_78.ResourceToCapture.Reference._4_4_ = 0;
      local_78.RDGResourceToCapture = (FRDGTexture *)0x0;
      local_78.GraphBuilder = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_02 != (UMediaCapture *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this_02);
      }
      local_78.DesiredSize.field0_0x0 = (this_02->DesiredSize).field0_0x0;
      local_78.MediaCapture.field0_0x0._0_4_ = SUB84(this_02,0);
      local_78.MediaCapture.field0_0x0._4_4_ = (undefined4)((ulonglong)this_02 >> 0x20);
      if (this_00 != (FRHIResource *)0x0) {
        local_78.ResourceToCapture.Reference._0_4_ = SUB84(this_00,0);
        local_78.ResourceToCapture.Reference._4_4_ = (undefined4)((ulonglong)this_00 >> 0x20);
        FRHIResource::AddRef(this_00);
      }
      local_78.SourceViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar2;
      local_78.SourceViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)TVar3;
      UMediaCapture::CaptureImmediate_RenderThread(this_02,&local_78);
      if ((FRHIResource *)
          CONCAT44(local_78.ResourceToCapture.Reference._4_4_,
                   local_78.ResourceToCapture.Reference._0_4_) != (FRHIResource *)0x0) {
        FRHIResource::Release
                  ((FRHIResource *)
                   CONCAT44(local_78.ResourceToCapture.Reference._4_4_,
                            local_78.ResourceToCapture.Reference._0_4_));
      }
    }
    if (bVar4) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_40);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// SetupView @ 14d7bd400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FMediaCaptureSceneViewExtension::SetupView
          (FMediaCaptureSceneViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  undefined1 *puVar1;
  FSceneViewFamily *pFVar2;
  bool bVar3;
  uint uVar4;
  
  if (this->bValidPhase == false) {
    return;
  }
  pFVar2 = param_2->Family;
  if (this->CurrentRenderTarget != pFVar2->RenderTarget) {
    return;
  }
  uVar4 = (pFVar2->EngineShowFlags).PostProcessing;
  if ((int)param_2->FeatureLevel < 3) {
    if (((uVar4 == 0) || ((pFVar2->EngineShowFlags).ShaderComplexity != 0)) ||
       (!FReadOnlyCVARCache::bMobileHDR)) goto LAB_14d7bd451;
  }
  else if (((uVar4 == 0) ||
           ((pFVar2->EngineShowFlags).VisualizeDistanceFieldAO != 0 ||
            (pFVar2->EngineShowFlags).VisualizeShadingModels != 0)) ||
          (((pFVar2->EngineShowFlags).VisualizeVolumetricCloudConservativeDensity != 0 ||
            (pFVar2->EngineShowFlags).VisualizeVolumetricCloudEmptySpaceSkipping != 0 ||
           ((pFVar2->EngineShowFlags).ShaderComplexity != 0)))) {
LAB_14d7bd451:
    bVar3 = false;
    goto LAB_14d7bd453;
  }
  bVar3 = true;
LAB_14d7bd453:
  this->bPostProcessingEnabled = bVar3;
  if (((this->CapturePhase != BeforePostProcessing) && (1 < (byte)(this->CapturePhase - PostRender))
      ) && (bVar3 == false)) {
    ::FString::operator=
              (&this->LastErrorMessage,
               L"Media Capture will not work since it is scheduled in a post processing phase and post processing is not enabled."
              );
    if (2 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_FMediaCaptureSceneViewExtension::SetupView(FSceneViewFamily&___ptr64,FSceneView&___ptr64)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    this->bValidPhase = false;
  }
  return;
}

// SubscribeToPostProcessingPass @ 14d7bea50

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
FMediaCaptureSceneViewExtension::SubscribeToPostProcessingPass
          (FMediaCaptureSceneViewExtension *this,EPostProcessingPass param_1,FSceneView *param_2,
          TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3,bool param_4)

{
  EMediaCapturePhase EVar1;
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *pTVar6;
  code *local_48;
  ulonglong uStack_40;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (this->CurrentRenderTarget == param_2->Family->RenderTarget) {
    EVar1 = this->CapturePhase;
    if (EVar1 == AfterMotionBlur) {
      if (param_1 != MotionBlur) {
        return;
      }
    }
    else if (EVar1 == AfterToneMap) {
      if (param_1 != Tonemap) {
        return;
      }
    }
    else if (EVar1 == AfterFXAA) {
      if (param_1 != FXAA) {
        return;
      }
    }
    else {
      if (EVar1 != BeforePostProcessing) {
        return;
      }
      if (param_1 != SSRInput) {
        return;
      }
    }
    uStack_40 = uStack_40 & 0xffffffff00000000;
    local_48 = PostProcessCallback_RenderThread;
    pTVar6 = TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
             ::CreateSP<FMediaCaptureSceneViewExtension>
                       ((TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                         *)local_38,this,(pmf_2407dd4a *)&local_48);
    pTVar2 = (param_3->AllocatorInstance).Data;
    if (((pTVar2 <= pTVar6) && (pTVar6 < pTVar2 + param_3->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>_>
                        (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar5 + 1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               ((param_3->AllocatorInstance).Data + iVar5),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar6);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}


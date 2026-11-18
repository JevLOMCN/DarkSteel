// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Begin @ 145494f70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FSceneRenderProcessor::FGroupEvent::Begin
          (FGroupEvent *this,FGroupNode *param_1,FRHICommandList *param_2,
          FGroupEventLocation param_3)

{
  FString *pFVar1;
  FRenderNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_*,std::tuple<FString_&>_>
  local_68;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_58;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((param_1 != (FGroupNode *)0x0) &&
     ((uint)~RenderCommandsChannel->Enabled >> 0x1f == (uint)(param_3 == SceneRenderCommand))) {
    pFVar1 = &param_1->Name;
    if ((param_1->Name).Data.ArrayNum < 2) {
      pFVar2 = (param_1->RenderNodes).Sentinel.Next;
      if (pFVar2 == (FRenderNode *)&param_1->RenderNodes) {
        return;
      }
      if (pFVar2 == (param_1->RenderNodes).Sentinel.Prev) {
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_18 = 0;
        uStack_14 = 0;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
        ::__l2::Desc._12_8_ = ZEXT48(uStack_1c);
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 0;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_SceneRenderGrou;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x1b3;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FSceneRenderProcessor::FGroupEvent::Begin'::__l12::<lambda_2>::operator()<>'::__l2
               ::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_58._Myfirst._Val =
           &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`12'::<lambda_2>::operator()<>(void)const___ptr64'
            ::__l2::Desc;
      if ((this->Event).bIsSet != false) {
        if (((this->Event).TypedValue.Node.Node != (FRHIBreadcrumbNode *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Node",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                               ,0x10a,L"Manual breadcrumb was destructed before it was ended."),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((this->Event).TypedValue.Node.AllocatorRef.SharedReferenceCount.
                   ReferenceController);
      }
      FRHIBreadcrumbEventManual::
      FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                ((FRHIBreadcrumbEventManual *)this,(FRHIComputeCommandList *)param_2,&local_58);
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_38 = 0;
        uStack_34 = 0;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
        ::__l2::Desc._12_8_ = ZEXT48(uStack_3c);
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 0;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_SceneRenderGrou;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u__s;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x1ae;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FSceneRenderProcessor::FGroupEvent::Begin'::__l8::<lambda_1>::
               operator()<FString_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_68._Myfirst._Val =
           &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneRenderProcessor::FGroupEvent::Begin(FSceneRenderProcessor::FGroupNode*___ptr64,FRHICommandList&___ptr64,FSceneRenderProcessor::FGroupEventLocation)___ptr64'::`8'::<lambda_1>::operator()<FString&___ptr64>(FString&___ptr64)const___ptr64'
            ::__l2::Desc;
      local_68._padding_ = (longlong)pFVar1;
      if ((this->Event).bIsSet != false) {
        if (((this->Event).TypedValue.Node.Node != (FRHIBreadcrumbNode *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Node",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                               ,0x10a,L"Manual breadcrumb was destructed before it was ended."),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((this->Event).TypedValue.Node.AllocatorRef.SharedReferenceCount.
                   ReferenceController);
      }
      FRHIBreadcrumbEventManual::
      FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>,FString_&>
                ((FRHIBreadcrumbEventManual *)this,(FRHIComputeCommandList *)param_2,&local_68);
    }
    (this->Event).bIsSet = true;
  }
  return;
}


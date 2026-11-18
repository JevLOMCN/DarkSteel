// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// <lambda_invoker_cdecl> @ 14546b0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __cdecl
`FSceneRenderProcessor::Execute'::__l14::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  bool bVar1;
  undefined1 auStackY_838 [32];
  FRDGEventName local_808;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_838;
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId768,"TriggerGPUCrash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
               ,0x300);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId768);
  }
  local_808.EventFormat = L"";
  local_808.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_808.FormattedEventName.Data.ArrayNum = 0;
  local_808.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_7e8,param_1,&local_808,None,GMaxRHIShaderPlatform);
  ScheduleGPUDebugCrash(&local_7e8);
  FRDGBuilder::Execute(&local_7e8);
  FRDGBuilder::~FRDGBuilder(&local_7e8);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14548e520

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FSceneRenderProcessor::Execute'::__l28::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if ((RenderCommandsChannel->Enabled < 0) && (*(char *)(lVar1 + 0xb0) != '\0')) {
    FRHIBreadcrumbEventManual::End
              ((FRHIBreadcrumbEventManual *)(lVar1 + 0x90),(FRHIComputeCommandList *)param_1);
    if (*(char *)(lVar1 + 0xb0) != '\0') {
      if ((((FRHIBreadcrumbEventManual *)(lVar1 + 0x90))->Node).Node != (FRHIBreadcrumbNode *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar1 + 0xa0));
      *(undefined1 *)(lVar1 + 0xb0) = 0;
    }
  }
  *(undefined8 *)(*(longlong *)this + 0x88) = 0;
  ::FString::Reset((FString *)(*(longlong *)this + 0xb8),0);
  return;
}

// operator() @ 14548e930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FSceneRenderProcessor::Execute'::__l30::<lambda_4>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  FSceneRenderer *pFVar7;
  undefined8 *puVar8;
  code *pcVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  EShaderPlatform EVar14;
  uint uVar15;
  FRHIBreadcrumbAllocator *pFVar16;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_> *pTVar17;
  FRHIBreadcrumbNode *pFVar18;
  FRDGEventName *pFVar19;
  undefined8 uVar20;
  TRefCountPtr<FBaseGraphTask> TVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  wchar_t *pwVar25;
  uint uVar26;
  undefined1 auStackY_9e8 [32];
  FLLMScope local_9b8 [2];
  undefined8 local_9b0;
  int iStack_9a8;
  undefined4 uStack_9a4;
  undefined8 *local_9a0;
  FMemScope local_998 [2];
  EShaderPlatform local_988 [4];
  longlong local_980;
  undefined8 local_978;
  FGlobalShaderMap *local_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined4 local_938;
  undefined4 local_934;
  char local_930;
  FSceneRenderer *local_928;
  EShaderPlatform *local_920;
  wchar_t *local_918;
  wchar_t *local_910;
  FRHIBreadcrumbScope local_908;
  char local_8f8;
  FRHIBreadcrumbScope local_8f0;
  char local_8e0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_8d8;
  FRDGEventName local_8c8;
  code *local_8a8 [2];
  undefined **local_898;
  FSceneRenderer *local_890;
  undefined8 local_880;
  uint uStack_86c;
  undefined4 local_868;
  undefined4 uStack_864;
  uint uStack_84c;
  undefined4 local_848;
  undefined4 uStack_844;
  FRDGEventName local_838;
  FRDGBuilder local_818;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  FLLMScope::FLLMScope(local_9b8,SceneRender,false,None,Default,true);
  FMemScope::FMemScope(local_998,SceneRender,true);
  FSceneRenderProcessor::FGroupEvent::Begin
            ((FGroupEvent *)(*(longlong *)this + 0x90),*(FGroupNode **)(*(longlong *)this + 0x88),
             (FRHICommandList *)param_1,SceneRenderCommand);
  lVar5 = *(longlong *)((longlong)this + 8);
  lVar6 = *(longlong *)this;
  uVar24 = (ulonglong)_tls_index;
  local_8e0 = '\0';
  if (1 < *(int *)(lVar5 + 0x20)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_868 = 0;
      uStack_864 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_86c);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_SceneRender;
      ::Desc._padding_ = (longlong)u_SceneRender____;
      ::Desc._padding_._0_4_ = 0x347;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FSceneRenderProcessor::Execute'::__l30::<lambda_4>::operator()'::__l7::<lambda_2>::
             operator()<FString_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar16 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pTVar17 = FRHIBreadcrumbAllocator::
              Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_const_&,FString_&>
                        (pFVar16,pFVar16,&::Desc,(FString *)(lVar5 + 0x18));
    FRHIBreadcrumbScope::FRHIBreadcrumbScope
              (&local_8f0,(FRHIComputeCommandList *)param_1,(FRHIBreadcrumbNode *)pTVar17);
    local_8e0 = '\x01';
  }
  local_8f8 = '\0';
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x20) < 2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_848 = 0;
      uStack_844 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_84c);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_SceneRender;
      ::Desc._padding_._0_4_ = 0x348;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FSceneRenderProcessor::Execute'::__l30::<lambda_4>::operator()'::__l12::<lambda_3>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_8d8._Myfirst._Val = &::Desc;
    pFVar16 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar18 = FRHIBreadcrumbAllocator::
              AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                        (pFVar16,&local_8d8);
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_908,(FRHIComputeCommandList *)param_1,pFVar18);
    local_8f8 = '\x01';
  }
  pFVar7 = *(FSceneRenderer **)(*(longlong *)((longlong)this + 8) + 0x10);
  FDeferredUpdateResource::UpdateResources(param_1);
  uVar26 = 0;
  if (1 < *(int *)(*(longlong *)((longlong)this + 8) + 0x20)) {
    ::FString::AppendChars((FString *)(*(longlong *)this + 0xb8),L"/",1);
    iVar3 = *(int *)(*(longlong *)((longlong)this + 8) + 0x20);
    uVar15 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar15 = uVar26;
    }
    ::FString::AppendChars
              ((FString *)(*(longlong *)this + 0xb8),
               *(wchar_t **)(*(longlong *)((longlong)this + 8) + 0x18),uVar15);
  }
  if (((*(int *)(*(longlong *)this + 0x20) != 0) && (*(int *)(*(longlong *)this + 0x20) < 1)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar3 = *(int *)(*(longlong *)this + 0x20);
  if (iVar3 != 0) {
    uVar15 = 0;
    if ((int)(iVar3 - 1U) < iVar3) {
      uVar15 = ~(iVar3 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  local_930 = '\0';
  pwVar25 = L"";
  if ((((pFVar7->ViewFamily)._padding_ & 0x200000) != 0) &&
     (plVar22 = *(longlong **)this, (char)plVar22[0x19] == '\0')) {
    local_930 = '\x01';
    local_988[1] = 0;
    local_934 = 0;
    local_980 = *plVar22;
    local_978 = *(undefined8 *)(*plVar22 + 0x18);
    local_988._4_4_ = *(undefined4 *)(*plVar22 + 8);
    local_988[0] = FSceneInterface::GetShaderPlatform((FSceneInterface *)*plVar22);
    if ((local_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((local_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_970 = GetGlobalShaderMap(local_988[0]);
    if ((local_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_9b0 = *(undefined8 *)(*(longlong *)this + 0x18);
    iVar3 = *(int *)(*(longlong *)this + 0x20);
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_9a8 = iVar3;
    if ((local_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_960 = CONCAT44(uStack_9a4,iStack_9a8);
    local_968 = local_9b0;
    local_9b0 = *(undefined8 *)(*(longlong *)this + 0x28);
    iVar3 = *(int *)(*(longlong *)this + 0x30);
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_9a8 = iVar3;
    if ((local_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_950 = CONCAT44(uStack_9a4,iStack_9a8);
    local_958 = local_9b0;
    local_9b0 = *(undefined8 *)(*(longlong *)this + 0x38);
    iVar3 = *(int *)(*(longlong *)this + 0x40);
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_9a8 = iVar3;
    if ((local_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_940 = CONCAT44(uStack_9a4,iStack_9a8);
    local_948 = local_9b0;
    local_938 = *(undefined4 *)(*(longlong *)this + 0x80);
    if ((local_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (*(int *)(puVar8 + 0x18) == 0) {
    local_910 = L"";
  }
  else {
    local_910 = (wchar_t *)puVar8[0x17];
  }
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x20) != 0) {
    pwVar25 = *(wchar_t **)(*(longlong *)((longlong)this + 8) + 0x18);
  }
  local_920 = local_988;
  if (local_930 == '\0') {
    local_920 = (EShaderPlatform *)0x0;
  }
  local_928 = pFVar7;
  local_918 = pwVar25;
  EVar14 = FSceneInterface::GetShaderPlatform((FSceneInterface *)*puVar8);
  pFVar19 = FRDGEventName::FRDGEventName(&local_838,L"%s");
  local_8c8.EventFormat = pFVar19->EventFormat;
  ::FString::FString(&local_8c8.FormattedEventName,&pFVar19->FormattedEventName);
  FRDGBuilder::FRDGBuilder(&local_818,param_1,&local_8c8,AllowParallelExecute,EVar14);
  if (local_838.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_838.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FSceneRendererBase::SetActiveInstance(&local_818,(FSceneRendererBase *)pFVar7);
  if (*(char *)((longlong)&(pFVar7->ViewFamily)._padding_ + 5) != '\0') {
    local_818.bForceCopyCrossGPU = true;
  }
  if (((pFVar7->ViewFamily)._padding_ & 0x2000000000000000) == 0) {
    if ((*(int *)&pFVar7->field_0x18 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar11 = *(bool *)(*(longlong *)&pFVar7->field_0x10 + 0x11e8);
    if ((*(int *)&pFVar7->field_0x18 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar15 = FSceneView::GetViewKey(*(FSceneView **)&pFVar7->field_0x10);
    FVisualizeTexture::BeginViewRenderThread
              ((FVisualizeTexture *)&GVisualizeTexture,*(Type *)(**(longlong **)this + 8),uVar15,
               local_910,bVar11);
  }
  bVar13 = 0;
  if (((pFVar7->ViewFamily)._padding_ & 0x200000) != 0) {
    lVar5 = *(longlong *)((longlong)this + 8);
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar5 + 0x30));
    pcVar9 = *(code **)(lVar5 + 0x30);
    plVar22 = (longlong *)(lVar5 + 0x40);
    if (*(longlong **)(lVar5 + 0x58) != (longlong *)0x0) {
      plVar22 = *(longlong **)(lVar5 + 0x58);
    }
    uVar20 = (**(code **)(*plVar22 + 8))();
    bVar13 = (*pcVar9)(uVar20,&local_818);
  }
  if (local_930 != '\0') {
    *(byte *)(*(longlong *)this + 200) = *(byte *)(*(longlong *)this + 200) | bVar13;
  }
  if (((pFVar7->ViewFamily)._padding_ & 0x2000000000000000) == 0) {
    FVisualizeTexture::EndViewRenderThread((FVisualizeTexture *)&GVisualizeTexture);
  }
  iVar3 = *(int *)(*(longlong *)((longlong)this + 8) + 0x20);
  if (1 < iVar3) {
    iVar4 = *(int *)(*(longlong *)this + 0xc0);
    uVar15 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar15 = 0;
    }
    if ((int)(uVar15 - iVar3) < (int)uVar15) {
      uVar15 = uVar15 - iVar3;
    }
    uVar23 = uVar26;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    ::FString::RemoveAt((FString *)(*(longlong *)this + 0xb8),uVar23,iVar3,No);
  }
  lVar5 = *(longlong *)this;
  uVar15 = *(int *)(lVar5 + 0x10) - 1;
  if ((int)uVar15 < *(int *)(lVar5 + 0x10)) {
    uVar26 = ~uVar15 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) ==
      *(longlong *)(*(longlong *)(lVar5 + 8) + -8 + (longlong)*(int *)(lVar5 + 0x10) * 8)) {
    FRDGBuilder::SetFlushResourcesRHI(&local_818);
  }
  FRDGBuilder::Execute(&local_818);
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId721,"Cleanup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
               ,0x2d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId721);
  }
  FUniformExpressionCacheAsyncUpdateScope::WaitForTask();
  if ((GIsRunningRHIInSeparateThread_InternalUseOnly == false) || (GSceneRenderCleanUpMode != 1)) {
    FSceneRenderProcessor::WaitForAsyncDeleteTask();
    FRHICommandListImmediate::ImmediateFlush(param_1,WaitForOutstandingTasksOnly,None);
    ViewSnapshotCache::Deallocate();
    CleanupSceneRenderer(pFVar7);
  }
  else {
    FGPUSceneDynamicContext::Release(&pFVar7->GPUSceneDynamicContext);
    if (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference != (FBaseGraphTask *)0x0) {
      FBaseGraphTask::Wait
                (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference,
                 (Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local);
    }
    ViewSnapshotCache::Deallocate();
    local_880 = 0;
    local_898 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::`5'::<lambda_1>,1,0>::
                 _vftable_;
    local_8a8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,void>::Call
    ;
    local_890 = pFVar7;
    TVar21 = FFunctionGraphTask::CreateAndDispatchWhenReady
                       ((TUniqueFunction<void___cdecl(void)> *)&local_9a0,(TStatIdData *)local_8a8,
                        (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)&TStatId::TStatId_NAME_None,0x54be5e98);
    TVar10 = FSceneRenderProcessor::AsyncTasks.Cleanup;
    if (TVar21.Reference != (FBaseGraphTask *)&FSceneRenderProcessor::AsyncTasks) {
                    /* WARNING: Load size is inaccurate */
      FSceneRenderProcessor::AsyncTasks.Cleanup.Reference = *TVar21.Reference;
      *(undefined8 *)TVar21.Reference = 0;
      if (TVar10.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(TVar10.Reference)->field_0x30;
        iVar3 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)TVar10.Reference)(TVar10.Reference,1);
        }
      }
    }
    if (local_9a0 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_9a0 + 6);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (local_9a0 != (undefined8 *)0x0)) {
        (**(code **)*local_9a0)(local_9a0,1);
      }
    }
  }
  GlobalDynamicBuffer::GarbageCollect();
  FPrimitiveIdVertexBufferPool::DiscardAll
            ((FPrimitiveIdVertexBufferPool *)&GPrimitiveIdVertexBufferPool);
  FGraphicsMinimalPipelineStateId::ResetLocalPipelineIdTableSize();
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FRDGBuilder::~FRDGBuilder(&local_818);
  if (local_8f8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_908);
  }
  if (local_8e0 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_8f0);
  }
  if (((-1 < RenderCommandsChannel->Enabled) && (*(char *)(lVar6 + 0xb0) != '\0')) &&
     (FRHIBreadcrumbEventManual::End
                ((FRHIBreadcrumbEventManual *)(lVar6 + 0x90),(FRHIComputeCommandList *)param_1),
     *(char *)(lVar6 + 0xb0) != '\0')) {
    if (((((FRHIBreadcrumbEventManual *)(lVar6 + 0x90))->Node).Node != (FRHIBreadcrumbNode *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Node",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                            ,0x10a,L"Manual breadcrumb was destructed before it was ended."), bVar11
       )) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(lVar6 + 0xa0));
    *(undefined1 *)(lVar6 + 0xb0) = 0;
  }
  FMemScope::~FMemScope(local_998);
  FLLMScope::~FLLMScope(local_9b8);
  return;
}

// operator() @ 14548f440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  code *pcVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  longlong lVar8;
  TRefCountPtr<FBaseGraphTask> TVar9;
  undefined1 auStack_d8 [32];
  FAsyncTasks *local_b8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 *local_80;
  code *local_78 [2];
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined1 local_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_88 = *(undefined8 *)this;
  if ((GIsRunningRHIInSeparateThread_InternalUseOnly) && (GSceneRenderCleanUpMode == 1)) {
    local_48._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_20 = 0;
    local_1c = 4;
    iVar6 = 0;
    if ((local_48 <
         (undefined1 *)((longlong)&FSceneRenderProcessor::AsyncTasks.Cleanup.Reference + 1)) &&
       (&FSceneRenderProcessor::AsyncTasks < (FAsyncTasks *)(local_48 + 0x20))) {
      local_98 = 8;
      local_b0 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48;
      local_a0 = 0;
      local_a8 = 4;
      local_b8 = &FSceneRenderProcessor::AsyncTasks;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = local_20;
      if (local_20 == local_1c) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                          (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_48,&local_1c
                          );
      }
    }
    local_20 = iVar6 + 1;
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48;
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_;
    }
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + (longlong)iVar6 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + (longlong)iVar6 * 8))->Reference =
         FSceneRenderProcessor::AsyncTasks.Cleanup.Reference;
    if (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(FSceneRenderProcessor::AsyncTasks.Cleanup.Reference)->field_0x30 =
           *(int *)&(FSceneRenderProcessor::AsyncTasks.Cleanup.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48;
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_;
    }
    if ((ulonglong)FVar7 < 0x1551301c9) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48;
      if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_ !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_;
      }
      if (&FSceneRenderProcessor::AsyncTasks.Delete <
          (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + (longlong)local_1c * 8)) {
        local_a0 = (longlong)local_20;
        local_98 = 8;
        local_b0 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          local_b0 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_;
        }
        local_b8 = (FAsyncTasks *)0x1551301c8;
        local_a8 = (longlong)local_1c;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if (local_20 == local_1c) {
      local_20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_48,
                            &local_1c);
    }
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48;
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_;
    }
    lVar8 = (longlong)local_20;
    local_20 = local_20 + 1;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + lVar8 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + lVar8 * 8))->Reference =
         FSceneRenderProcessor::AsyncTasks.Delete.Reference;
    if (FSceneRenderProcessor::AsyncTasks.Delete.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(FSceneRenderProcessor::AsyncTasks.Delete.Reference)->field_0x30 =
           *(int *)&(FSceneRenderProcessor::AsyncTasks.Delete.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    local_50 = 0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::`2'::<lambda_5>::operator()'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_60 = local_88;
    local_b8 = (FAsyncTasks *)CONCAT44(local_b8._4_4_,0xff);
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
    TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)&local_80,(TStatIdData *)local_78,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&TStatId::TStatId_NAME_None,(Type)local_48);
    TVar4 = FSceneRenderProcessor::AsyncTasks.Delete;
    if (TVar9.Reference != (FBaseGraphTask *)&FSceneRenderProcessor::AsyncTasks.Delete) {
                    /* WARNING: Load size is inaccurate */
      FSceneRenderProcessor::AsyncTasks.Delete.Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (TVar4.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(TVar4.Reference)->field_0x30;
        iVar6 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (*(code *)**(undefined8 **)TVar4.Reference)(TVar4.Reference,1);
        }
      }
    }
    if (local_80 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_80 + 6);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar6 == 1) && (local_80 != (undefined8 *)0x0)) {
        (**(code **)*local_80)(local_80,1);
      }
    }
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48;
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar7,local_20);
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_48._32_8_);
    }
  }
  else {
    ``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::operator()
              (&local_88);
  }
  return;
}

// AddRenderer @ 145492320

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
FSceneRenderProcessor::AddRenderer
          (FSceneRenderProcessor *this,FSceneRenderer *param_1,FString *param_2,
          TUniqueFunction<bool___cdecl(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&)> *param_3)

{
  FRenderNode *pFVar1;
  int *piVar2;
  TArray<FViewInfo_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *pTVar3;
  ESceneRenderCommonShowFlags *pEVar4;
  longlong *plVar5;
  uint *puVar6;
  FOp *pFVar7;
  FRenderNode *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar14;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar15;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar16;
  FViewInfo *pFVar17;
  FGroupNode *pFVar18;
  uint uVar19;
  FViewInfo *pFVar20;
  undefined1 local_res8 [8];
  uint uStack_34;
  
  if ((param_1 == (FSceneRenderer *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Renderer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                          ,0x234,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((*(FScene **)&param_1->field_0x8 != this->Scene) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Renderer->Scene == Scene",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                          ,0x235,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((int)(param_1->ViewFamily)._padding_ < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Renderer->ViewFamily.Views.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                          ,0x236,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar18 = (FGroupNode *)0x0;
  if (((int)(param_1->ViewFamily)._padding_ < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((*(longlong *)(param_1->ViewFamily)._padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Renderer->ViewFamily.Views[0]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                          ,0x237,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pEVar4 = &this->CommonShowFlags;
  plVar5 = &(param_1->ViewFamily)._padding_;
  puVar6 = (uint *)((longlong)&(param_1->ViewFamily)._padding_ + 4);
  if (((this->Renderers).ArrayNum != 0) &&
     (((((*puVar6 >> 0x1d ^ *pEVar4) & HitProxies) != None ||
       (((*pEVar4 >> 1 ^ (uint)*plVar5) & 1) != 0)) &&
      (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsCompatible(Renderer->ViewFamily.EngineShowFlags)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                           ,0x23a,
                           L"Renderer contains show flags that are not compatible with other renderers that were previously added. Use IsCompatible(...) to check if the show flags are compatible"
                          ), bVar11)))) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((this->Renderers).ArrayNum == 0) {
    *pEVar4 = *pEVar4 | *puVar6 >> 0x1d & HitProxies;
    *pEVar4 = *pEVar4 | ((uint)*plVar5 & 1) * 2;
  }
  if ((this->GroupNodes).Sentinel.Next != (FGroupNode *)&this->GroupNodes) {
    pFVar18 = (this->GroupNodes).Sentinel.Prev;
  }
  aVar14 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
           TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x80,0x10);
  *(undefined8 *)((longlong)aVar14 + 8) = 0;
  *(undefined ***)aVar14 =
       &
       ___7__TObject_UFRenderNode_FSceneRenderProcessor_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  pFVar1 = (FRenderNode *)((longlong)aVar14 + 0x10);
  aVar15 = (this->Allocator).Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar14 + 8) = aVar15;
    LOCK();
    aVar16 = (this->Allocator).Next;
    bVar11 = aVar15 == aVar16;
    if (bVar11) {
      (this->Allocator).Next = aVar14;
      aVar16 = aVar15;
    }
    UNLOCK();
    aVar15 = aVar16;
  } while (!bVar11);
  *(undefined8 *)((longlong)aVar14 + 0x28) = 0;
  *(FRenderNode **)pFVar1 = pFVar1;
  *(FRenderNode **)((longlong)aVar14 + 0x18) = pFVar1;
  *(FSceneRenderer **)((longlong)aVar14 + 0x20) = param_1;
  *(FScriptContainerElement **)((longlong)aVar14 + 0x28) = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)aVar14 + 0x30) = (param_2->Data).ArrayNum;
  *(int *)((longlong)aVar14 + 0x34) = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  *(undefined8 *)((longlong)aVar14 + 0x40) = *(undefined8 *)param_3;
  *(undefined8 *)((longlong)aVar14 + 0x68) = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar10 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)((longlong)aVar14 + 0x50) = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)((longlong)aVar14 + 0x58) = uVar10;
  *(undefined8 *)((longlong)aVar14 + 0x60) = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)((longlong)aVar14 + 0x40) != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(FGroupNode **)((longlong)aVar14 + 0x70) = pFVar18;
  if (pFVar18 != (FGroupNode *)0x0) {
    pFVar8 = (pFVar18->RenderNodes).Sentinel.Prev;
    *(TIntrusiveDoubleLinkedList<FSceneRenderProcessor::FRenderNode,FSceneRenderProcessor::FRenderNode>
      **)pFVar1 = &pFVar18->RenderNodes;
    *(FRenderNode **)((longlong)aVar14 + 0x18) = pFVar8;
    (pFVar18->RenderNodes).Sentinel.Prev = pFVar1;
    *(FRenderNode **)pFVar8 = pFVar1;
  }
  pFVar8 = (this->RenderNodes).Sentinel.Prev;
  *(TIntrusiveDoubleLinkedList<FSceneRenderProcessor::FRenderNode,FSceneRenderProcessor::FRenderNode>
    **)pFVar1 = &this->RenderNodes;
  piVar2 = &(this->Ops).ArrayMax;
  *(FRenderNode **)((longlong)aVar14 + 0x18) = pFVar8;
  (this->RenderNodes).Sentinel.Prev = pFVar1;
  *(FRenderNode **)pFVar8 = pFVar1;
  iVar12 = (this->Ops).ArrayNum;
  if (iVar12 == *piVar2) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderProcessor::FOp>_>
                       (0x810,&(this->Ops).AllocatorInstance,piVar2);
  }
  (this->Ops).ArrayNum = iVar12 + 1;
  piVar2 = &(this->Renderers).ArrayMax;
  pFVar7 = (this->Ops).AllocatorInstance.Data + iVar12;
  *(ulonglong *)pFVar7 = (ulonglong)uStack_34 << 0x20;
  (pFVar7->field1_0x8).Data_Group = (FGroupNode *)pFVar1;
  iVar12 = (this->Renderers).ArrayNum;
  if (iVar12 == *piVar2) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
                       (0x808,&(this->Renderers).AllocatorInstance,piVar2);
  }
  (this->Renderers).ArrayNum = iVar12 + 1;
  (this->Renderers).AllocatorInstance.Data[iVar12] = param_1;
  if (((param_1->ViewFamily)._padding_ & 0x200000) != 0) {
    iVar12 = (this->ActiveRenderers).ArrayNum;
    piVar2 = &(this->ActiveRenderers).ArrayMax;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
                         (0x808,&(this->ActiveRenderers).AllocatorInstance,piVar2);
    }
    (this->ActiveRenderers).ArrayNum = iVar12 + 1;
    piVar2 = &(this->ActiveViewFamilies).ArrayMax;
    (this->ActiveRenderers).AllocatorInstance.Data[iVar12] = param_1;
    iVar12 = (this->ActiveViewFamilies).ArrayNum;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewFamilyInfo_*>_>
                         (0x808,&(this->ActiveViewFamilies).AllocatorInstance,piVar2);
    }
    (this->ActiveViewFamilies).ArrayNum = iVar12 + 1;
    pTVar3 = &this->ActiveViews;
    (this->ActiveViewFamilies).AllocatorInstance.Data[iVar12] = &param_1->ViewFamily;
    iVar12 = (this->ActiveViews).ArrayNum;
    uVar19 = *(int *)&param_1->field_0x18 + iVar12;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    piVar2 = &(this->ActiveViews).ArrayMax;
    if ((this->ActiveViews).ArrayMax < (int)uVar19) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewInfo_*>_>
                (8,8,uVar19,&pTVar3->AllocatorInstance,iVar12,piVar2);
    }
    iVar12 = *(int *)&param_1->field_0x18;
    pFVar17 = *(FViewInfo **)&param_1->field_0x10;
    pFVar20 = pFVar17 + iVar12;
    while( true ) {
      if (*(int *)&param_1->field_0x18 != iVar12) {
        `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar17 == pFVar20) break;
      iVar13 = (this->ActiveViews).ArrayNum;
      if (iVar13 == *piVar2) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FViewInfo_*>_>
                           (0x808,&pTVar3->AllocatorInstance,piVar2);
      }
      (this->ActiveViews).ArrayNum = iVar13 + 1;
      (pTVar3->AllocatorInstance).Data[iVar13] = pFVar17;
      pFVar17 = pFVar17 + 1;
    }
  }
  return;
}

// BeginGroup @ 1454957a0

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
FSceneRenderProcessor::BeginGroup
          (FSceneRenderProcessor *this,FString *param_1,ESceneRenderGroupFlags param_2)

{
  FGroupNode *pFVar1;
  undefined8 *puVar2;
  int *piVar3;
  FOp *pFVar4;
  FGroupNode *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar9;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar10;
  atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> aVar11;
  undefined4 uStack_14;
  
  if ((this->bInsideGroup) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bInsideGroup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                         ,0x261,
                         L"SceneRenderBuilderGroup scope %s is being nested with the group %s. Groups do not currently support nesting."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*>)
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(0x48,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_UFGroupNode_FSceneRenderProcessor_____TConcurrentLinearBulkObjectAllocator_UFDefaultBlockAllocationTag____6B_
  ;
  pFVar1 = (FGroupNode *)((longlong)aVar9 + 0x10);
  aVar10 = (this->Allocator).Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FDefaultBlockAllocationTag>::FAllocation_*> *)
     ((longlong)aVar9 + 8) = aVar10;
    LOCK();
    aVar11 = (this->Allocator).Next;
    bVar7 = aVar10 == aVar11;
    if (bVar7) {
      (this->Allocator).Next = aVar9;
      aVar11 = aVar10;
    }
    UNLOCK();
    aVar10 = aVar11;
  } while (!bVar7);
  *(undefined8 *)((longlong)aVar9 + 0x30) = 0;
  puVar2 = (undefined8 *)((longlong)aVar9 + 0x20);
  *puVar2 = puVar2;
  *(undefined8 **)((longlong)aVar9 + 0x28) = puVar2;
  piVar3 = &(this->Ops).ArrayMax;
  pFVar1->_padding_ = (longlong)pFVar1;
  *(FGroupNode **)((longlong)aVar9 + 0x18) = pFVar1;
  *(FScriptContainerElement **)((longlong)aVar9 + 0x30) = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)aVar9 + 0x38) = (param_1->Data).ArrayNum;
  *(int *)((longlong)aVar9 + 0x3c) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  *(ESceneRenderGroupFlags *)((longlong)aVar9 + 0x40) = param_2;
  pFVar5 = (this->GroupNodes).Sentinel.Prev;
  pFVar1->_padding_ = (longlong)&this->GroupNodes;
  *(FGroupNode **)((longlong)aVar9 + 0x18) = pFVar5;
  (this->GroupNodes).Sentinel.Prev = pFVar1;
  pFVar5->_padding_ = (longlong)pFVar1;
  iVar8 = (this->Ops).ArrayNum;
  if (iVar8 == *piVar3) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderProcessor::FOp>_>
                      (0x810,&(this->Ops).AllocatorInstance,piVar3);
  }
  (this->Ops).ArrayNum = iVar8 + 1;
  pFVar4 = (this->Ops).AllocatorInstance.Data + iVar8;
  *(ulonglong *)pFVar4 = CONCAT44(uStack_14,2);
  (pFVar4->field1_0x8).Data_Group = pFVar1;
  this->bInsideGroup = true;
  return;
}

// Cleanup @ 145498e30

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
FSceneRenderProcessor::Cleanup
          (FSceneRenderProcessor *this,FRHICommandListImmediate *param_1,FSceneRenderer *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  TRefCountPtr<FBaseGraphTask> TVar5;
  bool bVar6;
  undefined8 *local_res20;
  code *local_38 [2];
  undefined **local_28;
  FSceneRenderer *local_20;
  undefined8 local_10;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId721,"Cleanup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
               ,0x2d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId721);
  }
  FUniformExpressionCacheAsyncUpdateScope::WaitForTask();
  if ((GIsRunningRHIInSeparateThread_InternalUseOnly == false) || (GSceneRenderCleanUpMode != 1)) {
    WaitForAsyncDeleteTask();
    FRHICommandListImmediate::ImmediateFlush(param_1,WaitForOutstandingTasksOnly,None);
    ViewSnapshotCache::Deallocate();
    CleanupSceneRenderer(param_2);
  }
  else {
    FGPUSceneDynamicContext::Release(&param_2->GPUSceneDynamicContext);
    if (AsyncTasks.Cleanup.Reference != (FBaseGraphTask *)0x0) {
      FBaseGraphTask::Wait
                (AsyncTasks.Cleanup.Reference,
                 (Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local);
    }
    ViewSnapshotCache::Deallocate();
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::`5'::<lambda_1>,1,0>::
                _vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,void>::Call;
    local_10 = 0;
    local_20 = param_2;
    TVar5 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)&local_res20,(TStatIdData *)local_38,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)&TStatId::TStatId_NAME_None,0x54be5e98);
    TVar4 = AsyncTasks.Cleanup;
    if (TVar5.Reference != (FBaseGraphTask *)&AsyncTasks) {
                    /* WARNING: Load size is inaccurate */
      AsyncTasks.Cleanup.Reference = *TVar5.Reference;
      *(undefined8 *)TVar5.Reference = 0;
      if (TVar4.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(TVar4.Reference)->field_0x30;
        iVar3 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)TVar4.Reference)(TVar4.Reference,1);
        }
      }
    }
    if (local_res20 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_res20 + 6);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (local_res20 != (undefined8 *)0x0)) {
        (**(code **)*local_res20)(local_res20,1);
      }
    }
  }
  GlobalDynamicBuffer::GarbageCollect();
  FPrimitiveIdVertexBufferPool::DiscardAll
            ((FPrimitiveIdVertexBufferPool *)&GPrimitiveIdVertexBufferPool);
  FGraphicsMinimalPipelineStateId::ResetLocalPipelineIdTableSize();
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateSceneRenderers @ 14549d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014549da15) */
/* WARNING: Removing unreachable block (ram,0x00014549d596) */
/* WARNING: Removing unreachable block (ram,0x00014549d5c9) */
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

TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> * __thiscall
FSceneRenderProcessor::CreateSceneRenderers
          (FSceneRenderProcessor *this,
          TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          *__return_storage_ptr__,TArrayView<FSceneViewFamily_*_const,int> *param_1,
          FHitProxyConsumer *param_2,bool param_3)

{
  int iVar1;
  FScene *pFVar2;
  FSceneViewFamily *pFVar3;
  longlong *plVar4;
  FFXSystemInterface *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  longlong lVar9;
  TConsoleVariableData<int> *pTVar10;
  FSceneRenderProcessor *pFVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *pTVar16;
  FSceneViewFamily **ppFVar17;
  FScene *pFVar18;
  FDeferredShadingSceneRenderer *this_00;
  FDeferredShadingSceneRenderer *pFVar19;
  FMobileSceneRenderer *this_01;
  ulonglong uVar20;
  Type TVar21;
  uint uVar22;
  FDeferredShadingSceneRenderer **ppFVar23;
  ForElementType<FSceneRenderer_*> FVar24;
  FSceneInterface *pFVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  FSceneViewFamily **ppFVar28;
  FFXSystemInterface *pFVar29;
  longlong lVar30;
  undefined1 auStackY_118 [32];
  ForElementType<FSceneRenderer_*> local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_af [7];
  FSceneRenderProcessor *local_a8;
  FDeferredShadingSceneRenderer *local_a0;
  FDeferredShadingSceneRenderer *local_98;
  uint local_90;
  Type local_8c;
  FHitProxyConsumer *local_88;
  FSceneViewFamily **local_80;
  FSceneViewFamily **local_78;
  FSceneInterface *local_70;
  TArrayView<FSceneViewFamily_*_const,int> *local_68;
  TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *local_60;
  TArray<FSceneViewFamily_*,TFixedAllocator<2>_> local_58;
  ulonglong local_40;
  
  pTVar10 = CVarSplitScreenDebugEnable.Ref;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FSceneRenderer **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    bVar13 = false;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 2;
    local_a8 = this;
    local_88 = param_2;
    local_68 = param_1;
    local_60 = __return_storage_ptr__;
    if (param_3) {
      ppFVar17 = param_1->DataPtr;
      bVar12 = IsInParallelGameThread();
      if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   *)(*pcVar8)();
        return pTVar16;
      }
      if (((0 < pTVar10->ShadowedValue[0]) && (iVar1 == 1)) &&
         (((*ppFVar17)->bSplitScreenDebugAllowed != false && (((*ppFVar17)->Views).ArrayNum == 1))))
      {
        ppFVar17 = TArrayView<FSceneViewFamily_*_const,int>::operator[](param_1,0);
        CreateSplitScreenDebugViewFamilies(*ppFVar17,param_1,&local_58);
        bVar13 = true;
      }
    }
    pFVar11 = local_a8;
    ppFVar17 = TArrayView<FSceneViewFamily_*_const,int>::operator[](param_1,0);
    pFVar25 = (*ppFVar17)->Scene;
    local_70 = pFVar25;
    if ((pFVar25 == (FSceneInterface *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SceneInterface",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                            ,0x1ed,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *
                )(*pcVar8)();
      return pTVar16;
    }
    pFVar2 = pFVar11->Scene;
    pFVar18 = (FScene *)(**(code **)(pFVar25->_padding_ + 0x418))(pFVar25);
    if ((pFVar18 != pFVar2) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("SceneInterface->GetRenderScene() == Scene",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                            ,0x1ee,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> *
                )(*pcVar8)();
      return pTVar16;
    }
    uVar14 = param_1->ArrayNum;
    TVar21 = pFVar25->FeatureLevel;
    local_b8._0_4_ = 0;
    local_c0.Data = (FSceneRenderer **)0x0;
    local_b8 = 0;
    local_8c = TVar21;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if (0 < (int)uVar14) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
                (8,8,uVar14,&local_c0,0,(int *)((longlong)&local_b8 + 4));
    }
    local_80 = param_1->DataPtr;
    local_78 = local_80 + (int)uVar14;
    FVar24.Data = local_c0.Data;
    uVar14 = (uint)local_b8;
    if (local_80 != local_78) {
      do {
        pFVar3 = *local_80;
        if ((pFVar3 == (FSceneViewFamily *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ViewFamily",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                                ,0x1f7,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                     *)(*pcVar8)();
          return pTVar16;
        }
        if ((pFVar3->Scene != pFVar25) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ViewFamily->Scene == SceneInterface",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                                ,0x1f8,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                     *)(*pcVar8)();
          return pTVar16;
        }
        iVar1 = (pFVar3->ViewExtensions).ArrayNum;
        pFVar27 = (pFVar3->ViewExtensions).AllocatorInstance.Data;
        pFVar26 = pFVar27 + (longlong)iVar1 * 0x10;
        while( true ) {
          if ((pFVar3->ViewExtensions).ArrayNum != iVar1) {
            local_b0 = 0;
            `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_b0);
          }
          if (pFVar27 == pFVar26) break;
          (**(code **)(**(longlong **)pFVar27 + 0x20))(*(longlong **)pFVar27,pFVar3);
          pFVar27 = pFVar27 + 0x10;
        }
        if ((int)TVar21 < 3) {
          this_01 = ::operator_new(0xfb0);
          pFVar19 = (FDeferredShadingSceneRenderer *)0x0;
          if (this_01 != (FMobileSceneRenderer *)0x0) {
            pFVar19 = (FDeferredShadingSceneRenderer *)
                      FMobileSceneRenderer::FMobileSceneRenderer(this_01,pFVar3,local_88);
          }
          local_98 = pFVar19;
          if (((FVar24.Data <= &local_98) && (&local_98 < FVar24.Data + (int)local_b8._4_4_)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                       *)(*pcVar8)();
            return pTVar16;
          }
          if (uVar14 == local_b8._4_4_) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
                               (0x808,&local_c0,(int *)((longlong)&local_b8 + 4));
            FVar24.Data = local_c0.Data;
          }
          pFVar19 = local_98;
          uVar22 = uVar14;
        }
        else {
          this_00 = ::operator_new(0x1050);
          pFVar19 = (FDeferredShadingSceneRenderer *)0x0;
          if (this_00 != (FDeferredShadingSceneRenderer *)0x0) {
            pFVar19 = FDeferredShadingSceneRenderer::FDeferredShadingSceneRenderer
                                (this_00,pFVar3,local_88);
          }
          local_a0 = pFVar19;
          if (((FVar24.Data <= &local_a0) && (&local_a0 < FVar24.Data + (int)local_b8._4_4_)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                       *)(*pcVar8)();
            return pTVar16;
          }
          if (uVar14 == local_b8._4_4_) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSceneRenderer_*>_>
                               (0x808,&local_c0,(int *)((longlong)&local_b8 + 4));
            FVar24.Data = local_c0.Data;
          }
          pFVar19 = local_a0;
          uVar22 = uVar14;
        }
        uVar14 = uVar22 + 1;
        FVar24.Data[(int)uVar22] = (FSceneRenderer *)pFVar19;
        local_90 = (pFVar3->ViewExtensions).ArrayNum;
        uVar20 = (ulonglong)(int)local_90;
        pFVar27 = (pFVar3->ViewExtensions).AllocatorInstance.Data;
        pFVar26 = pFVar27 + uVar20 * 0x10;
        local_b8 = CONCAT44(local_b8._4_4_,uVar14);
        while( true ) {
          if ((pFVar3->ViewExtensions).ArrayNum != (int)uVar20) {
            local_af[0] = 0;
            `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_af);
          }
          if (pFVar27 == pFVar26) break;
          plVar4 = *(longlong **)pFVar27;
          pcVar8 = *(code **)(*plVar4 + 0x28);
          uVar15 = 0;
          if ((int)uVar22 < (int)uVar14) {
            uVar15 = ~uVar22 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                       *)(*pcVar8)();
            return pTVar16;
          }
          (*pcVar8)(plVar4,pFVar3,(FDeferredShadingSceneRenderer *)FVar24.Data[(int)uVar22]);
          uVar20 = (ulonglong)local_90;
          pFVar27 = pFVar27 + 0x10;
        }
        local_80 = local_80 + 1;
        pFVar25 = local_70;
        TVar21 = local_8c;
      } while (local_80 != local_78);
    }
    pFVar29 = (FFXSystemInterface *)0x0;
    if (((local_a8->Scene != (FScene *)0x0) &&
        (pFVar5 = local_a8->Scene->FXSystem, pFVar5 != (FFXSystemInterface *)0x0)) &&
       (pFVar5->bIsPendingKill == false)) {
      pFVar29 = pFVar5;
    }
    for (ppFVar23 = (FDeferredShadingSceneRenderer **)FVar24.Data;
        ppFVar23 != (FDeferredShadingSceneRenderer **)(FVar24.Data + (int)uVar14);
        ppFVar23 = ppFVar23 + 1) {
      pFVar19 = *ppFVar23;
      if (((int)uVar14 < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   *)(*pcVar8)();
        return pTVar16;
      }
      ((<unnamed_type_Link> *)&pFVar19->field_0x400)->Head = (FSceneRenderer *)*FVar24.Data;
      *(FFXSystemInterface **)&pFVar19->field_0xb40 = pFVar29;
    }
    uVar22 = 1;
    if (1 < (int)uVar14) {
      lVar30 = 8;
      do {
        uVar15 = 0;
        if ((int)uVar22 < (int)uVar14) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                     *)(*pcVar8)();
          return pTVar16;
        }
        uVar6 = *(undefined8 *)((longlong)FVar24.Data + lVar30);
        uVar15 = 0;
        if ((int)(uVar22 - 1) < (int)uVar14) {
          uVar15 = -uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                     *)(*pcVar8)();
          return pTVar16;
        }
        lVar9 = lVar30 + -8;
        uVar22 = uVar22 + 1;
        lVar30 = lVar30 + 8;
        *(undefined8 *)(*(longlong *)((longlong)FVar24.Data + lVar9) + 0x408) = uVar6;
      } while ((int)uVar22 < (int)uVar14);
    }
    if (bVar13) {
      ppFVar28 = local_68->DataPtr;
      ppFVar17 = ppFVar28 + local_68->ArrayNum;
      if (ppFVar28 != ppFVar17) {
        do {
          pFVar3 = *ppFVar28;
          uVar14 = 0;
          if (0 < (pFVar3->Views).ArrayNum) {
            lVar30 = 0;
            do {
              uVar22 = 0;
              if ((int)uVar14 < (pFVar3->Views).ArrayNum) {
                uVar22 = ~uVar14 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                pTVar16 = (TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                           *)(*pcVar8)();
                return pTVar16;
              }
              puVar7 = *(undefined8 **)((pFVar3->Views).AllocatorInstance.Data + lVar30);
              if (puVar7 != (undefined8 *)0x0) {
                (**(code **)*puVar7)(puVar7,1);
              }
              uVar14 = uVar14 + 1;
              lVar30 = lVar30 + 8;
            } while ((int)uVar14 < (pFVar3->Views).ArrayNum);
          }
          (**(code **)pFVar3->_padding_)(pFVar3,1);
          ppFVar28 = ppFVar28 + 1;
        } while (ppFVar28 != ppFVar17);
        FVar24.Data = local_c0.Data;
        uVar14 = (uint)local_b8;
      }
    }
    (local_60->AllocatorInstance).Data = FVar24.Data;
    local_60->ArrayMax = local_b8._4_4_;
    local_60->ArrayNum = uVar14;
    __return_storage_ptr__ = local_60;
  }
  return __return_storage_ptr__;
}

// Execute @ 1454a4a00

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FSceneRenderProcessor::Execute(FSceneRenderProcessor *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FGroupNode *pFVar4;
  FRenderCommandList *pFVar5;
  FCommandList *pFVar6;
  FRenderCommandTag *pFVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  int iVar10;
  undefined ***pppuVar11;
  TIntrusiveDoubleLinkedList<FSceneRenderProcessor::FRenderNode,FSceneRenderProcessor::FRenderNode>
  *pTVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  FOp *pFVar15;
  FOp *pFVar16;
  undefined1 auStack_2f8 [32];
  FScriptContainerElement *local_2d8;
  FDumpScope local_2c8;
  char local_2c7;
  undefined1 local_2c4;
  FUniformExpressionCacheAsyncUpdateScope local_2c3 [11];
  FScopedCapture local_2b8;
  char local_280;
  code *local_278 [2];
  undefined **local_268;
  FSceneRenderProcessor *pFStack_260;
  FGroupNode *local_258;
  undefined ***local_250;
  code *local_248 [2];
  undefined **local_238;
  FSceneRenderProcessor *pFStack_230;
  FGroupNode *local_228;
  undefined ***local_220;
  code *local_218 [2];
  undefined **local_208;
  FSceneRenderProcessor *pFStack_200;
  undefined8 local_1f8;
  undefined ***local_1f0;
  code *local_1e8 [2];
  undefined **local_1d8;
  code *pcStack_1d0;
  undefined8 local_1c8;
  undefined ***local_1c0;
  code *local_1b8 [2];
  undefined **local_1a8;
  FSceneRenderProcessor *pFStack_1a0;
  undefined8 local_198;
  undefined ***local_190;
  undefined1 local_188 [16];
  undefined **local_178;
  code *pcStack_170;
  undefined8 local_168;
  undefined ***local_160;
  byte local_158;
  undefined1 local_148 [16];
  undefined **local_138;
  FSceneRenderProcessor *pFStack_130;
  undefined8 local_128;
  undefined ***local_120;
  byte local_118;
  undefined1 local_108 [16];
  undefined **local_f8;
  FSceneRenderProcessor *pFStack_f0;
  FGroupNode *local_e8;
  undefined ***local_e0;
  byte local_d8;
  undefined1 local_c8 [16];
  undefined **local_b8;
  FSceneRenderProcessor *pFStack_b0;
  FGroupNode *local_a8;
  undefined ***local_a0;
  byte local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  FSceneRenderProcessor *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  FSyncScope local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  pFVar4 = (FGroupNode *)0x0;
  if (this->bInsideGroup) {
    if ((this->GroupNodes).Sentinel.Next != (FGroupNode *)&this->GroupNodes) {
      pFVar4 = (this->GroupNodes).Sentinel.Prev;
    }
    if ((pFVar4->Name).Data.ArrayNum == 0) {
      local_2d8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_2d8 = (pFVar4->Name).Data.AllocatorInstance.Data;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bInsideGroup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                       ,0x2f9,
                       L"FSceneRenderBuilder::Execute called within scene render group scope %s. You must end the scope first."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (GRHIGlobals.TriggerGPUCrash != None) {
    local_1c0 = (undefined ***)0x0;
    local_1d8 = &
                ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    pcStack_1d0 = `FSceneRenderProcessor::Execute'::__l14::<lambda_1>::<lambda_invoker_cdecl>;
    local_1e8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                   ::Call;
    pFVar5 = FRenderCommandList::GetInstanceTLS();
    if (pFVar5 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l14::TSTR_ScheduleGPUDebugCrash766>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1e8);
    }
    else {
      pFVar6 = FRenderCommandList::GetRenderThread(pFVar5);
      local_188._0_8_ = local_1e8[0];
      local_160 = local_1c0;
      local_178 = local_1d8;
      pcStack_170 = pcStack_1d0;
      local_168 = local_1c8;
      local_1e8[0] = (code *)0x0;
      local_158 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l14::TSTR_ScheduleGPUDebugCrash766>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar6,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_188,pFVar7);
      uVar13 = (ulonglong)local_158;
      if ((2 < uVar13) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_188._0_8_ != (code *)0x0) {
          pppuVar11 = (undefined ***)(local_188 + 0x10);
          if (local_160 != (undefined ***)0x0) {
            pppuVar11 = local_160;
          }
          (*(code *)(*pppuVar11)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_188);
      }
    }
    if (local_1e8[0] != (code *)0x0) {
      pppuVar11 = &local_1d8;
      if (local_1c0 != (undefined ***)0x0) {
        pppuVar11 = local_1c0;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_48);
  FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope(local_2c3);
  iVar1 = (this->Ops).ArrayNum;
  pFVar15 = (this->Ops).AllocatorInstance.Data;
  pFVar16 = pFVar15 + iVar1;
  local_2c7 = '\0';
  local_280 = '\0';
LAB_1454a4c02:
  if ((this->Ops).ArrayNum != iVar1) {
    local_2c4 = 0;
    `TCheckedPointerIterator<FSceneRenderProcessor::FOp,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_2c4);
  }
  if (pFVar15 == pFVar16) {
    local_190 = (undefined ***)0x0;
    local_1a8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`2'::<lambda_5>,1,0>::
                 _vftable_;
    local_1b8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FSceneRenderProcessor::Execute'::__l2::<lambda_5>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFStack_1a0 = this;
    pFVar5 = FRenderCommandList::GetInstanceTLS();
    if (pFVar5 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l2::TSTR_SceneRenderBuilder_End924>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1b8);
    }
    else {
      pFVar6 = FRenderCommandList::GetRenderThread(pFVar5);
      local_88._0_8_ = local_1b8[0];
      local_60 = local_190;
      local_78 = local_1a8;
      pFStack_70 = pFStack_1a0;
      local_68 = local_198;
      local_1b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l2::TSTR_SceneRenderBuilder_End924>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar6,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_88,pFVar7);
      uVar13 = (ulonglong)local_58;
      if ((2 < uVar13) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          pppuVar11 = (undefined ***)(local_88 + 0x10);
          if (local_60 != (undefined ***)0x0) {
            pppuVar11 = local_60;
          }
          (*(code *)(*pppuVar11)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_88);
      }
    }
    if (local_1b8[0] != (code *)0x0) {
      pppuVar11 = &local_1a8;
      if (local_190 != (undefined ***)0x0) {
        pppuVar11 = local_190;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    if (local_280 != '\0') {
      RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_2b8);
    }
    if ((local_2c7 != '\0') && (local_2c8.bCondition != false)) {
      UE::RenderCore::DumpGPU::TickEndFrame();
    }
    FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope(local_2c3);
    UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_48);
    return;
  }
  pFVar4 = (pFVar15->field1_0x8).Data_Group;
  iVar10 = (int)*(undefined8 *)pFVar15;
  if (iVar10 == 0) {
    local_220 = (undefined ***)0x0;
    local_238 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`30'::<lambda_4>,1,0>::
                 _vftable_;
    local_248[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FSceneRenderProcessor::Execute'::__l30::<lambda_4>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFStack_230 = this;
    local_228 = pFVar4;
    pFVar5 = FRenderCommandList::GetInstanceTLS();
    if (pFVar5 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l30::TSTR_SceneRenderBuilder_Render829>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_248);
    }
    else {
      pFVar6 = FRenderCommandList::GetRenderThread(pFVar5);
      local_c8._0_8_ = local_248[0];
      local_a0 = local_220;
      local_220 = (undefined ***)0x0;
      local_b8 = local_238;
      pFStack_b0 = pFStack_230;
      local_a8 = local_228;
      local_248[0] = (code *)0x0;
      local_98 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l30::TSTR_SceneRenderBuilder_Render829>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar6,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_c8,pFVar7);
      uVar13 = (ulonglong)local_98;
      if ((2 < uVar13) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_c8._0_8_ != (code *)0x0) {
          pppuVar11 = (undefined ***)(local_c8 + 0x10);
          if (local_a0 != (undefined ***)0x0) {
            pppuVar11 = local_a0;
          }
          (*(code *)(*pppuVar11)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_c8);
      }
    }
    if (local_248[0] != (code *)0x0) {
      pppuVar11 = &local_238;
      pppuVar9 = local_220;
LAB_1454a50ca:
      if (pppuVar9 != (undefined ***)0x0) {
        pppuVar11 = pppuVar9;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  else {
    if (iVar10 == 1) {
      UE::Core::Private::Function::CheckCallable((void *)pFVar4->_padding_);
      pTVar12 = *(TIntrusiveDoubleLinkedList<FSceneRenderProcessor::FRenderNode,FSceneRenderProcessor::FRenderNode>
                  **)&(pFVar4->Name).Data.ArrayNum;
      pcVar2 = (code *)pFVar4->_padding_;
      if (pTVar12 ==
          (TIntrusiveDoubleLinkedList<FSceneRenderProcessor::FRenderNode,FSceneRenderProcessor::FRenderNode>
           *)0x0) {
        pTVar12 = &pFVar4->RenderNodes;
      }
      uVar8 = (**(code **)&((pTVar12->Sentinel).Next)->field_0x8)();
      (*pcVar2)(uVar8);
      pFVar15 = pFVar15 + 1;
      goto LAB_1454a4c02;
    }
    if (iVar10 == 2) {
      if ((pFVar4->Flags & GpuCapture) != None) {
        if ((pFVar4->Name).Data.ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar4->Name).Data.AllocatorInstance.Data;
        }
        if (local_280 != '\0') {
          RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_2b8);
        }
        RenderCaptureInterface::FScopedCapture::FScopedCapture
                  (&local_2b8,true,pwVar14,(wchar_t *)0x0);
        local_280 = '\x01';
      }
      if ((pFVar4->Flags & GpuDump) != None) {
        if ((local_2c7 != '\0') && (local_2c8.bCondition != false)) {
          UE::RenderCore::DumpGPU::TickEndFrame();
        }
        UE::RenderCore::DumpGPU::FDumpScope::FDumpScope(&local_2c8,true);
        local_2c7 = '\x01';
      }
      local_250 = (undefined ***)0x0;
      local_268 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`21'::<lambda_2>,1,0>::
                   _vftable_;
      local_278[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FSceneRenderProcessor::Execute'::__l21::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
      pFStack_260 = this;
      local_258 = pFVar4;
      pFVar5 = FRenderCommandList::GetInstanceTLS();
      if (pFVar5 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l21::TSTR_SceneRenderBuilder_BeginGroup799>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_278);
      }
      else {
        pFVar6 = FRenderCommandList::GetRenderThread(pFVar5);
        local_108._0_8_ = local_278[0];
        local_e0 = local_250;
        local_250 = (undefined ***)0x0;
        local_f8 = local_268;
        pFStack_f0 = pFStack_260;
        local_e8 = local_258;
        local_278[0] = (code *)0x0;
        local_d8 = 2;
        pFVar7 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l21::TSTR_SceneRenderBuilder_BeginGroup799>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar6,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_108,pFVar7);
        uVar13 = (ulonglong)local_d8;
        if ((2 < uVar13) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_108._0_8_ != (code *)0x0) {
            pppuVar11 = (undefined ***)(local_108 + 0x10);
            if (local_e0 != (undefined ***)0x0) {
              pppuVar11 = local_e0;
            }
            (*(code *)(*pppuVar11)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(local_108);
        }
      }
      if (local_278[0] != (code *)0x0) {
        pppuVar11 = &local_268;
        pppuVar9 = local_250;
        goto LAB_1454a50ca;
      }
    }
    else {
      if (iVar10 != 3) goto LAB_1454a50d7;
      local_1f0 = (undefined ***)0x0;
      local_208 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FSceneRenderProcessor::Execute'::`28'::<lambda_3>,1,0>::
                   _vftable_;
      local_218[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FSceneRenderProcessor::Execute'::__l28::<lambda_3>,void,FRHICommandListImmediate_&>
                     ::Call;
      pFStack_200 = this;
      pFVar5 = FRenderCommandList::GetInstanceTLS();
      if (pFVar5 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FSceneRenderProcessor::Execute_::__l28::TSTR_SceneRenderBuilder_EndGroup809>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_218);
      }
      else {
        pFVar6 = FRenderCommandList::GetRenderThread(pFVar5);
        local_148._0_8_ = local_218[0];
        local_120 = local_1f0;
        local_1f0 = (undefined ***)0x0;
        local_138 = local_208;
        pFStack_130 = pFStack_200;
        local_128 = local_1f8;
        local_218[0] = (code *)0x0;
        local_118 = 2;
        pFVar7 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSceneRenderProcessor::Execute'::__l28::TSTR_SceneRenderBuilder_EndGroup809>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar6,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                           *)local_148,pFVar7);
        uVar13 = (ulonglong)local_118;
        if ((2 < uVar13) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_148._0_8_ != (code *)0x0) {
            pppuVar11 = (undefined ***)(local_148 + 0x10);
            if (local_120 != (undefined ***)0x0) {
              pppuVar11 = local_120;
            }
            (*(code *)(*pppuVar11)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(local_148);
        }
      }
      if (local_218[0] != (code *)0x0) {
        pppuVar11 = &local_208;
        if (local_1f0 != (undefined ***)0x0) {
          pppuVar11 = local_1f0;
        }
        (*(code *)(*pppuVar11)[2])();
      }
      if (local_280 != '\0') {
        RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_2b8);
        local_280 = '\0';
      }
      if (local_2c7 != '\0') {
        if (local_2c8.bCondition != false) {
          UE::RenderCore::DumpGPU::TickEndFrame();
        }
        local_2c7 = '\0';
        pFVar15 = pFVar15 + 1;
        goto LAB_1454a4c02;
      }
    }
  }
LAB_1454a50d7:
  pFVar15 = pFVar15 + 1;
  goto LAB_1454a4c02;
}

// WaitForAsyncDeleteTask @ 1454c3600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FSceneRenderProcessor::WaitForAsyncDeleteTask(void)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  bool bVar5;
  
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
                         ,0x28d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (AsyncTasks.Delete.Reference != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::Wait(AsyncTasks.Delete.Reference,AnyNormalThreadNormalTask);
    TVar4 = AsyncTasks.Cleanup;
    AsyncTasks.Cleanup.Reference = (FBaseGraphTask *)0x0;
    if (TVar4.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(TVar4.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)TVar4.Reference)(TVar4.Reference,1);
      }
    }
    TVar4.Reference = AsyncTasks.Delete.Reference;
    AsyncTasks.Delete.Reference = (FBaseGraphTask *)0x0;
    if (TVar4.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(TVar4.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001454c36b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)TVar4.Reference)(TVar4.Reference,1);
        return;
      }
    }
  }
  return;
}


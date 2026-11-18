// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 8

// <lambda_invoker_cdecl> @ 14de1f410

bool __cdecl
`FNGXAutomationViewExtension::FNGXAutomationViewExtension'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (ISceneViewExtension *param_1,FSceneViewExtensionContext *param_2)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarNGXAutomationEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// FNGXAutomationViewExtension @ 14de21a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de21ad6) */
/* WARNING: Removing unreachable block (ram,0x00014de21ae7) */
/* WARNING: Removing unreachable block (ram,0x00014de21aeb) */

FNGXAutomationViewExtension * __thiscall
FNGXAutomationViewExtension::FNGXAutomationViewExtension
          (FNGXAutomationViewExtension *this,FAutoRegister *param_1)

{
  FGuid *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNGXAutomationViewExtension *pFVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined1 auStack_e8 [32];
  FGuid *local_c8;
  FGuid *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  FGuid local_98;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  *(undefined ***)this = &___7FNGXAutomationViewExtension__6B_;
  FGuid::NewGuid(&local_98);
  local_68 = local_38;
  uStack_64 = uStack_34;
  plStack_60 = (longlong *)0x0;
  local_78 = 0x52d3c508;
  uStack_74 = 1;
  uStack_70 = 0x4de1f410;
  uStack_6c = 1;
  local_58 = 0;
  uStack_50 = uStack_80;
  uStack_30 = 0;
  uStack_30 = 0;
  local_58 = 0;
  plStack_60 = (longlong *)0x0;
  uStack_6c = 1;
  uStack_70 = 0x4de1f410;
  uStack_74 = 1;
  local_78 = 0x52d3c508;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
             ::Call;
  pFVar1 = *(FGuid **)&this->field_0x18;
  if ((pFVar1 <= &local_98) && (&local_98 < pFVar1 + (longlong)*(int *)&this->field_0x24 * 4)) {
    local_b0 = (longlong)*(int *)&this->field_0x20;
    local_a8 = 0x40;
    local_c8 = &local_98;
    local_c0 = pFVar1;
    local_b8 = (longlong)*(int *)&this->field_0x24;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNGXAutomationViewExtension *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = *(int *)&this->field_0x20;
  if (iVar4 == *(int *)&this->field_0x24) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,(ForAnyElementType *)&this->field_0x18,(int *)&this->field_0x24);
  }
  *(int *)&this->field_0x20 = iVar4 + 1;
  puVar7 = (uint *)((longlong)iVar4 * 0x40 + *(longlong *)&this->field_0x18);
  *puVar7 = local_98.A;
  puVar7[1] = local_98.B;
  puVar7[2] = local_98.C;
  puVar7[3] = local_98.D;
  *(code **)(puVar7 + 4) = local_88;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  if (local_88 != (code *)0x0) {
    plVar6 = (longlong *)&local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar6 = plStack_60;
    }
    (**(code **)*plVar6)();
  }
  if (local_88 != (code *)0x0) {
    plVar6 = (longlong *)&local_78;
    if (plStack_60 != (longlong *)0x0) {
      plVar6 = plStack_60;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return this;
}

// BeginRenderViewFamily @ 14de24d90

void __thiscall
FNGXAutomationViewExtension::BeginRenderViewFamily
          (FNGXAutomationViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

// PreRenderViewFamily_RenderThread @ 14de289b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread
          (FNGXAutomationViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  uint uVar1;
  longlong lVar2;
  FRHIComputeCommandList *this_00;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
  *pTVar8;
  FRHIBreadcrumbScope local_58;
  undefined1 local_48;
  uint uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  pTVar4 = CVarNGXAutomationViewIndex.Ref;
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = pTVar4->ShadowedValue[1];
  if ((-1 < (int)uVar1) && ((int)uVar1 < (param_2->Views).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar1 < (param_2->Views).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar4 = CVarNGXAutomationNonGameViews.Ref;
    lVar2 = *(longlong *)((param_2->Views).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
    if (*(char *)(lVar2 + 0x11d8) == '\0') {
      bVar5 = IsInParallelRenderingThread();
      if ((!bVar5) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pTVar4->ShadowedValue[1] == 0) {
        return;
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      local_30 = 0;
      uStack_2c = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
      ::__l2::Desc._12_8_ = ZEXT48(uStack_34);
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_ProjectDS_Client_P;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
      ::__l2::Desc._padding_._4_4_ = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)u_r_NGX_Automatio;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
      ::__l2::Desc._padding_ = (longlong)u___camera____pos;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
      ::__l2::Desc._padding_._0_4_ = 0x8f;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
                  ::__l2::Desc.Cs,4000);
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
      ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
      ::__l2::Desc.TraceGpuSpecId = 0;
      `public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread'::__l13::<lambda_1>::
             operator()<double_const_&,double_const_&,double_const_&,double_const_&,double_const_&,double_const_&>'
             ::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    this_00 = (FRHIComputeCommandList *)param_1->_padding_;
    pFVar7 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
    pTVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x80,8);
    pTVar8 = UE::RHI::Breadcrumbs::Private::
             TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
             ::
             TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_><double_const_&,double_const_&,double_const_&,double_const_&,double_const_&,double_const_&>
                       (pTVar8,pFVar7,
                        &`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FNGXAutomationViewExtension::PreRenderViewFamily_RenderThread(FRDGBuilder&___ptr64,FSceneViewFamily&___ptr64)___ptr64'::`13'::<lambda_1>::operator()<double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64>(double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64,double_const&___ptr64)const___ptr64'
                         ::__l2::Desc,(double *)(lVar2 + 0xc30),(double *)(lVar2 + 0xc38),
                        (double *)(lVar2 + 0xc40),(double *)(lVar2 + 0xc48),
                        (double *)(lVar2 + 0xc58),(double *)(lVar2 + 0xc50));
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_58,this_00,(FRHIBreadcrumbNode *)pTVar8);
    local_48 = 1;
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_58);
  }
  return;
}

// PreRenderView_RenderThread @ 14de28c70

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
FNGXAutomationViewExtension::PreRenderView_RenderThread
          (FNGXAutomationViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  return;
}

// SetupView @ 14de294f0

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
FNGXAutomationViewExtension::SetupView
          (FNGXAutomationViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  return;
}

// SetupViewFamily @ 14de29b40

void __thiscall
FNGXAutomationViewExtension::SetupViewFamily
          (FNGXAutomationViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

// SetupViewPoint @ 14de29b50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNGXAutomationViewExtension::SetupViewPoint
          (FNGXAutomationViewExtension *this,APlayerController *param_1,FMinimalViewInfo *param_2)

{
  return;
}


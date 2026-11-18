// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 81

// StaticClass @ 147d41e40

UClass * __cdecl UKismetRenderingLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetRenderingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetRenderingLibrary",
               &Z_Registration_Info_UClass_UKismetRenderingLibrary.InnerSingleton,
               StaticRegisterNativesUKismetRenderingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetRenderingLibrary>,
               InternalVTableHelperCtorCaller<UKismetRenderingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetRenderingLibrary.InnerSingleton;
}

// UKismetRenderingLibrary @ 147d7a460

UKismetRenderingLibrary * __thiscall
UKismetRenderingLibrary::UKismetRenderingLibrary
          (UKismetRenderingLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetRenderingLibrary__6B_;
  return this;
}

// UKismetRenderingLibrary @ 147d7a490

UKismetRenderingLibrary * __thiscall
UKismetRenderingLibrary::UKismetRenderingLibrary
          (UKismetRenderingLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetRenderingLibrary__6B_;
  return this;
}

// ~UKismetRenderingLibrary @ 147d7bb10

void __thiscall UKismetRenderingLibrary::~UKismetRenderingLibrary(UKismetRenderingLibrary *this)

{
  *(undefined ***)this = &___7UKismetRenderingLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 147d7faf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`UKismetRenderingLibrary::ClearRenderTarget2D'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  longlong *plVar4;
  FRHITransitionInfo_u_8 *pFVar5;
  IRHICommandContext *pIVar6;
  undefined8 *puVar7;
  undefined1 auStackY_1e8 [32];
  TArrayView<FRHITransitionInfo_const_,int> local_1a8;
  FRHITransitionInfo local_198;
  FRHITransitionInfo local_168;
  TArrayView<FRHITransitionInfo_const_,int> local_138;
  FRHIRenderPassInfo local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  plVar4 = (longlong *)(**(code **)(*(longlong *)(*(longlong *)this + 0x60) + 0x10))();
  local_128.ColorRenderTargets.Elements[0].RenderTarget = (FRHITexture *)*plVar4;
  local_128.ColorRenderTargets.Elements[1].RenderTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[1].ResolveTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[1].ArraySlice = -1;
  local_128.ColorRenderTargets.Elements[1].MipIndex = '\0';
  local_128.ColorRenderTargets.Elements[1].Action = DontLoad_DontStore;
  local_128.ColorRenderTargets.Elements[2].RenderTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[2].ResolveTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[2].ArraySlice = -1;
  local_128.ColorRenderTargets.Elements[2].MipIndex = '\0';
  local_128.ColorRenderTargets.Elements[2].Action = DontLoad_DontStore;
  local_128.ColorRenderTargets.Elements[3].RenderTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[3].ResolveTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[3].ArraySlice = -1;
  local_128.ColorRenderTargets.Elements[3].MipIndex = '\0';
  local_128.ColorRenderTargets.Elements[3].Action = DontLoad_DontStore;
  local_128.ColorRenderTargets.Elements[4].RenderTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[4].ResolveTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[4].ArraySlice = -1;
  local_128.ColorRenderTargets.Elements[4].MipIndex = '\0';
  local_128.ColorRenderTargets.Elements[4].Action = DontLoad_DontStore;
  local_128.ColorRenderTargets.Elements[5].RenderTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[5].ResolveTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[5].ArraySlice = -1;
  local_128.ColorRenderTargets.Elements[5].MipIndex = '\0';
  local_128.ColorRenderTargets.Elements[5].Action = DontLoad_DontStore;
  local_128.ColorRenderTargets.Elements[6].RenderTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[6].ResolveTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[6].ArraySlice = -1;
  local_128.ColorRenderTargets.Elements[6].MipIndex = '\0';
  local_128.ColorRenderTargets.Elements[6].Action = DontLoad_DontStore;
  local_128.ColorRenderTargets.Elements[7].RenderTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[7].ResolveTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[7].ArraySlice = -1;
  local_128.ColorRenderTargets.Elements[7].MipIndex = '\0';
  local_128.ColorRenderTargets.Elements[7].Action = DontLoad_DontStore;
  local_128.DepthStencilRenderTarget.DepthStencilTarget = (FRHITexture *)0x0;
  local_128.DepthStencilRenderTarget.ResolveTarget = (FRHITexture *)0x0;
  local_128.DepthStencilRenderTarget.Action = DontLoad_DontStore;
  local_128.DepthStencilRenderTarget.ExclusiveDepthStencil.Value = DepthNop;
  local_128.ResolveRect.X1 = -1;
  local_128.ResolveRect.Y1 = -1;
  local_128.ResolveRect.X2 = -1;
  local_128.ResolveRect.Y2 = -1;
  local_128.ShadingRateTexture.Reference = (FRHITexture *)0x0;
  local_128.ShadingRateTextureCombiner = VRSRB_Passthrough;
  local_128.NopAccess = None;
  local_128.NumOcclusionQueries = 0;
  local_128.bOcclusionQueries = false;
  local_128.MultiViewCount = '\0';
  local_128.SubpassHint = None;
  if (local_128.ColorRenderTargets.Elements[0].RenderTarget == (FRHITexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ColorRT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x14b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_128.ColorRenderTargets.Elements[0].ResolveTarget = (FRHITexture *)0x0;
  local_128.ColorRenderTargets.Elements[0].ArraySlice = -1;
  local_128.ColorRenderTargets.Elements[0].MipIndex = '\0';
  local_128.ColorRenderTargets.Elements[0].Action = DontLoad_Store;
  pFVar5 = (FRHITransitionInfo_u_8 *)(**(code **)(*(longlong *)(*(longlong *)this + 0x60) + 0x10))()
  ;
  local_1a8.ArrayNum = 1;
  local_198.field1_0x8 = *pFVar5;
  local_1a8.DataPtr = &local_198;
  local_198._padding_._0_4_ = 0xffffffff;
  local_198._padding_._4_2_ = 0xffff;
  local_198.Type = Texture;
  local_198.AccessBefore = None;
  local_198.AccessAfter = RTV;
  local_198.Flags = None;
  local_198.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_1a8,None);
  FRHICommandList::BeginRenderPass(param_1,&local_128,L"ClearRT");
  DrawClearQuadMRT(param_1,true,1,(FLinearColor *)((longlong)this + 8),false,0.0,false,0);
  if ((param_1->field_0x29b & 2) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10c5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->field_0x29b & 4) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInsideComputePass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x10c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = param_1->field_0x29b;
  if ((bVar3 & 8) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,param_1);
    param_1->field_0x29b = param_1->field_0x29b & 0xf7;
    bVar3 = param_1->field_0x29b;
  }
  if ((GRHICommandList.bLatchedBypass == false) || ((bVar3 & 0x20) == 0)) {
    puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x10,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar7;
    *(undefined8 **)&param_1->field_0x30 = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &___7FRHICommandEndRenderPass__6B_;
  }
  else {
    pIVar6 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    (**(code **)(pIVar6->_padding_ + 0x250))(pIVar6);
  }
  param_1->field_0x29b = param_1->field_0x29b & 0xfd;
  *(undefined2 *)&param_1->field_0x298 = 0;
  pFVar5 = (FRHITransitionInfo_u_8 *)(**(code **)(*(longlong *)(*(longlong *)this + 0x60) + 0x10))()
  ;
  local_1a8.ArrayNum = 1;
  local_168.field1_0x8 = *pFVar5;
  local_1a8.DataPtr = &local_168;
  local_138.ArrayNum = 1;
  local_138._12_4_ = local_1a8._12_4_;
  local_168._padding_._0_4_ = 0xffffffff;
  local_168._padding_._4_2_ = 0xffff;
  local_168.Type = Texture;
  local_168.AccessBefore = RTV;
  local_168.AccessAfter = SRVMask;
  local_168.Flags = None;
  local_168.CommitInfo.bIsSet = false;
  local_138.DataPtr = local_1a8.DataPtr;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_138,None);
  if (local_128.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_128.ShadingRateTexture.Reference);
  }
  return;
}

// operator() @ 147d80010

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget'::__l18::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FRHIBreadcrumbEventManual *this_00;
  code *pcVar2;
  bool bVar3;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>_const_*,std::tuple<FName_const_&>_>
  local_38;
  uint uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  this_00 = *(FRHIBreadcrumbEventManual **)((longlong)this + 0x10);
  lVar1 = (longlong)this + 8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x327;
      local_18 = 0;
      uStack_14 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_1c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_DrawCanvasToTar;
      ::Desc._padding_ = (longlong)u_DrawCanvasToTar;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget'::__l18::Desc::operator()'::
             __l2::<lambda_1>::operator()<FName_const_&>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_38._Myfirst._Val = &::Desc;
  local_38._padding_ = lVar1;
  if (*(char *)&this_00[1].Node.Node != '\0') {
    if ((this_00->Node).Node != (FRHIBreadcrumbNode *)0x0) {
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
              ((this_00->Node).AllocatorRef.SharedReferenceCount.ReferenceController);
  }
  FRHIBreadcrumbEventManual::
  FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>,FName_const_&>
            (this_00,(FRHIComputeCommandList *)param_1,&local_38);
  *(undefined1 *)&this_00[1].Node.Node = 1;
  FDeferredUpdateResource::FlushDeferredResourceUpdate
            ((FDeferredUpdateResource *)(*(longlong *)this + 0x70),param_1);
  return;
}

// operator() @ 147d801a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`UKismetRenderingLibrary::EndDrawCanvasToRenderTarget'::__l14::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  FRHIBreadcrumbEventManual *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  TIntVector3<int>_u_0 local_48;
  undefined8 local_3c;
  int local_34;
  undefined8 local_30;
  int local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)(*(longlong *)this + 0x60) + 0x10))();
  lVar6 = (**(code **)(*(longlong *)*puVar5 + 0x20))();
  if (*(byte *)(lVar6 + 0x31) < 2) {
    local_48._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_34 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_28 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_24 = 0;
    local_14 = 0;
    local_48._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_3c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_30 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_1c = 1;
    local_10 = 1;
    pFVar1 = *(FRHITexture **)(*(longlong *)this + 0x20);
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)(*(longlong *)this + 0x60) + 0x10))();
    TransitionAndCopyTexture
              ((FRHICommandList *)param_1,(FRHITexture *)*puVar5,pFVar1,
               (FRHICopyTextureInfo *)&local_48._s_0);
  }
  this_00 = *(FRHIBreadcrumbEventManual **)((longlong)this + 8);
  if (*(char *)&this_00[1].Node.Node == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRHIBreadcrumbEventManual::End(this_00,(FRHIComputeCommandList *)param_1);
  plVar2 = *(longlong **)((longlong)this + 8);
  if (plVar2 != (longlong *)0x0) {
    if ((char)plVar2[4] != '\0') {
      if (*plVar2 != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)plVar2[2]);
    }
    ::operator_delete(plVar2,0x28);
  }
  return;
}

// BeginDrawCanvasToRenderTarget @ 147d85d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget
          (UObject *param_1,UTextureRenderTarget2D *param_2,UCanvas **param_3,
          TVector2<double> *param_4,FDrawToRenderTargetContext *param_5)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  UWorld *this;
  FMessageLog *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FTextureResource *pFVar8;
  UCanvas *pUVar9;
  FTextureRenderTargetResource *pFVar10;
  FCanvas *this_00;
  FCanvas *pFVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  longlong *plVar14;
  FCanvas *pFVar15;
  undefined1 auStackY_138 [32];
  FName local_f8;
  TSharedRef<FTokenizedMessage,1> local_f0;
  TSharedRef<FTokenizedMessage,1> local_e0;
  FText local_d0;
  TSharedRef<FTokenizedMessage,1> local_c0;
  FText local_b0;
  FText local_a0;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  pvVar3 = ThreadLocalStoragePointer;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar15 = (FCanvas *)0x0;
  *param_3 = (UCanvas *)0x0;
  (param_4->field0_0x0)._s_0.X = 0.0;
  (param_4->field0_0x0)._s_0.Y = 0.0;
  uVar13 = (ulonglong)_tls_index;
  (param_5->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  param_5->Breadcrumb = (TOptional<FRHIBreadcrumbEventManual> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)pvVar3 + uVar13 * 8) + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar12 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar12,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this == (UWorld *)0x0) {
      ::FName::FName(&local_f8,"Blueprint");
      pFVar4 = FMessageLog::FMessageLog((FMessageLog *)local_88,&local_f8);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_e0,L"KismetRenderingLibrary",
                          L"BeginDrawCanvasToRenderTarget_InvalidWorldContextObject",
                          L"BeginDrawCanvasToRenderTarget: WorldContextObject is not valid.");
      FMessageLog::Warning(pFVar4,&local_f0,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f0.SharedReferenceCount.ReferenceController);
      if (local_e0.Object != (FTokenizedMessage *)0x0) {
        (**(code **)((local_e0.Object)->_padding_ + 0x10))();
      }
      FMessageLog::~FMessageLog((FMessageLog *)local_88);
    }
    else if (param_2 == (UTextureRenderTarget2D *)0x0) {
      ::FName::FName(&local_f8,"Blueprint");
      pFVar4 = FMessageLog::FMessageLog((FMessageLog *)local_88,&local_f8);
      if (param_1 == (UObject *)0x0) {
        ::FString::FString((FString *)&local_f0,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)param_1,(FString *)&local_f0,(UObject *)0x0);
      }
      pFVar5 = FText::FromString(&local_b0,(FString *)&local_f0);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_c0,L"KismetRenderingLibrary",
                          L"BeginDrawCanvasToRenderTarget_InvalidTextureRenderTarget",
                          L"BeginDrawCanvasToRenderTarget[{0}]: TextureRenderTarget must be non-null."
                         );
      pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_a0,pFVar6,Default);
      pFVar5 = FText::Format<FText>(&local_d0,pFVar7,pFVar5);
      FMessageLog::Warning(pFVar4,&local_e0,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.SharedReferenceCount.ReferenceController);
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      if (local_c0.Object != (FTokenizedMessage *)0x0) {
        (**(code **)((local_c0.Object)->_padding_ + 0x10))();
      }
      if (local_f0.Object != (FTokenizedMessage *)0x0) {
        FMemory::Free(local_f0.Object);
      }
      FMessageLog::~FMessageLog((FMessageLog *)local_88);
    }
    else {
      pFVar8 = UTexture::GetResource((UTexture *)param_2);
      if (pFVar8 == (FTextureResource *)0x0) {
        ::FName::FName(&local_f8,"Blueprint");
        pFVar4 = FMessageLog::FMessageLog((FMessageLog *)local_88,&local_f8);
        if (param_1 == (UObject *)0x0) {
          ::FString::FString((FString *)&local_f0,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)param_1,(FString *)&local_f0,(UObject *)0x0);
        }
        pFVar5 = FText::FromString(&local_a0,(FString *)&local_f0);
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_e0,L"KismetRenderingLibrary",
                            L"BeginDrawCanvasToRenderTarget_ReleasedTextureRenderTarget",
                            L"BeginDrawCanvasToRenderTarget[{0}]: render target has been released.")
        ;
        pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_b0,pFVar6,Default);
        pFVar5 = FText::Format<FText>(&local_d0,pFVar7,pFVar5);
        FMessageLog::Warning(pFVar4,&local_c0,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.SharedReferenceCount.ReferenceController);
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
        }
        if (local_e0.Object != (FTokenizedMessage *)0x0) {
          (**(code **)((local_e0.Object)->_padding_ + 0x10))();
        }
        if (local_f0.Object != (FTokenizedMessage *)0x0) {
          FMemory::Free(local_f0.Object);
        }
        FMessageLog::~FMessageLog((FMessageLog *)local_88);
      }
      else {
        UWorld::FlushDeferredParameterCollectionInstanceUpdates(this);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        (param_5->RenderTarget).field0_0x0.DebugPtr = param_2;
        pUVar9 = UWorld::GetCanvasForRenderingToTarget(this);
        *param_3 = pUVar9;
        iVar1 = param_2->SizeY;
        (param_4->field0_0x0)._s_0.X = (double)param_2->SizeX;
        (param_4->field0_0x0)._s_0.Y = (double)iVar1;
        pFVar10 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                            ((UTextureRenderTarget *)param_2);
        this_00 = ::operator_new(0x120);
        pFVar11 = pFVar15;
        if (this_00 != (FCanvas *)0x0) {
          pFVar11 = (FCanvas *)&pFVar10->_padding_;
          if (pFVar10 == (FTextureRenderTargetResource *)0x0) {
            pFVar11 = pFVar15;
          }
          pFVar11 = FCanvas::FCanvas(this_00,(FRenderTarget *)pFVar11,(FHitProxyConsumer *)0x0,this,
                                     (uint)(this->FeatureLevel).Value,CDM_ImmediateDrawing,
                                     __real_3f800000);
        }
        UCanvas::Init(*param_3,param_2->SizeX,param_2->SizeY,(FSceneView *)0x0,pFVar11);
        lVar2 = param_2->_padding_;
        pFVar11 = ::operator_new(0x28);
        if (pFVar11 != (FCanvas *)0x0) {
          *(undefined1 *)&(pFVar11->DepthSortKeyStack).ArrayNum = 0;
          pFVar15 = pFVar11;
        }
        param_5->Breadcrumb = (TOptional<FRHIBreadcrumbEventManual> *)pFVar15;
        local_88._0_8_ = (FScriptContainerElement *)0x0;
        local_88._40_8_ = FMemory::Malloc(0x20,8);
        *(undefined ***)local_88._40_8_ =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget'::`18'::<lambda_1>,1,1>
              ::_vftable_;
        *(longlong *)(local_88._40_8_ + 8) = (longlong)pFVar10;
        *(longlong *)(local_88._40_8_ + 0x10) = lVar2;
        *(FCanvas **)(local_88._40_8_ + 0x18) = pFVar15;
        if ((longlong *)(local_88._40_8_ + 8) != (longlong *)0x0) {
          local_88._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<`UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget'::__l18::<lambda_1>,void,FRHICommandListImmediate_&>
               ::Call;
        }
        FRenderCommandDispatcher::
        Enqueue<TRenderCommandTag<_UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget_::__l18::TSTR_FlushDeferredResourceUpdateCommand797>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
        if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
          plVar14 = (longlong *)(local_88 + 0x10);
          if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
            plVar14 = (longlong *)local_88._40_8_;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
    }
  }
  return;
}

// BreakSkinWeightInfo @ 147d885b0

void __cdecl
UKismetRenderingLibrary::BreakSkinWeightInfo
          (FSkelMeshSkinWeightInfo *param_1,int *param_2,uchar *param_3,int *param_4,uchar *param_5,
          int *param_6,uchar *param_7,int *param_8,uchar *param_9)

{
  *param_2 = 0;
  *param_3 = '\0';
  *param_4 = 0;
  *param_5 = '\0';
  *param_6 = 0;
  *param_7 = '\0';
  *param_8 = 0;
  *param_9 = '\0';
  return;
}

// CalculateProjectionMatrix @ 147d8c1c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TMatrix<double> * __cdecl
UKismetRenderingLibrary::CalculateProjectionMatrix
          (TMatrix<double> *__return_storage_ptr__,FMinimalViewInfo *param_1)

{
  FMinimalViewInfo::CalculateProjectionMatrix(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ClearRenderTarget2D @ 147d8e740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::ClearRenderTarget2D
          (UObject *param_1,UTextureRenderTarget2D *param_2,FLinearColor *param_3)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FTextureResource *pFVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  FTextureRenderTargetResource *local_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar3 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (param_2 != (UTextureRenderTarget2D *)0x0) {
    pFVar4 = UTexture::GetResource((UTexture *)param_2);
    if ((pFVar4 != (FTextureResource *)0x0) && (pUVar3 != (UWorld *)0x0)) {
      local_b8 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                           ((UTextureRenderTarget *)param_2);
      pcStack_b0 = *(code **)&param_3->field0_0x0;
      uStack_a8 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      local_98[0] = (code *)0x0;
      local_70 = FMemory::Malloc(0x20,8);
      *local_70 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UKismetRenderingLibrary::ClearRenderTarget2D'::`5'::<lambda_1>,1,1>
                           ::_vftable_;
      local_70[1] = (code *)local_b8;
      local_70[2] = pcStack_b0;
      local_70[3] = *(code **)((longlong)&param_3->field0_0x0 + 8);
      if (local_70 + 1 != (code **)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UKismetRenderingLibrary::ClearRenderTarget2D'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this = FRenderCommandList::GetInstanceTLS();
      if (this == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UKismetRenderingLibrary::ClearRenderTarget2D_::__l5::TSTR_ClearRTCommand64>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_00 = FRenderCommandList::GetRenderThread(this);
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_70 = (code **)0x0;
        local_68._16_8_ = local_88[0];
        local_68._24_8_ = local_88[1];
        local_68._32_8_ = local_88[2];
        local_98[0] = (code *)0x0;
        local_38 = 2;
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`UKismetRenderingLibrary::ClearRenderTarget2D'::__l5::TSTR_ClearRTCommand64>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar5);
        uVar7 = (ulonglong)local_38;
        if (2 < uVar7) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            ppcVar6 = (code **)(local_68 + 0x10);
            if (local_40 != (code **)0x0) {
              ppcVar6 = local_40;
            }
            (**(code **)(*ppcVar6 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        ppcVar6 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar6 = local_70;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
    }
  }
  return;
}

// ConvertRenderTargetToTexture2DArrayEditorOnly @ 147d92a10

void __cdecl
UKismetRenderingLibrary::ConvertRenderTargetToTexture2DArrayEditorOnly
          (UObject *param_1,UTextureRenderTarget2DArray *param_2,UTexture2DArray *param_3)

{
  FMessageLog *this;
  FText *pFVar1;
  FName FStackX_20;
  TSharedRef<FTokenizedMessage,1> TStack_58;
  FText FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_20,"Blueprint");
  this = FMessageLog::FMessageLog(&FStack_38,&FStackX_20);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_48,L"KismetRenderingLibrary",
                      L"ConvertRenderTargetToTexture_CannotCallAtRuntime",
                      L"ConvertRenderTarget: Can\'t convert render target to texture at run time. ")
  ;
  FMessageLog::Error(this,&TStack_58,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_58.SharedReferenceCount.ReferenceController);
  if (FStack_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_48.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// ConvertRenderTargetToTexture2DEditorOnly @ 147d92a20

void __cdecl
UKismetRenderingLibrary::ConvertRenderTargetToTexture2DEditorOnly
          (UObject *param_1,UTextureRenderTarget2D *param_2,UTexture2D *param_3)

{
  FMessageLog *this;
  FText *pFVar1;
  FName FStackX_20;
  TSharedRef<FTokenizedMessage,1> TStack_58;
  FText FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_20,"Blueprint");
  this = FMessageLog::FMessageLog(&FStack_38,&FStackX_20);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_48,L"KismetRenderingLibrary",
                      L"ConvertRenderTargetToTexture_CannotCallAtRuntime",
                      L"ConvertRenderTarget: Can\'t convert render target to texture at run time. ")
  ;
  FMessageLog::Error(this,&TStack_58,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_58.SharedReferenceCount.ReferenceController);
  if (FStack_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_48.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// ConvertRenderTargetToTextureCubeEditorOnly @ 147d92a30

void __cdecl
UKismetRenderingLibrary::ConvertRenderTargetToTextureCubeEditorOnly
          (UObject *param_1,UTextureRenderTargetCube *param_2,UTextureCube *param_3)

{
  FMessageLog *this;
  FText *pFVar1;
  FName FStackX_20;
  TSharedRef<FTokenizedMessage,1> TStack_58;
  FText FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_20,"Blueprint");
  this = FMessageLog::FMessageLog(&FStack_38,&FStackX_20);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_48,L"KismetRenderingLibrary",
                      L"ConvertRenderTargetToTexture_CannotCallAtRuntime",
                      L"ConvertRenderTarget: Can\'t convert render target to texture at run time. ")
  ;
  FMessageLog::Error(this,&TStack_58,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_58.SharedReferenceCount.ReferenceController);
  if (FStack_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_48.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// ConvertRenderTargetToTextureVolumeEditorOnly @ 147d92ad0

void __cdecl
UKismetRenderingLibrary::ConvertRenderTargetToTextureVolumeEditorOnly
          (UObject *param_1,UTextureRenderTargetVolume *param_2,UVolumeTexture *param_3)

{
  FMessageLog *this;
  FText *pFVar1;
  FName FStackX_20;
  TSharedRef<FTokenizedMessage,1> TStack_58;
  FText FStack_48;
  FMessageLog FStack_38;
  
  ::FName::FName(&FStackX_20,"Blueprint");
  this = FMessageLog::FMessageLog(&FStack_38,&FStackX_20);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_48,L"KismetRenderingLibrary",
                      L"ConvertRenderTargetToTexture_CannotCallAtRuntime",
                      L"ConvertRenderTarget: Can\'t convert render target to texture at run time. ")
  ;
  FMessageLog::Error(this,&TStack_58,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_58.SharedReferenceCount.ReferenceController);
  if (FStack_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_48.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&FStack_38);
  return;
}

// CreateRenderTarget2D @ 147d94610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextureRenderTarget2D * __cdecl
UKismetRenderingLibrary::CreateRenderTarget2D
          (UObject *param_1,int param_2,int param_3,ETextureRenderTargetFormat param_4,
          FLinearColor *param_5,bool param_6,bool param_7)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  UTextureRenderTarget2D *pUVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar6 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (((param_2 < 1) || (param_3 < 1)) || (pUVar6 == (UWorld *)0x0)) {
    pUVar8 = (UTextureRenderTarget2D *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar7);
    local_a8._8_8_ = param_1;
    pUVar8 = (UTextureRenderTarget2D *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar9 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (pUVar8 == (UTextureRenderTarget2D *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewRenderTarget2D",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                         ,0x55,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pUVar8 = (UTextureRenderTarget2D *)(*pcVar2)();
        return pUVar8;
      }
    }
    pUVar8->bAutoGenerateMips = '\0';
    puVar1 = (uint *)((longlong)&pUVar8->_padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
    (pUVar8->RenderTargetFormat).Value = (uchar)param_4;
    uVar3 = *(undefined8 *)&param_5->field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    pUVar8->field_0x174 = pUVar8->field_0x174 | param_6 * '\x02';
    puVar1 = (uint *)((longlong)&pUVar8->_padding_ + 4);
    *puVar1 = *puVar1 | (uint)param_7 * 2;
    *(undefined8 *)&(pUVar8->ClearColor).field0_0x0 = uVar3;
    *(undefined8 *)((longlong)&(pUVar8->ClearColor).field0_0x0 + 8) = uVar4;
    UTextureRenderTarget2D::InitAutoFormat(pUVar8,param_2,param_3);
    UTextureRenderTarget2D::UpdateResourceImmediate(pUVar8,true);
  }
  return pUVar8;
}

// CreateRenderTarget2DArray @ 147d94780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextureRenderTarget2DArray * __cdecl
UKismetRenderingLibrary::CreateRenderTarget2DArray
          (UObject *param_1,int param_2,int param_3,int param_4,ETextureRenderTargetFormat param_5,
          FLinearColor *param_6,bool param_7,bool param_8)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  EPixelFormat EVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  UTextureRenderTarget2DArray *pUVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar7 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((((param_2 < 1) || (param_3 < 1)) || (param_4 < 1)) || (pUVar7 == (UWorld *)0x0)) {
    pUVar9 = (UTextureRenderTarget2DArray *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar8);
    local_b8._8_8_ = param_1;
    pUVar9 = (UTextureRenderTarget2DArray *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar10 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar9 == (UTextureRenderTarget2DArray *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewRenderTarget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                         ,0x6a,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UTextureRenderTarget2DArray *)(*pcVar2)();
        return pUVar9;
      }
    }
    puVar1 = (uint *)((longlong)&pUVar9->_padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
    uVar3 = *(undefined8 *)&param_6->field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
    puVar1 = (uint *)((longlong)&pUVar9->_padding_ + 4);
    *puVar1 = *puVar1 | (uint)param_8 * 2;
    *(undefined8 *)&(pUVar9->ClearColor).field0_0x0 = uVar3;
    *(undefined8 *)((longlong)&(pUVar9->ClearColor).field0_0x0 + 8) = uVar4;
    EVar6 = GetPixelFormatFromRenderTargetFormat(param_5);
    UTextureRenderTarget2DArray::Init(pUVar9,param_2,param_3,param_4,EVar6);
    UTextureRenderTarget2DArray::UpdateResourceImmediate(pUVar9,true);
  }
  return pUVar9;
}

// CreateRenderTargetVolume @ 147d948e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTextureRenderTargetVolume * __cdecl
UKismetRenderingLibrary::CreateRenderTargetVolume
          (UObject *param_1,int param_2,int param_3,int param_4,ETextureRenderTargetFormat param_5,
          FLinearColor *param_6,bool param_7,bool param_8)

{
  uint *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  EPixelFormat EVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  UTextureRenderTargetVolume *pUVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar7 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((((param_2 < 1) || (param_3 < 1)) || (param_4 < 1)) || (pUVar7 == (UWorld *)0x0)) {
    pUVar9 = (UTextureRenderTargetVolume *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar8);
    local_b8._8_8_ = param_1;
    pUVar9 = (UTextureRenderTargetVolume *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar10 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar9 == (UTextureRenderTargetVolume *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewRenderTarget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                         ,0x7c,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pUVar9 = (UTextureRenderTargetVolume *)(*pcVar2)();
        return pUVar9;
      }
    }
    puVar1 = (uint *)((longlong)&pUVar9->_padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
    uVar3 = *(undefined8 *)&param_6->field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
    puVar1 = (uint *)((longlong)&pUVar9->_padding_ + 4);
    *puVar1 = *puVar1 | (uint)param_8 * 2;
    *(undefined8 *)&(pUVar9->ClearColor).field0_0x0 = uVar3;
    *(undefined8 *)((longlong)&(pUVar9->ClearColor).field0_0x0 + 8) = uVar4;
    EVar6 = GetPixelFormatFromRenderTargetFormat(param_5);
    UTextureRenderTargetVolume::Init(pUVar9,param_2,param_3,param_4,EVar6);
    UTextureRenderTargetVolume::UpdateResourceImmediate(pUVar9,true);
  }
  return pUVar9;
}

// DrawMaterialToRenderTarget @ 147d98700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::DrawMaterialToRenderTarget
          (UObject *param_1,UTextureRenderTarget2D *param_2,UMaterialInterface *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  UWorld *this;
  FMessageLog *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FTextureResource *pFVar11;
  FTextureRenderTargetResource *pFVar12;
  UCanvas *pUVar13;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar14;
  wchar_t *pwVar15;
  undefined ***pppuVar16;
  FRenderTarget *pFVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStackY_4d8 [32];
  FRHIBreadcrumbScope_GameThread local_498;
  char local_490;
  FName local_488;
  FName local_480;
  FName local_478;
  FName local_470;
  UCanvas *local_468;
  FString local_460;
  FString local_450;
  FString local_440;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>_const_*,std::tuple<FName>_>
  local_430;
  TSharedRef<FTokenizedMessage,1> local_420;
  FText local_410;
  TSharedRef<FTokenizedMessage,1> local_400;
  FText local_3f0;
  FText local_3e0;
  TSharedRef<FTokenizedMessage,1> local_3d0;
  FText local_3c0;
  FText local_3b0;
  TSharedRef<FTokenizedMessage,1> local_3a0;
  FText local_390;
  FText local_380;
  TVector2<double>_u_0 local_368;
  TVector2<double>_u_0 local_358;
  TVector2<double>_u_0 local_348;
  TVector2<double>_u_0 local_338;
  TVector2<double>_u_0 local_328;
  uint uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  FText local_2f8;
  FTextFormat local_2e8;
  FText local_2d8;
  FTextFormat local_2c8;
  FText local_2b8;
  FTextFormat local_2a8;
  FMessageLog local_298;
  FMessageLog local_268;
  FMessageLog local_238;
  FMessageLog local_208;
  code *local_1d8 [2];
  undefined **local_1c8;
  FTextureRenderTargetResource *pFStack_1c0;
  undefined8 local_1b8;
  undefined ***local_1b0;
  undefined1 local_1a8 [16];
  undefined **local_198;
  FTextureRenderTargetResource *pFStack_190;
  undefined8 local_188;
  undefined ***local_180;
  byte local_178;
  FCanvas local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId166,"DrawMaterialToRenderTarget",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
               ,0xa6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId166);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar15 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar15,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this == (UWorld *)0x0) {
      ::FName::FName(&local_488,"Blueprint");
      pFVar7 = FMessageLog::FMessageLog(&local_298,&local_488);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_410,L"KismetRenderingLibrary",
                          L"DrawMaterialToRenderTarget_InvalidWorldContextObject",
                          L"DrawMaterialToRenderTarget: WorldContextObject is not valid.");
      FMessageLog::Warning(pFVar7,&local_420,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_420.SharedReferenceCount.ReferenceController);
      if (local_410.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_410.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_298);
    }
    else if (param_3 == (UMaterialInterface *)0x0) {
      ::FName::FName(&local_480,"Blueprint");
      pFVar7 = FMessageLog::FMessageLog(&local_268,&local_480);
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_460,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_460,(UObject *)0x0);
      }
      pFVar8 = FText::FromString(&local_2f8,&local_460);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_3e0,L"KismetRenderingLibrary",
                          L"DrawMaterialToRenderTarget_InvalidMaterial",
                          L"DrawMaterialToRenderTarget[{0}]: Material must be non-null.");
      pFVar10 = FTextFormat::FTextFormat(&local_2e8,pFVar9,Default);
      pFVar8 = FText::Format<FText>(&local_3f0,pFVar10,pFVar8);
      FMessageLog::Warning(pFVar7,&local_400,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_400.SharedReferenceCount.ReferenceController);
      if (local_3f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3f0.TextData.Reference + 0x10))();
      }
      if (local_3e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3e0.TextData.Reference + 0x10))();
      }
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_268);
    }
    else if (param_2 == (UTextureRenderTarget2D *)0x0) {
      ::FName::FName(&local_478,"Blueprint");
      pFVar7 = FMessageLog::FMessageLog(&local_238,&local_478);
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_450,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_450,(UObject *)0x0);
      }
      pFVar8 = FText::FromString(&local_2d8,&local_450);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_3b0,L"KismetRenderingLibrary",
                          L"DrawMaterialToRenderTarget_InvalidTextureRenderTarget",
                          L"DrawMaterialToRenderTarget[{0}]: TextureRenderTarget must be non-null.")
      ;
      pFVar10 = FTextFormat::FTextFormat(&local_2c8,pFVar9,Default);
      pFVar8 = FText::Format<FText>(&local_3c0,pFVar10,pFVar8);
      FMessageLog::Warning(pFVar7,&local_3d0,pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3d0.SharedReferenceCount.ReferenceController);
      if (local_3c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3c0.TextData.Reference + 0x10))();
      }
      if (local_3b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3b0.TextData.Reference + 0x10))();
      }
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_238);
    }
    else {
      pFVar11 = UTexture::GetResource((UTexture *)param_2);
      if (pFVar11 == (FTextureResource *)0x0) {
        ::FName::FName(&local_470,"Blueprint");
        pFVar7 = FMessageLog::FMessageLog(&local_208,&local_470);
        if (param_1 == (UObject *)0x0) {
          ::FString::FString(&local_440,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_440,(UObject *)0x0);
        }
        pFVar8 = FText::FromString(&local_2b8,&local_440);
        pFVar9 = FText::AsLocalizable_Advanced_LocText
                           (&local_380,L"KismetRenderingLibrary",
                            L"DrawMaterialToRenderTarget_ReleasedTextureRenderTarget",
                            L"DrawMaterialToRenderTarget[{0}]: render target has been released.");
        pFVar10 = FTextFormat::FTextFormat(&local_2a8,pFVar9,Default);
        pFVar8 = FText::Format<FText>(&local_390,pFVar10,pFVar8);
        FMessageLog::Warning(pFVar7,&local_3a0,pFVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3a0.SharedReferenceCount.ReferenceController);
        if (local_390.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_390.TextData.Reference + 0x10))();
        }
        if (local_380.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_380.TextData.Reference + 0x10))();
        }
        if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_440.Data.AllocatorInstance.Data);
        }
        FMessageLog::~FMessageLog(&local_208);
      }
      else {
        UMaterialInterface::EnsureIsComplete(param_3);
        UWorld::FlushDeferredParameterCollectionInstanceUpdates(this);
        pFVar12 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                            ((UTextureRenderTarget *)param_2);
        pUVar13 = UWorld::GetCanvasForDrawMaterialToRenderTarget(this);
        pFVar17 = (FRenderTarget *)&pFVar12->_padding_;
        if (pFVar12 == (FTextureRenderTargetResource *)0x0) {
          pFVar17 = (FRenderTarget *)0x0;
        }
        local_468 = pUVar13;
        FCanvas::FCanvas(&local_168,pFVar17,(FHitProxyConsumer *)0x0,this,
                         (uint)(this->FeatureLevel).Value,CDM_DeferDrawing,__real_3f800000);
        UCanvas::Init(pUVar13,param_2->SizeX,param_2->SizeY,(FSceneView *)0x0,&local_168);
        lVar4 = param_2->_padding_;
        local_490 = '\0';
        if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          local_308 = 0;
          uStack_304 = 0;
          ::Desc._12_8_ = ZEXT48(uStack_30c);
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_DrawMaterialToR;
          ::Desc._padding_ = (longlong)u_DrawMaterialToR;
          ::Desc._padding_._0_4_ = 0xd4;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(``UKismetRenderingLibrary::DrawMaterialToRenderTarget'::__l28::<lambda_1>::
                 operator()<FName>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_430._Myfirst._Val = &::Desc;
        local_430._padding_ = lVar4;
        if (local_490 != '\0') {
          FRHIBreadcrumbScope_GameThread::~FRHIBreadcrumbScope_GameThread(&local_498);
        }
        FRHIBreadcrumbScope_GameThread::
        FRHIBreadcrumbScope_GameThread<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>,FName>
                  (&local_498,&local_430);
        local_490 = '\x01';
        local_1c8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UKismetRenderingLibrary::DrawMaterialToRenderTarget'::`23'::<lambda_2>,1,0>
                     ::_vftable_;
        local_1d8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`UKismetRenderingLibrary::DrawMaterialToRenderTarget'::__l23::<lambda_2>,void,FRHICommandListImmediate_&>
                       ::Call;
        local_1b0 = (undefined ***)0x0;
        pFStack_1c0 = pFVar12;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_UKismetRenderingLibrary::DrawMaterialToRenderTarget_::__l23::TSTR_FlushDeferredResourceUpdateCommand214>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_1d8);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_1a8._0_8_ = local_1d8[0];
          local_180 = local_1b0;
          local_198 = local_1c8;
          pFStack_190 = pFStack_1c0;
          local_188 = local_1b8;
          local_1d8[0] = (code *)0x0;
          local_178 = 2;
          pFVar14 = (FRenderCommandTag *)
                    TRenderCommandTag<`UKismetRenderingLibrary::DrawMaterialToRenderTarget'::__l23::TSTR_FlushDeferredResourceUpdateCommand214>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_1a8,pFVar14);
          uVar18 = (ulonglong)local_178;
          if ((2 < uVar18) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_1a8._0_8_ != (code *)0x0) {
              pppuVar16 = (undefined ***)(local_1a8 + 0x10);
              if (local_180 != (undefined ***)0x0) {
                pppuVar16 = local_180;
              }
              (*(code *)(*pppuVar16)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18])(local_1a8);
          }
        }
        if (local_1d8[0] != (code *)0x0) {
          pppuVar16 = &local_1c8;
          if (local_1b0 != (undefined ***)0x0) {
            pppuVar16 = local_1b0;
          }
          (*(code *)(*pppuVar16)[2])();
        }
        pUVar13 = local_468;
        local_368._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_368._s_0.Y = _UNK_150689678;
        local_358 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
        local_348._s_0.X = 0.0;
        local_348._s_0.Y = 0.0;
        uVar1 = param_2->SizeX;
        uVar2 = param_2->SizeY;
        local_338._s_0.X = (double)(int)uVar1;
        local_338._s_0.Y = (double)(int)uVar2;
        local_328._s_0.X = 0.0;
        local_328._s_0.Y = 0.0;
        UCanvas::K2_DrawMaterial
                  (local_468,param_3,(TVector2<double> *)&local_328._s_0,
                   (TVector2<double> *)&local_338._s_0,(TVector2<double> *)&local_348._s_0,
                   (TVector2<double> *)&local_358._s_0,0.0,(TVector2<double> *)&local_368._s_0);
        FCanvas::Flush_GameThread(&local_168,false);
        pUVar13->Canvas = (FCanvas *)0x0;
        UTextureRenderTarget2D::UpdateResourceImmediate(param_2,false);
        if (local_490 != '\0') {
          FRHIBreadcrumbScope_GameThread::~FRHIBreadcrumbScope_GameThread(&local_498);
        }
        FCanvas::~FCanvas(&local_168);
      }
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EnablePathTracing @ 147d99800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UKismetRenderingLibrary::EnablePathTracing(bool param_1)

{
  UGameViewportClient *pUVar1;
  longlong lVar2;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0)) {
    lVar2 = (**(code **)(pUVar1->_padding_ + 0x38))(&pUVar1->_padding_);
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) & 0xfffffffe;
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | (uint)param_1;
    }
  }
  return;
}

// EndDrawCanvasToRenderTarget @ 147d99850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::EndDrawCanvasToRenderTarget
          (UObject *param_1,FDrawToRenderTargetContext *param_2)

{
  FCanvas *this;
  UTextureRenderTarget2D *this_00;
  code *pcVar1;
  bool bVar2;
  UWorld *this_01;
  UCanvas *pUVar3;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar4;
  FMessageLog *pFVar5;
  FText *pFVar6;
  wchar_t *pwVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_168 [32];
  FName local_148;
  FName local_140;
  TSharedRef<FTokenizedMessage,1> local_138;
  FText local_128;
  TSharedRef<FTokenizedMessage,1> local_118;
  FText local_108;
  FMessageLog local_f8;
  FMessageLog local_c8;
  code *local_98 [2];
  undefined **local_88;
  FTextureRenderTargetResource *pFStack_80;
  TOptional<FRHIBreadcrumbEventManual> *local_78;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FTextureRenderTargetResource *pFStack_50;
  TOptional<FRHIBreadcrumbEventManual> *local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar7 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar7,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    this_01 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    if (this_01 == (UWorld *)0x0) {
      ::FName::FName(&local_140,"Blueprint");
      pFVar5 = FMessageLog::FMessageLog(&local_c8,&local_140);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_108,L"KismetRenderingLibrary",
                          L"EndDrawCanvasToRenderTarget_InvalidWorldContextObject",
                          L"EndDrawCanvasToRenderTarget: WorldContextObject is not valid.");
      FMessageLog::Warning(pFVar5,&local_118,pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_c8);
    }
    else {
      pUVar3 = UWorld::GetCanvasForRenderingToTarget(this_01);
      if (pUVar3->Canvas != (FCanvas *)0x0) {
        FCanvas::Flush_GameThread(pUVar3->Canvas,false);
        this = pUVar3->Canvas;
        if (this != (FCanvas *)0x0) {
          FCanvas::~FCanvas(this);
          ::operator_delete(this,0x120);
        }
        pUVar3->Canvas = (FCanvas *)0x0;
      }
      this_00 = (param_2->RenderTarget).field0_0x0.DebugPtr;
      if (this_00 == (UTextureRenderTarget2D *)0x0) {
        if ((param_2->Breadcrumb != (TOptional<FRHIBreadcrumbEventManual> *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Context.Breadcrumb",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                               ,0x363,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::FName::FName(&local_148,"Blueprint");
        pFVar5 = FMessageLog::FMessageLog(&local_f8,&local_148);
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_128,L"KismetRenderingLibrary",
                            L"EndDrawCanvasToRenderTarget_InvalidContext",
                            L"EndDrawCanvasToRenderTarget: Context must be valid.");
        FMessageLog::Warning(pFVar5,&local_138,pFVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_138.SharedReferenceCount.ReferenceController);
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        FMessageLog::~FMessageLog(&local_f8);
      }
      else {
        pFStack_80 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                               ((UTextureRenderTarget *)this_00);
        local_78 = param_2->Breadcrumb;
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UKismetRenderingLibrary::EndDrawCanvasToRenderTarget'::__l14::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
        local_70 = (undefined ***)0x0;
        local_88 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UKismetRenderingLibrary::EndDrawCanvasToRenderTarget'::`14'::<lambda_1>,1,0>
                    ::_vftable_;
        this_02 = FRenderCommandList::GetInstanceTLS();
        if (this_02 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_UKismetRenderingLibrary::EndDrawCanvasToRenderTarget_::__l14::TSTR_CanvasRenderTargetResolveCommand839>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
        }
        else {
          this_03 = FRenderCommandList::GetRenderThread(this_02);
          local_68[0] = local_98[0];
          local_40 = local_70;
          local_58 = local_88;
          pFStack_50 = pFStack_80;
          local_48 = local_78;
          local_98[0] = (code *)0x0;
          local_38 = 2;
          pFVar4 = (FRenderCommandTag *)
                   TRenderCommandTag<`UKismetRenderingLibrary::EndDrawCanvasToRenderTarget'::__l14::TSTR_CanvasRenderTargetResolveCommand839>
                   ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_68,pFVar4);
          uVar9 = (ulonglong)local_38;
          if ((2 < uVar9) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar9] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if (local_68[0] != (code *)0x0) {
              pppuVar8 = (undefined ***)(local_68 + 2);
              if (local_40 != (undefined ***)0x0) {
                pppuVar8 = local_40;
              }
              (*(code *)(*pppuVar8)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar9])
                      ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68);
          }
        }
        if (local_98[0] != (code *)0x0) {
          pppuVar8 = &local_88;
          if (local_70 != (undefined ***)0x0) {
            pppuVar8 = local_70;
          }
          (*(code *)(*pppuVar8)[2])();
        }
        (param_2->RenderTarget).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
        param_2->Breadcrumb = (TOptional<FRHIBreadcrumbEventManual> *)0x0;
      }
    }
  }
  return;
}

// ExportRenderTarget @ 147d9b0d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::ExportRenderTarget
          (UObject *param_1,UTextureRenderTarget2D *param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  FMessageLog *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FTextureResource *pFVar8;
  IFileManager *pIVar9;
  longlong *plVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  wchar_t *_Str;
  FName local_res10;
  FName local_res18;
  FString local_1c8;
  TSharedRef<FTokenizedMessage,1> local_1b8;
  TSharedRef<FTokenizedMessage,1> local_1a8;
  FText local_198;
  TSharedRef<FTokenizedMessage,1> local_188;
  FText local_178;
  FString local_168;
  FText local_158;
  FMessageLog local_148;
  FMessageLog local_118;
  undefined1 local_e8 [176];
  int local_38;
  
  pwVar13 = L"";
  if ((param_4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  if ((param_3->Data).ArrayNum == 0) {
    local_148.Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_148.Messages.AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
  }
  iVar2 = 0;
  local_148.Messages.ArrayNum = iVar2;
  if (local_148.Messages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    sVar3 = wcslen((wchar_t *)local_148.Messages.AllocatorInstance.Data);
    local_148.Messages.ArrayNum = (int)sVar3;
  }
  local_148.MessageLog.Object = (IMessageLog *)_Str;
  if ((IMessageLog *)_Str != (IMessageLog *)0x0) {
    sVar3 = wcslen(_Str);
    iVar2 = (int)sVar3;
  }
  local_148.MessageLog.SharedReferenceCount.ReferenceController._0_4_ = iVar2;
  FPaths::CombineInternal(&local_168,(TStringView<wchar_t> *)&local_148,2);
  FText::FText(&local_178);
  FPaths::ValidatePath(&local_168,&local_178);
  if (param_2 == (UTextureRenderTarget2D *)0x0) {
    ::FName::FName(&local_res10,"Blueprint");
    pFVar4 = FMessageLog::FMessageLog(&local_148,&local_res10);
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_1c8,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_1c8,(UObject *)0x0);
    }
    pFVar5 = FText::FromString((FText *)&local_1a8,&local_1c8);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_1b8,L"KismetRenderingLibrary",
                        L"ExportRenderTarget_InvalidTextureRenderTarget",
                        L"ExportRenderTarget[{0}]: TextureRenderTarget must be non-null.");
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_158,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_198,pFVar7,pFVar5);
    FMessageLog::Warning(pFVar4,&local_188,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_188.SharedReferenceCount.ReferenceController._4_4_,
                        (uint)local_188.SharedReferenceCount.ReferenceController));
    if ((FTokenizedMessage *)local_198.TextData.Reference != (FTokenizedMessage *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
LAB_147d9b24f:
    if (local_1b8.Object != (FTokenizedMessage *)0x0) {
      (**(code **)((local_1b8.Object)->_padding_ + 0x10))();
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pFVar4 = &local_148;
  }
  else {
    pFVar8 = UTexture::GetResource((UTexture *)param_2);
    if (pFVar8 == (FTextureResource *)0x0) {
      ::FName::FName(&local_res10,"Blueprint");
      pFVar4 = FMessageLog::FMessageLog(&local_148,&local_res10);
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_1c8,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_1c8,(UObject *)0x0);
      }
      pFVar5 = FText::FromString(&local_158,&local_1c8);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_188,L"KismetRenderingLibrary",
                          L"ExportRenderTarget_ReleasedTextureRenderTarget",
                          L"ExportRenderTarget[{0}]: render target has been released.");
      pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_1a8,pFVar6,Default);
      pFVar5 = FText::Format<FText>(&local_198,pFVar7,pFVar5);
      FMessageLog::Warning(pFVar4,&local_1b8,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      local_1b8.Object = local_188.Object;
      if ((FTokenizedMessage *)local_198.TextData.Reference != (FTokenizedMessage *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
        local_1b8.Object = local_188.Object;
      }
      goto LAB_147d9b24f;
    }
    bVar1 = FText::IsEmpty(&local_178);
    if (bVar1) {
      if ((param_4->Data).ArrayNum < 2) {
        ::FName::FName(&local_res10,"Blueprint");
        pFVar4 = FMessageLog::FMessageLog(&local_118,&local_res10);
        if (param_1 == (UObject *)0x0) {
          ::FString::FString(&local_1c8,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_1c8,(UObject *)0x0);
        }
        pFVar5 = FText::FromString((FText *)&local_148,&local_1c8);
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_198,L"KismetRenderingLibrary",
                            L"ExportRenderTarget_InvalidFileName",
                            L"ExportRenderTarget[{0}]: FileName must be non-empty.");
        pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_158,pFVar6,Default);
        pFVar5 = FText::Format<FText>((FText *)&local_1b8,pFVar7,pFVar5);
        FMessageLog::Warning(pFVar4,&local_1a8,pFVar5);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1a8.SharedReferenceCount.ReferenceController);
        local_1a8.Object = (FTokenizedMessage *)local_198.TextData.Reference;
        if (local_1b8.Object != (FTokenizedMessage *)0x0) {
          (**(code **)((local_1b8.Object)->_padding_ + 0x10))();
          local_1a8.Object = (FTokenizedMessage *)local_198.TextData.Reference;
        }
        goto LAB_147d9b460;
      }
      pIVar9 = IFileManager::Get();
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar12.Data = local_168.Data.AllocatorInstance.Data;
      }
      plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar12.Data);
      if (plVar10 != (longlong *)0x0) {
        FBufferArchive::FBufferArchive((FBufferArchive *)local_e8);
        if ((param_2->RenderTargetFormat).Value == '\x06') {
          pFVar11 = FPaths::GetExtension((FString *)&local_1a8,&local_168,false);
          if ((pFVar11->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          iVar2 = FGenericPlatformStricmp::Stricmp(pwVar13,L"HDR");
          if (local_1a8.Object != (FTokenizedMessage *)0x0) {
            FMemory::Free(local_1a8.Object);
          }
          if (iVar2 == 0) {
            bVar1 = FImageUtils::ExportRenderTarget2DAsHDR(param_2,(FArchive *)local_e8);
          }
          else {
            bVar1 = FImageUtils::ExportRenderTarget2DAsEXR(param_2,(FArchive *)local_e8);
          }
        }
        else {
          bVar1 = FImageUtils::ExportRenderTarget2DAsPNG(param_2,(FArchive *)local_e8);
        }
        if (bVar1 != false) {
          (**(code **)(*plVar10 + 0x188))(plVar10,local_e8._168_8_,(longlong)local_38);
        }
        (**(code **)*plVar10)(plVar10,1);
        if ((void *)local_e8._168_8_ != (void *)0x0) {
          FMemory::Free((void *)local_e8._168_8_);
        }
        FArchive::~FArchive((FArchive *)local_e8);
        goto LAB_147d9b6bd;
      }
      ::FName::FName(&local_res10,"Blueprint");
      pFVar4 = FMessageLog::FMessageLog(&local_118,&local_res10);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_1b8,L"KismetRenderingLibrary",
                          L"ExportRenderTarget_FileWriterFailedToCreate",
                          L"ExportRenderTarget: FileWrite failed to create.");
      FMessageLog::Warning(pFVar4,&local_1a8,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      if (local_1b8.Object != (FTokenizedMessage *)0x0) {
        (**(code **)((local_1b8.Object)->_padding_ + 0x10))();
      }
    }
    else {
      ::FName::FName(&local_res18,"Blueprint");
      pFVar4 = FMessageLog::FMessageLog(&local_118,&local_res18);
      local_188.Object = (FTokenizedMessage *)local_178.TextData.Reference;
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 8))
                  (local_178.TextData.Reference,&local_res10);
      }
      local_188.SharedReferenceCount.ReferenceController._0_4_ = local_178.Flags;
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_1c8,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_1c8,(UObject *)0x0);
      }
      pFVar5 = FText::FromString(&local_158,&local_1c8);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_1a8,L"KismetRenderingLibrary",
                          L"ExportRenderTarget_InvalidFilePath",
                          L"ExportRenderTarget[{0}]: Invalid file path provided: \'{1}\'");
      pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_148,pFVar6,Default);
      pFVar5 = FText::Format<FText,FText>(&local_198,pFVar7,pFVar5,(FText *)&local_188);
      FMessageLog::Warning(pFVar4,&local_1b8,pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      if ((FTokenizedMessage *)local_198.TextData.Reference != (FTokenizedMessage *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
      }
LAB_147d9b460:
      if (local_1a8.Object != (FTokenizedMessage *)0x0) {
        (**(code **)((local_1a8.Object)->_padding_ + 0x10))();
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = &local_118;
  }
  FMessageLog::~FMessageLog(pFVar4);
LAB_147d9b6bd:
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return;
}

// ExportTexture2D @ 147d9b700

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::ExportTexture2D
          (UObject *param_1,UTexture2D *param_2,FString *param_3,FString *param_4)

{
  bool bVar1;
  size_t sVar2;
  IFileManager *pIVar3;
  longlong *plVar4;
  FMessageLog *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  wchar_t *_Str;
  int iVar8;
  ForAnyElementType FVar9;
  FName local_res10;
  FName local_res18 [2];
  FText local_1a8;
  TSharedRef<FTokenizedMessage,1> local_198;
  TSharedRef<FTokenizedMessage,1> local_188;
  FString local_178;
  FText local_168;
  TSharedRef<FTokenizedMessage,1> local_158;
  FMessageLog local_148;
  FMessageLog local_118;
  undefined1 local_e8 [176];
  int local_38;
  
  if ((param_4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  if ((param_3->Data).ArrayNum == 0) {
    local_148.Messages.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_148.Messages.AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
  }
  iVar8 = 0;
  local_148.Messages.ArrayNum = iVar8;
  if (local_148.Messages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen((wchar_t *)local_148.Messages.AllocatorInstance.Data);
    local_148.Messages.ArrayNum = (int)sVar2;
  }
  local_148.MessageLog.Object = (IMessageLog *)_Str;
  if ((IMessageLog *)_Str != (IMessageLog *)0x0) {
    sVar2 = wcslen(_Str);
    iVar8 = (int)sVar2;
  }
  local_148.MessageLog.SharedReferenceCount.ReferenceController._0_4_ = iVar8;
  FPaths::CombineInternal(&local_178,(TStringView<wchar_t> *)&local_148,2);
  FText::FText(&local_1a8);
  FPaths::ValidatePath(&local_178,&local_1a8);
  if (param_2 == (UTexture2D *)0x0) {
    ::FName::FName(&local_res10,"Blueprint");
    pFVar5 = FMessageLog::FMessageLog(&local_148,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_198,L"KismetRenderingLibrary",
                        L"ExportTexture2D_InvalidTextureRenderTarget",
                        L"ExportTexture2D: TextureRenderTarget must be non-null.");
    FMessageLog::Warning(pFVar5,&local_188,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    local_188.Object = local_198.Object;
  }
  else {
    if ((param_4->Data).ArrayNum < 2) goto LAB_147d9b92d;
    bVar1 = FText::IsEmpty(&local_1a8);
    if (!bVar1) goto LAB_147d9b92d;
    pIVar3 = IFileManager::Get();
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_178.Data.ArrayNum != 0) {
      FVar9.Data = local_178.Data.AllocatorInstance.Data;
    }
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,FVar9.Data,0);
    if (plVar4 != (longlong *)0x0) {
      FBufferArchive::FBufferArchive((FBufferArchive *)local_e8);
      bVar1 = FImageUtils::ExportTexture2DAsHDR(param_2,(FArchive *)local_e8);
      if (bVar1) {
        (**(code **)(*plVar4 + 0x188))(plVar4,local_e8._168_8_,(longlong)local_38);
      }
      (**(code **)*plVar4)(plVar4,1);
      if ((void *)local_e8._168_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._168_8_);
      }
      FArchive::~FArchive((FArchive *)local_e8);
      goto LAB_147d9b92d;
    }
    ::FName::FName(&local_res10,"Blueprint");
    pFVar5 = FMessageLog::FMessageLog(&local_148,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_188,L"KismetRenderingLibrary",
                        L"ExportTexture2D_FileWriterFailedToCreate",
                        L"ExportTexture2D: FileWrite failed to create.");
    FMessageLog::Warning(pFVar5,&local_198,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_198.SharedReferenceCount.ReferenceController._4_4_,
                        (uint)local_198.SharedReferenceCount.ReferenceController));
  }
  if (local_188.Object != (FTokenizedMessage *)0x0) {
    (**(code **)((local_188.Object)->_padding_ + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_148);
LAB_147d9b92d:
  bVar1 = FText::IsEmpty(&local_1a8);
  if (!bVar1) {
    ::FName::FName(local_res18,"Blueprint");
    pFVar5 = FMessageLog::FMessageLog(&local_118,local_res18);
    local_198.Object = (FTokenizedMessage *)local_1a8.TextData.Reference;
    if (local_1a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a8.TextData.Reference + 8))
                (local_1a8.TextData.Reference,&local_res10);
    }
    local_198.SharedReferenceCount.ReferenceController._0_4_ = local_1a8.Flags;
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_158,L"KismetRenderingLibrary",
                        L"ExportTexture2D_InvalidFilePath",
                        L"ExportTexture2D: Invalid file path provided: \'{0}\'");
    pFVar7 = FTextFormat::FTextFormat((FTextFormat *)&local_148,pFVar6,Default);
    pFVar6 = FText::Format<FText>(&local_168,pFVar7,(FText *)&local_198);
    FMessageLog::Warning(pFVar5,&local_188,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    if (local_158.Object != (FTokenizedMessage *)0x0) {
      (**(code **)((local_158.Object)->_padding_ + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_118);
  }
  if ((param_4->Data).ArrayNum < 2) {
    ::FName::FName(&local_res10,"Blueprint");
    pFVar5 = FMessageLog::FMessageLog(&local_118,&local_res10);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_168,L"KismetRenderingLibrary",L"ExportTexture2D_InvalidFileName",
                        L"ExportTexture2D: FileName must be non-empty.");
    FMessageLog::Warning(pFVar5,&local_158,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_118);
  }
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147da8230

UClass * __cdecl UKismetRenderingLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetRenderingLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetRenderingLibrary",
               &Z_Registration_Info_UClass_UKismetRenderingLibrary.InnerSingleton,
               StaticRegisterNativesUKismetRenderingLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetRenderingLibrary>,
               InternalVTableHelperCtorCaller<UKismetRenderingLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetRenderingLibrary.InnerSingleton;
}

// ImportBufferAsTexture2D @ 147dab300

UTexture2D * __cdecl
UKismetRenderingLibrary::ImportBufferAsTexture2D
          (UObject *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  UTexture2D *pUVar1;
  
  pUVar1 = FImageUtils::ImportBufferAsTexture2D(param_2);
  return pUVar1;
}

// ImportFileAsTexture2D @ 147dab310

UTexture2D * __cdecl
UKismetRenderingLibrary::ImportFileAsTexture2D(UObject *param_1,FString *param_2)

{
  UTexture2D *pUVar1;
  
  pUVar1 = FImageUtils::ImportFileAsTexture2D(param_2);
  return pUVar1;
}

// MakeSkinWeightInfo @ 147db5770

FSkelMeshSkinWeightInfo * __cdecl
UKismetRenderingLibrary::MakeSkinWeightInfo
          (FSkelMeshSkinWeightInfo *__return_storage_ptr__,int param_1,uchar param_2,int param_3,
          uchar param_4,int param_5,uchar param_6,int param_7,uchar param_8)

{
  __return_storage_ptr__->Bones[4] = 0;
  __return_storage_ptr__->Bones[5] = 0;
  __return_storage_ptr__->Bones[6] = 0;
  __return_storage_ptr__->Bones[7] = 0;
  __return_storage_ptr__->Bones[8] = 0;
  __return_storage_ptr__->Bones[9] = 0;
  __return_storage_ptr__->Bones[10] = 0;
  __return_storage_ptr__->Bones[0xb] = 0;
  __return_storage_ptr__->Weights[4] = '\0';
  __return_storage_ptr__->Weights[5] = '\0';
  __return_storage_ptr__->Weights[6] = '\0';
  __return_storage_ptr__->Weights[7] = '\0';
  __return_storage_ptr__->Weights[8] = '\0';
  __return_storage_ptr__->Weights[9] = '\0';
  __return_storage_ptr__->Weights[10] = '\0';
  __return_storage_ptr__->Weights[0xb] = '\0';
  __return_storage_ptr__->Weights[1] = param_4;
  __return_storage_ptr__->Bones[2] = param_5;
  __return_storage_ptr__->Weights[2] = param_6;
  __return_storage_ptr__->Bones[3] = param_7;
  __return_storage_ptr__->Weights[3] = param_8;
  __return_storage_ptr__->Bones[0] = param_1;
  __return_storage_ptr__->Weights[0] = param_2;
  __return_storage_ptr__->Bones[1] = param_3;
  return __return_storage_ptr__;
}

// NumPrecompilingPSOsRemaining @ 147db85a0

int __cdecl UKismetRenderingLibrary::NumPrecompilingPSOsRemaining(void)

{
  TConsoleVariableData<float> *pTVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  atomic<bool> aVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  pTVar1 = CVarPSOFileCacheMaxPrecompileTime.Ref;
  iVar8 = 0;
  if (FShaderPipelineCache::ShaderPipelineCache == (FShaderPipelineCache *)0x0) goto LAB_145ea71e3;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_145ea7155:
    lVar6 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    lVar6 = 4;
    if (bVar3) goto LAB_145ea7155;
  }
  pTVar2 = CVarPSOFileCacheMaxPrecompileTime.Ref;
  if ((*(float *)((longlong)pTVar1->ShadowedValue + lVar6) <= 0.0) ||
     (FShaderPipelineCacheTask::TotalPrecompileTasks < 1)) {
    iVar4 = FShaderPipelineCacheTask::TotalWaitingTasks._0_4_;
    if ((longlong)FShaderPipelineCacheTask::TotalWaitingTasks < 0) {
      iVar4 = iVar8;
    }
    iVar8 = FShaderPipelineCacheTask::TotalActiveTasks._0_4_;
    if ((longlong)FShaderPipelineCacheTask::TotalActiveTasks < 0) {
      iVar8 = 0;
    }
    iVar8 = iVar8 + iVar4;
  }
  else {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), lVar6 = 4, bVar3)) {
      lVar6 = 0;
    }
    fVar10 = __real_3f800000 -
             FShaderPipelineCacheTask::TotalPrecompileWallTime /
             *(float *)((longlong)pTVar2->ShadowedValue + lVar6);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    iVar8 = (int)(longlong)(fVar10 * (float)FShaderPipelineCacheTask::TotalPrecompileTasks);
  }
LAB_145ea71e3:
  uVar5 = PipelineStateCache::NumActivePrecacheRequests();
  if (FShaderPipelineCache::ShaderPipelineCache == (FShaderPipelineCache *)0x0) {
    aVar7 = (atomic<bool>)0x0;
  }
  else {
    aVar7 = FShaderPipelineCache::ShaderPipelineCache->bHasShaderPipelineTask;
  }
  uVar9 = iVar8 + uVar5;
  if (iVar8 + uVar5 < (uint)(aVar7 != (atomic<bool>)0x0)) {
    uVar9 = (uint)(aVar7 != (atomic<bool>)0x0);
  }
  return uVar9;
}

// ReadRenderTarget @ 147dbb0c0

bool __cdecl
UKismetRenderingLibrary::ReadRenderTarget
          (UObject *param_1,UTextureRenderTarget2D *param_2,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  EPixelFormat EVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 local_38 [2];
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_30;
  
  if ((param_1 == (UObject *)0x0) || (param_2 == (UTextureRenderTarget2D *)0x0)) {
    return false;
  }
  uVar12 = param_2->SizeX * param_2->SizeY;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  uVar11 = 0;
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&param_3->AllocatorInstance,0,piVar1);
  }
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar12,&local_30.AllocatorInstance,0,&local_30.ArrayMax);
  }
  EVar4 = ReadRenderTargetHelper
                    (param_3,&local_30,param_1,param_2,0,0,param_2->SizeX,param_2->SizeY,param_4);
  if (EVar4 == PF_Unknown) {
LAB_147dbb1bc:
    bVar5 = false;
    goto LAB_147dbb1be;
  }
  if (EVar4 == PF_A32B32G32R32F) {
LAB_147dbb22f:
    if ((param_3->ArrayNum != 0) || (local_30.ArrayNum != uVar12)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutSamples.Num() == 0 && LinearSamples.Num() == NumSamples",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                         ,0x1a3,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    lVar9 = (longlong)(int)uVar12;
    uVar13 = uVar11;
    uVar8 = local_30.ArrayNum;
    if (0 < (int)uVar12) {
      while( true ) {
        uVar10 = (uint)uVar11;
        uVar12 = 0;
        if ((int)uVar10 < (int)uVar8) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        FLinearColor::ToFColorSRGB((FLinearColor *)(local_30.AllocatorInstance.Data + uVar13));
        pFVar2 = (param_3->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar7 = param_3->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_3->AllocatorInstance,piVar1);
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        param_3->ArrayNum = iVar7 + 1;
        *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_38[0];
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) break;
        uVar13 = uVar13 + 0x10;
        uVar8 = local_30.ArrayNum;
      }
    }
  }
  else {
    if (EVar4 != PF_B8G8R8A8) {
      if (EVar4 != PF_FloatRGBA) goto LAB_147dbb1bc;
      goto LAB_147dbb22f;
    }
    if (((param_3->ArrayNum != uVar12) || (local_30.ArrayNum != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutSamples.Num() == NumSamples && LinearSamples.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                           ,0x19f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  bVar5 = true;
LAB_147dbb1be:
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return bVar5;
}

// ReadRenderTargetPixel @ 147dbb620

FColor __cdecl
UKismetRenderingLibrary::ReadRenderTargetPixel
          (UObject *param_1,UTextureRenderTarget2D *param_2,int param_3,int param_4)

{
  code *pcVar1;
  EPixelFormat EVar2;
  bool bVar3;
  FColor_u_0 FVar4;
  int iVar5;
  undefined4 in_register_00000084;
  int in_stack_00000028;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_28;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  EVar2 = ReadRenderTargetHelper
                    (&local_18,&local_28,(UObject *)param_2,
                     (UTextureRenderTarget2D *)CONCAT44(in_register_00000084,param_3),param_4,
                     in_stack_00000028,1,1,true);
  if (EVar2 == PF_Unknown) {
LAB_147dbb696:
    *(FColor_u_0 *)param_1 = FColor::Red.field0_0x0;
  }
  else {
    if (EVar2 != PF_A32B32G32R32F) {
      if (EVar2 == PF_B8G8R8A8) {
        if ((local_18.ArrayNum != 1) || (local_28.ArrayNum != 0)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Samples.Num() == 1 && LinearSamples.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                             ,0x185,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            FVar4.Bits = (*pcVar1)();
            return (FColor_u_0)(FColor_u_0)FVar4._s_0;
          }
          if ((local_18.ArrayNum < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            FVar4.Bits = (*pcVar1)();
            return (FColor_u_0)(FColor_u_0)FVar4._s_0;
          }
        }
        *(undefined4 *)param_1 = *(undefined4 *)local_18.AllocatorInstance.Data;
        goto joined_r0x000147dbb6a6;
      }
      if (EVar2 != PF_FloatRGBA) goto LAB_147dbb696;
    }
    if ((local_18.ArrayNum != 0) || (iVar5 = 1, local_28.ArrayNum != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Samples.Num() == 0 && LinearSamples.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                         ,0x189,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        FVar4.Bits = (*pcVar1)();
        return (FColor_u_0)(FColor_u_0)FVar4._s_0;
      }
      iVar5 = local_28.ArrayNum;
    }
    if ((iVar5 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      FVar4.Bits = (*pcVar1)();
      return (FColor_u_0)(FColor_u_0)FVar4._s_0;
    }
    FLinearColor::ToFColorSRGB((FLinearColor *)local_28.AllocatorInstance.Data);
  }
joined_r0x000147dbb6a6:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (FColor)SUB84(param_1,0);
}

// ReadRenderTargetRaw @ 147dbb7e0

bool __cdecl
UKismetRenderingLibrary::ReadRenderTargetRaw
          (UObject *param_1,UTextureRenderTarget2D *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  EPixelFormat EVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  if ((param_1 == (UObject *)0x0) || (param_2 == (UTextureRenderTarget2D *)0x0)) {
    return false;
  }
  uVar11 = param_2->SizeX * param_2->SizeY;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_3->ArrayMax;
  uVar14 = 0;
  param_3->ArrayNum = 0;
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar11,&param_3->AllocatorInstance,0,piVar1);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&local_78.AllocatorInstance,0,&local_78.ArrayMax);
  }
  EVar4 = ReadRenderTargetHelper
                    (&local_78,param_3,param_1,param_2,0,0,param_2->SizeX,param_2->SizeY,param_4);
  if (EVar4 == PF_Unknown) {
LAB_147dbb8e7:
    bVar5 = false;
    goto LAB_147dbb8e9;
  }
  if (EVar4 == PF_A32B32G32R32F) {
LAB_147dbbbbf:
    if (((local_78.ArrayNum != 0) || (param_3->ArrayNum != uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Samples.Num() == 0 && OutLinearSamples.Num() == NumSamples",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                           ,0x206,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  else {
    if (EVar4 != PF_B8G8R8A8) {
      if (EVar4 != PF_FloatRGBA) goto LAB_147dbb8e7;
      goto LAB_147dbbbbf;
    }
    if ((local_78.ArrayNum != uVar11) || (param_3->ArrayNum != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Samples.Num() == NumSamples && OutLinearSamples.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                         ,0x1fe,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    uVar15 = uVar14;
    uVar10 = local_78.ArrayNum;
    if (0 < (int)uVar11) {
      while( true ) {
        uVar13 = (uint)uVar14;
        uVar12 = ~uVar13 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar13 < (int)uVar10) {
          uVar7 = uVar12;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          uVar10 = local_78.ArrayNum;
        }
        uVar8 = 0;
        uVar7 = uVar8;
        if ((int)uVar13 < (int)uVar10) {
          uVar7 = uVar12;
        }
        fVar18 = (float)(byte)local_78.AllocatorInstance.Data[uVar15 * 4 + 3];
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          uVar10 = local_78.ArrayNum;
        }
        uVar7 = uVar8;
        if ((int)uVar13 < (int)uVar10) {
          uVar7 = uVar12;
        }
        fVar17 = (float)(byte)local_78.AllocatorInstance.Data[uVar15 * 4];
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          uVar10 = local_78.ArrayNum;
        }
        if ((int)uVar13 < (int)uVar10) {
          uVar8 = uVar12;
        }
        fVar16 = (float)(byte)local_78.AllocatorInstance.Data[uVar15 * 4 + 1];
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar2 = (param_3->AllocatorInstance).Data;
        local_68 = (float)(byte)local_78.AllocatorInstance.Data[uVar15 * 4 + 2];
        fStack_64 = fVar16;
        fStack_60 = fVar17;
        fStack_5c = fVar18;
        if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar9 = param_3->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&param_3->AllocatorInstance,piVar1);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        param_3->ArrayNum = iVar9 + 1;
        pFVar2 = (param_3->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(ulonglong *)pFVar2 = CONCAT44(fStack_64,local_68);
        *(ulonglong *)(pFVar2 + 8) = CONCAT44(fStack_5c,fStack_60);
        if ((longlong)(int)uVar11 <= (longlong)(uVar15 + 1)) break;
        uVar15 = uVar15 + 1;
        uVar10 = local_78.ArrayNum;
      }
      bVar5 = true;
      goto LAB_147dbb8e9;
    }
  }
  bVar5 = true;
LAB_147dbb8e9:
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar5;
}

// ReadRenderTargetRawPixel @ 147dbbc20

FLinearColor * __cdecl
UKismetRenderingLibrary::ReadRenderTargetRawPixel
          (FLinearColor *__return_storage_ptr__,UObject *param_1,UTextureRenderTarget2D *param_2,
          int param_3,int param_4,bool param_5)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  undefined8 uVar5;
  EPixelFormat EVar6;
  bool bVar7;
  FLinearColor *pFVar8;
  int iVar9;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_58;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_48 [4];
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  EVar6 = ReadRenderTargetHelper(&local_58,local_48,param_1,param_2,param_3,param_4,1,1,param_5);
  if (EVar6 == PF_Unknown) {
LAB_147dbbca1:
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red;
  }
  else {
    if (EVar6 != PF_A32B32G32R32F) {
      if (EVar6 == PF_B8G8R8A8) {
        if ((local_58.ArrayNum != 1) || (iVar9 = 1, local_48[0].ArrayNum != 0)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Samples.Num() == 1 && LinearSamples.Num() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                             ,0x1ba,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FLinearColor *)(*pcVar4)();
            return pFVar8;
          }
          iVar9 = local_58.ArrayNum;
          if (local_58.ArrayNum < 1) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              pFVar8 = (FLinearColor *)(*pcVar4)();
              return pFVar8;
            }
            iVar9 = local_58.ArrayNum;
          }
        }
        FVar1 = local_58.AllocatorInstance.Data[3];
        if (iVar9 < 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FLinearColor *)(*pcVar4)();
            return pFVar8;
          }
          iVar9 = local_58.ArrayNum;
        }
        FVar2 = *local_58.AllocatorInstance.Data;
        if (iVar9 < 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pFVar8 = (FLinearColor *)(*pcVar4)();
            return pFVar8;
          }
          iVar9 = local_58.ArrayNum;
        }
        FVar3 = local_58.AllocatorInstance.Data[1];
        if ((iVar9 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FLinearColor *)(*pcVar4)();
          return pFVar8;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.G = (float)(byte)FVar3;
        (__return_storage_ptr__->field0_0x0)._s_0.B = (float)(byte)FVar2;
        FVar2 = local_58.AllocatorInstance.Data[2];
        (__return_storage_ptr__->field0_0x0)._s_0.A = (float)(byte)FVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.R = (float)(byte)FVar2;
        goto LAB_147dbbcaf;
      }
      if (EVar6 != PF_FloatRGBA) goto LAB_147dbbca1;
    }
    if ((local_58.ArrayNum != 0) || (iVar9 = 1, local_48[0].ArrayNum != 1)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Samples.Num() == 0 && LinearSamples.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                         ,0x1be,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FLinearColor *)(*pcVar4)();
        return pFVar8;
      }
      iVar9 = local_48[0].ArrayNum;
    }
    if ((iVar9 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FLinearColor *)(*pcVar4)();
      return pFVar8;
    }
    uVar5 = *(undefined8 *)(local_48[0].AllocatorInstance.Data + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)local_48[0].AllocatorInstance.Data;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  }
LAB_147dbbcaf:
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReadRenderTargetRawPixelArea @ 147dbbf00

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __cdecl
UKismetRenderingLibrary::ReadRenderTargetRawPixelArea
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1
          ,UTextureRenderTarget2D *param_2,int param_3,int param_4,int param_5,int param_6,
          bool param_7)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement FVar4;
  code *pcVar5;
  EPixelFormat EVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_78;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_68 [5];
  
  uVar13 = 0;
  local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68[0].ArrayNum = 0;
  local_68[0].ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  EVar6 = ReadRenderTargetHelper
                    (local_68,&local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (EVar6 == PF_Unknown) {
LAB_147dbbf84:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    goto LAB_147dbbf99;
  }
  if (EVar6 == PF_A32B32G32R32F) {
LAB_147dbc356:
    if (((local_68[0].ArrayNum != 0) || (local_78.ArrayNum < 1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Samples.Num() == 0 && LinearSamples.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                           ,0x1d8,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
  }
  else {
    if (EVar6 != PF_B8G8R8A8) {
      if (EVar6 != PF_FloatRGBA) goto LAB_147dbbf84;
      goto LAB_147dbc356;
    }
    if ((local_68[0].ArrayNum < 1) || (uVar11 = local_68[0].ArrayNum, local_78.ArrayNum != 0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Samples.Num() > 0 && LinearSamples.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                         ,0x1ce,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      uVar11 = local_68[0].ArrayNum;
    }
    if (local_78.ArrayNum < (int)uVar11) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar11 - local_78.ArrayNum,&local_78.AllocatorInstance,&local_78.ArrayNum,
                 &local_78.ArrayMax);
LAB_147dbc0e7:
      uVar12 = local_68[0].ArrayNum;
    }
    else {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      uVar12 = uVar11;
      if ((int)uVar11 < local_78.ArrayNum) {
        uVar15 = local_78.ArrayNum - uVar11;
        if ((int)(uVar11 | uVar15) < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          uVar12 = local_68[0].ArrayNum;
        }
        if (uVar15 != 0) {
          iVar8 = (local_78.ArrayNum - uVar11) - uVar15;
          if (iVar8 != 0) {
            memmove(local_78.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10,
                    local_78.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10 +
                    (longlong)(int)uVar15 * 0x10,(longlong)iVar8 << 4);
          }
          iVar8 = local_78.ArrayNum - uVar15;
          local_78.ArrayNum = iVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&local_78.AllocatorInstance,iVar8,&local_78.ArrayMax);
          goto LAB_147dbc0e7;
        }
      }
    }
    uVar14 = uVar13;
    uVar17 = uVar13;
    if (0 < (int)uVar12) {
      do {
        uVar15 = (uint)uVar13;
        uVar16 = ~uVar15 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar15 < (int)uVar12) {
          uVar11 = uVar16;
        }
        if (uVar11 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          uVar12 = local_68[0].ArrayNum;
        }
        FVar1 = local_68[0].AllocatorInstance.Data[uVar14 + 3];
        uVar9 = 0;
        uVar11 = uVar9;
        if ((int)uVar15 < (int)uVar12) {
          uVar11 = uVar16;
        }
        if (uVar11 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          uVar12 = local_68[0].ArrayNum;
        }
        FVar2 = local_68[0].AllocatorInstance.Data[uVar14];
        uVar11 = uVar9;
        if ((int)uVar15 < (int)uVar12) {
          uVar11 = uVar16;
        }
        if (uVar11 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          uVar12 = local_68[0].ArrayNum;
        }
        FVar3 = local_68[0].AllocatorInstance.Data[uVar14 + 1];
        uVar11 = uVar9;
        if ((int)uVar15 < (int)uVar12) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        FVar4 = local_68[0].AllocatorInstance.Data[uVar14 + 2];
        if ((int)uVar15 < local_78.ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
        uVar13 = (ulonglong)(uVar15 + 1);
        *(float *)(local_78.AllocatorInstance.Data + uVar17) = (float)(byte)FVar4;
        *(float *)(local_78.AllocatorInstance.Data + uVar17 + 4) = (float)(byte)FVar3;
        *(float *)(local_78.AllocatorInstance.Data + uVar17 + 8) = (float)(byte)FVar2;
        *(float *)(local_78.AllocatorInstance.Data + uVar17 + 0xc) = (float)(byte)FVar1;
        uVar14 = uVar14 + 4;
        uVar17 = uVar17 + 0x10;
        uVar12 = local_68[0].ArrayNum;
      } while ((int)(uVar15 + 1) < local_68[0].ArrayNum);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = local_78.AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = local_78.ArrayNum;
  __return_storage_ptr__->ArrayMax = local_78.ArrayMax;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_147dbbf99:
  if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReadRenderTargetRawUV @ 147dbc3a0

FLinearColor * __cdecl
UKismetRenderingLibrary::ReadRenderTargetRawUV
          (FLinearColor *__return_storage_ptr__,UObject *param_1,UTextureRenderTarget2D *param_2,
          float param_3,float param_4,bool param_5)

{
  if (param_2 == (UTextureRenderTarget2D *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Red;
    return __return_storage_ptr__;
  }
  if (__real_3f800000 <= param_3) {
    param_3 = __real_3f800000;
  }
  if (__real_3f800000 <= param_4) {
    param_4 = __real_3f800000;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  ReadRenderTargetRawPixel
            (__return_storage_ptr__,param_1,param_2,(int)(param_3 * (float)param_2->SizeX),
             (int)(param_4 * (float)param_2->SizeY),param_5);
  return __return_storage_ptr__;
}

// ReadRenderTargetRawUVArea @ 147dbc440

TArray<FLinearColor,TSizedDefaultAllocator<32>_> * __cdecl
UKismetRenderingLibrary::ReadRenderTargetRawUVArea
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UObject *param_1
          ,UTextureRenderTarget2D *param_2,TBox2<double> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_2 == (UTextureRenderTarget2D *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  dVar1 = (param_3->Max).field0_0x0._s_0.Y;
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  dVar2 = (param_3->Min).field0_0x0._s_0.Y;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar3 = (param_3->Max).field0_0x0._s_0.X;
  if (__real_3ff0000000000000 <= dVar3) {
    dVar3 = __real_3ff0000000000000;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  dVar4 = (param_3->Min).field0_0x0._s_0.X;
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  ReadRenderTargetRawPixelArea
            (__return_storage_ptr__,param_1,param_2,(int)(dVar4 * (double)param_2->SizeX),
             (int)(dVar2 * (double)param_2->SizeY),(int)(dVar3 * (double)param_2->SizeX),
             (int)(dVar1 * (double)param_2->SizeY),param_4);
  return __return_storage_ptr__;
}

// ReadRenderTargetUV @ 147dbc520

FColor __cdecl
UKismetRenderingLibrary::ReadRenderTargetUV
          (UObject *param_1,UTextureRenderTarget2D *param_2,float param_3,float param_4)

{
  int in_R8D;
  undefined4 in_register_00000084;
  
  if (CONCAT44(in_register_00000084,in_R8D) == 0) {
    *(FColor_u_0 *)param_1 = FColor::Red.field0_0x0;
    return (FColor)SUB84(param_1,0);
  }
  if (__real_3f800000 <= param_4) {
    param_4 = __real_3f800000;
  }
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  ReadRenderTargetPixel
            (param_1,param_2,in_R8D,
             (int)(param_4 * (float)*(int *)(CONCAT44(in_register_00000084,in_R8D) + 0x158)));
  return (FColor)SUB84(param_1,0);
}

// RefreshPathTracingOutput @ 147dbc640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UKismetRenderingLibrary::RefreshPathTracingOutput(void)

{
  UGameViewportClient *pUVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0)) {
    lVar3 = (**(code **)(pUVar1->_padding_ + 0x180))();
    if ((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 600), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147dbc682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x240))(plVar2,1);
      return;
    }
  }
  return;
}

// ReleaseRenderTarget2D @ 147dbc940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UKismetRenderingLibrary::ReleaseRenderTarget2D(UTextureRenderTarget2D *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  code *apcStack_88 [2];
  undefined **ppuStack_78;
  UTextureRenderTarget2D *pUStack_70;
  longlong lStack_68;
  undefined ***pppuStack_60;
  undefined1 auStack_58 [16];
  undefined **ppuStack_48;
  UTextureRenderTarget2D *pUStack_40;
  longlong lStack_38;
  undefined ***pppuStack_30;
  byte bStack_28;
  ulonglong uStack_18;
  
  if (param_1 == (UTextureRenderTarget2D *)0x0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1->_padding_ != 0) {
    bVar2 = IsInActualRenderingThread();
    if (((bVar2) || (bVar2 = IsInRHIThread(), bVar2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsInActualRenderingThread() && !IsInRHIThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                           ,0x133,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UStreamableRenderAsset::UnlinkStreaming((UStreamableRenderAsset *)param_1);
    lVar3 = (**(code **)(param_1->_padding_ + 0x358))(param_1);
    if ((lVar3 != 0) &&
       (plVar4 = (longlong *)(**(code **)(param_1->_padding_ + 0x358))(param_1), *plVar4 != 0)) {
      UStreamableRenderAsset::WaitForPendingInitOrStreaming
                ((UStreamableRenderAsset *)param_1,false,false);
    }
    lStack_68 = param_1->_padding_;
    param_1->_padding_ = 0;
    apcStack_88[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UTexture::ReleaseResource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
         ::Call;
    param_1->_padding_ = 0;
    pppuStack_60 = (undefined ***)0x0;
    ppuStack_78 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UTexture::ReleaseResource'::`5'::<lambda_1>,1,0>::
                   _vftable_;
    pUStack_70 = param_1;
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UTexture::ReleaseResource_::__l5::TSTR_DeleteResource324>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_88);
    }
    else {
      this_00 = FRenderCommandList::GetRenderThread(this);
      auStack_58._0_8_ = apcStack_88[0];
      pppuStack_30 = pppuStack_60;
      ppuStack_48 = ppuStack_78;
      pUStack_40 = pUStack_70;
      lStack_38 = lStack_68;
      apcStack_88[0] = (code *)0x0;
      bStack_28 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UTexture::ReleaseResource'::__l5::TSTR_DeleteResource324>::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_58,pFVar5);
      uVar7 = (ulonglong)bStack_28;
      if ((2 < uVar7) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_58._0_8_ != (code *)0x0) {
          pppuVar6 = (undefined ***)(auStack_58 + 0x10);
          if (pppuStack_30 != (undefined ***)0x0) {
            pppuVar6 = pppuStack_30;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(auStack_58);
      }
    }
    if (apcStack_88[0] != (code *)0x0) {
      pppuVar6 = &ppuStack_78;
      if (pppuStack_60 != (undefined ***)0x0) {
        pppuVar6 = pppuStack_60;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    return;
  }
  return;
}

// RenderTargetCreateStaticTexture2DArrayEditorOnly @ 147dbda00

UTexture2DArray * __cdecl
UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DArrayEditorOnly
          (UTextureRenderTarget2DArray *param_1,FString *param_2,TextureCompressionSettings param_3,
          TextureMipGenSettings param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  UTexture2DArray *pUVar4;
  UClass *pUVar5;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,param_2);
  pUVar4 = (UTexture2DArray *)
           UE::Kismet::RenderingLibrary::RenderTargetCreateStaticTextureEditorOnly
                     ((UTextureRenderTarget *)param_1,pFVar3,param_3,param_4);
  if (pUVar4 != (UTexture2DArray *)0x0) {
    pUVar5 = Z_Construct_UClass_UTexture2DArray_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_147dbda69;
  }
  pUVar4 = (UTexture2DArray *)0x0;
LAB_147dbda69:
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pUVar4;
}

// RenderTargetCreateStaticTexture2DEditorOnly @ 147dbdaa0

UTexture2D * __cdecl
UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly
          (UTextureRenderTarget2D *param_1,FString *param_2,TextureCompressionSettings param_3,
          TextureMipGenSettings param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  UTexture2D *pUVar4;
  UClass *pUVar5;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,param_2);
  pUVar4 = (UTexture2D *)
           UE::Kismet::RenderingLibrary::RenderTargetCreateStaticTextureEditorOnly
                     ((UTextureRenderTarget *)param_1,pFVar3,param_3,param_4);
  if (pUVar4 != (UTexture2D *)0x0) {
    pUVar5 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_147dbdb09;
  }
  pUVar4 = (UTexture2D *)0x0;
LAB_147dbdb09:
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pUVar4;
}

// RenderTargetCreateStaticTextureCubeEditorOnly @ 147dbdb40

UTextureCube * __cdecl
UKismetRenderingLibrary::RenderTargetCreateStaticTextureCubeEditorOnly
          (UTextureRenderTargetCube *param_1,FString *param_2,TextureCompressionSettings param_3,
          TextureMipGenSettings param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  UTextureCube *pUVar4;
  UClass *pUVar5;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,param_2);
  pUVar4 = (UTextureCube *)
           UE::Kismet::RenderingLibrary::RenderTargetCreateStaticTextureEditorOnly
                     ((UTextureRenderTarget *)param_1,pFVar3,param_3,param_4);
  if (pUVar4 != (UTextureCube *)0x0) {
    pUVar5 = Z_Construct_UClass_UTextureCube_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_147dbdba9;
  }
  pUVar4 = (UTextureCube *)0x0;
LAB_147dbdba9:
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pUVar4;
}

// RenderTargetCreateStaticVolumeTextureEditorOnly @ 147dbdc90

UVolumeTexture * __cdecl
UKismetRenderingLibrary::RenderTargetCreateStaticVolumeTextureEditorOnly
          (UTextureRenderTargetVolume *param_1,FString *param_2,TextureCompressionSettings param_3,
          TextureMipGenSettings param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  UVolumeTexture *pUVar4;
  UClass *pUVar5;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,param_2);
  pUVar4 = (UVolumeTexture *)
           UE::Kismet::RenderingLibrary::RenderTargetCreateStaticTextureEditorOnly
                     ((UTextureRenderTarget *)param_1,pFVar3,param_3,param_4);
  if (pUVar4 != (UVolumeTexture *)0x0) {
    pUVar5 = Z_Construct_UClass_UVolumeTexture_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_147dbdcf9;
  }
  pUVar4 = (UVolumeTexture *)0x0;
LAB_147dbdcf9:
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pUVar4;
}

// ResizeRenderTarget2D @ 147dbe5a0

void __cdecl
UKismetRenderingLibrary::ResizeRenderTarget2D
          (UTextureRenderTarget2D *param_1,int param_2,int param_3)

{
  FMessageLog *this;
  FText *pFVar1;
  FName local_res8 [4];
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  if (param_1 != (UTextureRenderTarget2D *)0x0) {
    if ((0 < param_2) && (0 < param_3)) {
      UTextureRenderTarget2D::ResizeTarget(param_1,param_2,param_3);
      return;
    }
    ::FName::FName(local_res8,"Blueprint");
    this = FMessageLog::FMessageLog(&local_38,local_res8);
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"KismetRenderingLibrary",
                        L"ResizeRenderTarget2D_InvalidDimensions",
                        L"ResizeRenderTarget2D: Dimensions must be positive.");
    FMessageLog::Warning(this,&local_58,pFVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
  }
  return;
}

// SetCastInsetShadowForAllAttachments @ 147dbf510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::SetCastInsetShadowForAllAttachments
          (UPrimitiveComponent *param_1,bool param_2,bool param_3)

{
  longlong lVar1;
  UPrimitiveComponent *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<USceneComponent_*> FVar5;
  UClass *pUVar6;
  FMessageLog *this_00;
  FText *pFVar7;
  void *_Dst;
  int iVar8;
  undefined1 auStackY_108 [32];
  FName local_d8;
  TSharedRef<FTokenizedMessage,1> local_d0;
  FText local_c0;
  FMessageLog local_b0;
  ForElementType<USceneComponent_*> local_80;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (param_1 == (UPrimitiveComponent *)0x0) {
    ::FName::FName(&local_d8,"Blueprint");
    this_00 = FMessageLog::FMessageLog(&local_b0,&local_d8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_c0,L"KismetRenderingLibrary",
                        L"SetCastInsetShadowForAllAttachments_InvalidPrimitiveComponent",
                        L"SetCastInsetShadowForAllAttachments: PrimitiveComponent must be non-null."
                       );
    FMessageLog::Warning(this_00,&local_d0,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.SharedReferenceCount.ReferenceController);
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_b0);
  }
  else {
    UPrimitiveComponent::SetCastInsetShadow(param_1,param_2);
    UPrimitiveComponent::SetLightAttachmentsAsGroup(param_1,param_3);
    local_34 = 8;
    local_80.SecondaryData = (ForElementType<USceneComponent_*>)0x0;
    local_38 = 0;
    if ((&local_80 == (ForElementType<USceneComponent_*> *)&param_1->field_0xe8) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = *(int *)&param_1->field_0xf0;
    if (iVar8 != 0) {
      iVar4 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                        (8,8,iVar8,&local_80,&local_38,&local_34);
      FVar5 = (ForElementType<USceneComponent_*>)&local_80;
      if (local_80.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar5 = local_80.SecondaryData;
      }
      ConstructItems<USceneComponent_*,TObjectPtr<USceneComponent>,int>
                ((void *)((longlong)FVar5 + (longlong)iVar4 * 8),
                 *(TObjectPtr<USceneComponent> **)&param_1->field_0xe8,iVar8);
    }
    while (0 < local_38) {
      if ((local_38 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar5 = (ForElementType<USceneComponent_*>)&local_80;
      if (local_80.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar5 = local_80.SecondaryData;
      }
      lVar1 = (longlong)(local_38 + -1) * 8;
      this = *(UPrimitiveComponent **)(lVar1 + (longlong)FVar5);
      FVar5 = (ForElementType<USceneComponent_*>)&local_80;
      if (local_80.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar5 = local_80.SecondaryData;
      }
      _Dst = (void *)(lVar1 + (longlong)FVar5);
      iVar8 = (local_38 - (local_38 + -1)) + -1;
      if (iVar8 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar8 << 3);
      }
      local_38 = local_38 + -1;
      if (this != (UPrimitiveComponent *)0x0) {
        pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar8 = (int)pUVar6->_padding_;
        if (((iVar8 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
             &pUVar6->_padding_)) &&
           (bVar3 = UPrimitiveComponent::ShouldComponentAddToScene(this), bVar3)) {
          if (param_3) {
            UPrimitiveComponent::SetLightAttachmentsAsGroup(this,false);
          }
          UPrimitiveComponent::SetCastInsetShadow(this,param_2);
        }
      }
      if ((&local_80 == (ForElementType<USceneComponent_*> *)&this->field_0xe8) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar8 = *(int *)&this->field_0xf0;
      if (iVar8 != 0) {
        iVar4 = UE::Core::Private::
                ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                          (8,8,iVar8,&local_80,&local_38,&local_34);
        FVar5 = (ForElementType<USceneComponent_*>)&local_80;
        if (local_80.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
          FVar5 = local_80.SecondaryData;
        }
        ConstructItems<USceneComponent_*,TObjectPtr<USceneComponent>,int>
                  ((void *)((longlong)FVar5 + (longlong)iVar4 * 8),
                   *(TObjectPtr<USceneComponent> **)&this->field_0xe8,iVar8);
      }
    }
    if (local_80.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
      FMemory::Free((void *)local_80.SecondaryData);
    }
  }
  return;
}

// StaticRegisterNativesUKismetRenderingLibrary @ 147dc4250

void __cdecl UKismetRenderingLibrary::StaticRegisterNativesUKismetRenderingLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x24;
  local_18.DataPtr = Z_Construct_UClass_UKismetRenderingLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBeginDrawCanvasToRenderTarget @ 147dcfb60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execBeginDrawCanvasToRenderTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UCanvas **ppUVar1;
  TVector2<double> *pTVar2;
  FProperty *pFVar3;
  TObjectPtr<UTextureRenderTarget2D>_u_0 *pTVar4;
  TVector2<double> *pTVar5;
  UCanvas **ppUVar6;
  UCanvas *local_res10 [2];
  UTextureRenderTarget2D *local_res20;
  UObject *local_48;
  TObjectPtr<UTextureRenderTarget2D>_u_0 local_40;
  undefined8 uStack_38;
  TVector2<double> local_30;
  
  local_48 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UCanvas *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  ppUVar1 = (UCanvas **)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  ppUVar6 = local_res10;
  if (ppUVar1 != (UCanvas **)0x0) {
    ppUVar6 = ppUVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  pTVar2 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_30;
  if (pTVar2 != (TVector2<double> *)0x0) {
    pTVar5 = pTVar2;
  }
  local_40.DebugPtr = (UTextureRenderTarget2D *)0x0;
  uStack_38 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  pTVar4 = &local_40;
  if ((TObjectPtr<UTextureRenderTarget2D>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UTextureRenderTarget2D>_u_0 *)0x0) {
    pTVar4 = (TObjectPtr<UTextureRenderTarget2D>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BeginDrawCanvasToRenderTarget
            (local_48,local_res20,ppUVar6,pTVar5,(FDrawToRenderTargetContext *)&pTVar4->ObjectPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar6 != (UCanvas *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar6);
  }
  return;
}

// execBreakSkinWeightInfo @ 147dd5e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetRenderingLibrary::execBreakSkinWeightInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar uVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  undefined1 auStack_108 [32];
  uchar local_e8 [4];
  undefined4 local_e4;
  uchar local_e0 [4];
  undefined4 local_dc;
  uchar local_d8 [8];
  uchar *local_d0;
  uchar *local_c8;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_e4 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e4);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  local_e8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_d0 = (uchar *)&local_e4;
  if (puVar4 != (uchar *)0x0) {
    local_d0 = puVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  local_e0[0] = '\0';
  local_e0[1] = '\0';
  local_e0[2] = '\0';
  local_e0[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_c8 = local_e8;
  if (puVar4 != (uchar *)0x0) {
    local_c8 = puVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  local_e8[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_e0;
  if (puVar4 != (uchar *)0x0) {
    puVar7 = puVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8 + 1,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8 + 1);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  local_dc = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = local_e8 + 1;
  if (puVar4 != (uchar *)0x0) {
    puVar6 = puVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_dc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_dc);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  local_e8[2] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = (uchar *)&local_dc;
  if (puVar4 != (uchar *)0x0) {
    puVar9 = puVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8 + 2,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8 + 2);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  local_d8[0] = '\0';
  local_d8[1] = '\0';
  local_d8[2] = '\0';
  local_d8[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_e8 + 2;
  if (puVar4 != (uchar *)0x0) {
    puVar8 = puVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  local_e8[3] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_d8;
  if (puVar4 != (uchar *)0x0) {
    puVar5 = puVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8 + 3,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8 + 3);
  }
  puVar4 = local_e8 + 3;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = local_d0;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  local_88 = 0;
  *local_c8 = '\0';
  uVar3 = local_88._1_1_;
  puVar7[0] = '\0';
  puVar7[1] = '\0';
  puVar7[2] = '\0';
  puVar7[3] = '\0';
  *puVar6 = uVar3;
  uVar3 = local_88._2_1_;
  puVar9[0] = '\0';
  puVar9[1] = '\0';
  puVar9[2] = '\0';
  puVar9[3] = '\0';
  *puVar8 = uVar3;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  *puVar4 = local_88._3_1_;
  return;
}

// execCalculateProjectionMatrix @ 147dd9a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execCalculateProjectionMatrix
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double>_u_0 *this;
  undefined1 auStack_998 [32];
  TMatrix<double> local_978;
  TVector<double>_u_0 local_8f8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined4 local_8b8;
  undefined1 local_8b4;
  undefined4 local_8b0;
  undefined2 local_8ac;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined1 local_894;
  uint local_890;
  undefined1 local_88c;
  undefined4 local_888;
  FPostProcessSettings local_878;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_998;
  local_8b8 = 0x44000000;
  local_8f8._s_0.X = 0.0;
  local_8f8._s_0.Y = 0.0;
  local_8f8._s_0.Z = 0.0;
  uStack_8e0 = 0;
  local_890 = local_890 & 0xfffffffc | 4;
  local_8d8 = 0;
  uStack_8d0 = 0;
  local_8c8 = ___xmm_3f80000042b4000042b4000042b40000;
  uStack_8c0 = _UNK_150fabfd8;
  local_8b4 = 1;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = ___xmm_3faaaaabbf8000004a00000000000000;
  uStack_8a0 = _UNK_150fabfe8;
  local_894 = 0;
  local_88c = 0;
  local_888 = 0;
  FPostProcessSettings::FPostProcessSettings(&local_878);
  local_78 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_70 = _UNK_15076b1f8;
  local_108 = 0;
  uStack_100 = 0;
  local_98 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = 0x3f800000;
  local_84 = 0x3f800000;
  local_68 = 0;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_8f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_8f8);
  }
  this = &local_8f8;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    this = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMinimalViewInfo::CalculateProjectionMatrix((FMinimalViewInfo *)&this->_s_0,&local_978);
  *(double *)param_3 = local_978.M[0][0];
  *(double *)((longlong)param_3 + 8) = local_978.M[0][1];
  *(double *)((longlong)param_3 + 0x10) = local_978.M[0][2];
  *(double *)((longlong)param_3 + 0x18) = local_978.M[0][3];
  *(double *)((longlong)param_3 + 0x20) = local_978.M[1][0];
  *(double *)((longlong)param_3 + 0x28) = local_978.M[1][1];
  *(double *)((longlong)param_3 + 0x30) = local_978.M[1][2];
  *(double *)((longlong)param_3 + 0x38) = local_978.M[1][3];
  *(double *)((longlong)param_3 + 0x40) = local_978.M[2][0];
  *(double *)((longlong)param_3 + 0x48) = local_978.M[2][1];
  *(double *)((longlong)param_3 + 0x50) = local_978.M[2][2];
  *(double *)((longlong)param_3 + 0x58) = local_978.M[2][3];
  *(double *)((longlong)param_3 + 0x60) = local_978.M[3][0];
  *(double *)((longlong)param_3 + 0x68) = local_978.M[3][1];
  *(double *)((longlong)param_3 + 0x70) = local_978.M[3][2];
  *(double *)((longlong)param_3 + 0x78) = local_978.M[3][3];
  if (local_878.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// execClearRenderTarget2D @ 147ddf1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execClearRenderTarget2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UTextureRenderTarget *this;
  bool bVar4;
  UWorld *pUVar5;
  FTextureResource *pFVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  code **ppcVar8;
  ulonglong uVar9;
  undefined1 auStack_108 [32];
  UTextureRenderTarget *local_e8;
  UObject *local_e0;
  code *local_d8;
  code *pcStack_d0;
  FTextureRenderTargetResource *local_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_e8 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  this = local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = UEngine::GetWorldFromContextObject(GEngine,local_e0,LogAndReturnNull);
  if (this != (UTextureRenderTarget *)0x0) {
    pFVar6 = UTexture::GetResource((UTexture *)this);
    if ((pFVar6 != (FTextureResource *)0x0) && (pUVar5 != (UWorld *)0x0)) {
      local_c8 = UTextureRenderTarget::GameThread_GetRenderTargetResource(this);
      local_a8[0] = (code *)0x0;
      pcStack_c0 = local_d8;
      pcStack_b8 = pcStack_d0;
      local_80 = FMemory::Malloc(0x20,8);
      *local_80 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UKismetRenderingLibrary::ClearRenderTarget2D'::`5'::<lambda_1>,1,1>
                           ::_vftable_;
      local_80[1] = (code *)local_c8;
      local_80[2] = pcStack_c0;
      local_80[3] = pcStack_d0;
      if (local_80 + 1 != (code **)0x0) {
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UKismetRenderingLibrary::ClearRenderTarget2D'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UKismetRenderingLibrary::ClearRenderTarget2D_::__l5::TSTR_ClearRTCommand64>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_78._0_8_ = local_a8[0];
        local_50 = local_80;
        local_80 = (code **)0x0;
        local_78._16_8_ = local_98[0];
        local_78._24_8_ = local_98[1];
        local_78._32_8_ = local_98[2];
        local_a8[0] = (code *)0x0;
        local_48 = 2;
        pFVar7 = (FRenderCommandTag *)
                 TRenderCommandTag<`UKismetRenderingLibrary::ClearRenderTarget2D'::__l5::TSTR_ClearRTCommand64>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar7);
        uVar9 = (ulonglong)local_48;
        if (2 < uVar9) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            ppcVar8 = (code **)(local_78 + 0x10);
            if (local_50 != (code **)0x0) {
              ppcVar8 = local_50;
            }
            (**(code **)(*ppcVar8 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])(local_78);
        }
      }
      if (local_a8[0] != (code *)0x0) {
        ppcVar8 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar8 = local_80;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
    }
  }
  return;
}

// execConvertRenderTargetToTexture2DArrayEditorOnly @ 147de79a0

void __cdecl
UKismetRenderingLibrary::execConvertRenderTargetToTexture2DArrayEditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture *local_res10 [2];
  UTextureRenderTarget *local_res20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Kismet::RenderingLibrary::ConvertRenderTargetToTextureEditorOnly
            (local_18[0],local_res20,local_res10[0]);
  return;
}

// execConvertRenderTargetToTexture2DEditorOnly @ 147de7ab0

void __cdecl
UKismetRenderingLibrary::execConvertRenderTargetToTexture2DEditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture *local_res10 [2];
  UTextureRenderTarget *local_res20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Kismet::RenderingLibrary::ConvertRenderTargetToTextureEditorOnly
            (local_18[0],local_res20,local_res10[0]);
  return;
}

// execConvertRenderTargetToTextureCubeEditorOnly @ 147de7bc0

void __cdecl
UKismetRenderingLibrary::execConvertRenderTargetToTextureCubeEditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture *local_res10 [2];
  UTextureRenderTarget *local_res20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Kismet::RenderingLibrary::ConvertRenderTargetToTextureEditorOnly
            (local_18[0],local_res20,local_res10[0]);
  return;
}

// execConvertRenderTargetToTextureVolumeEditorOnly @ 147de7cd0

void __cdecl
UKismetRenderingLibrary::execConvertRenderTargetToTextureVolumeEditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture *local_res10 [2];
  UTextureRenderTarget *local_res20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Kismet::RenderingLibrary::ConvertRenderTargetToTextureEditorOnly
            (local_18[0],local_res20,local_res10[0]);
  return;
}

// execCreateRenderTarget2D @ 147de8400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execCreateRenderTarget2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  TEnumAsByte<ETextureRenderTargetFormat> TVar4;
  uint uVar5;
  uint uVar6;
  UObject *pUVar7;
  bool bVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  UTextureRenderTarget2D *this;
  longlong *plVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  TEnumAsByte<ETextureRenderTargetFormat> local_108 [4];
  int local_104;
  int local_100;
  uint local_fc;
  uint local_f8 [2];
  UObject *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_f0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_f8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_fc = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_fc,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_fc);
  }
  local_108[0].Value = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_104 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  bVar12 = local_104 != 0;
  local_100 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  pUVar7 = local_f0;
  uVar6 = local_f8[0];
  uVar5 = local_fc;
  TVar4.Value = local_108[0].Value;
  bVar13 = local_100 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar9 = UEngine::GetWorldFromContextObject(GEngine,local_f0,LogAndReturnNull);
  if ((((int)uVar6 < 1) || ((int)uVar5 < 1)) || (pUVar9 == (UWorld *)0x0)) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (pUVar7,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar10);
    local_d8._8_8_ = pUVar7;
    this = (UTextureRenderTarget2D *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar11 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (this == (UTextureRenderTarget2D *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewRenderTarget2D",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                         ,0x55,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->bAutoGenerateMips = '\0';
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
    this->field_0x174 = this->field_0x174 | bVar12 * '\x02';
    (this->RenderTargetFormat).Value = TVar4.Value;
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 | (uint)bVar13 * 2;
    *(undefined8 *)&(this->ClearColor).field0_0x0 = local_e8;
    *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8) = uStack_e0;
    UTextureRenderTarget2D::InitAutoFormat(this,uVar6,uVar5);
    UTextureRenderTarget2D::UpdateResourceImmediate(this,true);
    *(UTextureRenderTarget2D **)param_3 = this;
  }
  return;
}

// execCreateRenderTarget2DArray @ 147de8760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execCreateRenderTarget2DArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  UObject *pUVar8;
  bool bVar9;
  EPixelFormat EVar10;
  UWorld *pUVar11;
  UClass *pUVar12;
  UTextureRenderTarget2DArray *this;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_148 [32];
  byte local_118 [4];
  int local_114;
  uint local_110;
  uint local_10c;
  uint local_108 [4];
  UObject *local_f8;
  uint *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_108[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_10c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10c,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10c);
  }
  local_110 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_108[1] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108 + 1,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108 + 1);
  }
  local_114 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  pUVar8 = local_f8;
  uVar7 = local_108[0];
  uVar6 = local_10c;
  uVar5 = local_110;
  bVar4 = local_118[0];
  bVar14 = local_114 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar11 = UEngine::GetWorldFromContextObject(GEngine,local_f8,LogAndReturnNull);
  if (((((int)uVar7 < 1) || ((int)uVar6 < 1)) || ((int)uVar5 < 1)) || (pUVar11 == (UWorld *)0x0)) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (pUVar8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar12);
    local_d8._8_8_ = pUVar8;
    this = (UTextureRenderTarget2DArray *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar13 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if ((this == (UTextureRenderTarget2DArray *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewRenderTarget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                           ,0x6a,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
    local_108[2] = (uint)bVar4;
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 | (uint)bVar14 * 2;
    *(undefined8 *)&(this->ClearColor).field0_0x0 = local_e8;
    *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8) = uStack_e0;
    switch(bVar4) {
    case 0:
      EVar10 = PF_G8;
      break;
    case 1:
      EVar10 = PF_R8G8;
      break;
    case 2:
    case 3:
      EVar10 = PF_B8G8R8A8;
      break;
    case 4:
      EVar10 = PF_R16F;
      break;
    case 5:
      EVar10 = PF_G16R16F;
      break;
    case 6:
      EVar10 = PF_FloatRGBA;
      break;
    case 7:
      EVar10 = PF_R32_FLOAT;
      break;
    case 8:
      EVar10 = PF_G32R32F;
      break;
    case 9:
      EVar10 = PF_A32B32G32R32F;
      break;
    case 10:
      EVar10 = PF_A2B10G10R10;
      break;
    default:
      local_f0 = local_108 + 2;
      `GetPixelFormatFromRenderTargetFormat'::__l2::<lambda_1>::operator()(&local_f0);
      EVar10 = PF_Unknown;
    }
    UTextureRenderTarget2DArray::Init(this,uVar7,uVar6,uVar5,EVar10);
    UTextureRenderTarget2DArray::UpdateResourceImmediate(this,true);
    *(UTextureRenderTarget2DArray **)param_3 = this;
  }
  return;
}

// execCreateRenderTargetVolume @ 147de8b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execCreateRenderTargetVolume
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  UObject *pUVar8;
  bool bVar9;
  EPixelFormat EVar10;
  UWorld *pUVar11;
  UClass *pUVar12;
  UTextureRenderTargetVolume *this;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_148 [32];
  byte local_118 [4];
  int local_114;
  uint local_110;
  uint local_10c;
  uint local_108 [4];
  UObject *local_f8;
  uint *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_108[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_10c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10c,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10c);
  }
  local_110 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_118[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_108[1] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108 + 1,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108 + 1);
  }
  local_114 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  pUVar8 = local_f8;
  uVar7 = local_108[0];
  uVar6 = local_10c;
  uVar5 = local_110;
  bVar4 = local_118[0];
  bVar14 = local_114 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar11 = UEngine::GetWorldFromContextObject(GEngine,local_f8,LogAndReturnNull);
  if (((((int)uVar7 < 1) || ((int)uVar6 < 1)) || ((int)uVar5 < 1)) || (pUVar11 == (UWorld *)0x0)) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              (pUVar8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar12);
    local_d8._8_8_ = pUVar8;
    this = (UTextureRenderTargetVolume *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar13 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if ((this == (UTextureRenderTargetVolume *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewRenderTarget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                           ,0x7c,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffffd;
    local_108[2] = (uint)bVar4;
    puVar1 = (uint *)((longlong)&this->_padding_ + 4);
    *puVar1 = *puVar1 | (uint)bVar14 * 2;
    *(undefined8 *)&(this->ClearColor).field0_0x0 = local_e8;
    *(undefined8 *)((longlong)&(this->ClearColor).field0_0x0 + 8) = uStack_e0;
    switch(bVar4) {
    case 0:
      EVar10 = PF_G8;
      break;
    case 1:
      EVar10 = PF_R8G8;
      break;
    case 2:
    case 3:
      EVar10 = PF_B8G8R8A8;
      break;
    case 4:
      EVar10 = PF_R16F;
      break;
    case 5:
      EVar10 = PF_G16R16F;
      break;
    case 6:
      EVar10 = PF_FloatRGBA;
      break;
    case 7:
      EVar10 = PF_R32_FLOAT;
      break;
    case 8:
      EVar10 = PF_G32R32F;
      break;
    case 9:
      EVar10 = PF_A32B32G32R32F;
      break;
    case 10:
      EVar10 = PF_A2B10G10R10;
      break;
    default:
      local_f0 = local_108 + 2;
      `GetPixelFormatFromRenderTargetFormat'::__l2::<lambda_1>::operator()(&local_f0);
      EVar10 = PF_Unknown;
    }
    UTextureRenderTargetVolume::Init(this,uVar7,uVar6,uVar5,EVar10);
    UTextureRenderTargetVolume::UpdateResourceImmediate(this,true);
    *(UTextureRenderTargetVolume **)param_3 = this;
  }
  return;
}

// execDrawMaterialToRenderTarget @ 147def070

void __cdecl
UKismetRenderingLibrary::execDrawMaterialToRenderTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *local_res10 [2];
  UTextureRenderTarget2D *local_res20;
  UObject *local_18 [2];
  
  local_18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DrawMaterialToRenderTarget(local_18[0],local_res20,local_res10[0]);
  return;
}

// execEnablePathTracing @ 147df0000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execEnablePathTracing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGameViewportClient *pUVar2;
  longlong lVar3;
  bool bVar4;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) &&
     (pUVar2 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar2 != (UGameViewportClient *)0x0)) {
    lVar3 = (**(code **)(pUVar2->_padding_ + 0x38))(&pUVar2->_padding_);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xfffffffe;
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) | (uint)bVar4;
    }
  }
  return;
}

// execEndDrawCanvasToRenderTarget @ 147df00c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execEndDrawCanvasToRenderTarget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UTextureRenderTarget2D>_u_0 *pTVar2;
  UObject *local_res10 [3];
  TObjectPtr<UTextureRenderTarget2D>_u_0 local_18;
  undefined8 uStack_10;
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_18.DebugPtr = (UTextureRenderTarget2D *)0x0;
  uStack_10 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TObjectPtr<UTextureRenderTarget2D>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UTextureRenderTarget2D>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UTextureRenderTarget2D>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EndDrawCanvasToRenderTarget(local_res10[0],(FDrawToRenderTargetContext *)&pTVar2->ObjectPtr);
  return;
}

// execExportRenderTarget @ 147df3280

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execExportRenderTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UTextureRenderTarget2D *this;
  UObjectBaseUtility *this_00;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  FMessageLog *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FTextureResource *pFVar10;
  IFileManager *pIVar11;
  longlong *plVar12;
  FString *pFVar13;
  ForAnyElementType FVar14;
  IMessageLog *_Str;
  wchar_t *pwVar15;
  FName local_res10 [2];
  UTextureRenderTarget2D *local_res20;
  FText local_208;
  FString local_1f8;
  TSharedRef<FTokenizedMessage,1> local_1e8;
  IMessageLog *local_1d8;
  undefined8 local_1d0;
  UObjectBaseUtility *local_1c8;
  FScriptContainerElement *local_1c0;
  undefined8 local_1b8;
  TSharedRef<FTokenizedMessage,1> local_1b0;
  FText local_1a0;
  TSharedRef<FTokenizedMessage,1> local_190;
  FText local_180;
  FString local_170;
  FMessageLog local_160;
  FText local_130;
  FMessageLog local_120;
  undefined1 local_e8 [176];
  int local_38;
  
  iVar4 = 0;
  local_1c8 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_res20 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_1c0 = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1d8 = (IMessageLog *)0x0;
  local_1d0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  this_00 = local_1c8;
  this = local_res20;
  pwVar15 = L"";
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Str = (IMessageLog *)L"";
  if ((int)local_1d0 != 0) {
    _Str = local_1d8;
  }
  local_160.Messages.AllocatorInstance.Data = (FScriptContainerElement *)L"";
  if ((int)local_1b8 != 0) {
    local_160.Messages.AllocatorInstance.Data = local_1c0;
  }
  local_160.Messages.ArrayNum = iVar4;
  if (local_160.Messages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    sVar5 = wcslen((wchar_t *)local_160.Messages.AllocatorInstance.Data);
    local_160.Messages.ArrayNum = (int)sVar5;
  }
  local_160.MessageLog.Object = _Str;
  if (_Str != (IMessageLog *)0x0) {
    sVar5 = wcslen((wchar_t *)_Str);
    iVar4 = (int)sVar5;
  }
  local_160.MessageLog.SharedReferenceCount.ReferenceController._0_4_ = iVar4;
  FPaths::CombineInternal(&local_170,(TStringView<wchar_t> *)&local_160,2);
  FText::FText(&local_180);
  FPaths::ValidatePath(&local_170,&local_180);
  if (this == (UTextureRenderTarget2D *)0x0) {
    ::FName::FName(local_res10,"Blueprint");
    pFVar6 = FMessageLog::FMessageLog(&local_160,local_res10);
    if (this_00 == (UObjectBaseUtility *)0x0) {
      ::FString::FString(&local_1f8,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName(this_00,&local_1f8,(UObject *)0x0);
    }
    pFVar7 = FText::FromString((FText *)&local_1e8,&local_1f8);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_1b0,L"KismetRenderingLibrary",
                        L"ExportRenderTarget_InvalidTextureRenderTarget",
                        L"ExportRenderTarget[{0}]: TextureRenderTarget must be non-null.");
    pFVar9 = FTextFormat::FTextFormat((FTextFormat *)&local_1a0,pFVar8,Default);
    pFVar7 = FText::Format<FText>(&local_208,pFVar9,pFVar7);
    FMessageLog::Warning(pFVar6,&local_190,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_190.SharedReferenceCount.ReferenceController._4_4_,
                        (uint)local_190.SharedReferenceCount.ReferenceController));
    if ((FTokenizedMessage *)local_208.TextData.Reference != (FTokenizedMessage *)0x0) {
      (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
    }
LAB_147df34fa:
    if (local_1b0.Object != (FTokenizedMessage *)0x0) {
      (**(code **)((local_1b0.Object)->_padding_ + 0x10))();
    }
    if ((FName)local_1f8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    pFVar6 = &local_160;
  }
  else {
    pFVar10 = UTexture::GetResource((UTexture *)this);
    if (pFVar10 == (FTextureResource *)0x0) {
      ::FName::FName(local_res10,"Blueprint");
      pFVar6 = FMessageLog::FMessageLog(&local_160,local_res10);
      if (this_00 == (UObjectBaseUtility *)0x0) {
        ::FString::FString(&local_1f8,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName(this_00,&local_1f8,(UObject *)0x0);
      }
      pFVar7 = FText::FromString((FText *)&local_1e8,&local_1f8);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_208,L"KismetRenderingLibrary",
                          L"ExportRenderTarget_ReleasedTextureRenderTarget",
                          L"ExportRenderTarget[{0}]: render target has been released.");
      pFVar9 = FTextFormat::FTextFormat((FTextFormat *)&local_1a0,pFVar8,Default);
      pFVar7 = FText::Format<FText>((FText *)&local_190,pFVar9,pFVar7);
      FMessageLog::Warning(pFVar6,&local_1b0,pFVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b0.SharedReferenceCount.ReferenceController);
      local_1b0.Object = (FTokenizedMessage *)local_208.TextData.Reference;
      if (local_190.Object != (FTokenizedMessage *)0x0) {
        (**(code **)((local_190.Object)->_padding_ + 0x10))();
        local_1b0.Object = (FTokenizedMessage *)local_208.TextData.Reference;
      }
      goto LAB_147df34fa;
    }
    bVar3 = FText::IsEmpty(&local_180);
    if (bVar3) {
      if ((int)local_1d0 < 2) {
        ::FName::FName(local_res10,"Blueprint");
        pFVar6 = FMessageLog::FMessageLog(&local_120,local_res10);
        if (this_00 == (UObjectBaseUtility *)0x0) {
          ::FString::FString((FString *)&local_208,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName(this_00,(FString *)&local_208,(UObject *)0x0);
        }
        pFVar7 = FText::FromString((FText *)&local_160,(FString *)&local_208);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_1b0,L"KismetRenderingLibrary",
                            L"ExportRenderTarget_InvalidFileName",
                            L"ExportRenderTarget[{0}]: FileName must be non-empty.");
        pFVar9 = FTextFormat::FTextFormat((FTextFormat *)&local_130,pFVar8,Default);
        pFVar7 = FText::Format<FText>(&local_1a0,pFVar9,pFVar7);
        FMessageLog::Warning(pFVar6,&local_1e8,pFVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e8.SharedReferenceCount.ReferenceController);
        if (local_1a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
        }
        goto LAB_147df36fe;
      }
      pIVar11 = IFileManager::Get();
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_170.Data.ArrayNum != 0) {
        FVar14.Data = local_170.Data.AllocatorInstance.Data;
      }
      plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,FVar14.Data);
      if (plVar12 != (longlong *)0x0) {
        FBufferArchive::FBufferArchive((FBufferArchive *)local_e8);
        if ((this->RenderTargetFormat).Value == '\x06') {
          pFVar13 = FPaths::GetExtension((FString *)&local_1e8,&local_170,false);
          if ((pFVar13->Data).ArrayNum != 0) {
            pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp(pwVar15,L"HDR");
          if (local_1e8.Object != (FTokenizedMessage *)0x0) {
            FMemory::Free(local_1e8.Object);
          }
          if (iVar4 == 0) {
            bVar3 = FImageUtils::ExportRenderTarget2DAsHDR(this,(FArchive *)local_e8);
          }
          else {
            bVar3 = FImageUtils::ExportRenderTarget2DAsEXR(this,(FArchive *)local_e8);
          }
        }
        else {
          bVar3 = FImageUtils::ExportRenderTarget2DAsPNG(this,(FArchive *)local_e8);
        }
        if (bVar3 != false) {
          (**(code **)(*plVar12 + 0x188))(plVar12,local_e8._168_8_,(longlong)local_38);
        }
        (**(code **)*plVar12)(plVar12,1);
        if ((void *)local_e8._168_8_ != (void *)0x0) {
          FMemory::Free((void *)local_e8._168_8_);
        }
        FArchive::~FArchive((FArchive *)local_e8);
        goto LAB_147df3956;
      }
      ::FName::FName(local_res10,"Blueprint");
      pFVar6 = FMessageLog::FMessageLog(&local_120,local_res10);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_1a0,L"KismetRenderingLibrary",
                          L"ExportRenderTarget_FileWriterFailedToCreate",
                          L"ExportRenderTarget: FileWrite failed to create.");
      FMessageLog::Warning(pFVar6,&local_1e8,pFVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
      if (local_1a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
      }
    }
    else {
      ::FName::FName((FName *)&local_1f8,"Blueprint");
      pFVar6 = FMessageLog::FMessageLog(&local_120,(FName *)&local_1f8);
      local_190.Object = (FTokenizedMessage *)local_180.TextData.Reference;
      if (local_180.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_180.TextData.Reference + 8))
                  (local_180.TextData.Reference,local_res10);
      }
      local_190.SharedReferenceCount.ReferenceController._0_4_ = local_180.Flags;
      if (this_00 == (UObjectBaseUtility *)0x0) {
        ::FString::FString((FString *)&local_208,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName(this_00,(FString *)&local_208,(UObject *)0x0);
      }
      pFVar7 = FText::FromString(&local_130,(FString *)&local_208);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_1e8,L"KismetRenderingLibrary",
                          L"ExportRenderTarget_InvalidFilePath",
                          L"ExportRenderTarget[{0}]: Invalid file path provided: \'{1}\'");
      pFVar9 = FTextFormat::FTextFormat((FTextFormat *)&local_160,pFVar8,Default);
      pFVar7 = FText::Format<FText,FText>(&local_1a0,pFVar9,pFVar7,(FText *)&local_190);
      FMessageLog::Warning(pFVar6,&local_1b0,pFVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b0.SharedReferenceCount.ReferenceController);
      local_1b0.Object = local_1e8.Object;
      if (local_1a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
        local_1b0.Object = local_1e8.Object;
      }
LAB_147df36fe:
      if (local_1b0.Object != (FTokenizedMessage *)0x0) {
        (**(code **)((local_1b0.Object)->_padding_ + 0x10))();
      }
      if ((FTokenizedMessage *)local_208.TextData.Reference != (FTokenizedMessage *)0x0) {
        FMemory::Free(local_208.TextData.Reference);
      }
    }
    pFVar6 = &local_120;
  }
  FMessageLog::~FMessageLog(pFVar6);
LAB_147df3956:
  if (local_180.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_1d8 != (IMessageLog *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1c0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0);
  }
  return;
}

// execExportTexture2D @ 147df39b0

void __cdecl
UKismetRenderingLibrary::execExportTexture2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture2D *local_res10 [2];
  UObject *local_res20;
  FString local_28;
  FString local_18;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UTexture2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ExportTexture2D(local_res20,local_res10[0],&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execImportBufferAsTexture2D @ 147e02580

void __cdecl
UKismetRenderingLibrary::execImportBufferAsTexture2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture2D *pUVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 local_res10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
    ;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FImageUtils::ImportBufferAsTexture2D(pTVar3);
  *(UTexture2D **)param_3 = pUVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execImportFileAsTexture2D @ 147e02670

void __cdecl
UKismetRenderingLibrary::execImportFileAsTexture2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture2D *pUVar2;
  undefined8 local_res10;
  FString local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FImageUtils::ImportFileAsTexture2D(&local_18);
  *(UTexture2D **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execMakeSkinWeightInfo @ 147e13f80

void __cdecl
UKismetRenderingLibrary::execMakeSkinWeightInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [20];
  
  local_74 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  local_78 = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_70 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_77 = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_77,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_77);
  }
  local_6c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6c);
  }
  local_76 = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_76,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_76);
  }
  local_68[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_75 = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_75,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_75);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(ulonglong *)param_3 = CONCAT44(local_70,local_74);
  *(ulonglong *)((longlong)param_3 + 8) = CONCAT44(local_68[0],local_6c);
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined8 *)((longlong)param_3 + 0x18) = 0;
  *(undefined8 *)((longlong)param_3 + 0x20) = 0;
  *(undefined8 *)((longlong)param_3 + 0x28) = 0;
  *(ulonglong *)((longlong)param_3 + 0x30) =
       (ulonglong)CONCAT13(local_75,CONCAT12(local_76,CONCAT11(local_77,local_78)));
  *(undefined4 *)((longlong)param_3 + 0x38) = 0;
  return;
}

// execNumPrecompilingPSOsRemaining @ 147e20230

void __cdecl
UKismetRenderingLibrary::execNumPrecompilingPSOsRemaining
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = FShaderPipelineCache::NumPrecompilesRemaining();
  *(uint *)param_3 = uVar1;
  return;
}

// execReadRenderTarget @ 147e28a20

void __cdecl
UKismetRenderingLibrary::execReadRenderTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  FProperty *pFVar4;
  code *pcVar5;
  int iVar6;
  UTextureRenderTarget *this;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  FTextureRenderTargetResource *pFVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  ForAnyElementType *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  int local_res20 [2];
  undefined4 local_108 [2];
  ForAnyElementType local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int local_d0;
  UTextureRenderTarget *local_c8;
  longlong local_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  
  local_c0 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_c8 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res20[0] = 0;
  pFVar15 = &local_a8;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar15 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_c8;
  bVar21 = local_res20[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_c0 == 0) || (local_c8 == (UTextureRenderTarget *)0x0)) {
LAB_147e28e32:
    uVar9 = 0;
    goto LAB_147e28e34;
  }
  uVar16 = *(int *)((longlong)&local_c8[1]._padding_ + 4) * (int)local_c8[1]._padding_;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  iVar10 = *(int *)((longlong)&pFVar15[1].Data + 4);
  piVar1 = (int *)((longlong)&pFVar15[1].Data + 4);
  *(undefined4 *)&pFVar15[1].Data = 0;
  if (iVar10 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,pFVar15,0,piVar1);
  }
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar16,&local_100,0,(int *)((longlong)&local_f8 + 4));
  }
  iVar10 = *(int *)((longlong)&this[1]._padding_ + 4);
  iVar6 = (int)this[1]._padding_;
  pFVar11 = UTextureRenderTarget::GameThread_GetRenderTargetResource(this);
  if (pFVar11 == (FTextureRenderTargetResource *)0x0) {
    cVar7 = '\0';
    goto LAB_147e28dff;
  }
  iVar13 = (int)this[1]._padding_;
  iVar3 = *(int *)((longlong)&this[1]._padding_ + 4);
  uStack_e8 = CONCAT31(uStack_e8._1_3_,1);
  uStack_e4 = 0x467a0000;
  iVar12 = iVar13 + -1;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  if (0 < iVar12) {
    iVar12 = 0;
  }
  local_b8 = 0;
  if (0 < iVar12) {
    local_b8 = iVar12;
  }
  iVar12 = iVar3 + -1;
  if (0 < iVar12) {
    iVar12 = 0;
  }
  iStack_b4 = 0;
  if (0 < iVar12) {
    iStack_b4 = iVar12;
  }
  iVar12 = iVar13;
  if (iVar6 < iVar13) {
    iVar12 = iVar6;
  }
  iVar6 = 1;
  if (1 < iVar12) {
    iVar6 = iVar12;
  }
  iVar12 = iVar3;
  if (iVar10 < iVar3) {
    iVar12 = iVar10;
  }
  local_d0 = 1;
  if (1 < iVar12) {
    local_d0 = iVar12;
  }
  iVar12 = (iVar6 - iVar13) + local_b8;
  iVar10 = 0;
  if (0 < iVar12) {
    iVar10 = iVar12;
  }
  iVar13 = (local_d0 - iVar3) + iStack_b4;
  iVar12 = 0;
  if (0 < iVar13) {
    iVar12 = iVar13;
  }
  local_d0 = local_d0 - iVar12;
  local_b0 = local_b8 + (iVar6 - iVar10);
  iStack_ac = local_d0 + iStack_b4;
  if (bVar21) {
    local_f0 = 0x300000006;
  }
  else {
    local_f0 = 6;
  }
  pFVar11 = UTextureRenderTarget::GameThread_GetRenderTargetResource(this);
  plVar19 = &pFVar11->_padding_;
  if (pFVar11 == (FTextureRenderTargetResource *)0x0) {
    plVar19 = (longlong *)0x0;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x3d0))(this);
  iVar10 = (iVar6 - iVar10) * local_d0;
  if (cVar7 == '\x01') {
LAB_147e28d86:
    local_88 = CONCAT44(iStack_b4,local_b8);
    local_48 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
    local_80 = CONCAT44(iStack_ac,local_b0);
    local_58 = (undefined4)local_f0;
    uStack_54 = local_f0._4_4_;
    uStack_50 = uStack_e8;
    uStack_4c = uStack_e4;
    local_40 = 0;
    cVar8 = (**(code **)(*plVar19 + 0x70))(plVar19,&local_100,&local_58,&local_88);
    if (cVar8 == '\0') {
      cVar7 = '\0';
    }
    else if ((uint)local_f8 != iVar10) {
      iVar10 = 0x163;
      pcVar14 = "OutHDRValues.Num() == NumPixelsToRead";
LAB_147e28de2:
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         (pcVar14,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                          ,iVar10,L"");
      if (bVar21) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  else if (cVar7 == '\x02') {
    local_98 = CONCAT44(iStack_b4,local_b8);
    local_68 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
    local_90 = CONCAT44(iStack_ac,local_b0);
    local_78 = (undefined4)local_f0;
    uStack_74 = local_f0._4_4_;
    uStack_70 = uStack_e8;
    uStack_6c = uStack_e4;
    local_60 = 0;
    cVar8 = (**(code **)(*plVar19 + 0x60))(plVar19,pFVar15,&local_78,&local_98);
    if (cVar8 == '\0') {
      cVar7 = '\0';
    }
    else if (*(int *)&pFVar15[1].Data != iVar10) {
      iVar10 = 0x158;
      pcVar14 = "OutLDRValues.Num() == NumPixelsToRead";
      goto LAB_147e28de2;
    }
  }
  else {
    if (cVar7 == '\n') goto LAB_147e28d86;
    cVar7 = '\0';
  }
LAB_147e28dff:
  if (cVar7 == '\0') {
LAB_147e28e23:
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    goto LAB_147e28e32;
  }
  if (cVar7 == '\x01') {
LAB_147e28e9d:
    if (((*(int *)&pFVar15[1].Data != 0) || ((uint)local_f8 != uVar16)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutSamples.Num() == 0 && LinearSamples.Num() == NumSamples",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                            ,0x1a3,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar20 = (longlong)(int)uVar16;
    uVar18 = 0;
    if (0 < (int)uVar16) {
      lVar17 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar18 < (int)(uint)local_f8) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FLinearColor::ToFColorSRGB((FLinearColor *)(local_100.Data + lVar17));
        if (((pFVar15->Data <= (FScriptContainerElement *)local_108) &&
            ((FScriptContainerElement *)local_108 < pFVar15->Data + (longlong)*piVar1 * 4)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *(int *)&pFVar15[1].Data;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar15,piVar1);
        }
        uVar18 = uVar18 + 1;
        *(int *)&pFVar15[1].Data = iVar10 + 1;
        lVar17 = lVar17 + 0x10;
        *(undefined4 *)(pFVar15->Data + (longlong)iVar10 * 4) = local_108[0];
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
      uVar9 = 1;
      goto LAB_147e28e34;
    }
  }
  else {
    if (cVar7 != '\x02') {
      if (cVar7 != '\n') goto LAB_147e28e23;
      goto LAB_147e28e9d;
    }
    if (((*(uint *)&pFVar15[1].Data != uVar16) || ((uint)local_f8 != 0)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutSamples.Num() == NumSamples && LinearSamples.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                            ,0x19f,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
  }
  uVar9 = 1;
LAB_147e28e34:
  *(undefined1 *)param_3 = uVar9;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// execReadRenderTargetPixel @ 147e29020

void __cdecl
UKismetRenderingLibrary::execReadRenderTargetPixel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FColor FVar2;
  undefined4 extraout_var;
  undefined4 local_res10 [2];
  int local_res18 [4];
  undefined8 local_28;
  UTextureRenderTarget2D *local_20;
  
  local_20 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = ReadRenderTargetPixel((UObject *)(local_res18 + 2),local_20,(int)local_28,local_res18[0]);
  *(undefined4 *)param_3 = *(undefined4 *)CONCAT44(extraout_var,FVar2.field0_0x0);
  return;
}

// execReadRenderTargetRaw @ 147e29170

void __cdecl
UKismetRenderingLibrary::execReadRenderTargetRaw(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  UTextureRenderTarget *this;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  FTextureRenderTargetResource *pFVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  ForAnyElementType *pFVar18;
  uint uVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_res20 [2];
  ForAnyElementType local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined2 local_128;
  undefined2 uStack_126;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int local_118;
  UTextureRenderTarget *local_110;
  longlong local_108;
  int local_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  
  local_108 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_110 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_res20[0] = 0;
  pFVar18 = &local_e0;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar18 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_110;
  bVar23 = local_res20[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_108 == 0) || (local_110 == (UTextureRenderTarget *)0x0)) {
LAB_147e2958d:
    uVar10 = 0;
    goto LAB_147e2958f;
  }
  uVar19 = *(int *)((longlong)&local_110[1]._padding_ + 4) * (int)local_110[1]._padding_;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  iVar12 = *(int *)((longlong)&pFVar18[1].Data + 4);
  piVar1 = (int *)((longlong)&pFVar18[1].Data + 4);
  *(undefined4 *)&pFVar18[1].Data = 0;
  if (iVar12 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar19,pFVar18,0,piVar1);
  }
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  if (0 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&local_148,0,(int *)((longlong)&local_140 + 4));
  }
  iVar12 = *(int *)((longlong)&this[1]._padding_ + 4);
  iVar7 = (int)this[1]._padding_;
  pFVar13 = UTextureRenderTarget::GameThread_GetRenderTargetResource(this);
  if (pFVar13 == (FTextureRenderTargetResource *)0x0) {
    cVar8 = '\0';
    goto LAB_147e29560;
  }
  iVar15 = (int)this[1]._padding_;
  iVar3 = *(int *)((longlong)&this[1]._padding_ + 4);
  uStack_130 = CONCAT31(uStack_130._1_3_,1);
  uStack_12c = 0x467a0000;
  iVar14 = iVar15 + -1;
  local_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  if (0 < iVar14) {
    iVar14 = 0;
  }
  local_100 = 0;
  if (0 < iVar14) {
    local_100 = iVar14;
  }
  iVar14 = iVar3 + -1;
  if (0 < iVar14) {
    iVar14 = 0;
  }
  iStack_fc = 0;
  if (0 < iVar14) {
    iStack_fc = iVar14;
  }
  iVar14 = iVar15;
  if (iVar7 < iVar15) {
    iVar14 = iVar7;
  }
  iVar7 = 1;
  if (1 < iVar14) {
    iVar7 = iVar14;
  }
  iVar14 = iVar3;
  if (iVar12 < iVar3) {
    iVar14 = iVar12;
  }
  local_118 = 1;
  if (1 < iVar14) {
    local_118 = iVar14;
  }
  iVar14 = (iVar7 - iVar15) + local_100;
  iVar12 = 0;
  if (0 < iVar14) {
    iVar12 = iVar14;
  }
  iVar15 = (local_118 - iVar3) + iStack_fc;
  iVar14 = 0;
  if (0 < iVar15) {
    iVar14 = iVar15;
  }
  local_118 = local_118 - iVar14;
  local_f8 = local_100 + (iVar7 - iVar12);
  iStack_f4 = local_118 + iStack_fc;
  if (bVar23) {
    local_138 = 0x300000006;
  }
  else {
    local_138 = 6;
  }
  pFVar13 = UTextureRenderTarget::GameThread_GetRenderTargetResource(this);
  plVar21 = &pFVar13->_padding_;
  if (pFVar13 == (FTextureRenderTargetResource *)0x0) {
    plVar21 = (longlong *)0x0;
  }
  cVar8 = (**(code **)(this->_padding_ + 0x3d0))(this);
  iVar12 = (iVar7 - iVar12) * local_118;
  if (cVar8 == '\x01') {
LAB_147e294e8:
    local_c0 = CONCAT44(iStack_fc,local_100);
    uStack_80 = CONCAT44(uStack_12c,uStack_130);
    local_78 = CONCAT44(uStack_124,CONCAT22(uStack_126,local_128));
    local_b8 = CONCAT44(iStack_f4,local_f8);
    local_88 = local_138;
    local_70 = 0;
    cVar9 = (**(code **)(*plVar21 + 0x70))(plVar21,pFVar18,&local_88,&local_c0);
    if (cVar9 == '\0') {
      cVar8 = '\0';
    }
    else if (*(int *)&pFVar18[1].Data != iVar12) {
      iVar12 = 0x163;
      pcVar16 = "OutHDRValues.Num() == NumPixelsToRead";
LAB_147e29540:
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         (pcVar16,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                          ,iVar12,L"");
      if (bVar23) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  else if (cVar8 == '\x02') {
    local_d0 = CONCAT44(iStack_fc,local_100);
    uStack_a0 = CONCAT44(uStack_12c,uStack_130);
    local_98 = CONCAT44(uStack_124,CONCAT22(uStack_126,local_128));
    local_c8 = CONCAT44(iStack_f4,local_f8);
    local_a8 = local_138;
    local_90 = 0;
    cVar9 = (**(code **)(*plVar21 + 0x60))(plVar21,&local_148,&local_a8,&local_d0);
    if (cVar9 == '\0') {
      cVar8 = '\0';
    }
    else if ((uint)local_140 != iVar12) {
      iVar12 = 0x158;
      pcVar16 = "OutLDRValues.Num() == NumPixelsToRead";
      goto LAB_147e29540;
    }
  }
  else {
    if (cVar8 == '\n') goto LAB_147e294e8;
    cVar8 = '\0';
  }
LAB_147e29560:
  if (cVar8 == '\0') {
LAB_147e2957e:
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    goto LAB_147e2958d;
  }
  if (cVar8 == '\x01') {
LAB_147e29881:
    if ((((uint)local_140 != 0) || (*(uint *)&pFVar18[1].Data != uVar19)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Samples.Num() == 0 && OutLinearSamples.Num() == NumSamples",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                            ,0x206,L""), bVar23)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
      uVar10 = 1;
      goto LAB_147e2958f;
    }
  }
  else {
    if (cVar8 != '\x02') {
      if (cVar8 != '\n') goto LAB_147e2957e;
      goto LAB_147e29881;
    }
    if ((((uint)local_140 != uVar19) || (*(int *)&pFVar18[1].Data != 0)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Samples.Num() == NumSamples && OutLinearSamples.Num() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\KismetRenderingLibrary.cpp"
                            ,0x1fe,L""), bVar23)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar17 = 0;
    if (0 < (int)uVar19) {
      lVar22 = 0;
      do {
        uVar20 = ~uVar17 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar17 < (int)(uint)local_140) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar26 = (float)(byte)local_148.Data[lVar22 * 4 + 3];
        uVar11 = 0;
        if ((int)uVar17 < (int)(uint)local_140) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar25 = (float)(byte)local_148.Data[lVar22 * 4];
        uVar11 = 0;
        if ((int)uVar17 < (int)(uint)local_140) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar24 = (float)(byte)local_148.Data[lVar22 * 4 + 1];
        uVar11 = 0;
        if ((int)uVar17 < (int)(uint)local_140) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_f0 = (float)(byte)local_148.Data[lVar22 * 4 + 2];
        fStack_ec = fVar24;
        fStack_e8 = fVar25;
        fStack_e4 = fVar26;
        if (((pFVar18->Data <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 < pFVar18->Data + (longlong)*piVar1 * 0x10)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = *(int *)&pFVar18[1].Data;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,pFVar18,piVar1);
        }
        uVar17 = uVar17 + 1;
        *(int *)&pFVar18[1].Data = iVar12 + 1;
        lVar22 = lVar22 + 1;
        pFVar5 = pFVar18->Data;
        *(ulonglong *)(pFVar5 + (longlong)iVar12 * 0x10) = CONCAT44(fStack_ec,local_f0);
        *(ulonglong *)(pFVar5 + (longlong)iVar12 * 0x10 + 8) = CONCAT44(fStack_e4,fStack_e8);
      } while (lVar22 < (int)uVar19);
    }
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
  }
  uVar10 = 1;
LAB_147e2958f:
  *(undefined1 *)param_3 = uVar10;
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  return;
}

// execReadRenderTargetRawPixel @ 147e298e0

void __cdecl
UKismetRenderingLibrary::execReadRenderTargetRawPixel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FLinearColor *pFVar3;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  UTextureRenderTarget2D *local_38;
  UObject *local_30;
  FLinearColor local_28;
  
  local_30 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = ReadRenderTargetRawPixel
                     (&local_28,local_30,local_38,local_res20[0],local_res18[0],local_res10[0] != 0)
  ;
  uVar2 = *(undefined8 *)((longlong)&pFVar3->field0_0x0 + 8);
  *(undefined8 *)param_3 = *(undefined8 *)&pFVar3->field0_0x0;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  return;
}

// execReadRenderTargetRawPixelArea @ 147e29aa0

void __cdecl
UKismetRenderingLibrary::execReadRenderTargetRawPixelArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_48;
  int local_44;
  UTextureRenderTarget2D *local_40;
  UObject *local_38;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_30;
  
  local_38 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_40 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_44 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  local_48 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = ReadRenderTargetRawPixelArea
                     (&local_30,local_38,local_40,local_44,local_48,local_res20[0],local_res18[0],
                      local_res10[0] != 0);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// execReadRenderTargetRawUV @ 147e29cf0

void __cdecl
UKismetRenderingLibrary::execReadRenderTargetRawUV(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  int local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  UTextureRenderTarget2D *local_48;
  UObject *local_40;
  FLinearColor_u_0 local_38 [2];
  
  local_40 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48 == (UTextureRenderTarget2D *)0x0) {
    *(FLinearColor_u_0 *)param_3 = FLinearColor::Red.field0_0x0;
    return;
  }
  fVar2 = local_res18[0];
  if (__real_3f800000 <= local_res18[0]) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = local_res20[0];
  if (__real_3f800000 <= local_res20[0]) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  ReadRenderTargetRawPixel
            ((FLinearColor *)&local_38[0]._s_0,local_40,local_48,
             (int)(fVar3 * (float)local_48->SizeX),(int)(fVar2 * (float)local_48->SizeY),
             local_res10[0] != 0);
  *(undefined8 *)param_3 = local_38[0]._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_38[0]._8_8_;
  return;
}

// execReadRenderTargetRawUVArea @ 147e29f20

void __cdecl
UKismetRenderingLibrary::execReadRenderTargetRawUVArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  int iVar3;
  int iVar4;
  int local_res10 [2];
  UTextureRenderTarget2D *local_res18;
  UObject *local_res20;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_68;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UTextureRenderTarget2D *)0x0) {
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = 0;
    iVar3 = 0;
  }
  else {
    if (__real_3ff0000000000000 <= local_40) {
      local_40 = __real_3ff0000000000000;
    }
    if (local_40 <= 0.0) {
      local_40 = 0.0;
    }
    if (__real_3ff0000000000000 <= local_50) {
      local_50 = __real_3ff0000000000000;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (__real_3ff0000000000000 <= local_48) {
      local_48 = __real_3ff0000000000000;
    }
    if (local_48 <= 0.0) {
      local_48 = 0.0;
    }
    if (__real_3ff0000000000000 <= local_58) {
      local_58 = __real_3ff0000000000000;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    ReadRenderTargetRawPixelArea
              (&local_68,local_res20,local_res18,(int)(local_58 * (double)local_res18->SizeX),
               (int)(local_50 * (double)local_res18->SizeY),
               (int)(local_48 * (double)local_res18->SizeX),
               (int)(local_40 * (double)local_res18->SizeY),local_res10[0] != 0);
    iVar4 = local_68.ArrayNum;
    iVar3 = local_68.ArrayMax;
  }
  if (param_3 == &local_68) {
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  else {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = iVar4;
    *(int *)((longlong)param_3 + 0xc) = iVar3;
  }
  return;
}

// execReadRenderTargetUV @ 147e2a180

void __cdecl
UKismetRenderingLibrary::execReadRenderTargetUV(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  float local_res18 [2];
  undefined4 local_res20;
  longlong local_38;
  UTextureRenderTarget2D *local_30 [3];
  
  local_30[0] = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  local_38 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38 == 0) {
    *(FColor_u_0 *)param_3 = FColor::Red.field0_0x0;
    return;
  }
  fVar2 = local_res18[0];
  if (__real_3f800000 <= local_res18[0]) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  ReadRenderTargetPixel
            ((UObject *)(local_res18 + 2),local_30[0],(int)local_38,
             (int)(fVar2 * (float)*(int *)(local_38 + 0x158)));
  *(undefined4 *)param_3 = local_res20;
  return;
}

// execRefreshPathTracingOutput @ 147e2a350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execRefreshPathTracingOutput
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UGameViewportClient *pUVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) &&
     (pUVar1 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar1 != (UGameViewportClient *)0x0)) {
    lVar3 = (**(code **)(pUVar1->_padding_ + 0x180))();
    if ((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 600), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e2a3a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x240))(plVar2,1);
      return;
    }
  }
  return;
}

// execReleaseRenderTarget2D @ 147e2a3e0

void __cdecl
UKismetRenderingLibrary::execReleaseRenderTarget2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture *local_res10 [3];
  
  local_res10[0] = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UTexture *)0x0) {
    UTexture::ReleaseResource(local_res10[0]);
  }
  return;
}

// execRenderTargetCreateStaticTexture2DArrayEditorOnly @ 147e2a5e0

void __cdecl
UKismetRenderingLibrary::execRenderTargetCreateStaticTexture2DArrayEditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  byte bVar4;
  byte bVar5;
  UTextureRenderTarget *pUVar6;
  void *_Src;
  FString *pFVar7;
  UTexture *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  byte local_res10 [8];
  byte local_res18 [8];
  UTextureRenderTarget *local_res20;
  FString local_68;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  
  local_res20 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res18[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_58;
  bVar5 = local_res18[0];
  bVar4 = local_res10[0];
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)(int)local_50;
  local_68.Data.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  pUVar6 = local_res20;
  pFVar7 = ::FString::FString(&local_48,&local_68);
  pUVar8 = UE::Kismet::RenderingLibrary::RenderTargetCreateStaticTextureEditorOnly
                     (pUVar6,pFVar7,(uint)bVar5,(uint)bVar4);
  if (pUVar8 != (UTexture *)0x0) {
    pUVar9 = Z_Construct_UClass_UTexture2DArray_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar9->_padding_)) goto LAB_147e2a795;
  }
  pUVar8 = (UTexture *)0x0;
LAB_147e2a795:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  *(UTexture **)param_3 = pUVar8;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execRenderTargetCreateStaticTexture2DEditorOnly @ 147e2a7d0

void __cdecl
UKismetRenderingLibrary::execRenderTargetCreateStaticTexture2DEditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  byte bVar4;
  byte bVar5;
  UTextureRenderTarget *pUVar6;
  void *_Src;
  FString *pFVar7;
  UTexture *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  byte local_res10 [8];
  byte local_res18 [8];
  UTextureRenderTarget *local_res20;
  FString local_68;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  
  local_res20 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res18[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_58;
  bVar5 = local_res18[0];
  bVar4 = local_res10[0];
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)(int)local_50;
  local_68.Data.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  pUVar6 = local_res20;
  pFVar7 = ::FString::FString(&local_48,&local_68);
  pUVar8 = UE::Kismet::RenderingLibrary::RenderTargetCreateStaticTextureEditorOnly
                     (pUVar6,pFVar7,(uint)bVar5,(uint)bVar4);
  if (pUVar8 != (UTexture *)0x0) {
    pUVar9 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar9->_padding_)) goto LAB_147e2a985;
  }
  pUVar8 = (UTexture *)0x0;
LAB_147e2a985:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  *(UTexture **)param_3 = pUVar8;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execRenderTargetCreateStaticTextureCubeEditorOnly @ 147e2a9c0

void __cdecl
UKismetRenderingLibrary::execRenderTargetCreateStaticTextureCubeEditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  byte bVar4;
  byte bVar5;
  UTextureRenderTarget *pUVar6;
  void *_Src;
  FString *pFVar7;
  UTexture *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  byte local_res10 [8];
  byte local_res18 [8];
  UTextureRenderTarget *local_res20;
  FString local_68;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  
  local_res20 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res18[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_58;
  bVar5 = local_res18[0];
  bVar4 = local_res10[0];
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)(int)local_50;
  local_68.Data.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  pUVar6 = local_res20;
  pFVar7 = ::FString::FString(&local_48,&local_68);
  pUVar8 = UE::Kismet::RenderingLibrary::RenderTargetCreateStaticTextureEditorOnly
                     (pUVar6,pFVar7,(uint)bVar5,(uint)bVar4);
  if (pUVar8 != (UTexture *)0x0) {
    pUVar9 = Z_Construct_UClass_UTextureCube_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar9->_padding_)) goto LAB_147e2ab75;
  }
  pUVar8 = (UTexture *)0x0;
LAB_147e2ab75:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  *(UTexture **)param_3 = pUVar8;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execRenderTargetCreateStaticVolumeTextureEditorOnly @ 147e2abb0

void __cdecl
UKismetRenderingLibrary::execRenderTargetCreateStaticVolumeTextureEditorOnly
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  byte bVar4;
  byte bVar5;
  UTextureRenderTarget *pUVar6;
  void *_Src;
  FString *pFVar7;
  UTexture *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  byte local_res10 [8];
  byte local_res18 [8];
  UTextureRenderTarget *local_res20;
  FString local_68;
  void *local_58;
  undefined8 local_50;
  FString local_48;
  
  local_res20 = (UTextureRenderTarget *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res18[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_58;
  bVar5 = local_res18[0];
  bVar4 = local_res10[0];
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)(int)local_50;
  local_68.Data.ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,(ForAnyElementType *)&local_68,(int)local_50,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  pUVar6 = local_res20;
  pFVar7 = ::FString::FString(&local_48,&local_68);
  pUVar8 = UE::Kismet::RenderingLibrary::RenderTargetCreateStaticTextureEditorOnly
                     (pUVar6,pFVar7,(uint)bVar5,(uint)bVar4);
  if (pUVar8 != (UTexture *)0x0) {
    pUVar9 = Z_Construct_UClass_UVolumeTexture_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar9->_padding_)) goto LAB_147e2ad65;
  }
  pUVar8 = (UTexture *)0x0;
LAB_147e2ad65:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  *(UTexture **)param_3 = pUVar8;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execResizeRenderTarget2D @ 147e2b4d0

void __cdecl
UKismetRenderingLibrary::execResizeRenderTarget2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMessageLog *this;
  FText *pFVar2;
  uint local_res10 [4];
  uint local_res20 [2];
  UTextureRenderTarget2D *local_68;
  FName local_60;
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  local_68 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_68 != (UTextureRenderTarget2D *)0x0) {
    if ((0 < (int)local_res10[0]) && (0 < (int)local_res20[0])) {
      UTextureRenderTarget2D::ResizeTarget(local_68,local_res10[0],local_res20[0]);
      return;
    }
    ::FName::FName(&local_60,"Blueprint");
    this = FMessageLog::FMessageLog(&local_38,&local_60);
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"KismetRenderingLibrary",
                        L"ResizeRenderTarget2D_InvalidDimensions",
                        L"ResizeRenderTarget2D: Dimensions must be positive.");
    FMessageLog::Warning(this,&local_58,pFVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
  }
  return;
}

// execSetCastInsetShadowForAllAttachments @ 147e2e510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UKismetRenderingLibrary::execSetCastInsetShadowForAllAttachments
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res20 [2];
  UPrimitiveComponent *local_18 [2];
  
  local_18[0] = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCastInsetShadowForAllAttachments(local_18[0],bVar2,local_res20[0] != 0);
  return;
}


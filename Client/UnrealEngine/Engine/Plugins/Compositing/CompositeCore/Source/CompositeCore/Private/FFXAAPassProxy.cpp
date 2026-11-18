// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 2

// Add @ 14ea788d0

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FPassTexture * __thiscall
UE::CompositeCore::FFXAAPassProxy::Add
          (FFXAAPassProxy *this,FPassTexture *__return_storage_ptr__,FRDGBuilder *param_1,
          FSceneView *param_2,FPassInputArray *param_3,FPassContext *param_4)

{
  char cVar1;
  FRDGTexture *pFVar2;
  FResourceMetadata FVar3;
  code *pcVar4;
  float fVar5;
  FPassInputArray *pFVar6;
  bool bVar7;
  int iVar8;
  EFXAAQuality EVar9;
  EFXAAQuality EVar10;
  FRDGScope *this_00;
  FPassTexture *pFVar11;
  FScreenPassTexture *pFVar12;
  IConsoleManager *pIVar13;
  ulonglong uVar14;
  TIntPoint<int>_u_0 local_res10;
  TIntPoint<int>_u_0 local_res18;
  FScreenPassTexture local_198;
  FScreenPassTexture local_180;
  Type local_168;
  int iStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  Type local_158;
  int iStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  FFXAAInputs local_148;
  ulonglong local_108;
  TRDGEventScopeGuard<FRDGScope_RHI> local_100;
  char local_f0;
  FScreenPassRenderTarget local_e8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_> local_c8;
  FScreenPassViewInfo local_b8;
  FScreenPassViewInfo local_a8;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  FScreenPassTexture local_78;
  FScreenPassTexture local_60;
  
  pFVar6 = param_3;
  uVar14 = (ulonglong)_tls_index;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_f0 = '\0';
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_88 = 0x54dc41a0;
      uStack_84 = 1;
      ::Desc._padding_._0_4_ = 0x54dc41a0;
      ::Desc._padding_._4_4_ = uStack_8c;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_CompositeCore_F;
      ::Desc._padding_ = (longlong)u_CompositeCore_F;
      ::Desc._padding_._0_4_ = 0x54;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::CompositeCore::FFXAAPassProxy::Add'::__l7::Desc::operator()<>'::__l3::<lambda_1>
             ::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_c8._Myfirst._Val = &::Desc;
    local_100.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_100.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_c8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_f0 = '\x01';
  }
  iVar8 = (int)this->_padding_;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  if (((param_3->Inputs).ArrayNum < iVar8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValidateInputs(Inputs)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\Passes\\CompositeCorePassFXAAProxy.cpp"
                         ,0x57,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FPassTexture *)(*pcVar4)();
    return pFVar11;
  }
  pFVar11 = FPassInputArray::operator[](param_3,0);
  pFVar2 = (pFVar11->Texture).Texture;
  local_res10 = (pFVar11->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  local_res18 = (pFVar11->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  local_198.Texture = pFVar2;
  local_198.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)local_res10;
  local_198.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)local_res18;
  pFVar11 = FPassInputArray::operator[](param_3,0);
  fVar5 = __real_400ccccd;
  FVar3 = pFVar11->Metadata;
  local_108 = (ulonglong)FVar3 >> 0x20;
  param_3 = (FPassInputArray *)pFVar2;
  if (FVar3.Encoding == Linear) {
    local_168 = param_2->FeatureLevel;
    iStack_164 = param_2->StereoViewIndex;
    uStack_160 = param_2->InstanceFactor;
    uStack_15c = CONCAT31(uStack_15c._1_3_,param_2->bHMDHiddenAreaMaskActive);
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_b8.StereoViewIndex = iStack_164;
    local_b8.FeatureLevel = local_168;
    local_b8._12_4_ = uStack_15c;
    local_b8.InstanceCount = uStack_160;
    local_e8._25_4_ = 0;
    local_e8._29_2_ = 0;
    local_e8._31_1_ = 0;
    local_e8._padding_ = 0;
    local_e8.LoadAction = ENoAction;
    pFVar12 = CompositeCore::Private::AddDisplayTransformPass
                        (&local_78,param_1,&local_b8,&local_198,&local_e8,true,__real_400ccccd);
    param_3 = (FPassInputArray *)pFVar12->Texture;
    local_res10 = (pFVar12->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_res18 = (pFVar12->ViewRect).field0_0x0._s_0.Max.field0_0x0;
    local_198.Texture = (FRDGTexture *)param_3;
    local_198.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)local_res10;
    local_198.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)local_res18;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar13 = IConsoleManager::Get();
    FXAAQualityCVar =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar13 + 0xc0))(pIVar13,L"r.FXAA.Quality",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((FXAAQualityCVar == (IConsoleVariable *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FXAAQualityCVar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\Passes\\CompositeCorePassFXAAProxy.cpp"
                         ,0x65,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FPassTexture *)(*pcVar4)();
    return pFVar11;
  }
  if ((this->QualityOverride).bIsSet == false) {
    EVar9 = (**(code **)(*(longlong *)FXAAQualityCVar + 200))();
  }
  else {
    EVar9 = (this->QualityOverride).TypedValue;
  }
  local_148.SceneColor.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)local_res10;
  local_148.SceneColor.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)local_res18;
  local_148.OverrideOutput._25_4_ = 0;
  local_148.OverrideOutput._29_2_ = 0;
  EVar10 = Q5;
  if ((int)EVar9 < 5) {
    EVar10 = EVar9;
  }
  local_148.OverrideOutput._31_1_ = 0;
  local_148.OverrideOutput._padding_ = 0;
  local_148.OverrideOutput._padding_ = 0;
  local_148.OverrideOutput._padding_ = 0;
  local_148.OverrideOutput.LoadAction = ENoAction;
  local_148.Quality = Q0;
  if (0 < (int)EVar10) {
    local_148.Quality = EVar10;
  }
  local_148.SceneColor.Texture = (FRDGTexture *)param_3;
  if ((int)local_108 == 0) {
    AddFXAAPass(&local_180,param_1,param_2,&local_148);
    local_158 = param_2->FeatureLevel;
    iStack_154 = param_2->StereoViewIndex;
    uStack_150 = param_2->InstanceFactor;
    uStack_14c = CONCAT31(uStack_14c._1_3_,param_2->bHMDHiddenAreaMaskActive);
    local_a8.StereoViewIndex = iStack_154;
    local_a8.FeatureLevel = local_158;
    local_a8._12_4_ = uStack_14c;
    local_a8.InstanceCount = uStack_150;
    pFVar12 = CompositeCore::Private::AddDisplayTransformPass
                        (&local_60,param_1,&local_a8,&local_180,&pFVar6->OverrideOutput,false,fVar5)
    ;
    local_180.Texture = pFVar12->Texture;
    local_180.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(pFVar12->ViewRect).field0_0x0._s_0.Min.field0_0x0;
    local_180.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(pFVar12->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  }
  else {
    local_148.OverrideOutput._padding_ = (pFVar6->OverrideOutput)._padding_;
    local_148.OverrideOutput._padding_ = (pFVar6->OverrideOutput)._padding_;
    local_148.OverrideOutput._padding_ = (pFVar6->OverrideOutput)._padding_;
    local_148.OverrideOutput.LoadAction = (pFVar6->OverrideOutput).LoadAction;
    AddFXAAPass(&local_180,param_1,param_2,&local_148);
  }
  (__return_storage_ptr__->Texture).Texture = local_180.Texture;
  (__return_storage_ptr__->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)local_180.ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (__return_storage_ptr__->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)local_180.ViewRect.field0_0x0._s_0.Max.field0_0x0;
  __return_storage_ptr__->Metadata = FVar3;
  if (local_f0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_100);
  }
  return __return_storage_ptr__;
}

// GetTypeName @ 14ea7fe80

FName * __thiscall UE::CompositeCore::FFXAAPassProxy::GetTypeName(FFXAAPassProxy *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FFXAAPassProxy::GetTypeNameStatic(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FFXAAPassProxy::GetTypeNameStatic(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FFXAAPassProxy::GetTypeNameStatic(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FFXAAPassProxy::GetTypeNameStatic(void)'
                      ::__l2::Name,L"FFXAAPassProxy");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FFXAAPassProxy::GetTypeNameStatic(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FFXAAPassProxy::GetTypeNameStatic(void)'
              ::__l2::Name;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_UE::CompositeCore::FFXAAPassProxy::GetTypeNameStatic(void)'
          ::__l2::Name;
}


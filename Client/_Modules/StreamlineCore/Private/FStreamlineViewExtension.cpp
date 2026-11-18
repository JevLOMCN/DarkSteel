// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 22

// FStreamlineViewExtension @ 14de70560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de706d8) */
/* WARNING: Removing unreachable block (ram,0x00014de706e9) */
/* WARNING: Removing unreachable block (ram,0x00014de706ed) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FStreamlineViewExtension * __thiscall
FStreamlineViewExtension::FStreamlineViewExtension
          (FStreamlineViewExtension *this,FAutoRegister *param_1,FStreamlineRHI *param_2)

{
  int *piVar1;
  FGuid *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FStreamlineViewExtension *pFVar6;
  FSlateApplication *pFVar7;
  FDelegateHandle FVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 auStack_398 [32];
  FGuid *local_378;
  FGuid *local_370;
  longlong local_368;
  longlong local_360;
  undefined8 local_358;
  FStreamlineViewExtension *local_338;
  undefined4 uStack_330;
  uint uStack_32c;
  undefined1 local_328 [24];
  FString local_310;
  code *local_2f8;
  double dStack_2f0;
  FString local_2e8;
  FGuid local_2d8;
  code *local_2c8;
  double dStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  FStreamlineViewExtension *pFStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  longlong *plStack_2a0;
  double local_298;
  double dStack_290;
  undefined4 local_278;
  undefined4 uStack_274;
  double dStack_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  double local_28;
  
  local_28 = (double)(__security_cookie.value ^ (ulonglong)auStack_398);
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  this->StreamlineRHIExtensions = param_2;
  this->_padding_ = (longlong)&___7FStreamlineViewExtension__6B_;
  FStreamlineCameraManager::FStreamlineCameraManager(&this->StreamlineCameraManager);
  (this->FramesWhereStreamlineConstantsWereSet).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FramesWhereStreamlineConstantsWereSet).ArrayNum = 0;
  (this->FramesWhereStreamlineConstantsWereSet).ArrayMax = 0;
  if (4 < (byte)LogStreamline._0_1_) {
    CurrentThreadName(&local_310);
    local_268._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_268,"FStreamlineViewExtension::FStreamlineViewExtension",0x32,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
  }
  if ((this->StreamlineRHIExtensions == (FStreamlineRHI *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamlineRHIExtensions",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                         ,0xb4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FStreamlineViewExtension *)(*pcVar3)();
    return pFVar6;
  }
  FGuid::NewGuid(&local_2d8);
  local_2a8 = local_278;
  uStack_2a4 = uStack_274;
  plStack_2a0 = (longlong *)0x0;
  local_2b8 = 0x52d62570;
  uStack_2b4 = 1;
  pFStack_2b0 = this;
  local_298 = 0.0;
  dStack_290 = dStack_2c0;
  dStack_270 = 0.0;
  dStack_270 = 0.0;
  local_298 = 0.0;
  plStack_2a0 = (longlong *)0x0;
  uStack_2b4 = 1;
  local_2b8 = 0x52d62570;
  local_2c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FStreamlineViewExtension::FStreamlineViewExtension'::__l2::<lambda_1>,TOptional<bool>,ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&>
              ::Call;
  pFVar2 = (FGuid *)this->_padding_;
  if ((pFVar2 <= &local_2d8) &&
     (lVar11 = (longlong)*(int *)((longlong)&this->_padding_ + 4), &local_2d8 < pFVar2 + lVar11 * 4)
     ) {
    local_360 = (longlong)(int)this->_padding_;
    local_358 = 0x40;
    local_378 = &local_2d8;
    local_370 = pFVar2;
    local_368 = lVar11;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FStreamlineViewExtension *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1040,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  puVar12 = (uint *)((longlong)iVar5 * 0x40 + this->_padding_);
  *puVar12 = local_2d8.A;
  puVar12[1] = local_2d8.B;
  puVar12[2] = local_2d8.C;
  puVar12[3] = local_2d8.D;
  *(code **)(puVar12 + 4) = local_2c8;
  puVar12[0xe] = 0;
  puVar12[0xf] = 0;
  if (local_2c8 != (code *)0x0) {
    plVar10 = (longlong *)&local_2b8;
    if (plStack_2a0 != (longlong *)0x0) {
      plVar10 = plStack_2a0;
    }
    (**(code **)*plVar10)();
  }
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FSlateApplication::IsInitialized()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                       ,0xbd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FStreamlineViewExtension *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar7 = FSlateApplication::Get();
  uStack_330 = 0;
  local_338 = (FStreamlineViewExtension *)UntrackViewsForBackbuffer;
  dStack_2f0 = (double)((ulonglong)uStack_32c << 0x20);
  local_2f8 = UntrackViewsForBackbuffer;
  FVar8 = TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>::
          AddRaw<FStreamlineViewExtension>
                    ((TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>
                      *)(*(longlong *)&pFVar7->field_0x60 + 0x58),
                     (FStreamlineViewExtension *)local_328,(pmf_25df4c8a *)this);
                    /* WARNING: Load size is inaccurate */
  OnPreResizeWindowBackBufferHandle.ID = *FVar8.ID;
  pFVar7 = FSlateApplication::Get();
  local_338 = this;
  FVar8 = TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>::
          AddLambda<_FStreamlineViewExtension::FStreamlineViewExtension_::__l28::<lambda_2>_>
                    ((TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>
                      *)(*(longlong *)&pFVar7->field_0x60 + 0x38),(<lambda_2> *)(local_328 + 8));
                    /* WARNING: Load size is inaccurate */
  OnSlateWindowDestroyedHandle.ID = *FVar8.ID;
  pFVar7 = FSlateApplication::Get();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FStreamlineViewExtension::FStreamlineViewExtension_::__l28::<lambda_3>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar7->PreShutdownEvent,(<lambda_3> *)(local_328 + 0x10));
  pwVar9 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar9,L"sllogviewtracking");
  if (bVar4) {
    bLogStreamlineLogTrackedViews = true;
  }
  pwVar9 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar9,L"slnologviewtracking");
  if (bVar4) {
    bLogStreamlineLogTrackedViews = false;
  }
  if (4 < (byte)LogStreamline._0_1_) {
    CurrentThreadName(&local_2e8);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FStreamlineViewExtension::FStreamlineViewExtension",0x32,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
  }
  if (local_2c8 != (code *)0x0) {
    plVar10 = (longlong *)&local_2b8;
    if (plStack_2a0 != (longlong *)0x0) {
      plVar10 = plStack_2a0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return this;
}

// ~FStreamlineViewExtension @ 14de70d20

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

void __thiscall FStreamlineViewExtension::~FStreamlineViewExtension(FStreamlineViewExtension *this)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  undefined1 auStack_178 [32];
  FString local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  this->_padding_ = (longlong)&___7FStreamlineViewExtension__6B_;
  if (4 < (byte)LogStreamline._0_1_) {
    CurrentThreadName(&local_158);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FStreamlineViewExtension::~FStreamlineViewExtension",0x33,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  if (TrackedViews.ArrayNum != 0) {
    CurrentThreadName(&local_148);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FStreamlineViewExtension::~FStreamlineViewExtension",0x33,Yes);
    ::FString::PrintfImpl(&local_158,L"%s Stale Views %s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar2.Data = local_158.Data.AllocatorInstance.Data;
    }
    LogTrackedViews((wchar_t *)FVar2.Data);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogStreamline._0_1_) {
    CurrentThreadName(&local_148);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FStreamlineViewExtension::~FStreamlineViewExtension",0x33,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (this->FramesWhereStreamlineConstantsWereSet).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FStreamlineCameraManager::~FStreamlineCameraManager(&this->StreamlineCameraManager);
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  return;
}

// operator() @ 14de71ef0

FString * __thiscall
`FStreamlineViewExtension::LogTrackedViews'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,FTrackedView *param_1)

{
  uint uVar1;
  FRHITexture *pFVar2;
  FName local_res10;
  int local_res18;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  ::FString::FString(&local_78,L"Call me nobody");
  ::FString::FString(&local_88,L"HerpxDerp");
  pFVar2 = (param_1->Texture).Reference;
  if (((pFVar2 != (FRHITexture *)0x0) && (uVar1 = (uint)pFVar2->_padding_, (uVar1 >> 0x1e & 1) == 0)
      ) && ((uVar1 & 0x3fffffff) != 0)) {
    local_res10 = (FName)pFVar2->_padding_;
    ::FName::ToString(&local_res10,&local_48);
    ::FString::PrintfImpl(&local_68,L"%s %p");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    local_78.Data.ArrayNum = local_68.Data.ArrayNum;
    local_78.Data.ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
    (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2);
    ::FString::PrintfImpl(&local_68,L"X=%d Y=%d");
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_88.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    local_88.Data.ArrayNum = local_68.Data.ArrayNum;
    local_88.Data.ArrayMax = local_68.Data.ArrayMax;
  }
  local_res10.ComparisonIndex.Value = *(uint *)((longlong)&(param_1->ViewRect).field0_0x0 + 4);
  local_res18 = *(int *)((longlong)&(param_1->ViewRect).field0_0x0 + 8) -
                *(int *)&(param_1->ViewRect).field0_0x0;
  ::FString::PrintfImpl(&local_58,L"X=%d Y=%d");
  ::FString::PrintfImpl(&local_68,L"X=%d Y=%d");
  ::FString::PrintfImpl(&local_48,L"Min=(%s) Max=(%s)");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u %s (%ux%u) %s %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14de725c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FStreamlineViewExtension::UntrackViewsForBackbuffer'::__l15::<lambda_1>::operator()
          (void *this,FTrackedView *param_1)

{
  FRHITexture *pFVar1;
  longlong lVar2;
  FName local_res10;
  FString local_18;
  
  pFVar1 = (param_1->Texture).Reference;
  if (pFVar1 == (FRHITexture *)0x0) {
    return false;
  }
  lVar2 = (**(code **)(pFVar1->_padding_ + 0x38))();
  if (lVar2 == *(longlong *)this) {
    if ((4 < (byte)LogStreamline._0_1_) && (bLogStreamlineLogTrackedViews != false)) {
      local_res10 = (FName)((param_1->Texture).Reference)->_padding_;
      ::FName::ToString(&local_res10,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return true;
  }
  return false;
}

// operator() @ 14de72810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FStreamlineViewExtension::PreRenderViewFamily_RenderThread'::__l21::<lambda_3>::operator()
          (void *this,FRHICommandList *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((4 < (byte)LogStreamline._0_1_) && (bLogStreamlineLogTrackedViews)) {
    uVar1 = *(undefined4 *)((longlong)this + 8);
    CurrentThreadName(&local_148);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,
               "FStreamlineViewExtension::PreRenderViewFamily_RenderThread::<lambda_3>::operator ()"
               ,0x53,Yes);
    local_158 = uVar1;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  FStreamlineRHI::ReleaseStreamlineResourcesForAllFeatures
            (*(FStreamlineRHI **)(*(longlong *)this + 0x28),*(uint *)((longlong)this + 8));
  return;
}

// operator() @ 14de72920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FStreamlineViewExtension::FStreamlineViewExtension'::__l28::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  
  pFVar4 = FSlateApplication::Get();
  lVar1 = *(longlong *)&pFVar4->field_0x60;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateRenderer",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                       ,0xd0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (4 < (byte)LogStreamline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
  }
  TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy> *)
             (lVar1 + 0x58),FStreamlineViewExtension::OnPreResizeWindowBackBufferHandle);
  if (4 < (byte)LogStreamline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
  }
  TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void_*),FDefaultDelegateUserPolicy> *)
             (lVar1 + 0x38),FStreamlineViewExtension::OnSlateWindowDestroyedHandle);
  return;
}

// operator() @ 14de729c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EStreamlineResource": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  ForElementType<FRHIStreamlineResource> *pFVar2;
  TIntPoint<int>_u_0 TVar3;
  TIntPoint<int>_u_0 TVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FRDGResource *pFVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  ulong64 uVar20;
  int iVar21;
  longlong **pplVar22;
  bool bVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ForElementType<FRHIStreamlineResource> FVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ForElementType<FRHIStreamlineResource> FVar29;
  longlong lVar30;
  longlong **pplVar31;
  FRHIStreamlineResource *pFVar32;
  ERHIAccess EVar33;
  undefined1 auStackY_498 [32];
  FRHIStreamlineResource local_448;
  FRHIStreamlineResource local_428;
  FRHIStreamlineResource local_408;
  FRHIStreamlineResource local_3e8;
  ForElementType<FRHIStreamlineResource> local_3c8;
  ForElementType<FRHIStreamlineResource> FStack_3c0;
  ForElementType<FRHIStreamlineResource> local_3b8;
  FRDGResource *local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  FRDGResource *local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  FRDGResource *local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  ForElementType<FRHIStreamlineResource> local_348;
  int local_2c0;
  int local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  ForElementType<FRHIStreamlineResource> local_2a8;
  int local_220;
  int local_21c;
  ulong64 local_218;
  longlong *local_208 [2];
  undefined8 local_1f8 [54];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_208[0] = *(longlong **)this;
  lVar30 = 3;
  puVar27 = (undefined8 *)((longlong)this + 0x10);
  puVar25 = local_1f8;
  do {
    puVar28 = puVar25;
    puVar24 = puVar27;
    uVar15 = puVar24[1];
    uVar16 = puVar24[2];
    uVar17 = puVar24[3];
    *puVar28 = *puVar24;
    puVar28[1] = uVar15;
    uVar15 = puVar24[4];
    uVar18 = puVar24[5];
    puVar28[2] = uVar16;
    puVar28[3] = uVar17;
    uVar16 = puVar24[6];
    uVar17 = puVar24[7];
    puVar28[4] = uVar15;
    puVar28[5] = uVar18;
    uVar15 = puVar24[8];
    uVar18 = puVar24[9];
    puVar28[6] = uVar16;
    puVar28[7] = uVar17;
    uVar16 = puVar24[10];
    uVar17 = puVar24[0xb];
    puVar28[8] = uVar15;
    puVar28[9] = uVar18;
    uVar15 = puVar24[0xc];
    uVar18 = puVar24[0xd];
    puVar28[10] = uVar16;
    puVar28[0xb] = uVar17;
    uVar16 = puVar24[0xe];
    uVar17 = puVar24[0xf];
    puVar28[0xc] = uVar15;
    puVar28[0xd] = uVar18;
    puVar28[0xe] = uVar16;
    puVar28[0xf] = uVar17;
    lVar30 = lVar30 + -1;
    puVar27 = puVar24 + 0x10;
    puVar25 = puVar28 + 0x10;
  } while (lVar30 != 0);
  uVar15 = puVar24[0x11];
  uVar6 = *(undefined4 *)(puVar24 + 0x12);
  uVar7 = *(undefined4 *)((longlong)puVar24 + 0x94);
  uVar8 = *(undefined4 *)(puVar24 + 0x13);
  uVar9 = *(undefined4 *)((longlong)puVar24 + 0x9c);
  puVar28[0x10] = puVar24[0x10];
  puVar28[0x11] = uVar15;
  uVar10 = *(undefined4 *)(puVar24 + 0x14);
  uVar11 = *(undefined4 *)((longlong)puVar24 + 0xa4);
  uVar12 = *(undefined4 *)(puVar24 + 0x15);
  uVar13 = *(undefined4 *)((longlong)puVar24 + 0xac);
  *(undefined4 *)(puVar28 + 0x12) = uVar6;
  *(undefined4 *)((longlong)puVar28 + 0x94) = uVar7;
  *(undefined4 *)(puVar28 + 0x13) = uVar8;
  *(undefined4 *)((longlong)puVar28 + 0x9c) = uVar9;
  *(undefined4 *)(puVar28 + 0x14) = uVar10;
  *(undefined4 *)((longlong)puVar28 + 0xa4) = uVar11;
  *(undefined4 *)(puVar28 + 0x15) = uVar12;
  *(undefined4 *)((longlong)puVar28 + 0xac) = uVar13;
  if (((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) ||
     (param_1->field_0x64 != '\0')) {
    (**(code **)(*local_208[0] + 8))(local_208[0],param_1,local_1f8);
  }
  else {
    puVar25 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x1e0,0x10);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    lVar30 = 3;
    **(undefined8 **)&param_1->field_0x30 = puVar25;
    *(undefined8 **)&param_1->field_0x30 = puVar25 + 1;
    puVar25[1] = 0;
    *puVar25 = &TRHILambdaCommand<FRHICommandListImmediate,``FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::`40'::<lambda_3>::operator()'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar27 = puVar25 + 2;
    pplVar22 = local_208;
    do {
      pplVar31 = pplVar22;
      puVar24 = puVar27;
      plVar1 = pplVar31[1];
      *puVar24 = *pplVar31;
      puVar24[1] = plVar1;
      plVar1 = pplVar31[3];
      puVar24[2] = pplVar31[2];
      puVar24[3] = plVar1;
      plVar1 = pplVar31[5];
      puVar24[4] = pplVar31[4];
      puVar24[5] = plVar1;
      plVar1 = pplVar31[7];
      puVar24[6] = pplVar31[6];
      puVar24[7] = plVar1;
      plVar1 = pplVar31[9];
      puVar24[8] = pplVar31[8];
      puVar24[9] = plVar1;
      plVar1 = pplVar31[0xb];
      puVar24[10] = pplVar31[10];
      puVar24[0xb] = plVar1;
      plVar1 = pplVar31[0xd];
      puVar24[0xc] = pplVar31[0xc];
      puVar24[0xd] = plVar1;
      plVar1 = pplVar31[0xf];
      puVar24[0xe] = pplVar31[0xe];
      puVar24[0xf] = plVar1;
      lVar30 = lVar30 + -1;
      puVar27 = puVar24 + 0x10;
      pplVar22 = pplVar31 + 0x10;
    } while (lVar30 != 0);
    plVar1 = pplVar31[0x11];
    puVar24[0x10] = pplVar31[0x10];
    puVar24[0x11] = plVar1;
    plVar1 = pplVar31[0x13];
    puVar24[0x12] = pplVar31[0x12];
    puVar24[0x13] = plVar1;
    plVar1 = pplVar31[0x15];
    puVar24[0x14] = pplVar31[0x14];
    puVar24[0x15] = plVar1;
    plVar1 = pplVar31[0x16];
    plVar19 = pplVar31[0x17];
    puVar25[0x3a] = L"TRHILambdaCommand";
    puVar24[0x16] = plVar1;
    puVar24[0x17] = plVar19;
  }
  local_348.SecondaryData = (ForElementType<FRHIStreamlineResource>)0x0;
  EVar33 = None;
  local_2c0 = 0;
  local_2bc = 4;
  if ((**(longlong **)((longlong)this + 8) == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("PassParameters->Depth",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                          ,0x3d3,L""), bVar23)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((*plVar1 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Texture",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x1c7,L""), bVar23)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FRDGResource::MarkResourceAsUsed((FRDGResource *)*plVar1);
  pFVar2 = *(ForElementType<FRHIStreamlineResource> **)((longlong)this + 8);
  local_448.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x1c0);
  local_448.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)this + 0x1c8);
  FVar26 = *pFVar2;
  FStack_3c0 = pFVar2[1];
  local_3b8 = pFVar2[2];
  local_3c8 = FVar26;
  if (FVar26 == (ForElementType<FRHIStreamlineResource>)0x0) {
    local_448.Texture = (FRHITexture *)0x0;
  }
  else {
    FRDGResource::ValidateRHIAccess((FRDGResource *)FVar26);
    local_448.Texture = *(FRHITexture **)((longlong)FVar26 + 0x10);
  }
  local_448.ResourceRHIAccess = EVar33;
  if (FVar26 != (ForElementType<FRHIStreamlineResource>)0x0) {
    local_448.ResourceRHIAccess = local_3b8._0_4_;
  }
  FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FVar26 = local_348.SecondaryData;
  }
  local_448.StreamlineTag = Depth;
  if ((ulonglong)FVar26 <= &local_448) {
    FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
    if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar26 = local_348.SecondaryData;
    }
    if ((&local_448 < (FRHIStreamlineResource *)((longlong)local_2bc * 0x20 + (longlong)FVar26)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_2c0 == local_2bc) {
    local_2c0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIStreamlineResource>_>
                          (0x820,&local_348,&local_2bc);
  }
  FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FVar26 = local_348.SecondaryData;
  }
  pFVar32 = (FRHIStreamlineResource *)((longlong)local_2c0 * 0x20 + (longlong)FVar26);
  local_2c0 = local_2c0 + 1;
  pFVar32->Texture = local_448.Texture;
  (pFVar32->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)local_448.ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (pFVar32->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)local_448.ViewRect.field0_0x0._s_0.Max.field0_0x0;
  pFVar32->StreamlineTag = local_448.StreamlineTag;
  pFVar32->ResourceRHIAccess = local_448.ResourceRHIAccess;
  if (((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) != 0) !=
       (bool)*(char *)((longlong)this + 0x1f8)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("!!PassParameters->Velocity == bTagMotionVectors",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                          ,0x3d8,L""), bVar23)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar30 = *(longlong *)((longlong)this + 8);
  pFVar14 = *(FRDGResource **)(lVar30 + 0x18);
  uStack_3a0 = *(undefined8 *)(lVar30 + 0x20);
  local_398 = *(undefined8 *)(lVar30 + 0x28);
  local_3a8 = pFVar14;
  if (pFVar14 == (FRDGResource *)0x0) {
    local_428.Texture = (FRHITexture *)0x0;
    local_428.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  }
  else {
    FRDGResource::ValidateRHIAccess(pFVar14);
    local_428.Texture = (FRHITexture *)pFVar14->ResourceRHI;
    local_428.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)*(TIntPoint<int>_u_0 *)((longlong)&pFVar14[5]._padding_ + 4);
  }
  local_428.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_428.ResourceRHIAccess = EVar33;
  if (pFVar14 != (FRDGResource *)0x0) {
    local_428.ResourceRHIAccess = (ERHIAccess)local_398;
  }
  FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FVar26 = local_348.SecondaryData;
  }
  local_428.StreamlineTag = MotionVectors;
  if ((ulonglong)FVar26 <= &local_428) {
    FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
    if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar26 = local_348.SecondaryData;
    }
    if ((&local_428 < (FRHIStreamlineResource *)((longlong)local_2bc * 0x20 + (longlong)FVar26)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_2c0 == local_2bc) {
    local_2c0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIStreamlineResource>_>
                          (0x820,&local_348,&local_2bc);
  }
  FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FVar26 = local_348.SecondaryData;
  }
  pFVar32 = (FRHIStreamlineResource *)((longlong)local_2c0 * 0x20 + (longlong)FVar26);
  local_2c0 = local_2c0 + 1;
  pFVar32->Texture = local_428.Texture;
  (pFVar32->ViewRect).field0_0x0._s_0.Min.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)local_428.ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (pFVar32->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)local_428.ViewRect.field0_0x0._s_0.Max.field0_0x0;
  pFVar32->StreamlineTag = local_428.StreamlineTag;
  pFVar32->ResourceRHIAccess = local_428.ResourceRHIAccess;
  if (*(char *)((longlong)this + 0x1f8) != '\0') {
    if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("PassParameters->Velocity",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                            ,0x3dc,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar30 = *(longlong *)((longlong)this + 8);
    if ((*(longlong *)(lVar30 + 0x18) == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Texture",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x1c7,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(lVar30 + 0x18));
  }
  if (((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x30) != 0) !=
       (bool)*(char *)((longlong)this + 0x1f9)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("!!PassParameters->NoWarpMask == bTagCustomDepth",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                          ,0x3e1,L""), bVar23)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar30 = *(longlong *)((longlong)this + 8);
  TVar3 = *(TIntPoint<int>_u_0 *)((longlong)this + 0x1c0);
  TVar4 = *(TIntPoint<int>_u_0 *)((longlong)this + 0x1c8);
  pFVar14 = *(FRDGResource **)(lVar30 + 0x30);
  uStack_380 = *(undefined8 *)(lVar30 + 0x38);
  local_378 = *(undefined8 *)(lVar30 + 0x40);
  local_388 = pFVar14;
  if (pFVar14 == (FRDGResource *)0x0) {
    local_408.Texture = (FRHITexture *)0x0;
  }
  else {
    FRDGResource::ValidateRHIAccess(pFVar14);
    local_408.Texture = (FRHITexture *)pFVar14->ResourceRHI;
  }
  local_408.ResourceRHIAccess = EVar33;
  if (pFVar14 != (FRDGResource *)0x0) {
    local_408.ResourceRHIAccess = (ERHIAccess)local_378;
  }
  FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FVar26 = local_348.SecondaryData;
  }
  local_408.StreamlineTag = NoWarpMask;
  local_408.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar3;
  local_408.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)TVar4;
  if ((ulonglong)FVar26 <= &local_408) {
    FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
    if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar26 = local_348.SecondaryData;
    }
    if ((&local_408 < (FRHIStreamlineResource *)((longlong)local_2bc * 0x20 + (longlong)FVar26)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_2c0 == local_2bc) {
    local_2c0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIStreamlineResource>_>
                          (0x820,&local_348,&local_2bc);
  }
  FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FVar26 = local_348.SecondaryData;
  }
  pFVar32 = (FRHIStreamlineResource *)((longlong)local_2c0 * 0x20 + (longlong)FVar26);
  local_2c0 = local_2c0 + 1;
  pFVar32->Texture = local_408.Texture;
  (pFVar32->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)local_408.ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (pFVar32->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)local_408.ViewRect.field0_0x0._s_0.Max.field0_0x0;
  pFVar32->StreamlineTag = local_408.StreamlineTag;
  pFVar32->ResourceRHIAccess = local_408.ResourceRHIAccess;
  if (*(char *)((longlong)this + 0x1f9) != '\0') {
    if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x30) == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("PassParameters->NoWarpMask",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                            ,0x3e5,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar30 = *(longlong *)((longlong)this + 8);
    if ((*(longlong *)(lVar30 + 0x30) == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Texture",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x1c7,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(lVar30 + 0x30));
  }
  if (((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x48) != 0) !=
       (bool)*(char *)((longlong)this + 0x1fa)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("!!PassParameters->SceneColorWithoutHUD == bTagSceneColorWithoutHUD",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                          ,0x3e9,L""), bVar23)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar30 = *(longlong *)((longlong)this + 8);
  TVar3 = *(TIntPoint<int>_u_0 *)((longlong)this + 0x1e8);
  TVar4 = *(TIntPoint<int>_u_0 *)((longlong)this + 0x1f0);
  pFVar14 = *(FRDGResource **)(lVar30 + 0x48);
  uStack_360 = *(undefined8 *)(lVar30 + 0x50);
  local_358 = *(undefined8 *)(lVar30 + 0x58);
  local_368 = pFVar14;
  if (pFVar14 == (FRDGResource *)0x0) {
    local_3e8.Texture = (FRHITexture *)0x0;
  }
  else {
    FRDGResource::ValidateRHIAccess(pFVar14);
    local_3e8.Texture = (FRHITexture *)pFVar14->ResourceRHI;
  }
  local_3e8.ResourceRHIAccess = None;
  if (pFVar14 != (FRDGResource *)0x0) {
    local_3e8.ResourceRHIAccess = (ERHIAccess)local_358;
  }
  FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FVar26 = local_348.SecondaryData;
  }
  local_3e8.StreamlineTag = HUDLessColor;
  local_3e8.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar3;
  local_3e8.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)TVar4;
  if ((ulonglong)FVar26 <= &local_3e8) {
    FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
    if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar26 = local_348.SecondaryData;
    }
    if ((&local_3e8 < (FRHIStreamlineResource *)((longlong)local_2bc * 0x20 + (longlong)FVar26)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_2c0 == local_2bc) {
    local_2c0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIStreamlineResource>_>
                          (0x820,&local_348,&local_2bc);
  }
  FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FVar26 = local_348.SecondaryData;
  }
  pFVar32 = (FRHIStreamlineResource *)((longlong)local_2c0 * 0x20 + (longlong)FVar26);
  local_2c0 = local_2c0 + 1;
  pFVar32->Texture = local_3e8.Texture;
  (pFVar32->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>_u_0)local_3e8.ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (pFVar32->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>_u_0)local_3e8.ViewRect.field0_0x0._s_0.Max.field0_0x0;
  pFVar32->StreamlineTag = local_3e8.StreamlineTag;
  pFVar32->ResourceRHIAccess = local_3e8.ResourceRHIAccess;
  if (*(char *)((longlong)this + 0x1fa) != '\0') {
    if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x48) == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("PassParameters->SceneColorWithoutHUD",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                            ,0x3ed,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar30 = *(longlong *)((longlong)this + 8);
    if ((*(longlong *)(lVar30 + 0x48) == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Texture",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x1c7,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)(lVar30 + 0x48));
  }
  iVar21 = local_2c0;
  uVar20 = GFrameCounterRenderThread;
  local_2b8 = *(undefined8 *)this;
  local_2b0 = *(undefined4 *)((longlong)this + 0x10);
  local_2a8.SecondaryData = (ForElementType<FRHIStreamlineResource>)0x0;
  local_220 = local_2c0;
  FVar26 = (ForElementType<FRHIStreamlineResource>)&local_348;
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FVar26 = local_348.SecondaryData;
  }
  if (local_2c0 == 0) {
    local_21c = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIStreamlineResource>_>
              (0x20,8,local_2c0,0,&local_2a8,local_2c0,&local_21c);
    FVar29 = (ForElementType<FRHIStreamlineResource>)&local_2a8;
    if (local_2a8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
      FVar29 = local_2a8.SecondaryData;
    }
    ConstructItems<FRHIStreamlineResource,FRHIStreamlineResource,int>
              ((void *)FVar29,(FRHIStreamlineResource *)FVar26,iVar21);
  }
  local_218 = uVar20;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar27 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xc0,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar27;
    *(undefined8 **)&param_1->field_0x30 = puVar27 + 1;
    puVar27[1] = 0;
    *puVar27 = &TRHILambdaCommand<FRHICommandListImmediate,``FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::`40'::<lambda_3>::operator()'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar27[2] = local_2b8;
    *(undefined4 *)(puVar27 + 3) = local_2b0;
    puVar27[0x14] = 0;
    if (local_2a8.SecondaryData == (ForElementType<FRHIStreamlineResource>)0x0) {
      memmove(puVar27 + 4,&local_2a8,0x80);
    }
    if ((void *)puVar27[0x14] != (void *)0x0) {
      FMemory::Free((void *)puVar27[0x14]);
    }
    *(ForElementType<FRHIStreamlineResource> *)(puVar27 + 0x14) = local_2a8.SecondaryData;
    local_2a8.SecondaryData = (ForElementType<FRHIStreamlineResource>)0x0;
    *(int *)(puVar27 + 0x15) = local_220;
    *(int *)((longlong)puVar27 + 0xac) = local_21c;
    local_220 = 0;
    local_21c = 4;
    puVar27[0x16] = local_218;
    puVar27[0x17] = L"TRHILambdaCommand";
  }
  else {
    ``FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l40::<lambda_3>::operator()'::
    __l2::<lambda_2>::operator()(&local_2b8,param_1);
  }
  if (local_2a8.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FMemory::Free((void *)local_2a8.SecondaryData);
  }
  if (local_348.SecondaryData != (ForElementType<FRHIStreamlineResource>)0x0) {
    FMemory::Free((void *)local_348.SecondaryData);
  }
  return;
}

// operator() @ 14de735f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l111::<lambda_5>::operator()
          (void *this,FRHICommandList *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  IRHICommandContext *pIVar6;
  undefined8 *puVar7;
  
  iVar1 = *(int *)((longlong)this + 0xc);
  iVar2 = *(int *)((longlong)this + 8);
  iVar3 = *(int *)((longlong)this + 4);
  iVar4 = *(int *)this;
  if ((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) {
    pIVar6 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    pcVar5 = *(code **)(pIVar6->_padding_ + 0x1a0);
    (*pcVar5)(pIVar6,pcVar5,(float)iVar3,0,(float)iVar2,(float)iVar1,__real_3f800000);
  }
  else {
    puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar7;
    *(undefined8 **)&param_1->field_0x30 = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &___7FRHICommandSetViewport__6B_;
    *(float *)(puVar7 + 2) = (float)iVar4;
    *(float *)((longlong)puVar7 + 0x14) = (float)iVar3;
    *(float *)((longlong)puVar7 + 0x1c) = (float)iVar2;
    *(float *)(puVar7 + 4) = (float)iVar1;
    *(undefined4 *)(puVar7 + 3) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
  }
  DrawClearQuadAlpha(param_1,0.0);
  return;
}

// AddTrackedView @ 14de74b00

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

void __cdecl FStreamlineViewExtension::AddTrackedView(FSceneView *param_1)

{
  FRenderTarget *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  FString *pFVar9;
  FRHIResource *this;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  FRHIResource *pFVar12;
  uint uVar13;
  undefined1 auStack_318 [32];
  FRHIResource *local_2f8;
  FScriptContainerElement *local_2f0;
  FString local_2e8;
  FString local_2d8;
  FName local_2c8;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_318;
  if ((param_1->bIsViewInfo == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.bIsViewInfo",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                         ,0x171,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = FSceneView::GetViewKey(param_1);
  if ((((param_1->bIsSceneCapture == false) && (param_1->bIsOfflineRender == false)) &&
      (param_1->bIsGameView != false)) && (param_1->StereoPass == eSSP_FULL)) {
    pFVar1 = param_1->Family->RenderTarget;
    this = (FRHIResource *)0x0;
    if ((pFVar1 != (FRenderTarget *)0x0) &&
       (plVar6 = (longlong *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1),
       this = (FRHIResource *)0x0, *plVar6 != 0)) {
      puVar7 = (undefined8 *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
      pFVar12 = (FRHIResource *)*puVar7;
      if (pFVar12 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar12);
        this = pFVar12;
      }
    }
    for (FVar10.Data = TrackedViews.AllocatorInstance.Data;
        FVar10.Data != TrackedViews.AllocatorInstance.Data + (longlong)TrackedViews.ArrayNum * 0x40;
        FVar10.Data = FVar10.Data + 0x40) {
      if (*(uint *)(FVar10.Data + 0x38) == uVar4) {
        if (FVar10.Data != (FScriptContainerElement *)0x0) goto LAB_14de74d08;
        break;
      }
    }
    if (TrackedViews.ArrayNum == TrackedViews.ArrayMax) {
      TrackedViews.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x840,&TrackedViews.AllocatorInstance,&TrackedViews.ArrayMax);
    }
    FVar10.Data = TrackedViews.AllocatorInstance.Data;
    lVar8 = (longlong)TrackedViews.ArrayNum * 0x40;
    TrackedViews.ArrayNum = TrackedViews.ArrayNum + 1;
    *(undefined8 *)(TrackedViews.AllocatorInstance.Data + lVar8 + 0x38) = 0;
    *(undefined8 *)(FVar10.Data + lVar8) = 0;
    *(undefined8 *)(FVar10.Data + lVar8 + 8) = 0;
    *(undefined8 *)(FVar10.Data + lVar8 + 0x10) = 0;
    *(undefined8 *)(FVar10.Data + lVar8 + 0x18) = 0;
    *(undefined8 *)(FVar10.Data + lVar8 + 0x20) = 0;
    *(undefined8 *)(FVar10.Data + lVar8 + 0x28) = 0;
    *(undefined8 *)(FVar10.Data + lVar8 + 0x30) = 0;
    uVar13 = TrackedViews.ArrayNum - 1;
    uVar5 = 0;
    if ((int)uVar13 < TrackedViews.ArrayNum) {
      uVar5 = ~uVar13 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_2f8 = (FRHIResource *)(longlong)(int)uVar13;
      local_2f0 = (FScriptContainerElement *)(longlong)TrackedViews.ArrayNum;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar10.Data = TrackedViews.AllocatorInstance.Data +
                  (longlong)(TrackedViews.ArrayNum + -1) * 0x40;
    *(uint *)(FVar10.Data + 0x38) = uVar4;
LAB_14de74d08:
    if ((this != (FRHIResource *)0x0) &&
       (bVar3 = ::FName::Equals((FName)this[1]._padding_,L"HitProxyTexture"), !bVar3)) {
      bVar3 = ::FName::Equals((FName)this[1]._padding_,L"BufferedRT");
      if ((!bVar3) &&
         ((((bVar3 = ::FName::Equals((FName)this[1]._padding_,L"BackBuffer0"), !bVar3 &&
            (bVar3 = ::FName::Equals((FName)this[1]._padding_,L"BackBuffer1"), !bVar3)) &&
           (bVar3 = ::FName::Equals((FName)this[1]._padding_,L"BackBuffer2"), !bVar3)) &&
          ((bVar3 = ::FName::Equals((FName)this[1]._padding_,L"BackbufferReference"), !bVar3 &&
           (bVar3 = ::FName::Equals((FName)this[1]._padding_,L"FD3D11Viewport::GetSwapChainSurface")
           , !bVar3)))))) {
        ::FString::FString(&local_2d8,L"HerpxDerp");
        local_2c8 = (FName)this[1]._padding_;
        ::FName::ToString(&local_2c8,&local_2a0);
        ::FString::PrintfImpl(&local_2c0,L"%s %p");
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
        (**(code **)(this->_padding_ + 0x20))(this);
        (**(code **)(this->_padding_ + 0x20))(this);
        ::FString::PrintfImpl(&local_2e8,L"X=%d Y=%d");
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        local_2d8.Data.AllocatorInstance.Data = local_2e8.Data.AllocatorInstance.Data;
        local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8.Data.ArrayNum = local_2e8.Data.ArrayNum;
        local_2d8.Data.ArrayMax = local_2e8.Data.ArrayMax;
        local_2e8.Data.ArrayNum = 0;
        local_2e8.Data.ArrayMax = 0;
        if (1 < (byte)LogStreamline._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
        }
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
      }
      pFVar12 = *(FRHIResource **)(FVar10.Data + 0x30);
      if (pFVar12 != this) {
        *(FRHIResource **)(FVar10.Data + 0x30) = this;
        FRHIResource::AddRef(this);
        if (pFVar12 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar12);
        }
      }
    }
    if (((*(int *)&param_1[1].Family == *(int *)(param_1 + 1)) &&
        (*(int *)((longlong)&param_1[1].Family + 4) == *(int *)&param_1[1].field_0x4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ViewInfo.ViewRect.IsEmpty()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                           ,0x1b2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined8 *)FVar10.Data = *(undefined8 *)(param_1 + 1);
    *(FSceneViewFamily **)(FVar10.Data + 8) = param_1[1].Family;
    if (((*(int *)((longlong)&(param_1->UnscaledViewRect).field0_0x0 + 8) ==
          *(int *)&(param_1->UnscaledViewRect).field0_0x0) &&
        (*(int *)((longlong)&(param_1->UnscaledViewRect).field0_0x0 + 0xc) ==
         *(int *)((longlong)&(param_1->UnscaledViewRect).field0_0x0 + 4))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ViewInfo.UnscaledViewRect.IsEmpty()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                           ,0x1b5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(TIntPoint<int>_u_0 *)(FVar10.Data + 0x10) =
         (param_1->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0;
    *(TIntPoint<int>_u_0 *)(FVar10.Data + 0x18) =
         (param_1->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0;
    if (((*(int *)((longlong)&(param_1->UnconstrainedViewRect).field0_0x0 + 8) ==
          *(int *)&(param_1->UnconstrainedViewRect).field0_0x0) &&
        (*(int *)((longlong)&(param_1->UnconstrainedViewRect).field0_0x0 + 0xc) ==
         *(int *)((longlong)&(param_1->UnconstrainedViewRect).field0_0x0 + 4))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ViewInfo.UnconstrainedViewRect.IsEmpty()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                           ,0x1b8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(TIntPoint<int>_u_0 *)(FVar10.Data + 0x20) =
         (param_1->UnconstrainedViewRect).field0_0x0._s_0.Min.field0_0x0;
    *(TIntPoint<int>_u_0 *)(FVar10.Data + 0x28) =
         (param_1->UnconstrainedViewRect).field0_0x0._s_0.Max.field0_0x0;
    pFVar9 = CurrentThreadName(&local_290);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    local_278._padding_ = 0;
    pFVar12 = (FRHIResource *)0x0;
    if (this[0xb].AtomicFlags.Packed.field_0x2 == '\0') {
      pFVar12 = this;
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"FStreamlineViewExtension::AddTrackedView",0x28,Yes);
    local_2f8 = pFVar12;
    local_2f0 = (FScriptContainerElement *)pwVar11;
    ::FString::PrintfImpl(&local_2b0,L"%s Key=%u Target=%p, %s");
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_2b0.Data.ArrayNum != 0) {
      FVar10.Data = local_2b0.Data.AllocatorInstance.Data;
    }
    LogTrackedViews((wchar_t *)FVar10.Data);
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    FRHIResource::Release(this);
  }
  else {
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FStreamlineViewExtension::AddTrackedView",0x28,Yes);
    LogViewNotTrackedReason(local_158.Ptr,param_1);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return;
}

// BeginRenderViewFamily @ 14de75150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::BeginRenderViewFamily
          (FStreamlineViewExtension *this,FSceneViewFamily *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  EStreamlineFeatureSupport EVar5;
  DLSSGMode DVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  
  EVar5 = QueryStreamlineDLSSGSupport();
  if ((EVar5 == Supported) &&
     (DVar6 = SLDLSSGModeFromCvar(), pTVar2 = CVarStreamlineDLSSGAdjustMotionBlurTimeScale.Ref,
     DVar6 != eOff)) {
    bVar4 = IsInParallelGameThread();
    lVar11 = 4;
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar9 = 0;
    }
    else {
      lVar9 = 4;
    }
    pTVar3 = CVarStreamlineDLSSGAdjustMotionBlurTimeScale.Ref;
    if ((*(int *)((longlong)pTVar2->ShadowedValue + lVar9) != 0) && ((param_1->Views).ArrayNum != 0)
       ) {
      bVar4 = IsInParallelGameThread();
      if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
        lVar11 = 0;
      }
      if (*(int *)((longlong)pTVar3->ShadowedValue + lVar11) == 2) {
        iVar7 = GLastDLSSGFramesPresented;
        if (GLastDLSSGFramesPresented < 1) {
          iVar7 = 1;
        }
      }
      else {
        iVar7 = GetStreamlineDLSSGNumFramesToGenerate();
        iVar7 = iVar7 + 1;
      }
      uVar10 = 0;
      fVar12 = __real_3f800000 / (float)iVar7;
      if (0 < (param_1->Views).ArrayNum) {
        lVar11 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar10 < (param_1->Views).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lVar9 = *(longlong *)
                   (*(longlong *)((param_1->Views).AllocatorInstance.Data + lVar11) + 0x10);
          if (lVar9 != 0) {
            *(float *)(lVar9 + 0x498) = fVar12 * *(float *)(lVar9 + 0x498);
            *(float *)(lVar9 + 0x49c) = fVar12 * *(float *)(lVar9 + 0x49c);
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 8;
        } while ((int)uVar10 < (param_1->Views).ArrayNum);
      }
    }
  }
  return;
}

// DebugViewTracking @ 14de76e70

bool __cdecl FStreamlineViewExtension::DebugViewTracking(void)

{
  return bLogStreamlineLogTrackedViews;
}

// LogTrackedViews @ 14de7d960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FStreamlineViewExtension::LogTrackedViews(wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FTrackedView *pFVar4;
  int iVar5;
  undefined1 local_res10 [8];
  FString local_38;
  FString local_28;
  
  iVar2 = TrackedViews.ArrayNum;
  if (bLogStreamlineLogTrackedViews) {
    bVar1 = true;
    pFVar4 = (FTrackedView *)
             (TrackedViews.AllocatorInstance.Data + (longlong)TrackedViews.ArrayNum * 0x40);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FVar3.Data = TrackedViews.AllocatorInstance.Data;
    while( true ) {
      if (TrackedViews.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FTrackedView_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if ((FTrackedView *)FVar3.Data == pFVar4) break;
      if (bVar1) {
        bVar1 = false;
      }
      else {
        ::FString::AppendChars(&local_38,L", ",2);
      }
      `FStreamlineViewExtension::LogTrackedViews'::__l2::<lambda_1>::operator()
                (local_res10,&local_28,(FTrackedView *)FVar3.Data);
      iVar5 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      FVar3.Data = FVar3.Data + 0x40;
    }
    if (4 < (byte)LogStreamline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamline);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostProcessPassAtEnd_RenderThread @ 14de7dd20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FScreenPassTexture * __thiscall
FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread
          (FStreamlineViewExtension *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1,FSceneView *param_2,FPostProcessMaterialInputs *param_3)

{
  EDebugViewShaderMode *pEVar1;
  double *pdVar2;
  char cVar3;
  FSceneViewFamily *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FSLShaderParameters *pFVar10;
  FStreamlineViewExtension *pFVar11;
  FRHIStreamlineArguments *pFVar12;
  undefined8 *puVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  EStreamlineFeatureSupport EVar21;
  DLSSGMode DVar22;
  int iVar23;
  DeepDVCMode DVar24;
  FScreenPassTexture *pFVar25;
  TIntPoint<int> TVar26;
  FRDGScope *pFVar27;
  FRHIBreadcrumbAllocator *pFVar28;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
  *pTVar29;
  FRDGTexture *pFVar30;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>
  *pTVar31;
  FRDGTextureUAV *pFVar32;
  FRDGTexture *pFVar33;
  FRHIStreamlineArguments *pFVar34;
  FRDGEventName *pFVar35;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>
  *pTVar36;
  FRenderTargetParameters *pFVar37;
  code *pcVar38;
  FScriptContainerElement *pFVar39;
  FScriptContainerElement *pFVar40;
  ForAnyElementType FVar41;
  FScreenPassTextureSlice *pFVar42;
  undefined8 *puVar43;
  TStaticArray<FScreenPassTextureSlice,5,4294967295> *pTVar44;
  uint uVar45;
  ulonglong uVar46;
  longlong lVar47;
  undefined1 auStackY_2818 [32];
  uint local_27a4;
  TIntPoint<int>_u_0 local_27a0;
  TIntPoint<int>_u_0 local_2798 [2];
  FSLShaderParameters *local_2788;
  <lambda_2> local_2778;
  <lambda_1> local_2777;
  <lambda_2> local_2776;
  <lambda_1> local_2775 [5];
  FScreenPassTexture local_2770;
  FStreamlineViewExtension *local_2758;
  int local_2750 [2];
  FRDGBuilder *local_2748;
  int local_2740;
  int local_273c;
  FRDGTexture *local_2738;
  FScreenPassTexture *local_2730;
  int local_2728;
  int local_2724;
  int local_2720 [2];
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_2718;
  TIntRect<int>_u_0 local_2708;
  FRDGTextureUAVDesc local_26f8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_26e0;
  char local_26d0;
  undefined4 local_26c8;
  undefined4 uStack_26c4;
  FRDGTexture *local_26c0;
  FRenderTargetBinding local_26b8;
  Type local_2698;
  int iStack_2694;
  uint uStack_2690;
  undefined4 uStack_268c;
  Type local_2688;
  int iStack_2684;
  uint uStack_2680;
  undefined4 uStack_267c;
  Type local_2678;
  int iStack_2674;
  uint uStack_2670;
  undefined4 uStack_266c;
  Type local_2668;
  int iStack_2664;
  uint uStack_2660;
  undefined4 uStack_265c;
  Type local_2658;
  int iStack_2654;
  uint uStack_2650;
  undefined4 uStack_264c;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2648;
  undefined1 local_2638;
  FRDGTexture *local_2630;
  FStreamlineRHI *local_2628;
  FString local_2620;
  FString local_2610;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2600;
  undefined1 local_25f0;
  TIntRect<int>_u_0 local_25e8;
  TTuple<unsigned___int64,unsigned_int> local_25d8;
  FScreenPassTextureSlice local_25c8;
  FScreenPassTextureSlice local_25b0;
  FScreenPassTextureSlice local_2598;
  FScreenPassRenderTarget local_2580;
  FScreenPassViewInfo local_2548;
  FScreenPassViewInfo local_2538 [2];
  FScreenPassViewInfo local_2518;
  FScreenPassViewInfo local_2508;
  FString local_24f8;
  FString local_24e8;
  FScreenPassViewInfo local_24d8;
  FScreenPassTexture local_24c8;
  FScreenPassTexture local_24b0;
  FRDGTextureAccess local_2498;
  FRDGTextureAccess local_2480;
  FRDGTextureAccess local_2468;
  FRDGTextureAccess local_2450;
  FScreenPassTexture local_2438;
  FScreenPassTexture local_2420;
  undefined8 local_2408;
  undefined1 uStack_2400;
  undefined1 uStack_23ff;
  undefined2 uStack_23fe;
  float fStack_23fc;
  float local_23f8;
  float fStack_23f4;
  float fStack_23f0;
  undefined1 uStack_23ec;
  bool bStack_23eb;
  undefined2 uStack_23ea;
  undefined8 local_23e8;
  undefined8 uStack_23e0;
  undefined8 local_23d8;
  undefined8 uStack_23d0;
  undefined8 local_23c8;
  undefined8 uStack_23c0;
  undefined8 local_23b8;
  undefined8 uStack_23b0;
  undefined8 local_23a8;
  undefined8 uStack_23a0;
  undefined8 local_2398;
  undefined8 uStack_2390;
  undefined8 local_2388;
  undefined8 uStack_2380;
  undefined8 local_2378;
  undefined8 uStack_2370;
  float local_2368;
  float fStack_2364;
  float fStack_2360;
  float fStack_235c;
  float local_2358;
  float fStack_2354;
  float fStack_2350;
  float fStack_234c;
  float local_2348;
  float fStack_2344;
  float fStack_2340;
  float fStack_233c;
  float local_2338;
  float fStack_2334;
  float fStack_2330;
  float fStack_232c;
  float local_2328;
  float fStack_2324;
  float fStack_2320;
  float fStack_231c;
  float local_2318;
  float fStack_2314;
  float fStack_2310;
  float fStack_230c;
  float local_2308;
  float fStack_2304;
  float fStack_2300;
  float fStack_22fc;
  float local_22f8 [2];
  float afStack_22f0 [2];
  float local_22e8;
  float fStack_22e4;
  float fStack_22e0;
  float fStack_22dc;
  float local_22d8;
  float fStack_22d4;
  float fStack_22d0;
  float fStack_22cc;
  float local_22c8;
  float fStack_22c4;
  float fStack_22c0;
  float fStack_22bc;
  float local_22b8;
  float fStack_22b4;
  float fStack_22b0;
  float fStack_22ac;
  undefined8 local_22a8;
  undefined4 local_22a0;
  undefined8 local_229c;
  undefined4 local_2294;
  undefined8 local_2290;
  undefined4 local_2288;
  undefined8 local_2284;
  undefined4 local_227c;
  float local_2278;
  float local_2274;
  float local_2270;
  float local_226c;
  TVector2<float>_u_0 local_2268;
  undefined8 local_2260;
  undefined4 uStack_224c;
  undefined4 local_2248;
  undefined4 uStack_2244;
  undefined4 uStack_222c;
  undefined4 local_2228;
  undefined4 uStack_2224;
  undefined4 uStack_220c;
  undefined4 local_2208;
  undefined4 uStack_2204;
  FRDGEventName local_21f8;
  FRDGEventName local_21e0 [2];
  FScreenPassTexture local_21b0;
  <lambda_3> local_2198;
  undefined1 local_1f98 [536];
  void *local_1d80;
  undefined4 local_1d78;
  void *local_1d70;
  FRDGTexture *local_1d10;
  undefined1 local_1cd8 [64];
  void *local_1c98;
  undefined4 local_1c90;
  undefined4 local_1c8c;
  TMatrix<float> local_1c88;
  FRHITextureDesc local_1c48;
  FRHITextureDesc local_1bf8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1ba8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a88;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1968;
  undefined1 local_1848 [448];
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  undefined8 uStack_1670;
  undefined8 local_1668;
  undefined8 uStack_1660;
  undefined8 local_1658;
  undefined8 uStack_1650;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined8 local_15d8;
  undefined8 uStack_15d0;
  undefined8 local_13b8;
  undefined4 local_13b0;
  undefined8 local_13a8;
  undefined4 local_13a0;
  undefined8 local_1398;
  undefined4 local_1390;
  undefined8 local_1348;
  undefined4 local_1340;
  TMatrix<float> local_fc8 [60];
  ulonglong local_98;
  undefined8 uStack_48;
  
  uStack_48 = 0x14de7dd3f;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2818;
  uVar45 = 0;
  uVar20 = 0;
  local_2758 = this;
  local_2748 = param_1;
  local_2730 = __return_storage_ptr__;
  bVar14 = IsInRenderingThread();
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                          ,0x2c0,L""), bVar14)) {
    pcVar38 = (code *)swi(3);
    pFVar25 = (FScreenPassTexture *)(*pcVar38)();
    return pFVar25;
  }
  if ((param_2->bIsViewInfo == false) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("View.bIsViewInfo",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                          ,0x2c1,L""), bVar14)) {
    pcVar38 = (code *)swi(3);
    pFVar25 = (FScreenPassTexture *)(*pcVar38)();
    return pFVar25;
  }
  AddTrackedView(param_2);
  uVar18 = (**(code **)(*(longlong *)CVarStreamlineViewIndexToTag._padding_ + 200))();
  local_2788 = (FSLShaderParameters *)CONCAT44(local_2788._4_4_,uVar18);
  iVar19 = (**(code **)(*(longlong *)CVarStreamlineViewIndexToTag._padding_ + 200))();
  if (iVar19 != -1) {
    if ((param_2->Family == (FSceneViewFamily *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InView->Family",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.h"
                            ,0x76,L""), bVar14)) {
      pcVar38 = (code *)swi(3);
      pFVar25 = (FScreenPassTexture *)(*pcVar38)();
      return pFVar25;
    }
    pFVar39 = (param_2->Family->Views).AllocatorInstance.Data;
    pFVar40 = pFVar39 + (longlong)(param_2->Family->Views).ArrayNum * 8;
    for (; pFVar39 != pFVar40; pFVar39 = pFVar39 + 8) {
      if (*(FSceneView **)pFVar39 == param_2) goto LAB_14de7de73;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InView->Family->Views.Contains(InView)",
                        "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.h"
                        ,0x77,L"");
    if (bVar14) {
      pcVar38 = (code *)swi(3);
      pFVar25 = (FScreenPassTexture *)(*pcVar38)();
      return pFVar25;
    }
LAB_14de7de73:
    pFVar4 = param_2->Family;
    iVar19 = (pFVar4->Views).ArrayNum;
    if (0 < iVar19) {
      lVar47 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar45 < iVar19) {
          uVar20 = ~uVar45 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar38 = (code *)swi(3);
          pFVar25 = (FScreenPassTexture *)(*pcVar38)();
          return pFVar25;
        }
        uVar20 = uVar45;
        if (*(FSceneView **)((pFVar4->Views).AllocatorInstance.Data + lVar47) == param_2) break;
        iVar19 = (pFVar4->Views).ArrayNum;
        uVar45 = uVar45 + 1;
        lVar47 = lVar47 + 8;
        uVar20 = uVar45;
      } while ((int)uVar45 < iVar19);
      param_1 = local_2748;
      uVar18 = (uint)local_2788;
    }
    if (((param_2->Family->Views).ArrayNum <= (int)uVar20) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewIndex < InView->Family->Views.Num()",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.h"
                            ,0x86,L""), bVar14)) {
      pcVar38 = (code *)swi(3);
      pFVar25 = (FScreenPassTexture *)(*pcVar38)();
      return pFVar25;
    }
    if (uVar18 != uVar20) {
      bVar14 = false;
      goto LAB_14de7df2f;
    }
  }
  bVar14 = true;
LAB_14de7df2f:
  pFVar11 = local_2758;
  uVar20 = FSceneView::GetViewKey(param_2);
  pFVar40 = (pFVar11->FramesWhereStreamlineConstantsWereSet).AllocatorInstance.Data;
  pFVar39 = pFVar40 + (longlong)(pFVar11->FramesWhereStreamlineConstantsWereSet).ArrayNum * 0x10;
  for (; pFVar40 != pFVar39; pFVar40 = pFVar40 + 0x10) {
    if ((*(ulong64 *)pFVar40 == GFrameCounterRenderThread) && (*(uint *)(pFVar40 + 8) == uVar20))
    goto LAB_14de7f610;
  }
  if ((((bVar14) && (param_2->bIsSceneCapture == false)) && (param_2->bIsOfflineRender == false)) &&
     ((param_2->bIsGameView != false && (param_2->StereoPass == eSSP_FULL)))) {
    local_25d8._8_4_ = FSceneView::GetViewKey(param_2);
    local_25d8._0_8_ = GFrameCounterRenderThread;
    TArray<TTuple<unsigned___int64,unsigned_int>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TTuple<unsigned___int64,unsigned_int>_>
              (&pFVar11->FramesWhereStreamlineConstantsWereSet,&local_25d8);
    CurrentThreadName(&local_24f8);
    FSceneView::GetViewKey(param_2);
    local_1ba8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1ba8,"FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread",0x3b,Yes);
    ::FString::PrintfImpl(&local_2620,L"%s Key=%u, %s");
    uVar20 = 0;
    FVar41.Data = (FScriptContainerElement *)L"";
    if (local_2620.Data.ArrayNum != 0) {
      FVar41.Data = local_2620.Data.AllocatorInstance.Data;
    }
    LogTrackedViews((wchar_t *)FVar41.Data);
    if (local_2620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2620.Data.AllocatorInstance.Data);
    }
    if ((void *)local_1ba8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1ba8._padding_);
    }
    if (local_24f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_24f8.Data.AllocatorInstance.Data);
    }
    pTVar44 = &param_3->UserSceneTextures;
    local_24c8.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_24c8.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    local_24c8.Texture = (FRDGTexture *)0x0;
    if ((param_3->bUserSceneTexturesSet).Elements[0] == false) {
      pTVar44 = &param_3->Textures;
    }
    local_25b0.TextureSRV = pTVar44->Elements[0].TextureSRV;
    local_25b0.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)pTVar44->Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0;
    local_25b0.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)pTVar44->Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0;
    FScreenPassTexture::CopyFromSlice(&local_2770,param_1,&local_25b0,&local_24c8);
    bVar14 = NeedStreamlineViewIdOverride();
    if (!bVar14) {
      uVar20 = FSceneView::GetViewKey(param_2);
    }
    local_2748 = (FRDGBuilder *)GFrameCounterRenderThread;
    local_27a0 = (TIntPoint<int>_u_0)
                 *(TIntPoint<int>_u_0 *)&((TIntPoint<int>_u_0 *)(param_2 + 1))->_s_0;
    local_2798[0] = (TIntPoint<int>_u_0)param_2[1].Family;
    local_27a4 = uVar20;
    TVar26 = FViewInfo::GetSecondaryViewRectSize((FViewInfo *)param_2);
    local_26d0 = '\0';
    local_2708._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    local_2708._s_0.Max.field0_0x0 = (TIntPoint<int>)*(undefined8 *)TVar26.field0_0x0;
    cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
    if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      local_2728 = local_2798[0]._s_0.Y - local_27a0._4_4_;
      local_2724 = local_2798[0]._s_0.X - local_27a0._0_4_;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_2248 = 0x54da25b0;
        uStack_2244 = 1;
        ::Desc._padding_._0_4_ = 0x54da25b0;
        ::Desc._padding_._4_4_ = uStack_224c;
        ::Desc._padding_ = (longlong)::s_C__Workspace_ProjectDS_Client_P;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_Streamline_View;
        ::Desc._padding_ = (longlong)u_Streamline_View;
        ::Desc._padding_._0_4_ = 0x2fb;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l37::Desc::
               operator()<unsigned_int_const_&,int,int,int_const_&,int_const_&,int_const_&,int_const_&>'
               ::__l3::<lambda_1>::
               operator()<unsigned_int_const_&,int,int,int_const_&,int_const_&,int_const_&,int_const_&>'
               ::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_26e0.State = (FRDGScopeState *)param_1;
      pFVar27 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar27;
      uVar46 = (ulonglong)(pFVar27->Impl).Impl.TypeIndex;
      local_26e0.Scope = pFVar27;
      if ((3 < uVar46) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar14)) {
        pcVar38 = (code *)swi(3);
        pFVar25 = (FScreenPassTexture *)(*pcVar38)();
        return pFVar25;
      }
      (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
        ::__l2::Destructors[uVar46])(&pFVar27->Impl);
      pFVar28 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
      pTVar29 = FMemStackBase::Alloc(&pFVar28->Inner,0x70,8);
      pTVar29 = UE::RHI::Breadcrumbs::Private::
                TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
                ::
                TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_><unsigned_int_const_&,int_&,int_&,int_const_&,int_const_&,int_const_&,int_const_&>
                          (pTVar29,pFVar28,&::Desc,&local_27a4,&local_2724,&local_2728,local_27a0.XY
                           ,&local_27a0._s_0.Y,local_2798[0].XY,&local_2798[0]._s_0.Y);
      FRDGScope_RHI::FRDGScope_RHI
                ((FRDGScope_RHI *)&pFVar27->Impl,(FRDGScopeState *)param_1,
                 (FRHIBreadcrumbNode *)pTVar29);
      (pFVar27->Impl).Impl.TypeIndex = '\x02';
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar27,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar27,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_26d0 = '\x01';
    }
    bVar14 = ForceTagStreamlineBuffers();
    if ((bVar14) ||
       ((EVar21 = QueryStreamlineDLSSGSupport(), EVar21 == Supported &&
        (DVar22 = SLDLSSGModeFromCvar(), DVar22 != eOff)))) {
      pEVar1 = &param_2->Family[1].DebugViewShaderMode;
      if (((param_2->Family->bIsViewFamilyInfo == false) ||
          (*(char *)(*(longlong *)pEVar1 + 8) == '\0')) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("bIsViewFamilyInfo && SceneTextures->bIsSceneTexturesInitialized",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                              ,0x7c0,
                              L"FSceneTextures was not initialized. Call FSceneTextures::InitializeViewFamily() first."
                             ), bVar14)) {
        pcVar38 = (code *)swi(3);
        pFVar25 = (FScreenPassTexture *)(*pcVar38)();
        return pFVar25;
      }
      FSceneTextures::FSceneTextures((FSceneTextures *)local_1f98,*(FSceneTextures **)pEVar1);
      if ((local_2770.Texture == (FRDGTexture *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("SceneColorAfterTonemap",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                              ,0x30c,L""), bVar14)) {
        pcVar38 = (code *)swi(3);
        pFVar25 = (FScreenPassTexture *)(*pcVar38)();
        return pFVar25;
      }
      pTVar44 = &param_3->UserSceneTextures;
      local_24b0.Texture = (FRDGTexture *)0x0;
      local_24b0.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      local_24b0.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      if ((param_3->bUserSceneTexturesSet).Elements[4] == false) {
        pTVar44 = &param_3->Textures;
      }
      pFVar42 = pTVar44->Elements + 4;
      local_2598.TextureSRV = pFVar42->TextureSRV;
      local_2598.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(pFVar42->ViewRect).field0_0x0._s_0.Min.field0_0x0;
      local_2598.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
           (TIntPoint<int>)(pFVar42->ViewRect).field0_0x0._s_0.Max.field0_0x0;
      pFVar25 = FScreenPassTexture::CopyFromSlice(&local_21b0,param_1,&local_2598,&local_24b0);
      local_2738 = (FRDGTexture *)local_1f98._416_8_;
      pFVar33 = pFVar25->Texture;
      if (pFVar25->Texture == (FRDGTexture *)0x0) {
        pFVar33 = local_1d10;
      }
      local_26c0 = pFVar33;
      if (((FRDGTexture *)local_1f98._416_8_ == (FRDGTexture *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("SceneDepth",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                              ,0x323,L""), bVar14)) {
        pcVar38 = (code *)swi(3);
        pFVar25 = (FScreenPassTexture *)(*pcVar38)();
        return pFVar25;
      }
      uVar5 = local_1f98._448_8_;
      local_2628 = local_2758->StreamlineRHIExtensions;
      local_2788 = FRDGAllocator::Alloc<FSLShaderParameters>((FRDGAllocator *)&param_1->_padding_);
      bVar14 = TAutoConsoleVariable<bool>::GetValueOnRenderThread
                         (&CVarStreamlineTagSceneColorWithoutHUD);
      if (bVar14) {
        FRHITextureDesc::FRHITextureDesc(&local_1c48,(FRHITextureDesc *)&(local_2770.Texture)->Desc)
        ;
        local_1c48.Flags =
             local_1c48.Flags & ~(Presentable|ResolveTargetable) | (UAV|ShaderResource);
        pFVar30 = FRDGBuilder::CreateTexture
                            (param_1,(FRDGTextureDesc *)&local_1c48,
                             L"Streamline.SceneColorWithoutHUD",None);
        local_2698 = param_2->FeatureLevel;
        iStack_2694 = param_2->StereoViewIndex;
        uStack_2690 = param_2->InstanceFactor;
        uStack_268c = CONCAT31(uStack_268c._1_3_,param_2->bHMDHiddenAreaMaskActive);
        local_2508.StereoViewIndex = iStack_2694;
        local_2508.FeatureLevel = local_2698;
        local_2508._12_4_ = uStack_268c;
        local_2508.InstanceCount = uStack_2690;
        AddDrawTexturePass(param_1,&local_2508,local_2770.Texture,pFVar30,
                           UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue,
                           UE::Math::TIntPoint<int>::ZeroValue);
        FRDGTextureAccess::FRDGTextureAccess(&local_2498,pFVar30,CopySrc);
        *(FRDGTexture **)&local_2788->SceneColorWithoutHUD = local_2498.Texture;
        (local_2788->SceneColorWithoutHUD).field_0x8 = local_2498.SubresourceRange.MipIndex;
        (local_2788->SceneColorWithoutHUD).field_0x9 = local_2498.SubresourceRange.PlaneSlice;
        *(ushort *)&(local_2788->SceneColorWithoutHUD).field_0xa =
             local_2498.SubresourceRange.ArraySlice;
        (local_2788->SceneColorWithoutHUD).field_0xc = local_2498.SubresourceRange.NumMips;
        (local_2788->SceneColorWithoutHUD).field_0xd = local_2498.SubresourceRange.NumPlaneSlices;
        *(ushort *)&(local_2788->SceneColorWithoutHUD).field_0xe =
             local_2498.SubresourceRange.NumArraySlices;
        *(ERHIAccess *)&(local_2788->SceneColorWithoutHUD).field_0x10 = local_2498.Access;
        *(undefined4 *)&(local_2788->SceneColorWithoutHUD).field_0x14 = local_2498._20_4_;
        if (local_1c48.AliasableFormats.AllocatorInstance.SecondaryData !=
            (ForElementType<EPixelFormat>)0x0) {
          FMemory::Free((void *)local_1c48.AliasableFormats.AllocatorInstance.SecondaryData);
        }
      }
      bVar15 = TAutoConsoleVariable<bool>::GetValueOnRenderThread(&CVarStreamlineTagCustomDepth);
      if (bVar15) {
        cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
        bVar16 = false;
        local_2638 = 0;
        pFVar33 = (FRDGTexture *)local_1f98._416_8_;
        if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
          local_2720[0] = local_2798[0]._s_0.Y - local_27a0._4_4_;
          local_2740 = local_2798[0]._s_0.X - local_27a0._0_4_;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::Desc._padding_._0_4_ = 0x353;
            local_2228 = 0x54da25b0;
            uStack_2224 = 1;
            ::Desc._padding_._0_4_ = 0x54da25b0;
            ::Desc._padding_._4_4_ = uStack_222c;
            ::Desc._padding_ = (longlong)::s_C__Workspace_ProjectDS_Client_P;
            ::Desc._padding_._4_4_ = 1;
            ::Desc._padding_ = (longlong)u_Streamline_Cust;
            ::Desc._padding_ = (longlong)u_Streamline_Cust;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l68::
                   <lambda_2>::operator()<int,int,int_const_&,int_const_&,int_const_&,int_const_&>'
                   ::__l3::<lambda_1>::
                   operator()<int,int,int_const_&,int_const_&,int_const_&,int_const_&>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_2648.State = (FRDGScopeState *)param_1;
          pFVar27 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)pFVar27;
          uVar46 = (ulonglong)(pFVar27->Impl).Impl.TypeIndex;
          local_2648.Scope = pFVar27;
          if ((3 < uVar46) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar16)) {
            pcVar38 = (code *)swi(3);
            pFVar25 = (FScreenPassTexture *)(*pcVar38)();
            return pFVar25;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar46])(&pFVar27->Impl);
          pFVar28 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
          pTVar31 = FMemStackBase::Alloc(&pFVar28->Inner,0x68,8);
          pTVar31 = UE::RHI::Breadcrumbs::Private::
                    TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>
                    ::
                    TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_><int_&,int_&,int_const_&,int_const_&,int_const_&,int_const_&>
                              (pTVar31,pFVar28,&::Desc,&local_2740,local_2720,local_27a0.XY,
                               &local_27a0._s_0.Y,local_2798[0].XY,&local_2798[0]._s_0.Y);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&pFVar27->Impl,(FRDGScopeState *)param_1,
                     (FRHIBreadcrumbNode *)pTVar31);
          (pFVar27->Impl).Impl.TypeIndex = '\x02';
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(pFVar27,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(pFVar27,(FRHIComputeCommandList *)param_1->_padding_);
          }
          bVar16 = true;
          local_2638 = 1;
          pFVar33 = local_2738;
        }
        if ((((FRDGTexture *)uVar5 == (FRDGTexture *)0x0) ||
            ((FRDGTexture *)local_1f98._448_8_ == (FRDGTexture *)0x0)) ||
           ((*(longlong *)(uVar5 + 0x20) & 0x400) == 0)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
          if (((*(int *)&((FRDGTextureDesc *)(uVar5 + 0x80))->field_0x24 !=
                *(int *)&(pFVar33->Desc).field_0x24) ||
              (*(int *)&((FRDGTextureDesc *)(uVar5 + 0x80))->field_0x28 !=
               *(int *)&(pFVar33->Desc).field_0x28)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!bHasCustomDepth || bHasCustomDepth && (CustomDepth->Desc.Extent == SceneDepth->Desc.Extent)"
                                  ,
                                  "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                                  ,0x35a,L""), bVar17)) {
            pcVar38 = (code *)swi(3);
            pFVar25 = (FScreenPassTexture *)(*pcVar38)();
            return pFVar25;
          }
        }
        local_1cd8._0_8_ = 0x20009;
        local_1c8c = 1;
        local_1cd8._8_8_ = 2;
        local_1cd8._44_4_ = 0x10001;
        if (bVar9) {
          pFVar33 = (FRDGTexture *)uVar5;
        }
        local_1cd8._48_4_ = 0x47000101;
        local_1cd8._52_2_ = 0xff00;
        local_1cd8._16_4_ = 0;
        local_1cd8._32_4_ = 0;
        local_1cd8._36_8_ = *(undefined8 *)&(pFVar33->Desc).field_0x24;
        local_26c8 = (undefined4)local_1cd8._36_8_;
        uStack_26c4 = SUB84(local_1cd8._36_8_,4);
        local_1cd8._20_8_ = local_21e0[1].FormattedEventName.Data._4_8_;
        local_1cd8._28_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        local_1c98 = (void *)0x0;
        local_1c90 = 0;
        local_2630 = FRDGBuilder::CreateTexture
                               (param_1,(FRDGTextureDesc *)local_1cd8,L"Streamline.CustomDepth",None
                               );
        if (bVar9) {
          local_2688 = param_2->FeatureLevel;
          iStack_2684 = param_2->StereoViewIndex;
          uStack_2680 = param_2->InstanceFactor;
          uStack_267c = CONCAT31(uStack_267c._1_3_,param_2->bHMDHiddenAreaMaskActive);
          local_2518.StereoViewIndex = iStack_2684;
          local_2518.FeatureLevel = local_2688;
          local_2518._12_4_ = uStack_267c;
          local_2518.InstanceCount = uStack_2680;
          AddDrawTexturePass(param_1,&local_2518,(FRDGTexture *)uVar5,local_2630,
                             (TIntPoint<int>)local_27a0._s_0,(TIntPoint<int>)local_27a0,
                             (TIntPoint<int>)
                             (((ulonglong)local_2798[0] & 0xffffffff00000000) -
                              ((ulonglong)local_27a0 & 0xffffffff00000000) |
                             (ulonglong)(uint)(local_2798[0]._s_0.X - local_27a0._s_0.X)));
        }
        else {
          local_26f8._padding_._0_1_ = (local_2630->Desc).field_0x34;
          local_26f8._padding_._1_1_ = 0;
          local_26f8._padding_._2_4_ = 0;
          local_26f8._padding_._6_1_ = 0;
          local_26f8._padding_._0_1_ = 0;
          local_26f8.Texture = local_2630;
          FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_26f8);
          pFVar33 = local_26f8.Texture;
          pFVar32 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
          pFVar32 = FRDGTextureUAV::FRDGTextureUAV
                              (pFVar32,(wchar_t *)pFVar33->_padding_,&local_26f8,None);
          TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                    (&param_1->Views,(FRDGView *)pFVar32);
          FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar32);
          AddClearUAVPass(param_1,pFVar32,0.0,Compute);
        }
        FRDGTextureAccess::FRDGTextureAccess(&local_2480,local_2630,CopySrc);
        *(FRDGTexture **)&local_2788->NoWarpMask = local_2480.Texture;
        (local_2788->NoWarpMask).field_0x8 = local_2480.SubresourceRange.MipIndex;
        (local_2788->NoWarpMask).field_0x9 = local_2480.SubresourceRange.PlaneSlice;
        *(ushort *)&(local_2788->NoWarpMask).field_0xa = local_2480.SubresourceRange.ArraySlice;
        (local_2788->NoWarpMask).field_0xc = local_2480.SubresourceRange.NumMips;
        (local_2788->NoWarpMask).field_0xd = local_2480.SubresourceRange.NumPlaneSlices;
        *(ushort *)&(local_2788->NoWarpMask).field_0xe = local_2480.SubresourceRange.NumArraySlices;
        *(ERHIAccess *)&(local_2788->NoWarpMask).field_0x10 = local_2480.Access;
        *(undefined4 *)&(local_2788->NoWarpMask).field_0x14 = local_2480._20_4_;
        if (local_1c98 != (void *)0x0) {
          FMemory::Free(local_1c98);
        }
        pFVar33 = local_26c0;
        if (bVar16) {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2648);
          pFVar33 = local_26c0;
        }
      }
      bVar16 = TAutoConsoleVariable<bool>::GetValueOnRenderThread(&CVarStreamlineTagVelocities);
      iVar19 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarStreamlineDilateMotionVectors)
      ;
      pFVar30 = local_2738;
      if (bVar16) {
        pFVar33 = AddStreamlineVelocityCombinePass
                            (param_1,(FViewInfo *)param_2,local_2738,pFVar33,(FRDGTexture *)0x0,
                             iVar19 != 0);
        FRDGTextureAccess::FRDGTextureAccess(&local_2468,pFVar33,CopySrc);
        *(FRDGTexture **)&local_2788->Velocity = local_2468.Texture;
        (local_2788->Velocity).field_0x8 = local_2468.SubresourceRange.MipIndex;
        (local_2788->Velocity).field_0x9 = local_2468.SubresourceRange.PlaneSlice;
        *(ushort *)&(local_2788->Velocity).field_0xa = local_2468.SubresourceRange.ArraySlice;
        (local_2788->Velocity).field_0xc = local_2468.SubresourceRange.NumMips;
        (local_2788->Velocity).field_0xd = local_2468.SubresourceRange.NumPlaneSlices;
        *(ushort *)&(local_2788->Velocity).field_0xe = local_2468.SubresourceRange.NumArraySlices;
        *(ERHIAccess *)&(local_2788->Velocity).field_0x10 = local_2468.Access;
        *(undefined4 *)&(local_2788->Velocity).field_0x14 = local_2468._20_4_;
      }
      FRDGTextureAccess::FRDGTextureAccess(&local_2450,pFVar30,DSVRead|CopySrc|SRVMask);
      pFVar10 = local_2788;
      uStack_23fe = 0;
      *(FRDGTexture **)&local_2788->Depth = local_2450.Texture;
      (local_2788->Depth).field_0x8 = local_2450.SubresourceRange.MipIndex;
      (local_2788->Depth).field_0x9 = local_2450.SubresourceRange.PlaneSlice;
      *(ushort *)&(local_2788->Depth).field_0xa = local_2450.SubresourceRange.ArraySlice;
      (local_2788->Depth).field_0xc = local_2450.SubresourceRange.NumMips;
      (local_2788->Depth).field_0xd = local_2450.SubresourceRange.NumPlaneSlices;
      *(ushort *)&(local_2788->Depth).field_0xe = local_2450.SubresourceRange.NumArraySlices;
      uStack_23ea = 0;
      *(ERHIAccess *)&(local_2788->Depth).field_0x10 = local_2450.Access;
      *(undefined4 *)&(local_2788->Depth).field_0x14 = local_2450._20_4_;
      local_2260 = 0;
      fStack_23fc = (float)param_2[1].ViewMatrices.InvTranslatedViewMatrix.M[2][1];
      local_2788 = (FSLShaderParameters *)CONCAT44(local_2788._4_4_,local_27a4);
      local_2408 = CONCAT44((int)local_2748,local_27a4);
      uStack_2400 = param_2->bCameraCut;
      uStack_23ff = 1;
      local_23f8 = (float)param_2[1].ViewMatrices.InvTranslatedViewMatrix.M[2][2];
      local_2278 = TAutoConsoleVariable<float>::GetValueOnRenderThread
                             (&CVarStreamlineCustomCameraNearPlane);
      local_2274 = TAutoConsoleVariable<float>::GetValueOnRenderThread
                             (&CVarStreamlineCustomCameraFarPlane);
      local_2270 = param_2->FOV;
      local_226c = (float)(*(int *)&param_2[1].Family - *(int *)(param_2 + 1)) /
                   (float)(*(int *)((longlong)&param_2[1].Family + 4) -
                          *(int *)&param_2[1].field_0x4);
      fStack_23f0 = TAutoConsoleVariable<float>::GetValueOnRenderThread
                              (&CVarStreamlineMotionVectorScale);
      if (iVar19 == 0) {
        iVar23 = *(int *)((longlong)&param_2[1].Family + 4) - *(int *)&param_2[1].field_0x4;
        fStack_23f4 = fStack_23f0 / (float)(*(int *)&param_2[1].Family - *(int *)(param_2 + 1));
      }
      else {
        TVar26 = FViewInfo::GetSecondaryViewRectSize((FViewInfo *)param_2);
        fStack_23f4 = fStack_23f0 / (float)*(int *)TVar26.field0_0x0;
        TVar26 = FViewInfo::GetSecondaryViewRectSize((FViewInfo *)param_2);
        iVar23 = *(int *)((longlong)TVar26.field0_0x0 + 4);
      }
      fStack_23f0 = fStack_23f0 / (float)iVar23;
      uStack_23ec = iVar19 != 0;
      memcpy(local_1848,(void *)param_2[1].ViewUniformBuffer,0x17b0);
      pdVar2 = (param_2->ViewMatrices).ProjectionMatrix.M[3] + 3;
      bStack_23eb = __real_3ff0000000000000 < *pdVar2 || __real_3ff0000000000000 == *pdVar2;
      local_23a8 = local_1608;
      uStack_23a0 = uStack_1600;
      local_2388 = local_15e8;
      uStack_2380 = uStack_15e0;
      local_22f8[0] = local_fc8[0].M[3][0];
      local_22f8[1] = local_fc8[0].M[3][1];
      afStack_22f0[0] = local_fc8[0].M[3][2];
      afStack_22f0[1] = local_fc8[0].M[3][3];
      local_2398 = local_15f8;
      uStack_2390 = uStack_15f0;
      local_2378 = local_15d8;
      uStack_2370 = uStack_15d0;
      local_2368 = UE::Math::TMatrix<float>::Identity.M[0][0];
      fStack_2364 = UE::Math::TMatrix<float>::Identity.M[0][1];
      fStack_2360 = UE::Math::TMatrix<float>::Identity.M[0][2];
      fStack_235c = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_2358 = UE::Math::TMatrix<float>::Identity.M[1][0];
      fStack_2354 = UE::Math::TMatrix<float>::Identity.M[1][1];
      fStack_2350 = UE::Math::TMatrix<float>::Identity.M[1][2];
      fStack_234c = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_2348 = UE::Math::TMatrix<float>::Identity.M[2][0];
      fStack_2344 = UE::Math::TMatrix<float>::Identity.M[2][1];
      fStack_2340 = UE::Math::TMatrix<float>::Identity.M[2][2];
      fStack_233c = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_2338 = UE::Math::TMatrix<float>::Identity.M[3][0];
      fStack_2334 = UE::Math::TMatrix<float>::Identity.M[3][1];
      fStack_2330 = UE::Math::TMatrix<float>::Identity.M[3][2];
      fStack_232c = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_2328 = local_fc8[0].M[0][0];
      fStack_2324 = local_fc8[0].M[0][1];
      fStack_2320 = local_fc8[0].M[0][2];
      fStack_231c = local_fc8[0].M[0][3];
      local_2318 = local_fc8[0].M[1][0];
      fStack_2314 = local_fc8[0].M[1][1];
      fStack_2310 = local_fc8[0].M[1][2];
      fStack_230c = local_fc8[0].M[1][3];
      local_2308 = local_fc8[0].M[2][0];
      fStack_2304 = local_fc8[0].M[2][1];
      fStack_2300 = local_fc8[0].M[2][2];
      fStack_22fc = local_fc8[0].M[2][3];
      if (((__real_322bcc77 <
            (float)((uint)local_fc8[0].M[0][0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
          (__real_322bcc77 <
           (float)((uint)local_fc8[0].M[0][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         ((((__real_322bcc77 <
             (float)((uint)local_fc8[0].M[0][2] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
            (((__real_322bcc77 <
               (float)((uint)local_fc8[0].M[1][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
              (__real_322bcc77 <
               (float)((uint)local_fc8[0].M[1][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
             (__real_322bcc77 <
              (float)((uint)local_fc8[0].M[1][2] & __xmm_7fffffff7fffffff7fffffff7fffffff))))) ||
           ((__real_322bcc77 <
             (float)((uint)local_fc8[0].M[2][0] & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
            (__real_322bcc77 <
             (float)((uint)local_fc8[0].M[2][1] & __xmm_7fffffff7fffffff7fffffff7fffffff))))) ||
          (local_22e8 = UE::Math::TMatrix<float>::Identity.M[0][0],
          fStack_22e4 = UE::Math::TMatrix<float>::Identity.M[0][1],
          fStack_22e0 = UE::Math::TMatrix<float>::Identity.M[0][2],
          fStack_22dc = UE::Math::TMatrix<float>::Identity.M[0][3],
          local_22d8 = UE::Math::TMatrix<float>::Identity.M[1][0],
          fStack_22d4 = UE::Math::TMatrix<float>::Identity.M[1][1],
          fStack_22d0 = UE::Math::TMatrix<float>::Identity.M[1][2],
          fStack_22cc = UE::Math::TMatrix<float>::Identity.M[1][3],
          local_22c8 = UE::Math::TMatrix<float>::Identity.M[2][0],
          fStack_22c4 = UE::Math::TMatrix<float>::Identity.M[2][1],
          fStack_22c0 = UE::Math::TMatrix<float>::Identity.M[2][2],
          fStack_22bc = UE::Math::TMatrix<float>::Identity.M[2][3],
          local_22b8 = UE::Math::TMatrix<float>::Identity.M[3][0],
          fStack_22b4 = UE::Math::TMatrix<float>::Identity.M[3][1],
          fStack_22b0 = UE::Math::TMatrix<float>::Identity.M[3][2],
          fStack_22ac = UE::Math::TMatrix<float>::Identity.M[3][3],
          __real_322bcc77 <
          (float)((uint)local_fc8[0].M[2][2] & __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
        FMath::MatrixInverse(&local_1c88,local_fc8);
        local_22e8 = local_1c88.M[0][0];
        fStack_22e4 = local_1c88.M[0][1];
        fStack_22e0 = local_1c88.M[0][2];
        fStack_22dc = local_1c88.M[0][3];
        local_22d8 = local_1c88.M[1][0];
        fStack_22d4 = local_1c88.M[1][1];
        fStack_22d0 = local_1c88.M[1][2];
        fStack_22cc = local_1c88.M[1][3];
        local_22c8 = local_1c88.M[2][0];
        fStack_22c4 = local_1c88.M[2][1];
        fStack_22c0 = local_1c88.M[2][2];
        fStack_22bc = local_1c88.M[2][3];
        local_22b8 = local_1c88.M[3][0];
        fStack_22b4 = local_1c88.M[3][1];
        fStack_22b0 = local_1c88.M[3][2];
        fStack_22ac = local_1c88.M[3][3];
      }
      lVar47 = 3;
      local_22a0 = local_1340;
      local_22a8 = local_1348;
      local_2294 = local_13a0;
      local_229c = local_13a8;
      local_2288 = local_1390;
      local_2290 = local_1398;
      local_227c = local_13b0;
      local_2284 = local_13b8;
      local_2268 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_23e8 = local_1688;
      uStack_23e0 = uStack_1680;
      local_23d8 = local_1678;
      uStack_23d0 = uStack_1670;
      local_2198.LocalStreamlineRHIExtensions = local_2628;
      local_23c8 = local_1668;
      uStack_23c0 = uStack_1660;
      local_23b8 = local_1658;
      uStack_23b0 = uStack_1650;
      local_2198.PassParameters = pFVar10;
      pFVar12 = &local_2198.StreamlineArguments;
      puVar13 = &local_2408;
      do {
        puVar43 = puVar13;
        pFVar34 = pFVar12;
        pFVar12 = (FRHIStreamlineArguments *)((pFVar34->ClipToCameraView).M + 2);
        uVar5 = *puVar43;
        uVar6 = puVar43[1];
        uVar7 = puVar43[2];
        uVar8 = puVar43[3];
        pFVar34->ViewId = (int)uVar5;
        pFVar34->FrameId = (int)((ulonglong)uVar5 >> 0x20);
        *(undefined8 *)&pFVar34->bReset = uVar6;
        uVar5 = puVar43[4];
        uVar6 = puVar43[5];
        *(undefined8 *)((longlong)&(pFVar34->JitterOffset).field0_0x0 + 4) = uVar7;
        *(undefined8 *)((longlong)&(pFVar34->MotionVectorScale).field0_0x0 + 4) = uVar8;
        uVar7 = puVar43[6];
        uVar8 = puVar43[7];
        *(undefined8 *)(pFVar34->CameraViewToClip).M[0] = uVar5;
        *(undefined8 *)((pFVar34->CameraViewToClip).M[0] + 2) = uVar6;
        uVar5 = puVar43[8];
        uVar6 = puVar43[9];
        *(undefined8 *)(pFVar34->CameraViewToClip).M[1] = uVar7;
        *(undefined8 *)((pFVar34->CameraViewToClip).M[1] + 2) = uVar8;
        uVar7 = puVar43[10];
        uVar8 = puVar43[0xb];
        *(undefined8 *)(pFVar34->CameraViewToClip).M[2] = uVar5;
        *(undefined8 *)((pFVar34->CameraViewToClip).M[2] + 2) = uVar6;
        uVar5 = puVar43[0xc];
        uVar6 = puVar43[0xd];
        *(undefined8 *)(pFVar34->CameraViewToClip).M[3] = uVar7;
        *(undefined8 *)((pFVar34->CameraViewToClip).M[3] + 2) = uVar8;
        uVar7 = puVar43[0xe];
        uVar8 = puVar43[0xf];
        *(undefined8 *)(pFVar34->ClipToCameraView).M[0] = uVar5;
        *(undefined8 *)((pFVar34->ClipToCameraView).M[0] + 2) = uVar6;
        *(undefined8 *)(pFVar34->ClipToCameraView).M[1] = uVar7;
        *(undefined8 *)((pFVar34->ClipToCameraView).M[1] + 2) = uVar8;
        lVar47 = lVar47 + -1;
        puVar13 = puVar43 + 0x10;
      } while (lVar47 != 0);
      uVar5 = puVar43[0x10];
      uVar6 = puVar43[0x11];
      uVar7 = puVar43[0x12];
      uVar8 = puVar43[0x13];
      pFVar12->ViewId = (int)uVar5;
      pFVar12->FrameId = (int)((ulonglong)uVar5 >> 0x20);
      *(undefined8 *)((pFVar34->ClipToCameraView).M[2] + 2) = uVar6;
      uVar5 = puVar43[0x14];
      uVar6 = puVar43[0x15];
      *(undefined8 *)(pFVar34->ClipToCameraView).M[3] = uVar7;
      *(undefined8 *)((pFVar34->ClipToCameraView).M[3] + 2) = uVar8;
      *(undefined8 *)(pFVar34->ClipToLenseClip).M[0] = uVar5;
      *(undefined8 *)((pFVar34->ClipToLenseClip).M[0] + 2) = uVar6;
      local_2198.SecondaryViewRect.field0_0x0._s_0.Min.field0_0x0 = local_2708._s_0.Min.field0_0x0;
      local_2198.SecondaryViewRect.field0_0x0._s_0.Max.field0_0x0 = local_2708._s_0.Max.field0_0x0;
      local_2198.SceneColor.Texture = local_2770.Texture;
      local_2198.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(TIntPoint<int>)local_27a0;
      local_2198.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
           (TIntPoint<int>)(TIntPoint<int>)local_2798[0];
      local_2198.bTagMotionVectors = bVar16;
      local_2198.bTagCustomDepth = bVar15;
      local_2198.bTagSceneColorWithoutHUD = bVar14;
      pFVar35 = FRDGEventName::FRDGEventName
                          (&local_21f8,L"Streamline Common %dx%d FrameId=%u ViewID=%u");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLShaderParameters::FTypeInfo::GetStructMetadata(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLShaderParameters::FTypeInfo::GetStructMetadata(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLShaderParameters::FTypeInfo::GetStructMetadata(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        pcVar38 = FSLShaderParameters::zzAppendMemberGetPrev;
        local_2718.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2718.ArrayNum = 0;
        local_2718.ArrayMax = 0;
        do {
          pcVar38 = (code *)(*pcVar38)(bVar14,&local_2718);
        } while (pcVar38 != (code *)0x0);
        AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                  ((FMember *)local_2718.AllocatorInstance.Data,local_2718.ArrayNum);
        FShaderParametersMetadata::FShaderParametersMetadata
                  (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLShaderParameters::FTypeInfo::GetStructMetadata(void)'
                    ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FSLShaderParameters"
                   ,L"FSLShaderParameters",(wchar_t *)0x0,(wchar_t *)0x0,
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                   ,0x2b3,0x60,&local_2718,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
        if ((FMember *)local_2718.AllocatorInstance.Data != (FMember *)0x0) {
          FMemory::Free(local_2718.AllocatorInstance.Data);
        }
        atexit(`FSLShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
               _dynamic_atexit_destructor_for__StaticStructMetadata__);
        _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLShaderParameters::FTypeInfo::GetStructMetadata(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FRDGBuilder::
      AddPassInternal<FSLShaderParameters,_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread_::__l40::<lambda_3>_>
                (param_1,pFVar35,
                 &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FSLShaderParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,pFVar10,
                 NeverMerge|SkipRenderPass|Readback|Compute|Raster,&local_2198);
      if (local_21f8.FormattedEventName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_21f8.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_1d70 != (void *)0x0) {
        FMemory::Free(local_1d70);
      }
      local_1d78 = 0;
      if (local_1d80 != (void *)0x0) {
        FMemory::Free(local_1d80);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FTransientUserSceneTexture,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_1f98 + 0x1d8));
    }
    EVar21 = QueryStreamlineDLSSGSupport();
    if (EVar21 == Supported) {
      AddStreamlineStateRenderPass<_AddStreamlineDLSSGStateRenderPass_::__l2::<lambda_1>,_AddStreamlineDLSSGStateRenderPass_::__l2::<lambda_2>_>
                (L"DLSS-G",param_1,local_27a4,(TIntRect<int> *)&local_2708._s_0,&local_2777,
                 &local_2778);
    }
    EVar21 = QueryStreamlineDeepDVCSupport();
    if ((EVar21 == Supported) && (DVar24 = SLDeepDVCModeFromCvar(), DVar24 != eOff)) {
      cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
      bVar14 = false;
      local_25f0 = 0;
      if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        local_273c = local_2770.ViewRect.field0_0x0._12_4_ - local_2770.ViewRect.field0_0x0._4_4_;
        local_2750[0] = local_2770.ViewRect.field0_0x0._8_4_ - local_2770.ViewRect.field0_0x0._0_4_;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_._0_4_ = 0x418;
          local_2208 = 0x54da26e0;
          uStack_2204 = 1;
          ::Desc._padding_._0_4_ = 0x54da26e0;
          ::Desc._padding_._4_4_ = uStack_220c;
          ::Desc._padding_ = (longlong)::s_C__Workspace_ProjectDS_Client_P;
          ::Desc._padding_._4_4_ = 1;
          ::Desc._padding_ = (longlong)u_Streamline_Deep;
          ::Desc._padding_ = (longlong)u_Streamline_Deep;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread'::__l102::<lambda_4>
                 ::operator()<int,int,int_const_&,int_const_&,int_const_&,int_const_&>'::__l3::
                 <lambda_1>::operator()<int,int,int_const_&,int_const_&,int_const_&,int_const_&>'::
                 __l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_2600.State = (FRDGScopeState *)param_1;
        pFVar27 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)pFVar27;
        uVar46 = (ulonglong)(pFVar27->Impl).Impl.TypeIndex;
        local_2600.Scope = pFVar27;
        if ((3 < uVar46) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar14)) {
          pcVar38 = (code *)swi(3);
          pFVar25 = (FScreenPassTexture *)(*pcVar38)();
          return pFVar25;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar46])(&pFVar27->Impl);
        pFVar28 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
        pTVar36 = FMemStackBase::Alloc(&pFVar28->Inner,0x68,8);
        pTVar36 = UE::RHI::Breadcrumbs::Private::
                  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>
                  ::
                  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_><int_&,int_&,int_const_&,int_const_&,int_const_&,int_const_&>
                            (pTVar36,pFVar28,&::Desc,local_2750,&local_273c,
                             (int *)&local_2770.ViewRect,
                             (int *)((longlong)&local_2770.ViewRect.field0_0x0 + 4),
                             (int *)((longlong)&local_2770.ViewRect.field0_0x0 + 8),
                             (int *)((longlong)&local_2770.ViewRect.field0_0x0 + 0xc));
        FRDGScope_RHI::FRDGScope_RHI
                  ((FRDGScope_RHI *)&pFVar27->Impl,(FRDGScopeState *)param_1,
                   (FRHIBreadcrumbNode *)pTVar36);
        (pFVar27->Impl).Impl.TypeIndex = '\x02';
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(pFVar27,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(pFVar27,(FRHIComputeCommandList *)param_1->_padding_);
        }
        bVar14 = true;
        local_25f0 = 1;
      }
      AddStreamlineStateRenderPass<_AddStreamlineDeepDVCStateRenderPass_::__l2::<lambda_1>,_AddStreamlineDeepDVCStateRenderPass_::__l2::<lambda_2>_>
                (L"DeepDVC",param_1,local_27a4,(TIntRect<int> *)&local_2708._s_0,local_2775,
                 &local_2776);
      if ((*(uint *)&((local_2770.Texture)->Desc).field_0x0 >> 0x11 & 1) == 0) {
        FRHITextureDesc::FRHITextureDesc(&local_1bf8,(FRHITextureDesc *)&(local_2770.Texture)->Desc)
        ;
        local_1bf8.Flags =
             local_1bf8.Flags & ~(Presentable|ResolveTargetable) | (UAV|ShaderResource);
        pFVar33 = FRDGBuilder::CreateTexture
                            (param_1,(FRDGTextureDesc *)&local_1bf8,
                             L"Streamline.SceneColorWithoutHUD.DeepDVC",None);
        local_2678 = param_2->FeatureLevel;
        iStack_2674 = param_2->StereoViewIndex;
        uStack_2670 = param_2->InstanceFactor;
        uStack_266c = CONCAT31(uStack_266c._1_3_,param_2->bHMDHiddenAreaMaskActive);
        local_24d8.StereoViewIndex = iStack_2674;
        local_24d8.FeatureLevel = local_2678;
        local_24d8._12_4_ = uStack_266c;
        local_24d8.InstanceCount = uStack_2670;
        AddDrawTexturePass(param_1,&local_24d8,local_2770.Texture,pFVar33,
                           UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue,
                           UE::Math::TIntPoint<int>::ZeroValue);
        if (local_1bf8.AliasableFormats.AllocatorInstance.SecondaryData !=
            (ForElementType<EPixelFormat>)0x0) {
          FMemory::Free((void *)local_1bf8.AliasableFormats.AllocatorInstance.SecondaryData);
        }
        AddStreamlineDeepDVCEvaluateRenderPass
                  (local_2758->StreamlineRHIExtensions,param_1,local_27a4,&local_2770.ViewRect,
                   pFVar33);
        local_2668 = param_2->FeatureLevel;
        iStack_2664 = param_2->StereoViewIndex;
        uStack_2660 = param_2->InstanceFactor;
        uStack_265c = CONCAT31(uStack_265c._1_3_,param_2->bHMDHiddenAreaMaskActive);
        local_2548.StereoViewIndex = iStack_2664;
        local_2548.FeatureLevel = local_2668;
        local_2548._12_4_ = uStack_265c;
        local_2548.InstanceCount = uStack_2660;
        AddDrawTexturePass(param_1,&local_2548,pFVar33,local_2770.Texture,
                           UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue,
                           UE::Math::TIntPoint<int>::ZeroValue);
      }
      else {
        AddStreamlineDeepDVCEvaluateRenderPass
                  (local_2758->StreamlineRHIExtensions,param_1,local_27a4,&local_2770.ViewRect,
                   local_2770.Texture);
      }
      if (bVar14) {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2600);
      }
    }
    bVar14 = ForceTagStreamlineBuffers();
    if (((bVar14) ||
        ((EVar21 = QueryStreamlineDLSSGSupport(), EVar21 == Supported &&
         (DVar22 = SLDLSSGModeFromCvar(), DVar22 != eOff)))) &&
       (bVar14 = TAutoConsoleVariable<bool>::GetValueOnRenderThread(&CVarStreamlineClearColorAlpha),
       bVar14)) {
      pFVar37 = FRDGAllocator::Alloc<FRenderTargetParameters>((FRDGAllocator *)&param_1->_padding_);
      local_26b8.ResolveTexture = (FRDGTexture *)0x0;
      local_26b8.Texture = local_2770.Texture;
      local_26b8.LoadAction = ENoAction;
      local_26b8.MipIndex = '\0';
      local_26b8.ArraySlice = -1;
      bVar14 = FRenderTargetBinding::Validate(&local_26b8);
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Validate()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x216,L""), bVar14)) {
        pcVar38 = (code *)swi(3);
        pFVar25 = (FScreenPassTexture *)(*pcVar38)();
        return pFVar25;
      }
      local_25e8._s_0.Min.field0_0x0 = local_2708._s_0.Min.field0_0x0;
      (pFVar37->RenderTargets).Output.Elements[0].Texture = local_26b8.Texture;
      (pFVar37->RenderTargets).Output.Elements[0].ResolveTexture = local_26b8.ResolveTexture;
      local_25e8._s_0.Max.field0_0x0 = local_2708._s_0.Max.field0_0x0;
      (pFVar37->RenderTargets).Output.Elements[0].LoadAction = local_26b8.LoadAction;
      (pFVar37->RenderTargets).Output.Elements[0].MipIndex = local_26b8.MipIndex;
      (pFVar37->RenderTargets).Output.Elements[0].ArraySlice = local_26b8.ArraySlice;
      *(undefined4 *)&(pFVar37->RenderTargets).Output.Elements[0].field_0x14 = local_26b8._20_4_;
      pFVar35 = FRDGEventName::FRDGEventName(local_21e0,1,L"ClearSceneColorAlpha");
      FRDGBuilder::
      AddPass<FRenderTargetParameters,_FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread_::__l111::<lambda_5>_>
                (param_1,pFVar35,pFVar37,Raster,(<lambda_5> *)&local_25e8._s_0);
      if (local_21e0[0].FormattedEventName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_21e0[0].FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
    pFVar25 = local_2730;
    lVar47 = (param_3->OverrideOutput)._padding_;
    if ((lVar47 == 0) ||
       (((int)(param_3->OverrideOutput)._padding_ == (int)(param_3->OverrideOutput)._padding_ &&
        (*(int *)((longlong)&(param_3->OverrideOutput)._padding_ + 4) ==
         *(int *)((longlong)&(param_3->OverrideOutput)._padding_ + 4))))) {
      pTVar44 = &param_3->UserSceneTextures;
      local_2420.Texture = (FRDGTexture *)0x0;
      local_2420.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      local_2420.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      if ((param_3->bUserSceneTexturesSet).Elements[0] == false) {
        pTVar44 = &param_3->Textures;
      }
      local_25c8.TextureSRV = pTVar44->Elements[0].TextureSRV;
      local_25c8.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
           (TIntPoint<int>)pTVar44->Elements[0].ViewRect.field0_0x0._s_0.Min.field0_0x0;
      local_25c8.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
           (TIntPoint<int>)pTVar44->Elements[0].ViewRect.field0_0x0._s_0.Max.field0_0x0;
      FScreenPassTexture::CopyFromSlice(local_2730,param_1,&local_25c8,&local_2420);
    }
    else {
      local_2580._padding_ = (param_3->OverrideOutput)._padding_;
      local_2580._padding_ = (param_3->OverrideOutput)._padding_;
      local_2580.LoadAction = (param_3->OverrideOutput).LoadAction;
      local_2658 = param_2->FeatureLevel;
      iStack_2654 = param_2->StereoViewIndex;
      uStack_2650 = param_2->InstanceFactor;
      uStack_264c = CONCAT31(uStack_264c._1_3_,param_2->bHMDHiddenAreaMaskActive);
      local_2438.Texture = local_2770.Texture;
      local_2538[0].StereoViewIndex = iStack_2654;
      local_2538[0].FeatureLevel = local_2658;
      local_2538[0]._12_4_ = uStack_264c;
      local_2538[0].InstanceCount = uStack_2650;
      local_2580._padding_ = lVar47;
      AddDrawTexturePass(param_1,local_2538,&local_2438,&local_2580,1);
      local_2730->Texture = (FRDGTexture *)(param_3->OverrideOutput)._padding_;
      (local_2730->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
           (TIntPoint<int>_u_0)(param_3->OverrideOutput)._padding_;
      (local_2730->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
           (TIntPoint<int>_u_0)(param_3->OverrideOutput)._padding_;
      pFVar25 = local_2730;
    }
    if (local_26d0 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_26e0);
    }
  }
  else {
LAB_14de7f610:
    if (bLogStreamlineLogTrackedViews != false) {
      uVar20 = FSceneView::GetViewKey(param_2);
      pFVar40 = (pFVar11->FramesWhereStreamlineConstantsWereSet).AllocatorInstance.Data;
      pFVar39 = pFVar40 + (longlong)(pFVar11->FramesWhereStreamlineConstantsWereSet).ArrayNum * 0x10
      ;
      for (; pFVar40 != pFVar39; pFVar40 = pFVar40 + 0x10) {
        if ((*(ulong64 *)pFVar40 == GFrameCounterRenderThread) && (*(uint *)(pFVar40 + 8) == uVar20)
           ) {
          CurrentThreadName(&local_24e8);
          FSceneView::GetViewKey(param_2);
          local_1a88._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1a88,"FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread",0x3b,
                     Yes);
          ::FString::PrintfImpl
                    (&local_2610,
                     L"%s return FramesWhereStreamlineConstantsWereSet.Contains(GFrameCounterRenderThread) Key=%u, %s"
                    );
          FVar41.Data = (FScriptContainerElement *)L"";
          if (local_2610.Data.ArrayNum != 0) {
            FVar41.Data = local_2610.Data.AllocatorInstance.Data;
          }
          LogTrackedViews((wchar_t *)FVar41.Data);
          if (local_2610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2610.Data.AllocatorInstance.Data);
          }
          if ((void *)local_1a88._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_1a88._padding_);
          }
          if (local_24e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_24e8.Data.AllocatorInstance.Data);
          }
          break;
        }
      }
      local_1968._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1968,"FStreamlineViewExtension::PostProcessPassAtEnd_RenderThread",0x3b,Yes)
      ;
      LogViewNotTrackedReason(local_1968.Ptr,param_2);
      if ((void *)local_1968._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1968._padding_);
      }
    }
    FPostProcessMaterialInputs::ReturnUntouchedSceneColorForPostProcessing
              (param_3,local_2730,param_1);
    pFVar25 = local_2730;
  }
  return pFVar25;
}

// PostRenderViewFamily_RenderThread @ 14de7fa80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::PostRenderViewFamily_RenderThread
          (FStreamlineViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  return;
}

// PostRenderView_RenderThread @ 14de7fb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::PostRenderView_RenderThread
          (FStreamlineViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  
  pTVar2 = CVarStreamlineReflexActorDebug.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pTVar2->ShadowedValue[1] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&RenderThreadDebugMessagesCS);
    DestructItems<FString,int>
              ((FString *)RenderThreadDebugMessages.AllocatorInstance.Data,
               RenderThreadDebugMessages.ArrayNum);
    RenderThreadDebugMessages.ArrayNum = 0;
    if (RenderThreadDebugMessages.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&RenderThreadDebugMessages.AllocatorInstance,0,
                 &RenderThreadDebugMessages.ArrayMax);
    }
    DumpActor(L"PostRenderView",(param_2->ViewActor).Actor);
    LeaveCriticalSection((LPCRITICAL_SECTION)&RenderThreadDebugMessagesCS);
  }
  return;
}

// PreRenderViewFamily_RenderThread @ 14de803b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::PreRenderViewFamily_RenderThread
          (FStreamlineViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  FScriptContainerElement *pFVar1;
  FRHICommandList *this_00;
  undefined4 uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  <lambda_2> local_res8;
  undefined1 local_58 [24];
  longlong local_40;
  <lambda_1> local_38;
  
  pwVar4 = FCommandLine::Get();
  FParse::Param(pwVar4,L"slrdgworkaround");
  pwVar4 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar4,L"slnordgworkaround");
  if ((!bVar3) && (param_2->RenderTarget != (FRenderTarget *)0x0)) {
    plVar5 = (longlong *)(**(code **)(param_2->RenderTarget->_padding_ + 0x10))();
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      puVar6 = (ulonglong *)(**(code **)(*(longlong *)*plVar5 + 0x20))();
      *puVar6 = *puVar6 | 8;
    }
  }
  FStreamlineCameraManager::PreRenderViewFamily_RenderThread
            (&this->StreamlineCameraManager,param_2,GFrameCounterRenderThread);
  local_38.StaleViews = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_58;
  local_38.ActiveViews = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(local_58 + 0x10);
  local_58._0_8_ = (FScriptContainerElement *)0x0;
  local_58._8_8_ = 0;
  local_58._16_8_ = (void *)0x0;
  local_40 = 0;
  TArray<TTuple<unsigned___int64,unsigned_int>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_FStreamlineViewExtension::PreRenderViewFamily_RenderThread_::__l2::<lambda_1>_>
            (&this->FramesWhereStreamlineConstantsWereSet,&local_38,Default);
  local_res8.ActiveViews = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(local_58 + 0x10);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_FStreamlineViewExtension::PreRenderViewFamily_RenderThread_::__l2::<lambda_2>_>
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)local_58,&local_res8,Default);
  uVar2 = local_58._8_4_;
  uVar8 = (ulonglong)(int)local_58._8_4_;
  pFVar1 = (FScriptContainerElement *)(local_58._0_8_ + uVar8 * 4);
  pFVar9 = (FScriptContainerElement *)local_58._0_8_;
  while( true ) {
    if ((int)uVar8 != uVar2) {
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar9 == pFVar1) break;
    this_00 = (FRHICommandList *)param_1->_padding_;
    local_38.ActiveViews =
         (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
         CONCAT44(local_38.ActiveViews._4_4_,*(undefined4 *)pFVar9);
    local_38.StaleViews = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)this;
    if (((GRHICommandList.bLatchedBypass == false) || ((this_00->field_0x29b & 0x20) == 0)) &&
       (this_00->field_0x64 == '\0')) {
      puVar7 = FMemStackBase::Alloc((FMemStackBase *)this_00,0x28,8);
      *(int *)&this_00->field_0x60 = *(int *)&this_00->field_0x60 + 1;
      pFVar9 = pFVar9 + 4;
      **(undefined8 **)&this_00->field_0x30 = puVar7;
      *(undefined8 **)&this_00->field_0x30 = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &TRHILambdaCommand<FRHICommandListImmediate,`FStreamlineViewExtension::PreRenderViewFamily_RenderThread'::`21'::<lambda_3>_>
                 ::_vftable_;
      puVar7[4] = L"TRHILambdaCommand";
      puVar7[2] = local_38.StaleViews;
      puVar7[3] = local_38.ActiveViews;
      uVar8 = local_58._8_8_ & 0xffffffff;
    }
    else {
      `FStreamlineViewExtension::PreRenderViewFamily_RenderThread'::__l21::<lambda_3>::operator()
                (&local_38,this_00);
      uVar8 = local_58._8_8_ & 0xffffffff;
      pFVar9 = pFVar9 + 4;
    }
  }
  if ((void *)local_58._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._16_8_);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  return;
}

// PreRenderView_RenderThread @ 14de807e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::PreRenderView_RenderThread
          (FStreamlineViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  double dVar1;
  code *pcVar2;
  TMatrix<double> *pTVar3;
  ulong64 uVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  TRotator<double> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_f8 [32];
  TRotator<double> local_c8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  uVar4 = GFrameCounterRenderThread;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflexCamera.cpp"
                         ,0x1bf,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar6 = ForceTagStreamlineBuffers();
  pTVar5 = CVarStreamlineReflexPredictiveRendering.Ref;
  if (((bVar6) && (param_2->bCameraCut == false)) && (uVar4 != 0)) {
    bVar6 = IsInParallelRenderingThread();
    if ((!bVar6) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pTVar5->ShadowedValue[1] != false) &&
       (uVar8 = uVar4 % 3, (this->StreamlineCameraManager).UpdateStates[uVar8].FrameID == uVar4)) {
      FSceneView::UpdateProjectionMatrix
                (param_2,&(this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedViewToClip);
      dVar1 = (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[3][2];
      pTVar3 = &(this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView;
      uVar12 = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar13 = (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      uVar9 = *(uint *)((longlong)pTVar3->M[3] + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
      uVar10 = *(uint *)(pTVar3->M[3] + 1) ^ _UNK_15066df78;
      uVar11 = *(uint *)((longlong)pTVar3->M[3] + 0xc) ^ _UNK_15066df7c;
      *(uint *)&(param_2->ViewLocation).field0_0x0 =
           *(uint *)pTVar3->M[3] ^ (uint)__xmm_80000000000000008000000000000000;
      *(uint *)((longlong)&(param_2->ViewLocation).field0_0x0 + 4) = uVar9;
      *(uint *)((longlong)&(param_2->ViewLocation).field0_0x0 + 8) = uVar10;
      *(uint *)((longlong)&(param_2->ViewLocation).field0_0x0 + 0xc) = uVar11;
      (param_2->ViewLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar13,uVar12);
      local_a8.M[0][0] =
           (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[0][2];
      local_a8.M[0][1] =
           (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[1][2];
      local_a8.M[0][2] =
           (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[2][2];
      local_a8.M[1][0] =
           (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[0][0];
      local_a8.M[1][1] =
           (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[1][0];
      local_a8.M[1][2] =
           (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[2][0];
      local_a8.M[2][0] =
           (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[0][1];
      local_a8.M[2][1] =
           (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[1][1];
      local_a8.M[2][2] =
           (this->StreamlineCameraManager).UpdateStates[uVar8].UpdatedWorldToView.M[2][1];
      local_a8.M[3][0] = 0.0;
      local_a8.M[3][1] = 0.0;
      local_a8.M[0][3] = 0.0;
      local_a8.M[1][3] = 0.0;
      local_a8.M[2][3] = 0.0;
      local_a8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
      local_a8.M[3][3] = _UNK_15061cbc8;
      pTVar7 = UE::Math::TMatrix<double>::Rotator(&local_a8,&local_c8);
      dVar1 = pTVar7->Yaw;
      (param_2->ViewRotation).Pitch = pTVar7->Pitch;
      (param_2->ViewRotation).Yaw = dVar1;
      (param_2->ViewRotation).Roll = pTVar7->Roll;
      FSceneView::UpdateViewMatrix(param_2);
    }
  }
  return;
}

// SetupView @ 14de83be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::SetupView
          (FStreamlineViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  FStreamlineCameraManager::SetCameraData(&this->StreamlineCameraManager,param_2,GFrameCounter);
  return;
}

// SetupViewFamily @ 14de83c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::SetupViewFamily(FStreamlineViewExtension *this,FSceneViewFamily *param_1)

{
  return;
}

// SetupViewPoint @ 14de83c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::SetupViewPoint
          (FStreamlineViewExtension *this,APlayerController *param_1,FMinimalViewInfo *param_2)

{
  FStreamlineCameraManager::LateUpdate_GameThread
            (&this->StreamlineCameraManager,param_1,GFrameCounter);
  return;
}

// SubscribeToPostProcessingPass @ 14de83c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::SubscribeToPostProcessingPass
          (FStreamlineViewExtension *this,EPostProcessingPass param_1,FSceneView *param_2,
          TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3,bool param_4)

{
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  code *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (param_1 == VisualizeDepthOfField) {
    if (this->StreamlineRHIExtensions == (FStreamlineRHI *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamlineRHIExtensions",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                         ,0x288,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar3 = FStreamlineRHI::IsStreamlineAvailable(this->StreamlineRHIExtensions);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StreamlineRHIExtensions->IsStreamlineAvailable()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                         ,0x289,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_68 = PostProcessPassAtEnd_RenderThread;
    uStack_60 = 0;
    local_88 = (undefined1  [8])0x0;
    local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_80.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_80;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      puVar5[4] = local_68;
      puVar5[5] = CONCAT44(uStack_5c,uStack_60);
      *puVar5 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFStreamlineViewExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[3] = this;
      if (puVar5[4] == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    pTVar1 = (param_3->AllocatorInstance).Data;
    if ((pTVar1 <= (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                    *)local_88) &&
       ((TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
         *)local_88 < pTVar1 + param_3->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_3->ArrayNum;
    if (iVar4 == param_3->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>_>
                        (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar4 + 1;
    pTVar1 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pTVar1 + iVar4) = 0;
    *(undefined8 *)&pTVar1[iVar4].field_0x8 = 0;
    *(undefined4 *)&pTVar1[iVar4].field_0x10 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
               (FWriteAccessScope *)&local_58);
    if (*(void **)&pTVar1[iVar4].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar1[iVar4].field_0x8);
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar1[iVar4].field_0x8 = local_80.DelegateAllocator;
    local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)&pTVar1[iVar4].field_0x10 = local_80.DelegateSize;
    local_80.DelegateSize = 0;
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
               (FWriteAccessScope *)&local_40);
    if ((local_80.DelegateSize != 0) &&
       (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_80,0,0,0x10);
      local_80.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_80.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_88);
  }
  return;
}

// UntrackViewsForBackbuffer @ 14de84cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineViewExtension::UntrackViewsForBackbuffer(FStreamlineViewExtension *this,void *param_1)

{
  FScriptContainerElement *_Dst;
  FRHIResource *this_00;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_res10;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineViewExtension.cpp"
                         ,0x1c0,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 != (void *)0x0) &&
     (this_00 = *(FRHIResource **)param_1, this_00 != (FRHIResource *)0x0)) {
    FRHIResource::AddRef(this_00);
    local_res10 = (**(code **)(this_00->_padding_ + 0x18))(this_00);
    bVar3 = false;
    uVar7 = 0;
    if (0 < TrackedViews.ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < TrackedViews.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        bVar4 = `FStreamlineViewExtension::UntrackViewsForBackbuffer'::__l15::<lambda_1>::operator()
                          (&local_res10,
                           (FTrackedView *)(TrackedViews.AllocatorInstance.Data + lVar8));
        if (bVar4) {
          bVar3 = true;
          uVar5 = 0;
          if ((int)uVar7 < TrackedViews.ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar2.Data = TrackedViews.AllocatorInstance.Data;
          _Dst = TrackedViews.AllocatorInstance.Data + lVar8;
          if (*(FRHIResource **)(TrackedViews.AllocatorInstance.Data + lVar8 + 0x30) !=
              (FRHIResource *)0x0) {
            FRHIResource::Release
                      (*(FRHIResource **)(TrackedViews.AllocatorInstance.Data + lVar8 + 0x30));
          }
          iVar6 = (TrackedViews.ArrayNum - uVar7) + -1;
          if (1 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            memmove(_Dst,FVar2.Data + (longlong)(TrackedViews.ArrayNum - iVar6) * 0x40,
                    (longlong)iVar6 << 6);
          }
          TrackedViews.ArrayNum = TrackedViews.ArrayNum + -1;
        }
        else {
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x40;
        }
      } while ((int)uVar7 < TrackedViews.ArrayNum);
      if (bVar3) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&TrackedViews.AllocatorInstance,TrackedViews.ArrayNum,
                   &TrackedViews.ArrayMax);
      }
    }
    FRHIResource::Release(this_00);
  }
  return;
}


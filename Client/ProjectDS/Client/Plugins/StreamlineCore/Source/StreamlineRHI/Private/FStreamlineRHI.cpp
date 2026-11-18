// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineRHI
// Functions: 21

// FStreamlineRHI @ 14de599f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FStreamlineRHI * __thiscall
FStreamlineRHI::FStreamlineRHI(FStreamlineRHI *this,FStreamlineRHICreateArguments *param_1)

{
  FSLFrameTokenProvider *lpCriticalSection;
  FSLFrameTokenProvider *pFVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7FStreamlineRHI__6B_;
  pFVar1 = (FSLFrameTokenProvider *)0x0;
  this->NumActiveSwapchainProxies = 0;
  this->DynamicRHI = param_1->DynamicRHI;
  lpCriticalSection = ::operator_new(0x38);
  if (lpCriticalSection != (FSLFrameTokenProvider *)0x0) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
    lpCriticalSection->LastFrameCounter = (uint)GFrameCounter;
    SLgetNewFrameToken(&lpCriticalSection->FrameToken,&lpCriticalSection->LastFrameCounter);
    pFVar1 = lpCriticalSection;
  }
  (this->FrameTokenProvider).Ptr = pFVar1;
  this->bIsSwapchainProviderInstalled = false;
  (this->LoadedFeatures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LoadedFeatures).ArrayNum = 0;
  (this->LoadedFeatures).ArrayMax = 0;
  (this->SupportedFeatures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedFeatures).ArrayNum = 0;
  (this->SupportedFeatures).ArrayMax = 0;
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FStreamlineRHI::FStreamlineRHI",0x1e,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FStreamlineRHI::FStreamlineRHI",0x1e,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return this;
}

// ~FStreamlineRHI @ 14de59d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineRHI::~FStreamlineRHI(FStreamlineRHI *this)

{
  FScriptContainerElement *pFVar1;
  FSLFrameTokenProvider *lpCriticalSection;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7FStreamlineRHI__6B_;
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FStreamlineRHI::~FStreamlineRHI",0x1f,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FStreamlineRHI::~FStreamlineRHI",0x1f,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  pFVar1 = (this->SupportedFeatures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoadedFeatures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lpCriticalSection = (this->FrameTokenProvider).Ptr;
  if (lpCriticalSection != (FSLFrameTokenProvider *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x38);
  }
  return;
}

// operator() @ 14de5a420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FStreamlineRHI::PostPlatformRHICreateInit'::__l2::<lambda_4>::operator()(void *this,uint param_1)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  undefined1 uVar4;
  char *_Str;
  size_t sVar5;
  undefined1 auStack_2a8 [32];
  wchar_t *local_288;
  uint local_280;
  bool local_278 [8];
  FString local_270;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_278[0] = false;
  bVar3 = IsStreamlineSupported();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x10c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x10d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((Ptr_isFeatureLoaded == (_func___cdecl_Result_uint_bool_ptr *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr_isFeatureLoaded != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x10e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    _Str = sl::getFeatureAsStr(param_1);
    local_258._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_258.Ptr = (wchar_t *)0x0;
      local_258.StringLength = 0;
    }
    else {
      sVar5 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_258,_Str,(int)sVar5,Yes);
    }
    pwVar2 = local_258.Ptr;
    CurrentThreadName(&local_270);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"SLisFeatureLoaded",0x11,Yes);
    local_288 = pwVar2;
    local_280 = param_1;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
  }
  (*Ptr_isFeatureLoaded)(param_1,local_278);
  return local_278[0];
}

// GetFrameToken @ 14de5ab20

FrameToken * __thiscall FStreamlineRHI::GetFrameToken(FStreamlineRHI *this,ulong64 param_1)

{
  FSLFrameTokenProvider *lpCriticalSection;
  FrameToken *pFVar1;
  
  lpCriticalSection = (this->FrameTokenProvider).Ptr;
  if (lpCriticalSection == (FSLFrameTokenProvider *)0x0) {
    return (FrameToken *)0x0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((uint)param_1 != lpCriticalSection->LastFrameCounter) {
    lpCriticalSection->LastFrameCounter = (uint)param_1;
    SLgetNewFrameToken(&lpCriticalSection->FrameToken,&lpCriticalSection->LastFrameCounter);
  }
  pFVar1 = lpCriticalSection->FrameToken;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar1;
}

// GetMaxNumSwapchainProxies @ 14de5ab90

int __thiscall FStreamlineRHI::GetMaxNumSwapchainProxies(FStreamlineRHI *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  int iVar4;
  
  pTVar2 = CVarStreamlineMaxNumSwapchainProxies.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
  }
  iVar4 = pTVar2->ShadowedValue[0];
  if (iVar4 == -1) {
    iVar4 = 1;
  }
  return iVar4;
}

// IsDLSSGSupportedByRHI @ 14de5cd60

bool __thiscall FStreamlineRHI::IsDLSSGSupportedByRHI(FStreamlineRHI *this)

{
  return false;
}

// IsDXGIStatus @ 14de5cd70

bool __thiscall FStreamlineRHI::IsDXGIStatus(FStreamlineRHI *this,undefined4 param_1)

{
  switch(param_1) {
  case 0x87a0001:
  case 0x87a0002:
  case 0x87a0004:
  case 0x87a0005:
  case 0x87a0006:
  case 0x87a0007:
  case 0x87a0008:
    return true;
  default:
    return false;
  }
}

// IsDeepDVCSupportedByRHI @ 14de5cdc0

bool __thiscall FStreamlineRHI::IsDeepDVCSupportedByRHI(FStreamlineRHI *this)

{
  return false;
}

// IsLatewarpSupportedByRHI @ 14de5cdd0

bool __thiscall FStreamlineRHI::IsLatewarpSupportedByRHI(FStreamlineRHI *this)

{
  return false;
}

// IsReflexSupportedByRHI @ 14de5cde0

bool __thiscall FStreamlineRHI::IsReflexSupportedByRHI(FStreamlineRHI *this)

{
  return false;
}

// IsStreamlineAvailable @ 14de5cdf0

bool __thiscall FStreamlineRHI::IsStreamlineAvailable(FStreamlineRHI *this)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) &&
     (((PRIVATE_GIsRunningCommandlet == false && (bIsStreamlineInitialized != false)) &&
      (bIsStreamlineFunctionPointersLoaded != false)))) {
    return true;
  }
  return false;
}

// IsSwapChainProviderRequired @ 14de5ceb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de5d257) */

TTuple<bool,FString> * __thiscall
FStreamlineRHI::IsSwapChainProviderRequired
          (FStreamlineRHI *this,TTuple<bool,FString> *__return_storage_ptr__,AdapterInfo *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  AdapterInfo *pAVar5;
  bool bVar6;
  Result RVar7;
  int iVar8;
  char *pcVar9;
  size_t sVar10;
  TTuple<bool,FString> *pTVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  int *piVar15;
  ForAnyElementType FVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  undefined1 auStackY_428 [32];
  undefined1 local_3d8 [8];
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0 [8];
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  ForAnyElementType local_378;
  uint local_370;
  int local_36c;
  Result local_368 [2];
  undefined1 local_360;
  FString local_358;
  undefined1 local_348;
  FString local_340;
  AdapterInfo *local_330;
  TTuple<bool,FString> *local_328;
  undefined8 local_318 [3];
  undefined8 local_300 [2];
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  uint local_2e8;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  int local_2a0 [2];
  int *local_298;
  undefined4 local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_428;
  *(undefined1 *)__return_storage_ptr__ = 0;
  local_330 = param_1;
  local_328 = __return_storage_ptr__;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x8,L"");
  local_2f0 = 9999;
  uStack_2ec = 1000;
  local_2e8 = 6;
  local_378.Data = (FScriptContainerElement *)0x0;
  local_370 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_378,3,&local_36c);
  pAVar5 = local_330;
  uVar4 = local_370;
  *(ulonglong *)local_378.Data = CONCAT44(uStack_2ec,local_2f0);
  *(uint *)(local_378.Data + 8) = local_2e8;
  uVar13 = (ulonglong)(int)local_370;
  local_3d0.Data = (FScriptContainerElement *)0x0;
  local_3c8 = 0;
  local_2d8 = 0;
  pFVar18 = local_378.Data + uVar13 * 4;
  local_2d0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 0x80;
  local_2a8 = 0xffffffff;
  local_2a4 = 0;
  local_298 = (int *)0x0;
  local_290 = 0;
  FVar19.Data = local_378.Data;
  while( true ) {
    iVar17 = 0;
    if ((uint)uVar13 != uVar4) {
      local_3d8[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3d8);
    }
    pTVar11 = local_328;
    if (FVar19.Data == pFVar18) break;
    uVar2 = *(uint *)FVar19.Data;
    RVar7 = SLisFeatureSupported(uVar2,pAVar5);
    local_368[0] = RVar7;
    TSet<enum_sl::Result,DefaultKeyFuncs<enum_sl::Result,0>,FDefaultSetAllocator>::
    Emplace<enum_sl::Result_const_&>(&local_2d8,(Result *)&local_330,(bool *)local_368);
    if ((RVar7 != eOk) && ((int)local_3c8 != 0)) {
      iVar17 = (int)local_3c8 + -1;
    }
    pcVar9 = sl::getResultAsStr(RVar7);
    local_288._padding_ = 0;
    if (pcVar9 == (char *)0x0) {
      local_288.Ptr = (wchar_t *)0x0;
      local_288.StringLength = 0;
    }
    else {
      sVar10 = strlen(pcVar9);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,pcVar9,(int)sVar10,Yes);
    }
    if (uVar2 < 0x3e9) {
      if (uVar2 == 1000) {
        pcVar9 = "kFeatureDLSS_G";
      }
      else {
        switch(uVar2) {
        case 0:
          pcVar9 = "kFeatureDLSS";
          break;
        default:
switchD_14de5d076_caseD_1:
          pcVar9 = "Unknown";
          break;
        case 2:
          pcVar9 = "kFeatureNIS";
          break;
        case 3:
          pcVar9 = "kFeatureReflex";
          break;
        case 4:
          pcVar9 = "kFeaturePCL";
          break;
        case 5:
          pcVar9 = "kFeatureDeepDVC";
          break;
        case 6:
          pcVar9 = "kFeatureLatewarp";
        }
      }
    }
    else if (uVar2 == 0x3e9) {
      pcVar9 = "kFeatureDLSS_RR";
    }
    else if (uVar2 == 0x3ea) {
      pcVar9 = "kFeatureNvPerf";
    }
    else if (uVar2 == 0x3eb) {
      pcVar9 = "kFeatureDirectSR";
    }
    else if (uVar2 == 9999) {
      pcVar9 = "kFeatureImGUI";
    }
    else {
      if (uVar2 != 0xffffffff) goto switchD_14de5d076_caseD_1;
      pcVar9 = "kFeatureCommon";
    }
    local_168._padding_ = 0;
    sVar10 = strlen(pcVar9);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,pcVar9,(int)sVar10,Yes);
    ::FString::PrintfImpl(&local_3b8,L"(%s, %s)");
    if (((local_3d0.Data <= (FScriptContainerElement *)&local_3b8) &&
        ((FScriptContainerElement *)&local_3b8 < local_3d0.Data + (longlong)local_3c8._4_4_ * 0x10))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TTuple<bool,FString> *)(*pcVar3)();
      return pTVar11;
    }
    iVar8 = (int)local_3c8;
    if ((int)local_3c8 == local_3c8._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_3d0,(int *)((longlong)&local_3c8 + 4));
    }
    local_3c8 = CONCAT44(local_3c8._4_4_,iVar8 + 1);
    memmove(local_3d0.Data + (longlong)iVar17 * 0x10 + 0x10,local_3d0.Data + (longlong)iVar17 * 0x10
            ,(longlong)(iVar8 - iVar17) << 4);
    pFVar14 = local_3d0.Data + (longlong)iVar17 * 0x10;
    *(undefined8 *)pFVar14 = 0;
    *(FScriptContainerElement **)pFVar14 = local_3b8.Data.AllocatorInstance.Data;
    *(int *)(pFVar14 + 8) = local_3b8.Data.ArrayNum;
    *(int *)(pFVar14 + 0xc) = local_3b8.Data.ArrayMax;
    local_3b8.Data.ArrayNum = 0;
    local_3b8.Data.ArrayMax = 0;
    local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
    uVar13 = (ulonglong)local_370;
    FVar19.Data = FVar19.Data + 4;
  }
  iVar17 = (int)local_3c8;
  bVar6 = true;
  local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar18 = local_3d0.Data + (longlong)(int)local_3c8 * 0x10;
  local_3a8.Data.ArrayNum = 0;
  local_3a8.Data.ArrayMax = 0;
  puVar1 = &local_328->field_0x8;
  FVar19.Data = local_3d0.Data;
  while( true ) {
    if ((int)local_3c8 != iVar17) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_3c0);
    }
    if (FVar19.Data == pFVar18) break;
    if (bVar6) {
      bVar6 = false;
    }
    else {
      ::FString::AppendChars(&local_3a8,L",",1);
    }
    iVar8 = *(int *)(FVar19.Data + 8) + -1;
    if (*(int *)(FVar19.Data + 8) == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_3a8,*(wchar_t **)FVar19.Data,iVar8);
    FVar19.Data = FVar19.Data + 0x10;
  }
  if ((int)local_2d0 != local_2a4) {
    piVar15 = local_2a0;
    if (local_298 != (int *)0x0) {
      piVar15 = local_298;
    }
    for (iVar17 = *piVar15; iVar17 != -1; iVar17 = *(int *)(local_2d8 + 4 + (longlong)iVar17 * 0xc))
    {
      if (*(int *)(local_2d8 + (longlong)iVar17 * 0xc) == 0) {
        ::FString::PrintfImpl
                  (&local_398,
                   L"a supported feature needing a swap chain provider: %s. This can be overriden with -sl{no}swapchainprovider"
                  );
        FVar19.Data = local_398.Data.AllocatorInstance.Data;
        iVar17 = local_398.Data.ArrayNum;
        iVar8 = local_398.Data.ArrayMax;
        FVar16.Data = (FScriptContainerElement *)0x0;
        local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_398.Data.ArrayNum = 0;
        local_398.Data.ArrayMax = 0;
        *(undefined1 *)pTVar11 = 1;
        if ((undefined8 *)puVar1 == local_318) {
          if (FVar19.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar19.Data);
            FVar16.Data = local_398.Data.AllocatorInstance.Data;
          }
        }
        else {
          if (*(void **)puVar1 != (void *)0x0) {
            FMemory::Free(*(void **)puVar1);
          }
          *(FScriptContainerElement **)puVar1 = FVar19.Data;
          *(int *)&pTVar11->field_0x10 = iVar17;
          *(int *)&pTVar11->field_0x14 = iVar8;
          FVar16.Data = local_398.Data.AllocatorInstance.Data;
        }
        goto LAB_14de5d455;
      }
    }
  }
  ::FString::PrintfImpl
            (&local_388,
             L"no supported feature needing a swap chain provider: %s. This can be overriden with -sl{no}swapchainprovider"
            );
  FVar19.Data = local_388.Data.AllocatorInstance.Data;
  iVar17 = local_388.Data.ArrayNum;
  iVar8 = local_388.Data.ArrayMax;
  local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined1 *)pTVar11 = 0;
  local_388.Data.ArrayNum = 0;
  local_388.Data.ArrayMax = 0;
  if ((undefined8 *)puVar1 == local_300) {
    FVar16.Data = (FScriptContainerElement *)0x0;
    if (FVar19.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar19.Data);
      FVar16.Data = local_388.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = FVar19.Data;
    *(int *)&pTVar11->field_0x10 = iVar17;
    *(int *)&pTVar11->field_0x14 = iVar8;
    FVar16.Data = local_388.Data.AllocatorInstance.Data;
  }
LAB_14de5d455:
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  pwVar12 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar12,L"slswapchainprovider");
  if (bVar6) {
    local_360 = 1;
    ::FString::FString(&local_358,L"-slswapchainprovider command line");
    *(undefined1 *)pTVar11 = local_360;
    FVar19.Data = local_358.Data.AllocatorInstance.Data;
    if ((FString *)puVar1 != &local_358) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_358.Data.AllocatorInstance.Data;
      *(int *)&pTVar11->field_0x10 = local_358.Data.ArrayNum;
      *(int *)&pTVar11->field_0x14 = local_358.Data.ArrayMax;
      local_358.Data.ArrayNum = 0;
      local_358.Data.ArrayMax = 0;
      local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar19.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    pwVar12 = FCommandLine::Get();
    bVar6 = FParse::Param(pwVar12,L"slnoswapchainprovider");
    if (!bVar6) goto LAB_14de5d553;
    local_348 = 0;
    ::FString::FString(&local_340,L"-slnoswapchainprovider command line");
    *(undefined1 *)pTVar11 = local_348;
    FVar19.Data = local_340.Data.AllocatorInstance.Data;
    if ((FString *)puVar1 != &local_340) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_340.Data.AllocatorInstance.Data;
      *(int *)&pTVar11->field_0x10 = local_340.Data.ArrayNum;
      *(int *)&pTVar11->field_0x14 = local_340.Data.ArrayMax;
      local_340.Data.ArrayNum = 0;
      local_340.Data.ArrayMax = 0;
      local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar19.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar19.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar19.Data);
  }
LAB_14de5d553:
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  local_290 = 0;
  if (local_298 != (int *)0x0) {
    FMemory::Free(local_298);
  }
  TSparseArray<TSparseSetElement<enum_sl::Result>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_sl::Result>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2d8);
  DestructItems<FString,int>((FString *)local_3d0.Data,(int)local_3c8);
  if (local_3d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data);
  }
  if (local_378.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data);
  }
  return pTVar11;
}

// IsSwapchainHookingAllowed @ 14de5d600

bool __thiscall FStreamlineRHI::IsSwapchainHookingAllowed(FStreamlineRHI *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x38))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x48))(this);
    if (cVar1 == '\0') {
      return false;
    }
  }
  iVar2 = GetMaxNumSwapchainProxies(this);
  if (iVar2 != 0) {
    return this->NumActiveSwapchainProxies < iVar2;
  }
  return true;
}

// IsSwapchainProviderInstalled @ 14de5d650

bool __thiscall FStreamlineRHI::IsSwapchainProviderInstalled(FStreamlineRHI *this)

{
  return this->bIsSwapchainProviderInstalled;
}

// OnSwapchainCreated @ 14de5f2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineRHI::OnSwapchainCreated(FStreamlineRHI *this,void *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_188 [32];
  int local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if (5 < (byte)LogStreamlineRHI._0_1_) {
    iVar1 = this->NumActiveSwapchainProxies;
    CurrentThreadName(&local_158);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FStreamlineRHI::OnSwapchainCreated",0x22,Yes);
    local_168 = iVar1;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  ValidateNumSwapchainProxies(this,"FStreamlineRHI::OnSwapchainCreated");
  cVar2 = (**(code **)(this->_padding_ + 0x58))(this,param_1);
  if (cVar2 != '\0') {
    this->NumActiveSwapchainProxies = this->NumActiveSwapchainProxies + 1;
  }
  if (5 < (byte)LogStreamlineRHI._0_1_) {
    local_168 = this->NumActiveSwapchainProxies;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
  }
  ValidateNumSwapchainProxies(this,"FStreamlineRHI::OnSwapchainCreated");
  if (5 < (byte)LogStreamlineRHI._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FStreamlineRHI::OnSwapchainCreated",0x22,Yes);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

// OnSwapchainDestroyed @ 14de5f490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineRHI::OnSwapchainDestroyed(FStreamlineRHI *this,void *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_188 [32];
  int local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if (5 < (byte)LogStreamlineRHI._0_1_) {
    iVar1 = this->NumActiveSwapchainProxies;
    CurrentThreadName(&local_158);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FStreamlineRHI::OnSwapchainDestroyed",0x24,Yes);
    local_168 = iVar1;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
  }
  ValidateNumSwapchainProxies(this,"FStreamlineRHI::OnSwapchainDestroyed");
  cVar2 = (**(code **)(this->_padding_ + 0x58))(this,param_1);
  if (cVar2 != '\0') {
    this->NumActiveSwapchainProxies = this->NumActiveSwapchainProxies + -1;
  }
  if (5 < (byte)LogStreamlineRHI._0_1_) {
    local_168 = this->NumActiveSwapchainProxies;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
  }
  ValidateNumSwapchainProxies(this,"FStreamlineRHI::OnSwapchainDestroyed");
  if (5 < (byte)LogStreamlineRHI._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FStreamlineRHI::OnSwapchainDestroyed",0x24,Yes);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

// PostPlatformRHICreateInit @ 14de5fc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineRHI::PostPlatformRHICreateInit(FStreamlineRHI *this)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  Result RVar7;
  char *pcVar8;
  size_t sVar9;
  AdapterInfo *pAVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 auStack_6c8 [32];
  FScriptContainerElement *local_6a8;
  FScriptContainerElement *local_6a0;
  longlong local_698;
  longlong local_690;
  undefined8 local_688;
  undefined1 local_678;
  undefined1 local_677 [7];
  undefined1 local_670 [8];
  ForAnyElementType local_668;
  undefined8 local_660;
  ForAnyElementType local_658;
  undefined8 local_650;
  undefined1 local_648 [8];
  FStreamlineRHI *local_640;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_6c8;
  local_640 = this;
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"FStreamlineRHI::PostPlatformRHICreateInit",0x29,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
  }
  iVar6 = FeaturesRequestedAtSLInitTime.ArrayNum;
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    bVar5 = true;
    local_638.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_638.Data.ArrayNum = 0;
    local_638.Data.ArrayMax = 0;
    pFVar2 = FeaturesRequestedAtSLInitTime.AllocatorInstance.Data +
             (longlong)FeaturesRequestedAtSLInitTime.ArrayNum * 4;
    FVar11.Data = FeaturesRequestedAtSLInitTime.AllocatorInstance.Data;
    while( true ) {
      if (FeaturesRequestedAtSLInitTime.ArrayNum != iVar6) {
        local_677[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_677);
      }
      if (FVar11.Data == pFVar2) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        ::FString::AppendChars(&local_638,L", ",2);
      }
      pcVar8 = sl::getFeatureAsStr(*(uint *)FVar11.Data);
      local_5d8._padding_ = 0;
      if (pcVar8 == (char *)0x0) {
        local_5d8.Ptr = (wchar_t *)0x0;
        local_5d8.StringLength = 0;
      }
      else {
        sVar9 = strlen(pcVar8);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_5d8,pcVar8,(int)sVar9,Yes);
      }
      ::FString::PrintfImpl(&local_608,L"%s (%u)");
      if ((void *)local_5d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5d8._padding_);
      }
      iVar13 = local_608.Data.ArrayNum + -1;
      if (local_608.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars(&local_638,(wchar_t *)local_608.Data.AllocatorInstance.Data,iVar13);
      if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.Data.AllocatorInstance.Data);
      }
      FVar11.Data = FVar11.Data + 4;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    this = local_640;
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  local_668.Data = (FScriptContainerElement *)0x0;
  local_660 = 0;
  pFVar2 = FeaturesRequestedAtSLInitTime.AllocatorInstance.Data +
           (longlong)FeaturesRequestedAtSLInitTime.ArrayNum * 4;
  for (FVar11.Data = FeaturesRequestedAtSLInitTime.AllocatorInstance.Data; FVar11.Data != pFVar2;
      FVar11.Data = FVar11.Data + 4) {
    bVar5 = `FStreamlineRHI::PostPlatformRHICreateInit'::__l2::<lambda_4>::operator()
                      (local_670,*(uint *)FVar11.Data);
    if (bVar5) {
      if (local_668.Data <= FVar11.Data) {
        if (FVar11.Data < local_668.Data + (longlong)local_660._4_4_ * 4) {
          local_690 = (longlong)(int)local_660;
          local_688 = 4;
          local_6a0 = local_668.Data;
          local_6a8 = FVar11.Data;
          local_698 = (longlong)local_660._4_4_;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      iVar6 = (int)local_660;
      if ((int)local_660 == local_660._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_668,(int *)((longlong)&local_660 + 4));
      }
      local_660 = CONCAT44(local_660._4_4_,iVar6 + 1);
      *(uint *)(local_668.Data + (longlong)iVar6 * 4) = *(uint *)FVar11.Data;
    }
  }
  pTVar1 = &this->LoadedFeatures;
  if (pTVar1 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_668) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = local_668.Data;
    (this->LoadedFeatures).ArrayNum = (int)local_660;
    local_668.Data = (FScriptContainerElement *)0x0;
    (this->LoadedFeatures).ArrayMax = local_660._4_4_;
    local_660 = 0;
  }
  if (local_668.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data);
  }
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    pFVar12 = (pTVar1->AllocatorInstance).Data;
    iVar6 = (this->LoadedFeatures).ArrayNum;
    local_628.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    bVar5 = true;
    local_628.Data.ArrayNum = 0;
    local_628.Data.ArrayMax = 0;
    pFVar2 = pFVar12 + (longlong)iVar6 * 4;
    while( true ) {
      if ((this->LoadedFeatures).ArrayNum != iVar6) {
        local_678 = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_678);
      }
      if (pFVar12 == pFVar2) break;
      if (bVar5) {
        bVar5 = false;
      }
      else {
        ::FString::AppendChars(&local_628,L", ",2);
      }
      pcVar8 = sl::getFeatureAsStr(*(uint *)pFVar12);
      local_4b8._padding_ = 0;
      if (pcVar8 == (char *)0x0) {
        local_4b8.Ptr = (wchar_t *)0x0;
        local_4b8.StringLength = 0;
      }
      else {
        sVar9 = strlen(pcVar8);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4b8,pcVar8,(int)sVar9,Yes);
      }
      ::FString::PrintfImpl(&local_5f8,L"%s (%u)");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
      iVar13 = local_5f8.Data.ArrayNum + -1;
      if (local_5f8.Data.ArrayNum == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars(&local_628,(wchar_t *)local_5f8.Data.AllocatorInstance.Data,iVar13);
      if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
      }
      pFVar12 = pFVar12 + 4;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    this = local_640;
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
      this = local_640;
    }
  }
  pFVar12 = (this->LoadedFeatures).AllocatorInstance.Data;
  local_658.Data = (FScriptContainerElement *)0x0;
  local_650 = 0;
  pFVar2 = pFVar12 + (longlong)(this->LoadedFeatures).ArrayNum * 4;
  do {
    if (pFVar12 == pFVar2) {
      pTVar1 = &this->SupportedFeatures;
      if (pTVar1 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_658) {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar1->AllocatorInstance).Data = local_658.Data;
        (this->SupportedFeatures).ArrayNum = (int)local_650;
        local_658.Data = (FScriptContainerElement *)0x0;
        (this->SupportedFeatures).ArrayMax = local_650._4_4_;
        local_650 = 0;
      }
      if (local_658.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_658.Data);
      }
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        pFVar12 = (this->SupportedFeatures).AllocatorInstance.Data;
        bVar5 = true;
        local_618.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar6 = (this->SupportedFeatures).ArrayNum;
        local_618.Data.ArrayNum = 0;
        local_618.Data.ArrayMax = 0;
        pFVar2 = pFVar12 + (longlong)iVar6 * 4;
        while( true ) {
          if ((this->SupportedFeatures).ArrayNum != iVar6) {
            `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_648);
          }
          if (pFVar12 == pFVar2) break;
          if (bVar5) {
            bVar5 = false;
          }
          else {
            ::FString::AppendChars(&local_618,L", ",2);
          }
          pcVar8 = sl::getFeatureAsStr(*(uint *)pFVar12);
          local_398._padding_ = 0;
          if (pcVar8 == (char *)0x0) {
            local_398.Ptr = (wchar_t *)0x0;
            local_398.StringLength = 0;
          }
          else {
            sVar9 = strlen(pcVar8);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_398,pcVar8,(int)sVar9,Yes);
          }
          ::FString::PrintfImpl(&local_5e8,L"%s (%u)");
          if ((void *)local_398._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_398._padding_);
          }
          iVar13 = local_5e8.Data.ArrayNum + -1;
          if (local_5e8.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          ::FString::AppendChars(&local_618,(wchar_t *)local_5e8.Data.AllocatorInstance.Data,iVar13)
          ;
          if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
          }
          pFVar12 = pFVar12 + 4;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
        if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.Data.AllocatorInstance.Data);
        }
      }
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"FStreamlineRHI::PostPlatformRHICreateInit",0x29,Yes);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      return;
    }
    uVar3 = *(uint *)pFVar12;
    pAVar10 = (AdapterInfo *)(**(code **)(this->_padding_ + 0x18))(this);
    RVar7 = SLisFeatureSupported(uVar3,pAVar10);
    if (RVar7 == eOk) {
      if (local_658.Data <= pFVar12) {
        if (pFVar12 < local_658.Data + (longlong)local_650._4_4_ * 4) {
          local_690 = (longlong)(int)local_650;
          local_688 = 4;
          local_6a0 = local_658.Data;
          local_6a8 = pFVar12;
          local_698 = (longlong)local_650._4_4_;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      iVar6 = (int)local_650;
      if ((int)local_650 == local_650._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_658,(int *)((longlong)&local_650 + 4));
      }
      local_650 = CONCAT44(local_650._4_4_,iVar6 + 1);
      *(uint *)(local_658.Data + (longlong)iVar6 * 4) = *(uint *)pFVar12;
    }
    pFVar12 = pFVar12 + 4;
  } while( true );
}

// ReleaseStreamlineResourcesForAllFeatures @ 14de605b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamlineRHI::ReleaseStreamlineResourcesForAllFeatures(FStreamlineRHI *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  char *_Str;
  size_t sVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_2f8 [32];
  wchar_t *local_2d8;
  uint local_2d0;
  uint local_2c8;
  undefined1 local_2b8 [4];
  uint local_2b4;
  FString local_2b0;
  undefined1 local_2a0 [24];
  longlong local_288;
  uint local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  pFVar9 = (this->LoadedFeatures).AllocatorInstance.Data;
  iVar2 = (this->LoadedFeatures).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 4;
  local_2b4 = param_1;
  while( true ) {
    if ((this->LoadedFeatures).ArrayNum != iVar2) {
      local_2b8[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2b8);
    }
    if (pFVar9 == pFVar1) {
      return;
    }
    uVar3 = *(uint *)pFVar9;
    local_2a0._0_8_ = 0;
    local_2a0._8_4_ = sl::ViewportHandle::s_structType.data1;
    local_2a0._12_2_ = sl::ViewportHandle::s_structType.data2;
    local_2a0._14_2_ = sl::ViewportHandle::s_structType.data3;
    local_2a0[0x10] = sl::ViewportHandle::s_structType.data4[0];
    local_2a0[0x11] = sl::ViewportHandle::s_structType.data4[1];
    local_2a0[0x12] = sl::ViewportHandle::s_structType.data4[2];
    local_2a0[0x13] = sl::ViewportHandle::s_structType.data4[3];
    local_2a0[0x14] = sl::ViewportHandle::s_structType.data4[4];
    local_2a0[0x15] = sl::ViewportHandle::s_structType.data4[5];
    local_2a0[0x16] = sl::ViewportHandle::s_structType.data4[6];
    local_2a0[0x17] = sl::ViewportHandle::s_structType.data4[7];
    local_288 = 1;
    local_280 = local_2b4;
    bVar7 = IsStreamlineSupported();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsStreamlineSupported()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                           ,0x1aa,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((SLInterPoserDLL == (void *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SLInterPoserDLL",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                           ,0x1ab,L""), bVar7)) break;
    if ((Ptr_freeResources == (_func___cdecl_Result_uint_ViewportHandle_ptr *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr_freeResources != nullptr",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                           ,0x1ac,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar5 = local_280;
    if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
      _Str = sl::getFeatureAsStr(uVar3);
      local_278._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_278.Ptr = (wchar_t *)0x0;
        local_278.StringLength = 0;
      }
      else {
        sVar8 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,_Str,(int)sVar8,Yes);
      }
      pwVar6 = local_278.Ptr;
      CurrentThreadName(&local_2b0);
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"SLFreeResources",0xf,Yes);
      local_2c8 = uVar5;
      local_2d8 = pwVar6;
      local_2d0 = uVar3;
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    (*Ptr_freeResources)(uVar3,(ViewportHandle *)local_2a0);
    pFVar9 = pFVar9 + 4;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// SetStreamlineData @ 14de62ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamlineRHI::SetStreamlineData
          (FStreamlineRHI *this,FRHICommandList *param_1,FRHIStreamlineArguments *param_2)

{
  uint uVar1;
  FSLFrameTokenProvider *lpCriticalSection;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined4 uVar5;
  float4x4 *pfVar6;
  FrameToken *pFVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_518 [32];
  undefined4 local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  uint local_4d8;
  FString local_4c8;
  float4x4 local_4b8;
  float4x4 local_478;
  float4x4 local_438;
  float4x4 local_3f8;
  float4x4 local_3b8;
  undefined1 local_378 [24];
  longlong local_360;
  uint local_358;
  Constants local_348;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_518;
  if (((GIsRunningRHIInSeparateThread_InternalUseOnly) && (bVar4 = IsInRHIThread(), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineRHI.cpp"
                         ,0x1d8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  sl::Constants::Constants(&local_348);
  local_348.depthInverted = param_2->bIsDepthInverted;
  local_348.jitterOffset = *(float2 *)&(param_2->JitterOffset).field0_0x0;
  local_348.mvecScale = *(float2 *)&(param_2->MotionVectorScale).field0_0x0;
  local_348.reset = param_2->bReset != false;
  local_348.orthographicProjection = param_2->bIsOrthographicProjection;
  local_348.motionVectorsDilated = param_2->bAreMotionVectorsDilated;
  local_348.cameraMotionIncluded = eTrue;
  local_348.motionVectors3D = eFalse;
  pfVar6 = ToSL(&local_4b8,&param_2->CameraViewToClip,(bool)local_348.orthographicProjection);
  local_348.cameraViewToClip.row[0].x = pfVar6->row[0].x;
  local_348.cameraViewToClip.row[0].y = pfVar6->row[0].y;
  local_348.cameraViewToClip.row[0].z = pfVar6->row[0].z;
  local_348.cameraViewToClip.row[0].w = pfVar6->row[0].w;
  local_348.cameraViewToClip.row[1].x = pfVar6->row[1].x;
  local_348.cameraViewToClip.row[1].y = pfVar6->row[1].y;
  local_348.cameraViewToClip.row[1].z = pfVar6->row[1].z;
  local_348.cameraViewToClip.row[1].w = pfVar6->row[1].w;
  local_348.cameraViewToClip.row[2].x = pfVar6->row[2].x;
  local_348.cameraViewToClip.row[2].y = pfVar6->row[2].y;
  local_348.cameraViewToClip.row[2].z = pfVar6->row[2].z;
  local_348.cameraViewToClip.row[2].w = pfVar6->row[2].w;
  local_348.cameraViewToClip.row[3].x = pfVar6->row[3].x;
  local_348.cameraViewToClip.row[3].y = pfVar6->row[3].y;
  local_348.cameraViewToClip.row[3].z = pfVar6->row[3].z;
  local_348.cameraViewToClip.row[3].w = pfVar6->row[3].w;
  pfVar6 = ToSL(&local_478,&param_2->ClipToCameraView,false);
  local_348.clipToCameraView.row[0].x = pfVar6->row[0].x;
  local_348.clipToCameraView.row[0].y = pfVar6->row[0].y;
  local_348.clipToCameraView.row[0].z = pfVar6->row[0].z;
  local_348.clipToCameraView.row[0].w = pfVar6->row[0].w;
  local_348.clipToCameraView.row[1].x = pfVar6->row[1].x;
  local_348.clipToCameraView.row[1].y = pfVar6->row[1].y;
  local_348.clipToCameraView.row[1].z = pfVar6->row[1].z;
  local_348.clipToCameraView.row[1].w = pfVar6->row[1].w;
  local_348.clipToCameraView.row[2].x = pfVar6->row[2].x;
  local_348.clipToCameraView.row[2].y = pfVar6->row[2].y;
  local_348.clipToCameraView.row[2].z = pfVar6->row[2].z;
  local_348.clipToCameraView.row[2].w = pfVar6->row[2].w;
  local_348.clipToCameraView.row[3].x = pfVar6->row[3].x;
  local_348.clipToCameraView.row[3].y = pfVar6->row[3].y;
  local_348.clipToCameraView.row[3].z = pfVar6->row[3].z;
  local_348.clipToCameraView.row[3].w = pfVar6->row[3].w;
  pfVar6 = ToSL(&local_438,&param_2->ClipToLenseClip,false);
  local_348.clipToLensClip.row[0].x = pfVar6->row[0].x;
  local_348.clipToLensClip.row[0].y = pfVar6->row[0].y;
  local_348.clipToLensClip.row[0].z = pfVar6->row[0].z;
  local_348.clipToLensClip.row[0].w = pfVar6->row[0].w;
  local_348.clipToLensClip.row[1].x = pfVar6->row[1].x;
  local_348.clipToLensClip.row[1].y = pfVar6->row[1].y;
  local_348.clipToLensClip.row[1].z = pfVar6->row[1].z;
  local_348.clipToLensClip.row[1].w = pfVar6->row[1].w;
  local_348.clipToLensClip.row[2].x = pfVar6->row[2].x;
  local_348.clipToLensClip.row[2].y = pfVar6->row[2].y;
  local_348.clipToLensClip.row[2].z = pfVar6->row[2].z;
  local_348.clipToLensClip.row[2].w = pfVar6->row[2].w;
  local_348.clipToLensClip.row[3].x = pfVar6->row[3].x;
  local_348.clipToLensClip.row[3].y = pfVar6->row[3].y;
  local_348.clipToLensClip.row[3].z = pfVar6->row[3].z;
  local_348.clipToLensClip.row[3].w = pfVar6->row[3].w;
  pfVar6 = ToSL(&local_3f8,&param_2->ClipToPrevClip,false);
  local_348.clipToPrevClip.row[0].x = pfVar6->row[0].x;
  local_348.clipToPrevClip.row[0].y = pfVar6->row[0].y;
  local_348.clipToPrevClip.row[0].z = pfVar6->row[0].z;
  local_348.clipToPrevClip.row[0].w = pfVar6->row[0].w;
  local_348.clipToPrevClip.row[1].x = pfVar6->row[1].x;
  local_348.clipToPrevClip.row[1].y = pfVar6->row[1].y;
  local_348.clipToPrevClip.row[1].z = pfVar6->row[1].z;
  local_348.clipToPrevClip.row[1].w = pfVar6->row[1].w;
  local_348.clipToPrevClip.row[2].x = pfVar6->row[2].x;
  local_348.clipToPrevClip.row[2].y = pfVar6->row[2].y;
  local_348.clipToPrevClip.row[2].z = pfVar6->row[2].z;
  local_348.clipToPrevClip.row[2].w = pfVar6->row[2].w;
  local_348.clipToPrevClip.row[3].x = pfVar6->row[3].x;
  local_348.clipToPrevClip.row[3].y = pfVar6->row[3].y;
  local_348.clipToPrevClip.row[3].z = pfVar6->row[3].z;
  local_348.clipToPrevClip.row[3].w = pfVar6->row[3].w;
  pfVar6 = ToSL(&local_3b8,&param_2->PrevClipToClip,false);
  local_348.prevClipToClip.row[0].x = pfVar6->row[0].x;
  local_348.prevClipToClip.row[0].y = pfVar6->row[0].y;
  local_348.prevClipToClip.row[0].z = pfVar6->row[0].z;
  local_348.prevClipToClip.row[0].w = pfVar6->row[0].w;
  local_348.prevClipToClip.row[1].x = pfVar6->row[1].x;
  local_348.prevClipToClip.row[1].y = pfVar6->row[1].y;
  local_348.prevClipToClip.row[1].z = pfVar6->row[1].z;
  local_348.prevClipToClip.row[1].w = pfVar6->row[1].w;
  local_348.prevClipToClip.row[2].x = pfVar6->row[2].x;
  local_348.prevClipToClip.row[2].y = pfVar6->row[2].y;
  local_348.prevClipToClip.row[2].z = pfVar6->row[2].z;
  local_348.prevClipToClip.row[2].w = pfVar6->row[2].w;
  local_348.prevClipToClip.row[3].x = pfVar6->row[3].x;
  local_348.prevClipToClip.row[3].y = pfVar6->row[3].y;
  local_348.prevClipToClip.row[3].z = pfVar6->row[3].z;
  local_348.prevClipToClip.row[3].w = pfVar6->row[3].w;
  local_348.cameraPos._0_8_ = *(undefined8 *)&(param_2->CameraOrigin).field0_0x0;
  local_348._384_8_ = *(undefined8 *)((longlong)&(param_2->CameraOrigin).field0_0x0 + 8);
  local_348.cameraUp._4_8_ = *(undefined8 *)((longlong)&(param_2->CameraUp).field0_0x0 + 4);
  local_348.cameraRight._0_8_ = *(undefined8 *)&(param_2->CameraRight).field0_0x0;
  local_348._408_8_ = *(undefined8 *)((longlong)&(param_2->CameraRight).field0_0x0 + 8);
  local_348.cameraFwd._4_8_ = *(undefined8 *)((longlong)&(param_2->CameraForward).field0_0x0 + 4);
  local_348.cameraNear = param_2->CameraNear;
  local_348.cameraFOV = param_2->CameraFOV * __real_3c8efa35;
  lpCriticalSection = (this->FrameTokenProvider).Ptr;
  local_348.cameraFar = param_2->CameraFar;
  local_358 = param_2->ViewId;
  local_348.cameraAspectRatio = param_2->CameraAspectRatio;
  local_348.cameraPinholeOffset.y = (param_2->CameraPinholeOffset).field0_0x0._s_0.Y;
  local_348.cameraPinholeOffset.x = (param_2->CameraPinholeOffset).field0_0x0._s_0.X;
  local_378._0_8_ = 0;
  local_360 = 1;
  local_378._8_4_ = sl::ViewportHandle::s_structType.data1;
  local_378._12_2_ = sl::ViewportHandle::s_structType.data2;
  local_378._14_2_ = sl::ViewportHandle::s_structType.data3;
  local_378[0x10] = sl::ViewportHandle::s_structType.data4[0];
  local_378[0x11] = sl::ViewportHandle::s_structType.data4[1];
  local_378[0x12] = sl::ViewportHandle::s_structType.data4[2];
  local_378[0x13] = sl::ViewportHandle::s_structType.data4[3];
  local_378[0x14] = sl::ViewportHandle::s_structType.data4[4];
  local_378[0x15] = sl::ViewportHandle::s_structType.data4[5];
  local_378[0x16] = sl::ViewportHandle::s_structType.data4[6];
  local_378[0x17] = sl::ViewportHandle::s_structType.data4[7];
  if (lpCriticalSection == (FSLFrameTokenProvider *)0x0) {
    pFVar7 = (FrameToken *)0x0;
  }
  else {
    uVar1 = param_2->FrameId;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (uVar1 != lpCriticalSection->LastFrameCounter) {
      lpCriticalSection->LastFrameCounter = uVar1;
      SLgetNewFrameToken(&lpCriticalSection->FrameToken,&lpCriticalSection->LastFrameCounter);
    }
    pFVar7 = lpCriticalSection->FrameToken;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  bVar4 = IsStreamlineSupported();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x22d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x22e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((Ptr_setConstants ==
       (_func___cdecl_Result_Constants_ptr_FrameToken_ptr_ViewportHandle_ptr *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr_setConstants != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x22f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = local_358;
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    fVar8 = __real_3f800000 / local_348.mvecScale.y;
    fVar9 = __real_3f800000 / local_348.mvecScale.x;
    dVar3 = (double)local_348.cameraAspectRatio;
    uVar5 = (*(code *)**(undefined8 **)pFVar7)(pFVar7);
    CurrentThreadName(&local_4c8);
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,"SLsetConstants",0xe,Yes);
    local_4d8 = uVar1;
    local_4f8 = uVar5;
    local_4f0 = dVar3;
    local_4e8 = (double)fVar9;
    local_4e0 = (double)fVar8;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
  }
  (*Ptr_setConstants)(&local_348,pFVar7,(ViewportHandle *)local_378);
  return;
}

// StreamlineEvaluateDeepDVC @ 14de63660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamlineResource": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FStreamlineRHI::StreamlineEvaluateDeepDVC
          (FStreamlineRHI *this,FRHICommandList *param_1,FRHIStreamlineResource *param_2,
          FrameToken *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  undefined1 auStackY_a8 [32];
  BaseStructure *local_68;
  BaseStructure local_60;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (param_2->StreamlineTag != Last) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputOutput.StreamlineTag == EStreamlineResource::ScalingOutputColor",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineRHI.cpp"
                       ,0x207,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x10))(this,param_1,param_4,param_3);
  pvVar3 = (void *)(**(code **)(this->_padding_ + 0x28))(this,param_1,param_2->Texture);
  local_68 = &local_60;
  local_60.next = (BaseStructure *)0x0;
  local_60.structVersion = 1;
  local_40 = param_4;
  local_60.structType = sl::ViewportHandle::s_structType;
  SLevaluateFeature(5,param_3,&local_68,1,pvVar3);
  (**(code **)(this->_padding_ + 0x30))(this,param_1,param_2->Texture);
  return;
}

// ValidateNumSwapchainProxies @ 14de641d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineRHI::ValidateNumSwapchainProxies(FStreamlineRHI *this,char *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((-1 < this->NumActiveSwapchainProxies) &&
     (iVar1 = GetMaxNumSwapchainProxies(this), this->NumActiveSwapchainProxies <= iVar1)) {
    return;
  }
  if (1 < (byte)LogStreamlineRHI._0_1_) {
    local_138._padding_ = 0;
    if (param_1 == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar2 = strlen(param_1);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar2,Yes);
    }
    local_148 = 1;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}


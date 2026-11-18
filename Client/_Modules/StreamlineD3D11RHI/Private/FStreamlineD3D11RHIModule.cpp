// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineD3D11RHI
// Functions: 3

// CreateStreamlineRHI @ 14de65990

TUniquePtr<FStreamlineRHI,TDefaultDelete<FStreamlineRHI>_> __thiscall
FStreamlineD3D11RHIModule::CreateStreamlineRHI
          (FStreamlineD3D11RHIModule *this,FStreamlineRHICreateArguments *param_1)

{
  FStreamlineD3D11RHI *pFVar1;
  FStreamlineRHICreateArguments *in_R8;
  
  pFVar1 = ::operator_new(0x98);
  if (pFVar1 != (FStreamlineD3D11RHI *)0x0) {
    pFVar1 = FStreamlineD3D11RHI::FStreamlineD3D11RHI(pFVar1,in_R8);
    (param_1->PluginBaseDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar1;
    return (TUniquePtr<FStreamlineRHI,TDefaultDelete<FStreamlineRHI>_>)(FStreamlineRHI *)param_1;
  }
  (param_1->PluginBaseDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return (TUniquePtr<FStreamlineRHI,TDefaultDelete<FStreamlineRHI>_>)(FStreamlineRHI *)param_1;
}

// StartupModule @ 14de659f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineD3D11RHIModule::StartupModule(FStreamlineD3D11RHIModule *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  Result RVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  FName *pFVar9;
  FModuleManager *this_00;
  FStreamlineRHIModule *this_01;
  void *pvVar10;
  char *_Str;
  size_t sVar11;
  undefined1 auStack_4d8 [32];
  wchar_t *local_4b8;
  wchar_t *local_4b0;
  FName local_4a8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_4d8;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar7 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if ((plVar7 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7), cVar4 != '\0'))
  {
    pwVar8 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar8,L"slno");
    if (!bVar3) {
      if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
        local_378._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_378,"FStreamlineD3D11RHIModule::StartupModule",0x28,Yes);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
        if ((void *)local_378._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_378._padding_);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar8 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar8,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
          && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
              bHasNullRHIOnCommandline == false)) && (PRIVATE_GIsRunningCommandlet == false)) {
        if ((GDynamicRHI == (FDynamicRHI *)0x0) ||
           (iVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar5 != 2)) {
          if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
          }
        }
        else {
          pFVar9 = ::FName::FName(local_4a8,L"StreamlineRHI");
          FVar1 = *pFVar9;
          this_00 = FModuleManager::Get();
          this_01 = (FStreamlineRHIModule *)FModuleManager::LoadModuleChecked(this_00,FVar1);
          bVar3 = AreStreamlineFunctionsLoaded();
          if (bVar3) {
            FStreamlineRHIModule::InitializeStreamline(this_01);
            bVar3 = IsStreamlineSupported();
            if (bVar3) {
              pvVar10 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
              RVar6 = SLsetD3DDevice(pvVar10);
              if (RVar6 != eOk) {
                _Str = sl::getResultAsStr(RVar6);
                local_498._padding_ = 0;
                if (_Str == (char *)0x0) {
                  local_498.StringLength = 0;
                  local_498.Ptr = (wchar_t *)0x0;
                }
                else {
                  sVar11 = strlen(_Str);
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_498,_Str,(int)sVar11,Yes);
                }
                pwVar8 = local_498.Ptr;
                local_258._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_258,"FStreamlineD3D11RHIModule::StartupModule",0x28,Yes);
                local_4b8 = local_258.Ptr;
                local_4b0 = pwVar8;
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result == sl::Result::eOk",
                                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineD3D11RHI\\Private\\StreamlineD3D11RHI.cpp"
                                   ,0x158,L"%s: SLsetD3DDevice failed (%s)");
                if ((void *)local_258._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_258._padding_);
                }
                if ((void *)local_498._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_498._padding_);
                }
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
            }
          }
        }
      }
      else if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
      }
      if ((byte)LogStreamlineD3D11RHI._0_1_ < 5) {
        return;
      }
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FStreamlineD3D11RHIModule::StartupModule",0x28,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
  }
  if ((byte)LogStreamlineD3D11RHI._0_1_ < 5) {
    return;
  }
  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
  return;
}

// ShutdownModule @ 14de65e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineD3D11RHIModule::ShutdownModule(FStreamlineD3D11RHIModule *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_278 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_278;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if ((plVar4 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4), cVar3 == '\0'))
  {
    return;
  }
  if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"FStreamlineD3D11RHIModule::ShutdownModule",0x29,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if (4 < (byte)LogStreamlineD3D11RHI._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FStreamlineD3D11RHIModule::ShutdownModule",0x29,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineD3D11RHI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}


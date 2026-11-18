// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// EnablePointLightShadows @ 14558fd60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FReadOnlyCVARCache::EnablePointLightShadows(FStaticShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].bContainsValidPlatformInfo == 0)
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1.Platform].MaxFeatureLevel != ES3_1) {
    return bEnablePointLightShadows;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FReadOnlyCVARCache::EnablePointLightShadows(FStaticShaderPlatform)'
      ::__l7::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_bool___cdecl_FReadOnlyCVARCache::EnablePointLightShadows(FStaticShaderPlatform)'
                         ::__l7::_thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FReadOnlyCVARCache::EnablePointLightShadows(FStaticShaderPlatform)'
        ::__l7::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_bool___cdecl_FReadOnlyCVARCache::EnablePointLightShadows(FStaticShaderPlatform)'
                          ::__l7::MobileMovablePointLightShadowsIniValue.CVarName,
                         L"r.Mobile.EnableMovablePointLightsShadows");
      `public:_static_bool___cdecl_FReadOnlyCVARCache::EnablePointLightShadows(FStaticShaderPlatform)'
      ::__l7::MobileMovablePointLightShadowsIniValue.CVar = (IConsoleVariable *)0x0;
      atexit(`FReadOnlyCVARCache::EnablePointLightShadows'::__l7::
             _dynamic_atexit_destructor_for__MobileMovablePointLightShadowsIniValue__);
      _Init_thread_footer(&`public:_static_bool___cdecl_FReadOnlyCVARCache::EnablePointLightShadows(FStaticShaderPlatform)'
                           ::__l7::_thread_safe_static_guard_0__);
    }
  }
  bVar2 = FShaderPlatformCachedIniValue<bool>::Get
                    (&`public:_static_bool___cdecl_FReadOnlyCVARCache::EnablePointLightShadows(FStaticShaderPlatform)'
                      ::__l7::MobileMovablePointLightShadowsIniValue,param_1.Platform);
  if ((bVar2) && (bMobileSupportsGPUScene != false)) {
    return true;
  }
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 8

// ConstructRequest @ 143159070

IHttpRequest * __cdecl FWindowsPlatformHttp::ConstructRequest(void)

{
  FCurlHttpRequest *pFVar1;
  
  pFVar1 = ::operator_new(0x6c0);
  if (pFVar1 != (FCurlHttpRequest *)0x0) {
    pFVar1 = FCurlHttpRequest::FCurlHttpRequest(pFVar1);
    return (IHttpRequest *)pFVar1;
  }
  return (IHttpRequest *)0x0;
}

// CreatePlatformHttpManager @ 14315b500

FHttpManager * __cdecl FWindowsPlatformHttp::CreatePlatformHttpManager(void)

{
  FHttpManager *this;
  
  this = ::operator_new(0x4a0);
  if (this != (FHttpManager *)0x0) {
    memset(this,0,0x4a0);
    FHttpManager::FHttpManager(this);
    this->_padding_ = (longlong)&___7FCurlHttpManager__6B_;
    return this;
  }
  return (FHttpManager *)0x0;
}

// GetMimeType @ 143163a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FWindowsPlatformHttp::GetMimeType(FString *__return_storage_ptr__,FString *param_1)

{
  DWORD DVar1;
  LSTATUS LVar2;
  ForAnyElementType lpSubKey;
  undefined1 auStackY_168 [32];
  DWORD local_138 [2];
  HKEY local_130;
  FString local_128;
  wchar_t local_118 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  ::FString::FString(__return_storage_ptr__,L"application/unknown");
  FPaths::GetExtension(&local_128,param_1,true);
  lpSubKey.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    lpSubKey.Data = local_128.Data.AllocatorInstance.Data;
  }
  DVar1 = RegOpenKeyExW((HKEY)0xffffffff80000000,(LPCWSTR)lpSubKey.Data,0,0x20019,&local_130);
  if (DVar1 == 0) {
    local_138[1] = 0x100;
    local_138[0] = DVar1;
    LVar2 = RegQueryValueExW(local_130,L"Content Type",(LPDWORD)0x0,local_138,(LPBYTE)local_118,
                             local_138 + 1);
    if ((LVar2 == 0) && (local_138[0] == 1)) {
      ::FString::operator=(__return_storage_ptr__,local_118);
    }
    RegCloseKey(local_130);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOperatingSystemProxyAddress @ 1431641f0

TOptional<FString> * __cdecl
FWindowsPlatformHttp::GetOperatingSystemProxyAddress(TOptional<FString> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOptional<FString> *pTVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined8 local_58;
  wchar_t *pwStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  wchar_t *local_30;
  undefined8 uStack_28;
  
  FVar4.Data = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  local_48 = 0;
  local_58 = 0;
  pwStack_50 = (wchar_t *)0x0;
  WinHttpGetDefaultProxyConfiguration(&local_58);
  iVar5 = iVar6;
  if (pwStack_50 != (wchar_t *)0x0) {
    ::FString::FString(&local_b8,pwStack_50);
    bVar2 = IsValidIPv4Address(&local_b8);
    if (bVar2) {
LAB_14316425d:
      FVar4.Data = local_b8.Data.AllocatorInstance.Data;
      iVar6 = local_b8.Data.ArrayNum;
      iVar5 = local_b8.Data.ArrayMax;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
    }
    else {
      ::FString::FString(&local_98,L"https=");
      bVar2 = ::FString::Split(&local_b8,&local_98,(FString *)0x0,&local_b8);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      iVar6 = 0;
      iVar5 = 0;
      if (bVar2) {
        ::FString::FString(&local_88,L";");
        ::FString::Split(&local_b8,&local_88,&local_b8,(FString *)0x0);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        bVar2 = IsValidIPv4Address(&local_b8);
        if (bVar2) goto LAB_14316425d;
      }
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (1 < iVar6) goto LAB_1431643fa;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (wchar_t *)0x0;
  uStack_28 = 0;
  WinHttpGetIEProxyConfigForCurrentUser(&local_40);
  if (local_30 == (wchar_t *)0x0) goto LAB_1431643fa;
  ::FString::FString(&local_a8,local_30);
  bVar2 = IsValidIPv4Address(&local_a8);
  if (bVar2) {
LAB_143164346:
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    FVar4.Data = local_a8.Data.AllocatorInstance.Data;
    iVar6 = local_a8.Data.ArrayNum;
    iVar5 = local_a8.Data.ArrayMax;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
  }
  else {
    ::FString::FString(&local_78,L"https=");
    bVar2 = ::FString::Split(&local_a8,&local_78,(FString *)0x0,&local_a8);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      ::FString::FString(&local_68,L";");
      ::FString::Split(&local_a8,&local_68,&local_a8,(FString *)0x0);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      bVar2 = IsValidIPv4Address(&local_a8);
      if (bVar2) goto LAB_143164346;
    }
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
LAB_1431643fa:
  (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data = FVar4.Data;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = iVar6;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = iVar5;
  if ((iVar5 == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TOptional<FString> *)(*pcVar1)();
    return pTVar3;
  }
  return __return_storage_ptr__;
}

// Init @ 14316afe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformHttp::Init(void)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  FString local_28;
  FString local_18;
  
  bVar4 = false;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Value(pwVar3,L"HTTP=",&local_28,true,(wchar_t **)0x0);
  if (bVar1) {
    ::FString::FString(&local_18,L"WinInet");
    if (local_28.Data.ArrayNum == local_18.Data.ArrayNum) {
      if (1 < local_28.Data.ArrayNum) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                           (wchar_t *)local_18.Data.AllocatorInstance.Data);
        bVar1 = iVar2 == 0;
        goto LAB_14316b05a;
      }
    }
    else {
      bVar1 = local_28.Data.ArrayNum + local_18.Data.ArrayNum == 1;
LAB_14316b05a:
      bVar4 = true;
      if (!bVar1) goto LAB_14316b070;
    }
    bVar1 = true;
    bVar4 = true;
  }
  else {
LAB_14316b070:
    bVar1 = false;
  }
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (2 < (byte)LogHttp._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
  }
  FUserAgentImpl::Get();
  FCurlHttpManager::InitCurl();
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// IsOperatingSystemProxyInformationSupported @ 14316c950

bool __cdecl FWindowsPlatformHttp::IsOperatingSystemProxyInformationSupported(void)

{
  return true;
}

// Shutdown @ 143182a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformHttp::Shutdown(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FModuleManager *this;
  IModuleInterface *pIVar6;
  FName aFStackX_8 [4];
  
  if (FCurlHttpManager::GShareHandle != (void *)0x0) {
    iVar4 = curl_share_cleanup();
    if ((2 < (byte)LogHttp._0_1_) && (iVar4 != 0)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    FCurlHttpManager::GShareHandle = (void *)0x0;
  }
  if (FCurlHttpManager::GMultiHandle != (void *)0x0) {
    iVar4 = curl_multi_cleanup();
    if ((2 < (byte)LogHttp._0_1_) && (iVar4 != 0)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHttp);
    }
    FCurlHttpManager::GMultiHandle = (void *)0x0;
  }
  curl_global_cleanup();
  if (LibCryptoMemHooks::bMemoryHooksSet != false) {
    LibCryptoMemHooks::bMemoryHooksSet = false;
    LibCryptoMemHooks::ChainedMalloc = (_func___cdecl_void_ptr_ulong64_char_ptr_int *)0x0;
    LibCryptoMemHooks::ChainedRealloc = (_func___cdecl_void_ptr_void_ptr_ulong64_char_ptr_int *)0x0;
    LibCryptoMemHooks::ChainedFree = (_func___cdecl_void_void_ptr_char_ptr_int *)0x0;
  }
  pFVar5 = ::FName::FName(aFStackX_8,"SSL");
  FVar1 = *pFVar5;
  this = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(this,FVar1);
  if (pIVar6[2] == (IModuleInterface)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SslManagerPtr != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\SSL\\Public\\SslModule.h"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143182b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pIVar6[2] + 0x10))();
  return;
}

// VerifyPeerSslCertificate @ 14318c0b0

bool __cdecl FWindowsPlatformHttp::VerifyPeerSslCertificate(bool param_1)

{
  bool bVar1;
  
  bVar1 = FCurlHttpManager::CurlRequestOptions.bVerifyPeer;
  FCurlHttpManager::CurlRequestOptions.bVerifyPeer = param_1;
  return bVar1;
}


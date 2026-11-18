// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 88

// AsymmetricThreadFenceHeavy @ 141aa04f0

void __cdecl FWindowsPlatformMisc::AsymmetricThreadFenceHeavy(void)

{
  if (CpuChannel->Enabled < 0) {
                    /* WARNING: Could not recover jumptable at 0x000141aa0509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FlushProcessWriteBuffers();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1299,"FPlatformMisc::AsymmetricThreadFenceHeavy",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
             ,0x513);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1299);
  FlushProcessWriteBuffers();
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// CallGracefulTerminationHandler @ 141aa13f0

void __cdecl FWindowsPlatformMisc::CallGracefulTerminationHandler(void)

{
  ConsoleCtrlHandler(2);
  return;
}

// CoInitialize @ 141aa1d00

bool __cdecl FWindowsPlatformMisc::CoInitialize(ECOMModel param_1)

{
  uint uVar1;
  DWORD dwCoInit;
  
  dwCoInit = 0;
  if (param_1 == Singlethreaded) {
    dwCoInit = 2;
  }
  uVar1 = CoInitializeEx((LPVOID)0x0,dwCoInit);
  return uVar1 < 2;
}

// CoUninitialize @ 141aa1d30

void __stdcall FWindowsPlatformMisc::CoUninitialize(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141aa1d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ::CoUninitialize();
  return;
}

// CommandLineCommands @ 141aa1d40

bool __cdecl FWindowsPlatformMisc::CommandLineCommands(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  FOutputDeviceRedirector *this;
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"firstinstall");
  if (bVar1) {
    this = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(this);
  }
  bVar1 = HandleGameExplorerIntegration();
  if (bVar1) {
    return true;
  }
  return false;
}

// CreateGuid @ 141aa2ec0

void __cdecl FWindowsPlatformMisc::CreateGuid(FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  HRESULT HVar3;
  
  HVar3 = CoCreateGuid((GUID *)param_1);
  if (HVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CoCreateGuid( (GUID*)&Result )==((HRESULT)0L)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0x5a4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DeleteStoredSection @ 141aa4370

bool __cdecl FWindowsPlatformMisc::DeleteStoredSection(FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  LSTATUS LVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType lpSubKey;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  if ((param_1->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStoreId.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0xae6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_2->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InSectionName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0xae7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pTVar6 = &::FString::FString(&local_38,L"Software")->Data;
  iVar4 = (param_1->Data).ArrayNum;
  iVar8 = 2;
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  if ((pTVar6->ArrayNum != 0) || (iVar4 = 2, iVar7 == -1)) {
    iVar4 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,pTVar6,iVar7 + iVar4);
  ::FString::PathAppend
            ((FString *)&local_48,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar7);
  iVar7 = (param_2->Data).ArrayNum;
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  if ((local_48.ArrayNum != 0) || (iVar4 == -1)) {
    iVar8 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,&local_48,iVar4 + iVar8);
  ::FString::PathAppend
            ((FString *)&local_58,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar4);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pTVar6 = &::FString::Replace((FString *)&local_58,&local_28,L"/",L"\\",IgnoreCase)->Data;
  if (&local_58 != pTVar6) {
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    local_58.AllocatorInstance.Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->AllocatorInstance)->
         AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->AllocatorInstance)->AllocatorInstance)
    .Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = pTVar6->ArrayNum;
    local_58.ArrayMax = pTVar6->ArrayMax;
    pTVar6->ArrayNum = 0;
    pTVar6->ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  lpSubKey.Data = (FScriptContainerElement *)L"";
  if (local_58.ArrayNum != 0) {
    lpSubKey.Data = local_58.AllocatorInstance.Data;
  }
  LVar5 = RegDeleteTreeW((HKEY)0xffffffff80000001,(LPCWSTR)lpSubKey.Data);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return LVar5 == 0;
}

// DeleteStoredValue @ 141aa4560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWindowsPlatformMisc::DeleteStoredValue(FString *param_1,FString *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  LSTATUS LVar5;
  LSTATUS LVar6;
  LSTATUS LVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  ForAnyElementType FVar9;
  wchar_t *lpValueName;
  int iVar10;
  int iVar11;
  undefined1 auStackY_4d8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_498;
  HKEY local_488;
  DWORD local_480 [2];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_478;
  FString local_468;
  FString local_458;
  WCHAR local_448 [256];
  WCHAR local_248 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  if ((param_1->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStoreId.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0xabf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_2->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InSectionName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0xac0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_3->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InKeyName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0xac1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pTVar8 = &::FString::FString(&local_468,L"Software")->Data;
  iVar4 = (param_1->Data).ArrayNum;
  iVar11 = 2;
  iVar10 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar10 = 0;
  }
  if ((pTVar8->ArrayNum != 0) || (iVar4 = 2, iVar10 == -1)) {
    iVar4 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_478,pTVar8,iVar10 + iVar4);
  ::FString::PathAppend
            ((FString *)&local_478,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar10);
  iVar4 = (param_2->Data).ArrayNum;
  iVar10 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar10 = 0;
  }
  if ((local_478.ArrayNum != 0) || (iVar10 == -1)) {
    iVar11 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_498,&local_478,iVar10 + iVar11);
  ::FString::PathAppend
            ((FString *)&local_498,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar10);
  if (local_478.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.AllocatorInstance.Data);
  }
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  pTVar8 = &::FString::Replace((FString *)&local_498,&local_458,L"/",L"\\",IgnoreCase)->Data;
  if (&local_498 != pTVar8) {
    if (local_498.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.AllocatorInstance.Data);
    }
    local_498.AllocatorInstance.Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->AllocatorInstance)->
         AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->AllocatorInstance)->AllocatorInstance)
    .Data = (FScriptContainerElement *)0x0;
    local_498.ArrayNum = pTVar8->ArrayNum;
    local_498.ArrayMax = pTVar8->ArrayMax;
    pTVar8->ArrayNum = 0;
    pTVar8->ArrayMax = 0;
  }
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_498.ArrayNum != 0) {
    FVar9.Data = local_498.AllocatorInstance.Data;
  }
  LVar5 = RegOpenKeyExW((HKEY)0xffffffff80000001,(LPCWSTR)FVar9.Data,0,0x2001f,&local_488);
  if (LVar5 == 0) {
    if ((param_3->Data).ArrayNum == 0) {
      lpValueName = L"";
    }
    else {
      lpValueName = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    LVar5 = RegDeleteValueW(local_488,lpValueName);
    local_480[0] = 0x100;
    LVar6 = RegEnumKeyExW(local_488,0,local_448,local_480,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                          (PFILETIME)0x0);
    local_480[1] = 0x100;
    LVar7 = RegEnumValueW(local_488,0,local_248,local_480 + 1,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,
                          (LPDWORD)0x0);
    RegCloseKey(local_488);
    if ((LVar6 != 0) && (LVar7 != 0)) {
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_498.ArrayNum != 0) {
        FVar9.Data = local_498.AllocatorInstance.Data;
      }
      RegDeleteKeyW((HKEY)0xffffffff80000001,(LPCWSTR)FVar9.Data);
    }
  }
  if (local_498.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.AllocatorInstance.Data);
  }
  return LVar5 == 0;
}

// GetBatteryLevel @ 141aa7910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FWindowsPlatformMisc::GetBatteryLevel(void)

{
  BOOL BVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  _SYSTEM_POWER_STATUS local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  BVar1 = GetSystemPowerStatus(&local_28);
  if (((BVar1 == 0) ||
      ((((local_28._0_2_ & 0xf00) == 0 || ((short)local_28._0_2_ < 0)) &&
       (local_28.BatteryFlag != '\0')))) ||
     (uVar2 = (uint)local_28.BatteryLifePercent, local_28.BatteryLifePercent == 0xff)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// GetBlockingIOStats @ 141aa7980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWindowsPlatformMisc::GetBlockingIOStats(FProcessIOStats *param_1,EInputOutputFlags param_2)

{
  BOOL BVar1;
  HANDLE hProcess;
  undefined1 auStack_68 [32];
  IO_COUNTERS local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.ReadOperationCount = 0;
  local_48.WriteOperationCount = 0;
  local_48.OtherOperationCount = 0;
  local_48.ReadTransferCount = 0;
  local_48.WriteTransferCount = 0;
  local_48.OtherTransferCount = 0;
  hProcess = GetCurrentProcess();
  BVar1 = GetProcessIoCounters(hProcess,&local_48);
  if (BVar1 != 0) {
    param_1->BlockingInput = local_48.ReadOperationCount;
    param_1->BlockingOutput = local_48.WriteOperationCount;
    param_1->BlockingOther = local_48.OtherOperationCount;
    param_1->InputBytes = local_48.ReadTransferCount;
    param_1->OutputBytes = local_48.WriteTransferCount;
    param_1->OtherBytes = local_48.OtherTransferCount;
    return true;
  }
  return false;
}

// GetCPUBrand @ 141aa7a50

FString * __cdecl FWindowsPlatformMisc::GetCPUBrand(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,FCPUIDQueriedData::CPUIDStaticCache.Brand);
  return __return_storage_ptr__;
}

// GetCPUInfo @ 141aa7a80

uint __cdecl FWindowsPlatformMisc::GetCPUInfo(void)

{
  return FCPUIDQueriedData::CPUIDStaticCache.CPUInfo;
}

// GetCPUMicrocodeRevision @ 141aa7a90

uint __cdecl FWindowsPlatformMisc::GetCPUMicrocodeRevision(void)

{
  LSTATUS LVar1;
  uint uVar2;
  DWORD local_res8 [2];
  DWORD local_res10 [2];
  HKEY local_res18;
  uint local_res20;
  uint local_res24;
  
  uVar2 = 0;
  local_res18 = (HKEY)0x0;
  LVar1 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                        L"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,0x20019,&local_res18
                       );
  if (LVar1 != 0) {
    return 0;
  }
  local_res8[0] = 0;
  local_res10[0] = 0;
  LVar1 = RegQueryValueExW(local_res18,L"Update Revision",(LPDWORD)0x0,local_res10,(LPBYTE)0x0,
                           local_res8);
  if (((LVar1 == 0) && (local_res10[0] == 3)) && (local_res8[0] < 9)) {
    LVar1 = RegQueryValueExW(local_res18,L"Update Revision",(LPDWORD)0x0,(LPDWORD)0x0,
                             (LPBYTE)&local_res20,local_res8);
    uVar2 = 0;
    if (LVar1 == 0) {
      if (local_res8[0] == 8) {
        RegCloseKey(local_res18);
        return local_res24;
      }
      uVar2 = 0;
      if (local_res8[0] == 4) {
        uVar2 = local_res20;
      }
    }
  }
  RegCloseKey(local_res18);
  return uVar2;
}

// GetCPUModelID @ 141aa7b90

uint __cdecl FWindowsPlatformMisc::GetCPUModelID(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FCPUIDQueriedData::CPUIDStaticCache.CPUInfo >> 4 & 0xf;
  uVar1 = FCPUIDQueriedData::CPUIDStaticCache.CPUInfo >> 8 & 0xf;
  if (((uVar1 == 6) || (uVar1 == 0xf)) &&
     (uVar2 = uVar2 + (FCPUIDQueriedData::CPUIDStaticCache.CPUInfo >> 0x10 & 0xf) * 0x10,
     uVar1 == 0xf)) {
    uVar1 = (FCPUIDQueriedData::CPUIDStaticCache.CPUInfo >> 0x14 & 0xff) + 0xf;
  }
  return (uVar1 << 8 | uVar2) << 4 | FCPUIDQueriedData::CPUIDStaticCache.CPUInfo & 0xf;
}

// GetCPUVendor @ 141aa7bf0

FString * __cdecl FWindowsPlatformMisc::GetCPUVendor(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,FCPUIDQueriedData::CPUIDStaticCache.Vendor);
  return __return_storage_ptr__;
}

// GetCacheLineSize @ 141aa7c20

int __cdecl FWindowsPlatformMisc::GetCacheLineSize(void)

{
  return FCPUIDQueriedData::CPUIDStaticCache.CacheLineSize;
}

// GetConvertibleLaptopMode @ 141aa7f50

EConvertibleLaptopMode __cdecl FWindowsPlatformMisc::GetConvertibleLaptopMode(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = VerifyWindowsVersion(6,2,0);
  if (!bVar1) {
    return NotSupported;
  }
  iVar2 = GetSystemMetrics(0x2003);
  return Tablet - (iVar2 != 0);
}

// GetCrashHandlingType @ 141aa7f90

ECrashHandlingType __cdecl FWindowsPlatformMisc::GetCrashHandlingType(void)

{
  return GCrashHandlingType;
}

// GetDefaultLanguage @ 141aa81f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FWindowsPlatformMisc::GetDefaultLanguage(FString *__return_storage_ptr__)

{
  ULONG UVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  undefined1 auStackY_118 [32];
  ULONG local_e8 [2];
  ForAnyElementType local_e0;
  int local_d8 [4];
  WCHAR local_c8 [88];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  bVar2 = VerifyWindowsVersion(6,2,0);
  if (bVar2) {
    local_e8[1] = 0;
    local_e8[0] = 0;
    BVar3 = GetUserPreferredUILanguages(8,local_e8 + 1,(PZZWSTR)0x0,local_e8);
    UVar1 = local_e8[0];
    if (BVar3 != 0) {
      local_e0.Data = (FScriptContainerElement *)0x0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      if ((int)local_e8[0] < 1) {
        if ((int)local_e8[0] < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_e8[0]);
        }
      }
      else {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_e8[0],&local_e0,local_d8,local_d8 + 1);
        memset(local_e0.Data + (longlong)iVar4 * 2,0,(longlong)(int)UVar1 * 2);
      }
      BVar3 = GetUserPreferredUILanguages(8,local_e8 + 1,(PZZWSTR)local_e0.Data,local_e8);
      if (BVar3 != 0) {
        ::FString::FString(__return_storage_ptr__,(wchar_t *)local_e0.Data);
        if (local_e0.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_e0.Data);
        return __return_storage_ptr__;
      }
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
    }
  }
  iVar4 = GetUserDefaultLocaleName(local_c8,0x55);
  if (iVar4 == 0) {
    FGenericPlatformMisc::GetDefaultLocale(__return_storage_ptr__);
  }
  else {
    ::FString::FString(__return_storage_ptr__,local_c8);
  }
  return __return_storage_ptr__;
}

// GetDefaultLocale @ 141aa8370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FWindowsPlatformMisc::GetDefaultLocale(FString *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  WCHAR local_c8 [88];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar1 = GetUserDefaultLocaleName(local_c8,0x55);
  if (iVar1 == 0) {
    FGenericPlatformMisc::GetDefaultLocale(__return_storage_ptr__);
  }
  else {
    ::FString::FString(__return_storage_ptr__,local_c8);
  }
  return __return_storage_ptr__;
}

// GetDefaultPathSeparator @ 141aa83e0

wchar_t * __cdecl FWindowsPlatformMisc::GetDefaultPathSeparator(void)

{
  return L"\\";
}

// GetDiskTotalAndFreeSpace @ 141aa8400

bool __cdecl
FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(FString *param_1,ulong64 *param_2,ulong64 *param_3)

{
  BOOL BVar1;
  FString *this;
  ForAnyElementType lpDirectoryName;
  FString local_28;
  FString local_18;
  
  this = FPaths::ConvertRelativePathToFull(&local_18,param_1);
  ::FString::Replace(this,&local_28,L"/",L"\\",IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  lpDirectoryName.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    lpDirectoryName.Data = local_28.Data.AllocatorInstance.Data;
  }
  BVar1 = GetDiskFreeSpaceExW((LPCWSTR)lpDirectoryName.Data,(PULARGE_INTEGER)0x0,
                              (PULARGE_INTEGER)param_2,(PULARGE_INTEGER)param_3);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return BVar1 != 0;
}

// GetDriveStats @ 141aa8df0

FPlatformDriveStats * __cdecl FWindowsPlatformMisc::GetDriveStats(wchar_t param_1)

{
  int iVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  iVar1 = StorageDevices.ArrayNum;
  pFVar4 = StorageDevices.AllocatorInstance.Data + (longlong)iVar1 * 0x38;
  uVar2 = StorageDevices._8_8_;
  FVar3.Data = StorageDevices.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar2 != iVar1) {
      `TCheckedPointerIterator<`anonymous_namespace'::FStorageDevice,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      uVar2 = StorageDevices._8_8_;
    }
    if (FVar3.Data == pFVar4) break;
    if (*(wchar_t *)(FVar3.Data + 0x18) == param_1) {
      return (FPlatformDriveStats *)(FVar3.Data + 0x18);
    }
    FVar3.Data = FVar3.Data + 0x38;
  }
  return (FPlatformDriveStats *)0x0;
}

// GetEnvironmentVariable @ 141aa8e70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
FWindowsPlatformMisc::GetEnvironmentVariable(FString *__return_storage_ptr__,wchar_t *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  DWORD DVar6;
  FString *pFVar7;
  uint uVar8;
  
  uVar8 = 0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayNum;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  DVar6 = 0x80;
  do {
    if ((int)uVar8 < (int)DVar6) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,DVar6 - uVar8,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    }
    else {
      if ((int)DVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)DVar6);
      }
      if ((int)DVar6 < (int)uVar8) {
        uVar8 = uVar8 - DVar6;
        if (((int)(uVar8 | DVar6) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar3)();
          return pFVar7;
        }
        if (uVar8 != 0) {
          _Dst = (__return_storage_ptr__->Data).AllocatorInstance.Data + (longlong)(int)DVar6 * 2;
          iVar5 = (*piVar1 - uVar8) - DVar6;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 2,(longlong)iVar5 * 2);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(ForAnyElementType *)__return_storage_ptr__,*piVar1,piVar2);
        }
      }
    }
    DVar6 = GetEnvironmentVariableW
                      (param_1,(LPWSTR)(__return_storage_ptr__->Data).AllocatorInstance.Data,*piVar1
                      );
    if (DVar6 == 0) {
      ::FString::Reset(__return_storage_ptr__,0);
      return __return_storage_ptr__;
    }
    uVar8 = *piVar1;
  } while (uVar8 <= DVar6);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::SetNum
            (&__return_storage_ptr__->Data,DVar6 + 1,Default);
  return __return_storage_ptr__;
}

// GetEnvironmentVariable @ 141aa8fe0

void __cdecl
FWindowsPlatformMisc::GetEnvironmentVariable(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  DWORD DVar1;
  
  DVar1 = GetEnvironmentVariableW(param_1,param_2,param_3);
  if (DVar1 == 0) {
    *param_2 = L'\0';
  }
  return;
}

// GetExternalAppMaxPathLength @ 141aa90c0

int __cdecl FWindowsPlatformMisc::GetExternalAppMaxPathLength(void)

{
  return 0x104;
}

// GetFeatureBits_X86 @ 141aa90d0

/* WARNING: Removing unreachable block (ram,0x000141aa9195) */
/* WARNING: Removing unreachable block (ram,0x000141aa9101) */
/* WARNING: Removing unreachable block (ram,0x000141aa90e9) */

uint __cdecl FWindowsPlatformMisc::GetFeatureBits_X86(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  if (CachedX86FeatureBits == (atomic<unsigned_int>)0x0) {
    puVar1 = (uint *)cpuid_basic_info(0);
    uVar7 = 0;
    lVar2 = cpuid_Version_info(1);
    uVar5 = *(uint *)(lVar2 + 0xc);
    uVar6 = ((*(uint *)(lVar2 + 8) >> 8 & 0x40000 | uVar5 & 0x100000) >> 10 | uVar5 & 0x200) >> 6;
    if ((uVar5 >> 0x1b & 1) != 0) {
      uVar4 = xinuse(0);
      uVar7 = in_XCR0 & (uint)uVar4;
    }
    if ((uVar7 & 6) == 6) {
      uVar3 = uVar6 | 0x20;
      if ((uVar5 & 0x10000000) == 0) {
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
      if ((uVar5 & 0x20000000) != 0) {
        uVar6 = uVar6 | 0x200;
      }
    }
    if (6 < *puVar1) {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar3 = *(uint *)(lVar2 + 4);
      if ((((uVar7 & 6) == 6) && ((uVar5 & 0x10000000) != 0)) && ((uVar5 & 0x800000) != 0)) {
        uVar5 = uVar3 >> 1 & 0x80 | (uVar3 & 8) << 3 | uVar6;
        uVar6 = uVar5 | 0x100;
        if ((uVar3 & 0x128) != 0x128) {
          uVar6 = uVar5;
        }
        if ((uVar7 & 0xe6) == 0xe6) {
          uVar5 = uVar6 | 0x400;
          if ((uVar3 & 0xc0030000) != 0xc0030000) {
            uVar5 = uVar6;
          }
          uVar6 = uVar5;
          if ((*(uint *)(lVar2 + 0xc) & 0x40) != 0) {
            uVar6 = uVar6 | 0x800;
          }
        }
      }
    }
    CachedX86FeatureBits = (atomic<unsigned_int>)(uVar6 | 1);
  }
  return (uint)CachedX86FeatureBits;
}

// GetFileManagerName @ 141aa9230

FText * __cdecl FWindowsPlatformMisc::GetFileManagerName(FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"WindowsPlatform",L"FileManagerName",L"Explorer");
  return __return_storage_ptr__;
}

// GetFileVersion @ 141aa9290

ulong64 __cdecl FWindowsPlatformMisc::GetFileVersion(FString *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DWORD dwLen;
  BOOL BVar3;
  wchar_t *lptstrFilename;
  wchar_t *lptstrFilename_00;
  uint local_res8 [2];
  LPVOID local_res10;
  ForAnyElementType local_18;
  int local_10 [2];
  
  lptstrFilename_00 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    lptstrFilename = L"";
  }
  else {
    lptstrFilename = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  dwLen = GetFileVersionInfoSizeW(lptstrFilename,(LPDWORD)0x0);
  if (dwLen != 0) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10[0] = 0;
    local_10[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,dwLen,&local_18,local_10,local_10 + 1);
    if ((param_1->Data).ArrayNum != 0) {
      lptstrFilename_00 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    BVar3 = GetFileVersionInfoW(lptstrFilename_00,0,dwLen,local_18.Data);
    if (BVar3 != 0) {
      BVar3 = VerQueryValueW(local_18.Data,L"\\",&local_res10,local_res8);
      if (BVar3 != 0) {
        uVar1 = *(undefined4 *)((longlong)local_res10 + 8);
        uVar2 = *(undefined4 *)((longlong)local_res10 + 0xc);
        if (local_18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data);
        }
        return CONCAT44(uVar1,uVar2);
      }
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return 0;
}

// GetGPUDriverInfo @ 141aa9a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FGPUDriverInfo * __cdecl
FWindowsPlatformMisc::GetGPUDriverInfo
          (FGPUDriverInfo *__return_storage_ptr__,FString *param_1,bool param_2)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  BOOL BVar7;
  int iVar8;
  FGPUDriverInfo *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  FStaticBasicLogRecord *pFVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint iDevNum;
  uint uVar18;
  undefined1 auStackY_758 [32];
  FGPUDriverInfo local_708;
  FString local_698;
  FString local_688;
  uint local_678;
  FString local_670;
  undefined4 local_660 [2];
  FGPUDriverInfo local_658;
  FGPUDriverInfo local_5e8;
  FString local_578;
  FString local_568;
  FGPUDriverInfo local_558;
  FGPUDriverInfo local_4e8;
  FString local_478;
  FGPUDriverInfo *local_468;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  _DISPLAY_DEVICEW local_398;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_758;
  uVar18 = 0;
  local_468 = __return_storage_ptr__;
  if (param_2) {
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    local_660[0] = 0;
    EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,MonitorEnumProc,(LPARAM)local_660);
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
  }
  local_708.VendorId = 0;
  local_708.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.DeviceDescription.Data.ArrayNum = 0;
  local_708.DeviceDescription.Data.ArrayMax = 0;
  local_708.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.ProviderName.Data.ArrayNum = 0;
  local_708.ProviderName.Data.ArrayMax = 0;
  local_708.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.InternalDriverVersion.Data.ArrayNum = 0;
  local_708.InternalDriverVersion.Data.ArrayMax = 0;
  local_708.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.UserDriverVersion.Data.ArrayNum = 0;
  local_708.UserDriverVersion.Data.ArrayMax = 0;
  local_708.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.DriverDate.Data.ArrayNum = 0;
  local_708.DriverDate.Data.ArrayMax = 0;
  local_708.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.RHIName.Data.ArrayNum = 0;
  local_708.RHIName.Data.ArrayMax = 0;
  ::FString::operator=(&local_708.InternalDriverVersion,L"Unknown");
  ::FString::operator=(&local_708.UserDriverVersion,L"Unknown");
  ::FString::operator=(&local_708.DriverDate,L"Unknown");
  pTVar2 = CVarDriverDetectionMethod.Ref;
  local_698.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_698.Data.ArrayNum = 0;
  local_698.Data.ArrayMax = 0;
  bVar5 = IsInParallelGameThread();
  if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FGPUDriverInfo *)(*pcVar1)();
    return pFVar9;
  }
  iVar6 = pTVar2->ShadowedValue[0];
  iVar16 = 0;
  if (iVar6 == 5) {
    if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    local_558.VendorId = 0;
    local_558.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_558.DeviceDescription.Data.ArrayNum = 0;
    local_558.DeviceDescription.Data.ArrayMax = 0;
    local_558.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_558.ProviderName.Data.ArrayNum = 0;
    local_558.ProviderName.Data.ArrayMax = 0;
    local_558.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_558.InternalDriverVersion.Data.ArrayNum = 0;
    local_558.InternalDriverVersion.Data.ArrayMax = 0;
    local_558.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_558.UserDriverVersion.Data.ArrayNum = 0;
    local_558.UserDriverVersion.Data.ArrayMax = 0;
    local_558.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_558.DriverDate.Data.ArrayNum = 0;
    local_558.DriverDate.Data.ArrayMax = 0;
    local_558.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_558.RHIName.Data.ArrayNum = 0;
    local_558.RHIName.Data.ArrayMax = 0;
    GetVideoDriverDetailsFromSetup(param_1,param_2,&local_558);
    if ((1 < local_558.DeviceDescription.Data.ArrayNum) && (local_558.VendorId != 0)) {
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_558.InternalDriverVersion.Data.ArrayNum != 0) {
        FVar12.Data = local_558.InternalDriverVersion.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"Unknown");
      if (iVar6 != 0) {
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_558.InternalDriverVersion.Data.ArrayNum != 0) {
          FVar12.Data = local_558.InternalDriverVersion.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"");
        if (iVar6 != 0) {
          iVar6 = (param_1->Data).ArrayNum;
          if (local_558.DeviceDescription.Data.ArrayNum == iVar6) {
            if (1 < local_558.DeviceDescription.Data.ArrayNum) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_558.DeviceDescription.Data.AllocatorInstance.Data,
                                 (wchar_t *)(param_1->Data).AllocatorInstance.Data);
              bVar5 = iVar6 == 0;
              goto LAB_141aa9cd0;
            }
          }
          else {
            bVar5 = local_558.DeviceDescription.Data.ArrayNum + iVar6 == 1;
LAB_141aa9cd0:
            if (!bVar5) goto LAB_141aa9d7e;
          }
          FGPUDriverInfo::FGPUDriverInfo(__return_storage_ptr__,&local_558);
          if (local_558.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.RHIName.Data.AllocatorInstance.Data);
          }
          if (local_558.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.DriverDate.Data.AllocatorInstance.Data);
          }
          if (local_558.UserDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.UserDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_558.InternalDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.InternalDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_558.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_558.ProviderName.Data.AllocatorInstance.Data);
          }
          if (local_558.DeviceDescription.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_558.DeviceDescription.Data.AllocatorInstance.Data);
          }
          if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_698.Data.AllocatorInstance.Data);
          }
          if (local_708.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_708.RHIName.Data.AllocatorInstance.Data);
          }
          goto joined_r0x000141aaad74;
        }
      }
    }
LAB_141aa9d7e:
    if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    iVar6 = 4;
    if (local_558.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.RHIName.Data.AllocatorInstance.Data);
    }
    if (local_558.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.DriverDate.Data.AllocatorInstance.Data);
    }
    if (local_558.UserDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.UserDriverVersion.Data.AllocatorInstance.Data);
    }
    if (local_558.InternalDriverVersion.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.InternalDriverVersion.Data.AllocatorInstance.Data);
    }
    if (local_558.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.ProviderName.Data.AllocatorInstance.Data);
    }
    if (local_558.DeviceDescription.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
    goto LAB_141aa9f22;
    FMemory::Free(local_558.DeviceDescription.Data.AllocatorInstance.Data);
LAB_141aa9e23:
    iDevNum = uVar18;
    if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    do {
      memset(local_398.DeviceName,0,0x344);
      local_398.cb = 0x348;
      BVar7 = EnumDisplayDevicesW((LPCWSTR)0x0,iDevNum,&local_398,1);
      if (BVar7 == 0) break;
      if ((4 < (byte)LogWindows._0_1_) && (param_2)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
      if ((iVar6 == 3) && ((local_398.StateFlags & 4) == 0)) {
        ::FString::AppendChars(&local_698,L"JumpOverNonPrimary ",0x13);
      }
      else {
        ::FString::FString(&local_670,local_398.DeviceKey);
        iVar8 = local_670.Data.ArrayNum + -1;
        if (local_670.Data.ArrayNum == 0) {
          iVar8 = iVar16;
        }
        if (0x12 < iVar8) {
          iVar8 = 0x12;
        }
        iVar17 = iVar16;
        if (0 < iVar8) {
          iVar17 = iVar8;
        }
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_670.Data.ArrayNum != 0) {
          FVar12.Data = local_670.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_430,(wchar_t *)FVar12.Data,iVar17);
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_430.Data.ArrayNum != 0) {
          FVar12.Data = local_430.Data.AllocatorInstance.Data;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"\\Registry\\Machine\\");
        if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_430.Data.AllocatorInstance.Data);
        }
        if (iVar8 == 0) {
          pFVar10 = ::FString::RightChop(&local_670,&local_3b0,0x12);
          pFVar11 = ::FString::FString(&local_3c0,L"\\HKEY_LOCAL_MACHINE\\");
          ::FString::ConcatFF(&local_568,pFVar11,pFVar10);
          if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_670.Data.AllocatorInstance.Data);
          }
          local_670.Data.ArrayNum = local_568.Data.ArrayNum;
          local_670.Data.AllocatorInstance.Data = local_568.Data.AllocatorInstance.Data;
          local_670.Data.ArrayMax = local_568.Data.ArrayMax;
          local_568.Data.ArrayNum = 0;
          local_568.Data.ArrayMax = 0;
          local_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
        }
        iVar8 = local_670.Data.ArrayNum + -1;
        if (local_670.Data.ArrayNum == 0) {
          iVar8 = iVar16;
        }
        if (0x14 < iVar8) {
          iVar8 = 0x14;
        }
        iVar17 = iVar16;
        if (0 < iVar8) {
          iVar17 = iVar8;
        }
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_670.Data.ArrayNum != 0) {
          FVar12.Data = local_670.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_420,(wchar_t *)FVar12.Data,iVar17);
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_420.Data.ArrayNum != 0) {
          FVar12.Data = local_420.Data.AllocatorInstance.Data;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"\\HKEY_LOCAL_MACHINE\\");
        if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_420.Data.AllocatorInstance.Data);
        }
        if (iVar8 == 0) {
          ::FString::RightChop(&local_670,&local_3f0,0x14);
          local_5e8.VendorId = 0;
          local_5e8.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5e8.DeviceDescription.Data.ArrayNum = 0;
          local_5e8.DeviceDescription.Data.ArrayMax = 0;
          local_5e8.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5e8.ProviderName.Data.ArrayNum = 0;
          local_5e8.ProviderName.Data.ArrayMax = 0;
          local_5e8.InternalDriverVersion.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_5e8.InternalDriverVersion.Data.ArrayNum = 0;
          local_5e8.InternalDriverVersion.Data.ArrayMax = 0;
          local_5e8.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5e8.UserDriverVersion.Data.ArrayNum = 0;
          local_5e8.UserDriverVersion.Data.ArrayMax = 0;
          local_5e8.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5e8.DriverDate.Data.ArrayNum = 0;
          local_5e8.DriverDate.Data.ArrayMax = 0;
          local_5e8.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5e8.RHIName.Data.ArrayNum = 0;
          local_5e8.RHIName.Data.ArrayMax = 0;
          GetVideoDriverDetails(&local_3f0,&local_5e8);
          if ((local_5e8.DeviceDescription.Data.ArrayNum < 2) || (local_5e8.VendorId == 0)) {
LAB_141aaa88c:
            ::FString::AppendChars(&local_698,L"GetVideoDriverDetailsInvalid ",0x1d);
          }
          else {
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_5e8.InternalDriverVersion.Data.ArrayNum != 0) {
              FVar12.Data = local_5e8.InternalDriverVersion.Data.AllocatorInstance.Data;
            }
            iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"Unknown");
            if (iVar8 == 0) goto LAB_141aaa88c;
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_5e8.InternalDriverVersion.Data.ArrayNum != 0) {
              FVar12.Data = local_5e8.InternalDriverVersion.Data.AllocatorInstance.Data;
            }
            iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"");
            if (iVar8 == 0) goto LAB_141aaa88c;
          }
          iVar8 = local_5e8.DeviceDescription.Data.ArrayNum;
          if (iVar6 == 3) {
LAB_141aaa8fa:
            FVar12.Data = local_5e8.DeviceDescription.Data.AllocatorInstance.Data;
            if (uVar18 == 0) {
              local_708.VendorId = local_5e8.VendorId;
              local_708.DeviceDescription.Data.ArrayNum = iVar8;
              if ((iVar8 == 0) && (local_708.DeviceDescription.Data.ArrayMax == 0)) {
                local_708.DeviceDescription.Data.ArrayNum = 0;
                local_708.DeviceDescription.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar8,local_708.DeviceDescription.Data.ArrayMax,
                           (ForAnyElementType *)&local_708.DeviceDescription,iVar8,
                           &local_708.DeviceDescription.Data.ArrayMax);
                if (iVar8 != 0) {
                  memcpy(local_708.DeviceDescription.Data.AllocatorInstance.Data,FVar12.Data,
                         (longlong)iVar8 * 2);
                }
              }
              FVar12.Data = local_5e8.ProviderName.Data.AllocatorInstance.Data;
              iVar8 = local_5e8.ProviderName.Data.ArrayNum;
              lVar15 = (longlong)local_5e8.ProviderName.Data.ArrayNum;
              local_708.ProviderName.Data.ArrayNum = local_5e8.ProviderName.Data.ArrayNum;
              if ((local_5e8.ProviderName.Data.ArrayNum == 0) &&
                 (local_708.ProviderName.Data.ArrayMax == 0)) {
                local_708.ProviderName.Data._8_8_ = local_5e8.ProviderName.Data._8_8_ & 0xffffffff;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_5e8.ProviderName.Data.ArrayNum,
                           local_708.ProviderName.Data.ArrayMax,
                           (ForAnyElementType *)&local_708.ProviderName,
                           local_5e8.ProviderName.Data.ArrayNum,
                           &local_708.ProviderName.Data.ArrayMax);
                if (iVar8 != 0) {
                  memcpy(local_708.ProviderName.Data.AllocatorInstance.Data,FVar12.Data,lVar15 * 2);
                }
              }
              FVar12.Data = local_5e8.InternalDriverVersion.Data.AllocatorInstance.Data;
              iVar8 = local_5e8.InternalDriverVersion.Data.ArrayNum;
              lVar15 = (longlong)local_5e8.InternalDriverVersion.Data.ArrayNum;
              local_708.InternalDriverVersion.Data.ArrayNum =
                   local_5e8.InternalDriverVersion.Data.ArrayNum;
              if ((local_5e8.InternalDriverVersion.Data.ArrayNum == 0) &&
                 (local_708.InternalDriverVersion.Data.ArrayMax == 0)) {
                local_708.InternalDriverVersion.Data._8_8_ =
                     local_5e8.InternalDriverVersion.Data._8_8_ & 0xffffffff;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_5e8.InternalDriverVersion.Data.ArrayNum,
                           local_708.InternalDriverVersion.Data.ArrayMax,
                           (ForAnyElementType *)&local_708.InternalDriverVersion,
                           local_5e8.InternalDriverVersion.Data.ArrayNum,
                           &local_708.InternalDriverVersion.Data.ArrayMax);
                if (iVar8 != 0) {
                  memcpy(local_708.InternalDriverVersion.Data.AllocatorInstance.Data,FVar12.Data,
                         lVar15 * 2);
                }
              }
              FVar12.Data = local_5e8.UserDriverVersion.Data.AllocatorInstance.Data;
              iVar8 = local_5e8.UserDriverVersion.Data.ArrayNum;
              lVar15 = (longlong)local_5e8.UserDriverVersion.Data.ArrayNum;
              local_708.UserDriverVersion.Data.ArrayNum = local_5e8.UserDriverVersion.Data.ArrayNum;
              if ((local_5e8.UserDriverVersion.Data.ArrayNum == 0) &&
                 (local_708.UserDriverVersion.Data.ArrayMax == 0)) {
                local_708.UserDriverVersion.Data._8_8_ =
                     local_5e8.UserDriverVersion.Data._8_8_ & 0xffffffff;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_5e8.UserDriverVersion.Data.ArrayNum,
                           local_708.UserDriverVersion.Data.ArrayMax,
                           (ForAnyElementType *)&local_708.UserDriverVersion,
                           local_5e8.UserDriverVersion.Data.ArrayNum,
                           &local_708.UserDriverVersion.Data.ArrayMax);
                if (iVar8 != 0) {
                  memcpy(local_708.UserDriverVersion.Data.AllocatorInstance.Data,FVar12.Data,
                         lVar15 * 2);
                }
              }
              FVar12.Data = local_5e8.DriverDate.Data.AllocatorInstance.Data;
              iVar8 = local_5e8.DriverDate.Data.ArrayNum;
              lVar15 = (longlong)local_5e8.DriverDate.Data.ArrayNum;
              local_708.DriverDate.Data.ArrayNum = local_5e8.DriverDate.Data.ArrayNum;
              if ((local_5e8.DriverDate.Data.ArrayNum == 0) &&
                 (local_708.DriverDate.Data.ArrayMax == 0)) {
                local_708.DriverDate.Data._8_8_ = local_5e8.DriverDate.Data._8_8_ & 0xffffffff;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_5e8.DriverDate.Data.ArrayNum,local_708.DriverDate.Data.ArrayMax
                           ,(ForAnyElementType *)&local_708.DriverDate,
                           local_5e8.DriverDate.Data.ArrayNum,&local_708.DriverDate.Data.ArrayMax);
                if (iVar8 != 0) {
                  memcpy(local_708.DriverDate.Data.AllocatorInstance.Data,FVar12.Data,lVar15 * 2);
                }
              }
              FVar12.Data = local_5e8.RHIName.Data.AllocatorInstance.Data;
              iVar8 = local_5e8.RHIName.Data.ArrayNum;
              lVar15 = (longlong)local_5e8.RHIName.Data.ArrayNum;
              local_708.RHIName.Data.ArrayNum = local_5e8.RHIName.Data.ArrayNum;
              if ((local_5e8.RHIName.Data.ArrayNum == 0) && (local_708.RHIName.Data.ArrayMax == 0))
              {
                local_708.RHIName.Data._8_8_ = local_5e8.RHIName.Data._8_8_ & 0xffffffff;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_5e8.RHIName.Data.ArrayNum,local_708.RHIName.Data.ArrayMax,
                           (ForAnyElementType *)&local_708.RHIName,local_5e8.RHIName.Data.ArrayNum,
                           &local_708.RHIName.Data.ArrayMax);
                if (iVar8 != 0) {
                  memcpy(local_708.RHIName.Data.AllocatorInstance.Data,FVar12.Data,lVar15 * 2);
                }
              }
            }
            uVar18 = uVar18 + 1;
          }
          else {
            iVar17 = (param_1->Data).ArrayNum;
            if (local_5e8.DeviceDescription.Data.ArrayNum == iVar17) {
              if (local_5e8.DeviceDescription.Data.ArrayNum < 2) goto LAB_141aaa8fa;
              iVar8 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_5e8.DeviceDescription.Data.AllocatorInstance.Data,
                                 (wchar_t *)(param_1->Data).AllocatorInstance.Data);
              bVar5 = iVar8 == 0;
            }
            else {
              bVar5 = iVar17 + local_5e8.DeviceDescription.Data.ArrayNum == 1;
            }
            iVar8 = local_5e8.DeviceDescription.Data.ArrayNum;
            if (bVar5) goto LAB_141aaa8fa;
            ::FString::AppendChars(&local_698,L"PrimaryIsNotTheChoosenAdapter ",0x1e);
          }
          if (local_5e8.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5e8.RHIName.Data.AllocatorInstance.Data);
          }
          if (local_5e8.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5e8.DriverDate.Data.AllocatorInstance.Data);
          }
          if (local_5e8.UserDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5e8.UserDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_5e8.InternalDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5e8.InternalDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_5e8.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_5e8.ProviderName.Data.AllocatorInstance.Data);
          }
          if (local_5e8.DeviceDescription.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_5e8.DeviceDescription.Data.AllocatorInstance.Data);
          }
          if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
          }
        }
        else {
          ::FString::AppendChars(&local_698,L"PrimaryDriverLocationFailed ",0x1c);
        }
        if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_670.Data.AllocatorInstance.Data);
        }
      }
      iDevNum = iDevNum + 1;
    } while (iDevNum < 0x100);
    __return_storage_ptr__ = local_468;
    local_678 = uVar18;
    if (uVar18 != 1) {
      ::FString::PrintfImpl(&local_410,L"FoundDriverCount:%d ");
      iVar6 = local_410.Data.ArrayNum + -1;
      if (local_410.Data.ArrayNum == 0) {
        iVar6 = iVar16;
      }
      ::FString::AppendChars(&local_698,(wchar_t *)local_410.Data.AllocatorInstance.Data,iVar6);
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
    }
    if (((1 < local_698.Data.ArrayNum) && (4 < (byte)LogWindows._0_1_)) && (param_2)) {
      pFVar13 = &::LOG_Static;
LAB_141aaac70:
      UE::Logging::Private::BasicLog<5>(pFVar13,(FLogCategoryBase *)&LogWindows);
    }
  }
  else {
LAB_141aa9f22:
    if ((iVar6 == 3) || (iVar6 == 4)) goto LAB_141aa9e23;
    if (iVar6 == 0) {
      do {
        ::FString::PrintfImpl
                  (&local_478,
                   L"SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\%04d"
                  );
        local_658.VendorId = 0;
        local_658.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_658.DeviceDescription.Data.ArrayNum = 0;
        local_658.DeviceDescription.Data.ArrayMax = 0;
        local_658.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_658.ProviderName.Data.ArrayNum = 0;
        local_658.ProviderName.Data.ArrayMax = 0;
        local_658.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        local_658.InternalDriverVersion.Data.ArrayNum = 0;
        local_658.InternalDriverVersion.Data.ArrayMax = 0;
        local_658.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_658.UserDriverVersion.Data.ArrayNum = 0;
        local_658.UserDriverVersion.Data.ArrayMax = 0;
        local_658.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_658.DriverDate.Data.ArrayNum = 0;
        local_658.DriverDate.Data.ArrayMax = 0;
        local_658.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_658.RHIName.Data.ArrayNum = 0;
        local_658.RHIName.Data.ArrayMax = 0;
        GetVideoDriverDetails(&local_478,&local_658);
        if ((local_658.DeviceDescription.Data.ArrayNum < 2) || (local_658.VendorId == 0)) {
LAB_141aaa155:
          ::FString::AppendChars(&local_698,L"GetVideoDriverDetailsInvalid ",0x1d);
          if (local_658.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.RHIName.Data.AllocatorInstance.Data);
          }
          if (local_658.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.DriverDate.Data.AllocatorInstance.Data);
          }
          if (local_658.UserDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.UserDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_658.InternalDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.InternalDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_658.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_658.ProviderName.Data.AllocatorInstance.Data);
          }
          if (local_658.DeviceDescription.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.DeviceDescription.Data.AllocatorInstance.Data);
          }
          if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_478.Data.AllocatorInstance.Data);
          }
          break;
        }
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_658.InternalDriverVersion.Data.ArrayNum != 0) {
          FVar12.Data = local_658.InternalDriverVersion.Data.AllocatorInstance.Data;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"Unknown");
        if (iVar8 == 0) goto LAB_141aaa155;
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_658.InternalDriverVersion.Data.ArrayNum != 0) {
          FVar12.Data = local_658.InternalDriverVersion.Data.AllocatorInstance.Data;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"");
        if (iVar8 == 0) goto LAB_141aaa155;
        iVar8 = (param_1->Data).ArrayNum;
        if (local_658.DeviceDescription.Data.ArrayNum == iVar8) {
          if (1 < local_658.DeviceDescription.Data.ArrayNum) {
            iVar8 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_658.DeviceDescription.Data.AllocatorInstance.Data,
                               (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar5 = iVar8 == 0;
            goto LAB_141aaa01e;
          }
LAB_141aaa09d:
          local_708.VendorId = local_658.VendorId;
          ::FString::operator=(&local_708.DeviceDescription,&local_658.DeviceDescription);
          ::FString::operator=(&local_708.ProviderName,&local_658.ProviderName);
          ::FString::operator=(&local_708.InternalDriverVersion,&local_658.InternalDriverVersion);
          ::FString::operator=(&local_708.UserDriverVersion,&local_658.UserDriverVersion);
          ::FString::operator=(&local_708.DriverDate,&local_658.DriverDate);
          ::FString::operator=(&local_708.RHIName,&local_658.RHIName);
          if (local_658.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.RHIName.Data.AllocatorInstance.Data);
          }
          if (local_658.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.DriverDate.Data.AllocatorInstance.Data);
          }
          if (local_658.UserDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.UserDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_658.InternalDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.InternalDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_658.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_658.ProviderName.Data.AllocatorInstance.Data);
          }
          if (local_658.DeviceDescription.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.DeviceDescription.Data.AllocatorInstance.Data);
          }
          goto LAB_141aaa5f4;
        }
        bVar5 = local_658.DeviceDescription.Data.ArrayNum + iVar8 == 1;
LAB_141aaa01e:
        if (bVar5) goto LAB_141aaa09d;
        if (local_658.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_658.RHIName.Data.AllocatorInstance.Data);
        }
        if (local_658.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_658.DriverDate.Data.AllocatorInstance.Data);
        }
        if (local_658.UserDriverVersion.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_658.UserDriverVersion.Data.AllocatorInstance.Data);
        }
        if (local_658.InternalDriverVersion.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_658.InternalDriverVersion.Data.AllocatorInstance.Data);
        }
        if (local_658.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_658.ProviderName.Data.AllocatorInstance.Data);
        }
        if (local_658.DeviceDescription.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_658.DeviceDescription.Data.AllocatorInstance.Data);
        }
        if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_478.Data.AllocatorInstance.Data);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < 0x100);
    }
    ::FString::operator=(&local_708.InternalDriverVersion,L"Unknown");
    ::FString::operator=(&local_708.UserDriverVersion,L"Unknown");
    ::FString::operator=(&local_708.DriverDate,L"Unknown");
    if (iVar6 == 0) {
      ::FString::PrintfImpl(&local_460,L"FoundDriverCount:%d FallbackToPrimary ");
      iVar6 = local_460.Data.ArrayNum + -1;
      if (local_460.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_698,(wchar_t *)local_460.Data.AllocatorInstance.Data,iVar6);
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
    }
    local_688.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_688.Data.ArrayNum = 0;
    local_688.Data.ArrayMax = 0;
    bVar5 = QueryRegKey((HKEY__ *)&DAT_ffffffff80000002,L"HARDWARE\\DEVICEMAP\\VIDEO",
                        L"\\Device\\Video0",&local_688);
    if (bVar5) {
      iVar6 = local_688.Data.ArrayNum + -1;
      if (local_688.Data.ArrayNum == 0) {
        iVar6 = iVar16;
      }
      if (0x12 < iVar6) {
        iVar6 = 0x12;
      }
      iVar8 = iVar16;
      if (0 < iVar6) {
        iVar8 = iVar6;
      }
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_688.Data.ArrayNum != 0) {
        FVar12.Data = local_688.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_450,(wchar_t *)FVar12.Data,iVar8);
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_450.Data.ArrayNum != 0) {
        FVar12.Data = local_450.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"\\Registry\\Machine\\");
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      if (iVar6 == 0) {
        pFVar10 = ::FString::RightChop(&local_688,&local_3d0,0x12);
        pFVar11 = ::FString::FString(&local_3e0,L"\\HKEY_LOCAL_MACHINE\\");
        ::FString::ConcatFF(&local_578,pFVar11,pFVar10);
        if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_688.Data.AllocatorInstance.Data);
        }
        uVar3 = local_578.Data._8_8_;
        iVar6 = local_578.Data.ArrayNum;
        local_688.Data.AllocatorInstance.Data = local_578.Data.AllocatorInstance.Data;
        local_578.Data.ArrayNum = 0;
        local_578.Data.ArrayMax = 0;
        uVar4 = local_578.Data._8_8_;
        local_578.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_578.Data.ArrayNum = (int)uVar3;
        local_578.Data.ArrayMax = SUB84(uVar3,4);
        local_688.Data.ArrayNum = local_578.Data.ArrayNum;
        local_688.Data.ArrayMax = local_578.Data.ArrayMax;
        local_578.Data._8_8_ = uVar4;
        if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
          iVar6 = local_688.Data.ArrayNum;
        }
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
          goto LAB_141aaa38c;
        }
      }
      else {
LAB_141aaa38c:
        iVar6 = local_688.Data.ArrayNum;
      }
      iVar8 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar8 = iVar16;
      }
      if (0x14 < iVar8) {
        iVar8 = 0x14;
      }
      if (0 < iVar8) {
        iVar16 = iVar8;
      }
      FVar12.Data = (FScriptContainerElement *)L"";
      if (iVar6 != 0) {
        FVar12.Data = local_688.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_440,(wchar_t *)FVar12.Data,iVar16);
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_440.Data.ArrayNum != 0) {
        FVar12.Data = local_440.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"\\HKEY_LOCAL_MACHINE\\");
      if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data.AllocatorInstance.Data);
      }
      if (iVar6 != 0) {
        iVar6 = 0x1c;
        pwVar14 = L"PrimaryDriverLocationFailed ";
        goto LAB_141aaa5e7;
      }
      ::FString::RightChop(&local_688,&local_400,0x14);
      local_4e8.VendorId = 0;
      local_4e8.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.DeviceDescription.Data.ArrayNum = 0;
      local_4e8.DeviceDescription.Data.ArrayMax = 0;
      local_4e8.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.ProviderName.Data.ArrayNum = 0;
      local_4e8.ProviderName.Data.ArrayMax = 0;
      local_4e8.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.InternalDriverVersion.Data.ArrayNum = 0;
      local_4e8.InternalDriverVersion.Data.ArrayMax = 0;
      local_4e8.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.UserDriverVersion.Data.ArrayNum = 0;
      local_4e8.UserDriverVersion.Data.ArrayMax = 0;
      local_4e8.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.DriverDate.Data.ArrayNum = 0;
      local_4e8.DriverDate.Data.ArrayMax = 0;
      local_4e8.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e8.RHIName.Data.ArrayNum = 0;
      local_4e8.RHIName.Data.ArrayMax = 0;
      GetVideoDriverDetails(&local_400,&local_4e8);
      if ((local_4e8.DeviceDescription.Data.ArrayNum < 2) || (local_4e8.VendorId == 0)) {
LAB_141aaa4df:
        ::FString::AppendChars(&local_698,L"GetVideoDriverDetailsInvalid ",0x1d);
      }
      else {
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_4e8.InternalDriverVersion.Data.ArrayNum != 0) {
          FVar12.Data = local_4e8.InternalDriverVersion.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"Unknown");
        if (iVar6 == 0) goto LAB_141aaa4df;
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_4e8.InternalDriverVersion.Data.ArrayNum != 0) {
          FVar12.Data = local_4e8.InternalDriverVersion.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar12.Data,L"");
        if (iVar6 == 0) goto LAB_141aaa4df;
      }
      iVar6 = (param_1->Data).ArrayNum;
      if (local_4e8.DeviceDescription.Data.ArrayNum == iVar6) {
        if (1 < local_4e8.DeviceDescription.Data.ArrayNum) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_4e8.DeviceDescription.Data.AllocatorInstance.Data,
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar5 = iVar6 == 0;
          goto LAB_141aaa522;
        }
LAB_141aaa541:
        FGPUDriverInfo::operator=(&local_708,&local_4e8);
      }
      else {
        bVar5 = local_4e8.DeviceDescription.Data.ArrayNum + iVar6 == 1;
LAB_141aaa522:
        if (bVar5) goto LAB_141aaa541;
        ::FString::AppendChars(&local_698,L"PrimaryIsNotTheChoosenAdapter ",0x1e);
      }
      if (local_4e8.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.RHIName.Data.AllocatorInstance.Data);
      }
      if (local_4e8.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.DriverDate.Data.AllocatorInstance.Data);
      }
      if (local_4e8.UserDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_4e8.UserDriverVersion.Data.AllocatorInstance.Data);
      }
      if (local_4e8.InternalDriverVersion.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.InternalDriverVersion.Data.AllocatorInstance.Data);
      }
      if (local_4e8.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.ProviderName.Data.AllocatorInstance.Data);
      }
      if (local_4e8.DeviceDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_4e8.DeviceDescription.Data.AllocatorInstance.Data);
      }
      local_478.Data.AllocatorInstance.Data = local_688.Data.AllocatorInstance.Data;
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
        local_478.Data.AllocatorInstance.Data = local_688.Data.AllocatorInstance.Data;
      }
    }
    else {
      iVar6 = 0x16;
      pwVar14 = L"QueryForPrimaryFailed ";
LAB_141aaa5e7:
      ::FString::AppendChars(&local_698,pwVar14,iVar6);
      local_478.Data.AllocatorInstance.Data = local_688.Data.AllocatorInstance.Data;
    }
LAB_141aaa5f4:
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
    if (((1 < local_698.Data.ArrayNum) && (4 < (byte)LogWindows._0_1_)) && (param_2)) {
      pFVar13 = &::LOG_Static;
      goto LAB_141aaac70;
    }
  }
  __return_storage_ptr__->VendorId = local_708.VendorId;
  (__return_storage_ptr__->DeviceDescription).Data.AllocatorInstance.Data =
       local_708.DeviceDescription.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->DeviceDescription).Data.ArrayNum =
       local_708.DeviceDescription.Data.ArrayNum;
  (__return_storage_ptr__->DeviceDescription).Data.ArrayMax =
       local_708.DeviceDescription.Data.ArrayMax;
  (__return_storage_ptr__->ProviderName).Data.AllocatorInstance.Data =
       local_708.ProviderName.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->ProviderName).Data.ArrayNum = local_708.ProviderName.Data.ArrayNum;
  (__return_storage_ptr__->ProviderName).Data.ArrayMax = local_708.ProviderName.Data.ArrayMax;
  (__return_storage_ptr__->InternalDriverVersion).Data.AllocatorInstance.Data =
       local_708.InternalDriverVersion.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->InternalDriverVersion).Data.ArrayNum =
       local_708.InternalDriverVersion.Data.ArrayNum;
  (__return_storage_ptr__->InternalDriverVersion).Data.ArrayMax =
       local_708.InternalDriverVersion.Data.ArrayMax;
  (__return_storage_ptr__->UserDriverVersion).Data.AllocatorInstance.Data =
       local_708.UserDriverVersion.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->UserDriverVersion).Data.ArrayNum =
       local_708.UserDriverVersion.Data.ArrayNum;
  (__return_storage_ptr__->UserDriverVersion).Data.ArrayMax =
       local_708.UserDriverVersion.Data.ArrayMax;
  (__return_storage_ptr__->DriverDate).Data.AllocatorInstance.Data =
       local_708.DriverDate.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->DriverDate).Data.ArrayNum = local_708.DriverDate.Data.ArrayNum;
  (__return_storage_ptr__->DriverDate).Data.ArrayMax = local_708.DriverDate.Data.ArrayMax;
  (__return_storage_ptr__->RHIName).Data.AllocatorInstance.Data =
       local_708.RHIName.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->RHIName).Data.ArrayNum = local_708.RHIName.Data.ArrayNum;
  (__return_storage_ptr__->RHIName).Data.ArrayMax = local_708.RHIName.Data.ArrayMax;
  local_708.InternalDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.ProviderName.Data.ArrayNum = 0;
  local_708.ProviderName.Data.ArrayMax = 0;
  local_708.ProviderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.DeviceDescription.Data.ArrayNum = 0;
  local_708.DeviceDescription.Data.ArrayMax = 0;
  local_708.DeviceDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.RHIName.Data.ArrayNum = 0;
  local_708.RHIName.Data.ArrayMax = 0;
  local_708.RHIName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.DriverDate.Data.ArrayNum = 0;
  local_708.DriverDate.Data.ArrayMax = 0;
  local_708.DriverDate.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.UserDriverVersion.Data.ArrayNum = 0;
  local_708.UserDriverVersion.Data.ArrayMax = 0;
  local_708.UserDriverVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.InternalDriverVersion.Data.ArrayNum = 0;
  local_708.InternalDriverVersion.Data.ArrayMax = 0;
  if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data.AllocatorInstance.Data);
  }
  if (local_708.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.RHIName.Data.AllocatorInstance.Data);
  }
joined_r0x000141aaad74:
  if (local_708.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.DriverDate.Data.AllocatorInstance.Data);
  }
  if (local_708.UserDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.UserDriverVersion.Data.AllocatorInstance.Data);
  }
  if (local_708.InternalDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_708.InternalDriverVersion.Data.AllocatorInstance.Data);
  }
  if (local_708.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.ProviderName.Data.AllocatorInstance.Data);
  }
  if (local_708.DeviceDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.DeviceDescription.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHostArchitecture @ 141aaae10

FString * __cdecl FWindowsPlatformMisc::GetHostArchitecture(FString *__return_storage_ptr__)

{
  HMODULE hModule;
  FARPROC pFVar1;
  HANDLE pvVar2;
  INT_PTR IVar3;
  short local_res10 [4];
  undefined1 local_res18 [16];
  
  hModule = GetModuleHandleW(L"kernel32");
  pFVar1 = GetProcAddress(hModule,"IsWow64Process2");
  if (pFVar1 != (FARPROC)0x0) {
    pvVar2 = GetCurrentProcess();
    IVar3 = (*pFVar1)(pvVar2,local_res18,local_res10);
    if (((int)IVar3 != 0) && (local_res10[0] == -0x559c)) {
      ::FString::FString(__return_storage_ptr__,L"arm64");
      return __return_storage_ptr__;
    }
  }
  ::FString::FString(__return_storage_ptr__,"x64");
  return __return_storage_ptr__;
}

// GetLastError @ 141aaaf70

DWORD __stdcall FWindowsPlatformMisc::GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141aaaf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ::GetLastError();
  return DVar1;
}

// GetMacAddress @ 141aaaf90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
FWindowsPlatformMisc::GetMacAddress
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_2c48 [32];
  undefined4 local_2c28 [4];
  longlong local_2c18 [1408];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x141aaaf9c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2c48;
  local_2c28[0] = 0x2c00;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = GetAdaptersInfo(local_2c18,local_2c28);
  if (iVar1 == 0) {
    plVar2 = local_2c18;
    do {
      if (*(int *)((longlong)plVar2 + 0x194) != 0) {
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
                  (__return_storage_ptr__,*(int *)((longlong)plVar2 + 0x194));
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,plVar2 + 0x33,
               (ulonglong)*(uint *)((longlong)plVar2 + 0x194));
        return __return_storage_ptr__;
      }
      plVar2 = (longlong *)*plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  return __return_storage_ptr__;
}

// GetMaxPathLength @ 141aab0d0

int __cdecl FWindowsPlatformMisc::GetMaxPathLength(void)

{
  bool bVar1;
  int iVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  INT_PTR IVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      hModule = GetModuleHandleW(L"ntdll.dll");
      bVar1 = false;
      if (hModule != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(hModule,"RtlAreLongPathsEnabled");
        if (pFVar3 == (FARPROC)0x0) {
          bVar1 = IsWine();
        }
        else {
          IVar4 = (*pFVar3)();
          bVar1 = (char)IVar4 != '\0';
        }
      }
      LongPathsEnabled.bValue = bVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = 0x104;
  if (LongPathsEnabled.bValue != false) {
    iVar2 = 0x7fff;
  }
  return iVar2;
}

// GetMaxRefreshRate @ 141aab180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FWindowsPlatformMisc::GetMaxRefreshRate(void)

{
  BOOL BVar1;
  undefined1 auStack_118 [32];
  DEVMODEW local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  memset(&local_f8,0,0xdc);
  local_f8.dmSize = 0xdc;
  BVar1 = EnumDisplaySettingsW((LPCWSTR)0x0,0xffffffff,&local_f8);
  if (BVar1 == 0) {
    local_f8.dmDisplayFrequency = 0x3c;
  }
  else if ((int)local_f8.dmDisplayFrequency < 0x3c) {
    local_f8.dmDisplayFrequency = 0x3c;
  }
  return local_f8.dmDisplayFrequency;
}

// GetOSVersion @ 141aab590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FWindowsPlatformMisc::GetOSVersion(FString *__return_storage_ptr__)

{
  BOOL BVar1;
  undefined1 auStack_1b8 [32];
  DWORD local_198;
  DWORD local_190;
  uint local_188;
  uint local_180;
  wchar_t *local_178;
  _SYSTEM_INFO local_168;
  _OSVERSIONINFOW local_138;
  ushort local_20;
  byte local_1e;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      GetNativeSystemInfo(&local_168);
      memset(&local_138.dwMajorVersion,0,0x118);
      local_138.dwOSVersionInfoSize = 0x11c;
      BVar1 = GetVersionExW(&local_138);
      if (BVar1 == 0) {
        OSVersionInitializer.CachedOSVersion[0] = L'\0';
        _Init_thread_footer(&::_TSS0);
      }
      else {
        local_178 = L"64bit";
        local_180 = (uint)local_20;
        local_188 = (uint)local_1e;
        local_190 = local_138.dwBuildNumber;
        local_198 = local_138.dwMinorVersion;
        TCString<wchar_t>::SnprintfImpl
                  (OSVersionInitializer.CachedOSVersion,0x80,L"%d.%d.%d.%d.%d.%s");
        _Init_thread_footer(&::_TSS0);
      }
    }
  }
  ::FString::FString(__return_storage_ptr__,OSVersionInitializer.CachedOSVersion);
  return __return_storage_ptr__;
}

// GetOSVersions @ 141aab780

void __cdecl FWindowsPlatformMisc::GetOSVersions(FString *param_1,FString *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      GetOSVersionsHelper(OSVersionsInitializer.OSVersionLabel,0x80,
                          OSVersionsInitializer.OSSubVersionLabel,0x80);
      _Init_thread_footer(&::_TSS0);
    }
  }
  ::FString::operator=(param_1,OSVersionsInitializer.OSVersionLabel);
  ::FString::operator=(param_2,OSVersionsInitializer.OSSubVersionLabel);
  return;
}

// GetOperatingSystemId @ 141aac410

FString * __cdecl FWindowsPlatformMisc::GetOperatingSystemId(FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  LSTATUS LVar3;
  wchar_t *lpData;
  FString *pFVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  DWORD local_res8 [2];
  DWORD local_res10 [2];
  BYTE local_res18 [8];
  HKEY local_res20;
  BYTE local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  FScriptContainerElement *pFVar7;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar2 = false;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar7 = (FScriptContainerElement *)0x0;
  do {
    if (bVar2) {
      return __return_storage_ptr__;
    }
    local_res20 = (HKEY)0x0;
    uVar6 = 0x100;
    if ((int)pFVar7 == 0) {
      uVar6 = 0x200;
    }
    LVar3 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,L"Software\\Microsoft\\Cryptography",0,
                          uVar6 | 0x20019,&local_res20);
    if (LVar3 == 0) {
      local_res8[0] = 0;
      local_res10[0] = 0;
      LVar3 = RegQueryValueExW(local_res20,L"MachineGuid",(LPDWORD)0x0,local_res10,(LPBYTE)0x0,
                               local_res8);
      if ((LVar3 == 0) && (local_res8[0] != 0)) {
        if ((local_res10[0] == 1) || (local_res10[0] == 2)) {
LAB_141aac60f:
          lpData = operator_new__((ulonglong)local_res8[0]);
          LVar3 = RegQueryValueExW(local_res20,L"MachineGuid",(LPDWORD)0x0,(LPDWORD)0x0,
                                   (LPBYTE)lpData,local_res8);
          if (LVar3 == 0) {
            pFVar4 = ::FString::ConstructFromPtrSize(&local_50,lpData,(local_res8[0] >> 1) - 1);
            if (__return_storage_ptr__ != pFVar4) {
              pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              (__return_storage_ptr__->Data).AllocatorInstance.Data =
                   (pFVar4->Data).AllocatorInstance.Data;
              (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
              (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
              (pFVar4->Data).ArrayNum = 0;
              (pFVar4->Data).ArrayMax = 0;
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            bVar2 = true;
          }
          operator_delete__(lpData);
        }
        else if (local_res10[0] == 4) {
          LVar3 = RegQueryValueExW(local_res20,L"MachineGuid",(LPDWORD)0x0,(LPDWORD)0x0,local_res18,
                                   local_res8);
          if (LVar3 == 0) {
            ::FString::PrintfImpl(&local_60,L"%u");
            FVar5.Data = local_60.Data.AllocatorInstance.Data;
            if (__return_storage_ptr__ != &local_60) {
              pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              (__return_storage_ptr__->Data).AllocatorInstance.Data =
                   local_60.Data.AllocatorInstance.Data;
              (__return_storage_ptr__->Data).ArrayNum = local_60.Data.ArrayNum;
              (__return_storage_ptr__->Data).ArrayMax = local_60.Data.ArrayMax;
              local_60.Data.ArrayNum = 0;
              local_60.Data.ArrayMax = 0;
              local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar5.Data = (FScriptContainerElement *)0x0;
            }
LAB_141aac5fd:
            if (FVar5.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar5.Data);
            }
            bVar2 = true;
          }
        }
        else {
          if (local_res10[0] == 7) goto LAB_141aac60f;
          if ((local_res10[0] == 0xb) &&
             (LVar3 = RegQueryValueExW(local_res20,L"MachineGuid",(LPDWORD)0x0,(LPDWORD)0x0,local_78
                                       ,local_res8), LVar3 == 0)) {
            ::FString::PrintfImpl(&local_70,L"%lld");
            FVar5.Data = local_70.Data.AllocatorInstance.Data;
            if (__return_storage_ptr__ != &local_70) {
              pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              (__return_storage_ptr__->Data).AllocatorInstance.Data =
                   local_70.Data.AllocatorInstance.Data;
              (__return_storage_ptr__->Data).ArrayNum = local_70.Data.ArrayNum;
              (__return_storage_ptr__->Data).ArrayMax = local_70.Data.ArrayMax;
              local_70.Data.ArrayNum = 0;
              local_70.Data.ArrayMax = 0;
              local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar5.Data = (FScriptContainerElement *)0x0;
            }
            goto LAB_141aac5fd;
          }
        }
      }
      RegCloseKey(local_res20);
    }
    uVar6 = (int)pFVar7 + 1;
    pFVar7 = (FScriptContainerElement *)(ulonglong)uVar6;
    if (1 < (int)uVar6) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetPageFaultStats @ 141aac6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWindowsPlatformMisc::GetPageFaultStats(FPageFaultStats *param_1,EPageFaultFlags param_2)

{
  HANDLE pvVar1;
  bool bVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68 [10];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar2 = (param_2 & TotalPageFaults) != ~All;
  if (bVar2) {
    local_68[0] = 0;
    local_68[1] = 0;
    local_68[8] = 0;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    local_68[6] = 0;
    local_68[7] = 0;
    pvVar1 = GetCurrentProcess();
    K32GetProcessMemoryInfo(pvVar1,local_68,0x48);
    param_1->TotalPageFaults = local_68[0] >> 0x20;
  }
  return bVar2;
}

// GetPlatformChunkInstall @ 141aacab0

IPlatformChunkInstall * __cdecl FWindowsPlatformMisc::GetPlatformChunkInstall(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  FString local_18;
  
  if ((ChunkInstall == (IPlatformChunkInstall *)0x0) || (!bIniChecked)) {
    pIVar3 = (IModuleInterface *)0x0;
    if (1 < GEngineIni.Data.ArrayNum) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      FConfigCacheIni::GetString
                (GConfig,L"StreamingInstall",L"DefaultProviderName",&local_18,&GEngineIni);
      if (1 < local_18.Data.ArrayNum) {
        pFVar2 = ::FName::FName(local_res8,(wchar_t *)local_18.Data.AllocatorInstance.Data);
        FVar1 = *pFVar2;
        this = FModuleManager::Get();
        pIVar3 = FModuleManager::LoadModule(this,FVar1,None);
        if (pIVar3 != (IModuleInterface *)0x0) {
          ChunkInstall = (IPlatformChunkInstall *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
        }
      }
      bIniChecked = true;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (pIVar3 != (IModuleInterface *)0x0) {
        return ChunkInstall;
      }
    }
    ChunkInstall = FGenericPlatformMisc::GetPlatformChunkInstall();
  }
  return ChunkInstall;
}

// GetPlatformFeaturesModuleName @ 141aacbb0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl FWindowsPlatformMisc::GetPlatformFeaturesModuleName(void)

{
  bool bVar1;
  FModuleManager *this;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&PlatformFeaturesName,L"WindowsPlatformFeatures");
      atexit(`FWindowsPlatformMisc::GetPlatformFeaturesModuleName'::__l5::
             _dynamic_atexit_destructor_for__PlatformFeaturesName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((bIniChecked == false) && (1 < GEngineIni.Data.ArrayNum)) {
    FConfigCacheIni::GetString
              (GConfig,L"PlatformFeatures",L"PlatformFeaturesModule",&PlatformFeaturesName,
               &GEngineIni);
    bIniChecked = true;
  }
  this = FModuleManager::Get();
  pwVar3 = L"";
  pwVar2 = L"";
  if (PlatformFeaturesName.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)PlatformFeaturesName.Data.AllocatorInstance;
  }
  bVar1 = FModuleManager::ModuleExists(this,pwVar2,(FString *)0x0);
  if ((bVar1) && (1 < PlatformFeaturesName.Data.ArrayNum)) {
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    if (PlatformFeaturesName.Data.ArrayNum != 0) {
      pwVar3 = (wchar_t *)PlatformFeaturesName.Data.AllocatorInstance.Data;
    }
    return (wchar_t *)(FScriptContainerElement *)pwVar3;
  }
  if (4 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  return (wchar_t *)0x0;
}

// GetPrimaryGPUBrand @ 141aacf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FWindowsPlatformMisc::GetPrimaryGPUBrand(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  FString *pFVar3;
  DWORD iDevNum;
  longlong lVar4;
  undefined1 auStackY_3b8 [32];
  FString local_378;
  _DISPLAY_DEVICEW local_368;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FWindowsPlatformMisc::GetPrimaryGPUBrand'::__l2::
           _dynamic_atexit_destructor_for__PrimaryGPUBrand__);
    _Init_thread_footer(&::_TSS0);
  }
  iDevNum = 0;
  if (PrimaryGPUBrand.Data.ArrayNum < 2) {
    pFVar3 = FGenericPlatformMisc::GetPrimaryGPUBrand(&local_378);
    if (pFVar3 != &PrimaryGPUBrand) {
      if (PrimaryGPUBrand.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(PrimaryGPUBrand.Data.AllocatorInstance.Data);
      }
      PrimaryGPUBrand.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      PrimaryGPUBrand.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      PrimaryGPUBrand.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    local_368.cb = 0x348;
    iVar2 = EnumDisplayDevicesW((LPCWSTR)0x0,0,&local_368,0);
    while (iVar2 != 0) {
      if (((byte)local_368.StateFlags & 5) != 0) {
        ::FString::operator=(&PrimaryGPUBrand,local_368.DeviceString);
        break;
      }
      memset(local_368.DeviceName,0,0x344);
      iDevNum = iDevNum + 1;
      local_368.cb = 0x348;
      iVar2 = EnumDisplayDevicesW((LPCWSTR)0x0,iDevNum,&local_368,0);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = PrimaryGPUBrand.Data.ArrayNum;
  _Src = PrimaryGPUBrand.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar4 = (longlong)PrimaryGPUBrand.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = PrimaryGPUBrand.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  return __return_storage_ptr__;
}

// GetProcessDiagnostics @ 141aad1c0

EProcessDiagnosticFlags __cdecl FWindowsPlatformMisc::GetProcessDiagnostics(void)

{
  EProcessDiagnosticFlags EVar1;
  DWORD DVar2;
  LSTATUS LVar3;
  ForAnyElementType lpSubKey;
  DWORD local_res8 [2];
  uint local_res10 [2];
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      EVar1 = FGenericPlatformMisc::GetProcessDiagnostics();
      if (::Result[0] == L'\0') {
        DVar2 = GetModuleFileNameW((HMODULE)hInstance,::Result,0x200);
        if (DVar2 == 0) {
          ::Result[0] = L'\0';
        }
      }
      PathFindFileNameW(::Result);
      ::FString::PrintfImpl
                (&local_18,
                 L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\%s"
                );
      lpSubKey.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        lpSubKey.Data = local_18.Data.AllocatorInstance.Data;
      }
      local_res8[0] = 4;
      LVar3 = RegGetValueW((HKEY)&DAT_ffffffff80000002,(LPCWSTR)lpSubKey.Data,L"GlobalFlag",0x10,
                           (LPDWORD)0x0,local_res10,local_res8);
      if ((LVar3 == 0) && ((local_res10[0] & 0x22089b0) != 0)) {
        EVar1 = EVar1 | MemorySanitizer;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      FoundDiagnostics = EVar1;
      _Init_thread_footer(&::_TSS0);
      return FoundDiagnostics;
    }
  }
  return FoundDiagnostics;
}

// GetProcessorGroupDesc @ 141aad800

FProcessorGroupDesc * __cdecl FWindowsPlatformMisc::GetProcessorGroupDesc(void)

{
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  FProcessorGroupDesc local_98;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_98.NumProcessorGroups = 0;
      local_res18[0] = 0;
      local_98.ThreadAffinities[0] = 0;
      local_98.ThreadAffinities[1] = 0;
      local_res10[0] = 0;
      local_98.ThreadAffinities[2] = 0;
      local_98.ThreadAffinities[3] = 0;
      local_res8[0] = 0;
      local_98.ThreadAffinities[4] = 0;
      local_98.ThreadAffinities[5] = 0;
      local_98.ThreadAffinities[6] = 0;
      local_98.ThreadAffinities[7] = 0;
      local_98.ThreadAffinities[8] = 0;
      local_98.ThreadAffinities[9] = 0;
      local_98.ThreadAffinities[10] = 0;
      local_98.ThreadAffinities[0xb] = 0;
      local_98.ThreadAffinities[0xc] = 0;
      local_98.ThreadAffinities[0xd] = 0;
      local_98.ThreadAffinities[0xe] = 0;
      local_98.ThreadAffinities[0xf] = 0;
      QueryCpuInformation(&local_98,local_res18,local_res10,local_res8,false);
      GroupDesc.ThreadAffinities[0] = local_98.ThreadAffinities[0];
      GroupDesc.ThreadAffinities[1] = local_98.ThreadAffinities[1];
      GroupDesc.ThreadAffinities[2] = local_98.ThreadAffinities[2];
      GroupDesc.ThreadAffinities[3] = local_98.ThreadAffinities[3];
      GroupDesc.ThreadAffinities[4] = local_98.ThreadAffinities[4];
      GroupDesc.ThreadAffinities[5] = local_98.ThreadAffinities[5];
      GroupDesc.ThreadAffinities[6] = local_98.ThreadAffinities[6];
      GroupDesc.ThreadAffinities[7] = local_98.ThreadAffinities[7];
      GroupDesc.ThreadAffinities[8] = local_98.ThreadAffinities[8];
      GroupDesc.ThreadAffinities[9] = local_98.ThreadAffinities[9];
      GroupDesc.ThreadAffinities[10] = local_98.ThreadAffinities[10];
      GroupDesc.ThreadAffinities[0xb] = local_98.ThreadAffinities[0xb];
      GroupDesc.ThreadAffinities[0xc] = local_98.ThreadAffinities[0xc];
      GroupDesc.ThreadAffinities[0xd] = local_98.ThreadAffinities[0xd];
      GroupDesc._130_6_ = local_98._130_6_;
      GroupDesc.NumProcessorGroups = local_98.NumProcessorGroups;
      GroupDesc.ThreadAffinities[0xe] = local_98.ThreadAffinities[0xe];
      GroupDesc.ThreadAffinities[0xf] = local_98.ThreadAffinities[0xf];
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &GroupDesc;
}

// GetStoredValue @ 141aae1f0

bool __cdecl
FWindowsPlatformMisc::GetStoredValue
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  if ((param_1->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStoreId.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0xab1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_2->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InSectionName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0xab2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_3->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InKeyName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0xab3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pTVar5 = &::FString::FString(&local_48,L"Software")->Data;
  iVar4 = (param_1->Data).ArrayNum;
  iVar7 = 2;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  if ((pTVar5->ArrayNum != 0) || (iVar4 = 2, iVar6 == -1)) {
    iVar4 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,pTVar5,iVar6 + iVar4);
  ::FString::PathAppend
            ((FString *)&local_58,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar6);
  iVar6 = (param_2->Data).ArrayNum;
  iVar4 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar4 = 0;
  }
  if ((local_58.ArrayNum != 0) || (iVar4 == -1)) {
    iVar7 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_68,&local_58,iVar4 + iVar7);
  ::FString::PathAppend
            ((FString *)&local_68,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar4);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pTVar5 = &::FString::Replace((FString *)&local_68,&local_38,L"/",L"\\",IgnoreCase)->Data;
  if (&local_68 != pTVar5) {
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    local_68.AllocatorInstance.Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->AllocatorInstance)->
         AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->AllocatorInstance)->AllocatorInstance)
    .Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = pTVar5->ArrayNum;
    local_68.ArrayMax = pTVar5->ArrayMax;
    pTVar5->ArrayNum = 0;
    pTVar5->ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((param_3->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_68.ArrayNum != 0) {
    FVar8.Data = local_68.AllocatorInstance.Data;
  }
  bVar2 = QueryRegKey((HKEY__ *)0xffffffff80000001,(wchar_t *)FVar8.Data,pwVar9,param_4);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetSystemErrorMessage @ 141aae8c0

wchar_t * __cdecl
FWindowsPlatformMisc::GetSystemErrorMessage(wchar_t *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if ((param_1 == (wchar_t *)0x0) || (param_2 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutBuffer && BufferCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0x583,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  *param_1 = L'\0';
  if (param_3 == 0) {
    param_3 = ::GetLastError();
  }
  FormatMessageW(0x1000,(LPCVOID)0x0,param_3,0x400,param_1,param_2,(va_list *)0x0);
  pwVar3 = wcschr(param_1,L'\r');
  if (pwVar3 != (wchar_t *)0x0) {
    *pwVar3 = L'\0';
  }
  pwVar3 = wcschr(param_1,L'\n');
  if (pwVar3 != (wchar_t *)0x0) {
    *pwVar3 = L'\0';
  }
  return param_1;
}

// GetTopLevelWindowHandle @ 141aaeb20

HWND__ * __cdecl FWindowsPlatformMisc::GetTopLevelWindowHandle(uint param_1)

{
  HWND__ *local_18;
  uint local_10;
  
  local_18 = (HWND__ *)0x0;
  local_10 = param_1;
  EnumWindows(GetMainWindowHandleCallback,(LPARAM)&local_18);
  return local_18;
}

// GetVSComnTools @ 141aaeb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformMisc::GetVSComnTools(int param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  LSTATUS LVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  size_t sVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  int iVar13;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_218 [32];
  DWORD local_1e8;
  DWORD local_1e4;
  DWORD local_1e0;
  DWORD local_1dc;
  HKEY local_1d8;
  HKEY local_1d0;
  HKEY local_1c8;
  HKEY local_1c0;
  DWORD local_1b8;
  DWORD local_1b4;
  DWORD local_1b0;
  DWORD local_1ac;
  FString local_1a8;
  BYTE local_198 [4];
  BYTE local_194 [4];
  BYTE local_190 [4];
  BYTE local_18c [4];
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString *local_108;
  BYTE local_100 [8];
  BYTE local_f8 [8];
  BYTE local_f0 [8];
  BYTE local_e8 [8];
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  TStringView<wchar_t> local_70;
  wchar_t *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  FScriptContainerElement *pFVar14;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_108 = param_2;
  if (3 < param_1 - 0xcU) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("12 <= Version && Version <= 15",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                       ,0x10af,L"Not supported Visual Studio version.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  ::FString::PrintfImpl(&local_1a8,L"%d.0");
  FVar9.Data = (FScriptContainerElement *)0x0;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_1a8.Data.ArrayNum != 0) {
    FVar11.Data = local_1a8.Data.AllocatorInstance.Data;
  }
  bVar2 = false;
  pFVar14 = FVar9.Data;
  pFVar16 = FVar9.Data;
  do {
    iVar15 = (int)pFVar16;
    if (bVar2) goto LAB_141aaf55d;
    local_1d8 = (HKEY)0x0;
    uVar12 = 0x100;
    if ((int)pFVar14 == 0) {
      uVar12 = 0x200;
    }
    LVar4 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"SOFTWARE\\Microsoft\\VisualStudio\\SxS\\VS7",0,
                          uVar12 | 0x20019,&local_1d8);
    if (LVar4 == 0) {
      local_1e8 = 0;
      local_1b8 = 0;
      LVar4 = RegQueryValueExW(local_1d8,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,&local_1b8,(LPBYTE)0x0,
                               &local_1e8);
      if ((LVar4 == 0) && (local_1e8 != 0)) {
        if ((local_1b8 == 1) || (local_1b8 == 2)) {
LAB_141aaedb1:
          pwVar5 = operator_new__((ulonglong)local_1e8);
          LVar4 = RegQueryValueExW(local_1d8,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                   (LPBYTE)pwVar5,&local_1e8);
          if (LVar4 == 0) {
            pFVar6 = ::FString::ConstructFromPtrSize(&local_c0,pwVar5,(local_1e8 >> 1) - 1);
            if (&local_e0 != pFVar6) {
              if (FVar9.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar9.Data);
              }
              FVar9.Data = (pFVar6->Data).AllocatorInstance.Data;
              (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              pFVar16 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar6->Data).ArrayNum;
              (pFVar6->Data).ArrayNum = 0;
              (pFVar6->Data).ArrayMax = 0;
            }
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            bVar2 = true;
          }
          operator_delete__(pwVar5);
        }
        else if (local_1b8 == 4) {
          LVar4 = RegQueryValueExW(local_1d8,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                   local_198,&local_1e8);
          if (LVar4 == 0) {
            ::FString::PrintfImpl(&local_178,L"%u");
            if (FVar9.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar9.Data);
            }
            FVar9.Data = local_178.Data.AllocatorInstance.Data;
            bVar2 = true;
            pFVar16 = (FScriptContainerElement *)(local_178.Data._8_8_ & 0xffffffff);
            local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_178.Data.ArrayNum = 0;
            local_178.Data.ArrayMax = 0;
          }
        }
        else {
          if (local_1b8 == 7) goto LAB_141aaedb1;
          if (local_1b8 == 0xb) {
            LVar4 = RegQueryValueExW(local_1d8,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                     local_100,&local_1e8);
            if (LVar4 == 0) {
              ::FString::PrintfImpl(&local_188,L"%lld");
              if (FVar9.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar9.Data);
              }
              FVar9.Data = local_188.Data.AllocatorInstance.Data;
              bVar2 = true;
              pFVar16 = (FScriptContainerElement *)(local_188.Data._8_8_ & 0xffffffff);
              local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_188.Data.ArrayNum = 0;
              local_188.Data.ArrayMax = 0;
            }
          }
        }
      }
      RegCloseKey(local_1d8);
    }
    iVar15 = (int)pFVar16;
    uVar12 = (int)pFVar14 + 1;
    pFVar14 = (FScriptContainerElement *)(ulonglong)uVar12;
  } while ((int)uVar12 < 2);
  if (!bVar2) {
    bVar2 = false;
    FVar11.Data = (FScriptContainerElement *)L"";
    iVar13 = 0;
    if (local_1a8.Data.ArrayNum != 0) {
      FVar11.Data = local_1a8.Data.AllocatorInstance.Data;
      iVar13 = 0;
    }
    do {
      iVar15 = (int)pFVar16;
      if (bVar2) goto LAB_141aaf55d;
      local_1d0 = (HKEY)0x0;
      uVar12 = 0x100;
      if (iVar13 == 0) {
        uVar12 = 0x200;
      }
      LVar4 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                            L"SOFTWARE\\Microsoft\\VisualStudio\\SxS\\VS7",0,uVar12 | 0x20019,
                            &local_1d0);
      if (LVar4 == 0) {
        local_1e4 = 0;
        local_1b4 = 0;
        LVar4 = RegQueryValueExW(local_1d0,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,&local_1b4,(LPBYTE)0x0,
                                 &local_1e4);
        if ((LVar4 == 0) && (local_1e4 != 0)) {
          if ((local_1b4 == 1) || (local_1b4 == 2)) {
LAB_141aaf008:
            pwVar5 = operator_new__((ulonglong)local_1e4);
            LVar4 = RegQueryValueExW(local_1d0,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                     (LPBYTE)pwVar5,&local_1e4);
            if (LVar4 == 0) {
              pFVar6 = ::FString::ConstructFromPtrSize(&local_b0,pwVar5,(local_1e4 >> 1) - 1);
              if (&local_e0 != pFVar6) {
                if (FVar9.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar9.Data);
                }
                FVar9.Data = (pFVar6->Data).AllocatorInstance.Data;
                (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                pFVar16 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar6->Data).ArrayNum;
                (pFVar6->Data).ArrayNum = 0;
                (pFVar6->Data).ArrayMax = 0;
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
              bVar2 = true;
            }
            operator_delete__(pwVar5);
          }
          else if (local_1b4 == 4) {
            LVar4 = RegQueryValueExW(local_1d0,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                     local_194,&local_1e4);
            if (LVar4 == 0) {
              ::FString::PrintfImpl(&local_158,L"%u");
              if (FVar9.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar9.Data);
              }
              FVar9.Data = local_158.Data.AllocatorInstance.Data;
              bVar2 = true;
              pFVar16 = (FScriptContainerElement *)(local_158.Data._8_8_ & 0xffffffff);
              local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_158.Data.ArrayNum = 0;
              local_158.Data.ArrayMax = 0;
            }
          }
          else {
            if (local_1b4 == 7) goto LAB_141aaf008;
            if (local_1b4 == 0xb) {
              LVar4 = RegQueryValueExW(local_1d0,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                       local_f8,&local_1e4);
              if (LVar4 == 0) {
                ::FString::PrintfImpl(&local_168,L"%lld");
                if (FVar9.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar9.Data);
                }
                FVar9.Data = local_168.Data.AllocatorInstance.Data;
                bVar2 = true;
                pFVar16 = (FScriptContainerElement *)(local_168.Data._8_8_ & 0xffffffff);
                local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_168.Data.ArrayNum = 0;
                local_168.Data.ArrayMax = 0;
              }
            }
          }
        }
        RegCloseKey(local_1d0);
      }
      iVar15 = (int)pFVar16;
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    if (!bVar2) {
      bVar2 = false;
      FVar11.Data = (FScriptContainerElement *)L"";
      iVar13 = 0;
      if (local_1a8.Data.ArrayNum != 0) {
        FVar11.Data = local_1a8.Data.AllocatorInstance.Data;
        iVar13 = 0;
      }
      do {
        iVar15 = (int)pFVar16;
        if (bVar2) goto LAB_141aaf55d;
        local_1c8 = (HKEY)0x0;
        uVar12 = 0x100;
        if (iVar13 == 0) {
          uVar12 = 0x200;
        }
        LVar4 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                              L"SOFTWARE\\Wow6432Node\\Microsoft\\VisualStudio\\SxS\\VS7",0,
                              uVar12 | 0x20019,&local_1c8);
        if (LVar4 == 0) {
          local_1e0 = 0;
          local_1b0 = 0;
          LVar4 = RegQueryValueExW(local_1c8,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,&local_1b0,
                                   (LPBYTE)0x0,&local_1e0);
          if ((LVar4 == 0) && (local_1e0 != 0)) {
            if ((local_1b0 == 1) || (local_1b0 == 2)) {
LAB_141aaf25a:
              pwVar5 = operator_new__((ulonglong)local_1e0);
              LVar4 = RegQueryValueExW(local_1c8,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                       (LPBYTE)pwVar5,&local_1e0);
              if (LVar4 == 0) {
                pFVar6 = ::FString::ConstructFromPtrSize(&local_a0,pwVar5,(local_1e0 >> 1) - 1);
                if (&local_e0 != pFVar6) {
                  if (FVar9.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar9.Data);
                  }
                  FVar9.Data = (pFVar6->Data).AllocatorInstance.Data;
                  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  pFVar16 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar6->Data).ArrayNum;
                  (pFVar6->Data).ArrayNum = 0;
                  (pFVar6->Data).ArrayMax = 0;
                }
                if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                }
                bVar2 = true;
              }
              operator_delete__(pwVar5);
            }
            else if (local_1b0 == 4) {
              LVar4 = RegQueryValueExW(local_1c8,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                       local_190,&local_1e0);
              if (LVar4 == 0) {
                ::FString::PrintfImpl(&local_138,L"%u");
                if (FVar9.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar9.Data);
                }
                FVar9.Data = local_138.Data.AllocatorInstance.Data;
                bVar2 = true;
                pFVar16 = (FScriptContainerElement *)(local_138.Data._8_8_ & 0xffffffff);
                local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_138.Data.ArrayNum = 0;
                local_138.Data.ArrayMax = 0;
              }
            }
            else {
              if (local_1b0 == 7) goto LAB_141aaf25a;
              if (local_1b0 == 0xb) {
                LVar4 = RegQueryValueExW(local_1c8,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                         local_f0,&local_1e0);
                if (LVar4 == 0) {
                  ::FString::PrintfImpl(&local_148,L"%lld");
                  if (FVar9.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar9.Data);
                  }
                  FVar9.Data = local_148.Data.AllocatorInstance.Data;
                  bVar2 = true;
                  pFVar16 = (FScriptContainerElement *)(local_148.Data._8_8_ & 0xffffffff);
                  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_148.Data.ArrayNum = 0;
                  local_148.Data.ArrayMax = 0;
                }
              }
            }
          }
          RegCloseKey(local_1c8);
        }
        iVar15 = (int)pFVar16;
        iVar13 = iVar13 + 1;
      } while (iVar13 < 2);
      if (!bVar2) {
        bVar2 = false;
        FVar11.Data = (FScriptContainerElement *)L"";
        iVar13 = 0;
        if (local_1a8.Data.ArrayNum != 0) {
          FVar11.Data = local_1a8.Data.AllocatorInstance.Data;
          iVar13 = 0;
        }
        do {
          iVar15 = (int)pFVar16;
          if (bVar2) goto LAB_141aaf55d;
          local_1c0 = (HKEY)0x0;
          uVar12 = 0x100;
          if (iVar13 == 0) {
            uVar12 = 0x200;
          }
          LVar4 = RegOpenKeyExW((HKEY)&DAT_ffffffff80000002,
                                L"SOFTWARE\\Wow6432Node\\Microsoft\\VisualStudio\\SxS\\VS7",0,
                                uVar12 | 0x20019,&local_1c0);
          if (LVar4 == 0) {
            local_1dc = 0;
            local_1ac = 0;
            LVar4 = RegQueryValueExW(local_1c0,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,&local_1ac,
                                     (LPBYTE)0x0,&local_1dc);
            if ((LVar4 == 0) && (local_1dc != 0)) {
              if ((local_1ac == 1) || (local_1ac == 2)) {
LAB_141aaf4ac:
                pwVar5 = operator_new__((ulonglong)local_1dc);
                LVar4 = RegQueryValueExW(local_1c0,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                         (LPBYTE)pwVar5,&local_1dc);
                if (LVar4 == 0) {
                  pFVar6 = ::FString::ConstructFromPtrSize(&local_90,pwVar5,(local_1dc >> 1) - 1);
                  if (&local_e0 != pFVar6) {
                    if (FVar9.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FVar9.Data);
                    }
                    FVar9.Data = (pFVar6->Data).AllocatorInstance.Data;
                    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    pFVar16 = (FScriptContainerElement *)(ulonglong)(uint)(pFVar6->Data).ArrayNum;
                    (pFVar6->Data).ArrayNum = 0;
                    (pFVar6->Data).ArrayMax = 0;
                  }
                  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_90.Data.AllocatorInstance.Data);
                  }
                  bVar2 = true;
                }
                operator_delete__(pwVar5);
              }
              else if (local_1ac == 4) {
                LVar4 = RegQueryValueExW(local_1c0,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                         local_18c,&local_1dc);
                if (LVar4 == 0) {
                  ::FString::PrintfImpl(&local_118,L"%u");
                  if (FVar9.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar9.Data);
                  }
                  FVar9.Data = local_118.Data.AllocatorInstance.Data;
                  bVar2 = true;
                  pFVar16 = (FScriptContainerElement *)(local_118.Data._8_8_ & 0xffffffff);
                  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_118.Data.ArrayNum = 0;
                  local_118.Data.ArrayMax = 0;
                }
              }
              else {
                if (local_1ac == 7) goto LAB_141aaf4ac;
                if (local_1ac == 0xb) {
                  LVar4 = RegQueryValueExW(local_1c0,(LPCWSTR)FVar11.Data,(LPDWORD)0x0,(LPDWORD)0x0,
                                           local_e8,&local_1dc);
                  if (LVar4 == 0) {
                    ::FString::PrintfImpl(&local_128,L"%lld");
                    if (FVar9.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FVar9.Data);
                    }
                    FVar9.Data = local_128.Data.AllocatorInstance.Data;
                    bVar2 = true;
                    pFVar16 = (FScriptContainerElement *)(local_128.Data._8_8_ & 0xffffffff);
                    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_128.Data.ArrayNum = 0;
                    local_128.Data.ArrayMax = 0;
                  }
                }
              }
            }
            RegCloseKey(local_1c0);
          }
          iVar15 = (int)pFVar16;
          iVar13 = iVar13 + 1;
        } while (iVar13 < 2);
        bVar10 = false;
        if (!bVar2) goto LAB_141aaf62c;
      }
    }
  }
LAB_141aaf55d:
  local_70.Size = 0;
  local_70.DataPtr = L"";
  if (iVar15 != 0) {
    local_70.DataPtr = (wchar_t *)FVar9.Data;
  }
  if ((FScriptContainerElement *)local_70.DataPtr != (FScriptContainerElement *)0x0) {
    sVar7 = wcslen(local_70.DataPtr);
    local_70.Size = (int)sVar7;
  }
  local_58 = 7;
  local_60 = L"Common7";
  local_48 = 5;
  local_50 = L"Tools";
  FPaths::CombineInternal(&local_d0,&local_70,3);
  pFVar8 = FPaths::ConvertRelativePathToFull(&local_80,&local_d0);
  pFVar6 = local_108;
  if (local_108 != pFVar8) {
    pFVar14 = (local_108->Data).AllocatorInstance.Data;
    if (pFVar14 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar14);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Data).ArrayNum = (pFVar8->Data).ArrayNum;
    (pFVar6->Data).ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  bVar10 = true;
LAB_141aaf62c:
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  return bVar10;
}

// HasAVX2InstructionSupport @ 141ab1b70

bool __cdecl FWindowsPlatformMisc::HasAVX2InstructionSupport(void)

{
  uint uVar1;
  
  uVar1 = GetFeatureBits_X86();
  return (bool)((byte)(uVar1 >> 8) & 1);
}

// HasCPUIDInstruction @ 141ab1b90

bool __cdecl FWindowsPlatformMisc::HasCPUIDInstruction(void)

{
  return FCPUIDQueriedData::CPUIDStaticCache.bHasCPUIDInstruction;
}

// HasNonoptionalCPUFeatures @ 141ab1dd0

bool __cdecl FWindowsPlatformMisc::HasNonoptionalCPUFeatures(void)

{
  return (bool)((byte)(FCPUIDQueriedData::CPUIDStaticCache.CPUInfo2 >> 0x17) & 1);
}

// HasSecureBootSupport @ 141ab1e10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FWindowsPlatformMisc::HasSecureBootSupport(void)

{
  int iVar1;
  HMODULE hLibModule;
  code *pcVar2;
  undefined **ppuVar3;
  undefined2 local_res8;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return bHasSecureBootSupport;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) {
    return bHasSecureBootSupport;
  }
  hLibModule = FWindowsPlatformProcess::GetDllHandle(L"ntdll.dll");
  if (hLibModule == (HMODULE)0x0) {
    if (2 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_load__1506f26d8,
                 (FLogCategoryBase *)&LogWindows);
    }
  }
  else {
    pcVar2 = FWindowsPlatformProcess::GetDllExport(hLibModule,L"NtQuerySystemInformation");
    if (pcVar2 == (code *)0x0) {
      if (2 < (byte)LogWindows._0_1_) {
        ppuVar3 = &PTR_u_Failed_to_load__1506f2638;
LAB_141ab1ed8:
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)ppuVar3,(FLogCategoryBase *)&LogWindows);
      }
    }
    else {
      local_res8 = 0;
      iVar1 = (*pcVar2)(SecureBootInformationClassId,&local_res8,2,0);
      if (iVar1 == 0) {
        FreeLibrary(hLibModule);
        bHasSecureBootSupport = (bool)local_res8._1_1_;
        goto LAB_141ab1f0d;
      }
      if (2 < (byte)LogWindows._0_1_) {
        ppuVar3 = &PTR_u_Failed_to_retri_1506f25c0;
        goto LAB_141ab1ed8;
      }
    }
    FreeLibrary(hLibModule);
  }
  bHasSecureBootSupport = false;
LAB_141ab1f0d:
  _Init_thread_footer(&::_TSS0);
  return bHasSecureBootSupport;
}

// HasTPM2Support @ 141ab1f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformMisc::HasTPM2Support(void)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28 = 0;
      uStack_20 = 0;
      iVar1 = Tbsi_GetDeviceInfo(0x10,&local_28);
      if (iVar1 == 0) {
        bSupportsTpm2 = local_28._4_4_ == 2;
      }
      else {
        bSupportsTpm2 = false;
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bSupportsTpm2;
}

// HasTimedPauseCPUFeature @ 141ab1fe0

bool __cdecl FWindowsPlatformMisc::HasTimedPauseCPUFeature(void)

{
  return FCPUIDQueriedData::CPUIDStaticCache.bHasTimedPauseInstruction;
}

// Is64bitOperatingSystem @ 141ab28e0

bool __cdecl FWindowsPlatformMisc::Is64bitOperatingSystem(void)

{
  return true;
}

// IsDebuggerPresent @ 141ab2af0

bool __cdecl FWindowsPlatformMisc::IsDebuggerPresent(void)

{
  BOOL BVar1;
  
  if (!GIgnoreDebugger) {
    BVar1 = ::IsDebuggerPresent();
    if (BVar1 != 0) {
      return true;
    }
  }
  return false;
}

// IsDeviceHandheld @ 141ab2b20

bool __cdecl FWindowsPlatformMisc::IsDeviceHandheld(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 *puVar10;
  FString *pFVar11;
  bool bVar12;
  int local_res8 [2];
  initializer_list<FString> local_38;
  FString local_28;
  FString local_18;
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&local_28,L"AMD Custom APU 0405");
    ::FString::FString(&local_18,L"AMD Custom APU 0932");
    local_38._First = &local_28;
    local_38._Last = (FString *)&stack0xfffffffffffffff8;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
              (&HandheldAPU_CPUBrandSet,&local_38);
    puVar10 = &stack0xfffffffffffffff8;
    lVar8 = 2;
    do {
      puVar1 = (undefined8 *)(puVar10 + -0x10);
      puVar10 = puVar10 + -0x10;
      lVar8 = lVar8 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar8 != 0);
    atexit(`FWindowsPlatformMisc::IsDeviceHandheld'::__l2::
           _dynamic_atexit_destructor_for__HandheldAPU_CPUBrandSet__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((::_TSS1 <= *piVar9) || (_Init_thread_header(&::_TSS1), ::_TSS1 != -1)) {
    return HandheldCheck.DeviceHandheld;
  }
  local_res8[0] = 0;
  hModule = GetModuleHandleW(L"ntdll.dll");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar5 = GetProcAddress(hModule,"RtlGetDeviceFamilyInfoEnum"), pFVar5 != (FARPROC)0x0)) {
    (*pFVar5)(0,0,local_res8);
  }
  if (local_res8[0] != 0x2e) {
    if (HandheldCheck.DeviceHandheld != false) goto LAB_141ab2b79;
    ::FString::FString((FString *)&local_38,FCPUIDQueriedData::CPUIDStaticCache.Brand);
    iVar6 = (int)local_38._Last + -1;
    pFVar11 = local_38._First;
    if ((int)local_38._Last == 0) {
      iVar6 = 0;
      pFVar11 = (FString *)L"";
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)pFVar11);
    if (HandheldAPU_CPUBrandSet.Elements._8_4_ != HandheldAPU_CPUBrandSet.Elements._52_4_) {
      FVar7 = (ForElementType<FSetElementId>)0x154f72e68;
      if (HandheldAPU_CPUBrandSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar7 = HandheldAPU_CPUBrandSet.Hash.SecondaryData;
      }
      iVar6 = *(int *)((longlong)FVar7 +
                      (ulonglong)(HandheldAPU_CPUBrandSet.HashSize - 1U & uVar3) * 4);
      lVar8 = HandheldAPU_CPUBrandSet.Elements._0_8_;
      pFVar11 = local_38._Last;
      while (iVar6 != -1) {
        lVar2 = (longlong)iVar6 * 0x18;
        iVar4 = *(int *)(lVar2 + 8 + lVar8);
        if (iVar4 == (int)pFVar11) {
          if (iVar4 < 2) goto LAB_141ab2d79;
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar2 + lVar8),(wchar_t *)local_38._First);
          bVar12 = iVar4 == 0;
          lVar8 = HandheldAPU_CPUBrandSet.Elements._0_8_;
          pFVar11 = local_38._Last;
        }
        else {
          bVar12 = iVar4 + (int)pFVar11 == 1;
        }
        if (bVar12) goto LAB_141ab2d79;
        iVar6 = *(int *)(lVar2 + 0x10 + lVar8);
      }
    }
    iVar6 = -1;
LAB_141ab2d79:
    if (local_38._First != (FString *)0x0) {
      FMemory::Free(local_38._First);
    }
    if (iVar6 == -1) goto LAB_141ab2b79;
  }
  HandheldCheck.DeviceHandheld = true;
LAB_141ab2b79:
  _Init_thread_footer(&::_TSS1);
  return HandheldCheck.DeviceHandheld;
}

// IsRemoteSession @ 141ab30d0

bool __cdecl FWindowsPlatformMisc::IsRemoteSession(void)

{
  int iVar1;
  
  iVar1 = GetSystemMetrics(0x1000);
  return iVar1 != 0;
}

// IsRunningOnBattery @ 141ab31b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformMisc::IsRunningOnBattery(void)

{
  BOOL BVar1;
  undefined1 auStack_48 [32];
  _SYSTEM_POWER_STATUS local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  BVar1 = GetSystemPowerStatus(&local_28);
  if ((BVar1 != 0) &&
     (((((ulonglong)local_28._0_8_ >> 8 & 0xf) != 0 && (-1 < local_28.BatteryFlag)) ||
      (local_28.BatteryFlag == '\0')))) {
    return true;
  }
  return false;
}

// IsUsingBatterySaver @ 141ab3270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformMisc::IsUsingBatterySaver(void)

{
  BOOL BVar1;
  undefined1 auStack_48 [32];
  _SYSTEM_POWER_STATUS local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  BVar1 = GetSystemPowerStatus(&local_28);
  if ((BVar1 != 0) &&
     (((((uint)local_28._0_4_ >> 8 & 0xf) != 0 && (-1 < local_28.BatteryFlag)) ||
      (local_28.BatteryFlag == '\0')))) {
    return local_28.Reserved1 == '\x01';
  }
  return false;
}

// IsValidAbsolutePathFormat @ 141ab32f0

bool __cdecl FWindowsPlatformMisc::IsValidAbsolutePathFormat(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = true;
  FPaths::GetPath(&local_18,param_1);
  if (local_18.Data.ArrayNum < 2) {
LAB_141ab34a8:
    bVar5 = false;
LAB_141ab34aa:
    bVar2 = ::FString::EndsWith(param_1,L"\\ ",2,IgnoreCase);
    if (!bVar2) {
      if ((bVar5 != false) &&
         (iVar4 = ::FString::Find(param_1,L":",1,IgnoreCase,FromStart,2), iVar4 != -1)) {
        bVar5 = false;
      }
      goto LAB_141ab34fe;
    }
  }
  else {
    iVar4 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if ((iVar4 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    iVar4 = iswalpha(*(wint_t *)local_18.Data.AllocatorInstance.Data);
    if (((iVar4 == 0) ||
        ((((iVar4 = ::FString::Find(param_1,L":/",2,IgnoreCase,FromStart,-1), iVar4 != 1 &&
           (iVar4 = ::FString::Find(param_1,L":\\",2,IgnoreCase,FromStart,-1), iVar4 != 1)) ||
          (iVar4 = ::FString::Find(param_1,L"//",2,IgnoreCase,FromStart,-1), iVar4 != -1)) ||
         ((iVar4 = ::FString::Find(param_1,L"\\/",2,IgnoreCase,FromStart,-1), iVar4 != -1 ||
          (iVar4 = ::FString::Find(param_1,L"/\\",2,IgnoreCase,FromStart,-1), iVar4 != -1)))))) ||
       (iVar4 = ::FString::Find(param_1,L"\\\\",2,IgnoreCase,FromStart,-1), iVar4 != -1))
    goto LAB_141ab34a8;
    iVar4 = ::FString::Find(param_1,L"\\ \\",3,IgnoreCase,FromStart,-1);
    if (iVar4 == -1) goto LAB_141ab34aa;
  }
  bVar5 = false;
LAB_141ab34fe:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// IsWine @ 141ab3530

bool __cdecl FWindowsPlatformMisc::IsWine(void)

{
  bool bVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      hModule = GetModuleHandleW(L"ntdll.dll");
      bVar1 = false;
      if (hModule != (HMODULE)0x0) {
        pFVar2 = GetProcAddress(hModule,"wine_get_version");
        bVar1 = pFVar2 != (FARPROC)0x0;
      }
      WineDetected.bValue = bVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return WineDetected.bValue;
}

// LocalPrint @ 141ab5580

void __cdecl FWindowsPlatformMisc::LocalPrint(wchar_t *param_1)

{
  uint uVar1;
  size_t sVar2;
  ForAnyElementType lpOutputString;
  uint uVar3;
  uint uVar4;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeSRWLock((PSRWLOCK)&PrivateLock);
      ::Lock = &PrivateLock;
      _Init_thread_footer(&::_TSS0);
    }
  }
  sVar2 = wcslen(param_1);
  if ((int)sVar2 < 0x7fff) {
    AcquireSRWLockShared((PSRWLOCK)::Lock);
    OutputDebugStringW(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141ab55f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)::Lock);
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)::Lock);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  do {
    uVar4 = (uint)sVar2;
    uVar1 = uVar4;
    if (0x7ffe < (int)uVar4) {
      uVar1 = 0x7ffe;
    }
    uVar3 = 0;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    ::FString::AssignRange(&local_18,param_1,uVar3);
    lpOutputString.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      lpOutputString.Data = local_18.Data.AllocatorInstance.Data;
    }
    OutputDebugStringW((LPCWSTR)lpOutputString.Data);
    uVar1 = uVar4;
    if ((int)(uVar4 - 0x7ffe) < (int)uVar4) {
      uVar1 = uVar4 - 0x7ffe;
    }
    uVar3 = 0;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    sVar2 = (size_t)uVar3;
    param_1 = param_1 + ((longlong)(int)uVar4 - (longlong)(int)uVar3);
  } while (uVar3 != 0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)::Lock);
  return;
}

// MessageBoxExt @ 141ab6670

Type __cdecl FWindowsPlatformMisc::MessageBoxExt(Type param_1,wchar_t *param_2,wchar_t *param_3)

{
  Type TVar1;
  FThreadHeartBeat *pFVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  pFVar2 = FThreadHeartBeat::GetNoInit();
  if (pFVar2 != (FThreadHeartBeat *)0x0) {
    FThreadHeartBeat::SuspendHeartBeat(pFVar2,false);
  }
  ::FString::FString(&local_28,param_2);
  ::FString::ReplaceInline(&local_28,L"\r",L"",IgnoreCase);
  ::FString::ReplaceInline(&local_28,L"\n",L"\r\n",IgnoreCase);
  pFVar3 = ::FString::FString(&local_18,param_3);
  TVar1 = FWindowsDialog::Show((HWND__ *)0x0,param_1,&local_28,pFVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pFVar2 != (FThreadHeartBeat *)0x0) {
    pFVar2 = FThreadHeartBeat::GetNoInit();
    if (pFVar2 != (FThreadHeartBeat *)0x0) {
      FThreadHeartBeat::ResumeHeartBeat(pFVar2,false);
    }
  }
  return TVar1;
}

// NeedsNonoptionalCPUFeaturesCheck @ 141ab70e0

bool __cdecl FWindowsPlatformMisc::NeedsNonoptionalCPUFeaturesCheck(void)

{
  return false;
}

// NumberOfCores @ 141ab7580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FWindowsPlatformMisc::NumberOfCores(void)

{
  uint uVar1;
  undefined1 auStackY_f8 [32];
  bool local_c8;
  bool local_c7 [3];
  uint local_c4;
  uint local_c0 [3];
  int local_b4 [3];
  FProcessorGroupDesc local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (CoreCount < 1) {
    local_a8.NumProcessorGroups = 0;
    local_c0[1] = 0;
    local_c0[0] = 0;
    local_a8.ThreadAffinities[0] = 0;
    local_a8.ThreadAffinities[1] = 0;
    local_c4 = 0;
    local_a8.ThreadAffinities[2] = 0;
    local_a8.ThreadAffinities[3] = 0;
    local_a8.ThreadAffinities[4] = 0;
    local_a8.ThreadAffinities[5] = 0;
    local_a8.ThreadAffinities[6] = 0;
    local_a8.ThreadAffinities[7] = 0;
    local_a8.ThreadAffinities[8] = 0;
    local_a8.ThreadAffinities[9] = 0;
    local_a8.ThreadAffinities[10] = 0;
    local_a8.ThreadAffinities[0xb] = 0;
    local_a8.ThreadAffinities[0xc] = 0;
    local_a8.ThreadAffinities[0xd] = 0;
    local_a8.ThreadAffinities[0xe] = 0;
    local_a8.ThreadAffinities[0xf] = 0;
    QueryCpuInformation(&local_a8,local_c0 + 1,local_c0,&local_c4,false);
    uVar1 = local_c0[0];
    FGenericPlatformMisc::GetConfiguredCoreLimits
              (local_c0[0],local_c4,local_c7,(int *)(local_c0 + 2),local_b4,&local_c8);
    if (local_c8 != false) {
      uVar1 = local_c4;
    }
    CoreCount = uVar1;
    if ((0 < (int)local_c0[2]) && (CoreCount = local_c0[2], (int)uVar1 < (int)local_c0[2])) {
      CoreCount = uVar1;
    }
  }
  return CoreCount;
}

// NumberOfCoresIncludingHyperthreads @ 141ab7670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads(void)

{
  uint uVar1;
  undefined1 auStackY_f8 [32];
  bool local_c8;
  bool local_c7 [3];
  uint local_c4;
  uint local_c0 [3];
  int local_b4 [3];
  FProcessorGroupDesc local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (CoreCount < 1) {
    local_a8.ThreadAffinities[0] = 0;
    local_a8.ThreadAffinities[1] = 0;
    local_a8.ThreadAffinities[2] = 0;
    local_a8.ThreadAffinities[3] = 0;
    local_c0[1] = 0;
    local_a8.ThreadAffinities[4] = 0;
    local_a8.ThreadAffinities[5] = 0;
    local_a8.NumProcessorGroups = 0;
    local_c0[0] = 0;
    local_a8.ThreadAffinities[6] = 0;
    local_a8.ThreadAffinities[7] = 0;
    local_c4 = 0;
    local_a8.ThreadAffinities[8] = 0;
    local_a8.ThreadAffinities[9] = 0;
    local_a8.ThreadAffinities[10] = 0;
    local_a8.ThreadAffinities[0xb] = 0;
    local_a8.ThreadAffinities[0xc] = 0;
    local_a8.ThreadAffinities[0xd] = 0;
    local_a8.ThreadAffinities[0xe] = 0;
    local_a8.ThreadAffinities[0xf] = 0;
    QueryCpuInformation(&local_a8,local_c0 + 1,local_c0,&local_c4,false);
    uVar1 = local_c4;
    FGenericPlatformMisc::GetConfiguredCoreLimits
              (local_c0[0],local_c4,local_c7,local_b4,(int *)(local_c0 + 2),&local_c8);
    CoreCount = uVar1;
    if ((0 < (int)local_c0[2]) && (CoreCount = local_c0[2], (int)uVar1 < (int)local_c0[2])) {
      CoreCount = uVar1;
    }
  }
  return CoreCount;
}

// NumberOfWorkerThreadsToSpawn @ 141ab77e0

int __cdecl FWindowsPlatformMisc::NumberOfWorkerThreadsToSpawn(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = NumberOfCores();
  iVar2 = NumberOfCoresIncludingHyperthreads();
  iVar3 = iVar2 + -2;
  if (iVar2 <= iVar1) {
    iVar3 = iVar1 + -1;
  }
  iVar1 = 0x7fffffff;
  if (iVar3 < 0x7fffffff) {
    iVar1 = iVar3;
  }
  iVar3 = 2;
  if (2 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}

// OsExecute @ 141ab9170

bool __cdecl FWindowsPlatformMisc::OsExecute(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  HINSTANCE pHVar1;
  
  pHVar1 = ShellExecuteW((HWND)0x0,param_1,param_2,param_3,(LPCWSTR)0x0,1);
  return (HINSTANCE)&DAT_00000020 < pHVar1;
}

// PlatformInit @ 141ab9620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformMisc::PlatformInit(void)

{
  wchar_t *pwVar1;
  wchar_t _C;
  int iVar2;
  FModuleManager *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  DWORD local_res8 [2];
  
  FGenericPlatformMisc::LogNameEventStatsInit();
  timeBeginPeriod(1);
  if (4 < (byte)LogInit._0_1_) {
    if (::Result[0] == L'\0') {
      local_res8[0] = 0x100;
      GetComputerNameW(::Result,local_res8);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (4 < (byte)LogInit._0_1_) {
      if (ResultAlpha[0] == L'\0') {
        local_res8[0] = 0x100;
        GetUserNameW(ResultAlpha,local_res8);
        pwVar4 = ResultAlpha;
        pwVar5 = ResultAlpha;
        _C = ResultAlpha[0];
        while (_C != L'\0') {
          iVar2 = iswalnum(_C);
          if (iVar2 != 0) {
            *pwVar5 = *pwVar4;
            pwVar5 = pwVar5 + 1;
          }
          pwVar1 = pwVar4 + 1;
          pwVar4 = pwVar4 + 1;
          _C = *pwVar1;
        }
        *pwVar5 = L'\0';
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
  }
  FWindowsPlatformMemory::GetConstants();
  if (4 < (byte)LogInit._0_1_) {
    NumberOfCores();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if ((4 < (byte)LogInit._0_1_) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit),
     4 < (byte)LogInit._0_1_)) {
    IsDeviceHandheld();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  pFVar3 = FModuleManager::Get();
  TMulticastDelegateRegistration<void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
  ::AddStatic<>(&pFVar3->ModulesChangedEvent,
                (_func___cdecl_void_FName_EModuleChangeReason *)local_res8);
  return;
}

// PlatformPreInit @ 141ab97f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformMisc::PlatformPreInit(void)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  FThreadHeartBeat *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined8 uVar9;
  DWORDLONG dwlConditionMask;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar10;
  FText *pFVar11;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *pTVar12;
  HRSRC hResInfo;
  HGLOBAL hResData;
  uchar *puVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  longlong *local_168;
  FMRSWRecursiveAccessDetector *local_160;
  bool local_158;
  undefined1 *local_150;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_148;
  _OSVERSIONINFOEXW local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  FGenericPlatformMisc::PlatformPreInit();
  pFVar6 = FThreadHeartBeat::Get();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnStuck,
             (FWriteAccessScope *)&local_168);
  local_150 = &(pFVar6->OnStuck).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    puVar7[3] = FGenericCrashContext::OnThreadStuck;
    *puVar7 = &___7__TBaseStaticDelegateInstance___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160,(FDestructionSentinel *)&local_168);
  }
  pFVar6 = FThreadHeartBeat::Get();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnUnstuck,
             (FWriteAccessScope *)&local_168);
  local_150 = &(pFVar6->OnUnstuck).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_150);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    puVar7[3] = FGenericCrashContext::OnThreadUnstuck;
    *puVar7 = &___7__TBaseStaticDelegateInstance___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
  }
  if (local_158 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160,(FDestructionSentinel *)&local_168);
  }
  local_138.dwOSVersionInfoSize = 0x11c;
  local_138.dwBuildNumber = 0;
  local_138.dwPlatformId = 0;
  memset(local_138.szCSDVersion,0,0x100);
  local_138.wServicePackMinor = 0;
  local_138.wSuiteMask = 0;
  local_138.wProductType = '\0';
  local_138.wReserved = '\0';
  uVar9 = VerSetConditionMask(0,2,3);
  uVar9 = VerSetConditionMask(uVar9,1,3);
  dwlConditionMask = VerSetConditionMask(uVar9,0x20,3);
  local_138.dwMajorVersion = 6;
  local_138.dwMinorVersion = 2;
  local_138.wServicePackMajor = 0;
  BVar2 = VerifyVersionInfoW(&local_138,0x23,dwlConditionMask);
  if (BVar2 != 0) {
    pTVar10 = &FPaths::EngineDir((FString *)&local_168)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_148,pTVar10,0x29 - (uint)(pTVar10->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_148,L"Binaries/ThirdParty/DbgHelp/dbghelp.dll",0x27);
    if ((FScriptContainerElement *)local_168 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168);
    }
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_148.ArrayNum != 0) {
      FVar14.Data = local_148.AllocatorInstance.Data;
    }
    FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar14.Data);
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
  }
  DefaultPureCallHandler = (_func___cdecl_void *)_set_purecall_handler(PureCallHandler);
  iVar3 = GetSystemMetrics(0);
  if (0x27f < iVar3) {
    iVar3 = GetSystemMetrics(1);
    if (0x1df < iVar3) goto LAB_141ab9adf;
  }
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_168,L"Launch",L"Error_ResolutionTooLow",
                       L"The current resolution is too low to run this game.");
  FMessageDialog::Open(Ok,pFVar11);
  if ((FScriptContainerElement *)local_168 != (FScriptContainerElement *)0x0) {
    (**(code **)(*local_168 + 0x10))();
  }
  if (4 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    if (4 < (byte)LogWindows._0_1_) {
      local_178 = L"FWindowsPlatformMisc::PlatformPreInit.ResolutionTooLow";
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
  }
  RequestEngineExit(L"Win RequestExit");
  bVar1 = UE::IsGCLocked();
  if (!bVar1) {
    pTVar12 = FCoreDelegates::GetApplicationWillTerminateDelegate();
    TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar12);
  }
  PostQuitMessage(0);
LAB_141ab9adf:
  hResInfo = FindResourceW((HMODULE)0x0,(LPCWSTR)0x3f2,(LPCWSTR)&DAT_0000000a);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource((HMODULE)0x0,hResInfo);
    if (hResData == (HGLOBAL)0x0) {
      FMessageDialog::ShowLastError();
    }
    else {
      DVar4 = SizeofResource((HMODULE)0x0,hResInfo);
      puVar13 = LockResource(hResData);
      if ((1 < DVar4) && (puVar13 != (uchar *)0x0)) {
        FSHA1::InitializeFileHashesFromBuffer(puVar13,(ulonglong)DVar4,false);
      }
    }
  }
  uVar5 = GetFeatureBits_X86();
  if ((uVar5 & 0x10) == 0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_168,L"Launch",L"Error_CPUNotSupported",
                         L"This CPU does not support a required feature (SSE4.2).");
    FMessageDialog::Open(Ok,pFVar11);
    if ((FScriptContainerElement *)local_168 != (FScriptContainerElement *)0x0) {
      (**(code **)(*local_168 + 0x10))();
    }
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      if (4 < (byte)LogWindows._0_1_) {
        local_178 = L"FWindowsPlatformMisc::PlatformPreInit.CPUNotSupported";
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
      }
    }
    RequestEngineExit(L"Win RequestExit");
    bVar1 = UE::IsGCLocked();
    if (!bVar1) {
      pTVar12 = FCoreDelegates::GetApplicationWillTerminateDelegate();
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar12);
    }
    PostQuitMessage(0);
  }
  return;
}

// PlatformTearDown @ 141ab9c40

void __cdecl FWindowsPlatformMisc::PlatformTearDown(void)

{
  if (WindowsPlatformProcess::GNamedMutex != (void *)0x0) {
    ReleaseMutex(WindowsPlatformProcess::GNamedMutex);
    WindowsPlatformProcess::GNamedMutex = (void *)0x0;
  }
  return;
}

// PromptForRemoteDebugging @ 141aba510

void __cdecl FWindowsPlatformMisc::PromptForRemoteDebugging(bool param_1)

{
  bool bVar1;
  int iVar2;
  FEngineVersion *this;
  FThreadHeartBeat *pFVar3;
  
  if ((FGenericPlatformMisc::bShouldPromptForRemoteDebugging) &&
     ((!param_1 || (FGenericPlatformMisc::bPromptForRemoteDebugOnEnsure)))) {
    bVar1 = FApp::IsUnattended();
    if ((!bVar1) && ((GIsCriticalError == false || (GIsGuarded != false)))) {
      FWindowsPlatformStackWalk::UploadLocalSymbols();
      this = FEngineVersion::Current();
      FEngineVersionBase::GetChangelist((FEngineVersionBase *)this);
      TCString<wchar_t>::SprintfImpl
                (GErrorRemoteDebugPromptMessage,
                 L"Have a programmer remote debug this crash?\nHit NO to exit and submit error report as normal.\nOtherwise, contact a programmer for remote debugging,\ngiving them the changelist number below.\nOnce they have confirmed they are connected to the machine,\nhit YES to allow them to debug the crash.\n[Changelist = %d]"
                );
      pFVar3 = FThreadHeartBeat::GetNoInit();
      if (pFVar3 != (FThreadHeartBeat *)0x0) {
        FThreadHeartBeat::SuspendHeartBeat(pFVar3,false);
      }
      iVar2 = MessageBoxW((HWND)0x0,GErrorRemoteDebugPromptMessage,L"CRASHED",0x1004);
      if (iVar2 == 6) {
        DebugBreak();
      }
      if (pFVar3 != (FThreadHeartBeat *)0x0) {
        pFVar3 = FThreadHeartBeat::GetNoInit();
        if (pFVar3 != (FThreadHeartBeat *)0x0) {
          FThreadHeartBeat::ResumeHeartBeat(pFVar3,false);
          return;
        }
      }
    }
  }
  return;
}

// PumpMessagesOutsideMainLoop @ 141aba5f0

void __cdecl FWindowsPlatformMisc::PumpMessagesOutsideMainLoop(void)

{
  bool bVar1;
  tagMSG local_38;
  
  bVar1 = GPumpingMessagesOutsideOfMainLoop;
  GPumpingMessagesOutsideOfMainLoop = true;
  PeekMessageW(&local_38,(HWND)0x0,0,0,0x400000);
  GPumpingMessagesOutsideOfMainLoop = bVar1;
  return;
}

// QueryRegKey @ 141abab20

bool __cdecl
FWindowsPlatformMisc::QueryRegKey
          (HKEY__ *param_1,wchar_t *param_2,wchar_t *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  LSTATUS LVar2;
  wchar_t *lpData;
  FString *pFVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  DWORD local_78;
  DWORD local_74;
  BYTE local_70 [8];
  HKEY local_68;
  BYTE local_60 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  iVar7 = 0;
  do {
    if (bVar5 != false) {
      return bVar5;
    }
    local_68 = (HKEY)0x0;
    uVar6 = 0x100;
    if (iVar7 == 0) {
      uVar6 = 0x200;
    }
    LVar2 = RegOpenKeyExW((HKEY)param_1,param_2,0,uVar6 | 0x20019,&local_68);
    if (LVar2 == 0) {
      local_78 = 0;
      local_74 = 0;
      LVar2 = RegQueryValueExW(local_68,param_3,(LPDWORD)0x0,&local_74,(LPBYTE)0x0,&local_78);
      if ((LVar2 == 0) && (local_78 != 0)) {
        if ((local_74 == 1) || (local_74 == 2)) {
LAB_141abad21:
          lpData = operator_new__((ulonglong)local_78);
          LVar2 = RegQueryValueExW(local_68,param_3,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)lpData,
                                   &local_78);
          if (LVar2 == 0) {
            pFVar3 = ::FString::ConstructFromPtrSize(&local_38,lpData,(local_78 >> 1) - 1);
            if (param_4 != pFVar3) {
              pFVar1 = (param_4->Data).AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              (param_4->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
              (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (param_4->Data).ArrayNum = (pFVar3->Data).ArrayNum;
              (param_4->Data).ArrayMax = (pFVar3->Data).ArrayMax;
              (pFVar3->Data).ArrayNum = 0;
              (pFVar3->Data).ArrayMax = 0;
            }
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
            bVar5 = true;
          }
          operator_delete__(lpData);
        }
        else if (local_74 == 4) {
          LVar2 = RegQueryValueExW(local_68,param_3,(LPDWORD)0x0,(LPDWORD)0x0,local_70,&local_78);
          if (LVar2 == 0) {
            ::FString::PrintfImpl(&local_48,L"%u");
            FVar4.Data = local_48.Data.AllocatorInstance.Data;
            if (param_4 != &local_48) {
              pFVar1 = (param_4->Data).AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              (param_4->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
              (param_4->Data).ArrayNum = local_48.Data.ArrayNum;
              (param_4->Data).ArrayMax = local_48.Data.ArrayMax;
              local_48.Data.ArrayNum = 0;
              local_48.Data.ArrayMax = 0;
              local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar4.Data = (FScriptContainerElement *)0x0;
            }
LAB_141abad0f:
            if (FVar4.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar4.Data);
            }
            bVar5 = true;
          }
        }
        else {
          if (local_74 == 7) goto LAB_141abad21;
          if ((local_74 == 0xb) &&
             (LVar2 = RegQueryValueExW(local_68,param_3,(LPDWORD)0x0,(LPDWORD)0x0,local_60,&local_78
                                      ), LVar2 == 0)) {
            ::FString::PrintfImpl(&local_58,L"%lld");
            FVar4.Data = local_58.Data.AllocatorInstance.Data;
            if (param_4 != &local_58) {
              pFVar1 = (param_4->Data).AllocatorInstance.Data;
              if (pFVar1 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar1);
              }
              (param_4->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
              (param_4->Data).ArrayNum = local_58.Data.ArrayNum;
              (param_4->Data).ArrayMax = local_58.Data.ArrayMax;
              local_58.Data.ArrayNum = 0;
              local_58.Data.ArrayMax = 0;
              local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar4.Data = (FScriptContainerElement *)0x0;
            }
            goto LAB_141abad0f;
          }
        }
      }
      RegCloseKey(local_68);
    }
    iVar7 = iVar7 + 1;
    if (1 < iVar7) {
      return bVar5;
    }
  } while( true );
}

// RaiseException @ 141abae00

void __cdecl FWindowsPlatformMisc::RaiseException(uint param_1)

{
  FPlatformMemoryStats *pFVar1;
  FPlatformMemoryStats local_98;
  
  pFVar1 = FWindowsPlatformMemory::GetStats(&local_98);
  FGenericCrashContext::SetMemoryStats(pFVar1);
                    /* WARNING: Could not recover jumptable at 0x000141abae2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ::RaiseException(param_1,0,0,(ULONG_PTR *)0x0);
  return;
}

// RequestExit @ 141abe750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformMisc::RequestExit(bool param_1,wchar_t *param_2)

{
  bool bVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *pTVar2;
  FOutputDeviceRedirector *pFVar3;
  HANDLE hProcess;
  bool bVar4;
  
  if (4 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  if (param_1) {
    bVar4 = GIsCriticalError != false;
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    RequestEngineExit(L"Win RequestExit");
    bVar1 = UE::IsGCLocked();
    if (!bVar1) {
      pTVar2 = FCoreDelegates::GetApplicationWillTerminateDelegate();
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar2);
    }
    pFVar3 = GetGlobalLogSingleton();
    if (pFVar3 != (FOutputDeviceRedirector *)0x0) {
      pFVar3 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(pFVar3);
    }
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,-(uint)bVar4 & 3);
  }
  else {
    if (4 < (byte)LogWindows._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
    }
    RequestEngineExit(L"Win RequestExit");
    bVar4 = UE::IsGCLocked();
    if (!bVar4) {
      pTVar2 = FCoreDelegates::GetApplicationWillTerminateDelegate();
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(pTVar2);
    }
    PostQuitMessage(0);
  }
  return;
}

// RequestExitWithStatus @ 141abe8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FWindowsPlatformMisc::RequestExitWithStatus(bool param_1,uchar param_2,wchar_t *param_3)

{
  bool bVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this;
  FOutputDeviceRedirector *pFVar2;
  HANDLE hProcess;
  
  if (4 < (byte)LogWindows._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  RequestEngineExit(L"Win RequestExit");
  bVar1 = UE::IsGCLocked();
  if (!bVar1) {
    this = FCoreDelegates::GetApplicationWillTerminateDelegate();
    TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(this);
  }
  if (param_1) {
    pFVar2 = GetGlobalLogSingleton();
    if (pFVar2 != (FOutputDeviceRedirector *)0x0) {
      pFVar2 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(pFVar2);
    }
    hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000141abe948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TerminateProcess(hProcess,(uint)param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141abe95b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage((uint)param_2);
  return;
}

// SetCrashHandlingType @ 141ac0430

ECrashHandlingType __cdecl FWindowsPlatformMisc::SetCrashHandlingType(ECrashHandlingType param_1)

{
  GCrashHandlingType = param_1;
  return param_1;
}

// SetEnvironmentVar @ 141ac06a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformMisc::SetEnvironmentVar(wchar_t *param_1,wchar_t *param_2)

{
  BOOL BVar1;
  
  if ((param_2 != (wchar_t *)0x0) && (*param_2 == L'\0')) {
    param_2 = (LPCWSTR)0x0;
  }
  BVar1 = SetEnvironmentVariableW(param_1,param_2);
  if ((BVar1 == 0) && (2 < (byte)LogWindows._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWindows);
  }
  return;
}

// SetGracefulTerminationHandler @ 141ac0700

void __cdecl FWindowsPlatformMisc::SetGracefulTerminationHandler(void)

{
  BOOL BVar1;
  HWND pHVar2;
  HANDLE hProcess;
  code *lpAddress;
  DWORD local_res8 [8];
  
  pHVar2 = GetConsoleWindow();
  if (pHVar2 != (HWND)0x0) {
    SetConsoleCtrlHandler(ConsoleCtrlHandler,1);
    lpAddress = SetConsoleCtrlHandler_exref;
    if ((*SetConsoleCtrlHandler_exref == (code)0xff) &&
       (SetConsoleCtrlHandler_exref[1] == (code)0x25)) {
      lpAddress = *(code **)(SetConsoleCtrlHandler_exref +
                            (ulonglong)*(uint *)(SetConsoleCtrlHandler_exref + 2) + 6);
    }
    BVar1 = VirtualProtect(lpAddress,6,0x40,local_res8);
    if (BVar1 != 0) {
      *(undefined4 *)lpAddress = 0x1b8;
      *(undefined2 *)(lpAddress + 4) = 0xc300;
      VirtualProtect(lpAddress,6,local_res8[0],local_res8);
      hProcess = GetCurrentProcess();
      FlushInstructionCache(hProcess,(LPCVOID)0x0,0);
    }
  }
  return;
}

// SetLastError @ 141ac07b0

void __stdcall FWindowsPlatformMisc::SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x000141ac07b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ::SetLastError(dwErrCode);
  return;
}

// SetStoredValue @ 141ac0f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWindowsPlatformMisc::SetStoredValue
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  DWORD dwMessageId;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType lpSubKey;
  wchar_t *lpValueName;
  int iVar6;
  wchar_t *lpData;
  int iVar7;
  undefined1 auStackY_8f8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_8a8;
  HKEY local_898;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_890;
  FString local_880;
  FString local_870;
  WCHAR local_858 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_8f8;
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InStoreId.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                         ,0xa95,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((param_2->Data).ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InSectionName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                         ,0xa96,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((param_3->Data).ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InKeyName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformMisc.cpp"
                         ,0xa97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar5 = &::FString::FString(&local_880,L"Software")->Data;
  iVar4 = (param_1->Data).ArrayNum;
  iVar7 = 2;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  if ((pTVar5->ArrayNum != 0) || (iVar4 = 2, iVar6 == -1)) {
    iVar4 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_890,pTVar5,iVar6 + iVar4);
  ::FString::PathAppend
            ((FString *)&local_890,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar6);
  iVar4 = (param_2->Data).ArrayNum;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  if ((local_890.ArrayNum != 0) || (iVar6 == -1)) {
    iVar7 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_8a8,&local_890,iVar6 + iVar7);
  ::FString::PathAppend
            ((FString *)&local_8a8,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar6);
  if (local_890.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.AllocatorInstance.Data);
  }
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  pTVar5 = &::FString::Replace((FString *)&local_8a8,&local_870,L"/",L"\\",IgnoreCase)->Data;
  if (&local_8a8 != pTVar5) {
    if (local_8a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.AllocatorInstance.Data);
    }
    local_8a8.AllocatorInstance.Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->AllocatorInstance)->
         AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar5->AllocatorInstance)->AllocatorInstance)
    .Data = (FScriptContainerElement *)0x0;
    local_8a8.ArrayNum = pTVar5->ArrayNum;
    local_8a8.ArrayMax = pTVar5->ArrayMax;
    pTVar5->ArrayNum = 0;
    pTVar5->ArrayMax = 0;
  }
  if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_870.Data.AllocatorInstance.Data);
  }
  lpSubKey.Data = (FScriptContainerElement *)L"";
  if (local_8a8.ArrayNum != 0) {
    lpSubKey.Data = local_8a8.AllocatorInstance.Data;
  }
  dwMessageId = RegCreateKeyExW((HKEY)0xffffffff80000001,(LPCWSTR)lpSubKey.Data,0,(LPWSTR)0x0,0,
                                0x20006,(LPSECURITY_ATTRIBUTES)0x0,&local_898,(LPDWORD)0x0);
  if (dwMessageId == 0) {
    iVar4 = (param_4->Data).ArrayNum;
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar6 = 0;
      lpData = L"";
    }
    else {
      lpData = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    if ((param_3->Data).ArrayNum == 0) {
      lpValueName = L"";
    }
    else {
      lpValueName = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    }
    dwMessageId = RegSetValueExW(local_898,lpValueName,0,1,(BYTE *)lpData,iVar6 * 2 + 2);
    RegCloseKey(local_898);
    if (dwMessageId == 0) {
      bVar2 = true;
      goto LAB_141ac11f5;
    }
  }
  FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0,local_858,0x400,(va_list *)0x0);
  FOutputDevice::LogfImpl
            ((FOutputDevice *)GWarn,
             L"FWindowsPlatformMisc::SetStoredValue: ERROR: Could not store value for \'%s\'. Error Code %u: %s"
            );
  bVar2 = false;
LAB_141ac11f5:
  if (local_8a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.AllocatorInstance.Data);
  }
  return bVar2;
}

// SetUTF8Output @ 141ac1770

void __cdecl FWindowsPlatformMisc::SetUTF8Output(void)

{
                    /* WARNING: Could not recover jumptable at 0x000141ac1775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetConsoleOutputCP(0xfde9);
  return;
}

// SubmitErrorReport @ 141ac2770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWindowsPlatformMisc::SubmitErrorReport(wchar_t *param_1,Type param_2)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  int local_res18 [4];
  FReadAccessScope local_28;
  
  if (((GIgnoreDebugger) || (BVar3 = ::IsDebuggerPresent(), BVar3 == 0)) ||
     (GAlwaysReportCrash != false)) {
    pwVar4 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar4,L"CrashForUAT");
    if (!bVar1) {
      local_res18[0] = 0;
      pwVar4 = FCommandLine::Get();
      FParse::Value(pwVar4,L"AutomatedPerfTesting=",local_res18);
      bVar1 = FApp::IsUnattended();
      if ((bVar1) && (local_res18[0] != 0)) {
        pwVar4 = FCommandLine::Get();
        bVar1 = FParse::Param(pwVar4,L"KillAllPopUpBlockingWindows");
        if (bVar1) {
          if (2 < (byte)LogWindows._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_Attempting_to_r_1506f13a0,
                       (FLogCategoryBase *)&LogWindows);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &FWindowsPlatformProcess::LaunchURLOverrideDelegate,&local_28);
          if (((FWindowsPlatformProcess::LaunchURLOverrideDelegate._16_4_ == 0) ||
              (FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_ == 0)) ||
             (cVar2 = (**(code **)(*(longlong *)
                                    FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_ + 0x38)
                      )(), cVar2 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_28);
          if (bVar1) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &FWindowsPlatformProcess::LaunchURLOverrideDelegate,&local_28);
            plVar5 = (longlong *)0x0;
            if (FWindowsPlatformProcess::LaunchURLOverrideDelegate._16_4_ != 0) {
              plVar5 = (longlong *)FWindowsPlatformProcess::LaunchURLOverrideDelegate._8_8_;
            }
            (**(code **)(*plVar5 + 0x60))(plVar5,L"KillAllPopUpBlockingWindows.bat");
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_28);
            return;
          }
          FWindowsPlatformProcess::LaunchURLInternal
                    (L"KillAllPopUpBlockingWindows.bat",(wchar_t *)0x0,(FString *)0x0);
        }
      }
    }
  }
  return;
}

// SupportsWindows11 @ 141ac28e0

bool __cdecl FWindowsPlatformMisc::SupportsWindows11(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FWindowsPlatformMisc::SupportsWindows11'::__l2::FWindows11SupportCheck::
      FWindows11SupportCheck(&Win11Check);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return Win11Check.bSupported;
}

// UpdateDriveFreeSpace @ 141ac3bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FWindowsPlatformMisc::UpdateDriveFreeSpace(void)

{
  BOOL BVar1;
  int iVar2;
  ULARGE_INTEGER *pUVar3;
  ULARGE_INTEGER *pUVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ULARGE_INTEGER local_40;
  ULARGE_INTEGER local_38;
  WCHAR local_30 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar2 = StorageDevices.ArrayNum;
  pUVar4 = (ULARGE_INTEGER *)(StorageDevices.AllocatorInstance.Data + (longlong)iVar2 * 0x38);
  pUVar3 = (ULARGE_INTEGER *)(StorageDevices.AllocatorInstance.Data + 0x28);
  while( true ) {
    if (StorageDevices.ArrayNum != iVar2) {
      `TCheckedPointerIterator<`anonymous_namespace'::FStorageDevice,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_48);
    }
    if (pUVar3 + -5 == pUVar4) break;
    local_30[0] = *(WCHAR *)(pUVar3 + -2);
    local_30[1] = L':';
    local_30[2] = L'\\';
    local_30[3] = 0;
    BVar1 = GetDiskFreeSpaceExW(local_30,(PULARGE_INTEGER)0x0,&local_38,&local_40);
    if (BVar1 != 0) {
      pUVar3->QuadPart = (ULONGLONG)local_40;
      pUVar3[-1].QuadPart = local_38.QuadPart - local_40.QuadPart;
    }
    pUVar3 = pUVar3 + 7;
  }
  return;
}

// VerifyWindowsVersion @ 141ac4ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FWindowsPlatformMisc::VerifyWindowsVersion(uint param_1,uint param_2,uint param_3)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined4 in_register_00000084;
  undefined1 auStack_158 [32];
  _OSVERSIONINFOEXW local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.dwOSVersionInfoSize = 0x11c;
  local_138.dwMajorVersion = param_1;
  local_138.dwMinorVersion = param_2;
  local_138.dwBuildNumber = param_3;
  uVar2 = VerSetConditionMask(0,2,CONCAT71((int7)(CONCAT44(in_register_00000084,param_3) >> 8),3));
  uVar2 = VerSetConditionMask(uVar2,1,3);
  dwlConditionMask = VerSetConditionMask(uVar2,4,3);
  BVar1 = VerifyVersionInfoW(&local_138,7,dwlConditionMask);
  return BVar1 != 0;
}


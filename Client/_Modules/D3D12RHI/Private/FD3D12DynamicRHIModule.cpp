// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 7

// SupportsDynamicReloading @ 145a83a10

bool __thiscall FD3D12DynamicRHIModule::SupportsDynamicReloading(FD3D12DynamicRHIModule *this)

{
  return false;
}

// StartupModule @ 145a83a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12DynamicRHIModule::StartupModule(FD3D12DynamicRHIModule *this)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  void *pvVar4;
  FString *pFVar5;
  undefined4 uVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_878 [32];
  DWORD local_858;
  FString local_848;
  TStringView<wchar_t> local_838;
  wchar_t *local_828;
  undefined4 local_820;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_878;
  uVar6 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar5 = FPaths::EngineDir(&local_848);
    local_820 = 0x32;
    local_838.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    iVar1 = (pFVar5->Data).ArrayNum;
    local_838.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_838.Size = 0;
    }
    local_828 = L"Binaries/ThirdParty/Windows/WinPixEventRuntime/x64";
    FPaths::CombineInternal(&WindowsPixDllRelativePath,&local_838,2);
    if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data.AllocatorInstance.Data);
    }
    atexit(`FD3D12DynamicRHIModule::StartupModule'::__l2::
           _dynamic_atexit_destructor_for__WindowsPixDllRelativePath__);
    _Init_thread_footer(&::_TSS0);
  }
  if (4 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  local_838.DataPtr = (wchar_t *)WindowsPixDllRelativePath.Data.AllocatorInstance.Data;
  local_838.Size = WindowsPixDllRelativePath.Data.ArrayNum + -1;
  if (WindowsPixDllRelativePath.Data.ArrayNum == 0) {
    local_838.Size = 0;
  }
  local_828 = WindowsPixDll;
  if (WindowsPixDll != (wchar_t *)0x0) {
    sVar3 = wcslen(WindowsPixDll);
    uVar6 = (undefined4)sVar3;
  }
  local_820 = uVar6;
  FPaths::CombineInternal(&local_848,&local_838,2);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_848.Data.ArrayNum != 0) {
    FVar7.Data = local_848.Data.AllocatorInstance.Data;
  }
  pvVar4 = FWindowsPlatformProcess::GetDllHandle((wchar_t *)FVar7.Data);
  this->WindowsPixDllHandle = pvVar4;
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  if (this->WindowsPixDllHandle == (void *)0x0) {
    DVar2 = FWindowsPlatformMisc::GetLastError();
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,DVar2);
    if (1 < (byte)LogD3D12RHI._0_1_) {
      local_858 = DVar2;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  return;
}

// ShutdownModule @ 145a83c40

void __thiscall FD3D12DynamicRHIModule::ShutdownModule(FD3D12DynamicRHIModule *this)

{
  if (this->WindowsPixDllHandle != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(this->WindowsPixDllHandle);
    this->WindowsPixDllHandle = (void *)0x0;
  }
  return;
}

// IsSupported @ 145a83c70

bool __thiscall FD3D12DynamicRHIModule::IsSupported(FD3D12DynamicRHIModule *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145a83c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x40))(this,3);
  return (bool)uVar1;
}

// IsSupported @ 145a83c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

bool __thiscall FD3D12DynamicRHIModule::IsSupported(FD3D12DynamicRHIModule *this,Type param_1)

{
  FD3D12AdapterDesc *this_00;
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  wchar_t *pwVar7;
  Type TVar8;
  FStaticBasicLogRecord *pFVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar4 = FWindowsPlatformMisc::VerifyWindowsVersion(10,0,0x3ad7);
  if (!bVar4) {
    if ((byte)LogD3D12RHI._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    return false;
  }
  if ((this->ChosenAdapters).ArrayNum == 0) {
    FindAdapter(this);
  }
  iVar1 = (this->ChosenAdapters).ArrayNum;
  if (iVar1 == 0) {
    if ((byte)LogD3D12RHI._0_1_ < 5) {
      return false;
    }
    pFVar9 = &::LOG_Static;
  }
  else {
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar2 = *(longlong *)(this->ChosenAdapters).AllocatorInstance.Data;
    if (lVar2 != 0) {
      this_00 = (FD3D12AdapterDesc *)(lVar2 + 0xd8);
      bVar4 = FD3D12AdapterDesc::IsValid(this_00);
      if (bVar4) {
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        bVar4 = FConfigCacheIni::GetString
                          (GConfig,L"SystemSettings",L"RHI.BlockIHVD3D12",&local_68,&GEngineIni);
        if (!bVar4) {
LAB_145a83ec4:
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          bVar4 = FD3D12AdapterDesc::IsValid(this_00);
          if (((bVar4) && (*(int *)(lVar2 + 0x21c) != 5)) &&
             ((int)param_1 <= *(int *)(lVar2 + 0x21c))) {
            return true;
          }
          bVar4 = FD3D12AdapterDesc::IsValid(this_00);
          if (bVar4) {
            TVar8 = *(Type *)(lVar2 + 0x21c);
          }
          else {
            TVar8 = Num;
          }
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          GetFeatureLevelName(TVar8,&local_48);
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          GetFeatureLevelName(param_1,&local_58);
          if (4 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          return false;
        }
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
        ::FString::ParseIntoArray(&local_68,&local_78,L",",true);
        pwVar7 = RHIVendorIdToString(*(EGpuVendorId *)(lVar2 + 0x1d8));
        iVar1 = local_78.ArrayNum;
        pFVar11 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x10;
        FVar10.Data = local_78.AllocatorInstance.Data;
        while( true ) {
          if (local_78.ArrayNum != iVar1) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (FVar10.Data == pFVar11) {
            DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum)
            ;
            if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.AllocatorInstance.Data);
            }
            goto LAB_145a83ec4;
          }
          ::FString::FString(&local_38,pwVar7);
          iVar6 = *(int *)(FVar10.Data + 8);
          if (iVar6 == local_38.Data.ArrayNum) {
            if (iVar6 < 2) {
              bVar4 = true;
            }
            else {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                (*(wchar_t **)FVar10.Data,
                                 (wchar_t *)local_38.Data.AllocatorInstance.Data);
              bVar4 = iVar6 == 0;
            }
          }
          else {
            bVar4 = iVar6 + local_38.Data.ArrayNum == 1;
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (bVar4) break;
          FVar10.Data = FVar10.Data + 0x10;
        }
        DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if ((byte)LogD3D12RHI._0_1_ < 5) {
          return false;
        }
        pFVar9 = &::LOG_Static;
        goto LAB_145a83fa1;
      }
    }
    if ((byte)LogD3D12RHI._0_1_ < 5) {
      return false;
    }
    pFVar9 = &::LOG_Static;
  }
LAB_145a83fa1:
  UE::Logging::Private::BasicLog<5>(pFVar9,(FLogCategoryBase *)&LogD3D12RHI);
  return false;
}

// CreateRHI @ 145a83fe0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDynamicRHI * __thiscall
FD3D12DynamicRHIModule::CreateRHI(FD3D12DynamicRHIModule *this,Type param_1)

{
  char cVar1;
  EShaderPlatform EVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  FDynamicRHI *pFVar7;
  FD3D12DynamicRHI *this_00;
  FD3D12DynamicRHI *pFVar8;
  FValidationRHI *this_01;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  EShaderPlatform *pEVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  Type local_res18 [4];
  FString local_68;
  FString local_58;
  FString local_48;
  
  GRHIGlobals.ShaderPlatformForFeatureLevel[0] = SP_NumPlatforms;
  GRHIGlobals.ShaderPlatformForFeatureLevel[1] = SP_PCD3D_ES3_1;
  GRHIGlobals.ShaderPlatformForFeatureLevel[2] = SP_NumPlatforms;
  GRHIGlobals.ShaderPlatformForFeatureLevel[3] = SP_PCD3D_SM5;
  GRHIGlobals.ShaderPlatformForFeatureLevel[4] = SP_NumPlatforms;
  iVar3 = (this->ChosenAdapters).ArrayNum;
  pFVar9 = (this->ChosenAdapters).AllocatorInstance.Data;
  pFVar13 = pFVar9 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->ChosenAdapters).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FD3D12Adapter,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar13) goto LAB_145a8408d;
    lVar11 = *(longlong *)pFVar9;
    if ((((lVar11 != 0) &&
         (bVar6 = FD3D12AdapterDesc::IsValid((FD3D12AdapterDesc *)(lVar11 + 0xd8)), bVar6)) &&
        (*(int *)(lVar11 + 0x21c) != 5)) && (3 < *(int *)(lVar11 + 0x21c))) break;
    pFVar9 = pFVar9 + 0x10;
  }
  GRHIGlobals.ShaderPlatformForFeatureLevel[4] = SP_PCD3D_SM6;
LAB_145a8408d:
  bVar6 = RHIGetPreviewFeatureLevel(local_res18);
  if (((bVar6) && (param_1 = local_res18[0], local_res18[0] != ES3_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviewFeatureLevel == ERHIFeatureLevel::ES3_1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                         ,0x430,L""), param_1 = local_res18[0], bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FDynamicRHI *)(*pcVar5)();
    return pFVar7;
  }
  GMaxRHIFeatureLevel = param_1;
  if (4 < (int)param_1) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7062869372317991994>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                       ,0x43a,"GMaxRHIFeatureLevel < ERHIFeatureLevel::Num");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FDynamicRHI *)(*pcVar5)();
      return pFVar7;
    }
    GMaxRHIFeatureLevel = SM5;
  }
  pEVar12 = GRHIGlobals.ShaderPlatformForFeatureLevel;
  GMaxRHIShaderPlatform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel];
  if ((GMaxRHIShaderPlatform == SP_NumPlatforms) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GMaxRHIShaderPlatform != SP_NumPlatforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                         ,0x440,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FDynamicRHI *)(*pcVar5)();
    return pFVar7;
  }
  pvVar4 = this->WindowsPixDllHandle;
  if ((0 < (this->ChosenAdapters).ArrayNum) &&
     (*(longlong *)(this->ChosenAdapters).AllocatorInstance.Data != 0)) {
    if (((this->ChosenAdapters).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FDynamicRHI *)(*pcVar5)();
      return pFVar7;
    }
    pwVar10 = L"false";
    cVar1 = *(char *)(*(longlong *)(this->ChosenAdapters).AllocatorInstance.Data + 0x224);
    if (cVar1 != '\0') {
      pwVar10 = L"true";
    }
    ::FString::FString(&local_48,pwVar10);
    ::FString::FString(&local_58,L"RHI.IntegratedGPU");
    FGenericCrashContext::SetEngineData(&local_58,&local_48);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    GRHIGlobals.DeviceIsIntegrated = (bool)cVar1;
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  ::LexToString(&local_68,GMaxRHIFeatureLevel);
  if (3 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  this_00 = ::operator_new(0x220);
  pFVar8 = (FD3D12DynamicRHI *)0x0;
  if (this_00 != (FD3D12DynamicRHI *)0x0) {
    pFVar8 = FD3D12DynamicRHI::FD3D12DynamicRHI(this_00,&this->ChosenAdapters,pvVar4 != (void *)0x0)
    ;
  }
  GD3D12RHI = pFVar8;
  pwVar10 = FCommandLine::Get();
  bVar6 = FParse::Param(pwVar10,L"RHIValidation");
  if (bVar6) {
    this_01 = ::operator_new(0x90);
    pFVar8 = (FD3D12DynamicRHI *)0x0;
    if (this_01 != (FValidationRHI *)0x0) {
      pFVar8 = (FD3D12DynamicRHI *)FValidationRHI::FValidationRHI(this_01,(FDynamicRHI *)GD3D12RHI);
    }
  }
  else {
    lVar11 = 5;
    do {
      EVar2 = *pEVar12;
      if (EVar2 != SP_NumPlatforms) {
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bContainsValidPlatformInfo == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Platform)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                               ,0x33b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FDynamicRHI *)(*pcVar5)();
          return pFVar7;
        }
        if ((GRHIGlobals.MaxTextureSamplers <
             (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].MaxSamplers) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("GRHIGlobals.MaxTextureSamplers >= (int32)FDataDrivenShaderPlatformInfo::GetMaxSamplers(GRHIGlobals.ShaderPlatformForFeatureLevel[Index])"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                               ,0x45f,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FDynamicRHI *)(*pcVar5)();
          return pFVar7;
        }
        EVar2 = *pEVar12;
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bContainsValidPlatformInfo == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid(Platform)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                               ,0x33b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FDynamicRHI *)(*pcVar5)();
          return pFVar7;
        }
        if ((GRHIGlobals.MaxTextureSamplers <
             (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].MaxSamplers) &&
           (1 < (byte)LogD3D12RHI._0_1_)) {
          if ((FGenericDataDrivenShaderPlatformInfo::Infos[*pEVar12].bContainsValidPlatformInfo == 0
              ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid(Platform)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                       ,0x33b,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FDynamicRHI *)(*pcVar5)();
            return pFVar7;
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      pEVar12 = pEVar12 + 1;
      lVar11 = lVar11 + -1;
      pFVar8 = GD3D12RHI;
    } while (lVar11 != 0);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return (FDynamicRHI *)pFVar8;
}

// FindAdapter @ 145aa7980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FD3D12DynamicRHIModule::FindAdapter(FD3D12DynamicRHIModule *this)

{
  TArray<TSharedPtr<FD3D12Adapter,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  IDXGIAdapter *pIVar12;
  FD3D12DynamicRHIModule *pFVar13;
  FD3D12AdapterDesc *pFVar14;
  FD3D12AdapterDesc *pFVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  EGpuVendorId EVar19;
  int iVar20;
  int iVar21;
  EGpuVendorId EVar22;
  EGpuVendorId EVar23;
  TConsoleVariableData<int> *pTVar24;
  IModularFeatures *pIVar25;
  IHeadMountedDisplayModule *pIVar26;
  TConsoleVariableData<int> *pTVar27;
  longlong *plVar28;
  TConsoleVariableData<int> *this_00;
  wchar_t *pwVar29;
  INTCExtensionAppInfo1 *pIVar30;
  void *pvVar31;
  FD3D12AdapterDesc *pFVar32;
  FD3D12Adapter *pFVar33;
  FD3D12Adapter *pFVar34;
  FD3D12AdapterDesc *pFVar35;
  FSharedReferencer<1> FVar36;
  longlong lVar37;
  FScriptContainerElement *pFVar38;
  ulonglong uVar39;
  FD3D12Adapter *pFVar40;
  DXGI_GPU_PREFERENCE DVar41;
  undefined1 auStackY_a78 [32];
  FD3D12Adapter *local_a28;
  FSharedReferencer<1> local_a20;
  char local_a18;
  char local_a17;
  char local_a16;
  char local_a15;
  IDXGIAdapter *local_a10;
  int local_a08;
  int local_a04;
  IDXGIFactory4 *local_a00;
  longlong *local_9f8;
  TConsoleVariableData<int> *local_9f0;
  IDXGIFactory6 *local_9e8;
  FD3D12DynamicRHIModule *local_9e0;
  FString local_9d8;
  undefined8 local_9c8;
  FSharedReferencer<1> local_9c0;
  undefined8 local_9b8;
  FSharedReferencer<1> local_9b0;
  undefined8 local_9a8;
  FSharedReferencer<1> local_9a0;
  undefined8 local_998;
  FSharedReferencer<1> local_990;
  undefined8 local_988;
  FSharedReferencer<1> local_980;
  FString local_978;
  FString local_968;
  FGPUDriverInfo local_958;
  FString local_8e8;
  INTCExtensionAppInfo1 local_8d8;
  FD3D12DeviceBasicInfo local_8a8;
  wchar_t *local_888;
  undefined8 uStack_880;
  uint local_878;
  uint uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  uint local_868;
  uint uStack_864;
  uint uStack_860;
  uint uStack_85c;
  DXGI_ADAPTER_DESC local_858;
  FD3D12AdapterDesc local_728;
  FD3D12AdapterDesc local_5c8;
  FD3D12AdapterDesc local_468;
  FD3D12AdapterDesc local_308;
  FD3D12AdapterDesc local_1a8;
  _GUID local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a78;
  local_9e0 = this;
  if (((this->ChosenAdapters).ArrayNum != 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ChosenAdapters.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                          ,0x318,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar27 = CVarExperimentalShaderModels.Ref;
  bVar16 = IsInParallelGameThread();
  this_00 = (TConsoleVariableData<int> *)0x0;
  DVar41 = DXGI_GPU_PREFERENCE_UNSPECIFIED;
  if (bVar16) {
LAB_145aa79f8:
    pTVar24 = this_00;
  }
  else {
    bVar16 = IsInGameThread();
    pTVar24 = (TConsoleVariableData<int> *)&DAT_00000004;
    if (bVar16) goto LAB_145aa79f8;
  }
  if (*(int *)((longlong)pTVar24->ShadowedValue + (longlong)pTVar27->ShadowedValue) == 1) {
    local_48 = D3D12ExperimentalShaderModels;
    iVar18 = D3D12EnableExperimentalFeatures(1,&local_48,0,0);
    if ((-1 < iVar18) && (4 < (byte)LogD3D12RHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  local_a00 = (IDXGIFactory4 *)0x0;
  SafeCreateDXGIFactory(&local_a00);
  if (local_a00 == (IDXGIFactory4 *)0x0) {
    return;
  }
  local_9e8 = (IDXGIFactory6 *)0x0;
  (**(code **)*(IDXGIFactory2 *)local_a00)
            (local_a00,&_GUID_c1b6694f_ff09_44a9_b03c_77900a0a1d17,&local_9e8);
  bVar16 = IsInGameThread();
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                          ,0x5a,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar25 = IModularFeatures::Get();
  uVar39 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8) + 0x9d4c) <
       `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                    ::__l2::HMDFeatureName,L"HMD");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar18 = (**(code **)((longlong)*pIVar25 + 0x18))
                     (pIVar25,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                              ::__l2::HMDFeatureName);
  pTVar27 = this_00;
  if (0 < iVar18) {
    pIVar26 = IHeadMountedDisplayModule::Get();
    pTVar27 = (TConsoleVariableData<int> *)(**(code **)((longlong)*pIVar26 + 0x60))(pIVar26);
  }
  local_9f0 = pTVar27;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar28 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.GraphicsAdapter",1);
  if (plVar28 != (longlong *)0x0) {
    this_00 = (TConsoleVariableData<int> *)(**(code **)(*plVar28 + 0x68))(plVar28);
  }
  if (pTVar27 == (TConsoleVariableData<int> *)0x0) {
    if (this_00 == (TConsoleVariableData<int> *)0x0) {
      local_a08 = -1;
    }
    else {
      local_a08 = TConsoleVariableData<int>::GetValueOnGameThread(this_00);
    }
  }
  else {
    local_a08 = -2;
  }
  pwVar29 = FCommandLine::Get();
  FParse::Value(pwVar29,L"graphicsadapter=",&local_a08);
  local_a15 = local_a08 == -1;
  local_a10 = (IDXGIAdapter *)0x0;
  FD3D12AdapterDesc::FD3D12AdapterDesc(&local_5c8);
  FD3D12AdapterDesc::FD3D12AdapterDesc(&local_308);
  FD3D12AdapterDesc::FD3D12AdapterDesc(&local_468);
  FD3D12AdapterDesc::FD3D12AdapterDesc(&local_1a8);
  lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar39 * 8);
  if ((*(int *)(lVar37 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar29 = FCommandLine::Get();
    bCreateWithWarp = FParse::Param(pwVar29,L"warp");
    _Init_thread_footer(&::_TSS0);
  }
  local_a17 = bCreateWithWarp;
  if ((*(int *)(lVar37 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar29 = FCommandLine::Get();
    bAllowSoftwareRendering = FParse::Param(pwVar29,L"AllowSoftwareRendering");
    _Init_thread_footer(&::_TSS0);
  }
  local_a18 = bAllowSoftwareRendering;
  local_a04 = 2;
  pwVar29 = FCommandLine::Get();
  FParse::Value(pwVar29,L"-gpupreference=",&local_a04);
  if (local_a04 == 1) {
    DVar41 = DXGI_GPU_PREFERENCE_MINIMUM_POWER;
  }
  else if (local_a04 == 2) {
    DVar41 = DXGI_GPU_PREFERENCE_HIGH_PERFORMANCE;
  }
  EVar19 = RHIGetPreferredAdapterVendor();
  pwVar29 = FCommandLine::Get();
  local_a16 = FParse::Param(pwVar29,L"novendordevice");
  cVar10 = local_a18;
  iVar18 = 0;
  while( true ) {
    pIVar12 = local_a10;
    cVar11 = local_a16;
    if (local_a10 != (IDXGIAdapter *)0x0) {
      local_a10 = (IDXGIAdapter *)0x0;
      (**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
    }
    iVar20 = FD3D12AdapterDesc::EnumAdapters
                       (iVar18,DVar41,(IDXGIFactory2 *)local_a00,local_9e8,&local_a10);
    pFVar13 = local_9e0;
    pIVar12 = local_a10;
    if (iVar20 == -0x7785fffe) break;
    if (local_a10 != (IDXGIAdapter *)0x0) {
      memset(&local_858,0,0x130);
      iVar20 = (**(code **)((longlong)*pIVar12 + 0x40))(pIVar12);
      if (iVar20 < 0) {
        local_9d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_9d8.Data.ArrayNum = 0;
        local_9d8.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar20,"TempAdapter->GetDesc(&AdapterDesc)",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                   ,0x366,(ID3D12Device *)0x0,&local_9d8);
      }
      if ((local_858.VendorId == 0x8086) && (cVar11 == '\0')) {
        iVar20 = INTC_LoadExtensionsLibrary(0,0x8086,local_858.DeviceId);
        if (iVar20 < 0) {
          if (4 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
        }
        else {
          pIVar30 = GetIntelApplicationInfo(&local_8d8);
          local_888 = pIVar30->pApplicationName;
          uStack_880 = *(undefined8 *)&(pIVar30->ApplicationVersion).field0_0x0;
          local_878 = (pIVar30->ApplicationVersion).field0_0x0._s_0.patch;
          uStack_874 = (pIVar30->ApplicationVersion).field0_0x0._s_0.reserved;
          uStack_870 = *(undefined4 *)&pIVar30->pEngineName;
          uStack_86c = *(undefined4 *)((longlong)&pIVar30->pEngineName + 4);
          local_868 = (pIVar30->EngineVersion).field0_0x0._s_0.major;
          uStack_864 = (pIVar30->EngineVersion).field0_0x0._s_0.minor;
          uStack_860 = (pIVar30->EngineVersion).field0_0x0._s_0.patch;
          uStack_85c = (pIVar30->EngineVersion).field0_0x0._s_0.reserved;
          INTC_D3D12_SetApplicationInfo(&local_888);
        }
      }
      bVar16 = SafeTestD3D12CreateDevice(local_a10,D3D_FEATURE_LEVEL_11_0,&local_8a8);
      if (bVar16) {
        if ((local_8a8.NumDeviceNodes == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("DeviceInfo.NumDeviceNodes > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                                ,0x374,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar20 = 0;
        while( true ) {
          local_9f8 = (longlong *)0x0;
          iVar21 = (**(code **)((longlong)*local_a10 + 0x38))(local_a10,iVar20);
          if (iVar21 < 0) break;
          iVar20 = iVar20 + 1;
          if (local_9f8 != (longlong *)0x0) {
            (**(code **)(*local_9f8 + 0x10))();
          }
        }
        if (local_9f8 != (longlong *)0x0) {
          (**(code **)(*local_9f8 + 0x10))();
        }
        if (((4 < (byte)LogD3D12RHI._0_1_) &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
            4 < (byte)LogD3D12RHI._0_1_)) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI),
           4 < (byte)LogD3D12RHI._0_1_)) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        EVar22 = RHIConvertToGpuVendorId(local_858.VendorId);
        if (EVar22 == Microsoft) {
          pvVar31 = FWindowsPlatformProcess::GetDllHandle(L"d3d10warp.dll");
          if (pvVar31 != (void *)0x0) {
            ::FString::FString(&local_968,L"d3d10warp.dll");
            FWindowsPlatformMisc::GetFileVersion(&local_968);
            if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_968.Data.AllocatorInstance.Data);
            }
            if (4 < (byte)LogD3D12RHI._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
            }
          }
        }
        else {
          ::FString::FString(&local_978,local_858.Description);
          FWindowsPlatformMisc::GetGPUDriverInfo(&local_958,&local_978,false);
          if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_978.Data.AllocatorInstance.Data);
          }
          if (4 < (byte)LogD3D12RHI._0_1_) {
            FGPUDriverInfo::GetUnifiedDriverVersion(&local_958,&local_8e8);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
            if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
            }
            if (4 < (byte)LogD3D12RHI._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)&PTR_u______Driver_Dat_151098fe0,
                         (FLogCategoryBase *)&LogD3D12RHI);
            }
          }
          if (local_958.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_958.RHIName.Data.AllocatorInstance.Data);
          }
          if (local_958.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_958.DriverDate.Data.AllocatorInstance.Data);
          }
          if (local_958.UserDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_958.UserDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_958.InternalDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_958.InternalDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_958.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_958.ProviderName.Data.AllocatorInstance.Data);
          }
          if (local_958.DeviceDescription.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_958.DeviceDescription.Data.AllocatorInstance.Data);
          }
        }
        FD3D12AdapterDesc::FD3D12AdapterDesc(&local_728,&local_858,iVar18,&local_8a8);
        local_728.NumDeviceNodes = local_8a8.NumDeviceNodes;
        if (local_a17 == '\0') {
          if ((EVar22 == Microsoft) && (cVar10 == '\0')) goto LAB_145aa835b;
LAB_145aa8316:
          bVar16 = false;
        }
        else {
          if (EVar22 == Microsoft) goto LAB_145aa8316;
LAB_145aa835b:
          bVar16 = true;
        }
        local_728.GpuPreference = DVar41;
        FGenericPlatformStricmp::Stricmp(local_858.Description,L"NVIDIA PerfHUD");
        if ((pTVar27 == (TConsoleVariableData<int> *)0x0) ||
           (iVar20 = memcmp(&local_9f0,&local_858.AdapterLuid,8), iVar20 == 0)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if ((local_a08 < 0) || (iVar18 == local_a08)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (((!bVar16) && (!bVar17)) && (!bVar9)) {
          pwVar29 = FCommandLine::Get();
          bVar17 = FParse::Param(pwVar29,L"ForceZeroAdapters");
          bVar16 = local_8a8.bUMA;
          if ((!bVar17) && (bVar17 = FD3D12AdapterDesc::IsValid(&local_728), bVar17)) {
            if ((EVar19 != Unknown) &&
               ((EVar23 = RHIConvertToGpuVendorId(local_858.VendorId), EVar19 == EVar23 &&
                (bVar17 = FD3D12AdapterDesc::IsValid(&local_5c8), !bVar17)))) {
              lVar37 = 2;
              pFVar14 = &local_728;
              pFVar15 = &local_5c8;
              do {
                pFVar35 = pFVar15;
                pFVar32 = pFVar14;
                pFVar15 = (FD3D12AdapterDesc *)((pFVar35->Desc).Description + 0x40);
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 4);
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 8);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0xc);
                pFVar14 = (FD3D12AdapterDesc *)((pFVar32->Desc).Description + 0x40);
                *(undefined8 *)(pFVar35->Desc).Description =
                     *(undefined8 *)(pFVar32->Desc).Description;
                *(undefined8 *)((pFVar35->Desc).Description + 4) = uVar3;
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x10);
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x14);
                *(undefined8 *)((pFVar35->Desc).Description + 8) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0xc) = uVar6;
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x18);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x1c);
                *(undefined8 *)((pFVar35->Desc).Description + 0x10) = uVar3;
                *(undefined8 *)((pFVar35->Desc).Description + 0x14) = uVar7;
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x20);
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x24);
                *(undefined8 *)((pFVar35->Desc).Description + 0x18) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x1c) = uVar6;
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x28);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x2c);
                *(undefined8 *)((pFVar35->Desc).Description + 0x20) = uVar3;
                *(undefined8 *)((pFVar35->Desc).Description + 0x24) = uVar7;
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x30);
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x34);
                *(undefined8 *)((pFVar35->Desc).Description + 0x28) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x2c) = uVar6;
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x38);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x3c);
                *(undefined8 *)((pFVar35->Desc).Description + 0x30) = uVar3;
                *(undefined8 *)((pFVar35->Desc).Description + 0x34) = uVar7;
                *(undefined8 *)((pFVar35->Desc).Description + 0x38) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x3c) = uVar6;
                lVar37 = lVar37 + -1;
              } while (lVar37 != 0);
              uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x44);
              uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x48);
              uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x4c);
              *(undefined8 *)(pFVar15->Desc).Description =
                   *(undefined8 *)(pFVar14->Desc).Description;
              *(undefined8 *)((pFVar35->Desc).Description + 0x44) = uVar3;
              uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x50);
              uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x54);
              *(undefined8 *)((pFVar35->Desc).Description + 0x48) = uVar5;
              *(undefined8 *)((pFVar35->Desc).Description + 0x4c) = uVar6;
              uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x58);
              uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x5c);
              *(undefined8 *)((pFVar35->Desc).Description + 0x50) = uVar3;
              *(undefined8 *)((pFVar35->Desc).Description + 0x54) = uVar7;
              uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x60);
              uVar8 = *(undefined8 *)((pFVar32->Desc).Description + 100);
              uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x68);
              *(undefined8 *)((pFVar35->Desc).Description + 0x58) = uVar5;
              *(undefined8 *)((pFVar35->Desc).Description + 0x5c) = uVar6;
              *(undefined8 *)((pFVar35->Desc).Description + 0x60) = uVar7;
              *(undefined8 *)((pFVar35->Desc).Description + 100) = uVar8;
              *(undefined8 *)((pFVar35->Desc).Description + 0x68) = uVar3;
            }
            if ((EVar22 != Microsoft) && (bVar16 == false)) {
              bVar16 = FD3D12AdapterDesc::IsValid(&local_308);
              if (!bVar16) {
                lVar37 = 2;
                pFVar14 = &local_728;
                pFVar15 = &local_308;
                do {
                  pFVar35 = pFVar15;
                  pFVar32 = pFVar14;
                  pFVar15 = (FD3D12AdapterDesc *)((pFVar35->Desc).Description + 0x40);
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 4);
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 8);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0xc);
                  pFVar14 = (FD3D12AdapterDesc *)((pFVar32->Desc).Description + 0x40);
                  *(undefined8 *)(pFVar35->Desc).Description =
                       *(undefined8 *)(pFVar32->Desc).Description;
                  *(undefined8 *)((pFVar35->Desc).Description + 4) = uVar3;
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x10);
                  uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x14);
                  *(undefined8 *)((pFVar35->Desc).Description + 8) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0xc) = uVar6;
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x18);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x1c);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x10) = uVar3;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x14) = uVar7;
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x20);
                  uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x24);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x18) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x1c) = uVar6;
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x28);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x2c);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x20) = uVar3;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x24) = uVar7;
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x30);
                  uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x34);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x28) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x2c) = uVar6;
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x38);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x3c);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x30) = uVar3;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x34) = uVar7;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x38) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x3c) = uVar6;
                  lVar37 = lVar37 + -1;
                } while (lVar37 != 0);
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x44);
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x48);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x4c);
                *(undefined8 *)(pFVar15->Desc).Description =
                     *(undefined8 *)(pFVar14->Desc).Description;
                *(undefined8 *)((pFVar35->Desc).Description + 0x44) = uVar3;
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x50);
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x54);
                *(undefined8 *)((pFVar35->Desc).Description + 0x48) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x4c) = uVar6;
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x58);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x5c);
                *(undefined8 *)((pFVar35->Desc).Description + 0x50) = uVar3;
                *(undefined8 *)((pFVar35->Desc).Description + 0x54) = uVar7;
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x60);
                uVar8 = *(undefined8 *)((pFVar32->Desc).Description + 100);
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x68);
                *(undefined8 *)((pFVar35->Desc).Description + 0x58) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x5c) = uVar6;
                *(undefined8 *)((pFVar35->Desc).Description + 0x60) = uVar7;
                *(undefined8 *)((pFVar35->Desc).Description + 100) = uVar8;
                *(undefined8 *)((pFVar35->Desc).Description + 0x68) = uVar3;
              }
              if (local_468.Desc.DedicatedVideoMemory < local_728.Desc.DedicatedVideoMemory) {
                lVar37 = 2;
                pFVar14 = &local_728;
                pFVar15 = &local_468;
                do {
                  pFVar35 = pFVar15;
                  pFVar32 = pFVar14;
                  pFVar15 = (FD3D12AdapterDesc *)((pFVar35->Desc).Description + 0x40);
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 4);
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 8);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0xc);
                  pFVar14 = (FD3D12AdapterDesc *)((pFVar32->Desc).Description + 0x40);
                  *(undefined8 *)(pFVar35->Desc).Description =
                       *(undefined8 *)(pFVar32->Desc).Description;
                  *(undefined8 *)((pFVar35->Desc).Description + 4) = uVar3;
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x10);
                  uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x14);
                  *(undefined8 *)((pFVar35->Desc).Description + 8) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0xc) = uVar6;
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x18);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x1c);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x10) = uVar3;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x14) = uVar7;
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x20);
                  uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x24);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x18) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x1c) = uVar6;
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x28);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x2c);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x20) = uVar3;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x24) = uVar7;
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x30);
                  uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x34);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x28) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x2c) = uVar6;
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x38);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x3c);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x30) = uVar3;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x34) = uVar7;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x38) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x3c) = uVar6;
                  lVar37 = lVar37 + -1;
                } while (lVar37 != 0);
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x44);
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x48);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x4c);
                *(undefined8 *)(pFVar15->Desc).Description =
                     *(undefined8 *)(pFVar14->Desc).Description;
                *(undefined8 *)((pFVar35->Desc).Description + 0x44) = uVar3;
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x50);
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x54);
                *(undefined8 *)((pFVar35->Desc).Description + 0x48) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x4c) = uVar6;
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x58);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x5c);
                *(undefined8 *)((pFVar35->Desc).Description + 0x50) = uVar3;
                *(undefined8 *)((pFVar35->Desc).Description + 0x54) = uVar7;
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x60);
                uVar8 = *(undefined8 *)((pFVar32->Desc).Description + 100);
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x68);
                *(undefined8 *)((pFVar35->Desc).Description + 0x58) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x5c) = uVar6;
                *(undefined8 *)((pFVar35->Desc).Description + 0x60) = uVar7;
                *(undefined8 *)((pFVar35->Desc).Description + 100) = uVar8;
                *(undefined8 *)((pFVar35->Desc).Description + 0x68) = uVar3;
                if ((EVar19 != Unknown) &&
                   (EVar22 = RHIConvertToGpuVendorId(local_858.VendorId), EVar19 == EVar22)) {
                  lVar37 = 2;
                  pFVar14 = &local_728;
                  pFVar15 = &local_5c8;
                  do {
                    pFVar35 = pFVar15;
                    pFVar32 = pFVar14;
                    pFVar15 = (FD3D12AdapterDesc *)((pFVar35->Desc).Description + 0x40);
                    uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 4);
                    uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 8);
                    uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0xc);
                    pFVar14 = (FD3D12AdapterDesc *)((pFVar32->Desc).Description + 0x40);
                    *(undefined8 *)(pFVar35->Desc).Description =
                         *(undefined8 *)(pFVar32->Desc).Description;
                    *(undefined8 *)((pFVar35->Desc).Description + 4) = uVar3;
                    uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x10);
                    uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x14);
                    *(undefined8 *)((pFVar35->Desc).Description + 8) = uVar5;
                    *(undefined8 *)((pFVar35->Desc).Description + 0xc) = uVar6;
                    uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x18);
                    uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x1c);
                    *(undefined8 *)((pFVar35->Desc).Description + 0x10) = uVar3;
                    *(undefined8 *)((pFVar35->Desc).Description + 0x14) = uVar7;
                    uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x20);
                    uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x24);
                    *(undefined8 *)((pFVar35->Desc).Description + 0x18) = uVar5;
                    *(undefined8 *)((pFVar35->Desc).Description + 0x1c) = uVar6;
                    uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x28);
                    uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x2c);
                    *(undefined8 *)((pFVar35->Desc).Description + 0x20) = uVar3;
                    *(undefined8 *)((pFVar35->Desc).Description + 0x24) = uVar7;
                    uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x30);
                    uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x34);
                    *(undefined8 *)((pFVar35->Desc).Description + 0x28) = uVar5;
                    *(undefined8 *)((pFVar35->Desc).Description + 0x2c) = uVar6;
                    uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x38);
                    uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x3c);
                    *(undefined8 *)((pFVar35->Desc).Description + 0x30) = uVar3;
                    *(undefined8 *)((pFVar35->Desc).Description + 0x34) = uVar7;
                    *(undefined8 *)((pFVar35->Desc).Description + 0x38) = uVar5;
                    *(undefined8 *)((pFVar35->Desc).Description + 0x3c) = uVar6;
                    lVar37 = lVar37 + -1;
                  } while (lVar37 != 0);
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x44);
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x48);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x4c);
                  *(undefined8 *)(pFVar15->Desc).Description =
                       *(undefined8 *)(pFVar14->Desc).Description;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x44) = uVar3;
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x50);
                  uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x54);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x48) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x4c) = uVar6;
                  uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x58);
                  uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x5c);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x50) = uVar3;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x54) = uVar7;
                  uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x60);
                  uVar8 = *(undefined8 *)((pFVar32->Desc).Description + 100);
                  uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x68);
                  *(undefined8 *)((pFVar35->Desc).Description + 0x58) = uVar5;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x5c) = uVar6;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x60) = uVar7;
                  *(undefined8 *)((pFVar35->Desc).Description + 100) = uVar8;
                  *(undefined8 *)((pFVar35->Desc).Description + 0x68) = uVar3;
                }
              }
            }
            bVar16 = FD3D12AdapterDesc::IsValid(&local_1a8);
            if (!bVar16) {
              lVar37 = 2;
              pFVar14 = &local_728;
              pFVar15 = &local_1a8;
              do {
                pFVar35 = pFVar15;
                pFVar32 = pFVar14;
                pFVar15 = (FD3D12AdapterDesc *)((pFVar35->Desc).Description + 0x40);
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 4);
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 8);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0xc);
                pFVar14 = (FD3D12AdapterDesc *)((pFVar32->Desc).Description + 0x40);
                *(undefined8 *)(pFVar35->Desc).Description =
                     *(undefined8 *)(pFVar32->Desc).Description;
                *(undefined8 *)((pFVar35->Desc).Description + 4) = uVar3;
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x10);
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x14);
                *(undefined8 *)((pFVar35->Desc).Description + 8) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0xc) = uVar6;
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x18);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x1c);
                *(undefined8 *)((pFVar35->Desc).Description + 0x10) = uVar3;
                *(undefined8 *)((pFVar35->Desc).Description + 0x14) = uVar7;
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x20);
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x24);
                *(undefined8 *)((pFVar35->Desc).Description + 0x18) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x1c) = uVar6;
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x28);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x2c);
                *(undefined8 *)((pFVar35->Desc).Description + 0x20) = uVar3;
                *(undefined8 *)((pFVar35->Desc).Description + 0x24) = uVar7;
                uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x30);
                uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x34);
                *(undefined8 *)((pFVar35->Desc).Description + 0x28) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x2c) = uVar6;
                uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x38);
                uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x3c);
                *(undefined8 *)((pFVar35->Desc).Description + 0x30) = uVar3;
                *(undefined8 *)((pFVar35->Desc).Description + 0x34) = uVar7;
                *(undefined8 *)((pFVar35->Desc).Description + 0x38) = uVar5;
                *(undefined8 *)((pFVar35->Desc).Description + 0x3c) = uVar6;
                lVar37 = lVar37 + -1;
              } while (lVar37 != 0);
              uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x44);
              uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x48);
              uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x4c);
              *(undefined8 *)(pFVar15->Desc).Description =
                   *(undefined8 *)(pFVar14->Desc).Description;
              *(undefined8 *)((pFVar35->Desc).Description + 0x44) = uVar3;
              uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x50);
              uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x54);
              *(undefined8 *)((pFVar35->Desc).Description + 0x48) = uVar5;
              *(undefined8 *)((pFVar35->Desc).Description + 0x4c) = uVar6;
              uVar5 = *(undefined8 *)((pFVar32->Desc).Description + 0x58);
              uVar6 = *(undefined8 *)((pFVar32->Desc).Description + 0x5c);
              *(undefined8 *)((pFVar35->Desc).Description + 0x50) = uVar3;
              *(undefined8 *)((pFVar35->Desc).Description + 0x54) = uVar7;
              uVar7 = *(undefined8 *)((pFVar32->Desc).Description + 0x60);
              uVar8 = *(undefined8 *)((pFVar32->Desc).Description + 100);
              uVar3 = *(undefined8 *)((pFVar32->Desc).Description + 0x68);
              *(undefined8 *)((pFVar35->Desc).Description + 0x58) = uVar5;
              *(undefined8 *)((pFVar35->Desc).Description + 0x5c) = uVar6;
              *(undefined8 *)((pFVar35->Desc).Description + 0x60) = uVar7;
              *(undefined8 *)((pFVar35->Desc).Description + 100) = uVar8;
              *(undefined8 *)((pFVar35->Desc).Description + 0x68) = uVar3;
            }
          }
        }
      }
    }
    iVar18 = iVar18 + 1;
  }
  pFVar34 = (FD3D12Adapter *)0x0;
  local_a20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_a15 == '\0') {
    pFVar33 = ::operator_new(0x898);
    pFVar40 = pFVar34;
    if (pFVar33 != (FD3D12Adapter *)0x0) {
      FD3D12Adapter::FD3D12Adapter(pFVar33,&local_1a8);
      pFVar33->_padding_ = (longlong)&___7FWindowsD3D12Adapter__6B_;
      pFVar40 = pFVar33;
    }
    pFVar33 = ::operator_new(0x18);
    if (pFVar33 != (FD3D12Adapter *)0x0) {
      *(undefined4 *)&(pFVar33->RootDevice).Reference = 1;
      pFVar33->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFWindowsD3D12Adapter__U__DefaultDeleter_VFWindowsD3D12Adapter___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&(pFVar33->RootDevice).Reference + 4) = 1;
      (pFVar33->RootDevice1).Reference = (ID3D12Device1 *)pFVar40;
      pFVar34 = pFVar33;
    }
    local_988 = 0;
    local_a28 = pFVar40;
    local_980.ReferenceController = (TReferenceControllerBase<1> *)pFVar34;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a20,&local_980);
    FVar36.ReferenceController = local_980.ReferenceController;
  }
  else {
    bVar16 = FD3D12AdapterDesc::IsValid(&local_5c8);
    if (bVar16) {
      pFVar33 = ::operator_new(0x898);
      pFVar40 = pFVar34;
      if (pFVar33 != (FD3D12Adapter *)0x0) {
        FD3D12Adapter::FD3D12Adapter(pFVar33,&local_5c8);
        pFVar33->_padding_ = (longlong)&___7FWindowsD3D12Adapter__6B_;
        pFVar40 = pFVar33;
      }
      pFVar33 = ::operator_new(0x18);
      if (pFVar33 != (FD3D12Adapter *)0x0) {
        *(undefined4 *)&(pFVar33->RootDevice).Reference = 1;
        pFVar33->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFWindowsD3D12Adapter__U__DefaultDeleter_VFWindowsD3D12Adapter___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)&(pFVar33->RootDevice).Reference + 4) = 1;
        (pFVar33->RootDevice1).Reference = (ID3D12Device1 *)pFVar40;
        pFVar34 = pFVar33;
      }
      local_9c8 = 0;
      local_a28 = pFVar40;
      local_9c0.ReferenceController = (TReferenceControllerBase<1> *)pFVar34;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a20,&local_9c0);
      FVar36.ReferenceController = local_9c0.ReferenceController;
    }
    else {
      bVar16 = FD3D12AdapterDesc::IsValid(&local_468);
      if (bVar16) {
        pFVar33 = ::operator_new(0x898);
        pFVar40 = pFVar34;
        if (pFVar33 != (FD3D12Adapter *)0x0) {
          FD3D12Adapter::FD3D12Adapter(pFVar33,&local_468);
          pFVar33->_padding_ = (longlong)&___7FWindowsD3D12Adapter__6B_;
          pFVar40 = pFVar33;
        }
        pFVar33 = ::operator_new(0x18);
        if (pFVar33 != (FD3D12Adapter *)0x0) {
          *(undefined4 *)&(pFVar33->RootDevice).Reference = 1;
          pFVar33->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VFWindowsD3D12Adapter__U__DefaultDeleter_VFWindowsD3D12Adapter___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          *(undefined4 *)((longlong)&(pFVar33->RootDevice).Reference + 4) = 1;
          (pFVar33->RootDevice1).Reference = (ID3D12Device1 *)pFVar40;
          pFVar34 = pFVar33;
        }
        local_9b8 = 0;
        local_a28 = pFVar40;
        local_9b0.ReferenceController = (TReferenceControllerBase<1> *)pFVar34;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a20,&local_9b0);
        FVar36.ReferenceController = local_9b0.ReferenceController;
      }
      else {
        bVar16 = FD3D12AdapterDesc::IsValid(&local_308);
        if (bVar16) {
          pFVar33 = ::operator_new(0x898);
          pFVar40 = pFVar34;
          if (pFVar33 != (FD3D12Adapter *)0x0) {
            FD3D12Adapter::FD3D12Adapter(pFVar33,&local_308);
            pFVar33->_padding_ = (longlong)&___7FWindowsD3D12Adapter__6B_;
            pFVar40 = pFVar33;
          }
          pFVar33 = ::operator_new(0x18);
          if (pFVar33 != (FD3D12Adapter *)0x0) {
            *(undefined4 *)&(pFVar33->RootDevice).Reference = 1;
            pFVar33->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_VFWindowsD3D12Adapter__U__DefaultDeleter_VFWindowsD3D12Adapter___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            *(undefined4 *)((longlong)&(pFVar33->RootDevice).Reference + 4) = 1;
            (pFVar33->RootDevice1).Reference = (ID3D12Device1 *)pFVar40;
            pFVar34 = pFVar33;
          }
          local_9a8 = 0;
          local_a28 = pFVar40;
          local_9a0.ReferenceController = (TReferenceControllerBase<1> *)pFVar34;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a20,&local_9a0);
          FVar36.ReferenceController = local_9a0.ReferenceController;
        }
        else {
          pFVar33 = ::operator_new(0x898);
          pFVar40 = pFVar34;
          if (pFVar33 != (FD3D12Adapter *)0x0) {
            FD3D12Adapter::FD3D12Adapter(pFVar33,&local_1a8);
            pFVar33->_padding_ = (longlong)&___7FWindowsD3D12Adapter__6B_;
            pFVar40 = pFVar33;
          }
          pFVar33 = ::operator_new(0x18);
          if (pFVar33 != (FD3D12Adapter *)0x0) {
            *(undefined4 *)&(pFVar33->RootDevice).Reference = 1;
            pFVar33->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_VFWindowsD3D12Adapter__U__DefaultDeleter_VFWindowsD3D12Adapter___SharedPointerInternals___00_SharedPointerInternals__6B_
            ;
            *(undefined4 *)((longlong)&(pFVar33->RootDevice).Reference + 4) = 1;
            (pFVar33->RootDevice1).Reference = (ID3D12Device1 *)pFVar40;
            pFVar34 = pFVar33;
          }
          local_998 = 0;
          local_a28 = pFVar40;
          local_990.ReferenceController = (TReferenceControllerBase<1> *)pFVar34;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_a20,&local_990);
          FVar36.ReferenceController = local_990.ReferenceController;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar36.ReferenceController);
  pFVar38 = (pFVar13->ChosenAdapters).AllocatorInstance.Data;
  pTVar1 = &pFVar13->ChosenAdapters;
  if (((pFVar38 <= (FScriptContainerElement *)&local_a28) &&
      ((FScriptContainerElement *)&local_a28 <
       pFVar38 + (longlong)(pFVar13->ChosenAdapters).ArrayMax * 0x10)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar18 = (pFVar13->ChosenAdapters).ArrayNum;
  piVar2 = &(pFVar13->ChosenAdapters).ArrayMax;
  if (iVar18 == *piVar2) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar13->ChosenAdapters).ArrayNum = iVar18 + 1;
  pFVar38 = (pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 0x10;
  *(FD3D12Adapter **)pFVar38 = local_a28;
  *(TReferenceControllerBase<1> **)(pFVar38 + 8) = local_a20.ReferenceController;
  if (local_a20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (4 < (byte)LogD3D12RHI._0_1_) {
    GetModuleHandleW(L"D3D12Core.dll");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  if (0 < (pFVar13->ChosenAdapters).ArrayNum) {
    pFVar38 = (pTVar1->AllocatorInstance).Data;
    if ((*(longlong *)pFVar38 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar16 = FD3D12AdapterDesc::IsValid((FD3D12AdapterDesc *)(*(longlong *)pFVar38 + 0xd8));
    if (bVar16) {
      if (4 < (byte)LogD3D12RHI._0_1_) {
        if (((pFVar13->ChosenAdapters).ArrayNum < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(longlong *)(pTVar1->AllocatorInstance).Data == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (((pFVar13->ChosenAdapters).ArrayNum < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar38 = (pTVar1->AllocatorInstance).Data;
      if ((*(longlong *)pFVar38 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar37 = *(longlong *)pFVar38;
      GRHIGlobals.GpuInfo.VendorId = *(uint *)(lVar37 + 0x1d8);
      ::FString::operator=(&GRHIGlobals.GpuInfo.AdapterName,(wchar_t *)(lVar37 + 0xd8));
      GRHIGlobals.GpuInfo.DeviceId = *(uint *)(lVar37 + 0x1dc);
      GRHIGlobals.GpuInfo.DeviceRevision = *(uint *)(lVar37 + 0x1e4);
      goto LAB_145aa8cf0;
    }
  }
  if (1 < (byte)LogD3D12RHI._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
LAB_145aa8cf0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a20.ReferenceController);
  if (local_a10 != (IDXGIAdapter *)0x0) {
    (**(code **)((longlong)*local_a10 + 0x10))();
  }
  if (local_9e8 != (IDXGIFactory6 *)0x0) {
    (**(code **)((longlong)*local_9e8 + 0x10))();
  }
  if (local_a00 != (IDXGIFactory4 *)0x0) {
    (**(code **)((longlong)*(IDXGIFactory2 *)local_a00 + 0x10))();
  }
  return;
}


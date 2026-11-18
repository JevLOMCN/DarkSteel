// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 4

// SupportsDynamicReloading @ 14595a0f0

bool __thiscall FD3D11DynamicRHIModule::SupportsDynamicReloading(FD3D11DynamicRHIModule *this)

{
  return false;
}

// IsSupported @ 14595a100

bool __thiscall FD3D11DynamicRHIModule::IsSupported(FD3D11DynamicRHIModule *this)

{
  if ((this->ChosenAdapter).DXGIAdapter.Reference == (IDXGIAdapter *)0x0) {
    FindAdapter(this);
  }
  if (((this->ChosenAdapter).DXGIAdapter.Reference != (IDXGIAdapter *)0x0) &&
     (0xafff < (int)(this->ChosenAdapter).MaxSupportedFeatureLevel)) {
    return true;
  }
  return false;
}

// CreateRHI @ 14595a140

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDynamicRHI * __thiscall
FD3D11DynamicRHIModule::CreateRHI(FD3D11DynamicRHIModule *this,Type param_1)

{
  IDXGIAdapter *pIVar1;
  code *pcVar2;
  Type TVar3;
  bool bVar4;
  int iVar5;
  FDynamicRHI *pFVar6;
  FD3D11DynamicRHI *pFVar7;
  FD3D11DynamicRHI *pFVar8;
  wchar_t *pwVar9;
  FValidationRHI *this_00;
  Type local_res8 [2];
  IDXGIFactory1 *local_res18 [2];
  FString local_38;
  FString local_28;
  
  pIVar1 = (this->ChosenAdapter).DXGIAdapter.Reference;
  iVar5 = (**(code **)((longlong)*pIVar1 + 0x30))
                    (pIVar1,&_GUID_770aae78_f26f_4dba_a829_253c83d1b387,local_res18);
  if (iVar5 < 0) {
    VerifyD3D11Result(iVar5,
                      "ChosenAdapter.DXGIAdapter->GetParent(__uuidof(DXGIFactory1), reinterpret_cast<void**>(&DXGIFactory1))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                      ,0x3a9,(ID3D11Device *)0x0);
  }
  GRHIGlobals.ShaderPlatformForFeatureLevel[3] = SP_PCD3D_SM5;
  GRHIGlobals.ShaderPlatformForFeatureLevel[1] = SP_PCD3D_ES3_1;
  bVar4 = RHIGetPreviewFeatureLevel(local_res8);
  if (bVar4) {
    GMaxRHIFeatureLevel = local_res8[0];
  }
  else {
    GMaxRHIFeatureLevel = SM5;
    TVar3 = param_1;
    if ((int)param_1 < 4) goto LAB_14595a202;
  }
  TVar3 = GMaxRHIFeatureLevel;
  if (3 < (int)GMaxRHIFeatureLevel) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1934050346351461309>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                       ,0x3bd,"GMaxRHIFeatureLevel < ERHIFeatureLevel::SM6");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDynamicRHI *)(*pcVar2)();
      return pFVar6;
    }
    GMaxRHIFeatureLevel = SM5;
    TVar3 = GMaxRHIFeatureLevel;
  }
LAB_14595a202:
  GMaxRHIFeatureLevel = TVar3;
  GMaxRHIShaderPlatform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel];
  if ((GMaxRHIShaderPlatform == SP_NumPlatforms) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GMaxRHIShaderPlatform != SP_NumPlatforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                         ,0x3c2,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FDynamicRHI *)(*pcVar2)();
    return pFVar6;
  }
  pFVar7 = ::operator_new(0x17ef0);
  pFVar8 = (FD3D11DynamicRHI *)0x0;
  if (pFVar7 != (FD3D11DynamicRHI *)0x0) {
    pFVar8 = FD3D11DynamicRHI::FD3D11DynamicRHI
                       (pFVar7,local_res18[0],(this->ChosenAdapter).MaxSupportedFeatureLevel,
                        &this->ChosenAdapter);
  }
  GD3D11RHI = pFVar8;
  pwVar9 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar9,L"RHIValidation");
  pFVar7 = pFVar8;
  if ((bVar4) &&
     (this_00 = ::operator_new(0x90), pFVar7 = (FD3D11DynamicRHI *)0x0,
     this_00 != (FValidationRHI *)0x0)) {
    pFVar7 = (FD3D11DynamicRHI *)FValidationRHI::FValidationRHI(this_00,(FDynamicRHI *)pFVar8);
  }
  pwVar9 = L"false";
  if ((this->ChosenAdapter).bUMA != false) {
    pwVar9 = L"true";
  }
  ::FString::FString(&local_28,pwVar9);
  ::FString::FString(&local_38,L"RHI.IntegratedGPU");
  FGenericCrashContext::SetEngineData(&local_38,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FDynamicRHI *)pFVar7;
}

// FindAdapter @ 14597fb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11DynamicRHIModule::FindAdapter(FD3D11DynamicRHIModule *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  _LUID _Var13;
  FD3D11Adapter *pFVar14;
  D3D_FEATURE_LEVEL_conflict DVar15;
  char cVar16;
  DXGI_ADAPTER_DESC *pDVar17;
  undefined8 *puVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  EGpuVendorId EVar24;
  EGpuVendorId EVar25;
  EGpuVendorId EVar26;
  IModularFeatures *pIVar27;
  IHeadMountedDisplayModule *pIVar28;
  longlong *plVar29;
  IDXGIAdapter *pIVar30;
  wchar_t *pwVar31;
  DXGI_ADAPTER_DESC *pDVar32;
  DXGI_ADAPTER_DESC *pDVar33;
  undefined8 *puVar34;
  DXGI_ADAPTER_DESC *pDVar35;
  longlong lVar36;
  FD3D11Adapter *pFVar37;
  int iVar38;
  FD3D11DynamicRHIModule *pFVar39;
  TRefCountPtr<IDXGIAdapter> TVar40;
  IDXGIAdapter *pIVar41;
  IDXGIAdapter *pIVar42;
  TRefCountPtr<IDXGIAdapter> TVar43;
  TRefCountPtr<IDXGIAdapter> TVar44;
  undefined1 auStackY_858 [32];
  IDXGIAdapter *local_810;
  int local_808;
  int local_804;
  int local_800;
  _LUID local_7f8;
  IDXGIAdapter *local_7f0;
  int local_7e8;
  EGpuVendorId local_7e4;
  FD3D11Adapter *local_7e0;
  FD3D11DynamicRHIModule *local_7d8;
  IDXGIFactory1 *local_7d0;
  _LUID local_7c8;
  longlong *local_7c0;
  longlong *local_7b8;
  FD3D11DeviceBasicInfo local_7b0;
  FD3D11Adapter local_7a8;
  FD3D11Adapter local_668;
  FD3D11Adapter local_528;
  FD3D11Adapter local_3e8;
  IDXGIAdapter *local_2a8;
  undefined8 local_2a0 [38];
  D3D_FEATURE_LEVEL_conflict local_170;
  bool local_16c;
  char local_16b;
  DXGI_ADAPTER_DESC local_168;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_858;
  local_7e0 = &this->ChosenAdapter;
  local_7d8 = this;
  if (((local_7e0->DXGIAdapter).Reference != (IDXGIAdapter *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ChosenAdapter.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\Windows\\WindowsD3D11Device.cpp"
                          ,0x2c9,L""), bVar19)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TVar40.Reference = (IDXGIAdapter *)0x0;
  local_7d0 = (IDXGIFactory1 *)0x0;
  SafeCreateDXGIFactory(&local_7d0,GRHIGlobals.IsDebugLayerEnabled);
  if (local_7d0 == (IDXGIFactory1 *)0x0) {
    return;
  }
  local_7b8 = (longlong *)0x0;
  (**(code **)*local_7d0)(local_7d0,&_GUID_c1b6694f_ff09_44a9_b03c_77900a0a1d17,&local_7b8);
  bVar19 = IsInGameThread();
  if ((!bVar19) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Public\\IHeadMountedDisplayModule.h"
                          ,0x5a,L""), bVar19)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar27 = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
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
  iVar22 = (**(code **)((longlong)*pIVar27 + 0x18))
                     (pIVar27,`public:_static_class_FName___cdecl_IHeadMountedDisplayModule::GetModularFeatureName(void)'
                              ::__l2::HMDFeatureName);
  if (iVar22 < 1) {
    local_7f8.LowPart = 0;
    local_7f8.HighPart = 0;
  }
  else {
    pIVar28 = IHeadMountedDisplayModule::Get();
    local_7f8 = (_LUID)(**(code **)((longlong)*pIVar28 + 0x60))(pIVar28);
  }
  _Var13 = local_7f8;
  local_7c8 = local_7f8;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar19)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar29 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.GraphicsAdapter",1);
  pIVar30 = TVar40.Reference;
  if (plVar29 != (longlong *)0x0) {
    pIVar30 = (IDXGIAdapter *)(**(code **)(*plVar29 + 0x68))(plVar29);
  }
  if (_Var13 == (_LUID)0x0) {
    if (pIVar30 == (IDXGIAdapter *)0x0) {
      local_804 = -1;
    }
    else {
      local_804 = TConsoleVariableData<int>::GetValueOnGameThread
                            ((TConsoleVariableData<int> *)pIVar30);
    }
  }
  else {
    local_804 = -2;
  }
  pwVar31 = FCommandLine::Get();
  FParse::Value(pwVar31,L"graphicsadapter=",&local_804);
  bVar19 = local_804 == -1;
  local_810 = (IDXGIAdapter *)0x0;
  if (4 < (byte)LogD3D11RHI._0_1_) {
    GetFeatureLevelString(D3D_FEATURE_LEVEL_11_0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    if (4 < (byte)LogD3D11RHI._0_1_) {
      GetFeatureLevelString(D3D_FEATURE_LEVEL_11_1);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
  }
  local_7f0 = (IDXGIAdapter *)0x0;
  local_7a8.DXGIAdapter.Reference = (IDXGIAdapter *)0x0;
  local_528.DXGIAdapter.Reference = (IDXGIAdapter *)0x0;
  local_3e8.DXGIAdapter.Reference = (IDXGIAdapter *)0x0;
  local_668.DXGIAdapter.Reference = (IDXGIAdapter *)0x0;
  local_7c8.LowPart = 0;
  local_7c8.HighPart = 0;
  if (4 < (byte)LogD3D11RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  }
  local_7e4 = RHIGetPreferredAdapterVendor();
  pwVar31 = FCommandLine::Get();
  bVar20 = FParse::Param(pwVar31,L"AllowSoftwareRendering");
  local_7e8 = 2;
  pwVar31 = FCommandLine::Get();
  FParse::Value(pwVar31,L"-gpupreference=",&local_7e8);
  if (local_7e8 == 1) {
    local_800 = 1;
  }
  else if (local_7e8 == 2) {
    local_800 = 2;
  }
  else {
    local_800 = 0;
  }
  local_808 = 0;
  TVar44.Reference = TVar40.Reference;
  while( true ) {
    iVar23 = local_800;
    iVar22 = local_808;
    pIVar30 = local_810;
    iVar38 = 0;
    if (local_810 != (IDXGIAdapter *)0x0) {
      local_810 = (IDXGIAdapter *)0x0;
      (**(code **)((longlong)*(int (*) [2])pIVar30 + 0x10))(pIVar30);
    }
    if ((local_7b8 == (longlong *)0x0) || (iVar23 == 0)) {
      iVar23 = (**(code **)((longlong)*local_7d0 + 0x38))(local_7d0,iVar22,&local_810);
    }
    else {
      iVar23 = (**(code **)(*local_7b8 + 0xe8))
                         (local_7b8,iVar22,iVar23,&_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0);
    }
    TVar43.Reference = local_3e8.DXGIAdapter.Reference;
    pFVar14 = local_7e0;
    pIVar30 = local_7f0;
    if (iVar23 == -0x7785fffe) break;
    if (local_810 == (IDXGIAdapter *)0x0) {
      if ((byte)LogD3D11RHI._0_1_ < 5) {
LAB_145980692:
        local_808 = iVar22 + 1;
      }
      else {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        local_808 = iVar22 + 1;
      }
    }
    else {
      if (4 < (byte)LogD3D11RHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      }
      iVar23 = (**(code **)((longlong)*(int (*) [2])local_810 + 0x40))(local_810,&local_168);
      if (iVar23 < 0) {
        if (2 < (byte)LogD3D11RHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        }
      }
      else {
        LogDXGIAdapterDesc(&local_168);
      }
      bVar21 = SafeTestD3D11CreateDevice
                         (local_810,D3D_FEATURE_LEVEL_11_0,D3D_FEATURE_LEVEL_11_1,&local_7b0);
      if (bVar21) {
        while( true ) {
          local_7c0 = (longlong *)0x0;
          iVar22 = (**(code **)((longlong)*(int (*) [2])local_810 + 0x38))
                             (local_810,iVar38,&local_7c0);
          if (iVar22 < 0) break;
          iVar38 = iVar38 + 1;
          if (local_7c0 != (longlong *)0x0) {
            (**(code **)(*local_7c0 + 0x10))();
          }
        }
        if (local_7c0 != (longlong *)0x0) {
          (**(code **)(*local_7c0 + 0x10))();
        }
        DVar15 = local_7b0.MaxFeatureLevel;
        if (4 < (byte)LogD3D11RHI._0_1_) {
          GetFeatureLevelString(local_7b0.MaxFeatureLevel);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
        }
        bVar21 = local_7b0.bUMA;
        if (4 < (byte)LogD3D11RHI._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u________u__u__u__151062698,
                     (FLogCategoryBase *)&LogD3D11RHI);
        }
        EVar24 = RHIConvertToGpuVendorId(local_168.VendorId);
        FGenericPlatformStricmp::Stricmp(local_168.Description,L"NVIDIA PerfHUD");
        pIVar30 = local_810;
        if (local_810 == (IDXGIAdapter *)0x0) {
          local_2a8 = local_810;
        }
        else {
          (**(code **)((longlong)*(int (*) [2])local_810 + 8))(local_810);
          local_2a8 = pIVar30;
          (**(code **)((longlong)*(int (*) [2])pIVar30 + 8))(pIVar30);
        }
        local_170 = DVar15;
        local_16c = EVar24 == Microsoft;
        local_16b = bVar21;
        if ((local_2a8 != (IDXGIAdapter *)0x0) &&
           (iVar22 = (**(code **)((longlong)*(int (*) [2])local_2a8 + 0x40))(local_2a8), iVar22 < 0)
           ) {
          VerifyD3D11Result(iVar22,"DXGIAdapter->GetDesc(&DXGIAdapterDesc)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11RHIPrivate.h"
                            ,0x160,(ID3D11Device *)0x0);
        }
        if (pIVar30 != (IDXGIAdapter *)0x0) {
          (**(code **)((longlong)*(int (*) [2])pIVar30 + 0x10))(pIVar30);
        }
        pIVar30 = local_2a8;
        EVar26 = local_7e4;
        if ((((EVar24 != Microsoft) || (bVar20)) || (-1 < local_804)) || (local_7f8 != (_LUID)0x0))
        {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((local_7f8 == (_LUID)0x0) || (local_7f8 == local_168.AdapterLuid)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((local_804 < 0) || (local_808 == local_804)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if ((((!bVar10) && (!bVar11)) && (!bVar12)) && (local_2a8 != (IDXGIAdapter *)0x0)) {
          if (((local_7e4 != Unknown) &&
              (EVar25 = RHIConvertToGpuVendorId(local_168.VendorId), EVar26 == EVar25)) &&
             (local_7f0 == (IDXGIAdapter *)0x0)) {
            local_7a8.DXGIAdapter.Reference = pIVar30;
            (**(code **)((longlong)*(int (*) [2])pIVar30 + 8))(pIVar30);
            lVar36 = 2;
            pDVar17 = &local_7a8.DXGIAdapterDesc;
            puVar18 = local_2a0;
            do {
              puVar34 = puVar18;
              pDVar32 = pDVar17;
              uVar6 = puVar34[1];
              uVar7 = puVar34[2];
              uVar8 = puVar34[3];
              *(undefined8 *)pDVar32->Description = *puVar34;
              *(undefined8 *)(pDVar32->Description + 4) = uVar6;
              uVar6 = puVar34[4];
              uVar9 = puVar34[5];
              *(undefined8 *)(pDVar32->Description + 8) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0xc) = uVar8;
              uVar7 = puVar34[6];
              uVar8 = puVar34[7];
              *(undefined8 *)(pDVar32->Description + 0x10) = uVar6;
              *(undefined8 *)(pDVar32->Description + 0x14) = uVar9;
              uVar6 = puVar34[8];
              uVar9 = puVar34[9];
              *(undefined8 *)(pDVar32->Description + 0x18) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0x1c) = uVar8;
              uVar7 = puVar34[10];
              uVar8 = puVar34[0xb];
              *(undefined8 *)(pDVar32->Description + 0x20) = uVar6;
              *(undefined8 *)(pDVar32->Description + 0x24) = uVar9;
              uVar6 = puVar34[0xc];
              uVar9 = puVar34[0xd];
              *(undefined8 *)(pDVar32->Description + 0x28) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0x2c) = uVar8;
              uVar7 = puVar34[0xe];
              uVar8 = puVar34[0xf];
              *(undefined8 *)(pDVar32->Description + 0x30) = uVar6;
              *(undefined8 *)(pDVar32->Description + 0x34) = uVar9;
              *(undefined8 *)(pDVar32->Description + 0x38) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0x3c) = uVar8;
              pIVar30 = local_2a8;
              lVar36 = lVar36 + -1;
              pDVar17 = (DXGI_ADAPTER_DESC *)(pDVar32->Description + 0x40);
              puVar18 = puVar34 + 0x10;
            } while (lVar36 != 0);
            uVar6 = puVar34[0x11];
            uVar7 = puVar34[0x12];
            uVar8 = puVar34[0x13];
            *(undefined8 *)((DXGI_ADAPTER_DESC *)(pDVar32->Description + 0x40))->Description =
                 puVar34[0x10];
            *(undefined8 *)(pDVar32->Description + 0x44) = uVar6;
            uVar2 = *(undefined4 *)(puVar34 + 0x14);
            uVar3 = *(undefined4 *)((longlong)puVar34 + 0xa4);
            uVar4 = *(undefined4 *)(puVar34 + 0x15);
            uVar5 = *(undefined4 *)((longlong)puVar34 + 0xac);
            *(undefined8 *)(pDVar32->Description + 0x48) = uVar7;
            *(undefined8 *)(pDVar32->Description + 0x4c) = uVar8;
            *(undefined4 *)(pDVar32->Description + 0x50) = uVar2;
            *(undefined4 *)(pDVar32->Description + 0x52) = uVar3;
            *(undefined4 *)(pDVar32->Description + 0x54) = uVar4;
            *(undefined4 *)(pDVar32->Description + 0x56) = uVar5;
            local_7a8.MaxSupportedFeatureLevel = local_170;
            local_7a8.bSoftwareAdapter = local_16c;
            local_7a8.bUMA = (bool)local_16b;
            local_7f0 = local_7a8.DXGIAdapter.Reference;
          }
          if ((EVar24 != Microsoft) && (bVar21 == false)) {
            if (local_3e8.DXGIAdapter.Reference == (IDXGIAdapter *)0x0) {
              if (pIVar30 != (IDXGIAdapter *)0x0) {
                local_3e8.DXGIAdapter.Reference = pIVar30;
                (**(code **)((longlong)*(int (*) [2])pIVar30 + 8))(pIVar30);
                pIVar30 = local_2a8;
              }
              lVar36 = 2;
              pDVar17 = &local_3e8.DXGIAdapterDesc;
              puVar18 = local_2a0;
              do {
                puVar34 = puVar18;
                pDVar32 = pDVar17;
                uVar6 = puVar34[1];
                uVar7 = puVar34[2];
                uVar8 = puVar34[3];
                *(undefined8 *)pDVar32->Description = *puVar34;
                *(undefined8 *)(pDVar32->Description + 4) = uVar6;
                uVar6 = puVar34[4];
                uVar9 = puVar34[5];
                *(undefined8 *)(pDVar32->Description + 8) = uVar7;
                *(undefined8 *)(pDVar32->Description + 0xc) = uVar8;
                uVar7 = puVar34[6];
                uVar8 = puVar34[7];
                *(undefined8 *)(pDVar32->Description + 0x10) = uVar6;
                *(undefined8 *)(pDVar32->Description + 0x14) = uVar9;
                uVar6 = puVar34[8];
                uVar9 = puVar34[9];
                *(undefined8 *)(pDVar32->Description + 0x18) = uVar7;
                *(undefined8 *)(pDVar32->Description + 0x1c) = uVar8;
                uVar7 = puVar34[10];
                uVar8 = puVar34[0xb];
                *(undefined8 *)(pDVar32->Description + 0x20) = uVar6;
                *(undefined8 *)(pDVar32->Description + 0x24) = uVar9;
                uVar6 = puVar34[0xc];
                uVar9 = puVar34[0xd];
                *(undefined8 *)(pDVar32->Description + 0x28) = uVar7;
                *(undefined8 *)(pDVar32->Description + 0x2c) = uVar8;
                uVar7 = puVar34[0xe];
                uVar8 = puVar34[0xf];
                *(undefined8 *)(pDVar32->Description + 0x30) = uVar6;
                *(undefined8 *)(pDVar32->Description + 0x34) = uVar9;
                *(undefined8 *)(pDVar32->Description + 0x38) = uVar7;
                *(undefined8 *)(pDVar32->Description + 0x3c) = uVar8;
                lVar36 = lVar36 + -1;
                pDVar17 = (DXGI_ADAPTER_DESC *)(pDVar32->Description + 0x40);
                puVar18 = puVar34 + 0x10;
              } while (lVar36 != 0);
              uVar6 = puVar34[0x11];
              uVar7 = puVar34[0x12];
              uVar8 = puVar34[0x13];
              *(undefined8 *)((DXGI_ADAPTER_DESC *)(pDVar32->Description + 0x40))->Description =
                   puVar34[0x10];
              *(undefined8 *)(pDVar32->Description + 0x44) = uVar6;
              uVar2 = *(undefined4 *)(puVar34 + 0x14);
              uVar3 = *(undefined4 *)((longlong)puVar34 + 0xa4);
              uVar4 = *(undefined4 *)(puVar34 + 0x15);
              uVar5 = *(undefined4 *)((longlong)puVar34 + 0xac);
              *(undefined8 *)(pDVar32->Description + 0x48) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0x4c) = uVar8;
              *(undefined4 *)(pDVar32->Description + 0x50) = uVar2;
              *(undefined4 *)(pDVar32->Description + 0x52) = uVar3;
              *(undefined4 *)(pDVar32->Description + 0x54) = uVar4;
              *(undefined4 *)(pDVar32->Description + 0x56) = uVar5;
              local_3e8.MaxSupportedFeatureLevel = local_170;
              local_3e8.bSoftwareAdapter = local_16c;
              local_3e8.bUMA = (bool)local_16b;
            }
            if ((ulonglong)local_7c8 < local_168.DedicatedVideoMemory) {
              pIVar41 = pIVar30;
              pIVar42 = TVar40.Reference;
              if (TVar40.Reference != pIVar30) {
                if (pIVar30 != (IDXGIAdapter *)0x0) {
                  local_528.DXGIAdapter.Reference = pIVar30;
                  (**(code **)((longlong)*(int (*) [2])pIVar30 + 8))(pIVar30);
                  pIVar41 = local_2a8;
                }
                pIVar42 = pIVar30;
                local_528.DXGIAdapter.Reference = pIVar30;
                if (TVar40.Reference != (IDXGIAdapter *)0x0) {
                  (**(code **)((longlong)*(int (*) [2])TVar40.Reference + 0x10))(TVar40.Reference);
                  pIVar41 = local_2a8;
                  local_528.DXGIAdapter.Reference = pIVar30;
                }
              }
              pIVar30 = pIVar41;
              EVar24 = local_7e4;
              lVar36 = 2;
              pDVar17 = &local_528.DXGIAdapterDesc;
              puVar18 = local_2a0;
              do {
                puVar34 = puVar18;
                pDVar32 = pDVar17;
                uVar6 = puVar34[1];
                uVar7 = puVar34[2];
                uVar8 = puVar34[3];
                *(undefined8 *)pDVar32->Description = *puVar34;
                *(undefined8 *)(pDVar32->Description + 4) = uVar6;
                uVar6 = puVar34[4];
                uVar9 = puVar34[5];
                *(undefined8 *)(pDVar32->Description + 8) = uVar7;
                *(undefined8 *)(pDVar32->Description + 0xc) = uVar8;
                uVar7 = puVar34[6];
                uVar8 = puVar34[7];
                *(undefined8 *)(pDVar32->Description + 0x10) = uVar6;
                *(undefined8 *)(pDVar32->Description + 0x14) = uVar9;
                uVar6 = puVar34[8];
                uVar9 = puVar34[9];
                *(undefined8 *)(pDVar32->Description + 0x18) = uVar7;
                *(undefined8 *)(pDVar32->Description + 0x1c) = uVar8;
                uVar7 = puVar34[10];
                uVar8 = puVar34[0xb];
                *(undefined8 *)(pDVar32->Description + 0x20) = uVar6;
                *(undefined8 *)(pDVar32->Description + 0x24) = uVar9;
                uVar6 = puVar34[0xc];
                uVar9 = puVar34[0xd];
                *(undefined8 *)(pDVar32->Description + 0x28) = uVar7;
                *(undefined8 *)(pDVar32->Description + 0x2c) = uVar8;
                uVar7 = puVar34[0xe];
                uVar8 = puVar34[0xf];
                *(undefined8 *)(pDVar32->Description + 0x30) = uVar6;
                *(undefined8 *)(pDVar32->Description + 0x34) = uVar9;
                *(undefined8 *)(pDVar32->Description + 0x38) = uVar7;
                *(undefined8 *)(pDVar32->Description + 0x3c) = uVar8;
                cVar16 = local_16b;
                bVar21 = local_16c;
                DVar15 = local_170;
                lVar36 = lVar36 + -1;
                pDVar17 = (DXGI_ADAPTER_DESC *)(pDVar32->Description + 0x40);
                puVar18 = puVar34 + 0x10;
              } while (lVar36 != 0);
              uVar6 = puVar34[0x11];
              uVar7 = puVar34[0x12];
              uVar8 = puVar34[0x13];
              *(undefined8 *)((DXGI_ADAPTER_DESC *)(pDVar32->Description + 0x40))->Description =
                   puVar34[0x10];
              *(undefined8 *)(pDVar32->Description + 0x44) = uVar6;
              uVar6 = puVar34[0x14];
              uVar9 = puVar34[0x15];
              local_7c8.LowPart = (undefined4)local_168.DedicatedVideoMemory;
              local_7c8.HighPart = local_168.DedicatedVideoMemory._4_4_;
              *(undefined8 *)(pDVar32->Description + 0x48) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0x4c) = uVar8;
              *(undefined8 *)(pDVar32->Description + 0x50) = uVar6;
              *(undefined8 *)(pDVar32->Description + 0x54) = uVar9;
              local_528.MaxSupportedFeatureLevel = DVar15;
              local_528.bSoftwareAdapter = bVar21;
              local_528.bUMA = (bool)cVar16;
              TVar40.Reference = local_528.DXGIAdapter.Reference;
              if ((local_7e4 != Unknown) &&
                 (EVar26 = RHIConvertToGpuVendorId(local_168.VendorId), pIVar41 = local_7f0,
                 TVar40.Reference = local_528.DXGIAdapter.Reference, EVar24 == EVar26)) {
                if (local_7f0 != pIVar42) {
                  local_7a8.DXGIAdapter.Reference = pIVar42;
                  if (pIVar42 != (IDXGIAdapter *)0x0) {
                    (**(code **)((longlong)*(int (*) [2])pIVar42 + 8))(pIVar42);
                    pIVar30 = local_2a8;
                  }
                  if (pIVar41 != (IDXGIAdapter *)0x0) {
                    (**(code **)((longlong)*(int (*) [2])pIVar41 + 0x10))(pIVar41);
                    pIVar30 = local_2a8;
                  }
                }
                lVar36 = 2;
                pDVar17 = &local_7a8.DXGIAdapterDesc;
                pDVar32 = &local_528.DXGIAdapterDesc;
                do {
                  pDVar35 = pDVar32;
                  pDVar33 = pDVar17;
                  uVar6 = *(undefined8 *)(pDVar35->Description + 4);
                  uVar7 = *(undefined8 *)(pDVar35->Description + 8);
                  uVar8 = *(undefined8 *)(pDVar35->Description + 0xc);
                  *(undefined8 *)pDVar33->Description = *(undefined8 *)pDVar35->Description;
                  *(undefined8 *)(pDVar33->Description + 4) = uVar6;
                  uVar6 = *(undefined8 *)(pDVar35->Description + 0x10);
                  uVar9 = *(undefined8 *)(pDVar35->Description + 0x14);
                  *(undefined8 *)(pDVar33->Description + 8) = uVar7;
                  *(undefined8 *)(pDVar33->Description + 0xc) = uVar8;
                  uVar7 = *(undefined8 *)(pDVar35->Description + 0x18);
                  uVar8 = *(undefined8 *)(pDVar35->Description + 0x1c);
                  *(undefined8 *)(pDVar33->Description + 0x10) = uVar6;
                  *(undefined8 *)(pDVar33->Description + 0x14) = uVar9;
                  uVar6 = *(undefined8 *)(pDVar35->Description + 0x20);
                  uVar9 = *(undefined8 *)(pDVar35->Description + 0x24);
                  *(undefined8 *)(pDVar33->Description + 0x18) = uVar7;
                  *(undefined8 *)(pDVar33->Description + 0x1c) = uVar8;
                  uVar7 = *(undefined8 *)(pDVar35->Description + 0x28);
                  uVar8 = *(undefined8 *)(pDVar35->Description + 0x2c);
                  *(undefined8 *)(pDVar33->Description + 0x20) = uVar6;
                  *(undefined8 *)(pDVar33->Description + 0x24) = uVar9;
                  uVar6 = *(undefined8 *)(pDVar35->Description + 0x30);
                  uVar9 = *(undefined8 *)(pDVar35->Description + 0x34);
                  *(undefined8 *)(pDVar33->Description + 0x28) = uVar7;
                  *(undefined8 *)(pDVar33->Description + 0x2c) = uVar8;
                  uVar7 = *(undefined8 *)(pDVar35->Description + 0x38);
                  uVar8 = *(undefined8 *)(pDVar35->Description + 0x3c);
                  *(undefined8 *)(pDVar33->Description + 0x30) = uVar6;
                  *(undefined8 *)(pDVar33->Description + 0x34) = uVar9;
                  *(undefined8 *)(pDVar33->Description + 0x38) = uVar7;
                  *(undefined8 *)(pDVar33->Description + 0x3c) = uVar8;
                  lVar36 = lVar36 + -1;
                  pDVar17 = (DXGI_ADAPTER_DESC *)(pDVar33->Description + 0x40);
                  pDVar32 = (DXGI_ADAPTER_DESC *)(pDVar35->Description + 0x40);
                } while (lVar36 != 0);
                uVar6 = *(undefined8 *)(pDVar35->Description + 0x44);
                uVar7 = *(undefined8 *)(pDVar35->Description + 0x48);
                uVar8 = *(undefined8 *)(pDVar35->Description + 0x4c);
                *(undefined8 *)((DXGI_ADAPTER_DESC *)(pDVar33->Description + 0x40))->Description =
                     *(undefined8 *)
                      ((DXGI_ADAPTER_DESC *)(pDVar35->Description + 0x40))->Description;
                *(undefined8 *)(pDVar33->Description + 0x44) = uVar6;
                uVar6 = *(undefined8 *)(pDVar35->Description + 0x50);
                uVar9 = *(undefined8 *)(pDVar35->Description + 0x54);
                *(undefined8 *)(pDVar33->Description + 0x48) = uVar7;
                *(undefined8 *)(pDVar33->Description + 0x4c) = uVar8;
                *(undefined8 *)(pDVar33->Description + 0x50) = uVar6;
                *(undefined8 *)(pDVar33->Description + 0x54) = uVar9;
                local_7f0 = local_7a8.DXGIAdapter.Reference;
                local_7a8.MaxSupportedFeatureLevel = DVar15;
                local_7a8.bSoftwareAdapter = bVar21;
                local_7a8.bUMA = (bool)cVar16;
                TVar40.Reference = local_528.DXGIAdapter.Reference;
              }
            }
          }
          if (local_668.DXGIAdapter.Reference == (IDXGIAdapter *)0x0) {
            if (pIVar30 != (IDXGIAdapter *)0x0) {
              local_668.DXGIAdapter.Reference = pIVar30;
              (**(code **)((longlong)*(int (*) [2])pIVar30 + 8))(pIVar30);
              pIVar30 = local_2a8;
            }
            lVar36 = 2;
            pDVar17 = &local_668.DXGIAdapterDesc;
            puVar18 = local_2a0;
            do {
              puVar34 = puVar18;
              pDVar32 = pDVar17;
              uVar6 = puVar34[1];
              uVar7 = puVar34[2];
              uVar8 = puVar34[3];
              *(undefined8 *)pDVar32->Description = *puVar34;
              *(undefined8 *)(pDVar32->Description + 4) = uVar6;
              uVar6 = puVar34[4];
              uVar9 = puVar34[5];
              *(undefined8 *)(pDVar32->Description + 8) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0xc) = uVar8;
              uVar7 = puVar34[6];
              uVar8 = puVar34[7];
              *(undefined8 *)(pDVar32->Description + 0x10) = uVar6;
              *(undefined8 *)(pDVar32->Description + 0x14) = uVar9;
              uVar6 = puVar34[8];
              uVar9 = puVar34[9];
              *(undefined8 *)(pDVar32->Description + 0x18) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0x1c) = uVar8;
              uVar7 = puVar34[10];
              uVar8 = puVar34[0xb];
              *(undefined8 *)(pDVar32->Description + 0x20) = uVar6;
              *(undefined8 *)(pDVar32->Description + 0x24) = uVar9;
              uVar6 = puVar34[0xc];
              uVar9 = puVar34[0xd];
              *(undefined8 *)(pDVar32->Description + 0x28) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0x2c) = uVar8;
              uVar7 = puVar34[0xe];
              uVar8 = puVar34[0xf];
              *(undefined8 *)(pDVar32->Description + 0x30) = uVar6;
              *(undefined8 *)(pDVar32->Description + 0x34) = uVar9;
              *(undefined8 *)(pDVar32->Description + 0x38) = uVar7;
              *(undefined8 *)(pDVar32->Description + 0x3c) = uVar8;
              lVar36 = lVar36 + -1;
              pDVar17 = (DXGI_ADAPTER_DESC *)(pDVar32->Description + 0x40);
              puVar18 = puVar34 + 0x10;
            } while (lVar36 != 0);
            uVar6 = puVar34[0x11];
            uVar7 = puVar34[0x12];
            uVar8 = puVar34[0x13];
            *(undefined8 *)((DXGI_ADAPTER_DESC *)(pDVar32->Description + 0x40))->Description =
                 puVar34[0x10];
            *(undefined8 *)(pDVar32->Description + 0x44) = uVar6;
            uVar6 = puVar34[0x14];
            uVar9 = puVar34[0x15];
            *(undefined8 *)(pDVar32->Description + 0x48) = uVar7;
            *(undefined8 *)(pDVar32->Description + 0x4c) = uVar8;
            *(undefined8 *)(pDVar32->Description + 0x50) = uVar6;
            *(undefined8 *)(pDVar32->Description + 0x54) = uVar9;
            local_668.MaxSupportedFeatureLevel = local_170;
            local_668.bSoftwareAdapter = local_16c;
            local_668.bUMA = (bool)local_16b;
          }
        }
        TVar44.Reference = local_668.DXGIAdapter.Reference;
        iVar22 = local_808;
        if (pIVar30 != (IDXGIAdapter *)0x0) {
          (**(code **)((longlong)*(int (*) [2])pIVar30 + 0x10))(pIVar30);
          iVar22 = local_808;
        }
        goto LAB_145980692;
      }
      if ((byte)LogD3D11RHI._0_1_ < 5) goto LAB_145980692;
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      local_808 = iVar22 + 1;
    }
  }
  if (bVar19) {
    if (local_7f0 == (IDXGIAdapter *)0x0) {
      if (TVar40.Reference == (IDXGIAdapter *)0x0) {
        if (local_3e8.DXGIAdapter.Reference == (IDXGIAdapter *)0x0) goto LAB_14598075a;
        pFVar37 = &local_3e8;
        goto LAB_145980761;
      }
      pFVar37 = &local_528;
    }
    else {
      pFVar37 = &local_7a8;
    }
    FD3D11Adapter::operator=(local_7e0,pFVar37);
    TVar43.Reference = local_3e8.DXGIAdapter.Reference;
  }
  else {
LAB_14598075a:
    pFVar37 = &local_668;
LAB_145980761:
    FD3D11Adapter::operator=(local_7e0,pFVar37);
  }
  if ((pFVar14->DXGIAdapter).Reference == (IDXGIAdapter *)0x0) {
    pFVar39 = local_7d8;
    if (1 < (byte)LogD3D11RHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      pFVar39 = local_7d8;
    }
  }
  else {
    if (4 < (byte)LogD3D11RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
    }
    pFVar39 = local_7d8;
    LogDXGIAdapterDesc(&(local_7d8->ChosenAdapter).DXGIAdapterDesc);
  }
  ::FString::operator=
            (&GRHIGlobals.GpuInfo.AdapterName,(pFVar39->ChosenAdapter).DXGIAdapterDesc.Description);
  GRHIGlobals.GpuInfo.VendorId = (local_7d8->ChosenAdapter).DXGIAdapterDesc.VendorId;
  GRHIGlobals.GpuInfo.DeviceId = (local_7d8->ChosenAdapter).DXGIAdapterDesc.DeviceId;
  GRHIGlobals.GpuInfo.DeviceRevision = (local_7d8->ChosenAdapter).DXGIAdapterDesc.Revision;
  GRHIGlobals.DeviceIsIntegrated = (local_7d8->ChosenAdapter).bUMA;
  if (4 < (byte)LogD3D11RHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  }
  if (TVar44.Reference != (IDXGIAdapter *)0x0) {
    (**(code **)((longlong)*(int (*) [2])TVar44.Reference + 0x10))(TVar44.Reference);
  }
  if (TVar43.Reference != (IDXGIAdapter *)0x0) {
    (**(code **)((longlong)*(int (*) [2])TVar43.Reference + 0x10))(TVar43.Reference);
  }
  if (TVar40.Reference != (IDXGIAdapter *)0x0) {
    (**(code **)((longlong)*(int (*) [2])TVar40.Reference + 0x10))(TVar40.Reference);
  }
  if (pIVar30 != (IDXGIAdapter *)0x0) {
    (**(code **)((longlong)*(int (*) [2])pIVar30 + 0x10))(pIVar30);
  }
  if (local_810 != (IDXGIAdapter *)0x0) {
    (**(code **)((longlong)*(int (*) [2])local_810 + 0x10))();
  }
  if (local_7b8 != (longlong *)0x0) {
    (**(code **)(*local_7b8 + 0x10))();
  }
  if (local_7d0 != (IDXGIFactory1 *)0x0) {
    (**(code **)((longlong)*local_7d0 + 0x10))();
  }
  return;
}


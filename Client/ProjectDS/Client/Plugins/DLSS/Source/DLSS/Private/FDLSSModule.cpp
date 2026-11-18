// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 11

// StartupModule @ 14de1dea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDLSSModule::StartupModule(FDLSSModule *this)

{
  TUniquePtr<NGXRHI,TDefaultDelete<NGXRHI>_> *pTVar1;
  EDLSSSupport *pEVar2;
  undefined8 uVar3;
  uint uVar4;
  NVSDK_NGX_Result NVar5;
  FName FVar6;
  FDLSSDenoiser *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  IScreenSpaceDenoiser *pIVar11;
  TConsoleVariableData<int> *pTVar12;
  TConsoleVariableData<int> *pTVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  IPluginManager *pIVar18;
  longlong *plVar19;
  size_t sVar20;
  wchar_t *pwVar21;
  TTuple<bool,wchar_t_const_*> *pTVar22;
  UDLSSSettings *pUVar23;
  wchar_t *pwVar24;
  longlong lVar25;
  UClass *this_00;
  FName *pFVar26;
  FModuleManager *this_01;
  IModuleInterface *pIVar27;
  undefined8 *puVar28;
  FDLSSUpscaler *pFVar29;
  FDLSSDenoiser *pFVar30;
  FSceneViewExtensionBase *this_02;
  FNGXAutomationViewExtension *this_03;
  IConsoleManager *pIVar31;
  FStaticBasicLogRecord *pFVar32;
  NGXRHI *pNVar33;
  ENGXSupport EVar34;
  FDLSSDenoiser *pFVar35;
  wchar_t *pwVar36;
  undefined1 auStackY_478 [32];
  FAutoRegister local_438;
  FAutoRegister local_437 [7];
  FString local_430;
  FString local_420;
  wchar_t *local_410;
  int local_408;
  FString local_400;
  ForAnyElementType local_3e8;
  int local_3dc;
  FDynamicRHI *local_3d8;
  undefined8 local_3d0;
  uint local_3c8;
  FScriptContainerElement *local_3c0;
  undefined8 local_3b8;
  FScriptContainerElement *local_3b0;
  undefined8 local_3a8;
  undefined1 local_3a0;
  undefined8 local_398;
  FDLSSUpscalerViewExtension *local_388;
  FSharedReferencer<1> local_380;
  TSharedRef<FDLSSUpscalerViewExtension,1> local_378;
  FNGXAutomationViewExtension *local_368;
  FSharedReferencer<1> FStack_360;
  TSharedRef<FNGXAutomationViewExtension,1> local_358;
  undefined8 *local_348;
  TRawPtrProxy<FDLSSUpscalerViewExtension> local_340;
  TRawPtrProxy<FNGXAutomationViewExtension> local_338;
  FString local_330;
  wchar_t *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  TSharedRef<ISceneViewExtension,1> local_308;
  TSharedRef<ISceneViewExtension,1> local_2f8;
  TStringView<wchar_t> local_2e8;
  wchar_t *local_2d8;
  undefined4 local_2d0;
  FName local_2c8 [2];
  wchar_t *local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [8];
  TReferenceControllerBase<1> *local_2a0;
  TTuple<bool,wchar_t_const_*> local_298;
  TTuple<bool,wchar_t_const_*> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_478;
  pwVar36 = (wchar_t *)0x0;
  if (4 < (byte)LogDLSS._0_1_) {
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"FDLSSModule::StartupModule",0x1a,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
  }
  if (GDynamicRHI == (FDynamicRHI *)0x0) {
    if (4 < (byte)LogDLSS._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    }
    this->NGXSupport = NotSupported;
    return;
  }
  pIVar18 = IPluginManager::Get();
  local_318 = L"DLSS";
  uStack_310 = 4;
  uStack_2b0 = CONCAT44(uStack_30c,4);
  local_2b8 = L"DLSS";
  plVar19 = (longlong *)(**(code **)((longlong)*pIVar18 + 0x70))(pIVar18,local_2a8,&local_2b8);
  if ((*plVar19 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (**(code **)(*(longlong *)*plVar19 + 0x20))((longlong *)*plVar19,&local_410);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2a0);
  local_2e8.Size = 0;
  local_2e8.DataPtr = L"";
  if (local_408 != 0) {
    local_2e8.DataPtr = local_410;
  }
  if (local_2e8.DataPtr != (wchar_t *)0x0) {
    sVar20 = wcslen(local_2e8.DataPtr);
    local_2e8.Size = (int)sVar20;
  }
  local_2d0 = 0x1a;
  local_2d8 = L"Binaries/ThirdParty/Win64/";
  FPaths::CombineInternal(&local_330,&local_2e8,2);
  pwVar21 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
  ::FString::FString(&local_420,pwVar21);
  if (((4 < (byte)LogDLSS._0_1_) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS),
      4 < (byte)LogDLSS._0_1_)) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS),
     4 < (byte)LogDLSS._0_1_)) {
    RHIVendorIdToString();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
  }
  pTVar12 = CVarNGXEnable.Ref;
  bVar14 = IsInParallelGameThread();
  if (bVar14) {
LAB_14de1e129:
    pwVar21 = pwVar36;
  }
  else {
    bVar14 = IsInGameThread();
    pwVar21 = (wchar_t *)&DAT_00000004;
    if (bVar14) goto LAB_14de1e129;
  }
  pTVar13 = CVarNGXEnableAllowCommandLine.Ref;
  bVar14 = *(int *)((longlong)pwVar21 + (longlong)pTVar12) != 0;
  bVar15 = IsInParallelGameThread();
  if (bVar15) {
LAB_14de1e14f:
    pwVar21 = pwVar36;
  }
  else {
    bVar15 = IsInGameThread();
    pwVar21 = (wchar_t *)&DAT_00000004;
    if (bVar15) goto LAB_14de1e14f;
  }
  if (*(int *)((longlong)pwVar21 + (longlong)pTVar13) != 0) {
    pwVar21 = FCommandLine::Get();
    bVar15 = FParse::Param(pwVar21,L"ngxenable");
    if (bVar15) {
      bVar14 = true;
    }
    else {
      pwVar21 = FCommandLine::Get();
      bVar15 = FParse::Param(pwVar21,L"ngxdisable");
      if (bVar15) {
        bVar14 = false;
      }
    }
  }
  pTVar12 = CVarNGXDLSSMinimumWindowsBuildVersion.Ref;
  bVar15 = IsInParallelGameThread();
  if (bVar15) {
LAB_14de1e1ad:
    pwVar21 = pwVar36;
  }
  else {
    bVar15 = IsInGameThread();
    pwVar21 = (wchar_t *)&DAT_00000004;
    if (bVar15) goto LAB_14de1e1ad;
  }
  uVar4 = *(uint *)((longlong)pwVar21 + (longlong)pTVar12);
  bVar15 = IsRHIDeviceNVIDIA();
  if (!bVar15) {
    if (4 < (byte)LogDLSS._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    }
    this->NGXSupport = NotSupportedIncompatibleHardware;
    goto LAB_14de1e86d;
  }
  if ((0 < (int)uVar4) && (bVar15 = FWindowsPlatformMisc::VerifyWindowsVersion(10,0,uVar4), !bVar15)
     ) {
    if (4 < (byte)LogDLSS._0_1_) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_NVIDIA_NGX_DLSS_152d39858,
                 (FLogCategoryBase *)&LogDLSS);
    }
    this->NGXSupport = NotSupportedOperatingSystemOutOfDate;
    goto LAB_14de1e86d;
  }
  if (bVar14) {
    pTVar22 = IsEngineExecutionModeSupported(&local_298);
    if (*(char *)pTVar22 == '\0') {
      if ((byte)LogDLSS._0_1_ < 5) goto LAB_14de1e869;
      IsEngineExecutionModeSupported(&local_288);
      pFVar32 = &::LOG_Static;
    }
    else {
      iVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
      if ((iVar17 == 3) &&
         (pUVar23 = GetDefault<UDLSSSettings>(), pUVar23->bEnableDLSSD3D12 != false)) {
        bVar14 = true;
        bVar15 = false;
LAB_14de1e2a9:
        bVar10 = false;
LAB_14de1e2ae:
        bVar9 = bVar15;
        EVar34 = Supported;
      }
      else {
        bVar14 = false;
        if ((iVar17 == 2) &&
           (pUVar23 = GetDefault<UDLSSSettings>(), pUVar23->bEnableDLSSD3D11 != false)) {
          bVar15 = true;
          goto LAB_14de1e2a9;
        }
        bVar9 = false;
        if ((iVar17 == 4) &&
           (pUVar23 = GetDefault<UDLSSSettings>(), pUVar23->bEnableDLSSVulkan != false)) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        bVar15 = false;
        if (bVar10) goto LAB_14de1e2ae;
        EVar34 = NotSupported;
      }
      this->NGXSupport = EVar34;
      if (EVar34 == Supported) {
        if (bVar9) {
          pwVar21 = L"NGXD3D11RHI";
        }
        else if (bVar14) {
          pwVar21 = L"NGXD3D12RHI";
        }
        else {
          pwVar21 = L"NGXVulkanRHI";
          if (!bVar10) {
            pwVar21 = pwVar36;
          }
        }
        pUVar23 = GetDefault<UDLSSSettings>();
        uVar4 = pUVar23->NVIDIANGXApplicationId;
        if (4 < (byte)LogDLSS._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
        }
        if (uVar4 == 0) {
          if (4 < (byte)LogDLSS._0_1_) {
            pFVar32 = &::LOG_Static;
            goto LAB_14de1e376;
          }
        }
        else if (4 < (byte)LogDLSS._0_1_) {
          pFVar32 = &::LOG_Static;
LAB_14de1e376:
          UE::Logging::Private::BasicLog<5>(pFVar32,(FLogCategoryBase *)&LogDLSS);
        }
        pUVar23 = GetDefault<UDLSSSettings>();
        bVar14 = pUVar23->bAllowOTAUpdate;
        pwVar24 = FCommandLine::Get();
        bVar15 = FParse::Param(pwVar24,L"ngxenableota");
        if (bVar15) {
          pwVar24 = (wchar_t *)&DAT_00000001;
        }
        else {
          pwVar24 = FCommandLine::Get();
          bVar15 = FParse::Param(pwVar24,L"ngxdisableota");
          pwVar24 = (wchar_t *)(ulonglong)bVar14;
          if (bVar15) {
            pwVar24 = pwVar36;
          }
        }
        pwVar36 = local_410;
        local_3e8.Data = (FScriptContainerElement *)0x0;
        local_3dc = 0;
        local_3d8 = (FDynamicRHI *)0x0;
        local_3d0 = 0;
        local_3c8 = 0;
        local_3c0 = (void *)0x0;
        local_3b8 = 0;
        local_3b0 = (void *)0x0;
        local_3a8 = 0;
        local_3a0 = 1;
        if (local_408 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_408,0,&local_3e8,local_408,&local_3dc);
          memcpy(local_3e8.Data,pwVar36,(longlong)local_408 * 2);
        }
        pTVar12 = CVarNGXBinarySearchOrder.Ref;
        local_3d8 = GDynamicRHI;
        bVar14 = IsInParallelGameThread();
        if ((bVar14) || (bVar14 = IsInGameThread(), bVar14)) {
          lVar25 = 0;
        }
        else {
          lVar25 = 4;
        }
        pTVar13 = CVarNGXProjectIdentifier.Ref;
        iVar17 = 3;
        if (*(int *)((longlong)pTVar12->ShadowedValue + lVar25) < 3) {
          iVar17 = *(int *)((longlong)pTVar12->ShadowedValue + lVar25);
        }
        iVar16 = 0;
        if (0 < iVar17) {
          iVar16 = iVar17;
        }
        local_3d0 = CONCAT44(local_3d0._4_4_,iVar16);
        bVar14 = IsInParallelGameThread();
        if ((bVar14) || (bVar14 = IsInGameThread(), lVar25 = 4, bVar14)) {
          lVar25 = 0;
        }
        iVar17 = 2;
        if (*(int *)((longlong)pTVar13->ShadowedValue + lVar25) < 2) {
          iVar17 = *(int *)((longlong)pTVar13->ShadowedValue + lVar25);
        }
        iVar16 = 0;
        if (0 < iVar17) {
          iVar16 = iVar17;
        }
        local_3d0 = CONCAT44(iVar16,(undefined4)local_3d0);
        local_3c8 = uVar4;
        FEngineVersion::Current();
        FEngineVersion::Current();
        ::FString::PrintfImpl(&local_400,L"%u.%u");
        if (local_3c0 != (void *)0x0) {
          FMemory::Free(local_3c0);
        }
        local_3c0 = local_400.Data.AllocatorInstance.Data;
        local_400.Data.ArrayNum = 0;
        local_400.Data.ArrayMax = 0;
        local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this_00 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
        if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_00);
        }
        local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_430.Data.ArrayNum = 0;
        local_430.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[3].
                                      field_0x20,&local_430,Digits);
        if (local_3b0 != (void *)0x0) {
          FMemory::Free(local_3b0);
        }
        local_3b0 = local_430.Data.AllocatorInstance.Data;
        local_3a8._0_4_ = local_430.Data.ArrayNum;
        local_3a8._4_4_ = local_430.Data.ArrayMax;
        local_430.Data.ArrayNum = 0;
        local_430.Data.ArrayMax = 0;
        local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a0 = SUB81(pwVar24,0);
        pFVar26 = ::FName::FName(local_2c8,pwVar21);
        FVar6 = *pFVar26;
        this_01 = FModuleManager::Get();
        pIVar27 = FModuleManager::LoadModuleChecked(this_01,FVar6);
        puVar28 = (undefined8 *)
                  (**(code **)((longlong)*pIVar27 + 0x40))(pIVar27,&local_348,&local_3e8);
        pTVar1 = &this->NGXRHIExtensions;
        if (pTVar1 != (TUniquePtr<NGXRHI,TDefaultDelete<NGXRHI>_> *)puVar28) {
          pNVar33 = pTVar1->Ptr;
          pTVar1->Ptr = (NGXRHI *)*puVar28;
          *puVar28 = 0;
          if (pNVar33 != (NGXRHI *)0x0) {
            (**(code **)pNVar33->_padding_)(pNVar33,1);
          }
        }
        if (local_348 != (undefined8 *)0x0) {
          (**(code **)*local_348)(local_348,1);
        }
        bVar14 = NGXRHI::bIsIncompatibleAPICaptureToolActive;
        if ((((pTVar1->Ptr == (NGXRHI *)0x0) ||
             ((pTVar1->Ptr->NGXQueryFeature).bIsDlssSRAvailable == false)) &&
            (NGXRHI::bIsIncompatibleAPICaptureToolActive != false)) && (2 < (byte)LogDLSS._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
        }
        pNVar33 = pTVar1->Ptr;
        if (pNVar33 == (NGXRHI *)0x0) {
          if (4 < (byte)LogDLSS._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
          }
          this->NGXSupport = NotSupported;
        }
        else {
          if ((pNVar33->NGXQueryFeature).bIsDlssSRAvailable == false) {
            pEVar2 = &this->DLSSSRSupport;
            if (bVar14 == false) {
              NVar5 = (pNVar33->NGXQueryFeature).NGXInitResult;
              if (NVar5 == NVSDK_NGX_Result_FAIL_OutOfDate) {
                *pEVar2 = NotSupportedDriverOutOfDate;
                this->DLSSRRSupport = NotSupportedDriverOutOfDate;
              }
              else if (NVar5 == NVSDK_NGX_Result_FAIL_FeatureNotSupported) {
                *pEVar2 = NotSupportedIncompatibleHardware;
                this->DLSSRRSupport = NotSupportedIncompatibleHardware;
              }
              else {
                *pEVar2 = NotSupported;
                this->DLSSRRSupport = NotSupported;
              }
            }
            else {
              *pEVar2 = NotSupportedIncompatibleAPICaptureToolActive;
              this->DLSSRRSupport = NotSupportedIncompatibleAPICaptureToolActive;
            }
          }
          else {
            if ((((pNVar33->NGXQueryFeature).NGXInitResult & 0xfff00000) == NVSDK_NGX_Result_Fail)
               && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(((NGXRHIExtensions->GetNGXInitResult()) & 0xFFF00000) != NVSDK_NGX_Result_Fail)"
                                       ,
                                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSS.cpp"
                                       ,0x13f,L""), bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pNVar33 = pTVar1->Ptr;
            this->DLSSSRSupport = Supported;
            if ((pNVar33->NGXQueryFeature).bIsDlssRRAvailable != false) {
              this->DLSSRRSupport = Supported;
            }
          }
          uVar3._0_1_ = (pNVar33->NGXQueryFeature).NGXDriverRequirements.DriverUpdateRequired;
          uVar3._1_3_ = *(undefined3 *)&(pNVar33->NGXQueryFeature).NGXDriverRequirements.field_0x1;
          uVar3._4_4_ = (pNVar33->NGXQueryFeature).NGXDriverRequirements.MinDriverVersionMajor;
          iVar17 = (pNVar33->NGXQueryFeature).NGXDriverRequirements.MinDriverVersionMinor;
          this->MinSRDriverVersionMinor = iVar17;
          this->MinSRDriverVersionMajor = uVar3._4_4_;
          if ((undefined1)uVar3 != '\0') {
            local_398 = uVar3;
            if (this->NGXSupport == Supported) {
              if (4 < (byte)LogDLSS._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
                pNVar33 = pTVar1->Ptr;
              }
            }
            else {
              if (4 < (byte)LogDLSS._0_1_) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
                pNVar33 = pTVar1->Ptr;
              }
              this->DLSSSRSupport = NotSupportedDriverOutOfDate;
              this->DLSSRRSupport = NotSupportedDriverOutOfDate;
              this->MinSRDriverVersionMajor = uVar3._4_4_;
              this->MinSRDriverVersionMinor = iVar17;
            }
          }
          local_398._0_1_ =
               (pNVar33->NGXQueryFeature).NGXDLSSRRDriverRequirements.DriverUpdateRequired;
          local_398._1_3_ =
               *(undefined3 *)&(pNVar33->NGXQueryFeature).NGXDLSSRRDriverRequirements.field_0x1;
          local_398._4_4_ =
               (pNVar33->NGXQueryFeature).NGXDLSSRRDriverRequirements.MinDriverVersionMajor;
          this->MinRRDriverVersionMinor =
               (pNVar33->NGXQueryFeature).NGXDLSSRRDriverRequirements.MinDriverVersionMinor;
          this->MinRRDriverVersionMajor = local_398._4_4_;
          if ((undefined1)local_398 != '\0') {
            if (4 < (byte)LogDLSS._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
            }
            this->DLSSRRSupport = NotSupportedDriverOutOfDate;
          }
        }
        if ((this->NGXSupport != Supported) && (4 < (byte)LogDLSS._0_1_)) {
          RHIVendorIdToString();
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
        }
        if (local_3b0 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b0);
        }
        if (local_3c0 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c0);
        }
        if (local_3e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data);
        }
        goto LAB_14de1e86d;
      }
      if ((byte)LogDLSS._0_1_ < 5) goto LAB_14de1e869;
      pFVar32 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<5>(pFVar32,(FLogCategoryBase *)&LogDLSS);
  }
  else if (4 < (byte)LogDLSS._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
  }
LAB_14de1e869:
  this->NGXSupport = NotSupported;
LAB_14de1e86d:
  pFVar35 = (FDLSSDenoiser *)0x0;
  if (this->DLSSSRSupport == Supported) {
    pFVar29 = ::operator_new(0x10);
    pFVar30 = pFVar35;
    if (pFVar29 != (FDLSSUpscaler *)0x0) {
      pFVar30 = (FDLSSDenoiser *)FDLSSUpscaler::FDLSSUpscaler(pFVar29,(this->NGXRHIExtensions).Ptr);
    }
    pFVar7 = (FDLSSDenoiser *)(this->DLSSUpscaler).Ptr;
    if ((pFVar7 != pFVar30) &&
       ((this->DLSSUpscaler).Ptr = (FDLSSUpscaler *)pFVar30, pFVar7 != (FDLSSDenoiser *)0x0)) {
      pFVar7->_padding_ = (longlong)&___7ICustomResourcePool__6B_;
      ::operator_delete(pFVar7,0x10);
    }
    if (((this->DLSSUpscaler).Ptr == (FDLSSUpscaler *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("DLSSUpscaler",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSS.cpp"
                            ,0x193,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (FDLSSUpscaler::NumRuntimeQualityModes == 0) {
      if (4 < (byte)LogDLSS._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
      }
      this->DLSSSRSupport = NotSupported;
      this->DLSSRRSupport = NotSupported;
      pFVar29 = (this->DLSSUpscaler).Ptr;
      if (pFVar29 != (FDLSSUpscaler *)0x0) {
        (this->DLSSUpscaler).Ptr = (FDLSSUpscaler *)0x0;
        pFVar29->_padding_ = (longlong)&___7ICustomResourcePool__6B_;
        ::operator_delete(pFVar29,0x10);
      }
      pNVar33 = (this->NGXRHIExtensions).Ptr;
      if (pNVar33 != (NGXRHI *)0x0) {
        (this->NGXRHIExtensions).Ptr = (NGXRHI *)0x0;
        (**(code **)pNVar33->_padding_)(pNVar33,1);
      }
    }
  }
  if (4 < (byte)LogDLSS._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
  }
  if (this->DLSSSRSupport == Supported) {
    this_02 = ::operator_new(0x28);
    if (this_02 == (FSceneViewExtensionBase *)0x0) {
      this_02 = (FSceneViewExtensionBase *)0x0;
    }
    else {
      FSceneViewExtensionBase::FSceneViewExtensionBase(this_02,&local_438);
      this_02->_padding_ = (longlong)&___7FDLSSUpscalerViewExtension__6B_;
      if ((((this_02->_padding_ != 0) && (this_02->_padding_ != 0)) &&
          (0 < *(int *)(this_02->_padding_ + 8))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_340.Object = (FDLSSUpscalerViewExtension *)this_02;
    TSharedRef<FDLSSUpscalerViewExtension,1>::
    TSharedRef<FDLSSUpscalerViewExtension,1><FDLSSUpscalerViewExtension>(&local_378,&local_340);
    local_308.Object = (ISceneViewExtension *)local_378.Object;
    local_308.SharedReferenceCount.ReferenceController =
         local_378.SharedReferenceCount.ReferenceController;
    if (local_378.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSceneViewExtensions::RegisterExtension(&local_308);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308.SharedReferenceCount.ReferenceController);
    local_388 = local_378.Object;
    local_380.ReferenceController = local_378.SharedReferenceCount.ReferenceController;
    if (local_378.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->DLSSUpscalerViewExtension != (TSharedPtr<FDLSSUpscalerViewExtension,1> *)&local_388)
    {
      (this->DLSSUpscalerViewExtension).Object = local_378.Object;
      local_388 = (FDLSSUpscalerViewExtension *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DLSSUpscalerViewExtension).SharedReferenceCount,&local_380);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_380.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_378.SharedReferenceCount.ReferenceController);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar31 = IConsoleManager::Get();
      ::CVar = (IConsoleVariable *)
               (**(code **)((longlong)*pIVar31 + 0xc0))(pIVar31,L"r.Reflections.Denoiser",1);
      _Init_thread_footer(&::_TSS0);
    }
    if (((::CVar != (IConsoleVariable *)0x0) &&
        (iVar17 = (**(code **)(*(longlong *)::CVar + 200))(), iVar17 != 2)) &&
       (2 < (byte)LogDLSS._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    }
    pFVar30 = ::operator_new(0x18);
    pIVar11 = GScreenSpaceDenoiser;
    if (pFVar30 != (FDLSSDenoiser *)0x0) {
      pFVar29 = (this->DLSSUpscaler).Ptr;
      pFVar30->_padding_ = (longlong)&___7FDLSSDenoiser__6B_;
      pFVar30->WrappedDenoiser = pIVar11;
      pFVar30->Upscaler = pFVar29;
      if ((pFVar29 == (FDLSSUpscaler *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Upscaler",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSDenoiser.cpp"
                              ,0x3c,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar35 = pFVar30;
      if ((pFVar30->WrappedDenoiser == (IScreenSpaceDenoiser *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("WrappedDenoiser",
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSDenoiser.cpp"
                              ,0x3d,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar30 = (this->DLSSDenoiser).Ptr;
    if ((pFVar30 != pFVar35) &&
       ((this->DLSSDenoiser).Ptr = pFVar35, pFVar30 != (FDLSSDenoiser *)0x0)) {
      pFVar30->_padding_ = (longlong)&___7IScreenSpaceDenoiser__6B_;
      ::operator_delete(pFVar30,0x18);
    }
    GScreenSpaceDenoiser = (IScreenSpaceDenoiser *)(this->DLSSDenoiser).Ptr;
    if (4 < (byte)LogDLSS._0_1_) {
      (**(code **)((longlong)*((this->DLSSDenoiser).Ptr)->WrappedDenoiser + 8))();
      FDLSSUpscaler::IsDLSSActive(((this->DLSSDenoiser).Ptr)->Upscaler);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    }
    if ((GCustomResourcePool != (ICustomResourcePool *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("GCustomResourcePool == nullptr",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSS.cpp"
                            ,0x1b9,
                            L"GCustomResourcePool is already in use. Please check that only one upscaling plugin is active."
                           ), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    GCustomResourcePool = (ICustomResourcePool *)(this->DLSSUpscaler).Ptr;
  }
  this_03 = ::operator_new(0x28);
  if (this_03 == (FNGXAutomationViewExtension *)0x0) {
    local_338.Object = (FNGXAutomationViewExtension *)0x0;
  }
  else {
    local_338.Object = FNGXAutomationViewExtension::FNGXAutomationViewExtension(this_03,local_437);
    if ((((local_338.Object != (FNGXAutomationViewExtension *)0x0) &&
         (*(longlong *)&(local_338.Object)->field_0x8 != 0)) &&
        (*(longlong *)&(local_338.Object)->field_0x10 != 0)) &&
       ((0 < *(int *)(*(longlong *)&(local_338.Object)->field_0x10 + 8) &&
        (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar14)))) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  TSharedRef<FNGXAutomationViewExtension,1>::
  TSharedRef<FNGXAutomationViewExtension,1><FNGXAutomationViewExtension>(&local_358,&local_338);
  local_2f8.Object = (ISceneViewExtension *)local_358.Object;
  local_2f8.SharedReferenceCount.ReferenceController =
       local_358.SharedReferenceCount.ReferenceController;
  if (local_358.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_2f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f8.SharedReferenceCount.ReferenceController);
  local_368 = local_358.Object;
  FStack_360.ReferenceController = local_358.SharedReferenceCount.ReferenceController;
  if (local_358.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->NGXAutomationViewExtension != (TSharedPtr<FNGXAutomationViewExtension,1> *)&local_368)
  {
    (this->NGXAutomationViewExtension).Object = local_358.Object;
    local_368 = (FNGXAutomationViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NGXAutomationViewExtension).SharedReferenceCount,&FStack_360);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_360.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_358.SharedReferenceCount.ReferenceController);
  if (this->DLSSSRSupport == Supported) {
    FDLSSTemporalUpscalerModularFeature::RegisterModularFeature();
  }
  if (4 < (byte)LogDLSS._0_1_) {
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDLSSModule::StartupModule",0x1a,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  if (local_410 != (wchar_t *)0x0) {
    FMemory::Free(local_410);
  }
  return;
}

// ShutdownModule @ 14de1ee50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDLSSModule::ShutdownModule(FDLSSModule *this)

{
  code *pcVar1;
  FDLSSDenoiser *pFVar2;
  FDLSSUpscaler *pFVar3;
  NGXRHI *pNVar4;
  IModularFeatures *pIVar5;
  FName *pFVar6;
  undefined1 auStackY_1a8 [32];
  FName local_178;
  FSharedReferencer<1> local_170;
  undefined8 local_168;
  FSharedReferencer<1> FStack_160;
  undefined8 local_158;
  FSharedReferencer<1> FStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (4 < (byte)LogDLSS._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDLSSModule::ShutdownModule",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  if (FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.Object !=
      (FDLSSTemporalUpscalerModularFeature *)0x0) {
    pIVar5 = IModularFeatures::Get();
    pcVar1 = *(code **)((longlong)*pIVar5 + 0x30);
    pFVar6 = ::FName::FName(&local_178,L"UpscalerModularFeature");
    (*pcVar1)(pIVar5,*pFVar6);
    local_170.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.Object =
         (FDLSSTemporalUpscalerModularFeature *)0x0;
    local_178.ComparisonIndex.Value = 0;
    local_178.Number = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&FDLSSTemporalUpscalerModularFeature::ModularFeatureSingleton.SharedReferenceCount,
               &local_170);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.ReferenceController);
  }
  local_168 = 0;
  FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->NGXAutomationViewExtension != (TSharedPtr<FNGXAutomationViewExtension,1> *)&local_168)
  {
    (this->NGXAutomationViewExtension).Object = (FNGXAutomationViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NGXAutomationViewExtension).SharedReferenceCount,&FStack_160);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_160.ReferenceController);
  if (this->DLSSSRSupport == Supported) {
    local_158 = 0;
    FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->DLSSUpscalerViewExtension != (TSharedPtr<FDLSSUpscalerViewExtension,1> *)&local_158)
    {
      (this->DLSSUpscalerViewExtension).Object = (FDLSSUpscalerViewExtension *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DLSSUpscalerViewExtension).SharedReferenceCount,&FStack_150);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_150.ReferenceController);
    if ((FDLSSUpscaler *)GCustomResourcePool == (this->DLSSUpscaler).Ptr) {
      GCustomResourcePool = (ICustomResourcePool *)0x0;
    }
    pFVar2 = (this->DLSSDenoiser).Ptr;
    if ((FDLSSDenoiser *)GScreenSpaceDenoiser == pFVar2) {
      if (4 < (byte)LogDLSS._0_1_) {
        (**(code **)((longlong)*pFVar2->WrappedDenoiser + 8))();
        FDLSSUpscaler::IsDLSSActive(((this->DLSSDenoiser).Ptr)->Upscaler);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
      }
      GScreenSpaceDenoiser = ((this->DLSSDenoiser).Ptr)->WrappedDenoiser;
      pFVar2 = (this->DLSSDenoiser).Ptr;
      if (pFVar2 != (FDLSSDenoiser *)0x0) {
        (this->DLSSDenoiser).Ptr = (FDLSSDenoiser *)0x0;
        pFVar2->_padding_ = (longlong)&___7IScreenSpaceDenoiser__6B_;
        ::operator_delete(pFVar2,0x18);
      }
    }
    if (6 < (byte)LogDLSS._0_1_) {
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDLSSUpscaler::ReleaseStaticResources",0x25,Yes);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    FDLSSUpscaler::ResolutionSettings.ArrayNum = 0;
    if (FDLSSUpscaler::ResolutionSettings.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,0,&FDLSSUpscaler::ResolutionSettings.AllocatorInstance,0,
                 &FDLSSUpscaler::ResolutionSettings.ArrayMax);
    }
    if (6 < (byte)LogDLSS._0_1_) {
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FDLSSUpscaler::ReleaseStaticResources",0x25,Yes);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    pFVar3 = (this->DLSSUpscaler).Ptr;
    if (pFVar3 != (FDLSSUpscaler *)0x0) {
      (this->DLSSUpscaler).Ptr = (FDLSSUpscaler *)0x0;
      pFVar3->_padding_ = (longlong)&___7ICustomResourcePool__6B_;
      ::operator_delete(pFVar3,0x10);
    }
    pNVar4 = (this->NGXRHIExtensions).Ptr;
    if (pNVar4 != (NGXRHI *)0x0) {
      (this->NGXRHIExtensions).Ptr = (NGXRHI *)0x0;
      (**(code **)pNVar4->_padding_)(pNVar4,1);
    }
  }
  if (4 < (byte)LogDLSS._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDLSSModule::ShutdownModule",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDLSS);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

// QueryDLSSSRSupport @ 14de1f210

EDLSSSupport __thiscall FDLSSModule::QueryDLSSSRSupport(FDLSSModule *this)

{
  return this->DLSSSRSupport;
}

// QueryDLSSRRSupport @ 14de1f220

EDLSSSupport __thiscall FDLSSModule::QueryDLSSRRSupport(FDLSSModule *this)

{
  return this->DLSSRRSupport;
}

// GetDLSSSRMinDriverVersion @ 14de1f230

void __thiscall FDLSSModule::GetDLSSSRMinDriverVersion(FDLSSModule *this,int *param_1,int *param_2)

{
  *param_1 = this->MinSRDriverVersionMajor;
  *param_2 = this->MinSRDriverVersionMinor;
  return;
}

// GetDLSSRRMinDriverVersion @ 14de1f250

void __thiscall FDLSSModule::GetDLSSRRMinDriverVersion(FDLSSModule *this,int *param_1,int *param_2)

{
  *param_1 = this->MinRRDriverVersionMajor;
  *param_2 = this->MinRRDriverVersionMinor;
  return;
}

// GetResolutionFractionForQuality @ 14de1f270

/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

float __thiscall FDLSSModule::GetResolutionFractionForQuality(FDLSSModule *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->DLSSSRSupport != Supported) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueryDLSSSRSupport() == EDLSSSupport::Supported",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSS.cpp"
                       ,0x21a,
                       L"GetResolutionFractionForQuality should only be called when DLSS is supported"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if (5 < param_1 + 2U) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Quality >= int32(EDLSSQualityMode::MinValue) && Quality <= int32(EDLSSQualityMode::MaxValue)"
                       ,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSS.cpp"
                       ,0x21b,
                       L"The Quality %d  argument of GetResolutionFractionForQuality is out of range and/or an unsupported DLSS quality mode"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FDLSSUpscaler::GetOptimalResolutionFractionForQuality((this->DLSSUpscaler).Ptr,param_1);
  return fVar3;
}

// GetDLSSUpscaler @ 14de1f300

FDLSSUpscaler * __thiscall FDLSSModule::GetDLSSUpscaler(FDLSSModule *this)

{
  return (this->DLSSUpscaler).Ptr;
}

// GetDLSSDenoiser @ 14de1f310

IScreenSpaceDenoiser * __thiscall FDLSSModule::GetDLSSDenoiser(FDLSSModule *this)

{
  return (IScreenSpaceDenoiser *)(this->DLSSDenoiser).Ptr;
}

// GetDLSSUpscalerViewExtension @ 14de1f320

TSharedPtr<ISceneViewExtension,1> * __thiscall
FDLSSModule::GetDLSSUpscalerViewExtension
          (FDLSSModule *this,TSharedPtr<ISceneViewExtension,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (ISceneViewExtension *)(this->DLSSUpscalerViewExtension).Object;
  pTVar1 = (this->DLSSUpscalerViewExtension).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetIsRRSupportedByRHI @ 14de1f350

bool __thiscall FDLSSModule::GetIsRRSupportedByRHI(FDLSSModule *this)

{
  NGXRHI *pNVar1;
  undefined1 uVar2;
  
  pNVar1 = (this->NGXRHIExtensions).Ptr;
  if (pNVar1 != (NGXRHI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014de1f35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pNVar1->_padding_ + 0x10))();
    return (bool)uVar2;
  }
  return false;
}

